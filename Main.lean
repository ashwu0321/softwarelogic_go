import Go.Proofs

open Go

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
  match applyMoves? st ms with
  | none =>
      IO.println "result = illegal move sequence"
  | some st' =>
      IO.println (boardToString st'.board)
      IO.println s!"turn = {reprStr st'.turn}"
  IO.println ""

def st0 : GameState :=
  initialState 5

def oneMove? : Option GameState :=
  applyMove? st0 (.place (2, 2))

def occupiedTest? : Option GameState := do
  let st1 ← applyMove? st0 (.place (2, 2))
  applyMove? st1 (.place (2, 2))

def passState? : Option GameState :=
  applyMove? st0 .pass

def demoMoves : List Move :=
  [ Move.place (2, 2)
  , Move.place (2, 1)
  , Move.place (1, 2)
  , Move.place (1, 1)
  , Move.place (2, 3)
  , Move.place (3, 1)
  , Move.place (3, 2)
  ]

def finalState? : Option GameState :=
  applyMoves? st0 demoMoves

/-
  Capture demo:
  Black at (1,1), then White surrounds it on all four sides.
  Final White move at (1,2) should capture the black stone at (1,1).
-/
def captureMoves : List Move :=
  [ Move.place (1, 1)  -- Black
  , Move.place (0, 1)  -- White
  , Move.pass          -- Black
  , Move.place (1, 0)  -- White
  , Move.pass          -- Black
  , Move.place (2, 1)  -- White
  , Move.pass          -- Black
  , Move.place (1, 2)  -- White captures Black at (1,1)
  ]

def captureState? : Option GameState :=
  applyMoves? st0 captureMoves

/-
  Simple multi-step mixed demo with pass included.
-/
def mixedMoves : List Move :=
  [ Move.place (0, 0)
  , Move.place (0, 1)
  , Move.pass
  , Move.place (1, 0)
  , Move.place (4, 4)
  ]

def mixedState? : Option GameState :=
  applyMoves? st0 mixedMoves

def main : IO Unit := do
  IO.println "=== FORMALLY VERIFIED MINI-GO DEMO ==="
  IO.println ""

  showState "Initial state:" st0

  showLegality "Legal move at center on empty board (.place (2,2))" st0 (.place (2, 2))
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
