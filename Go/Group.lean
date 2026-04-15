import Go.Board

namespace Go

def posMem (p : Pos) : List Pos → Bool
  | [] => false
  | q :: qs => if p == q then true else posMem p qs

def insertPos (p : Pos) (xs : List Pos) : List Pos :=
  if posMem p xs then xs else p :: xs

def insertManyPos (ps : List Pos) (xs : List Pos) : List Pos :=
  ps.foldl (fun acc p => insertPos p acc) xs

def sameStoneNeighbors (st : GameState) (s : Stone) (p : Pos) : List Pos :=
  (neighbors st.size p).filter (fun q =>
    match stoneAt? st.board q with
    | some s' => s' == s
    | none => false
  )

def groupFromAux
    (st : GameState)
    (s : Stone)
    (fuel : Nat)
    (frontier seen : List Pos) : List Pos :=
  match fuel with
  | 0 => seen
  | fuel + 1 =>
      match frontier with
      | [] => seen
      | p :: rest =>
          if posMem p seen then
            groupFromAux st s fuel rest seen
          else
            let nbrs := sameStoneNeighbors st s p
            let newFrontier := insertManyPos nbrs rest
            let newSeen := p :: seen
            groupFromAux st s fuel newFrontier newSeen

def groupFrom? (st : GameState) (start : Pos) : Option (List Pos) :=
  match stoneAt? st.board start with
  | none => none
  | some s =>
      let fuel := st.size * st.size + 1
      some (groupFromAux st s fuel [start] [])

end Go