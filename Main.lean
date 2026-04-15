import Go.Proofs

open Go

def st0 : GameState :=
  initialState 5

#eval boardToString st0.board

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

#eval match finalState? with
  | none => "illegal move sequence"
  | some st => boardToString st.board

#eval legalMove st0 (.place (2, 2))
#eval legalMove st0 (.place (9, 9))

def passState? : Option GameState :=
  applyMove? st0 .pass

#eval match passState? with
  | none => "pass failed"
  | some st => s!"turn switched; next player = {reprStr st.turn}"
