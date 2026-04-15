import Go.Move

namespace Go

def applyMove? (st : GameState) : Move → Option GameState
  | .pass =>
      some (switchTurn st)
  | .place p =>
      if !legalMove st (.place p) then
        none
      else
        match resolvePlacement? st p with
        | none => none
        | some st' => some (switchTurn st')

def applyMoves? : GameState → List Move → Option GameState
  | st, [] => some st
  | st, m :: ms =>
      match applyMove? st m with
      | none => none
      | some st' => applyMoves? st' ms

end Go
