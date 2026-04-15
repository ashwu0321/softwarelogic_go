import Go.Capture

namespace Go

def legalPlaceBasic (st : GameState) (p : Pos) : Bool :=
  inBounds st.size p && isEmptyAt st.board p

def legalPlaceNoSuicide (st : GameState) (p : Pos) : Bool :=
  if !legalPlaceBasic st p then
    false
  else
    match resolvePlacement? st p with
    | none => false
    | some st' =>
        match groupHasLiberties? st' p with
        | some hasLibs => hasLibs
        | none => false

def legalMove (st : GameState) : Move → Bool
  | .pass => true
  | .place p => legalPlaceNoSuicide st p

end Go
