// Lean compiler output
// Module: Main
// Imports: public import Init public import Go.Proofs
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
lean_object* lean_get_stdout();
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_IO_print___at___00IO_println___at___00showState_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_IO_print___at___00IO_println___at___00showState_spec__0_spec__0___boxed(lean_object*, lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object lp_SoftwareLogic__Go_showState___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "turn = "};
static const lean_object* lp_SoftwareLogic__Go_showState___closed__0 = (const lean_object*)&lp_SoftwareLogic__Go_showState___closed__0_value;
static const lean_string_object lp_SoftwareLogic__Go_showState___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* lp_SoftwareLogic__Go_showState___closed__1 = (const lean_object*)&lp_SoftwareLogic__Go_showState___closed__1_value;
lean_object* lp_SoftwareLogic__Go_Go_boardToString(lean_object*);
lean_object* lp_SoftwareLogic__Go_Go_instReprStone_repr(uint8_t, lean_object*);
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
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
uint8_t lp_SoftwareLogic__Go_Go_legalMove(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_showLegality(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_showLegality___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_SoftwareLogic__Go_applyAndShow___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "move = "};
static const lean_object* lp_SoftwareLogic__Go_applyAndShow___closed__0 = (const lean_object*)&lp_SoftwareLogic__Go_applyAndShow___closed__0_value;
lean_object* lp_SoftwareLogic__Go_Go_instReprMove_repr(lean_object*, lean_object*);
lean_object* lp_SoftwareLogic__Go_Go_applyMove_x3f(lean_object*, lean_object*);
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
lean_object* lean_string_length(lean_object*);
static lean_once_cell_t lp_SoftwareLogic__Go_List_repr___at___00showSequence_spec__0___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_SoftwareLogic__Go_List_repr___at___00showSequence_spec__0___redArg___closed__7;
lean_object* lean_nat_to_int(lean_object*);
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
lean_object* lp_SoftwareLogic__Go_Go_applyMoves_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_showSequence(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_showSequence___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_repr___at___00showSequence_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_repr___at___00showSequence_spec__0___boxed(lean_object*, lean_object*);
lean_object* lp_SoftwareLogic__Go_Go_initialState(lean_object*);
static lean_once_cell_t lp_SoftwareLogic__Go_st0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_SoftwareLogic__Go_st0___closed__0;
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_st0;
static const lean_ctor_object lp_SoftwareLogic__Go_oneMove_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* lp_SoftwareLogic__Go_oneMove_x3f___closed__0 = (const lean_object*)&lp_SoftwareLogic__Go_oneMove_x3f___closed__0_value;
static const lean_ctor_object lp_SoftwareLogic__Go_oneMove_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_oneMove_x3f___closed__0_value)}};
static const lean_object* lp_SoftwareLogic__Go_oneMove_x3f___closed__1 = (const lean_object*)&lp_SoftwareLogic__Go_oneMove_x3f___closed__1_value;
static lean_once_cell_t lp_SoftwareLogic__Go_oneMove_x3f___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_SoftwareLogic__Go_oneMove_x3f___closed__2;
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_oneMove_x3f;
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_occupiedTest_x3f;
static lean_once_cell_t lp_SoftwareLogic__Go_passState_x3f___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_SoftwareLogic__Go_passState_x3f___closed__0;
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_passState_x3f;
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
static const lean_ctor_object lp_SoftwareLogic__Go_demoMoves___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_oneMove_x3f___closed__1_value),((lean_object*)&lp_SoftwareLogic__Go_demoMoves___closed__17_value)}};
static const lean_object* lp_SoftwareLogic__Go_demoMoves___closed__18 = (const lean_object*)&lp_SoftwareLogic__Go_demoMoves___closed__18_value;
LEAN_EXPORT const lean_object* lp_SoftwareLogic__Go_demoMoves = (const lean_object*)&lp_SoftwareLogic__Go_demoMoves___closed__18_value;
static lean_once_cell_t lp_SoftwareLogic__Go_finalState_x3f___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_SoftwareLogic__Go_finalState_x3f___closed__0;
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_finalState_x3f;
static const lean_ctor_object lp_SoftwareLogic__Go_captureMoves___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_SoftwareLogic__Go_captureMoves___closed__0 = (const lean_object*)&lp_SoftwareLogic__Go_captureMoves___closed__0_value;
static const lean_ctor_object lp_SoftwareLogic__Go_captureMoves___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_captureMoves___closed__0_value)}};
static const lean_object* lp_SoftwareLogic__Go_captureMoves___closed__1 = (const lean_object*)&lp_SoftwareLogic__Go_captureMoves___closed__1_value;
static const lean_ctor_object lp_SoftwareLogic__Go_captureMoves___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_SoftwareLogic__Go_captureMoves___closed__2 = (const lean_object*)&lp_SoftwareLogic__Go_captureMoves___closed__2_value;
static const lean_ctor_object lp_SoftwareLogic__Go_captureMoves___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_captureMoves___closed__2_value)}};
static const lean_object* lp_SoftwareLogic__Go_captureMoves___closed__3 = (const lean_object*)&lp_SoftwareLogic__Go_captureMoves___closed__3_value;
static const lean_ctor_object lp_SoftwareLogic__Go_captureMoves___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_demoMoves___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_SoftwareLogic__Go_captureMoves___closed__4 = (const lean_object*)&lp_SoftwareLogic__Go_captureMoves___closed__4_value;
static const lean_ctor_object lp_SoftwareLogic__Go_captureMoves___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&lp_SoftwareLogic__Go_captureMoves___closed__4_value)}};
static const lean_object* lp_SoftwareLogic__Go_captureMoves___closed__5 = (const lean_object*)&lp_SoftwareLogic__Go_captureMoves___closed__5_value;
static const lean_ctor_object lp_SoftwareLogic__Go_captureMoves___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_demoMoves___closed__1_value),((lean_object*)&lp_SoftwareLogic__Go_captureMoves___closed__5_value)}};
static const lean_object* lp_SoftwareLogic__Go_captureMoves___closed__6 = (const lean_object*)&lp_SoftwareLogic__Go_captureMoves___closed__6_value;
static const lean_ctor_object lp_SoftwareLogic__Go_captureMoves___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&lp_SoftwareLogic__Go_captureMoves___closed__6_value)}};
static const lean_object* lp_SoftwareLogic__Go_captureMoves___closed__7 = (const lean_object*)&lp_SoftwareLogic__Go_captureMoves___closed__7_value;
static const lean_ctor_object lp_SoftwareLogic__Go_captureMoves___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_captureMoves___closed__3_value),((lean_object*)&lp_SoftwareLogic__Go_captureMoves___closed__7_value)}};
static const lean_object* lp_SoftwareLogic__Go_captureMoves___closed__8 = (const lean_object*)&lp_SoftwareLogic__Go_captureMoves___closed__8_value;
static const lean_ctor_object lp_SoftwareLogic__Go_captureMoves___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&lp_SoftwareLogic__Go_captureMoves___closed__8_value)}};
static const lean_object* lp_SoftwareLogic__Go_captureMoves___closed__9 = (const lean_object*)&lp_SoftwareLogic__Go_captureMoves___closed__9_value;
static const lean_ctor_object lp_SoftwareLogic__Go_captureMoves___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_captureMoves___closed__1_value),((lean_object*)&lp_SoftwareLogic__Go_captureMoves___closed__9_value)}};
static const lean_object* lp_SoftwareLogic__Go_captureMoves___closed__10 = (const lean_object*)&lp_SoftwareLogic__Go_captureMoves___closed__10_value;
static const lean_ctor_object lp_SoftwareLogic__Go_captureMoves___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_demoMoves___closed__5_value),((lean_object*)&lp_SoftwareLogic__Go_captureMoves___closed__10_value)}};
static const lean_object* lp_SoftwareLogic__Go_captureMoves___closed__11 = (const lean_object*)&lp_SoftwareLogic__Go_captureMoves___closed__11_value;
LEAN_EXPORT const lean_object* lp_SoftwareLogic__Go_captureMoves = (const lean_object*)&lp_SoftwareLogic__Go_captureMoves___closed__11_value;
static lean_once_cell_t lp_SoftwareLogic__Go_captureState_x3f___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_SoftwareLogic__Go_captureState_x3f___closed__0;
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_captureState_x3f;
static const lean_ctor_object lp_SoftwareLogic__Go_mixedMoves___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_SoftwareLogic__Go_mixedMoves___closed__0 = (const lean_object*)&lp_SoftwareLogic__Go_mixedMoves___closed__0_value;
static const lean_ctor_object lp_SoftwareLogic__Go_mixedMoves___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_mixedMoves___closed__0_value)}};
static const lean_object* lp_SoftwareLogic__Go_mixedMoves___closed__1 = (const lean_object*)&lp_SoftwareLogic__Go_mixedMoves___closed__1_value;
static const lean_ctor_object lp_SoftwareLogic__Go_mixedMoves___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(4) << 1) | 1)),((lean_object*)(((size_t)(4) << 1) | 1))}};
static const lean_object* lp_SoftwareLogic__Go_mixedMoves___closed__2 = (const lean_object*)&lp_SoftwareLogic__Go_mixedMoves___closed__2_value;
static const lean_ctor_object lp_SoftwareLogic__Go_mixedMoves___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_mixedMoves___closed__2_value)}};
static const lean_object* lp_SoftwareLogic__Go_mixedMoves___closed__3 = (const lean_object*)&lp_SoftwareLogic__Go_mixedMoves___closed__3_value;
static const lean_ctor_object lp_SoftwareLogic__Go_mixedMoves___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_mixedMoves___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_SoftwareLogic__Go_mixedMoves___closed__4 = (const lean_object*)&lp_SoftwareLogic__Go_mixedMoves___closed__4_value;
static const lean_ctor_object lp_SoftwareLogic__Go_mixedMoves___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_captureMoves___closed__3_value),((lean_object*)&lp_SoftwareLogic__Go_mixedMoves___closed__4_value)}};
static const lean_object* lp_SoftwareLogic__Go_mixedMoves___closed__5 = (const lean_object*)&lp_SoftwareLogic__Go_mixedMoves___closed__5_value;
static const lean_ctor_object lp_SoftwareLogic__Go_mixedMoves___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&lp_SoftwareLogic__Go_mixedMoves___closed__5_value)}};
static const lean_object* lp_SoftwareLogic__Go_mixedMoves___closed__6 = (const lean_object*)&lp_SoftwareLogic__Go_mixedMoves___closed__6_value;
static const lean_ctor_object lp_SoftwareLogic__Go_mixedMoves___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_captureMoves___closed__1_value),((lean_object*)&lp_SoftwareLogic__Go_mixedMoves___closed__6_value)}};
static const lean_object* lp_SoftwareLogic__Go_mixedMoves___closed__7 = (const lean_object*)&lp_SoftwareLogic__Go_mixedMoves___closed__7_value;
static const lean_ctor_object lp_SoftwareLogic__Go_mixedMoves___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_mixedMoves___closed__1_value),((lean_object*)&lp_SoftwareLogic__Go_mixedMoves___closed__7_value)}};
static const lean_object* lp_SoftwareLogic__Go_mixedMoves___closed__8 = (const lean_object*)&lp_SoftwareLogic__Go_mixedMoves___closed__8_value;
LEAN_EXPORT const lean_object* lp_SoftwareLogic__Go_mixedMoves = (const lean_object*)&lp_SoftwareLogic__Go_mixedMoves___closed__8_value;
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
static const lean_string_object lp_SoftwareLogic__Go_main___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 51, .m_capacity = 51, .m_length = 50, .m_data = "Legal move at center on empty board (.place (2,2))"};
static const lean_object* lp_SoftwareLogic__Go_main___closed__10 = (const lean_object*)&lp_SoftwareLogic__Go_main___closed__10_value;
static const lean_string_object lp_SoftwareLogic__Go_main___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "Illegal move out of bounds (.place (9,9))"};
static const lean_object* lp_SoftwareLogic__Go_main___closed__11 = (const lean_object*)&lp_SoftwareLogic__Go_main___closed__11_value;
static const lean_ctor_object lp_SoftwareLogic__Go_main___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(9) << 1) | 1)),((lean_object*)(((size_t)(9) << 1) | 1))}};
static const lean_object* lp_SoftwareLogic__Go_main___closed__12 = (const lean_object*)&lp_SoftwareLogic__Go_main___closed__12_value;
static const lean_ctor_object lp_SoftwareLogic__Go_main___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_main___closed__12_value)}};
static const lean_object* lp_SoftwareLogic__Go_main___closed__13 = (const lean_object*)&lp_SoftwareLogic__Go_main___closed__13_value;
static const lean_string_object lp_SoftwareLogic__Go_main___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Pass is always legal"};
static const lean_object* lp_SoftwareLogic__Go_main___closed__14 = (const lean_object*)&lp_SoftwareLogic__Go_main___closed__14_value;
static const lean_string_object lp_SoftwareLogic__Go_main___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Single legal placement at center:"};
static const lean_object* lp_SoftwareLogic__Go_main___closed__15 = (const lean_object*)&lp_SoftwareLogic__Go_main___closed__15_value;
static const lean_string_object lp_SoftwareLogic__Go_main___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 54, .m_data = "Capture scenario (white surrounds and captures black):"};
static const lean_object* lp_SoftwareLogic__Go_main___closed__16 = (const lean_object*)&lp_SoftwareLogic__Go_main___closed__16_value;
static const lean_string_object lp_SoftwareLogic__Go_main___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "Legality checks from an intermediate state:"};
static const lean_object* lp_SoftwareLogic__Go_main___closed__17 = (const lean_object*)&lp_SoftwareLogic__Go_main___closed__17_value;
static const lean_string_object lp_SoftwareLogic__Go_main___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "could not create intermediate state"};
static const lean_object* lp_SoftwareLogic__Go_main___closed__18 = (const lean_object*)&lp_SoftwareLogic__Go_main___closed__18_value;
static const lean_string_object lp_SoftwareLogic__Go_main___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "State after Black plays center:"};
static const lean_object* lp_SoftwareLogic__Go_main___closed__19 = (const lean_object*)&lp_SoftwareLogic__Go_main___closed__19_value;
static const lean_string_object lp_SoftwareLogic__Go_main___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "Trying to replay on occupied center (should be false)"};
static const lean_object* lp_SoftwareLogic__Go_main___closed__20 = (const lean_object*)&lp_SoftwareLogic__Go_main___closed__20_value;
static const lean_string_object lp_SoftwareLogic__Go_main___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "Playing a different empty in-bounds point"};
static const lean_object* lp_SoftwareLogic__Go_main___closed__21 = (const lean_object*)&lp_SoftwareLogic__Go_main___closed__21_value;
static const lean_string_object lp_SoftwareLogic__Go_main___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "Out-of-bounds move from intermediate state"};
static const lean_object* lp_SoftwareLogic__Go_main___closed__22 = (const lean_object*)&lp_SoftwareLogic__Go_main___closed__22_value;
static const lean_ctor_object lp_SoftwareLogic__Go_main___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(7) << 1) | 1)),((lean_object*)(((size_t)(7) << 1) | 1))}};
static const lean_object* lp_SoftwareLogic__Go_main___closed__23 = (const lean_object*)&lp_SoftwareLogic__Go_main___closed__23_value;
static const lean_ctor_object lp_SoftwareLogic__Go_main___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_main___closed__23_value)}};
static const lean_object* lp_SoftwareLogic__Go_main___closed__24 = (const lean_object*)&lp_SoftwareLogic__Go_main___closed__24_value;
static const lean_string_object lp_SoftwareLogic__Go_main___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 53, .m_capacity = 53, .m_length = 52, .m_data = "Attempt to place on an occupied point (should fail):"};
static const lean_object* lp_SoftwareLogic__Go_main___closed__25 = (const lean_object*)&lp_SoftwareLogic__Go_main___closed__25_value;
static const lean_string_object lp_SoftwareLogic__Go_main___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Pass move from initial state:"};
static const lean_object* lp_SoftwareLogic__Go_main___closed__26 = (const lean_object*)&lp_SoftwareLogic__Go_main___closed__26_value;
static const lean_string_object lp_SoftwareLogic__Go_main___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Demo sequence from the project:"};
static const lean_object* lp_SoftwareLogic__Go_main___closed__27 = (const lean_object*)&lp_SoftwareLogic__Go_main___closed__27_value;
static const lean_string_object lp_SoftwareLogic__Go_main___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "Checking the final demo board directly:"};
static const lean_object* lp_SoftwareLogic__Go_main___closed__28 = (const lean_object*)&lp_SoftwareLogic__Go_main___closed__28_value;
static const lean_string_object lp_SoftwareLogic__Go_main___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "illegal move sequence"};
static const lean_object* lp_SoftwareLogic__Go_main___closed__29 = (const lean_object*)&lp_SoftwareLogic__Go_main___closed__29_value;
LEAN_EXPORT lean_object* _lean_main();
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_main___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_IO_print___at___00IO_println___at___00showState_spec__0_spec__0(lean_object* x_1) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_get_stdout();
x_4 = lean_ctor_get(x_3, 4);
lean_inc_ref(x_4);
lean_dec_ref(x_3);
x_5 = lean_apply_2(x_4, x_1, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_IO_print___at___00IO_println___at___00showState_spec__0_spec__0___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lp_SoftwareLogic__Go_IO_print___at___00IO_println___at___00showState_spec__0_spec__0(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(lean_object* x_1) {
_start:
{
uint32_t x_3; lean_object* x_4; lean_object* x_5; 
x_3 = 10;
x_4 = lean_string_push(x_1, x_3);
x_5 = lp_SoftwareLogic__Go_IO_print___at___00IO_println___at___00showState_spec__0_spec__0(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_showState(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_4; 
x_4 = lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(x_1);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; uint8_t x_6; lean_object* x_7; lean_object* x_8; 
lean_dec_ref(x_4);
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
x_6 = lean_ctor_get_uint8(x_2, sizeof(void*)*2);
lean_dec_ref(x_2);
x_7 = lp_SoftwareLogic__Go_Go_boardToString(x_5);
x_8 = lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_dec_ref(x_8);
x_9 = ((lean_object*)(lp_SoftwareLogic__Go_showState___closed__0));
x_10 = lean_unsigned_to_nat(0u);
x_11 = lp_SoftwareLogic__Go_Go_instReprStone_repr(x_6, x_10);
x_12 = lean_unsigned_to_nat(120u);
x_13 = l_Std_Format_pretty(x_11, x_12, x_10, x_10);
x_14 = lean_string_append(x_9, x_13);
lean_dec_ref(x_13);
x_15 = lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(x_14);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; 
lean_dec_ref(x_15);
x_16 = ((lean_object*)(lp_SoftwareLogic__Go_showState___closed__1));
x_17 = lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(x_16);
return x_17;
}
else
{
return x_15;
}
}
else
{
return x_8;
}
}
else
{
lean_dec_ref(x_2);
return x_4;
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_showState___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lp_SoftwareLogic__Go_showState(x_1, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_showResult(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_4; lean_object* x_8; 
x_8 = lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(x_1);
if (lean_obj_tag(x_8) == 0)
{
lean_dec_ref(x_8);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = ((lean_object*)(lp_SoftwareLogic__Go_showResult___closed__0));
x_10 = lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_dec_ref(x_10);
x_4 = lean_box(0);
goto block_7;
}
else
{
return x_10;
}
}
else
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; lean_object* x_14; lean_object* x_15; 
x_11 = lean_ctor_get(x_2, 0);
lean_inc(x_11);
lean_dec_ref(x_2);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
x_13 = lean_ctor_get_uint8(x_11, sizeof(void*)*2);
lean_dec(x_11);
x_14 = lp_SoftwareLogic__Go_Go_boardToString(x_12);
x_15 = lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(x_14);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
lean_dec_ref(x_15);
x_16 = ((lean_object*)(lp_SoftwareLogic__Go_showState___closed__0));
x_17 = lean_unsigned_to_nat(0u);
x_18 = lp_SoftwareLogic__Go_Go_instReprStone_repr(x_13, x_17);
x_19 = lean_unsigned_to_nat(120u);
x_20 = l_Std_Format_pretty(x_18, x_19, x_17, x_17);
x_21 = lean_string_append(x_16, x_20);
lean_dec_ref(x_20);
x_22 = lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(x_21);
if (lean_obj_tag(x_22) == 0)
{
lean_dec_ref(x_22);
x_4 = lean_box(0);
goto block_7;
}
else
{
return x_22;
}
}
else
{
return x_15;
}
}
}
else
{
lean_dec(x_2);
return x_8;
}
block_7:
{
lean_object* x_5; lean_object* x_6; 
x_5 = ((lean_object*)(lp_SoftwareLogic__Go_showState___closed__1));
x_6 = lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(x_5);
return x_6;
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_showResult___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lp_SoftwareLogic__Go_showResult(x_1, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_showLegality(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_13; 
x_5 = ((lean_object*)(lp_SoftwareLogic__Go_showLegality___closed__0));
x_6 = lean_string_append(x_1, x_5);
x_13 = lp_SoftwareLogic__Go_Go_legalMove(x_2, x_3);
if (x_13 == 0)
{
lean_object* x_14; 
x_14 = ((lean_object*)(lp_SoftwareLogic__Go_showLegality___closed__1));
x_7 = x_14;
goto block_12;
}
else
{
lean_object* x_15; 
x_15 = ((lean_object*)(lp_SoftwareLogic__Go_showLegality___closed__2));
x_7 = x_15;
goto block_12;
}
block_12:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_string_append(x_6, x_7);
lean_dec_ref(x_7);
x_9 = lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(x_8);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; 
lean_dec_ref(x_9);
x_10 = ((lean_object*)(lp_SoftwareLogic__Go_showState___closed__1));
x_11 = lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(x_10);
return x_11;
}
else
{
return x_9;
}
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_showLegality___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lp_SoftwareLogic__Go_showLegality(x_1, x_2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_applyAndShow(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_5; lean_object* x_9; 
x_9 = lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(x_1);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_dec_ref(x_9);
x_10 = ((lean_object*)(lp_SoftwareLogic__Go_applyAndShow___closed__0));
x_11 = lean_unsigned_to_nat(0u);
lean_inc(x_3);
x_12 = lp_SoftwareLogic__Go_Go_instReprMove_repr(x_3, x_11);
x_13 = lean_unsigned_to_nat(120u);
x_14 = l_Std_Format_pretty(x_12, x_13, x_11, x_11);
x_15 = lean_string_append(x_10, x_14);
lean_dec_ref(x_14);
x_16 = lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(x_15);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; 
lean_dec_ref(x_16);
x_17 = lp_SoftwareLogic__Go_Go_applyMove_x3f(x_2, x_3);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; 
x_18 = ((lean_object*)(lp_SoftwareLogic__Go_showResult___closed__0));
x_19 = lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(x_18);
if (lean_obj_tag(x_19) == 0)
{
lean_dec_ref(x_19);
x_5 = lean_box(0);
goto block_8;
}
else
{
return x_19;
}
}
else
{
lean_object* x_20; lean_object* x_21; uint8_t x_22; lean_object* x_23; lean_object* x_24; 
x_20 = lean_ctor_get(x_17, 0);
lean_inc(x_20);
lean_dec_ref(x_17);
x_21 = lean_ctor_get(x_20, 1);
lean_inc(x_21);
x_22 = lean_ctor_get_uint8(x_20, sizeof(void*)*2);
lean_dec(x_20);
x_23 = lp_SoftwareLogic__Go_Go_boardToString(x_21);
x_24 = lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(x_23);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
lean_dec_ref(x_24);
x_25 = ((lean_object*)(lp_SoftwareLogic__Go_showState___closed__0));
x_26 = lp_SoftwareLogic__Go_Go_instReprStone_repr(x_22, x_11);
x_27 = l_Std_Format_pretty(x_26, x_13, x_11, x_11);
x_28 = lean_string_append(x_25, x_27);
lean_dec_ref(x_27);
x_29 = lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(x_28);
if (lean_obj_tag(x_29) == 0)
{
lean_dec_ref(x_29);
x_5 = lean_box(0);
goto block_8;
}
else
{
return x_29;
}
}
else
{
return x_24;
}
}
}
else
{
lean_dec(x_3);
lean_dec_ref(x_2);
return x_16;
}
}
else
{
lean_dec(x_3);
lean_dec_ref(x_2);
return x_9;
}
block_8:
{
lean_object* x_6; lean_object* x_7; 
x_6 = ((lean_object*)(lp_SoftwareLogic__Go_showState___closed__1));
x_7 = lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(x_6);
return x_7;
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_applyAndShow___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lp_SoftwareLogic__Go_applyAndShow(x_1, x_2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Std_Format_joinSep___at___00List_repr___at___00showSequence_spec__0_spec__0___lam__0(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_unsigned_to_nat(0u);
x_3 = lp_SoftwareLogic__Go_Go_instReprMove_repr(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00showSequence_spec__0_spec__0_spec__1_spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_dec(x_1);
return x_2;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_1);
lean_ctor_set_tag(x_3, 5);
lean_ctor_set(x_3, 1, x_1);
lean_ctor_set(x_3, 0, x_2);
x_7 = lean_unsigned_to_nat(0u);
x_8 = lp_SoftwareLogic__Go_Go_instReprMove_repr(x_5, x_7);
x_9 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_9, 0, x_3);
lean_ctor_set(x_9, 1, x_8);
x_2 = x_9;
x_3 = x_6;
goto _start;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_11 = lean_ctor_get(x_3, 0);
x_12 = lean_ctor_get(x_3, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_3);
lean_inc(x_1);
x_13 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_13, 0, x_2);
lean_ctor_set(x_13, 1, x_1);
x_14 = lean_unsigned_to_nat(0u);
x_15 = lp_SoftwareLogic__Go_Go_instReprMove_repr(x_11, x_14);
x_16 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_16, 0, x_13);
lean_ctor_set(x_16, 1, x_15);
x_2 = x_16;
x_3 = x_12;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00showSequence_spec__0_spec__0_spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_dec(x_1);
return x_2;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_1);
lean_ctor_set_tag(x_3, 5);
lean_ctor_set(x_3, 1, x_1);
lean_ctor_set(x_3, 0, x_2);
x_7 = lean_unsigned_to_nat(0u);
x_8 = lp_SoftwareLogic__Go_Go_instReprMove_repr(x_5, x_7);
x_9 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_9, 0, x_3);
lean_ctor_set(x_9, 1, x_8);
x_10 = lp_SoftwareLogic__Go_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00showSequence_spec__0_spec__0_spec__1_spec__2(x_1, x_9, x_6);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_11 = lean_ctor_get(x_3, 0);
x_12 = lean_ctor_get(x_3, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_3);
lean_inc(x_1);
x_13 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_13, 0, x_2);
lean_ctor_set(x_13, 1, x_1);
x_14 = lean_unsigned_to_nat(0u);
x_15 = lp_SoftwareLogic__Go_Go_instReprMove_repr(x_11, x_14);
x_16 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_16, 0, x_13);
lean_ctor_set(x_16, 1, x_15);
x_17 = lp_SoftwareLogic__Go_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00showSequence_spec__0_spec__0_spec__1_spec__2(x_1, x_16, x_12);
return x_17;
}
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Std_Format_joinSep___at___00List_repr___at___00showSequence_spec__0_spec__0(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
lean_dec(x_2);
x_3 = lean_box(0);
return x_3;
}
else
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_1, 1);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_2);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec_ref(x_1);
x_6 = lp_SoftwareLogic__Go_Std_Format_joinSep___at___00List_repr___at___00showSequence_spec__0_spec__0___lam__0(x_5);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_4);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
lean_dec_ref(x_1);
x_8 = lp_SoftwareLogic__Go_Std_Format_joinSep___at___00List_repr___at___00showSequence_spec__0_spec__0___lam__0(x_7);
x_9 = lp_SoftwareLogic__Go_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00showSequence_spec__0_spec__0_spec__1(x_2, x_8, x_4);
return x_9;
}
}
}
}
static lean_object* _init_lp_SoftwareLogic__Go_List_repr___at___00showSequence_spec__0___redArg___closed__7(void) {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = ((lean_object*)(lp_SoftwareLogic__Go_List_repr___at___00showSequence_spec__0___redArg___closed__2));
x_2 = lean_string_length(x_1);
return x_2;
}
}
static lean_object* _init_lp_SoftwareLogic__Go_List_repr___at___00showSequence_spec__0___redArg___closed__8(void) {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_obj_once(&lp_SoftwareLogic__Go_List_repr___at___00showSequence_spec__0___redArg___closed__7, &lp_SoftwareLogic__Go_List_repr___at___00showSequence_spec__0___redArg___closed__7_once, _init_lp_SoftwareLogic__Go_List_repr___at___00showSequence_spec__0___redArg___closed__7);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_repr___at___00showSequence_spec__0___redArg(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = ((lean_object*)(lp_SoftwareLogic__Go_List_repr___at___00showSequence_spec__0___redArg___closed__1));
return x_2;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; lean_object* x_12; 
x_3 = ((lean_object*)(lp_SoftwareLogic__Go_List_repr___at___00showSequence_spec__0___redArg___closed__5));
x_4 = lp_SoftwareLogic__Go_Std_Format_joinSep___at___00List_repr___at___00showSequence_spec__0_spec__0(x_1, x_3);
x_5 = lean_obj_once(&lp_SoftwareLogic__Go_List_repr___at___00showSequence_spec__0___redArg___closed__8, &lp_SoftwareLogic__Go_List_repr___at___00showSequence_spec__0___redArg___closed__8_once, _init_lp_SoftwareLogic__Go_List_repr___at___00showSequence_spec__0___redArg___closed__8);
x_6 = ((lean_object*)(lp_SoftwareLogic__Go_List_repr___at___00showSequence_spec__0___redArg___closed__9));
x_7 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_4);
x_8 = ((lean_object*)(lp_SoftwareLogic__Go_List_repr___at___00showSequence_spec__0___redArg___closed__10));
x_9 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_9, 0, x_7);
lean_ctor_set(x_9, 1, x_8);
x_10 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_10, 0, x_5);
lean_ctor_set(x_10, 1, x_9);
x_11 = 0;
x_12 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set_uint8(x_12, sizeof(void*)*1, x_11);
return x_12;
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_showSequence(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_5; lean_object* x_9; 
x_9 = lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(x_1);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_dec_ref(x_9);
x_10 = ((lean_object*)(lp_SoftwareLogic__Go_showSequence___closed__0));
x_11 = lean_unsigned_to_nat(0u);
lean_inc(x_3);
x_12 = lp_SoftwareLogic__Go_List_repr___at___00showSequence_spec__0___redArg(x_3);
x_13 = lean_unsigned_to_nat(120u);
x_14 = l_Std_Format_pretty(x_12, x_13, x_11, x_11);
x_15 = lean_string_append(x_10, x_14);
lean_dec_ref(x_14);
x_16 = lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(x_15);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; 
lean_dec_ref(x_16);
x_17 = lp_SoftwareLogic__Go_Go_applyMoves_x3f(x_2, x_3);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; 
x_18 = ((lean_object*)(lp_SoftwareLogic__Go_showSequence___closed__1));
x_19 = lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(x_18);
if (lean_obj_tag(x_19) == 0)
{
lean_dec_ref(x_19);
x_5 = lean_box(0);
goto block_8;
}
else
{
return x_19;
}
}
else
{
lean_object* x_20; lean_object* x_21; uint8_t x_22; lean_object* x_23; lean_object* x_24; 
x_20 = lean_ctor_get(x_17, 0);
lean_inc(x_20);
lean_dec_ref(x_17);
x_21 = lean_ctor_get(x_20, 1);
lean_inc(x_21);
x_22 = lean_ctor_get_uint8(x_20, sizeof(void*)*2);
lean_dec(x_20);
x_23 = lp_SoftwareLogic__Go_Go_boardToString(x_21);
x_24 = lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(x_23);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
lean_dec_ref(x_24);
x_25 = ((lean_object*)(lp_SoftwareLogic__Go_showState___closed__0));
x_26 = lp_SoftwareLogic__Go_Go_instReprStone_repr(x_22, x_11);
x_27 = l_Std_Format_pretty(x_26, x_13, x_11, x_11);
x_28 = lean_string_append(x_25, x_27);
lean_dec_ref(x_27);
x_29 = lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(x_28);
if (lean_obj_tag(x_29) == 0)
{
lean_dec_ref(x_29);
x_5 = lean_box(0);
goto block_8;
}
else
{
return x_29;
}
}
else
{
return x_24;
}
}
}
else
{
lean_dec(x_3);
lean_dec_ref(x_2);
return x_16;
}
}
else
{
lean_dec(x_3);
lean_dec_ref(x_2);
return x_9;
}
block_8:
{
lean_object* x_6; lean_object* x_7; 
x_6 = ((lean_object*)(lp_SoftwareLogic__Go_showState___closed__1));
x_7 = lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(x_6);
return x_7;
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_showSequence___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lp_SoftwareLogic__Go_showSequence(x_1, x_2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_repr___at___00showSequence_spec__0(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lp_SoftwareLogic__Go_List_repr___at___00showSequence_spec__0___redArg(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_repr___at___00showSequence_spec__0___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lp_SoftwareLogic__Go_List_repr___at___00showSequence_spec__0(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
static lean_object* _init_lp_SoftwareLogic__Go_st0___closed__0(void) {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(5u);
x_2 = lp_SoftwareLogic__Go_Go_initialState(x_1);
return x_2;
}
}
static lean_object* _init_lp_SoftwareLogic__Go_st0(void) {
_start:
{
lean_object* x_1; 
x_1 = lean_obj_once(&lp_SoftwareLogic__Go_st0___closed__0, &lp_SoftwareLogic__Go_st0___closed__0_once, _init_lp_SoftwareLogic__Go_st0___closed__0);
return x_1;
}
}
static lean_object* _init_lp_SoftwareLogic__Go_oneMove_x3f___closed__2(void) {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = ((lean_object*)(lp_SoftwareLogic__Go_oneMove_x3f___closed__1));
x_2 = lp_SoftwareLogic__Go_st0;
x_3 = lp_SoftwareLogic__Go_Go_applyMove_x3f(x_2, x_1);
return x_3;
}
}
static lean_object* _init_lp_SoftwareLogic__Go_oneMove_x3f(void) {
_start:
{
lean_object* x_1; 
x_1 = lean_obj_once(&lp_SoftwareLogic__Go_oneMove_x3f___closed__2, &lp_SoftwareLogic__Go_oneMove_x3f___closed__2_once, _init_lp_SoftwareLogic__Go_oneMove_x3f___closed__2);
return x_1;
}
}
static lean_object* _init_lp_SoftwareLogic__Go_occupiedTest_x3f(void) {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = ((lean_object*)(lp_SoftwareLogic__Go_oneMove_x3f___closed__1));
x_2 = lean_obj_once(&lp_SoftwareLogic__Go_oneMove_x3f___closed__2, &lp_SoftwareLogic__Go_oneMove_x3f___closed__2_once, _init_lp_SoftwareLogic__Go_oneMove_x3f___closed__2);
if (lean_obj_tag(x_2) == 0)
{
return x_2;
}
else
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lp_SoftwareLogic__Go_Go_applyMove_x3f(x_3, x_1);
return x_4;
}
}
}
static lean_object* _init_lp_SoftwareLogic__Go_passState_x3f___closed__0(void) {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(1);
x_2 = lp_SoftwareLogic__Go_st0;
x_3 = lp_SoftwareLogic__Go_Go_applyMove_x3f(x_2, x_1);
return x_3;
}
}
static lean_object* _init_lp_SoftwareLogic__Go_passState_x3f(void) {
_start:
{
lean_object* x_1; 
x_1 = lean_obj_once(&lp_SoftwareLogic__Go_passState_x3f___closed__0, &lp_SoftwareLogic__Go_passState_x3f___closed__0_once, _init_lp_SoftwareLogic__Go_passState_x3f___closed__0);
return x_1;
}
}
static lean_object* _init_lp_SoftwareLogic__Go_finalState_x3f___closed__0(void) {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = ((lean_object*)(lp_SoftwareLogic__Go_demoMoves));
x_2 = lp_SoftwareLogic__Go_st0;
x_3 = lp_SoftwareLogic__Go_Go_applyMoves_x3f(x_2, x_1);
return x_3;
}
}
static lean_object* _init_lp_SoftwareLogic__Go_finalState_x3f(void) {
_start:
{
lean_object* x_1; 
x_1 = lean_obj_once(&lp_SoftwareLogic__Go_finalState_x3f___closed__0, &lp_SoftwareLogic__Go_finalState_x3f___closed__0_once, _init_lp_SoftwareLogic__Go_finalState_x3f___closed__0);
return x_1;
}
}
static lean_object* _init_lp_SoftwareLogic__Go_captureState_x3f___closed__0(void) {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = ((lean_object*)(lp_SoftwareLogic__Go_captureMoves));
x_2 = lp_SoftwareLogic__Go_st0;
x_3 = lp_SoftwareLogic__Go_Go_applyMoves_x3f(x_2, x_1);
return x_3;
}
}
static lean_object* _init_lp_SoftwareLogic__Go_captureState_x3f(void) {
_start:
{
lean_object* x_1; 
x_1 = lean_obj_once(&lp_SoftwareLogic__Go_captureState_x3f___closed__0, &lp_SoftwareLogic__Go_captureState_x3f___closed__0_once, _init_lp_SoftwareLogic__Go_captureState_x3f___closed__0);
return x_1;
}
}
static lean_object* _init_lp_SoftwareLogic__Go_mixedState_x3f___closed__0(void) {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = ((lean_object*)(lp_SoftwareLogic__Go_mixedMoves));
x_2 = lp_SoftwareLogic__Go_st0;
x_3 = lp_SoftwareLogic__Go_Go_applyMoves_x3f(x_2, x_1);
return x_3;
}
}
static lean_object* _init_lp_SoftwareLogic__Go_mixedState_x3f(void) {
_start:
{
lean_object* x_1; 
x_1 = lean_obj_once(&lp_SoftwareLogic__Go_mixedState_x3f___closed__0, &lp_SoftwareLogic__Go_mixedState_x3f___closed__0_once, _init_lp_SoftwareLogic__Go_mixedState_x3f___closed__0);
return x_1;
}
}
LEAN_EXPORT lean_object* _lean_main() {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = ((lean_object*)(lp_SoftwareLogic__Go_main___closed__0));
x_3 = lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(x_2);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec_ref(x_3);
x_4 = ((lean_object*)(lp_SoftwareLogic__Go_showState___closed__1));
x_5 = lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(x_4);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_28; 
lean_dec_ref(x_5);
x_6 = ((lean_object*)(lp_SoftwareLogic__Go_main___closed__1));
x_7 = lp_SoftwareLogic__Go_st0;
x_28 = lp_SoftwareLogic__Go_showState(x_6, x_7);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
lean_dec_ref(x_28);
x_29 = ((lean_object*)(lp_SoftwareLogic__Go_main___closed__10));
x_30 = ((lean_object*)(lp_SoftwareLogic__Go_oneMove_x3f___closed__1));
x_31 = lp_SoftwareLogic__Go_showLegality(x_29, x_7, x_30);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
lean_dec_ref(x_31);
x_32 = ((lean_object*)(lp_SoftwareLogic__Go_main___closed__11));
x_33 = ((lean_object*)(lp_SoftwareLogic__Go_main___closed__13));
x_34 = lp_SoftwareLogic__Go_showLegality(x_32, x_7, x_33);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
lean_dec_ref(x_34);
x_35 = ((lean_object*)(lp_SoftwareLogic__Go_main___closed__14));
x_36 = lean_box(1);
x_37 = lp_SoftwareLogic__Go_showLegality(x_35, x_7, x_36);
if (lean_obj_tag(x_37) == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_62; 
lean_dec_ref(x_37);
x_38 = ((lean_object*)(lp_SoftwareLogic__Go_main___closed__15));
x_39 = lp_SoftwareLogic__Go_oneMove_x3f;
x_62 = lp_SoftwareLogic__Go_showResult(x_38, x_39);
if (lean_obj_tag(x_62) == 0)
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; 
lean_dec_ref(x_62);
x_63 = ((lean_object*)(lp_SoftwareLogic__Go_main___closed__25));
x_64 = lp_SoftwareLogic__Go_occupiedTest_x3f;
x_65 = lp_SoftwareLogic__Go_showResult(x_63, x_64);
if (lean_obj_tag(x_65) == 0)
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; 
lean_dec_ref(x_65);
x_66 = ((lean_object*)(lp_SoftwareLogic__Go_main___closed__26));
x_67 = lp_SoftwareLogic__Go_passState_x3f;
x_68 = lp_SoftwareLogic__Go_showResult(x_66, x_67);
if (lean_obj_tag(x_68) == 0)
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; 
lean_dec_ref(x_68);
x_69 = ((lean_object*)(lp_SoftwareLogic__Go_main___closed__27));
x_70 = ((lean_object*)(lp_SoftwareLogic__Go_demoMoves));
x_71 = lp_SoftwareLogic__Go_showSequence(x_69, x_7, x_70);
if (lean_obj_tag(x_71) == 0)
{
lean_object* x_72; lean_object* x_73; 
lean_dec_ref(x_71);
x_72 = ((lean_object*)(lp_SoftwareLogic__Go_main___closed__28));
x_73 = lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(x_72);
if (lean_obj_tag(x_73) == 0)
{
lean_object* x_74; 
lean_dec_ref(x_73);
x_74 = lp_SoftwareLogic__Go_finalState_x3f;
if (lean_obj_tag(x_74) == 0)
{
lean_object* x_75; lean_object* x_76; 
x_75 = ((lean_object*)(lp_SoftwareLogic__Go_main___closed__29));
x_76 = lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(x_75);
if (lean_obj_tag(x_76) == 0)
{
lean_dec_ref(x_76);
x_40 = lean_box(0);
goto block_61;
}
else
{
return x_76;
}
}
else
{
lean_object* x_77; lean_object* x_78; uint8_t x_79; lean_object* x_80; lean_object* x_81; 
x_77 = lean_ctor_get(x_74, 0);
lean_inc(x_77);
x_78 = lean_ctor_get(x_77, 1);
lean_inc(x_78);
x_79 = lean_ctor_get_uint8(x_77, sizeof(void*)*2);
lean_dec(x_77);
x_80 = lp_SoftwareLogic__Go_Go_boardToString(x_78);
x_81 = lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(x_80);
if (lean_obj_tag(x_81) == 0)
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; 
lean_dec_ref(x_81);
x_82 = ((lean_object*)(lp_SoftwareLogic__Go_showState___closed__0));
x_83 = lean_unsigned_to_nat(0u);
x_84 = lp_SoftwareLogic__Go_Go_instReprStone_repr(x_79, x_83);
x_85 = lean_unsigned_to_nat(120u);
x_86 = l_Std_Format_pretty(x_84, x_85, x_83, x_83);
x_87 = lean_string_append(x_82, x_86);
lean_dec_ref(x_86);
x_88 = lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(x_87);
if (lean_obj_tag(x_88) == 0)
{
lean_dec_ref(x_88);
x_40 = lean_box(0);
goto block_61;
}
else
{
return x_88;
}
}
else
{
return x_81;
}
}
}
else
{
return x_73;
}
}
else
{
return x_71;
}
}
else
{
return x_68;
}
}
else
{
return x_65;
}
}
else
{
return x_62;
}
block_61:
{
lean_object* x_41; 
x_41 = lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(x_4);
if (lean_obj_tag(x_41) == 0)
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
lean_dec_ref(x_41);
x_42 = ((lean_object*)(lp_SoftwareLogic__Go_main___closed__16));
x_43 = ((lean_object*)(lp_SoftwareLogic__Go_captureMoves));
x_44 = lp_SoftwareLogic__Go_showSequence(x_42, x_7, x_43);
if (lean_obj_tag(x_44) == 0)
{
lean_object* x_45; lean_object* x_46; 
lean_dec_ref(x_44);
x_45 = ((lean_object*)(lp_SoftwareLogic__Go_main___closed__17));
x_46 = lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(x_45);
if (lean_obj_tag(x_46) == 0)
{
lean_dec_ref(x_46);
if (lean_obj_tag(x_39) == 0)
{
lean_object* x_47; lean_object* x_48; 
x_47 = ((lean_object*)(lp_SoftwareLogic__Go_main___closed__18));
x_48 = lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(x_47);
if (lean_obj_tag(x_48) == 0)
{
lean_object* x_49; 
lean_dec_ref(x_48);
x_49 = lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(x_4);
if (lean_obj_tag(x_49) == 0)
{
lean_dec_ref(x_49);
x_8 = lean_box(0);
goto block_27;
}
else
{
return x_49;
}
}
else
{
return x_48;
}
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_39, 0);
lean_inc(x_50);
x_51 = ((lean_object*)(lp_SoftwareLogic__Go_main___closed__19));
lean_inc(x_50);
x_52 = lp_SoftwareLogic__Go_showState(x_51, x_50);
if (lean_obj_tag(x_52) == 0)
{
lean_object* x_53; lean_object* x_54; 
lean_dec_ref(x_52);
x_53 = ((lean_object*)(lp_SoftwareLogic__Go_main___closed__20));
lean_inc(x_50);
x_54 = lp_SoftwareLogic__Go_showLegality(x_53, x_50, x_30);
if (lean_obj_tag(x_54) == 0)
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; 
lean_dec_ref(x_54);
x_55 = ((lean_object*)(lp_SoftwareLogic__Go_main___closed__21));
x_56 = ((lean_object*)(lp_SoftwareLogic__Go_demoMoves___closed__5));
lean_inc(x_50);
x_57 = lp_SoftwareLogic__Go_showLegality(x_55, x_50, x_56);
if (lean_obj_tag(x_57) == 0)
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; 
lean_dec_ref(x_57);
x_58 = ((lean_object*)(lp_SoftwareLogic__Go_main___closed__22));
x_59 = ((lean_object*)(lp_SoftwareLogic__Go_main___closed__24));
x_60 = lp_SoftwareLogic__Go_showLegality(x_58, x_50, x_59);
if (lean_obj_tag(x_60) == 0)
{
lean_dec_ref(x_60);
x_8 = lean_box(0);
goto block_27;
}
else
{
return x_60;
}
}
else
{
lean_dec(x_50);
return x_57;
}
}
else
{
lean_dec(x_50);
return x_54;
}
}
else
{
lean_dec(x_50);
return x_52;
}
}
}
else
{
return x_46;
}
}
else
{
return x_44;
}
}
else
{
return x_41;
}
}
}
else
{
return x_37;
}
}
else
{
return x_34;
}
}
else
{
return x_31;
}
}
else
{
return x_28;
}
block_27:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = ((lean_object*)(lp_SoftwareLogic__Go_main___closed__2));
x_10 = ((lean_object*)(lp_SoftwareLogic__Go_mixedMoves));
x_11 = lp_SoftwareLogic__Go_showSequence(x_9, x_7, x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; 
lean_dec_ref(x_11);
x_12 = ((lean_object*)(lp_SoftwareLogic__Go_main___closed__3));
x_13 = lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; 
lean_dec_ref(x_13);
x_14 = ((lean_object*)(lp_SoftwareLogic__Go_main___closed__4));
x_15 = lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(x_14);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; 
lean_dec_ref(x_15);
x_16 = ((lean_object*)(lp_SoftwareLogic__Go_main___closed__5));
x_17 = lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(x_16);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; 
lean_dec_ref(x_17);
x_18 = ((lean_object*)(lp_SoftwareLogic__Go_main___closed__6));
x_19 = lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(x_18);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; 
lean_dec_ref(x_19);
x_20 = ((lean_object*)(lp_SoftwareLogic__Go_main___closed__7));
x_21 = lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(x_20);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; 
lean_dec_ref(x_21);
x_22 = ((lean_object*)(lp_SoftwareLogic__Go_main___closed__8));
x_23 = lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(x_22);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; 
lean_dec_ref(x_23);
x_24 = lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(x_4);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; lean_object* x_26; 
lean_dec_ref(x_24);
x_25 = ((lean_object*)(lp_SoftwareLogic__Go_main___closed__9));
x_26 = lp_SoftwareLogic__Go_IO_println___at___00showState_spec__0(x_25);
return x_26;
}
else
{
return x_24;
}
}
else
{
return x_23;
}
}
else
{
return x_21;
}
}
else
{
return x_19;
}
}
else
{
return x_17;
}
}
else
{
return x_15;
}
}
else
{
return x_13;
}
}
else
{
return x_11;
}
}
}
else
{
return x_5;
}
}
else
{
return x_3;
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_main___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = _lean_main();
return x_2;
}
}
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
res = initialize_SoftwareLogic__Go_Go_Proofs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
lp_SoftwareLogic__Go_st0 = _init_lp_SoftwareLogic__Go_st0();
lean_mark_persistent(lp_SoftwareLogic__Go_st0);
lp_SoftwareLogic__Go_oneMove_x3f = _init_lp_SoftwareLogic__Go_oneMove_x3f();
lean_mark_persistent(lp_SoftwareLogic__Go_oneMove_x3f);
lp_SoftwareLogic__Go_occupiedTest_x3f = _init_lp_SoftwareLogic__Go_occupiedTest_x3f();
lean_mark_persistent(lp_SoftwareLogic__Go_occupiedTest_x3f);
lp_SoftwareLogic__Go_passState_x3f = _init_lp_SoftwareLogic__Go_passState_x3f();
lean_mark_persistent(lp_SoftwareLogic__Go_passState_x3f);
lp_SoftwareLogic__Go_finalState_x3f = _init_lp_SoftwareLogic__Go_finalState_x3f();
lean_mark_persistent(lp_SoftwareLogic__Go_finalState_x3f);
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

  int main(int argc, char ** argv) {
  #if defined(WIN32) || defined(_WIN32)
  SetErrorMode(SEM_FAILCRITICALERRORS);
  SetConsoleOutputCP(CP_UTF8);
  #endif
  lean_object* in; lean_object* res;
argv = lean_setup_args(argc, argv);
lean_initialize_runtime_module();
lean_set_panic_messages(false);
res = initialize_SoftwareLogic__Go_Main(1 /* builtin */);
lean_set_panic_messages(true);
lean_io_mark_end_initialization();
if (lean_io_result_is_ok(res)) {
lean_dec_ref(res);
lean_init_task_manager();
res = _lean_main();
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
