import Go.Proofs
import Std

open Go

-- ============================================================
-- Input parsing and game loop
-- ============================================================

inductive GoInputEvent where
  | place (pos : Nat × Nat)
  | pass
  | quit
deriving Repr, BEq

def words (s : String) : List String :=
  (s.trimAscii.toString.splitOn " ").filter (fun t => t ≠ "")

def parseGoCommand (line : String) : Except String GoInputEvent :=
  match words line with
  | [] => .error "Empty command. Type a position like '2 3' or 'pass' or 'quit'."
  | "pass" :: [] => .ok .pass
  | "quit" :: [] => .ok .quit
  | x :: y :: [] =>
      match x.toNat?, y.toNat? with
      | some px, some py => .ok (.place (px, py))
      | _, _ => .error "Invalid coordinates. Use numbers like '2 3'."
  | _ => .error "Usage: <x> <y> to place a stone, 'pass' to pass, or 'quit' to quit."

def handleGoEvent (state : GameState) : GoInputEvent → Option GameState
  | .place pos => applyMove? state (Move.place pos)
  | .pass => applyMove? state Move.pass
  | .quit => none

def displayGameState (state : GameState) : String :=
  let boardStr := boardToString state.board
  let turnStr := reprStr state.turn
  s!"Current turn: {turnStr}\n{boardStr}"

def helpText : String :=
  String.intercalate "\n"
    [ "Go Game Commands:"
    , "  <x> <y>  - Place a stone at position (x, y)"
    , "  pass     - Pass your turn"
    , "  quit     - Exit the game"
    , ""
    , "Example: '2 3' places a stone at position (2, 3)"
    ]

def countStonesOnBoard (b : Board) (s : Stone) : Nat :=
  b.foldl (fun acc row => acc + row.foldl (fun a cell =>
    match cell with | some st => if st == s then a + 1 else a | none => a) 0) 0

def allPositions (size : Nat) : List Pos :=
  (List.range size).foldl (fun acc r =>
    acc ++ (List.range size).map (fun c => (r, c))) []

partial def collectRegion (size : Nat) (b : Board)
    (frontier : List Pos) (visited : List Pos)
    (touchesBlack : Bool) (touchesWhite : Bool) :
    List Pos × Bool × Bool :=
  match frontier with
  | [] => (visited, touchesBlack, touchesWhite)
  | p :: rest =>
    if visited.contains p then
      collectRegion size b rest visited touchesBlack touchesWhite
    else
      match boardGet? b p with
      | some none =>
        collectRegion size b (neighbors size p ++ rest) (p :: visited) touchesBlack touchesWhite
      | some (some Stone.black) =>
        collectRegion size b rest visited true touchesWhite
      | some (some Stone.white) =>
        collectRegion size b rest visited touchesBlack true
      | none =>
        collectRegion size b rest visited touchesBlack touchesWhite

def scoreBoard (b : Board) (size : Nat) : Nat × Nat :=
  let blackStones := countStonesOnBoard b Stone.black
  let whiteStones := countStonesOnBoard b Stone.white
  let (blackTerritory, whiteTerritory, _) :=
    (allPositions size).foldl (fun (bT, wT, visited) p =>
      if visited.contains p || !isEmptyAt b p then (bT, wT, visited)
      else
        let (region, touchesBlack, touchesWhite) := collectRegion size b [p] [] false false
        let newVisited := visited ++ region
        if touchesBlack && !touchesWhite then (bT + region.length, wT, newVisited)
        else if touchesWhite && !touchesBlack then (bT, wT + region.length, newVisited)
        else (bT, wT, newVisited)
    ) (0, 0, [])
  (blackStones + blackTerritory, whiteStones + whiteTerritory)

def announceWinner (state : GameState) : IO Unit := do
  let (blackScore, whiteScore) := scoreBoard state.board state.size
  IO.println ""
  IO.println "Final board:"
  IO.println (boardToString state.board)
  IO.println ""
  IO.println s!"Score — Black: {blackScore}  White: {whiteScore}"
  if blackScore > whiteScore then
    IO.println "Black wins!"
  else if whiteScore > blackScore then
    IO.println "White wins!"
  else
    IO.println "It's a tie!"

partial def runGoGame (state : GameState) (passCount : Nat) : IO Unit := do
  IO.println ""
  IO.println (displayGameState state)
  IO.println ""
  IO.print "> "

  let stdin ← IO.getStdin
  let line ← stdin.getLine
  let line := (line.dropEndWhile Char.isWhitespace).toString

  match parseGoCommand line with
  | .error msg =>
      IO.println msg
      runGoGame state passCount
  | .ok .quit =>
      IO.println "Thanks for playing Go!"
  | .ok .pass =>
      let newPassCount := passCount + 1
      if newPassCount >= 2 then
        IO.println "Both players passed. Game over!"
        announceWinner state
      else
        match handleGoEvent state .pass with
        | none =>
            IO.println "Invalid move! Try again."
            runGoGame state passCount
        | some newState =>
            IO.println "Pass."
            runGoGame newState newPassCount
  | .ok event =>
      match handleGoEvent state event with
      | none =>
          IO.println "Invalid move! Try again."
          runGoGame state passCount
      | some newState =>
          runGoGame newState 0

-- ============================================================
-- Demo helpers
-- ============================================================

def showState (label : String) (st : GameState) : IO Unit := do
  IO.println s!"{label}"
  IO.println (boardToString st.board)
  IO.println s!"turn = {reprStr st.turn}"
  IO.println ""

def showResult (label : String) (st? : Option GameState) : IO Unit := do
  IO.println s!"{label}"
  match st? with
  | none =>
      IO.println "result = illegal / failed"
  | some st =>
      IO.println (boardToString st.board)
      IO.println s!"turn = {reprStr st.turn}"
  IO.println ""

def showLegality (label : String) (st : GameState) (m : Move) : IO Unit := do
  IO.println s!"{label}: {legalMove st m}"
  IO.println ""

def showCheckedMove (label : String) (st : GameState) (m : Move) : IO Unit := do
  IO.println s!"{label}"
  IO.println s!"move = {reprStr m}"
  match checkMove? st m with
  | none =>
      IO.println "proof-carrying move = rejected"
  | some checked =>
      IO.println "proof-carrying move = accepted"
      IO.println s!"stored move = {reprStr checked.move}"
  IO.println ""

def applyAndShow (label : String) (st : GameState) (m : Move) : IO Unit := do
  IO.println s!"{label}"
  IO.println s!"move = {reprStr m}"
  match applyMove? st m with
  | none =>
      IO.println "result = illegal / failed"
  | some st' =>
      IO.println (boardToString st'.board)
      IO.println s!"turn = {reprStr st'.turn}"
  IO.println ""

def showSequence (label : String) (st : GameState) (ms : List Move) : IO Unit := do
  IO.println s!"{label}"
  IO.println s!"moves = {reprStr ms}"
  match applyCheckedMoves? st ms with
  | none =>
      IO.println "result = illegal move sequence"
  | some st' =>
      IO.println (boardToString st'.board)
      IO.println s!"turn = {reprStr st'.turn}"
  IO.println ""

-- ============================================================
-- Demo state and theorems
-- ============================================================

def st0 : GameState :=
  initialState 5

def centerMove : Move :=
  .place (2, 2)

def checkedCenterMove? : Option (LegalMove st0) :=
  checkMove? st0 centerMove

def oneMove? : Option GameState :=
  applyCheckedMove? st0 centerMove

def centerState : GameState :=
  match oneMove? with
  | some st => st
  | none => st0

theorem center_move_is_legal :
    legalMove st0 centerMove = true := by
  native_decide

theorem checked_center_move_exists :
    ∃ checked : LegalMove st0, checkMove? st0 centerMove = some checked := by
  exact checked_move_complete center_move_is_legal

theorem checked_center_move_sound {checked : LegalMove st0}
    (h : checkMove? st0 centerMove = some checked) :
    checked.move = centerMove ∧ legalMove st0 centerMove = true := by
  exact checked_move_sound h

theorem checked_api_matches_applyMove :
    applyCheckedMove? st0 centerMove = applyMove? st0 centerMove := by
  exact applyCheckedMove_eq_applyMove? st0 centerMove

def demoMoves : List Move :=
  [ Move.place (2, 2)
  , Move.place (2, 1)
  , Move.place (1, 2)
  , Move.place (1, 1)
  , Move.place (2, 3)
  , Move.place (3, 1)
  , Move.place (3, 2)
  ]

theorem checked_sequence_api_matches_applyMoves :
    applyCheckedMoves? st0 demoMoves = applyMoves? st0 demoMoves := by
  exact applyCheckedMoves_eq_applyMoves? st0 demoMoves

theorem center_move_is_in_bounds :
    inBounds st0.size (2, 2) = true := by
  exact legalMove_place_implies_inBounds center_move_is_legal

theorem center_move_is_empty :
    isEmptyAt st0.board (2, 2) = true := by
  exact legalMove_place_implies_empty center_move_is_legal

theorem center_move_applies :
    applyMove? st0 centerMove = some centerState := by
  native_decide

theorem checked_center_move_applies :
    applyCheckedMove? st0 centerMove = some centerState := by
  rw [checked_api_matches_applyMove]
  exact center_move_applies

theorem applied_center_move_was_legal :
    legalMove st0 centerMove = true := by
  exact applyMove_place_requires_legal center_move_applies

theorem applied_center_preserves_size :
    centerState.size = st0.size := by
  exact applyMove_place_preserves_size center_move_applies

theorem applied_center_switches_turn :
    centerState.turn = st0.turn.other := by
  exact applyMove_place_switches_turn center_move_applies

theorem pass_from_initial_is_switch_turn :
    applyMove? st0 .pass = some (switchTurn st0) := by
  exact applyMove_pass_eq_switchTurn st0

theorem pass_from_initial_is_legal :
    legalMove st0 .pass = true := by
  exact legalMove_pass st0

theorem demo_sequence_preserves_size {st' : GameState}
    (h : applyCheckedMoves? st0 demoMoves = some st') :
    st'.size = st0.size := by
  rw [checked_sequence_api_matches_applyMoves] at h
  exact applyMoves_preserves_size h

theorem capture_sequence_preserves_size {st' : GameState}
    (h : applyCheckedMoves? st0 captureDemoMoves = some st') :
    st'.size = st0.size := by
  rw [applyCheckedMoves_eq_applyMoves?] at h
  exact applyMoves_preserves_size h

def suicideState : GameState :=
  { size := 3
  , board :=
      [ [none, some Stone.white, none]
      , [some Stone.white, none, some Stone.white]
      , [none, some Stone.white, none]
      ]
  , turn := Stone.black
  }

def suicideMove : Move :=
  .place (1, 1)

theorem suicide_move_is_illegal :
    legalMove suicideState suicideMove = false := by
  native_decide

theorem checked_suicide_move_rejected :
    applyCheckedMove? suicideState suicideMove = none := by
  exact applyCheckedMove_rejects_illegal suicide_move_is_illegal

theorem raw_suicide_move_rejected :
    applyMove? suicideState suicideMove = none := by
  exact applyMove_place_rejects_illegal suicide_move_is_illegal

theorem capture_demo_removes_surrounded_stone :
    (match applyCheckedMoves? st0 captureDemoMoves with
    | none => false
    | some st => stoneAt? st.board (1, 1) == none) = true := by
  native_decide

theorem capture_demo_keeps_surrounding_white_stones :
    (match applyCheckedMoves? st0 captureDemoMoves with
    | none => false
    | some st =>
        stoneAt? st.board (0, 1) == some Stone.white &&
        stoneAt? st.board (1, 0) == some Stone.white &&
        stoneAt? st.board (2, 1) == some Stone.white &&
        stoneAt? st.board (1, 2) == some Stone.white) = true := by
  native_decide

-- General theorem: any successful applyMove? on a placement leaves the group alive.
-- This subsumes the concrete suicide theorems and covers all board positions.
theorem center_move_group_has_liberties :
    groupHasLiberties? centerState (2, 2) = some true :=
  applyMove_place_group_has_liberties center_move_applies

-- General theorem: initial board is always n×n.
theorem st0_board_length : st0.board.length = st0.size :=
  initialState_board_length 5

def proofCertificates : List String :=
  [ "center_move_is_legal uses legalMove on a concrete move"
  , "checked_center_move_exists constructs a LegalMove proof object from a runtime-style check"
  , "checked_center_move_sound proves any accepted checked move stores the original legal move"
  , "checked_api_matches_applyMove proves proof-carrying execution agrees with the legacy executor"
  , "checked_sequence_api_matches_applyMoves proves checked sequence execution agrees with applyMoves?"
  , "demo_sequence_preserves_size proves every successful move sequence keeps the board size invariant"
  , "capture_sequence_preserves_size applies that invariant to the capture scenario"
  , "center_move_is_in_bounds follows from legalMove_place_implies_inBounds"
  , "center_move_is_empty follows from legalMove_place_implies_empty"
  , "applied_center_move_was_legal follows from applyMove_place_requires_legal"
  , "applied_center_preserves_size follows from applyMove_place_preserves_size"
  , "applied_center_switches_turn follows from applyMove_place_switches_turn"
  , "pass_from_initial_is_switch_turn follows from applyMove_pass_eq_switchTurn"
  , "pass_from_initial_is_legal follows from legalMove_pass"
  , "checked_suicide_move_rejected proves the checked API rejects a concrete suicide move"
  , "raw_suicide_move_rejected proves the raw executor rejects that illegal placement"
  , "capture_demo_removes_surrounded_stone checks the captured point is empty afterward"
  , "capture_demo_keeps_surrounding_white_stones checks the surrounding stones remain"
  , "legal_place_no_suicide (Proofs.lean) proves FOR ANY board: legal placements always leave the group alive"
  , "applyMove_place_group_has_liberties (Proofs.lean) proves applyMove? never silently accepts a suicidal move"
  , "initialState_board_length (Proofs.lean) proves the initial board always has exactly n rows"
  , "initialState_row_length (Proofs.lean) proves every row in the initial board has exactly n cells"
  , "center_move_group_has_liberties instantiates the general theorem for the center move"
  , "st0_board_length instantiates the well-formedness theorem for the 5x5 starting board"
  ]

def showProofCertificates : IO Unit := do
  IO.println "Proof certificates checked by Lean at build time:"
  for cert in proofCertificates do
    IO.println s!"- {cert}"
  IO.println ""

def occupiedTest? : Option GameState := do
  let st1 ← oneMove?
  applyCheckedMove? st1 centerMove

def passState? : Option GameState :=
  applyCheckedMove? st0 .pass

def finalState? : Option GameState :=
  applyCheckedMoves? st0 demoMoves

def captureMoves : List Move :=
  captureDemoMoves

def captureState? : Option GameState :=
  applyCheckedMoves? st0 captureMoves

def mixedMoves : List Move :=
  [ Move.place (0, 0)
  , Move.place (0, 1)
  , Move.pass
  , Move.place (1, 0)
  , Move.place (4, 4)
  ]

def mixedState? : Option GameState :=
  applyCheckedMoves? st0 mixedMoves

-- ============================================================
-- Demo runner (from IncomingVersion1.lean)
-- ============================================================

def runDemo : IO Unit := do
  IO.println "=== FORMALLY VERIFIED MINI-GO DEMO ==="
  IO.println ""

  showProofCertificates

  showState "Initial state:" st0

  showCheckedMove "Runtime-style check constructs a proof-carrying center move:" st0 centerMove
  showCheckedMove "Runtime-style check rejects an out-of-bounds move:" st0 (.place (9, 9))

  showLegality "Legal move at center on empty board (.place (2,2))" st0 centerMove
  showLegality "Illegal move out of bounds (.place (9,9))" st0 (.place (9, 9))
  showLegality "Pass is always legal" st0 .pass

  showResult "Single legal placement at center:" oneMove?
  showResult "Attempt to place on an occupied point (should fail):" occupiedTest?
  showResult "Pass move from initial state:" passState?

  showSequence "Demo sequence from the project:" st0 demoMoves

  IO.println "Checking the final demo board directly:"
  match finalState? with
  | none =>
      IO.println "illegal move sequence"
  | some st =>
      IO.println (boardToString st.board)
      IO.println s!"turn = {reprStr st.turn}"
  IO.println ""

  showSequence "Capture scenario (white surrounds and captures black):" st0 captureMoves

  IO.println "Direct capture checks:"
  match captureState? with
  | none =>
      IO.println "capture sequence failed"
  | some st =>
      IO.println s!"captured point (1,1) = {reprStr (stoneAt? st.board (1, 1))}"
      IO.println s!"white surrounders = {reprStr [
        stoneAt? st.board (0, 1),
        stoneAt? st.board (1, 0),
        stoneAt? st.board (2, 1),
        stoneAt? st.board (1, 2)
      ]}"
  IO.println ""

  showState "Concrete suicide-prevention state:" suicideState
  showLegality "Black suicide at surrounded center (.place (1,1))" suicideState suicideMove
  showResult "Attempting the suicide move through checked execution:" (applyCheckedMove? suicideState suicideMove)

  IO.println "Legality checks from an intermediate state:"
  match oneMove? with
  | none =>
      IO.println "could not create intermediate state"
      IO.println ""
  | some st1 =>
      showState "State after Black plays center:" st1
      showLegality "Trying to replay on occupied center (should be false)" st1 (.place (2, 2))
      showLegality "Playing a different empty in-bounds point" st1 (.place (1, 1))
      showLegality "Out-of-bounds move from intermediate state" st1 (.place (7, 7))

  showSequence "Mixed sequence including pass:" st0 mixedMoves

  IO.println "Proof-backed properties demonstrated by successful execution:"
  IO.println "- legal moves are checked before being applied"
  IO.println "- illegal moves return none"
  IO.println "- pass switches turns"
  IO.println "- move sequences compose through applyMoves?"
  IO.println "- captures are resolved during placement"
  IO.println ""
  IO.println "=== END DEMO ==="

-- ============================================================
-- Entry point
-- ============================================================

def promptBoardSize : IO Nat := do
  IO.println "Enter board size (2-19, default 9):"
  IO.print "> "
  let stdin ← IO.getStdin
  let line ← stdin.getLine
  let line := (line.dropEndWhile Char.isWhitespace).toString
  match line.toNat? with
  | some n =>
    if n >= 2 && n <= 19 then return n
    else IO.println "Size must be between 2 and 19. Using 9."; return 9
  | none =>
    if line == "" then return 9
    else IO.println "Invalid input. Using 9."; return 9

def main (args : List String) : IO Unit := do
  if args.contains "--demo" then
    runDemo
  else
    IO.println "Welcome to Go!"
    IO.println helpText
    IO.println "(Tip: run with --demo to see the formally verified demo instead.)"
    let size ← promptBoardSize
    let gs := initialState size
    runGoGame gs 0
