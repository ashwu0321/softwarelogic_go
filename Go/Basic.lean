namespace Go

inductive Stone where
  | black
  | white
  deriving Repr, DecidableEq, BEq

def Stone.other : Stone → Stone
  | .black => .white
  | .white => .black

abbrev Pos := Nat × Nat

abbrev Board := List (List (Option Stone))

inductive Move where
  | place (p : Pos)
  | pass
  deriving Repr, DecidableEq, BEq

structure GameState where
  size  : Nat
  board : Board
  turn  : Stone
  deriving Repr, DecidableEq

def emptyRow (n : Nat) : List (Option Stone) :=
  List.replicate n none

def emptyBoard (n : Nat) : Board :=
  List.replicate n (emptyRow n)

def initialState (n : Nat) : GameState :=
  { size := n, board := emptyBoard n, turn := Stone.black }

end Go
