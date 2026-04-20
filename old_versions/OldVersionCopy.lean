import Go.Proofs

open Go

def st0 : GameState :=
  initialState 5

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

def passState? : Option GameState :=
  applyMove? st0 .pass

def main : IO Unit := do
  IO.println "Initial board:"
  IO.println (boardToString st0.board)
  IO.println ""

  IO.println "Board after demo moves:"
  match finalState? with
  | none => IO.println "illegal move sequence"
  | some st => IO.println (boardToString st.board)
  IO.println ""

  IO.println s!"legalMove st0 (.place (2, 2)) = {legalMove st0 (.place (2, 2))}"
  IO.println s!"legalMove st0 (.place (9, 9)) = {legalMove st0 (.place (9, 9))}"
  IO.println ""

  match passState? with
  | none => IO.println "pass failed"
  | some st => IO.println s!"turn switched; next player = {reprStr st.turn}"
