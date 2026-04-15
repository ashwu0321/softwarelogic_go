import Go.Step

namespace Go

theorem legalPlaceBasic_implies_inBounds {st : GameState} {p : Pos}
    (h : legalPlaceBasic st p = true) :
    inBounds st.size p = true := by
  unfold legalPlaceBasic at h
  simp at h
  exact h.left

theorem legalPlaceBasic_implies_empty {st : GameState} {p : Pos}
    (h : legalPlaceBasic st p = true) :
    isEmptyAt st.board p = true := by
  unfold legalPlaceBasic at h
  simp at h
  exact h.right

theorem legalMove_place_implies_basic {st : GameState} {p : Pos}
    (h : legalMove st (.place p) = true) :
    legalPlaceBasic st p = true := by
  cases hbasic : legalPlaceBasic st p with
  | false =>
      simp [legalMove, legalPlaceNoSuicide, hbasic] at h
  | true =>
      rfl

theorem legalMove_place_implies_inBounds {st : GameState} {p : Pos}
    (h : legalMove st (.place p) = true) :
    inBounds st.size p = true := by
  exact legalPlaceBasic_implies_inBounds (legalMove_place_implies_basic h)

theorem legalMove_place_implies_empty {st : GameState} {p : Pos}
    (h : legalMove st (.place p) = true) :
    isEmptyAt st.board p = true := by
  exact legalPlaceBasic_implies_empty (legalMove_place_implies_basic h)

theorem applyMove_pass_eq_switchTurn (st : GameState) :
    applyMove? st .pass = some (switchTurn st) := by
  rfl

theorem applyMove_place_requires_legal {st st' : GameState} {p : Pos}
    (h : applyMove? st (.place p) = some st') :
    legalMove st (.place p) = true := by
  unfold applyMove? at h
  cases hleg : legalMove st (.place p) with
  | false =>
      simp [hleg] at h
  | true =>
      rfl

theorem placeStone_preserves_size {st : GameState} {p : Pos} {mid : GameState}
    (h : placeStone? st p = some mid) :
    mid.size = st.size := by
  unfold placeStone? at h
  cases hbound : inBounds st.size p with
  | false =>
      simp [hbound] at h
  | true =>
      cases hempty : isEmptyAt st.board p with
      | false =>
          simp [hbound, hempty] at h
      | true =>
          cases hnew : boardSet? st.board p (some st.turn) with
          | none =>
              simp [hbound, hempty, hnew] at h
          | some newBoard =>
              simp [hbound, hempty, hnew] at h
              cases h
              rfl

theorem placeStone_preserves_turn {st : GameState} {p : Pos} {mid : GameState}
    (h : placeStone? st p = some mid) :
    mid.turn = st.turn := by
  unfold placeStone? at h
  cases hbound : inBounds st.size p with
  | false =>
      simp [hbound] at h
  | true =>
      cases hempty : isEmptyAt st.board p with
      | false =>
          simp [hbound, hempty] at h
      | true =>
          cases hnew : boardSet? st.board p (some st.turn) with
          | none =>
              simp [hbound, hempty, hnew] at h
          | some newBoard =>
              simp [hbound, hempty, hnew] at h
              cases h
              rfl

theorem captureAround_preserves_size {st : GameState} {p : Pos} :
    (captureAround st p).size = st.size := by
  unfold captureAround
  simp

theorem captureAround_preserves_turn {st : GameState} {p : Pos} :
    (captureAround st p).turn = st.turn := by
  unfold captureAround
  simp

theorem resolvePlacement_preserves_size {st : GameState} {p : Pos} {mid : GameState}
    (hres : resolvePlacement? st p = some mid) :
    mid.size = st.size := by
  unfold resolvePlacement? at hres
  cases hplace : placeStone? st p with
  | none =>
      simp [hplace] at hres
  | some placed =>
      simp [hplace] at hres
      cases hres
      simp [captureAround_preserves_size, placeStone_preserves_size hplace]

theorem resolvePlacement_preserves_turn {st : GameState} {p : Pos} {mid : GameState}
    (hres : resolvePlacement? st p = some mid) :
    mid.turn = st.turn := by
  unfold resolvePlacement? at hres
  cases hplace : placeStone? st p with
  | none =>
      simp [hplace] at hres
  | some placed =>
      simp [hplace] at hres
      cases hres
      simp [captureAround_preserves_turn, placeStone_preserves_turn hplace]

theorem applyMove_place_preserves_size {st st' : GameState} {p : Pos}
    (h : applyMove? st (.place p) = some st') :
    st'.size = st.size := by
  have hleg : legalMove st (.place p) = true :=
    applyMove_place_requires_legal h
  unfold applyMove? at h
  simp [hleg] at h
  cases hres : resolvePlacement? st p with
  | none =>
      simp [hres] at h
  | some mid =>
      simp [hres] at h
      cases h
      unfold switchTurn
      simp [resolvePlacement_preserves_size hres]

theorem applyMove_place_switches_turn {st st' : GameState} {p : Pos}
    (h : applyMove? st (.place p) = some st') :
    st'.turn = st.turn.other := by
  have hleg : legalMove st (.place p) = true :=
    applyMove_place_requires_legal h
  unfold applyMove? at h
  simp [hleg] at h
  cases hres : resolvePlacement? st p with
  | none =>
      simp [hres] at h
  | some mid =>
      simp [hres] at h
      cases h
      unfold switchTurn
      simp [resolvePlacement_preserves_turn hres]

end Go