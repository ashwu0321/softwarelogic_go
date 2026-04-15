import Go.Step

namespace Go

theorem legalPlaceBasic_implies_inBounds {st : GameState} {p : Pos}
    (h : legalPlaceBasic st p = true) :
    inBounds st.size p = true := by
  unfold legalPlaceBasic at h
  exact (Bool.and_eq_true.mp h).left

theorem legalPlaceBasic_implies_empty {st : GameState} {p : Pos}
    (h : legalPlaceBasic st p = true) :
    isEmptyAt st.board p = true := by
  unfold legalPlaceBasic at h
  exact (Bool.and_eq_true.mp h).right

theorem legalMove_place_implies_basic {st : GameState} {p : Pos}
    (h : legalMove st (.place p) = true) :
    legalPlaceBasic st p = true := by
  cases hbasic : legalPlaceBasic st p with
  | false =>
      simp [legalMove, legalPlaceNoSuicide, hbasic] at h
  | true =>
      exact hbasic

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
      exact hleg

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
      rfl

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
      rfl

end Go
