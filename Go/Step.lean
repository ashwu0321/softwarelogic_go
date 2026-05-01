import Go.Move

namespace Go

structure LegalMove (st : GameState) where
  move : Move
  legal : legalMove st move = true

def checkMove? (st : GameState) (m : Move) : Option (LegalMove st) :=
  if h : legalMove st m = true then
    some { move := m, legal := h }
  else
    none

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

def applyLegalMove (st : GameState) (m : LegalMove st) : GameState :=
  match applyMove? st m.move with
  | some st' => st'
  | none => st

def applyCheckedMove? (st : GameState) (m : Move) : Option GameState :=
  match checkMove? st m with
  | none => none
  | some checked => some (applyLegalMove st checked)

def applyCheckedMoves? : GameState → List Move → Option GameState
  | st, [] => some st
  | st, m :: ms =>
      match applyCheckedMove? st m with
      | none => none
      | some st' => applyCheckedMoves? st' ms

def captureDemoMoves : List Move :=
  [ Move.place (1, 1)
  , Move.place (0, 1)
  , Move.pass
  , Move.place (1, 0)
  , Move.pass
  , Move.place (2, 1)
  , Move.pass
  , Move.place (1, 2)
  ]

end Go
