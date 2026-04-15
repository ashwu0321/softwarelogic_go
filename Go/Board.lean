import Go.Basic

namespace Go

def inBounds (size : Nat) (p : Pos) : Bool :=
  p.1 < size && p.2 < size

def getAt? (xs : List α) (i : Nat) : Option α :=
  if h : i < xs.length then some (xs.get ⟨i, h⟩) else none

def setAt? (xs : List α) (i : Nat) (val : α) : Option (List α) :=
  match xs, i with
  | [], _ => none
  | _ :: rest, 0 => some (val :: rest)
  | x :: rest, i + 1 =>
      match setAt? rest i val with
      | some rest' => some (x :: rest')
      | none => none

def boardGet? (b : Board) (p : Pos) : Option (Option Stone) := do
  let row ← getAt? b p.1
  getAt? row p.2

def boardSet? (b : Board) (p : Pos) (val : Option Stone) : Option Board := do
  let row ← getAt? b p.1
  let newRow ← setAt? row p.2 val
  setAt? b p.1 newRow

def isEmptyAt (b : Board) (p : Pos) : Bool :=
  match boardGet? b p with
  | some none => true
  | _ => false

def stoneAt? (b : Board) (p : Pos) : Option Stone :=
  match boardGet? b p with
  | some (some s) => some s
  | _ => none

def placeStone? (st : GameState) (p : Pos) : Option GameState := do
  if !inBounds st.size p then
    none
  else if !isEmptyAt st.board p then
    none
  else
    let newBoard ← boardSet? st.board p (some st.turn)
    some { st with board := newBoard }

def neighbors (size : Nat) (p : Pos) : List Pos :=
  let x := p.1
  let y := p.2
  let candidates :=
    [(x + 1, y), (x, y + 1)] ++
    (if x > 0 then [(x - 1, y)] else []) ++
    (if y > 0 then [(x, y - 1)] else [])
  candidates.filter (fun q => inBounds size q)

def switchTurn (st : GameState) : GameState :=
  { st with turn := st.turn.other }

def boardToStringCell : Option Stone → String
  | none => "."
  | some .black => "B"
  | some .white => "W"

def rowToString (row : List (Option Stone)) : String :=
  String.intercalate " " (row.map boardToStringCell)

def boardToString (b : Board) : String :=
  String.intercalate "\n" (b.map rowToString)

end Go
