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

theorem applyMove_preserves_size {st st' : GameState} {m : Move}
    (h : applyMove? st m = some st') :
    st'.size = st.size := by
  cases m with
  | pass =>
      simp [applyMove?] at h
      cases h
      unfold switchTurn
      rfl
  | place p =>
      exact applyMove_place_preserves_size h

theorem legalMove_has_result {st : GameState} {m : Move}
    (hleg : legalMove st m = true) :
    ∃ st', applyMove? st m = some st' := by
  cases m with
  | pass =>
      exact ⟨switchTurn st, rfl⟩
  | place p =>
      cases hbasic : legalPlaceBasic st p with
      | false =>
          simp [legalMove, legalPlaceNoSuicide, hbasic] at hleg
      | true =>
          cases hres : resolvePlacement? st p with
          | none =>
              simp [legalMove, legalPlaceNoSuicide, hbasic, hres] at hleg
          | some mid =>
              exact ⟨switchTurn mid, by simp [applyMove?, hleg, hres]⟩

theorem applyLegalMove_eq_applyMove? {st : GameState} (m : LegalMove st) :
    applyMove? st m.move = some (applyLegalMove st m) := by
  obtain ⟨st', hst'⟩ := legalMove_has_result m.legal
  unfold applyLegalMove
  rw [hst']

theorem applyCheckedMove_eq_applyMove? (st : GameState) (m : Move) :
    applyCheckedMove? st m = applyMove? st m := by
  unfold applyCheckedMove? checkMove?
  by_cases h : legalMove st m = true
  · simp [h]
    exact (applyLegalMove_eq_applyMove? { move := m, legal := h }).symm
  · simp [h]
    cases m with
    | pass =>
        simp [legalMove] at h
    | place p =>
        simp [applyMove?, h]

theorem applyCheckedMoves_eq_applyMoves? (st : GameState) (ms : List Move) :
    applyCheckedMoves? st ms = applyMoves? st ms := by
  induction ms generalizing st with
  | nil =>
      rfl
  | cons m ms ih =>
      unfold applyCheckedMoves? applyMoves?
      rw [applyCheckedMove_eq_applyMove?]
      cases hstep : applyMove? st m with
      | none =>
          rfl
      | some mid =>
          exact ih mid

theorem checked_move_sound {st : GameState} {m : Move} {checked : LegalMove st}
    (h : checkMove? st m = some checked) :
    checked.move = m ∧ legalMove st m = true := by
  unfold checkMove? at h
  by_cases hleg : legalMove st m = true
  · simp [hleg] at h
    cases h
    exact ⟨rfl, hleg⟩
  · simp [hleg] at h

theorem checked_move_complete {st : GameState} {m : Move}
    (h : legalMove st m = true) :
    ∃ checked : LegalMove st, checkMove? st m = some checked := by
  unfold checkMove?
  simp [h]

theorem applyMoves_preserves_size {st st' : GameState} {ms : List Move}
    (h : applyMoves? st ms = some st') :
    st'.size = st.size := by
  induction ms generalizing st with
  | nil =>
      simp [applyMoves?] at h
      cases h
      rfl
  | cons m ms ih =>
      unfold applyMoves? at h
      cases hstep : applyMove? st m with
      | none =>
          simp [hstep] at h
      | some mid =>
          simp [hstep] at h
          have htail : st'.size = mid.size := ih h
          have hhead : mid.size = st.size := applyMove_preserves_size hstep
          exact Eq.trans htail hhead

theorem capture_demo_preserves_size {st' : GameState}
    (h : applyMoves? (initialState 5) captureDemoMoves = some st') :
    st'.size = 5 := by
  have hsize : st'.size = (initialState 5).size :=
    applyMoves_preserves_size h
  simpa [initialState] using hsize

end Go
