// Lean compiler output
// Module: Main
// Imports: public import Init public meta import Init public import Go.Proofs
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* lean_get_stdout();
lean_object* lp_SoftwareLogic__Go_Go_instReprMove_repr(lean_object*, lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lp_SoftwareLogic__Go_Go_applyCheckedMoves_x3f(lean_object*, lean_object*);
lean_object* lp_SoftwareLogic__Go_Go_boardToString(lean_object*);
lean_object* lp_SoftwareLogic__Go_Go_instReprStone_repr(uint8_t, lean_object*);
lean_object* lp_SoftwareLogic__Go_Go_initialState(lean_object*);
lean_object* lp_SoftwareLogic__Go_Go_applyCheckedMove_x3f(lean_object*, lean_object*);
lean_object* lp_SoftwareLogic__Go_Go_applyMove_x3f(lean_object*, lean_object*);
lean_object* lp_SoftwareLogic__Go_Go_checkMove_x3f(lean_object*, lean_object*);
uint8_t lp_SoftwareLogic__Go_Go_legalMove(lean_object*, lean_object*);
extern lean_object* lp_SoftwareLogic__Go_Go_captureDemoMoves;
lean_object* lp_SoftwareLogic__Go_Go_stoneAt_x3f(lean_object*, lean_object*);
lean_object* lp_SoftwareLogic__Go_Option_repr___at___00List_repr___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__0_spec__1(lean_object*, lean_object*);
lean_object* lp_SoftwareLogic__Go_List_repr___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_IO_print___at___00IO_println___at___00showState_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_IO_print___at___00IO_println___at___00showState_spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object lp_SoftwareLogic__Go_showState___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "turn = "};
static const lean_object* lp_SoftwareLogic__Go_showState___closed__0 = (const lean_object*)&lp_SoftwareLogic__Go_showState___closed__0_value;
static const lean_string_object lp_SoftwareLogic__Go_showState___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* lp_SoftwareLogic__Go_showState___closed__1 = (const lean_object*)&lp_SoftwareLogic__Go_showState___closed__1_value;
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_showState(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_showState___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_SoftwareLogic__Go_showResult___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "result = illegal / failed"};
static const lean_object* lp_SoftwareLogic__Go_showResult___closed__0 = (const lean_object*)&lp_SoftwareLogic__Go_showResult___closed__0_value;
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_showResult(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_showResult___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_SoftwareLogic__Go_showLegality___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* lp_SoftwareLogic__Go_showLegality___closed__0 = (const lean_object*)&lp_SoftwareLogic__Go_showLegality___closed__0_value;
static const lean_string_object lp_SoftwareLogic__Go_showLegality___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* lp_SoftwareLogic__Go_showLegality___closed__1 = (const lean_object*)&lp_SoftwareLogic__Go_showLegality___closed__1_value;
static const lean_string_object lp_SoftwareLogic__Go_showLegality___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* lp_SoftwareLogic__Go_showLegality___closed__2 = (const lean_object*)&lp_SoftwareLogic__Go_showLegality___closed__2_value;
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_showLegality(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_showLegality___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_SoftwareLogic__Go_showCheckedMove___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "move = "};
static const lean_object* lp_SoftwareLogic__Go_showCheckedMove___closed__0 = (const lean_object*)&lp_SoftwareLogic__Go_showCheckedMove___closed__0_value;
static const lean_string_object lp_SoftwareLogic__Go_showCheckedMove___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "proof-carrying move = rejected"};
static const lean_object* lp_SoftwareLogic__Go_showCheckedMove___closed__1 = (const lean_object*)&lp_SoftwareLogic__Go_showCheckedMove___closed__1_value;
static const lean_string_object lp_SoftwareLogic__Go_showCheckedMove___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "proof-carrying move = accepted"};
static const lean_object* lp_SoftwareLogic__Go_showCheckedMove___closed__2 = (const lean_object*)&lp_SoftwareLogic__Go_showCheckedMove___closed__2_value;
static const lean_string_object lp_SoftwareLogic__Go_showCheckedMove___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "stored move = "};
static const lean_object* lp_SoftwareLogic__Go_showCheckedMove___closed__3 = (const lean_object*)&lp_SoftwareLogic__Go_showCheckedMove___closed__3_value;
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_showCheckedMove(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_showCheckedMove___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_applyAndShow(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_applyAndShow___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Std_Format_joinSep___at___00List_repr___at___00showSequence_spec__0_spec__0___lam__0(lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00showSequence_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00showSequence_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Std_Format_joinSep___at___00List_repr___at___00showSequence_spec__0_spec__0(lean_object*, lean_object*);
static const lean_string_object lp_SoftwareLogic__Go_List_repr___at___00showSequence_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "[]"};
static const lean_object* lp_SoftwareLogic__Go_List_repr___at___00showSequence_spec__0___redArg___closed__0 = (const lean_object*)&lp_SoftwareLogic__Go_List_repr___at___00showSequence_spec__0___redArg___closed__0_value;
static const lean_ctor_object lp_SoftwareLogic__Go_List_repr___at___00showSequence_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_List_repr___at___00showSequence_spec__0___redArg___closed__0_value)}};
static const lean_object* lp_SoftwareLogic__Go_List_repr___at___00showSequence_spec__0___redArg___closed__1 = (const lean_object*)&lp_SoftwareLogic__Go_List_repr___at___00showSequence_spec__0___redArg___closed__1_value;
static const lean_string_object lp_SoftwareLogic__Go_List_repr___at___00showSequence_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* lp_SoftwareLogic__Go_List_repr___at___00showSequence_spec__0___redArg___closed__2 = (const lean_object*)&lp_SoftwareLogic__Go_List_repr___at___00showSequence_spec__0___redArg___closed__2_value;
static const lean_string_object lp_SoftwareLogic__Go_List_repr___at___00showSequence_spec__0___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* lp_SoftwareLogic__Go_List_repr___at___00showSequence_spec__0___redArg___closed__3 = (const lean_object*)&lp_SoftwareLogic__Go_List_repr___at___00showSequence_spec__0___redArg___closed__3_value;
static const lean_ctor_object lp_SoftwareLogic__Go_List_repr___at___00showSequence_spec__0___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_List_repr___at___00showSequence_spec__0___redArg___closed__3_value)}};
static const lean_object* lp_SoftwareLogic__Go_List_repr___at___00showSequence_spec__0___redArg___closed__4 = (const lean_object*)&lp_SoftwareLogic__Go_List_repr___at___00showSequence_spec__0___redArg___closed__4_value;
static const lean_ctor_object lp_SoftwareLogic__Go_List_repr___at___00showSequence_spec__0___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_List_repr___at___00showSequence_spec__0___redArg___closed__4_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_SoftwareLogic__Go_List_repr___at___00showSequence_spec__0___redArg___closed__5 = (const lean_object*)&lp_SoftwareLogic__Go_List_repr___at___00showSequence_spec__0___redArg___closed__5_value;
static const lean_string_object lp_SoftwareLogic__Go_List_repr___at___00showSequence_spec__0___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* lp_SoftwareLogic__Go_List_repr___at___00showSequence_spec__0___redArg___closed__6 = (const lean_object*)&lp_SoftwareLogic__Go_List_repr___at___00showSequence_spec__0___redArg___closed__6_value;
static lean_once_cell_t lp_SoftwareLogic__Go_List_repr___at___00showSequence_spec__0___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_SoftwareLogic__Go_List_repr___at___00showSequence_spec__0___redArg___closed__7;
static lean_once_cell_t lp_SoftwareLogic__Go_List_repr___at___00showSequence_spec__0___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_SoftwareLogic__Go_List_repr___at___00showSequence_spec__0___redArg___closed__8;
static const lean_ctor_object lp_SoftwareLogic__Go_List_repr___at___00showSequence_spec__0___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_List_repr___at___00showSequence_spec__0___redArg___closed__2_value)}};
static const lean_object* lp_SoftwareLogic__Go_List_repr___at___00showSequence_spec__0___redArg___closed__9 = (const lean_object*)&lp_SoftwareLogic__Go_List_repr___at___00showSequence_spec__0___redArg___closed__9_value;
static const lean_ctor_object lp_SoftwareLogic__Go_List_repr___at___00showSequence_spec__0___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_List_repr___at___00showSequence_spec__0___redArg___closed__6_value)}};
static const lean_object* lp_SoftwareLogic__Go_List_repr___at___00showSequence_spec__0___redArg___closed__10 = (const lean_object*)&lp_SoftwareLogic__Go_List_repr___at___00showSequence_spec__0___redArg___closed__10_value;
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_repr___at___00showSequence_spec__0___redArg(lean_object*);
static const lean_string_object lp_SoftwareLogic__Go_showSequence___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "moves = "};
static const lean_object* lp_SoftwareLogic__Go_showSequence___closed__0 = (const lean_object*)&lp_SoftwareLogic__Go_showSequence___closed__0_value;
static const lean_string_object lp_SoftwareLogic__Go_showSequence___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "result = illegal move sequence"};
static const lean_object* lp_SoftwareLogic__Go_showSequence___closed__1 = (const lean_object*)&lp_SoftwareLogic__Go_showSequence___closed__1_value;
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_showSequence(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_showSequence___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_repr___at___00showSequence_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_repr___at___00showSequence_spec__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t lp_SoftwareLogic__Go_st0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_SoftwareLogic__Go_st0___closed__0;
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_st0;
static const lean_ctor_object lp_SoftwareLogic__Go_centerMove___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* lp_SoftwareLogic__Go_centerMove___closed__0 = (const lean_object*)&lp_SoftwareLogic__Go_centerMove___closed__0_value;
static const lean_ctor_object lp_SoftwareLogic__Go_centerMove___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_centerMove___closed__0_value)}};
static const lean_object* lp_SoftwareLogic__Go_centerMove___closed__1 = (const lean_object*)&lp_SoftwareLogic__Go_centerMove___closed__1_value;
LEAN_EXPORT const lean_object* lp_SoftwareLogic__Go_centerMove = (const lean_object*)&lp_SoftwareLogic__Go_centerMove___closed__1_value;
static lean_once_cell_t lp_SoftwareLogic__Go_checkedCenterMove_x3f___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_SoftwareLogic__Go_checkedCenterMove_x3f___closed__0;
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_checkedCenterMove_x3f;
static lean_once_cell_t lp_SoftwareLogic__Go_oneMove_x3f___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_SoftwareLogic__Go_oneMove_x3f___closed__0;
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_oneMove_x3f;
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_centerState;
static const lean_ctor_object lp_SoftwareLogic__Go_demoMoves___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_SoftwareLogic__Go_demoMoves___closed__0 = (const lean_object*)&lp_SoftwareLogic__Go_demoMoves___closed__0_value;
static const lean_ctor_object lp_SoftwareLogic__Go_demoMoves___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_demoMoves___closed__0_value)}};
static const lean_object* lp_SoftwareLogic__Go_demoMoves___closed__1 = (const lean_object*)&lp_SoftwareLogic__Go_demoMoves___closed__1_value;
static const lean_ctor_object lp_SoftwareLogic__Go_demoMoves___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* lp_SoftwareLogic__Go_demoMoves___closed__2 = (const lean_object*)&lp_SoftwareLogic__Go_demoMoves___closed__2_value;
static const lean_ctor_object lp_SoftwareLogic__Go_demoMoves___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_demoMoves___closed__2_value)}};
static const lean_object* lp_SoftwareLogic__Go_demoMoves___closed__3 = (const lean_object*)&lp_SoftwareLogic__Go_demoMoves___closed__3_value;
static const lean_ctor_object lp_SoftwareLogic__Go_demoMoves___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_SoftwareLogic__Go_demoMoves___closed__4 = (const lean_object*)&lp_SoftwareLogic__Go_demoMoves___closed__4_value;
static const lean_ctor_object lp_SoftwareLogic__Go_demoMoves___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_demoMoves___closed__4_value)}};
static const lean_object* lp_SoftwareLogic__Go_demoMoves___closed__5 = (const lean_object*)&lp_SoftwareLogic__Go_demoMoves___closed__5_value;
static const lean_ctor_object lp_SoftwareLogic__Go_demoMoves___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)(((size_t)(3) << 1) | 1))}};
static const lean_object* lp_SoftwareLogic__Go_demoMoves___closed__6 = (const lean_object*)&lp_SoftwareLogic__Go_demoMoves___closed__6_value;
static const lean_ctor_object lp_SoftwareLogic__Go_demoMoves___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_demoMoves___closed__6_value)}};
static const lean_object* lp_SoftwareLogic__Go_demoMoves___closed__7 = (const lean_object*)&lp_SoftwareLogic__Go_demoMoves___closed__7_value;
static const lean_ctor_object lp_SoftwareLogic__Go_demoMoves___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_SoftwareLogic__Go_demoMoves___closed__8 = (const lean_object*)&lp_SoftwareLogic__Go_demoMoves___closed__8_value;
static const lean_ctor_object lp_SoftwareLogic__Go_demoMoves___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_demoMoves___closed__8_value)}};
static const lean_object* lp_SoftwareLogic__Go_demoMoves___closed__9 = (const lean_object*)&lp_SoftwareLogic__Go_demoMoves___closed__9_value;
static const lean_ctor_object lp_SoftwareLogic__Go_demoMoves___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* lp_SoftwareLogic__Go_demoMoves___closed__10 = (const lean_object*)&lp_SoftwareLogic__Go_demoMoves___closed__10_value;
static const lean_ctor_object lp_SoftwareLogic__Go_demoMoves___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_demoMoves___closed__10_value)}};
static const lean_object* lp_SoftwareLogic__Go_demoMoves___closed__11 = (const lean_object*)&lp_SoftwareLogic__Go_demoMoves___closed__11_value;
static const lean_ctor_object lp_SoftwareLogic__Go_demoMoves___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_demoMoves___closed__11_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_SoftwareLogic__Go_demoMoves___closed__12 = (const lean_object*)&lp_SoftwareLogic__Go_demoMoves___closed__12_value;
static const lean_ctor_object lp_SoftwareLogic__Go_demoMoves___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_demoMoves___closed__9_value),((lean_object*)&lp_SoftwareLogic__Go_demoMoves___closed__12_value)}};
static const lean_object* lp_SoftwareLogic__Go_demoMoves___closed__13 = (const lean_object*)&lp_SoftwareLogic__Go_demoMoves___closed__13_value;
static const lean_ctor_object lp_SoftwareLogic__Go_demoMoves___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_demoMoves___closed__7_value),((lean_object*)&lp_SoftwareLogic__Go_demoMoves___closed__13_value)}};
static const lean_object* lp_SoftwareLogic__Go_demoMoves___closed__14 = (const lean_object*)&lp_SoftwareLogic__Go_demoMoves___closed__14_value;
static const lean_ctor_object lp_SoftwareLogic__Go_demoMoves___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_demoMoves___closed__5_value),((lean_object*)&lp_SoftwareLogic__Go_demoMoves___closed__14_value)}};
static const lean_object* lp_SoftwareLogic__Go_demoMoves___closed__15 = (const lean_object*)&lp_SoftwareLogic__Go_demoMoves___closed__15_value;
static const lean_ctor_object lp_SoftwareLogic__Go_demoMoves___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_demoMoves___closed__3_value),((lean_object*)&lp_SoftwareLogic__Go_demoMoves___closed__15_value)}};
static const lean_object* lp_SoftwareLogic__Go_demoMoves___closed__16 = (const lean_object*)&lp_SoftwareLogic__Go_demoMoves___closed__16_value;
static const lean_ctor_object lp_SoftwareLogic__Go_demoMoves___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_demoMoves___closed__1_value),((lean_object*)&lp_SoftwareLogic__Go_demoMoves___closed__16_value)}};
static const lean_object* lp_SoftwareLogic__Go_demoMoves___closed__17 = (const lean_object*)&lp_SoftwareLogic__Go_demoMoves___closed__17_value;
static const lean_ctor_object lp_SoftwareLogic__Go_demoMoves___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_centerMove___closed__1_value),((lean_object*)&lp_SoftwareLogic__Go_demoMoves___closed__17_value)}};
static const lean_object* lp_SoftwareLogic__Go_demoMoves___closed__18 = (const lean_object*)&lp_SoftwareLogic__Go_demoMoves___closed__18_value;
LEAN_EXPORT const lean_object* lp_SoftwareLogic__Go_demoMoves = (const lean_object*)&lp_SoftwareLogic__Go_demoMoves___closed__18_value;
static const lean_ctor_object lp_SoftwareLogic__Go_suicideState___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_SoftwareLogic__Go_suicideState___closed__0 = (const lean_object*)&lp_SoftwareLogic__Go_suicideState___closed__0_value;
static const lean_ctor_object lp_SoftwareLogic__Go_suicideState___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_SoftwareLogic__Go_suicideState___closed__1 = (const lean_object*)&lp_SoftwareLogic__Go_suicideState___closed__1_value;
static const lean_ctor_object lp_SoftwareLogic__Go_suicideState___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_suicideState___closed__0_value),((lean_object*)&lp_SoftwareLogic__Go_suicideState___closed__1_value)}};
static const lean_object* lp_SoftwareLogic__Go_suicideState___closed__2 = (const lean_object*)&lp_SoftwareLogic__Go_suicideState___closed__2_value;
static const lean_ctor_object lp_SoftwareLogic__Go_suicideState___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_SoftwareLogic__Go_suicideState___closed__2_value)}};
static const lean_object* lp_SoftwareLogic__Go_suicideState___closed__3 = (const lean_object*)&lp_SoftwareLogic__Go_suicideState___closed__3_value;
static const lean_ctor_object lp_SoftwareLogic__Go_suicideState___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_suicideState___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_SoftwareLogic__Go_suicideState___closed__4 = (const lean_object*)&lp_SoftwareLogic__Go_suicideState___closed__4_value;
static const lean_ctor_object lp_SoftwareLogic__Go_suicideState___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_SoftwareLogic__Go_suicideState___closed__4_value)}};
static const lean_object* lp_SoftwareLogic__Go_suicideState___closed__5 = (const lean_object*)&lp_SoftwareLogic__Go_suicideState___closed__5_value;
static const lean_ctor_object lp_SoftwareLogic__Go_suicideState___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_suicideState___closed__0_value),((lean_object*)&lp_SoftwareLogic__Go_suicideState___closed__5_value)}};
static const lean_object* lp_SoftwareLogic__Go_suicideState___closed__6 = (const lean_object*)&lp_SoftwareLogic__Go_suicideState___closed__6_value;
static const lean_ctor_object lp_SoftwareLogic__Go_suicideState___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_suicideState___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_SoftwareLogic__Go_suicideState___closed__7 = (const lean_object*)&lp_SoftwareLogic__Go_suicideState___closed__7_value;
static const lean_ctor_object lp_SoftwareLogic__Go_suicideState___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_suicideState___closed__6_value),((lean_object*)&lp_SoftwareLogic__Go_suicideState___closed__7_value)}};
static const lean_object* lp_SoftwareLogic__Go_suicideState___closed__8 = (const lean_object*)&lp_SoftwareLogic__Go_suicideState___closed__8_value;
static const lean_ctor_object lp_SoftwareLogic__Go_suicideState___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_suicideState___closed__3_value),((lean_object*)&lp_SoftwareLogic__Go_suicideState___closed__8_value)}};
static const lean_object* lp_SoftwareLogic__Go_suicideState___closed__9 = (const lean_object*)&lp_SoftwareLogic__Go_suicideState___closed__9_value;
static const lean_ctor_object lp_SoftwareLogic__Go_suicideState___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)&lp_SoftwareLogic__Go_suicideState___closed__9_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_SoftwareLogic__Go_suicideState___closed__10 = (const lean_object*)&lp_SoftwareLogic__Go_suicideState___closed__10_value;
LEAN_EXPORT const lean_object* lp_SoftwareLogic__Go_suicideState = (const lean_object*)&lp_SoftwareLogic__Go_suicideState___closed__10_value;
LEAN_EXPORT const lean_object* lp_SoftwareLogic__Go_suicideMove = (const lean_object*)&lp_SoftwareLogic__Go_demoMoves___closed__5_value;
static const lean_string_object lp_SoftwareLogic__Go_proofCertificates___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 54, .m_data = "center_move_is_legal uses legalMove on a concrete move"};
static const lean_object* lp_SoftwareLogic__Go_proofCertificates___closed__0 = (const lean_object*)&lp_SoftwareLogic__Go_proofCertificates___closed__0_value;
static const lean_string_object lp_SoftwareLogic__Go_proofCertificates___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 90, .m_capacity = 90, .m_length = 89, .m_data = "checked_center_move_exists constructs a LegalMove proof object from a runtime-style check"};
static const lean_object* lp_SoftwareLogic__Go_proofCertificates___closed__1 = (const lean_object*)&lp_SoftwareLogic__Go_proofCertificates___closed__1_value;
static const lean_string_object lp_SoftwareLogic__Go_proofCertificates___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 90, .m_capacity = 90, .m_length = 89, .m_data = "checked_center_move_sound proves any accepted checked move stores the original legal move"};
static const lean_object* lp_SoftwareLogic__Go_proofCertificates___closed__2 = (const lean_object*)&lp_SoftwareLogic__Go_proofCertificates___closed__2_value;
static const lean_string_object lp_SoftwareLogic__Go_proofCertificates___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 94, .m_capacity = 94, .m_length = 93, .m_data = "checked_api_matches_applyMove proves proof-carrying execution agrees with the legacy executor"};
static const lean_object* lp_SoftwareLogic__Go_proofCertificates___closed__3 = (const lean_object*)&lp_SoftwareLogic__Go_proofCertificates___closed__3_value;
static const lean_string_object lp_SoftwareLogic__Go_proofCertificates___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 98, .m_capacity = 98, .m_length = 97, .m_data = "checked_sequence_api_matches_applyMoves proves checked sequence execution agrees with applyMoves\?"};
static const lean_object* lp_SoftwareLogic__Go_proofCertificates___closed__4 = (const lean_object*)&lp_SoftwareLogic__Go_proofCertificates___closed__4_value;
static const lean_string_object lp_SoftwareLogic__Go_proofCertificates___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 98, .m_capacity = 98, .m_length = 97, .m_data = "demo_sequence_preserves_size proves every successful move sequence keeps the board size invariant"};
static const lean_object* lp_SoftwareLogic__Go_proofCertificates___closed__5 = (const lean_object*)&lp_SoftwareLogic__Go_proofCertificates___closed__5_value;
static const lean_string_object lp_SoftwareLogic__Go_proofCertificates___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "capture_sequence_preserves_size applies that invariant to the capture scenario"};
static const lean_object* lp_SoftwareLogic__Go_proofCertificates___closed__6 = (const lean_object*)&lp_SoftwareLogic__Go_proofCertificates___closed__6_value;
static const lean_string_object lp_SoftwareLogic__Go_proofCertificates___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 71, .m_capacity = 71, .m_length = 70, .m_data = "center_move_is_in_bounds follows from legalMove_place_implies_inBounds"};
static const lean_object* lp_SoftwareLogic__Go_proofCertificates___closed__7 = (const lean_object*)&lp_SoftwareLogic__Go_proofCertificates___closed__7_value;
static const lean_string_object lp_SoftwareLogic__Go_proofCertificates___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 64, .m_capacity = 64, .m_length = 63, .m_data = "center_move_is_empty follows from legalMove_place_implies_empty"};
static const lean_object* lp_SoftwareLogic__Go_proofCertificates___closed__8 = (const lean_object*)&lp_SoftwareLogic__Go_proofCertificates___closed__8_value;
static const lean_string_object lp_SoftwareLogic__Go_proofCertificates___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 74, .m_capacity = 74, .m_length = 73, .m_data = "applied_center_move_was_legal follows from applyMove_place_requires_legal"};
static const lean_object* lp_SoftwareLogic__Go_proofCertificates___closed__9 = (const lean_object*)&lp_SoftwareLogic__Go_proofCertificates___closed__9_value;
static const lean_string_object lp_SoftwareLogic__Go_proofCertificates___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 74, .m_capacity = 74, .m_length = 73, .m_data = "applied_center_preserves_size follows from applyMove_place_preserves_size"};
static const lean_object* lp_SoftwareLogic__Go_proofCertificates___closed__10 = (const lean_object*)&lp_SoftwareLogic__Go_proofCertificates___closed__10_value;
static const lean_string_object lp_SoftwareLogic__Go_proofCertificates___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 72, .m_capacity = 72, .m_length = 71, .m_data = "applied_center_switches_turn follows from applyMove_place_switches_turn"};
static const lean_object* lp_SoftwareLogic__Go_proofCertificates___closed__11 = (const lean_object*)&lp_SoftwareLogic__Go_proofCertificates___closed__11_value;
static const lean_string_object lp_SoftwareLogic__Go_proofCertificates___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 75, .m_capacity = 75, .m_length = 74, .m_data = "pass_from_initial_is_switch_turn follows from applyMove_pass_eq_switchTurn"};
static const lean_object* lp_SoftwareLogic__Go_proofCertificates___closed__12 = (const lean_object*)&lp_SoftwareLogic__Go_proofCertificates___closed__12_value;
static const lean_string_object lp_SoftwareLogic__Go_proofCertificates___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 54, .m_data = "pass_from_initial_is_legal follows from legalMove_pass"};
static const lean_object* lp_SoftwareLogic__Go_proofCertificates___closed__13 = (const lean_object*)&lp_SoftwareLogic__Go_proofCertificates___closed__13_value;
static const lean_string_object lp_SoftwareLogic__Go_proofCertificates___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 85, .m_capacity = 85, .m_length = 84, .m_data = "checked_suicide_move_rejected proves the checked API rejects a concrete suicide move"};
static const lean_object* lp_SoftwareLogic__Go_proofCertificates___closed__14 = (const lean_object*)&lp_SoftwareLogic__Go_proofCertificates___closed__14_value;
static const lean_string_object lp_SoftwareLogic__Go_proofCertificates___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 81, .m_capacity = 81, .m_length = 80, .m_data = "raw_suicide_move_rejected proves the raw executor rejects that illegal placement"};
static const lean_object* lp_SoftwareLogic__Go_proofCertificates___closed__15 = (const lean_object*)&lp_SoftwareLogic__Go_proofCertificates___closed__15_value;
static const lean_string_object lp_SoftwareLogic__Go_proofCertificates___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 83, .m_capacity = 83, .m_length = 82, .m_data = "capture_demo_removes_surrounded_stone checks the captured point is empty afterward"};
static const lean_object* lp_SoftwareLogic__Go_proofCertificates___closed__16 = (const lean_object*)&lp_SoftwareLogic__Go_proofCertificates___closed__16_value;
static const lean_string_object lp_SoftwareLogic__Go_proofCertificates___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 81, .m_capacity = 81, .m_length = 80, .m_data = "capture_demo_keeps_surrounding_white_stones checks the surrounding stones remain"};
static const lean_object* lp_SoftwareLogic__Go_proofCertificates___closed__17 = (const lean_object*)&lp_SoftwareLogic__Go_proofCertificates___closed__17_value;
static const lean_ctor_object lp_SoftwareLogic__Go_proofCertificates___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_proofCertificates___closed__17_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_SoftwareLogic__Go_proofCertificates___closed__18 = (const lean_object*)&lp_SoftwareLogic__Go_proofCertificates___closed__18_value;
static const lean_ctor_object lp_SoftwareLogic__Go_proofCertificates___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_proofCertificates___closed__16_value),((lean_object*)&lp_SoftwareLogic__Go_proofCertificates___closed__18_value)}};
static const lean_object* lp_SoftwareLogic__Go_proofCertificates___closed__19 = (const lean_object*)&lp_SoftwareLogic__Go_proofCertificates___closed__19_value;
static const lean_ctor_object lp_SoftwareLogic__Go_proofCertificates___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_proofCertificates___closed__15_value),((lean_object*)&lp_SoftwareLogic__Go_proofCertificates___closed__19_value)}};
static const lean_object* lp_SoftwareLogic__Go_proofCertificates___closed__20 = (const lean_object*)&lp_SoftwareLogic__Go_proofCertificates___closed__20_value;
static const lean_ctor_object lp_SoftwareLogic__Go_proofCertificates___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_proofCertificates___closed__14_value),((lean_object*)&lp_SoftwareLogic__Go_proofCertificates___closed__20_value)}};
static const lean_object* lp_SoftwareLogic__Go_proofCertificates___closed__21 = (const lean_object*)&lp_SoftwareLogic__Go_proofCertificates___closed__21_value;
static const lean_ctor_object lp_SoftwareLogic__Go_proofCertificates___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_proofCertificates___closed__13_value),((lean_object*)&lp_SoftwareLogic__Go_proofCertificates___closed__21_value)}};
static const lean_object* lp_SoftwareLogic__Go_proofCertificates___closed__22 = (const lean_object*)&lp_SoftwareLogic__Go_proofCertificates___closed__22_value;
static const lean_ctor_object lp_SoftwareLogic__Go_proofCertificates___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_proofCertificates___closed__12_value),((lean_object*)&lp_SoftwareLogic__Go_proofCertificates___closed__22_value)}};
static const lean_object* lp_SoftwareLogic__Go_proofCertificates___closed__23 = (const lean_object*)&lp_SoftwareLogic__Go_proofCertificates___closed__23_value;
static const lean_ctor_object lp_SoftwareLogic__Go_proofCertificates___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_proofCertificates___closed__11_value),((lean_object*)&lp_SoftwareLogic__Go_proofCertificates___closed__23_value)}};
static const lean_object* lp_SoftwareLogic__Go_proofCertificates___closed__24 = (const lean_object*)&lp_SoftwareLogic__Go_proofCertificates___closed__24_value;
static const lean_ctor_object lp_SoftwareLogic__Go_proofCertificates___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_proofCertificates___closed__10_value),((lean_object*)&lp_SoftwareLogic__Go_proofCertificates___closed__24_value)}};
static const lean_object* lp_SoftwareLogic__Go_proofCertificates___closed__25 = (const lean_object*)&lp_SoftwareLogic__Go_proofCertificates___closed__25_value;
static const lean_ctor_object lp_SoftwareLogic__Go_proofCertificates___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_proofCertificates___closed__9_value),((lean_object*)&lp_SoftwareLogic__Go_proofCertificates___closed__25_value)}};
static const lean_object* lp_SoftwareLogic__Go_proofCertificates___closed__26 = (const lean_object*)&lp_SoftwareLogic__Go_proofCertificates___closed__26_value;
static const lean_ctor_object lp_SoftwareLogic__Go_proofCertificates___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_proofCertificates___closed__8_value),((lean_object*)&lp_SoftwareLogic__Go_proofCertificates___closed__26_value)}};
static const lean_object* lp_SoftwareLogic__Go_proofCertificates___closed__27 = (const lean_object*)&lp_SoftwareLogic__Go_proofCertificates___closed__27_value;
static const lean_ctor_object lp_SoftwareLogic__Go_proofCertificates___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_proofCertificates___closed__7_value),((lean_object*)&lp_SoftwareLogic__Go_proofCertificates___closed__27_value)}};
static const lean_object* lp_SoftwareLogic__Go_proofCertificates___closed__28 = (const lean_object*)&lp_SoftwareLogic__Go_proofCertificates___closed__28_value;
static const lean_ctor_object lp_SoftwareLogic__Go_proofCertificates___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_proofCertificates___closed__6_value),((lean_object*)&lp_SoftwareLogic__Go_proofCertificates___closed__28_value)}};
static const lean_object* lp_SoftwareLogic__Go_proofCertificates___closed__29 = (const lean_object*)&lp_SoftwareLogic__Go_proofCertificates___closed__29_value;
static const lean_ctor_object lp_SoftwareLogic__Go_proofCertificates___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_proofCertificates___closed__5_value),((lean_object*)&lp_SoftwareLogic__Go_proofCertificates___closed__29_value)}};
static const lean_object* lp_SoftwareLogic__Go_proofCertificates___closed__30 = (const lean_object*)&lp_SoftwareLogic__Go_proofCertificates___closed__30_value;
static const lean_ctor_object lp_SoftwareLogic__Go_proofCertificates___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_proofCertificates___closed__4_value),((lean_object*)&lp_SoftwareLogic__Go_proofCertificates___closed__30_value)}};
static const lean_object* lp_SoftwareLogic__Go_proofCertificates___closed__31 = (const lean_object*)&lp_SoftwareLogic__Go_proofCertificates___closed__31_value;
static const lean_ctor_object lp_SoftwareLogic__Go_proofCertificates___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_proofCertificates___closed__3_value),((lean_object*)&lp_SoftwareLogic__Go_proofCertificates___closed__31_value)}};
static const lean_object* lp_SoftwareLogic__Go_proofCertificates___closed__32 = (const lean_object*)&lp_SoftwareLogic__Go_proofCertificates___closed__32_value;
static const lean_ctor_object lp_SoftwareLogic__Go_proofCertificates___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_proofCertificates___closed__2_value),((lean_object*)&lp_SoftwareLogic__Go_proofCertificates___closed__32_value)}};
static const lean_object* lp_SoftwareLogic__Go_proofCertificates___closed__33 = (const lean_object*)&lp_SoftwareLogic__Go_proofCertificates___closed__33_value;
static const lean_ctor_object lp_SoftwareLogic__Go_proofCertificates___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_proofCertificates___closed__1_value),((lean_object*)&lp_SoftwareLogic__Go_proofCertificates___closed__33_value)}};
static const lean_object* lp_SoftwareLogic__Go_proofCertificates___closed__34 = (const lean_object*)&lp_SoftwareLogic__Go_proofCertificates___closed__34_value;
static const lean_ctor_object lp_SoftwareLogic__Go_proofCertificates___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_proofCertificates___closed__0_value),((lean_object*)&lp_SoftwareLogic__Go_proofCertificates___closed__34_value)}};
static const lean_object* lp_SoftwareLogic__Go_proofCertificates___closed__35 = (const lean_object*)&lp_SoftwareLogic__Go_proofCertificates___closed__35_value;
LEAN_EXPORT const lean_object* lp_SoftwareLogic__Go_proofCertificates = (const lean_object*)&lp_SoftwareLogic__Go_proofCertificates___closed__35_value;
static const lean_string_object lp_SoftwareLogic__Go_List_forIn_x27_loop___at___00showProofCertificates_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "- "};
static const lean_object* lp_SoftwareLogic__Go_List_forIn_x27_loop___at___00showProofCertificates_spec__0___redArg___closed__0 = (const lean_object*)&lp_SoftwareLogic__Go_List_forIn_x27_loop___at___00showProofCertificates_spec__0___redArg___closed__0_value;
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_forIn_x27_loop___at___00showProofCertificates_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_forIn_x27_loop___at___00showProofCertificates_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_SoftwareLogic__Go_showProofCertificates___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "Proof certificates checked by Lean at build time:"};
static const lean_object* lp_SoftwareLogic__Go_showProofCertificates___closed__0 = (const lean_object*)&lp_SoftwareLogic__Go_showProofCertificates___closed__0_value;
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_showProofCertificates();
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_showProofCertificates___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_forIn_x27_loop___at___00showProofCertificates_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_forIn_x27_loop___at___00showProofCertificates_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_occupiedTest_x3f;
static lean_once_cell_t lp_SoftwareLogic__Go_passState_x3f___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_SoftwareLogic__Go_passState_x3f___closed__0;
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_passState_x3f;
static lean_once_cell_t lp_SoftwareLogic__Go_finalState_x3f___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_SoftwareLogic__Go_finalState_x3f___closed__0;
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_finalState_x3f;
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_captureMoves;
static lean_once_cell_t lp_SoftwareLogic__Go_captureState_x3f___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_SoftwareLogic__Go_captureState_x3f___closed__0;
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_captureState_x3f;
static const lean_ctor_object lp_SoftwareLogic__Go_mixedMoves___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_SoftwareLogic__Go_mixedMoves___closed__0 = (const lean_object*)&lp_SoftwareLogic__Go_mixedMoves___closed__0_value;
static const lean_ctor_object lp_SoftwareLogic__Go_mixedMoves___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_mixedMoves___closed__0_value)}};
static const lean_object* lp_SoftwareLogic__Go_mixedMoves___closed__1 = (const lean_object*)&lp_SoftwareLogic__Go_mixedMoves___closed__1_value;
static const lean_ctor_object lp_SoftwareLogic__Go_mixedMoves___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_SoftwareLogic__Go_mixedMoves___closed__2 = (const lean_object*)&lp_SoftwareLogic__Go_mixedMoves___closed__2_value;
static const lean_ctor_object lp_SoftwareLogic__Go_mixedMoves___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_mixedMoves___closed__2_value)}};
static const lean_object* lp_SoftwareLogic__Go_mixedMoves___closed__3 = (const lean_object*)&lp_SoftwareLogic__Go_mixedMoves___closed__3_value;
static const lean_ctor_object lp_SoftwareLogic__Go_mixedMoves___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_SoftwareLogic__Go_mixedMoves___closed__4 = (const lean_object*)&lp_SoftwareLogic__Go_mixedMoves___closed__4_value;
static const lean_ctor_object lp_SoftwareLogic__Go_mixedMoves___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_mixedMoves___closed__4_value)}};
static const lean_object* lp_SoftwareLogic__Go_mixedMoves___closed__5 = (const lean_object*)&lp_SoftwareLogic__Go_mixedMoves___closed__5_value;
static const lean_ctor_object lp_SoftwareLogic__Go_mixedMoves___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(4) << 1) | 1)),((lean_object*)(((size_t)(4) << 1) | 1))}};
static const lean_object* lp_SoftwareLogic__Go_mixedMoves___closed__6 = (const lean_object*)&lp_SoftwareLogic__Go_mixedMoves___closed__6_value;
static const lean_ctor_object lp_SoftwareLogic__Go_mixedMoves___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_mixedMoves___closed__6_value)}};
static const lean_object* lp_SoftwareLogic__Go_mixedMoves___closed__7 = (const lean_object*)&lp_SoftwareLogic__Go_mixedMoves___closed__7_value;
static const lean_ctor_object lp_SoftwareLogic__Go_mixedMoves___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_mixedMoves___closed__7_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_SoftwareLogic__Go_mixedMoves___closed__8 = (const lean_object*)&lp_SoftwareLogic__Go_mixedMoves___closed__8_value;
static const lean_ctor_object lp_SoftwareLogic__Go_mixedMoves___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_mixedMoves___closed__5_value),((lean_object*)&lp_SoftwareLogic__Go_mixedMoves___closed__8_value)}};
static const lean_object* lp_SoftwareLogic__Go_mixedMoves___closed__9 = (const lean_object*)&lp_SoftwareLogic__Go_mixedMoves___closed__9_value;
static const lean_ctor_object lp_SoftwareLogic__Go_mixedMoves___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&lp_SoftwareLogic__Go_mixedMoves___closed__9_value)}};
static const lean_object* lp_SoftwareLogic__Go_mixedMoves___closed__10 = (const lean_object*)&lp_SoftwareLogic__Go_mixedMoves___closed__10_value;
static const lean_ctor_object lp_SoftwareLogic__Go_mixedMoves___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_mixedMoves___closed__3_value),((lean_object*)&lp_SoftwareLogic__Go_mixedMoves___closed__10_value)}};
static const lean_object* lp_SoftwareLogic__Go_mixedMoves___closed__11 = (const lean_object*)&lp_SoftwareLogic__Go_mixedMoves___closed__11_value;
static const lean_ctor_object lp_SoftwareLogic__Go_mixedMoves___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_mixedMoves___closed__1_value),((lean_object*)&lp_SoftwareLogic__Go_mixedMoves___closed__11_value)}};
static const lean_object* lp_SoftwareLogic__Go_mixedMoves___closed__12 = (const lean_object*)&lp_SoftwareLogic__Go_mixedMoves___closed__12_value;
LEAN_EXPORT const lean_object* lp_SoftwareLogic__Go_mixedMoves = (const lean_object*)&lp_SoftwareLogic__Go_mixedMoves___closed__12_value;
static lean_once_cell_t lp_SoftwareLogic__Go_mixedState_x3f___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_SoftwareLogic__Go_mixedState_x3f___closed__0;
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_mixedState_x3f;
static const lean_string_object lp_SoftwareLogic__Go_main___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "=== FORMALLY VERIFIED MINI-GO DEMO ==="};
static const lean_object* lp_SoftwareLogic__Go_main___closed__0 = (const lean_object*)&lp_SoftwareLogic__Go_main___closed__0_value;
static const lean_string_object lp_SoftwareLogic__Go_main___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Initial state:"};
static const lean_object* lp_SoftwareLogic__Go_main___closed__1 = (const lean_object*)&lp_SoftwareLogic__Go_main___closed__1_value;
static const lean_string_object lp_SoftwareLogic__Go_main___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Mixed sequence including pass:"};
static const lean_object* lp_SoftwareLogic__Go_main___closed__2 = (const lean_object*)&lp_SoftwareLogic__Go_main___closed__2_value;
static const lean_string_object lp_SoftwareLogic__Go_main___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 62, .m_capacity = 62, .m_length = 61, .m_data = "Proof-backed properties demonstrated by successful execution:"};
static const lean_object* lp_SoftwareLogic__Go_main___closed__3 = (const lean_object*)&lp_SoftwareLogic__Go_main___closed__3_value;
static const lean_string_object lp_SoftwareLogic__Go_main___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "- legal moves are checked before being applied"};
static const lean_object* lp_SoftwareLogic__Go_main___closed__4 = (const lean_object*)&lp_SoftwareLogic__Go_main___closed__4_value;
static const lean_string_object lp_SoftwareLogic__Go_main___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "- illegal moves return none"};
static const lean_object* lp_SoftwareLogic__Go_main___closed__5 = (const lean_object*)&lp_SoftwareLogic__Go_main___closed__5_value;
static const lean_string_object lp_SoftwareLogic__Go_main___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "- pass switches turns"};
static const lean_object* lp_SoftwareLogic__Go_main___closed__6 = (const lean_object*)&lp_SoftwareLogic__Go_main___closed__6_value;
static const lean_string_object lp_SoftwareLogic__Go_main___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "- move sequences compose through applyMoves\?"};
static const lean_object* lp_SoftwareLogic__Go_main___closed__7 = (const lean_object*)&lp_SoftwareLogic__Go_main___closed__7_value;
static const lean_string_object lp_SoftwareLogic__Go_main___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "- captures are resolved during placement"};
static const lean_object* lp_SoftwareLogic__Go_main___closed__8 = (const lean_object*)&lp_SoftwareLogic__Go_main___closed__8_value;
static const lean_string_object lp_SoftwareLogic__Go_main___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "=== END DEMO ==="};
static const lean_object* lp_SoftwareLogic__Go_main___closed__9 = (const lean_object*)&lp_SoftwareLogic__Go_main___closed__9_value;
static const lean_string_object lp_SoftwareLogic__Go_main___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 61, .m_capacity = 61, .m_length = 60, .m_data = "Runtime-style check constructs a proof-carrying center move:"};
static const lean_object* lp_SoftwareLogic__Go_main___closed__10 = (const lean_object*)&lp_SoftwareLogic__Go_main___closed__10_value;
static const lean_string_object lp_SoftwareLogic__Go_main___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 51, .m_capacity = 51, .m_length = 50, .m_data = "Runtime-style check rejects an out-of-bounds move:"};
static const lean_object* lp_SoftwareLogic__Go_main___closed__11 = (const lean_object*)&lp_SoftwareLogic__Go_main___closed__11_value;
static const lean_ctor_object lp_SoftwareLogic__Go_main___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(9) << 1) | 1)),((lean_object*)(((size_t)(9) << 1) | 1))}};
static const lean_object* lp_SoftwareLogic__Go_main___closed__12 = (const lean_object*)&lp_SoftwareLogic__Go_main___closed__12_value;
static const lean_ctor_object lp_SoftwareLogic__Go_main___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_main___closed__12_value)}};
static const lean_object* lp_SoftwareLogic__Go_main___closed__13 = (const lean_object*)&lp_SoftwareLogic__Go_main___closed__13_value;
static const lean_string_object lp_SoftwareLogic__Go_main___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 51, .m_capacity = 51, .m_length = 50, .m_data = "Legal move at center on empty board (.place (2,2))"};
static const lean_object* lp_SoftwareLogic__Go_main___closed__14 = (const lean_object*)&lp_SoftwareLogic__Go_main___closed__14_value;
static const lean_string_object lp_SoftwareLogic__Go_main___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "Illegal move out of bounds (.place (9,9))"};
static const lean_object* lp_SoftwareLogic__Go_main___closed__15 = (const lean_object*)&lp_SoftwareLogic__Go_main___closed__15_value;
static const lean_string_object lp_SoftwareLogic__Go_main___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Pass is always legal"};
static const lean_object* lp_SoftwareLogic__Go_main___closed__16 = (const lean_object*)&lp_SoftwareLogic__Go_main___closed__16_value;
static const lean_string_object lp_SoftwareLogic__Go_main___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Single legal placement at center:"};
static const lean_object* lp_SoftwareLogic__Go_main___closed__17 = (const lean_object*)&lp_SoftwareLogic__Go_main___closed__17_value;
static const lean_string_object lp_SoftwareLogic__Go_main___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Concrete suicide-prevention state:"};
static const lean_object* lp_SoftwareLogic__Go_main___closed__18 = (const lean_object*)&lp_SoftwareLogic__Go_main___closed__18_value;
static const lean_string_object lp_SoftwareLogic__Go_main___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "Black suicide at surrounded center (.place (1,1))"};
static const lean_object* lp_SoftwareLogic__Go_main___closed__19 = (const lean_object*)&lp_SoftwareLogic__Go_main___closed__19_value;
static const lean_string_object lp_SoftwareLogic__Go_main___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 54, .m_data = "Attempting the suicide move through checked execution:"};
static const lean_object* lp_SoftwareLogic__Go_main___closed__20 = (const lean_object*)&lp_SoftwareLogic__Go_main___closed__20_value;
static lean_once_cell_t lp_SoftwareLogic__Go_main___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_SoftwareLogic__Go_main___closed__21;
static const lean_string_object lp_SoftwareLogic__Go_main___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "Legality checks from an intermediate state:"};
static const lean_object* lp_SoftwareLogic__Go_main___closed__22 = (const lean_object*)&lp_SoftwareLogic__Go_main___closed__22_value;
static const lean_string_object lp_SoftwareLogic__Go_main___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "could not create intermediate state"};
static const lean_object* lp_SoftwareLogic__Go_main___closed__23 = (const lean_object*)&lp_SoftwareLogic__Go_main___closed__23_value;
static const lean_string_object lp_SoftwareLogic__Go_main___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "State after Black plays center:"};
static const lean_object* lp_SoftwareLogic__Go_main___closed__24 = (const lean_object*)&lp_SoftwareLogic__Go_main___closed__24_value;
static const lean_string_object lp_SoftwareLogic__Go_main___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "Trying to replay on occupied center (should be false)"};
static const lean_object* lp_SoftwareLogic__Go_main___closed__25 = (const lean_object*)&lp_SoftwareLogic__Go_main___closed__25_value;
static const lean_string_object lp_SoftwareLogic__Go_main___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "Playing a different empty in-bounds point"};
static const lean_object* lp_SoftwareLogic__Go_main___closed__26 = (const lean_object*)&lp_SoftwareLogic__Go_main___closed__26_value;
static const lean_string_object lp_SoftwareLogic__Go_main___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "Out-of-bounds move from intermediate state"};
static const lean_object* lp_SoftwareLogic__Go_main___closed__27 = (const lean_object*)&lp_SoftwareLogic__Go_main___closed__27_value;
static const lean_ctor_object lp_SoftwareLogic__Go_main___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(7) << 1) | 1)),((lean_object*)(((size_t)(7) << 1) | 1))}};
static const lean_object* lp_SoftwareLogic__Go_main___closed__28 = (const lean_object*)&lp_SoftwareLogic__Go_main___closed__28_value;
static const lean_ctor_object lp_SoftwareLogic__Go_main___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_main___closed__28_value)}};
static const lean_object* lp_SoftwareLogic__Go_main___closed__29 = (const lean_object*)&lp_SoftwareLogic__Go_main___closed__29_value;
static const lean_string_object lp_SoftwareLogic__Go_main___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 54, .m_data = "Capture scenario (white surrounds and captures black):"};
static const lean_object* lp_SoftwareLogic__Go_main___closed__30 = (const lean_object*)&lp_SoftwareLogic__Go_main___closed__30_value;
static const lean_string_object lp_SoftwareLogic__Go_main___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Direct capture checks:"};
static const lean_object* lp_SoftwareLogic__Go_main___closed__31 = (const lean_object*)&lp_SoftwareLogic__Go_main___closed__31_value;
static const lean_string_object lp_SoftwareLogic__Go_main___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "capture sequence failed"};
static const lean_object* lp_SoftwareLogic__Go_main___closed__32 = (const lean_object*)&lp_SoftwareLogic__Go_main___closed__32_value;
static const lean_string_object lp_SoftwareLogic__Go_main___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "captured point (1,1) = "};
static const lean_object* lp_SoftwareLogic__Go_main___closed__33 = (const lean_object*)&lp_SoftwareLogic__Go_main___closed__33_value;
static const lean_string_object lp_SoftwareLogic__Go_main___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "white surrounders = "};
static const lean_object* lp_SoftwareLogic__Go_main___closed__34 = (const lean_object*)&lp_SoftwareLogic__Go_main___closed__34_value;
static const lean_string_object lp_SoftwareLogic__Go_main___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 53, .m_capacity = 53, .m_length = 52, .m_data = "Attempt to place on an occupied point (should fail):"};
static const lean_object* lp_SoftwareLogic__Go_main___closed__35 = (const lean_object*)&lp_SoftwareLogic__Go_main___closed__35_value;
static const lean_string_object lp_SoftwareLogic__Go_main___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Pass move from initial state:"};
static const lean_object* lp_SoftwareLogic__Go_main___closed__36 = (const lean_object*)&lp_SoftwareLogic__Go_main___closed__36_value;
static const lean_string_object lp_SoftwareLogic__Go_main___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Demo sequence from the project:"};
static const lean_object* lp_SoftwareLogic__Go_main___closed__37 = (const lean_object*)&lp_SoftwareLogic__Go_main___closed__37_value;
static const lean_string_object lp_SoftwareLogic__Go_main___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "Checking the final demo board directly:"};
static const lean_object* lp_SoftwareLogic__Go_main___closed__38 = (const lean_object*)&lp_SoftwareLogic__Go_main___closed__38_value;
static const lean_string_object lp_SoftwareLogic__Go_main___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "illegal move sequence"};
static const lean_object* lp_SoftwareLogic__Go_main___closed__39 = (const lean_object*)&lp_SoftwareLogic__Go_main___closed__39_value;
LEAN_EXPORT lean_object* _lean_main();
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_main___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_IO_print___at___00IO_println___at___00showState_spec__0_spec__0(lean_object* v_s_1_){
_start:
{
lean_object* v___x_3_; lean_object* v_putStr_4_; lean_object* v___x_5_; 
v___x_3_ = lean_get_stdout();
v_putStr_4_ = lean_ctor_get(v___x_3_, 4);
lean_inc_ref(v_putStr_4_);
lean_dec_ref(v___x_3_);
v___x_5_ = lean_apply_2(v_putStr_4_, v_s_1_, lean_box(0));
return v___x_5_;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_IO_print___at___00IO_println___at___00showState_spec__0_spec__0___boxed(lean_object* v_s_6_, lean_object* v_a_7_){
_start:
{
lean_object* v_res_8_; 
v_res_8_ = lp_SoftwareLogic__Go_IO_print___at___00IO_println___at___00showState_spec__0_spec__0(v_s_6_);
return v_res_8_;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(lean_object* v_s_9_){
_start:
{
uint32_t v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; 
v___x_11_ = 10;
v___x_12_ = lean_string_push(v_s_9_, v___x_11_);
v___x_13_ = lp_SoftwareLogic__Go_IO_print___at___00IO_println___at___00showState_spec__0_spec__0(v___x_12_);
return v___x_13_;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0___boxed(lean_object* v_s_14_, lean_object* v_a_15_){
_start:
{
lean_object* v_res_16_; 
v_res_16_ = lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(v_s_14_);
return v_res_16_;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_showState(lean_object* v_label_19_, lean_object* v_st_20_){
_start:
{
lean_object* v___x_22_; 
v___x_22_ = lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(v_label_19_);
if (lean_obj_tag(v___x_22_) == 0)
{
lean_object* v_board_23_; uint8_t v_turn_24_; lean_object* v___x_25_; lean_object* v___x_26_; 
lean_dec_ref(v___x_22_);
v_board_23_ = lean_ctor_get(v_st_20_, 1);
lean_inc(v_board_23_);
v_turn_24_ = lean_ctor_get_uint8(v_st_20_, sizeof(void*)*2);
lean_dec_ref(v_st_20_);
v___x_25_ = lp_SoftwareLogic__Go_Go_boardToString(v_board_23_);
v___x_26_ = lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(v___x_25_);
if (lean_obj_tag(v___x_26_) == 0)
{
lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; lean_object* v___x_32_; lean_object* v___x_33_; 
lean_dec_ref(v___x_26_);
v___x_27_ = ((lean_object*)(lp_SoftwareLogic__Go_showState___closed__0));
v___x_28_ = lean_unsigned_to_nat(0u);
v___x_29_ = lp_SoftwareLogic__Go_Go_instReprStone_repr(v_turn_24_, v___x_28_);
v___x_30_ = lean_unsigned_to_nat(120u);
v___x_31_ = l_Std_Format_pretty(v___x_29_, v___x_30_, v___x_28_, v___x_28_);
v___x_32_ = lean_string_append(v___x_27_, v___x_31_);
lean_dec_ref(v___x_31_);
v___x_33_ = lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(v___x_32_);
if (lean_obj_tag(v___x_33_) == 0)
{
lean_object* v___x_34_; lean_object* v___x_35_; 
lean_dec_ref(v___x_33_);
v___x_34_ = ((lean_object*)(lp_SoftwareLogic__Go_showState___closed__1));
v___x_35_ = lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(v___x_34_);
return v___x_35_;
}
else
{
return v___x_33_;
}
}
else
{
return v___x_26_;
}
}
else
{
lean_dec_ref(v_st_20_);
return v___x_22_;
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_showState___boxed(lean_object* v_label_36_, lean_object* v_st_37_, lean_object* v_a_38_){
_start:
{
lean_object* v_res_39_; 
v_res_39_ = lp_SoftwareLogic__Go_showState(v_label_36_, v_st_37_);
return v_res_39_;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_showResult(lean_object* v_label_41_, lean_object* v_st_x3f_42_){
_start:
{
lean_object* v___x_47_; 
v___x_47_ = lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(v_label_41_);
if (lean_obj_tag(v___x_47_) == 0)
{
lean_dec_ref(v___x_47_);
if (lean_obj_tag(v_st_x3f_42_) == 0)
{
lean_object* v___x_48_; lean_object* v___x_49_; 
v___x_48_ = ((lean_object*)(lp_SoftwareLogic__Go_showResult___closed__0));
v___x_49_ = lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(v___x_48_);
if (lean_obj_tag(v___x_49_) == 0)
{
lean_dec_ref(v___x_49_);
goto v___jp_44_;
}
else
{
return v___x_49_;
}
}
else
{
lean_object* v_val_50_; lean_object* v_board_51_; uint8_t v_turn_52_; lean_object* v___x_53_; lean_object* v___x_54_; 
v_val_50_ = lean_ctor_get(v_st_x3f_42_, 0);
lean_inc(v_val_50_);
lean_dec_ref(v_st_x3f_42_);
v_board_51_ = lean_ctor_get(v_val_50_, 1);
lean_inc(v_board_51_);
v_turn_52_ = lean_ctor_get_uint8(v_val_50_, sizeof(void*)*2);
lean_dec(v_val_50_);
v___x_53_ = lp_SoftwareLogic__Go_Go_boardToString(v_board_51_);
v___x_54_ = lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(v___x_53_);
if (lean_obj_tag(v___x_54_) == 0)
{
lean_object* v___x_55_; lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; 
lean_dec_ref(v___x_54_);
v___x_55_ = ((lean_object*)(lp_SoftwareLogic__Go_showState___closed__0));
v___x_56_ = lean_unsigned_to_nat(0u);
v___x_57_ = lp_SoftwareLogic__Go_Go_instReprStone_repr(v_turn_52_, v___x_56_);
v___x_58_ = lean_unsigned_to_nat(120u);
v___x_59_ = l_Std_Format_pretty(v___x_57_, v___x_58_, v___x_56_, v___x_56_);
v___x_60_ = lean_string_append(v___x_55_, v___x_59_);
lean_dec_ref(v___x_59_);
v___x_61_ = lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(v___x_60_);
if (lean_obj_tag(v___x_61_) == 0)
{
lean_dec_ref(v___x_61_);
goto v___jp_44_;
}
else
{
return v___x_61_;
}
}
else
{
return v___x_54_;
}
}
}
else
{
lean_dec(v_st_x3f_42_);
return v___x_47_;
}
v___jp_44_:
{
lean_object* v___x_45_; lean_object* v___x_46_; 
v___x_45_ = ((lean_object*)(lp_SoftwareLogic__Go_showState___closed__1));
v___x_46_ = lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(v___x_45_);
return v___x_46_;
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_showResult___boxed(lean_object* v_label_62_, lean_object* v_st_x3f_63_, lean_object* v_a_64_){
_start:
{
lean_object* v_res_65_; 
v_res_65_ = lp_SoftwareLogic__Go_showResult(v_label_62_, v_st_x3f_63_);
return v_res_65_;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_showLegality(lean_object* v_label_69_, lean_object* v_st_70_, lean_object* v_m_71_){
_start:
{
lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___y_76_; uint8_t v___x_81_; 
v___x_73_ = ((lean_object*)(lp_SoftwareLogic__Go_showLegality___closed__0));
v___x_74_ = lean_string_append(v_label_69_, v___x_73_);
v___x_81_ = lp_SoftwareLogic__Go_Go_legalMove(v_st_70_, v_m_71_);
if (v___x_81_ == 0)
{
lean_object* v___x_82_; 
v___x_82_ = ((lean_object*)(lp_SoftwareLogic__Go_showLegality___closed__1));
v___y_76_ = v___x_82_;
goto v___jp_75_;
}
else
{
lean_object* v___x_83_; 
v___x_83_ = ((lean_object*)(lp_SoftwareLogic__Go_showLegality___closed__2));
v___y_76_ = v___x_83_;
goto v___jp_75_;
}
v___jp_75_:
{
lean_object* v___x_77_; lean_object* v___x_78_; 
v___x_77_ = lean_string_append(v___x_74_, v___y_76_);
v___x_78_ = lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(v___x_77_);
if (lean_obj_tag(v___x_78_) == 0)
{
lean_object* v___x_79_; lean_object* v___x_80_; 
lean_dec_ref(v___x_78_);
v___x_79_ = ((lean_object*)(lp_SoftwareLogic__Go_showState___closed__1));
v___x_80_ = lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(v___x_79_);
return v___x_80_;
}
else
{
return v___x_78_;
}
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_showLegality___boxed(lean_object* v_label_84_, lean_object* v_st_85_, lean_object* v_m_86_, lean_object* v_a_87_){
_start:
{
lean_object* v_res_88_; 
v_res_88_ = lp_SoftwareLogic__Go_showLegality(v_label_84_, v_st_85_, v_m_86_);
return v_res_88_;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_showCheckedMove(lean_object* v_label_93_, lean_object* v_st_94_, lean_object* v_m_95_){
_start:
{
lean_object* v___x_100_; 
v___x_100_ = lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(v_label_93_);
if (lean_obj_tag(v___x_100_) == 0)
{
lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; 
lean_dec_ref(v___x_100_);
v___x_101_ = ((lean_object*)(lp_SoftwareLogic__Go_showCheckedMove___closed__0));
v___x_102_ = lean_unsigned_to_nat(0u);
lean_inc(v_m_95_);
v___x_103_ = lp_SoftwareLogic__Go_Go_instReprMove_repr(v_m_95_, v___x_102_);
v___x_104_ = lean_unsigned_to_nat(120u);
v___x_105_ = l_Std_Format_pretty(v___x_103_, v___x_104_, v___x_102_, v___x_102_);
v___x_106_ = lean_string_append(v___x_101_, v___x_105_);
lean_dec_ref(v___x_105_);
v___x_107_ = lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(v___x_106_);
if (lean_obj_tag(v___x_107_) == 0)
{
lean_object* v___x_108_; 
lean_dec_ref(v___x_107_);
v___x_108_ = lp_SoftwareLogic__Go_Go_checkMove_x3f(v_st_94_, v_m_95_);
if (lean_obj_tag(v___x_108_) == 0)
{
lean_object* v___x_109_; lean_object* v___x_110_; 
v___x_109_ = ((lean_object*)(lp_SoftwareLogic__Go_showCheckedMove___closed__1));
v___x_110_ = lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(v___x_109_);
if (lean_obj_tag(v___x_110_) == 0)
{
lean_dec_ref(v___x_110_);
goto v___jp_97_;
}
else
{
return v___x_110_;
}
}
else
{
lean_object* v_val_111_; lean_object* v___x_112_; lean_object* v___x_113_; 
v_val_111_ = lean_ctor_get(v___x_108_, 0);
lean_inc(v_val_111_);
lean_dec_ref(v___x_108_);
v___x_112_ = ((lean_object*)(lp_SoftwareLogic__Go_showCheckedMove___closed__2));
v___x_113_ = lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(v___x_112_);
if (lean_obj_tag(v___x_113_) == 0)
{
lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; 
lean_dec_ref(v___x_113_);
v___x_114_ = ((lean_object*)(lp_SoftwareLogic__Go_showCheckedMove___closed__3));
v___x_115_ = lp_SoftwareLogic__Go_Go_instReprMove_repr(v_val_111_, v___x_102_);
v___x_116_ = l_Std_Format_pretty(v___x_115_, v___x_104_, v___x_102_, v___x_102_);
v___x_117_ = lean_string_append(v___x_114_, v___x_116_);
lean_dec_ref(v___x_116_);
v___x_118_ = lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(v___x_117_);
if (lean_obj_tag(v___x_118_) == 0)
{
lean_dec_ref(v___x_118_);
goto v___jp_97_;
}
else
{
return v___x_118_;
}
}
else
{
lean_dec(v_val_111_);
return v___x_113_;
}
}
}
else
{
lean_dec(v_m_95_);
lean_dec_ref(v_st_94_);
return v___x_107_;
}
}
else
{
lean_dec(v_m_95_);
lean_dec_ref(v_st_94_);
return v___x_100_;
}
v___jp_97_:
{
lean_object* v___x_98_; lean_object* v___x_99_; 
v___x_98_ = ((lean_object*)(lp_SoftwareLogic__Go_showState___closed__1));
v___x_99_ = lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(v___x_98_);
return v___x_99_;
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_showCheckedMove___boxed(lean_object* v_label_119_, lean_object* v_st_120_, lean_object* v_m_121_, lean_object* v_a_122_){
_start:
{
lean_object* v_res_123_; 
v_res_123_ = lp_SoftwareLogic__Go_showCheckedMove(v_label_119_, v_st_120_, v_m_121_);
return v_res_123_;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_applyAndShow(lean_object* v_label_124_, lean_object* v_st_125_, lean_object* v_m_126_){
_start:
{
lean_object* v___x_131_; 
v___x_131_ = lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(v_label_124_);
if (lean_obj_tag(v___x_131_) == 0)
{
lean_object* v___x_132_; lean_object* v___x_133_; lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; 
lean_dec_ref(v___x_131_);
v___x_132_ = ((lean_object*)(lp_SoftwareLogic__Go_showCheckedMove___closed__0));
v___x_133_ = lean_unsigned_to_nat(0u);
lean_inc(v_m_126_);
v___x_134_ = lp_SoftwareLogic__Go_Go_instReprMove_repr(v_m_126_, v___x_133_);
v___x_135_ = lean_unsigned_to_nat(120u);
v___x_136_ = l_Std_Format_pretty(v___x_134_, v___x_135_, v___x_133_, v___x_133_);
v___x_137_ = lean_string_append(v___x_132_, v___x_136_);
lean_dec_ref(v___x_136_);
v___x_138_ = lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(v___x_137_);
if (lean_obj_tag(v___x_138_) == 0)
{
lean_object* v___x_139_; 
lean_dec_ref(v___x_138_);
v___x_139_ = lp_SoftwareLogic__Go_Go_applyMove_x3f(v_st_125_, v_m_126_);
if (lean_obj_tag(v___x_139_) == 0)
{
lean_object* v___x_140_; lean_object* v___x_141_; 
v___x_140_ = ((lean_object*)(lp_SoftwareLogic__Go_showResult___closed__0));
v___x_141_ = lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(v___x_140_);
if (lean_obj_tag(v___x_141_) == 0)
{
lean_dec_ref(v___x_141_);
goto v___jp_128_;
}
else
{
return v___x_141_;
}
}
else
{
lean_object* v_val_142_; lean_object* v_board_143_; uint8_t v_turn_144_; lean_object* v___x_145_; lean_object* v___x_146_; 
v_val_142_ = lean_ctor_get(v___x_139_, 0);
lean_inc(v_val_142_);
lean_dec_ref(v___x_139_);
v_board_143_ = lean_ctor_get(v_val_142_, 1);
lean_inc(v_board_143_);
v_turn_144_ = lean_ctor_get_uint8(v_val_142_, sizeof(void*)*2);
lean_dec(v_val_142_);
v___x_145_ = lp_SoftwareLogic__Go_Go_boardToString(v_board_143_);
v___x_146_ = lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(v___x_145_);
if (lean_obj_tag(v___x_146_) == 0)
{
lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; 
lean_dec_ref(v___x_146_);
v___x_147_ = ((lean_object*)(lp_SoftwareLogic__Go_showState___closed__0));
v___x_148_ = lp_SoftwareLogic__Go_Go_instReprStone_repr(v_turn_144_, v___x_133_);
v___x_149_ = l_Std_Format_pretty(v___x_148_, v___x_135_, v___x_133_, v___x_133_);
v___x_150_ = lean_string_append(v___x_147_, v___x_149_);
lean_dec_ref(v___x_149_);
v___x_151_ = lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(v___x_150_);
if (lean_obj_tag(v___x_151_) == 0)
{
lean_dec_ref(v___x_151_);
goto v___jp_128_;
}
else
{
return v___x_151_;
}
}
else
{
return v___x_146_;
}
}
}
else
{
lean_dec(v_m_126_);
lean_dec_ref(v_st_125_);
return v___x_138_;
}
}
else
{
lean_dec(v_m_126_);
lean_dec_ref(v_st_125_);
return v___x_131_;
}
v___jp_128_:
{
lean_object* v___x_129_; lean_object* v___x_130_; 
v___x_129_ = ((lean_object*)(lp_SoftwareLogic__Go_showState___closed__1));
v___x_130_ = lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(v___x_129_);
return v___x_130_;
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_applyAndShow___boxed(lean_object* v_label_152_, lean_object* v_st_153_, lean_object* v_m_154_, lean_object* v_a_155_){
_start:
{
lean_object* v_res_156_; 
v_res_156_ = lp_SoftwareLogic__Go_applyAndShow(v_label_152_, v_st_153_, v_m_154_);
return v_res_156_;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Std_Format_joinSep___at___00List_repr___at___00showSequence_spec__0_spec__0___lam__0(lean_object* v___y_157_){
_start:
{
lean_object* v___x_158_; lean_object* v___x_159_; 
v___x_158_ = lean_unsigned_to_nat(0u);
v___x_159_ = lp_SoftwareLogic__Go_Go_instReprMove_repr(v___y_157_, v___x_158_);
return v___x_159_;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00showSequence_spec__0_spec__0_spec__1_spec__2(lean_object* v_x_160_, lean_object* v_x_161_, lean_object* v_x_162_){
_start:
{
if (lean_obj_tag(v_x_162_) == 0)
{
lean_dec(v_x_160_);
return v_x_161_;
}
else
{
lean_object* v_head_163_; lean_object* v_tail_164_; lean_object* v___x_166_; uint8_t v_isShared_167_; uint8_t v_isSharedCheck_175_; 
v_head_163_ = lean_ctor_get(v_x_162_, 0);
v_tail_164_ = lean_ctor_get(v_x_162_, 1);
v_isSharedCheck_175_ = !lean_is_exclusive(v_x_162_);
if (v_isSharedCheck_175_ == 0)
{
v___x_166_ = v_x_162_;
v_isShared_167_ = v_isSharedCheck_175_;
goto v_resetjp_165_;
}
else
{
lean_inc(v_tail_164_);
lean_inc(v_head_163_);
lean_dec(v_x_162_);
v___x_166_ = lean_box(0);
v_isShared_167_ = v_isSharedCheck_175_;
goto v_resetjp_165_;
}
v_resetjp_165_:
{
lean_object* v___x_169_; 
lean_inc(v_x_160_);
if (v_isShared_167_ == 0)
{
lean_ctor_set_tag(v___x_166_, 5);
lean_ctor_set(v___x_166_, 1, v_x_160_);
lean_ctor_set(v___x_166_, 0, v_x_161_);
v___x_169_ = v___x_166_;
goto v_reusejp_168_;
}
else
{
lean_object* v_reuseFailAlloc_174_; 
v_reuseFailAlloc_174_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_174_, 0, v_x_161_);
lean_ctor_set(v_reuseFailAlloc_174_, 1, v_x_160_);
v___x_169_ = v_reuseFailAlloc_174_;
goto v_reusejp_168_;
}
v_reusejp_168_:
{
lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; 
v___x_170_ = lean_unsigned_to_nat(0u);
v___x_171_ = lp_SoftwareLogic__Go_Go_instReprMove_repr(v_head_163_, v___x_170_);
v___x_172_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_172_, 0, v___x_169_);
lean_ctor_set(v___x_172_, 1, v___x_171_);
v_x_161_ = v___x_172_;
v_x_162_ = v_tail_164_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00showSequence_spec__0_spec__0_spec__1(lean_object* v_x_176_, lean_object* v_x_177_, lean_object* v_x_178_){
_start:
{
if (lean_obj_tag(v_x_178_) == 0)
{
lean_dec(v_x_176_);
return v_x_177_;
}
else
{
lean_object* v_head_179_; lean_object* v_tail_180_; lean_object* v___x_182_; uint8_t v_isShared_183_; uint8_t v_isSharedCheck_191_; 
v_head_179_ = lean_ctor_get(v_x_178_, 0);
v_tail_180_ = lean_ctor_get(v_x_178_, 1);
v_isSharedCheck_191_ = !lean_is_exclusive(v_x_178_);
if (v_isSharedCheck_191_ == 0)
{
v___x_182_ = v_x_178_;
v_isShared_183_ = v_isSharedCheck_191_;
goto v_resetjp_181_;
}
else
{
lean_inc(v_tail_180_);
lean_inc(v_head_179_);
lean_dec(v_x_178_);
v___x_182_ = lean_box(0);
v_isShared_183_ = v_isSharedCheck_191_;
goto v_resetjp_181_;
}
v_resetjp_181_:
{
lean_object* v___x_185_; 
lean_inc(v_x_176_);
if (v_isShared_183_ == 0)
{
lean_ctor_set_tag(v___x_182_, 5);
lean_ctor_set(v___x_182_, 1, v_x_176_);
lean_ctor_set(v___x_182_, 0, v_x_177_);
v___x_185_ = v___x_182_;
goto v_reusejp_184_;
}
else
{
lean_object* v_reuseFailAlloc_190_; 
v_reuseFailAlloc_190_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_190_, 0, v_x_177_);
lean_ctor_set(v_reuseFailAlloc_190_, 1, v_x_176_);
v___x_185_ = v_reuseFailAlloc_190_;
goto v_reusejp_184_;
}
v_reusejp_184_:
{
lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; 
v___x_186_ = lean_unsigned_to_nat(0u);
v___x_187_ = lp_SoftwareLogic__Go_Go_instReprMove_repr(v_head_179_, v___x_186_);
v___x_188_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_188_, 0, v___x_185_);
lean_ctor_set(v___x_188_, 1, v___x_187_);
v___x_189_ = lp_SoftwareLogic__Go_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00showSequence_spec__0_spec__0_spec__1_spec__2(v_x_176_, v___x_188_, v_tail_180_);
return v___x_189_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Std_Format_joinSep___at___00List_repr___at___00showSequence_spec__0_spec__0(lean_object* v_x_192_, lean_object* v_x_193_){
_start:
{
if (lean_obj_tag(v_x_192_) == 0)
{
lean_object* v___x_194_; 
lean_dec(v_x_193_);
v___x_194_ = lean_box(0);
return v___x_194_;
}
else
{
lean_object* v_tail_195_; 
v_tail_195_ = lean_ctor_get(v_x_192_, 1);
if (lean_obj_tag(v_tail_195_) == 0)
{
lean_object* v_head_196_; lean_object* v___x_197_; 
lean_dec(v_x_193_);
v_head_196_ = lean_ctor_get(v_x_192_, 0);
lean_inc(v_head_196_);
lean_dec_ref(v_x_192_);
v___x_197_ = lp_SoftwareLogic__Go_Std_Format_joinSep___at___00List_repr___at___00showSequence_spec__0_spec__0___lam__0(v_head_196_);
return v___x_197_;
}
else
{
lean_object* v_head_198_; lean_object* v___x_199_; lean_object* v___x_200_; 
lean_inc(v_tail_195_);
v_head_198_ = lean_ctor_get(v_x_192_, 0);
lean_inc(v_head_198_);
lean_dec_ref(v_x_192_);
v___x_199_ = lp_SoftwareLogic__Go_Std_Format_joinSep___at___00List_repr___at___00showSequence_spec__0_spec__0___lam__0(v_head_198_);
v___x_200_ = lp_SoftwareLogic__Go_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00showSequence_spec__0_spec__0_spec__1(v_x_193_, v___x_199_, v_tail_195_);
return v___x_200_;
}
}
}
}
static lean_object* _init_lp_SoftwareLogic__Go_List_repr___at___00showSequence_spec__0___redArg___closed__7(void){
_start:
{
lean_object* v___x_212_; lean_object* v___x_213_; 
v___x_212_ = ((lean_object*)(lp_SoftwareLogic__Go_List_repr___at___00showSequence_spec__0___redArg___closed__2));
v___x_213_ = lean_string_length(v___x_212_);
return v___x_213_;
}
}
static lean_object* _init_lp_SoftwareLogic__Go_List_repr___at___00showSequence_spec__0___redArg___closed__8(void){
_start:
{
lean_object* v___x_214_; lean_object* v___x_215_; 
v___x_214_ = lean_obj_once(&lp_SoftwareLogic__Go_List_repr___at___00showSequence_spec__0___redArg___closed__7, &lp_SoftwareLogic__Go_List_repr___at___00showSequence_spec__0___redArg___closed__7_once, _init_lp_SoftwareLogic__Go_List_repr___at___00showSequence_spec__0___redArg___closed__7);
v___x_215_ = lean_nat_to_int(v___x_214_);
return v___x_215_;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_repr___at___00showSequence_spec__0___redArg(lean_object* v_a_220_){
_start:
{
if (lean_obj_tag(v_a_220_) == 0)
{
lean_object* v___x_221_; 
v___x_221_ = ((lean_object*)(lp_SoftwareLogic__Go_List_repr___at___00showSequence_spec__0___redArg___closed__1));
return v___x_221_;
}
else
{
lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; uint8_t v___x_230_; lean_object* v___x_231_; 
v___x_222_ = ((lean_object*)(lp_SoftwareLogic__Go_List_repr___at___00showSequence_spec__0___redArg___closed__5));
v___x_223_ = lp_SoftwareLogic__Go_Std_Format_joinSep___at___00List_repr___at___00showSequence_spec__0_spec__0(v_a_220_, v___x_222_);
v___x_224_ = lean_obj_once(&lp_SoftwareLogic__Go_List_repr___at___00showSequence_spec__0___redArg___closed__8, &lp_SoftwareLogic__Go_List_repr___at___00showSequence_spec__0___redArg___closed__8_once, _init_lp_SoftwareLogic__Go_List_repr___at___00showSequence_spec__0___redArg___closed__8);
v___x_225_ = ((lean_object*)(lp_SoftwareLogic__Go_List_repr___at___00showSequence_spec__0___redArg___closed__9));
v___x_226_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_226_, 0, v___x_225_);
lean_ctor_set(v___x_226_, 1, v___x_223_);
v___x_227_ = ((lean_object*)(lp_SoftwareLogic__Go_List_repr___at___00showSequence_spec__0___redArg___closed__10));
v___x_228_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_228_, 0, v___x_226_);
lean_ctor_set(v___x_228_, 1, v___x_227_);
v___x_229_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_229_, 0, v___x_224_);
lean_ctor_set(v___x_229_, 1, v___x_228_);
v___x_230_ = 0;
v___x_231_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_231_, 0, v___x_229_);
lean_ctor_set_uint8(v___x_231_, sizeof(void*)*1, v___x_230_);
return v___x_231_;
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_showSequence(lean_object* v_label_234_, lean_object* v_st_235_, lean_object* v_ms_236_){
_start:
{
lean_object* v___x_241_; 
v___x_241_ = lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(v_label_234_);
if (lean_obj_tag(v___x_241_) == 0)
{
lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; 
lean_dec_ref(v___x_241_);
v___x_242_ = ((lean_object*)(lp_SoftwareLogic__Go_showSequence___closed__0));
v___x_243_ = lean_unsigned_to_nat(0u);
lean_inc(v_ms_236_);
v___x_244_ = lp_SoftwareLogic__Go_List_repr___at___00showSequence_spec__0___redArg(v_ms_236_);
v___x_245_ = lean_unsigned_to_nat(120u);
v___x_246_ = l_Std_Format_pretty(v___x_244_, v___x_245_, v___x_243_, v___x_243_);
v___x_247_ = lean_string_append(v___x_242_, v___x_246_);
lean_dec_ref(v___x_246_);
v___x_248_ = lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(v___x_247_);
if (lean_obj_tag(v___x_248_) == 0)
{
lean_object* v___x_249_; 
lean_dec_ref(v___x_248_);
v___x_249_ = lp_SoftwareLogic__Go_Go_applyCheckedMoves_x3f(v_st_235_, v_ms_236_);
if (lean_obj_tag(v___x_249_) == 0)
{
lean_object* v___x_250_; lean_object* v___x_251_; 
v___x_250_ = ((lean_object*)(lp_SoftwareLogic__Go_showSequence___closed__1));
v___x_251_ = lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(v___x_250_);
if (lean_obj_tag(v___x_251_) == 0)
{
lean_dec_ref(v___x_251_);
goto v___jp_238_;
}
else
{
return v___x_251_;
}
}
else
{
lean_object* v_val_252_; lean_object* v_board_253_; uint8_t v_turn_254_; lean_object* v___x_255_; lean_object* v___x_256_; 
v_val_252_ = lean_ctor_get(v___x_249_, 0);
lean_inc(v_val_252_);
lean_dec_ref(v___x_249_);
v_board_253_ = lean_ctor_get(v_val_252_, 1);
lean_inc(v_board_253_);
v_turn_254_ = lean_ctor_get_uint8(v_val_252_, sizeof(void*)*2);
lean_dec(v_val_252_);
v___x_255_ = lp_SoftwareLogic__Go_Go_boardToString(v_board_253_);
v___x_256_ = lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(v___x_255_);
if (lean_obj_tag(v___x_256_) == 0)
{
lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; 
lean_dec_ref(v___x_256_);
v___x_257_ = ((lean_object*)(lp_SoftwareLogic__Go_showState___closed__0));
v___x_258_ = lp_SoftwareLogic__Go_Go_instReprStone_repr(v_turn_254_, v___x_243_);
v___x_259_ = l_Std_Format_pretty(v___x_258_, v___x_245_, v___x_243_, v___x_243_);
v___x_260_ = lean_string_append(v___x_257_, v___x_259_);
lean_dec_ref(v___x_259_);
v___x_261_ = lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(v___x_260_);
if (lean_obj_tag(v___x_261_) == 0)
{
lean_dec_ref(v___x_261_);
goto v___jp_238_;
}
else
{
return v___x_261_;
}
}
else
{
return v___x_256_;
}
}
}
else
{
lean_dec(v_ms_236_);
lean_dec_ref(v_st_235_);
return v___x_248_;
}
}
else
{
lean_dec(v_ms_236_);
lean_dec_ref(v_st_235_);
return v___x_241_;
}
v___jp_238_:
{
lean_object* v___x_239_; lean_object* v___x_240_; 
v___x_239_ = ((lean_object*)(lp_SoftwareLogic__Go_showState___closed__1));
v___x_240_ = lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(v___x_239_);
return v___x_240_;
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_showSequence___boxed(lean_object* v_label_262_, lean_object* v_st_263_, lean_object* v_ms_264_, lean_object* v_a_265_){
_start:
{
lean_object* v_res_266_; 
v_res_266_ = lp_SoftwareLogic__Go_showSequence(v_label_262_, v_st_263_, v_ms_264_);
return v_res_266_;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_repr___at___00showSequence_spec__0(lean_object* v_a_267_, lean_object* v_n_268_){
_start:
{
lean_object* v___x_269_; 
v___x_269_ = lp_SoftwareLogic__Go_List_repr___at___00showSequence_spec__0___redArg(v_a_267_);
return v___x_269_;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_repr___at___00showSequence_spec__0___boxed(lean_object* v_a_270_, lean_object* v_n_271_){
_start:
{
lean_object* v_res_272_; 
v_res_272_ = lp_SoftwareLogic__Go_List_repr___at___00showSequence_spec__0(v_a_270_, v_n_271_);
lean_dec(v_n_271_);
return v_res_272_;
}
}
static lean_object* _init_lp_SoftwareLogic__Go_st0___closed__0(void){
_start:
{
lean_object* v___x_273_; lean_object* v___x_274_; 
v___x_273_ = lean_unsigned_to_nat(5u);
v___x_274_ = lp_SoftwareLogic__Go_Go_initialState(v___x_273_);
return v___x_274_;
}
}
static lean_object* _init_lp_SoftwareLogic__Go_st0(void){
_start:
{
lean_object* v___x_275_; 
v___x_275_ = lean_obj_once(&lp_SoftwareLogic__Go_st0___closed__0, &lp_SoftwareLogic__Go_st0___closed__0_once, _init_lp_SoftwareLogic__Go_st0___closed__0);
return v___x_275_;
}
}
static lean_object* _init_lp_SoftwareLogic__Go_checkedCenterMove_x3f___closed__0(void){
_start:
{
lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; 
v___x_281_ = ((lean_object*)(lp_SoftwareLogic__Go_centerMove));
v___x_282_ = lp_SoftwareLogic__Go_st0;
v___x_283_ = lp_SoftwareLogic__Go_Go_checkMove_x3f(v___x_282_, v___x_281_);
return v___x_283_;
}
}
static lean_object* _init_lp_SoftwareLogic__Go_checkedCenterMove_x3f(void){
_start:
{
lean_object* v___x_284_; 
v___x_284_ = lean_obj_once(&lp_SoftwareLogic__Go_checkedCenterMove_x3f___closed__0, &lp_SoftwareLogic__Go_checkedCenterMove_x3f___closed__0_once, _init_lp_SoftwareLogic__Go_checkedCenterMove_x3f___closed__0);
return v___x_284_;
}
}
static lean_object* _init_lp_SoftwareLogic__Go_oneMove_x3f___closed__0(void){
_start:
{
lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; 
v___x_285_ = ((lean_object*)(lp_SoftwareLogic__Go_centerMove));
v___x_286_ = lp_SoftwareLogic__Go_st0;
v___x_287_ = lp_SoftwareLogic__Go_Go_applyCheckedMove_x3f(v___x_286_, v___x_285_);
return v___x_287_;
}
}
static lean_object* _init_lp_SoftwareLogic__Go_oneMove_x3f(void){
_start:
{
lean_object* v___x_288_; 
v___x_288_ = lean_obj_once(&lp_SoftwareLogic__Go_oneMove_x3f___closed__0, &lp_SoftwareLogic__Go_oneMove_x3f___closed__0_once, _init_lp_SoftwareLogic__Go_oneMove_x3f___closed__0);
return v___x_288_;
}
}
static lean_object* _init_lp_SoftwareLogic__Go_centerState(void){
_start:
{
lean_object* v___x_289_; 
v___x_289_ = lp_SoftwareLogic__Go_oneMove_x3f;
if (lean_obj_tag(v___x_289_) == 0)
{
lean_object* v___x_290_; 
v___x_290_ = lp_SoftwareLogic__Go_st0;
return v___x_290_;
}
else
{
lean_object* v_val_291_; 
v_val_291_ = lean_ctor_get(v___x_289_, 0);
lean_inc(v_val_291_);
return v_val_291_;
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_forIn_x27_loop___at___00showProofCertificates_spec__0___redArg(lean_object* v_as_x27_453_, lean_object* v_b_454_){
_start:
{
if (lean_obj_tag(v_as_x27_453_) == 0)
{
lean_object* v___x_456_; 
v___x_456_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_456_, 0, v_b_454_);
return v___x_456_;
}
else
{
lean_object* v_head_457_; lean_object* v_tail_458_; lean_object* v___x_459_; lean_object* v___x_460_; lean_object* v___x_461_; 
v_head_457_ = lean_ctor_get(v_as_x27_453_, 0);
v_tail_458_ = lean_ctor_get(v_as_x27_453_, 1);
v___x_459_ = ((lean_object*)(lp_SoftwareLogic__Go_List_forIn_x27_loop___at___00showProofCertificates_spec__0___redArg___closed__0));
v___x_460_ = lean_string_append(v___x_459_, v_head_457_);
v___x_461_ = lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(v___x_460_);
if (lean_obj_tag(v___x_461_) == 0)
{
lean_object* v___x_462_; 
lean_dec_ref(v___x_461_);
v___x_462_ = lean_box(0);
v_as_x27_453_ = v_tail_458_;
v_b_454_ = v___x_462_;
goto _start;
}
else
{
return v___x_461_;
}
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_forIn_x27_loop___at___00showProofCertificates_spec__0___redArg___boxed(lean_object* v_as_x27_464_, lean_object* v_b_465_, lean_object* v___y_466_){
_start:
{
lean_object* v_res_467_; 
v_res_467_ = lp_SoftwareLogic__Go_List_forIn_x27_loop___at___00showProofCertificates_spec__0___redArg(v_as_x27_464_, v_b_465_);
lean_dec(v_as_x27_464_);
return v_res_467_;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_showProofCertificates(){
_start:
{
lean_object* v___x_470_; lean_object* v___x_471_; 
v___x_470_ = ((lean_object*)(lp_SoftwareLogic__Go_showProofCertificates___closed__0));
v___x_471_ = lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(v___x_470_);
if (lean_obj_tag(v___x_471_) == 0)
{
lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v___x_474_; 
lean_dec_ref(v___x_471_);
v___x_472_ = ((lean_object*)(lp_SoftwareLogic__Go_proofCertificates));
v___x_473_ = lean_box(0);
v___x_474_ = lp_SoftwareLogic__Go_List_forIn_x27_loop___at___00showProofCertificates_spec__0___redArg(v___x_472_, v___x_473_);
if (lean_obj_tag(v___x_474_) == 0)
{
lean_object* v___x_475_; lean_object* v___x_476_; 
lean_dec_ref(v___x_474_);
v___x_475_ = ((lean_object*)(lp_SoftwareLogic__Go_showState___closed__1));
v___x_476_ = lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(v___x_475_);
return v___x_476_;
}
else
{
return v___x_474_;
}
}
else
{
return v___x_471_;
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_showProofCertificates___boxed(lean_object* v_a_477_){
_start:
{
lean_object* v_res_478_; 
v_res_478_ = lp_SoftwareLogic__Go_showProofCertificates();
return v_res_478_;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_forIn_x27_loop___at___00showProofCertificates_spec__0(lean_object* v_as_479_, lean_object* v_as_x27_480_, lean_object* v_b_481_, lean_object* v_a_482_){
_start:
{
lean_object* v___x_484_; 
v___x_484_ = lp_SoftwareLogic__Go_List_forIn_x27_loop___at___00showProofCertificates_spec__0___redArg(v_as_x27_480_, v_b_481_);
return v___x_484_;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_forIn_x27_loop___at___00showProofCertificates_spec__0___boxed(lean_object* v_as_485_, lean_object* v_as_x27_486_, lean_object* v_b_487_, lean_object* v_a_488_, lean_object* v___y_489_){
_start:
{
lean_object* v_res_490_; 
v_res_490_ = lp_SoftwareLogic__Go_List_forIn_x27_loop___at___00showProofCertificates_spec__0(v_as_485_, v_as_x27_486_, v_b_487_, v_a_488_);
lean_dec(v_as_x27_486_);
lean_dec(v_as_485_);
return v_res_490_;
}
}
static lean_object* _init_lp_SoftwareLogic__Go_occupiedTest_x3f(void){
_start:
{
lean_object* v___x_491_; 
v___x_491_ = lp_SoftwareLogic__Go_oneMove_x3f;
if (lean_obj_tag(v___x_491_) == 0)
{
return v___x_491_;
}
else
{
lean_object* v_val_492_; lean_object* v___x_493_; lean_object* v___x_494_; 
v_val_492_ = lean_ctor_get(v___x_491_, 0);
v___x_493_ = ((lean_object*)(lp_SoftwareLogic__Go_centerMove));
lean_inc(v_val_492_);
v___x_494_ = lp_SoftwareLogic__Go_Go_applyCheckedMove_x3f(v_val_492_, v___x_493_);
return v___x_494_;
}
}
}
static lean_object* _init_lp_SoftwareLogic__Go_passState_x3f___closed__0(void){
_start:
{
lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v___x_497_; 
v___x_495_ = lean_box(1);
v___x_496_ = lp_SoftwareLogic__Go_st0;
v___x_497_ = lp_SoftwareLogic__Go_Go_applyCheckedMove_x3f(v___x_496_, v___x_495_);
return v___x_497_;
}
}
static lean_object* _init_lp_SoftwareLogic__Go_passState_x3f(void){
_start:
{
lean_object* v___x_498_; 
v___x_498_ = lean_obj_once(&lp_SoftwareLogic__Go_passState_x3f___closed__0, &lp_SoftwareLogic__Go_passState_x3f___closed__0_once, _init_lp_SoftwareLogic__Go_passState_x3f___closed__0);
return v___x_498_;
}
}
static lean_object* _init_lp_SoftwareLogic__Go_finalState_x3f___closed__0(void){
_start:
{
lean_object* v___x_499_; lean_object* v___x_500_; lean_object* v___x_501_; 
v___x_499_ = ((lean_object*)(lp_SoftwareLogic__Go_demoMoves));
v___x_500_ = lp_SoftwareLogic__Go_st0;
v___x_501_ = lp_SoftwareLogic__Go_Go_applyCheckedMoves_x3f(v___x_500_, v___x_499_);
return v___x_501_;
}
}
static lean_object* _init_lp_SoftwareLogic__Go_finalState_x3f(void){
_start:
{
lean_object* v___x_502_; 
v___x_502_ = lean_obj_once(&lp_SoftwareLogic__Go_finalState_x3f___closed__0, &lp_SoftwareLogic__Go_finalState_x3f___closed__0_once, _init_lp_SoftwareLogic__Go_finalState_x3f___closed__0);
return v___x_502_;
}
}
static lean_object* _init_lp_SoftwareLogic__Go_captureMoves(void){
_start:
{
lean_object* v___x_503_; 
v___x_503_ = lp_SoftwareLogic__Go_Go_captureDemoMoves;
return v___x_503_;
}
}
static lean_object* _init_lp_SoftwareLogic__Go_captureState_x3f___closed__0(void){
_start:
{
lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v___x_506_; 
v___x_504_ = lp_SoftwareLogic__Go_Go_captureDemoMoves;
v___x_505_ = lp_SoftwareLogic__Go_st0;
v___x_506_ = lp_SoftwareLogic__Go_Go_applyCheckedMoves_x3f(v___x_505_, v___x_504_);
return v___x_506_;
}
}
static lean_object* _init_lp_SoftwareLogic__Go_captureState_x3f(void){
_start:
{
lean_object* v___x_507_; 
v___x_507_ = lean_obj_once(&lp_SoftwareLogic__Go_captureState_x3f___closed__0, &lp_SoftwareLogic__Go_captureState_x3f___closed__0_once, _init_lp_SoftwareLogic__Go_captureState_x3f___closed__0);
return v___x_507_;
}
}
static lean_object* _init_lp_SoftwareLogic__Go_mixedState_x3f___closed__0(void){
_start:
{
lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_544_; 
v___x_542_ = ((lean_object*)(lp_SoftwareLogic__Go_mixedMoves));
v___x_543_ = lp_SoftwareLogic__Go_st0;
v___x_544_ = lp_SoftwareLogic__Go_Go_applyCheckedMoves_x3f(v___x_543_, v___x_542_);
return v___x_544_;
}
}
static lean_object* _init_lp_SoftwareLogic__Go_mixedState_x3f(void){
_start:
{
lean_object* v___x_545_; 
v___x_545_ = lean_obj_once(&lp_SoftwareLogic__Go_mixedState_x3f___closed__0, &lp_SoftwareLogic__Go_mixedState_x3f___closed__0_once, _init_lp_SoftwareLogic__Go_mixedState_x3f___closed__0);
return v___x_545_;
}
}
static lean_object* _init_lp_SoftwareLogic__Go_main___closed__21(void){
_start:
{
lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; 
v___x_569_ = ((lean_object*)(lp_SoftwareLogic__Go_suicideMove));
v___x_570_ = ((lean_object*)(lp_SoftwareLogic__Go_suicideState));
v___x_571_ = lp_SoftwareLogic__Go_Go_applyCheckedMove_x3f(v___x_570_, v___x_569_);
return v___x_571_;
}
}
LEAN_EXPORT lean_object* _lean_main(){
_start:
{
lean_object* v___x_593_; lean_object* v___x_594_; 
v___x_593_ = ((lean_object*)(lp_SoftwareLogic__Go_main___closed__0));
v___x_594_ = lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(v___x_593_);
if (lean_obj_tag(v___x_594_) == 0)
{
lean_object* v___x_595_; lean_object* v___x_596_; 
lean_dec_ref(v___x_594_);
v___x_595_ = ((lean_object*)(lp_SoftwareLogic__Go_showState___closed__1));
v___x_596_ = lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(v___x_595_);
if (lean_obj_tag(v___x_596_) == 0)
{
lean_object* v___x_597_; 
lean_dec_ref(v___x_596_);
v___x_597_ = lp_SoftwareLogic__Go_showProofCertificates();
if (lean_obj_tag(v___x_597_) == 0)
{
lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_619_; 
lean_dec_ref(v___x_597_);
v___x_598_ = ((lean_object*)(lp_SoftwareLogic__Go_main___closed__1));
v___x_599_ = lp_SoftwareLogic__Go_st0;
v___x_619_ = lp_SoftwareLogic__Go_showState(v___x_598_, v___x_599_);
if (lean_obj_tag(v___x_619_) == 0)
{
lean_object* v___x_620_; lean_object* v___x_621_; lean_object* v___x_622_; 
lean_dec_ref(v___x_619_);
v___x_620_ = ((lean_object*)(lp_SoftwareLogic__Go_main___closed__10));
v___x_621_ = ((lean_object*)(lp_SoftwareLogic__Go_centerMove));
v___x_622_ = lp_SoftwareLogic__Go_showCheckedMove(v___x_620_, v___x_599_, v___x_621_);
if (lean_obj_tag(v___x_622_) == 0)
{
lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; 
lean_dec_ref(v___x_622_);
v___x_623_ = ((lean_object*)(lp_SoftwareLogic__Go_main___closed__11));
v___x_624_ = ((lean_object*)(lp_SoftwareLogic__Go_main___closed__13));
v___x_625_ = lp_SoftwareLogic__Go_showCheckedMove(v___x_623_, v___x_599_, v___x_624_);
if (lean_obj_tag(v___x_625_) == 0)
{
lean_object* v___x_626_; lean_object* v___x_627_; 
lean_dec_ref(v___x_625_);
v___x_626_ = ((lean_object*)(lp_SoftwareLogic__Go_main___closed__14));
v___x_627_ = lp_SoftwareLogic__Go_showLegality(v___x_626_, v___x_599_, v___x_621_);
if (lean_obj_tag(v___x_627_) == 0)
{
lean_object* v___x_628_; lean_object* v___x_629_; 
lean_dec_ref(v___x_627_);
v___x_628_ = ((lean_object*)(lp_SoftwareLogic__Go_main___closed__15));
v___x_629_ = lp_SoftwareLogic__Go_showLegality(v___x_628_, v___x_599_, v___x_624_);
if (lean_obj_tag(v___x_629_) == 0)
{
lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; 
lean_dec_ref(v___x_629_);
v___x_630_ = ((lean_object*)(lp_SoftwareLogic__Go_main___closed__16));
v___x_631_ = lean_box(1);
v___x_632_ = lp_SoftwareLogic__Go_showLegality(v___x_630_, v___x_599_, v___x_631_);
if (lean_obj_tag(v___x_632_) == 0)
{
lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_702_; 
lean_dec_ref(v___x_632_);
v___x_633_ = ((lean_object*)(lp_SoftwareLogic__Go_main___closed__17));
v___x_634_ = lp_SoftwareLogic__Go_oneMove_x3f;
v___x_702_ = lp_SoftwareLogic__Go_showResult(v___x_633_, v___x_634_);
if (lean_obj_tag(v___x_702_) == 0)
{
lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_705_; 
lean_dec_ref(v___x_702_);
v___x_703_ = ((lean_object*)(lp_SoftwareLogic__Go_main___closed__35));
v___x_704_ = lp_SoftwareLogic__Go_occupiedTest_x3f;
v___x_705_ = lp_SoftwareLogic__Go_showResult(v___x_703_, v___x_704_);
if (lean_obj_tag(v___x_705_) == 0)
{
lean_object* v___x_706_; lean_object* v___x_707_; lean_object* v___x_708_; 
lean_dec_ref(v___x_705_);
v___x_706_ = ((lean_object*)(lp_SoftwareLogic__Go_main___closed__36));
v___x_707_ = lp_SoftwareLogic__Go_passState_x3f;
v___x_708_ = lp_SoftwareLogic__Go_showResult(v___x_706_, v___x_707_);
if (lean_obj_tag(v___x_708_) == 0)
{
lean_object* v___x_709_; lean_object* v___x_710_; lean_object* v___x_711_; 
lean_dec_ref(v___x_708_);
v___x_709_ = ((lean_object*)(lp_SoftwareLogic__Go_main___closed__37));
v___x_710_ = ((lean_object*)(lp_SoftwareLogic__Go_demoMoves));
v___x_711_ = lp_SoftwareLogic__Go_showSequence(v___x_709_, v___x_599_, v___x_710_);
if (lean_obj_tag(v___x_711_) == 0)
{
lean_object* v___x_712_; lean_object* v___x_713_; 
lean_dec_ref(v___x_711_);
v___x_712_ = ((lean_object*)(lp_SoftwareLogic__Go_main___closed__38));
v___x_713_ = lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(v___x_712_);
if (lean_obj_tag(v___x_713_) == 0)
{
lean_object* v___x_714_; 
lean_dec_ref(v___x_713_);
v___x_714_ = lp_SoftwareLogic__Go_finalState_x3f;
if (lean_obj_tag(v___x_714_) == 0)
{
lean_object* v___x_715_; lean_object* v___x_716_; 
v___x_715_ = ((lean_object*)(lp_SoftwareLogic__Go_main___closed__39));
v___x_716_ = lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(v___x_715_);
if (lean_obj_tag(v___x_716_) == 0)
{
lean_dec_ref(v___x_716_);
goto v___jp_663_;
}
else
{
return v___x_716_;
}
}
else
{
lean_object* v_val_717_; lean_object* v_board_718_; uint8_t v_turn_719_; lean_object* v___x_720_; lean_object* v___x_721_; 
v_val_717_ = lean_ctor_get(v___x_714_, 0);
v_board_718_ = lean_ctor_get(v_val_717_, 1);
v_turn_719_ = lean_ctor_get_uint8(v_val_717_, sizeof(void*)*2);
lean_inc(v_board_718_);
v___x_720_ = lp_SoftwareLogic__Go_Go_boardToString(v_board_718_);
v___x_721_ = lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(v___x_720_);
if (lean_obj_tag(v___x_721_) == 0)
{
lean_object* v___x_722_; lean_object* v___x_723_; lean_object* v___x_724_; lean_object* v___x_725_; lean_object* v___x_726_; lean_object* v___x_727_; lean_object* v___x_728_; 
lean_dec_ref(v___x_721_);
v___x_722_ = ((lean_object*)(lp_SoftwareLogic__Go_showState___closed__0));
v___x_723_ = lean_unsigned_to_nat(0u);
v___x_724_ = lp_SoftwareLogic__Go_Go_instReprStone_repr(v_turn_719_, v___x_723_);
v___x_725_ = lean_unsigned_to_nat(120u);
v___x_726_ = l_Std_Format_pretty(v___x_724_, v___x_725_, v___x_723_, v___x_723_);
v___x_727_ = lean_string_append(v___x_722_, v___x_726_);
lean_dec_ref(v___x_726_);
v___x_728_ = lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(v___x_727_);
if (lean_obj_tag(v___x_728_) == 0)
{
lean_dec_ref(v___x_728_);
goto v___jp_663_;
}
else
{
return v___x_728_;
}
}
else
{
return v___x_721_;
}
}
}
else
{
return v___x_713_;
}
}
else
{
return v___x_711_;
}
}
else
{
return v___x_708_;
}
}
else
{
return v___x_705_;
}
}
else
{
return v___x_702_;
}
v___jp_635_:
{
lean_object* v___x_636_; 
v___x_636_ = lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(v___x_595_);
if (lean_obj_tag(v___x_636_) == 0)
{
lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; 
lean_dec_ref(v___x_636_);
v___x_637_ = ((lean_object*)(lp_SoftwareLogic__Go_main___closed__18));
v___x_638_ = ((lean_object*)(lp_SoftwareLogic__Go_suicideState));
v___x_639_ = lp_SoftwareLogic__Go_showState(v___x_637_, v___x_638_);
if (lean_obj_tag(v___x_639_) == 0)
{
lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; 
lean_dec_ref(v___x_639_);
v___x_640_ = ((lean_object*)(lp_SoftwareLogic__Go_main___closed__19));
v___x_641_ = ((lean_object*)(lp_SoftwareLogic__Go_suicideMove));
v___x_642_ = lp_SoftwareLogic__Go_showLegality(v___x_640_, v___x_638_, v___x_641_);
if (lean_obj_tag(v___x_642_) == 0)
{
lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v___x_645_; 
lean_dec_ref(v___x_642_);
v___x_643_ = ((lean_object*)(lp_SoftwareLogic__Go_main___closed__20));
v___x_644_ = lean_obj_once(&lp_SoftwareLogic__Go_main___closed__21, &lp_SoftwareLogic__Go_main___closed__21_once, _init_lp_SoftwareLogic__Go_main___closed__21);
v___x_645_ = lp_SoftwareLogic__Go_showResult(v___x_643_, v___x_644_);
if (lean_obj_tag(v___x_645_) == 0)
{
lean_object* v___x_646_; lean_object* v___x_647_; 
lean_dec_ref(v___x_645_);
v___x_646_ = ((lean_object*)(lp_SoftwareLogic__Go_main___closed__22));
v___x_647_ = lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(v___x_646_);
if (lean_obj_tag(v___x_647_) == 0)
{
lean_dec_ref(v___x_647_);
if (lean_obj_tag(v___x_634_) == 0)
{
lean_object* v___x_648_; lean_object* v___x_649_; 
v___x_648_ = ((lean_object*)(lp_SoftwareLogic__Go_main___closed__23));
v___x_649_ = lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(v___x_648_);
if (lean_obj_tag(v___x_649_) == 0)
{
lean_object* v___x_650_; 
lean_dec_ref(v___x_649_);
v___x_650_ = lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(v___x_595_);
if (lean_obj_tag(v___x_650_) == 0)
{
lean_dec_ref(v___x_650_);
goto v___jp_600_;
}
else
{
return v___x_650_;
}
}
else
{
return v___x_649_;
}
}
else
{
lean_object* v_val_651_; lean_object* v___x_652_; lean_object* v___x_653_; 
v_val_651_ = lean_ctor_get(v___x_634_, 0);
v___x_652_ = ((lean_object*)(lp_SoftwareLogic__Go_main___closed__24));
lean_inc(v_val_651_);
v___x_653_ = lp_SoftwareLogic__Go_showState(v___x_652_, v_val_651_);
if (lean_obj_tag(v___x_653_) == 0)
{
lean_object* v___x_654_; lean_object* v___x_655_; lean_object* v___x_656_; 
lean_dec_ref(v___x_653_);
v___x_654_ = ((lean_object*)(lp_SoftwareLogic__Go_main___closed__25));
v___x_655_ = ((lean_object*)(lp_SoftwareLogic__Go_centerMove___closed__1));
lean_inc(v_val_651_);
v___x_656_ = lp_SoftwareLogic__Go_showLegality(v___x_654_, v_val_651_, v___x_655_);
if (lean_obj_tag(v___x_656_) == 0)
{
lean_object* v___x_657_; lean_object* v___x_658_; lean_object* v___x_659_; 
lean_dec_ref(v___x_656_);
v___x_657_ = ((lean_object*)(lp_SoftwareLogic__Go_main___closed__26));
v___x_658_ = ((lean_object*)(lp_SoftwareLogic__Go_demoMoves___closed__5));
lean_inc(v_val_651_);
v___x_659_ = lp_SoftwareLogic__Go_showLegality(v___x_657_, v_val_651_, v___x_658_);
if (lean_obj_tag(v___x_659_) == 0)
{
lean_object* v___x_660_; lean_object* v___x_661_; lean_object* v___x_662_; 
lean_dec_ref(v___x_659_);
v___x_660_ = ((lean_object*)(lp_SoftwareLogic__Go_main___closed__27));
v___x_661_ = ((lean_object*)(lp_SoftwareLogic__Go_main___closed__29));
lean_inc(v_val_651_);
v___x_662_ = lp_SoftwareLogic__Go_showLegality(v___x_660_, v_val_651_, v___x_661_);
if (lean_obj_tag(v___x_662_) == 0)
{
lean_dec_ref(v___x_662_);
goto v___jp_600_;
}
else
{
return v___x_662_;
}
}
else
{
return v___x_659_;
}
}
else
{
return v___x_656_;
}
}
else
{
return v___x_653_;
}
}
}
else
{
return v___x_647_;
}
}
else
{
return v___x_645_;
}
}
else
{
return v___x_642_;
}
}
else
{
return v___x_639_;
}
}
else
{
return v___x_636_;
}
}
v___jp_663_:
{
lean_object* v___x_664_; 
v___x_664_ = lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(v___x_595_);
if (lean_obj_tag(v___x_664_) == 0)
{
lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; 
lean_dec_ref(v___x_664_);
v___x_665_ = ((lean_object*)(lp_SoftwareLogic__Go_main___closed__30));
v___x_666_ = lp_SoftwareLogic__Go_Go_captureDemoMoves;
v___x_667_ = lp_SoftwareLogic__Go_showSequence(v___x_665_, v___x_599_, v___x_666_);
if (lean_obj_tag(v___x_667_) == 0)
{
lean_object* v___x_668_; lean_object* v___x_669_; 
lean_dec_ref(v___x_667_);
v___x_668_ = ((lean_object*)(lp_SoftwareLogic__Go_main___closed__31));
v___x_669_ = lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(v___x_668_);
if (lean_obj_tag(v___x_669_) == 0)
{
lean_object* v___x_670_; 
lean_dec_ref(v___x_669_);
v___x_670_ = lp_SoftwareLogic__Go_captureState_x3f;
if (lean_obj_tag(v___x_670_) == 0)
{
lean_object* v___x_671_; lean_object* v___x_672_; 
v___x_671_ = ((lean_object*)(lp_SoftwareLogic__Go_main___closed__32));
v___x_672_ = lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(v___x_671_);
if (lean_obj_tag(v___x_672_) == 0)
{
lean_dec_ref(v___x_672_);
goto v___jp_635_;
}
else
{
return v___x_672_;
}
}
else
{
lean_object* v_val_673_; lean_object* v_board_674_; lean_object* v___x_675_; lean_object* v___x_676_; lean_object* v___x_677_; lean_object* v___x_678_; lean_object* v___x_679_; lean_object* v___x_680_; lean_object* v___x_681_; lean_object* v___x_682_; lean_object* v___x_683_; 
v_val_673_ = lean_ctor_get(v___x_670_, 0);
v_board_674_ = lean_ctor_get(v_val_673_, 1);
v___x_675_ = ((lean_object*)(lp_SoftwareLogic__Go_main___closed__33));
v___x_676_ = ((lean_object*)(lp_SoftwareLogic__Go_demoMoves___closed__4));
v___x_677_ = lp_SoftwareLogic__Go_Go_stoneAt_x3f(v_board_674_, v___x_676_);
v___x_678_ = lean_unsigned_to_nat(0u);
v___x_679_ = lp_SoftwareLogic__Go_Option_repr___at___00List_repr___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__0_spec__1(v___x_677_, v___x_678_);
lean_dec(v___x_677_);
v___x_680_ = lean_unsigned_to_nat(120u);
v___x_681_ = l_Std_Format_pretty(v___x_679_, v___x_680_, v___x_678_, v___x_678_);
v___x_682_ = lean_string_append(v___x_675_, v___x_681_);
lean_dec_ref(v___x_681_);
v___x_683_ = lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(v___x_682_);
if (lean_obj_tag(v___x_683_) == 0)
{
lean_object* v___x_684_; lean_object* v___x_685_; lean_object* v___x_686_; lean_object* v___x_687_; lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___x_690_; lean_object* v___x_691_; lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v___x_694_; lean_object* v___x_695_; lean_object* v___x_696_; lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; lean_object* v___x_701_; 
lean_dec_ref(v___x_683_);
v___x_684_ = ((lean_object*)(lp_SoftwareLogic__Go_main___closed__34));
v___x_685_ = ((lean_object*)(lp_SoftwareLogic__Go_mixedMoves___closed__2));
v___x_686_ = lp_SoftwareLogic__Go_Go_stoneAt_x3f(v_board_674_, v___x_685_);
v___x_687_ = ((lean_object*)(lp_SoftwareLogic__Go_mixedMoves___closed__4));
v___x_688_ = lp_SoftwareLogic__Go_Go_stoneAt_x3f(v_board_674_, v___x_687_);
v___x_689_ = ((lean_object*)(lp_SoftwareLogic__Go_demoMoves___closed__0));
v___x_690_ = lp_SoftwareLogic__Go_Go_stoneAt_x3f(v_board_674_, v___x_689_);
v___x_691_ = ((lean_object*)(lp_SoftwareLogic__Go_demoMoves___closed__2));
v___x_692_ = lp_SoftwareLogic__Go_Go_stoneAt_x3f(v_board_674_, v___x_691_);
v___x_693_ = lean_box(0);
v___x_694_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_694_, 0, v___x_692_);
lean_ctor_set(v___x_694_, 1, v___x_693_);
v___x_695_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_695_, 0, v___x_690_);
lean_ctor_set(v___x_695_, 1, v___x_694_);
v___x_696_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_696_, 0, v___x_688_);
lean_ctor_set(v___x_696_, 1, v___x_695_);
v___x_697_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_697_, 0, v___x_686_);
lean_ctor_set(v___x_697_, 1, v___x_696_);
v___x_698_ = lp_SoftwareLogic__Go_List_repr___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__0___redArg(v___x_697_);
v___x_699_ = l_Std_Format_pretty(v___x_698_, v___x_680_, v___x_678_, v___x_678_);
v___x_700_ = lean_string_append(v___x_684_, v___x_699_);
lean_dec_ref(v___x_699_);
v___x_701_ = lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(v___x_700_);
if (lean_obj_tag(v___x_701_) == 0)
{
lean_dec_ref(v___x_701_);
goto v___jp_635_;
}
else
{
return v___x_701_;
}
}
else
{
return v___x_683_;
}
}
}
else
{
return v___x_669_;
}
}
else
{
return v___x_667_;
}
}
else
{
return v___x_664_;
}
}
}
else
{
return v___x_632_;
}
}
else
{
return v___x_629_;
}
}
else
{
return v___x_627_;
}
}
else
{
return v___x_625_;
}
}
else
{
return v___x_622_;
}
}
else
{
return v___x_619_;
}
v___jp_600_:
{
lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; 
v___x_601_ = ((lean_object*)(lp_SoftwareLogic__Go_main___closed__2));
v___x_602_ = ((lean_object*)(lp_SoftwareLogic__Go_mixedMoves));
v___x_603_ = lp_SoftwareLogic__Go_showSequence(v___x_601_, v___x_599_, v___x_602_);
if (lean_obj_tag(v___x_603_) == 0)
{
lean_object* v___x_604_; lean_object* v___x_605_; 
lean_dec_ref(v___x_603_);
v___x_604_ = ((lean_object*)(lp_SoftwareLogic__Go_main___closed__3));
v___x_605_ = lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(v___x_604_);
if (lean_obj_tag(v___x_605_) == 0)
{
lean_object* v___x_606_; lean_object* v___x_607_; 
lean_dec_ref(v___x_605_);
v___x_606_ = ((lean_object*)(lp_SoftwareLogic__Go_main___closed__4));
v___x_607_ = lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(v___x_606_);
if (lean_obj_tag(v___x_607_) == 0)
{
lean_object* v___x_608_; lean_object* v___x_609_; 
lean_dec_ref(v___x_607_);
v___x_608_ = ((lean_object*)(lp_SoftwareLogic__Go_main___closed__5));
v___x_609_ = lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(v___x_608_);
if (lean_obj_tag(v___x_609_) == 0)
{
lean_object* v___x_610_; lean_object* v___x_611_; 
lean_dec_ref(v___x_609_);
v___x_610_ = ((lean_object*)(lp_SoftwareLogic__Go_main___closed__6));
v___x_611_ = lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(v___x_610_);
if (lean_obj_tag(v___x_611_) == 0)
{
lean_object* v___x_612_; lean_object* v___x_613_; 
lean_dec_ref(v___x_611_);
v___x_612_ = ((lean_object*)(lp_SoftwareLogic__Go_main___closed__7));
v___x_613_ = lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(v___x_612_);
if (lean_obj_tag(v___x_613_) == 0)
{
lean_object* v___x_614_; lean_object* v___x_615_; 
lean_dec_ref(v___x_613_);
v___x_614_ = ((lean_object*)(lp_SoftwareLogic__Go_main___closed__8));
v___x_615_ = lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(v___x_614_);
if (lean_obj_tag(v___x_615_) == 0)
{
lean_object* v___x_616_; 
lean_dec_ref(v___x_615_);
v___x_616_ = lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(v___x_595_);
if (lean_obj_tag(v___x_616_) == 0)
{
lean_object* v___x_617_; lean_object* v___x_618_; 
lean_dec_ref(v___x_616_);
v___x_617_ = ((lean_object*)(lp_SoftwareLogic__Go_main___closed__9));
v___x_618_ = lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(v___x_617_);
return v___x_618_;
}
else
{
return v___x_616_;
}
}
else
{
return v___x_615_;
}
}
else
{
return v___x_613_;
}
}
else
{
return v___x_611_;
}
}
else
{
return v___x_609_;
}
}
else
{
return v___x_607_;
}
}
else
{
return v___x_605_;
}
}
else
{
return v___x_603_;
}
}
}
else
{
return v___x_597_;
}
}
else
{
return v___x_596_;
}
}
else
{
return v___x_594_;
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_main___boxed(lean_object* v_a_729_){
_start:
{
lean_object* v_res_730_; 
v_res_730_ = _lean_main();
return v_res_730_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_SoftwareLogic__Go_Go_Proofs(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_SoftwareLogic__Go_Main(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_SoftwareLogic__Go_Go_Proofs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
lp_SoftwareLogic__Go_st0 = _init_lp_SoftwareLogic__Go_st0();
lean_mark_persistent(lp_SoftwareLogic__Go_st0);
lp_SoftwareLogic__Go_checkedCenterMove_x3f = _init_lp_SoftwareLogic__Go_checkedCenterMove_x3f();
lean_mark_persistent(lp_SoftwareLogic__Go_checkedCenterMove_x3f);
lp_SoftwareLogic__Go_oneMove_x3f = _init_lp_SoftwareLogic__Go_oneMove_x3f();
lean_mark_persistent(lp_SoftwareLogic__Go_oneMove_x3f);
lp_SoftwareLogic__Go_centerState = _init_lp_SoftwareLogic__Go_centerState();
lean_mark_persistent(lp_SoftwareLogic__Go_centerState);
lp_SoftwareLogic__Go_occupiedTest_x3f = _init_lp_SoftwareLogic__Go_occupiedTest_x3f();
lean_mark_persistent(lp_SoftwareLogic__Go_occupiedTest_x3f);
lp_SoftwareLogic__Go_passState_x3f = _init_lp_SoftwareLogic__Go_passState_x3f();
lean_mark_persistent(lp_SoftwareLogic__Go_passState_x3f);
lp_SoftwareLogic__Go_finalState_x3f = _init_lp_SoftwareLogic__Go_finalState_x3f();
lean_mark_persistent(lp_SoftwareLogic__Go_finalState_x3f);
lp_SoftwareLogic__Go_captureMoves = _init_lp_SoftwareLogic__Go_captureMoves();
lean_mark_persistent(lp_SoftwareLogic__Go_captureMoves);
lp_SoftwareLogic__Go_captureState_x3f = _init_lp_SoftwareLogic__Go_captureState_x3f();
lean_mark_persistent(lp_SoftwareLogic__Go_captureState_x3f);
lp_SoftwareLogic__Go_mixedState_x3f = _init_lp_SoftwareLogic__Go_mixedState_x3f();
lean_mark_persistent(lp_SoftwareLogic__Go_mixedState_x3f);
return lean_io_result_mk_ok(lean_box(0));
}
char ** lean_setup_args(int argc, char ** argv);
void lean_initialize_runtime_module();
#if defined(WIN32) || defined(_WIN32)
#include <windows.h>
#endif
lean_object* run_main(int argc, char ** argv) {
    return _lean_main();
}
int main(int argc, char ** argv) {
#if defined(WIN32) || defined(_WIN32)
  SetErrorMode(SEM_FAILCRITICALERRORS);
  SetConsoleOutputCP(CP_UTF8);
#endif
  lean_object* res;
  argv = lean_setup_args(argc, argv);
  lean_initialize_runtime_module();
  res = initialize_SoftwareLogic__Go_Main(1 /* builtin */);
  lean_io_mark_end_initialization();
  if (lean_io_result_is_ok(res)) {
    lean_dec_ref(res);
    lean_init_task_manager();
    res = lean_run_main(&run_main, argc, argv);
  }
  lean_finalize_task_manager();
  if (lean_io_result_is_ok(res)) {
    int ret = 0;
    lean_dec_ref(res);
    return ret;
  } else {
    lean_io_result_show_error(res);
    lean_dec_ref(res);
    return 1;
  }
}
#ifdef __cplusplus
}
#endif
