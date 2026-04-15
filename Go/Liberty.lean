import Go.Group

namespace Go

def emptyNeighbors (st : GameState) (p : Pos) : List Pos :=
  (neighbors st.size p).filter (fun q => isEmptyAt st.board q)

def libertiesOfGroup (st : GameState) (grp : List Pos) : List Pos :=
  grp.foldl
    (fun acc p =>
      let empties := emptyNeighbors st p
      insertManyPos empties acc)
    []

def libertiesAt? (st : GameState) (p : Pos) : Option (List Pos) := do
  let grp ← groupFrom? st p
  pure (libertiesOfGroup st grp)

def groupHasLiberties? (st : GameState) (p : Pos) : Option Bool := do
  let libs ← libertiesAt? st p
  pure (!libs.isEmpty)

end Go
