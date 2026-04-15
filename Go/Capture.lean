import Go.Liberty

namespace Go

def removePositions (b : Board) (ps : List Pos) : Board :=
  ps.foldl
    (fun acc p =>
      match boardSet? acc p none with
      | some b' => b'
      | none => acc)
    b

def enemyNeighbors (st : GameState) (p : Pos) : List Pos :=
  let enemy := st.turn.other
  (neighbors st.size p).filter (fun q =>
    match stoneAt? st.board q with
    | some s => s == enemy
    | none => false
  )

def captureAround (st : GameState) (p : Pos) : GameState :=
  let nbrs := enemyNeighbors st p
  let finalBoard :=
    nbrs.foldl
      (fun bacc q =>
        let tempState : GameState := { st with board := bacc }
        match groupFrom? tempState q with
        | none => bacc
        | some grp =>
            let libs := libertiesOfGroup tempState grp
            if libs.isEmpty then
              removePositions bacc grp
            else
              bacc)
      st.board
  { st with board := finalBoard }

def resolvePlacement? (st : GameState) (p : Pos) : Option GameState := do
  let placed ← placeStone? st p
  pure (captureAround placed p)

end Go
