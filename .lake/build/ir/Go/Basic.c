// Lean compiler output
// Module: Go.Basic
// Imports: public import Init public meta import Init
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
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Std_Format_joinSep___at___00Lean_Syntax_formatStxAux_spec__2(lean_object*, lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_List_replicateTR___redArg(lean_object*, lean_object*);
lean_object* l_instDecidableEqNat___boxed(lean_object*, lean_object*);
uint8_t l_instDecidableEqProd___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Option_instDecidableEq___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_instDecidableEqList___redArg(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_Stone_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_Stone_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_Stone_toCtorIdx(uint8_t);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_Stone_toCtorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_Stone_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_Stone_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_Stone_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_Stone_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_Stone_black_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_Stone_black_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_Stone_black_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_Stone_black_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_Stone_white_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_Stone_white_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_Stone_white_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_Stone_white_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_SoftwareLogic__Go_Go_instReprStone_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Go.Stone.black"};
static const lean_object* lp_SoftwareLogic__Go_Go_instReprStone_repr___closed__0 = (const lean_object*)&lp_SoftwareLogic__Go_Go_instReprStone_repr___closed__0_value;
static const lean_ctor_object lp_SoftwareLogic__Go_Go_instReprStone_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_Go_instReprStone_repr___closed__0_value)}};
static const lean_object* lp_SoftwareLogic__Go_Go_instReprStone_repr___closed__1 = (const lean_object*)&lp_SoftwareLogic__Go_Go_instReprStone_repr___closed__1_value;
static const lean_string_object lp_SoftwareLogic__Go_Go_instReprStone_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Go.Stone.white"};
static const lean_object* lp_SoftwareLogic__Go_Go_instReprStone_repr___closed__2 = (const lean_object*)&lp_SoftwareLogic__Go_Go_instReprStone_repr___closed__2_value;
static const lean_ctor_object lp_SoftwareLogic__Go_Go_instReprStone_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_Go_instReprStone_repr___closed__2_value)}};
static const lean_object* lp_SoftwareLogic__Go_Go_instReprStone_repr___closed__3 = (const lean_object*)&lp_SoftwareLogic__Go_Go_instReprStone_repr___closed__3_value;
static lean_once_cell_t lp_SoftwareLogic__Go_Go_instReprStone_repr___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_SoftwareLogic__Go_Go_instReprStone_repr___closed__4;
static lean_once_cell_t lp_SoftwareLogic__Go_Go_instReprStone_repr___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_SoftwareLogic__Go_Go_instReprStone_repr___closed__5;
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_instReprStone_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_instReprStone_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_SoftwareLogic__Go_Go_instReprStone___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_SoftwareLogic__Go_Go_instReprStone_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_SoftwareLogic__Go_Go_instReprStone___closed__0 = (const lean_object*)&lp_SoftwareLogic__Go_Go_instReprStone___closed__0_value;
LEAN_EXPORT const lean_object* lp_SoftwareLogic__Go_Go_instReprStone = (const lean_object*)&lp_SoftwareLogic__Go_Go_instReprStone___closed__0_value;
LEAN_EXPORT uint8_t lp_SoftwareLogic__Go_Go_Stone_ofNat(lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_Stone_ofNat___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_SoftwareLogic__Go_Go_instDecidableEqStone(uint8_t, uint8_t);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_instDecidableEqStone___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_SoftwareLogic__Go_Go_instBEqStone_beq(uint8_t, uint8_t);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_instBEqStone_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_SoftwareLogic__Go_Go_instBEqStone___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_SoftwareLogic__Go_Go_instBEqStone_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_SoftwareLogic__Go_Go_instBEqStone___closed__0 = (const lean_object*)&lp_SoftwareLogic__Go_Go_instBEqStone___closed__0_value;
LEAN_EXPORT const lean_object* lp_SoftwareLogic__Go_Go_instBEqStone = (const lean_object*)&lp_SoftwareLogic__Go_Go_instBEqStone___closed__0_value;
LEAN_EXPORT uint8_t lp_SoftwareLogic__Go_Go_Stone_other(uint8_t);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_Stone_other___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_Move_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_Move_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_Move_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_Move_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_Move_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_Move_place_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_Move_place_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_Move_pass_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_Move_pass_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_SoftwareLogic__Go_Prod_repr___at___00Go_instReprMove_repr_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* lp_SoftwareLogic__Go_Prod_repr___at___00Go_instReprMove_repr_spec__0___redArg___closed__0 = (const lean_object*)&lp_SoftwareLogic__Go_Prod_repr___at___00Go_instReprMove_repr_spec__0___redArg___closed__0_value;
static const lean_string_object lp_SoftwareLogic__Go_Prod_repr___at___00Go_instReprMove_repr_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* lp_SoftwareLogic__Go_Prod_repr___at___00Go_instReprMove_repr_spec__0___redArg___closed__1 = (const lean_object*)&lp_SoftwareLogic__Go_Prod_repr___at___00Go_instReprMove_repr_spec__0___redArg___closed__1_value;
static const lean_ctor_object lp_SoftwareLogic__Go_Prod_repr___at___00Go_instReprMove_repr_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_Prod_repr___at___00Go_instReprMove_repr_spec__0___redArg___closed__1_value)}};
static const lean_object* lp_SoftwareLogic__Go_Prod_repr___at___00Go_instReprMove_repr_spec__0___redArg___closed__2 = (const lean_object*)&lp_SoftwareLogic__Go_Prod_repr___at___00Go_instReprMove_repr_spec__0___redArg___closed__2_value;
static const lean_ctor_object lp_SoftwareLogic__Go_Prod_repr___at___00Go_instReprMove_repr_spec__0___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_Prod_repr___at___00Go_instReprMove_repr_spec__0___redArg___closed__2_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_SoftwareLogic__Go_Prod_repr___at___00Go_instReprMove_repr_spec__0___redArg___closed__3 = (const lean_object*)&lp_SoftwareLogic__Go_Prod_repr___at___00Go_instReprMove_repr_spec__0___redArg___closed__3_value;
static const lean_string_object lp_SoftwareLogic__Go_Prod_repr___at___00Go_instReprMove_repr_spec__0___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* lp_SoftwareLogic__Go_Prod_repr___at___00Go_instReprMove_repr_spec__0___redArg___closed__4 = (const lean_object*)&lp_SoftwareLogic__Go_Prod_repr___at___00Go_instReprMove_repr_spec__0___redArg___closed__4_value;
static lean_once_cell_t lp_SoftwareLogic__Go_Prod_repr___at___00Go_instReprMove_repr_spec__0___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_SoftwareLogic__Go_Prod_repr___at___00Go_instReprMove_repr_spec__0___redArg___closed__5;
static lean_once_cell_t lp_SoftwareLogic__Go_Prod_repr___at___00Go_instReprMove_repr_spec__0___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_SoftwareLogic__Go_Prod_repr___at___00Go_instReprMove_repr_spec__0___redArg___closed__6;
static const lean_ctor_object lp_SoftwareLogic__Go_Prod_repr___at___00Go_instReprMove_repr_spec__0___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_Prod_repr___at___00Go_instReprMove_repr_spec__0___redArg___closed__0_value)}};
static const lean_object* lp_SoftwareLogic__Go_Prod_repr___at___00Go_instReprMove_repr_spec__0___redArg___closed__7 = (const lean_object*)&lp_SoftwareLogic__Go_Prod_repr___at___00Go_instReprMove_repr_spec__0___redArg___closed__7_value;
static const lean_ctor_object lp_SoftwareLogic__Go_Prod_repr___at___00Go_instReprMove_repr_spec__0___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_Prod_repr___at___00Go_instReprMove_repr_spec__0___redArg___closed__4_value)}};
static const lean_object* lp_SoftwareLogic__Go_Prod_repr___at___00Go_instReprMove_repr_spec__0___redArg___closed__8 = (const lean_object*)&lp_SoftwareLogic__Go_Prod_repr___at___00Go_instReprMove_repr_spec__0___redArg___closed__8_value;
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Prod_repr___at___00Go_instReprMove_repr_spec__0___redArg(lean_object*);
static const lean_string_object lp_SoftwareLogic__Go_Go_instReprMove_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Go.Move.pass"};
static const lean_object* lp_SoftwareLogic__Go_Go_instReprMove_repr___closed__0 = (const lean_object*)&lp_SoftwareLogic__Go_Go_instReprMove_repr___closed__0_value;
static const lean_ctor_object lp_SoftwareLogic__Go_Go_instReprMove_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_Go_instReprMove_repr___closed__0_value)}};
static const lean_object* lp_SoftwareLogic__Go_Go_instReprMove_repr___closed__1 = (const lean_object*)&lp_SoftwareLogic__Go_Go_instReprMove_repr___closed__1_value;
static const lean_string_object lp_SoftwareLogic__Go_Go_instReprMove_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Go.Move.place"};
static const lean_object* lp_SoftwareLogic__Go_Go_instReprMove_repr___closed__2 = (const lean_object*)&lp_SoftwareLogic__Go_Go_instReprMove_repr___closed__2_value;
static const lean_ctor_object lp_SoftwareLogic__Go_Go_instReprMove_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_Go_instReprMove_repr___closed__2_value)}};
static const lean_object* lp_SoftwareLogic__Go_Go_instReprMove_repr___closed__3 = (const lean_object*)&lp_SoftwareLogic__Go_Go_instReprMove_repr___closed__3_value;
static const lean_ctor_object lp_SoftwareLogic__Go_Go_instReprMove_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_Go_instReprMove_repr___closed__3_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_SoftwareLogic__Go_Go_instReprMove_repr___closed__4 = (const lean_object*)&lp_SoftwareLogic__Go_Go_instReprMove_repr___closed__4_value;
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_instReprMove_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_instReprMove_repr___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Prod_repr___at___00Go_instReprMove_repr_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Prod_repr___at___00Go_instReprMove_repr_spec__0___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_SoftwareLogic__Go_Go_instReprMove___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_SoftwareLogic__Go_Go_instReprMove_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_SoftwareLogic__Go_Go_instReprMove___closed__0 = (const lean_object*)&lp_SoftwareLogic__Go_Go_instReprMove___closed__0_value;
LEAN_EXPORT const lean_object* lp_SoftwareLogic__Go_Go_instReprMove = (const lean_object*)&lp_SoftwareLogic__Go_Go_instReprMove___closed__0_value;
LEAN_EXPORT uint8_t lp_SoftwareLogic__Go_Go_instDecidableEqMove_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_instDecidableEqMove_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_SoftwareLogic__Go_Go_instDecidableEqMove(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_instDecidableEqMove___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_SoftwareLogic__Go_Go_instBEqMove_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_instBEqMove_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_SoftwareLogic__Go_Go_instBEqMove___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_SoftwareLogic__Go_Go_instBEqMove_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_SoftwareLogic__Go_Go_instBEqMove___closed__0 = (const lean_object*)&lp_SoftwareLogic__Go_Go_instBEqMove___closed__0_value;
LEAN_EXPORT const lean_object* lp_SoftwareLogic__Go_Go_instBEqMove = (const lean_object*)&lp_SoftwareLogic__Go_Go_instBEqMove___closed__0_value;
static const lean_string_object lp_SoftwareLogic__Go_Option_repr___at___00List_repr___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "none"};
static const lean_object* lp_SoftwareLogic__Go_Option_repr___at___00List_repr___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__0_spec__1___closed__0 = (const lean_object*)&lp_SoftwareLogic__Go_Option_repr___at___00List_repr___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__0_spec__1___closed__0_value;
static const lean_ctor_object lp_SoftwareLogic__Go_Option_repr___at___00List_repr___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__0_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_Option_repr___at___00List_repr___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__0_spec__1___closed__0_value)}};
static const lean_object* lp_SoftwareLogic__Go_Option_repr___at___00List_repr___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__0_spec__1___closed__1 = (const lean_object*)&lp_SoftwareLogic__Go_Option_repr___at___00List_repr___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__0_spec__1___closed__1_value;
static const lean_string_object lp_SoftwareLogic__Go_Option_repr___at___00List_repr___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__0_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "some "};
static const lean_object* lp_SoftwareLogic__Go_Option_repr___at___00List_repr___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__0_spec__1___closed__2 = (const lean_object*)&lp_SoftwareLogic__Go_Option_repr___at___00List_repr___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__0_spec__1___closed__2_value;
static const lean_ctor_object lp_SoftwareLogic__Go_Option_repr___at___00List_repr___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__0_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_Option_repr___at___00List_repr___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__0_spec__1___closed__2_value)}};
static const lean_object* lp_SoftwareLogic__Go_Option_repr___at___00List_repr___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__0_spec__1___closed__3 = (const lean_object*)&lp_SoftwareLogic__Go_Option_repr___at___00List_repr___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__0_spec__1___closed__3_value;
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Option_repr___at___00List_repr___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Option_repr___at___00List_repr___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__0_spec__2_spec__3_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__0_spec__2_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Std_Format_joinSep___at___00List_repr___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__0_spec__2___lam__0(lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Std_Format_joinSep___at___00List_repr___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__0_spec__2___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Std_Format_joinSep___at___00List_repr___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__0_spec__2(lean_object*, lean_object*);
static const lean_string_object lp_SoftwareLogic__Go_List_repr___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "[]"};
static const lean_object* lp_SoftwareLogic__Go_List_repr___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__0___redArg___closed__0 = (const lean_object*)&lp_SoftwareLogic__Go_List_repr___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__0___redArg___closed__0_value;
static const lean_ctor_object lp_SoftwareLogic__Go_List_repr___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_List_repr___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__0___redArg___closed__0_value)}};
static const lean_object* lp_SoftwareLogic__Go_List_repr___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__0___redArg___closed__1 = (const lean_object*)&lp_SoftwareLogic__Go_List_repr___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__0___redArg___closed__1_value;
static const lean_string_object lp_SoftwareLogic__Go_List_repr___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* lp_SoftwareLogic__Go_List_repr___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__0___redArg___closed__2 = (const lean_object*)&lp_SoftwareLogic__Go_List_repr___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__0___redArg___closed__2_value;
static const lean_string_object lp_SoftwareLogic__Go_List_repr___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__0___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* lp_SoftwareLogic__Go_List_repr___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__0___redArg___closed__3 = (const lean_object*)&lp_SoftwareLogic__Go_List_repr___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__0___redArg___closed__3_value;
static lean_once_cell_t lp_SoftwareLogic__Go_List_repr___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__0___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_SoftwareLogic__Go_List_repr___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__0___redArg___closed__4;
static lean_once_cell_t lp_SoftwareLogic__Go_List_repr___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__0___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_SoftwareLogic__Go_List_repr___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__0___redArg___closed__5;
static const lean_ctor_object lp_SoftwareLogic__Go_List_repr___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__0___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_List_repr___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__0___redArg___closed__2_value)}};
static const lean_object* lp_SoftwareLogic__Go_List_repr___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__0___redArg___closed__6 = (const lean_object*)&lp_SoftwareLogic__Go_List_repr___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__0___redArg___closed__6_value;
static const lean_ctor_object lp_SoftwareLogic__Go_List_repr___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__0___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_List_repr___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__0___redArg___closed__3_value)}};
static const lean_object* lp_SoftwareLogic__Go_List_repr___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__0___redArg___closed__7 = (const lean_object*)&lp_SoftwareLogic__Go_List_repr___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__0___redArg___closed__7_value;
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_repr___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__1_spec__4_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__1_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Std_Format_joinSep___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_repr___at___00Go_instReprGameState_repr_spec__0___redArg(lean_object*);
static const lean_string_object lp_SoftwareLogic__Go_Go_instReprGameState_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* lp_SoftwareLogic__Go_Go_instReprGameState_repr___redArg___closed__0 = (const lean_object*)&lp_SoftwareLogic__Go_Go_instReprGameState_repr___redArg___closed__0_value;
static const lean_string_object lp_SoftwareLogic__Go_Go_instReprGameState_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "size"};
static const lean_object* lp_SoftwareLogic__Go_Go_instReprGameState_repr___redArg___closed__1 = (const lean_object*)&lp_SoftwareLogic__Go_Go_instReprGameState_repr___redArg___closed__1_value;
static const lean_ctor_object lp_SoftwareLogic__Go_Go_instReprGameState_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_Go_instReprGameState_repr___redArg___closed__1_value)}};
static const lean_object* lp_SoftwareLogic__Go_Go_instReprGameState_repr___redArg___closed__2 = (const lean_object*)&lp_SoftwareLogic__Go_Go_instReprGameState_repr___redArg___closed__2_value;
static const lean_ctor_object lp_SoftwareLogic__Go_Go_instReprGameState_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_SoftwareLogic__Go_Go_instReprGameState_repr___redArg___closed__2_value)}};
static const lean_object* lp_SoftwareLogic__Go_Go_instReprGameState_repr___redArg___closed__3 = (const lean_object*)&lp_SoftwareLogic__Go_Go_instReprGameState_repr___redArg___closed__3_value;
static const lean_string_object lp_SoftwareLogic__Go_Go_instReprGameState_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* lp_SoftwareLogic__Go_Go_instReprGameState_repr___redArg___closed__4 = (const lean_object*)&lp_SoftwareLogic__Go_Go_instReprGameState_repr___redArg___closed__4_value;
static const lean_ctor_object lp_SoftwareLogic__Go_Go_instReprGameState_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_Go_instReprGameState_repr___redArg___closed__4_value)}};
static const lean_object* lp_SoftwareLogic__Go_Go_instReprGameState_repr___redArg___closed__5 = (const lean_object*)&lp_SoftwareLogic__Go_Go_instReprGameState_repr___redArg___closed__5_value;
static const lean_ctor_object lp_SoftwareLogic__Go_Go_instReprGameState_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_Go_instReprGameState_repr___redArg___closed__3_value),((lean_object*)&lp_SoftwareLogic__Go_Go_instReprGameState_repr___redArg___closed__5_value)}};
static const lean_object* lp_SoftwareLogic__Go_Go_instReprGameState_repr___redArg___closed__6 = (const lean_object*)&lp_SoftwareLogic__Go_Go_instReprGameState_repr___redArg___closed__6_value;
static lean_once_cell_t lp_SoftwareLogic__Go_Go_instReprGameState_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_SoftwareLogic__Go_Go_instReprGameState_repr___redArg___closed__7;
static const lean_string_object lp_SoftwareLogic__Go_Go_instReprGameState_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "board"};
static const lean_object* lp_SoftwareLogic__Go_Go_instReprGameState_repr___redArg___closed__8 = (const lean_object*)&lp_SoftwareLogic__Go_Go_instReprGameState_repr___redArg___closed__8_value;
static const lean_ctor_object lp_SoftwareLogic__Go_Go_instReprGameState_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_Go_instReprGameState_repr___redArg___closed__8_value)}};
static const lean_object* lp_SoftwareLogic__Go_Go_instReprGameState_repr___redArg___closed__9 = (const lean_object*)&lp_SoftwareLogic__Go_Go_instReprGameState_repr___redArg___closed__9_value;
static lean_once_cell_t lp_SoftwareLogic__Go_Go_instReprGameState_repr___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_SoftwareLogic__Go_Go_instReprGameState_repr___redArg___closed__10;
static const lean_string_object lp_SoftwareLogic__Go_Go_instReprGameState_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "turn"};
static const lean_object* lp_SoftwareLogic__Go_Go_instReprGameState_repr___redArg___closed__11 = (const lean_object*)&lp_SoftwareLogic__Go_Go_instReprGameState_repr___redArg___closed__11_value;
static const lean_ctor_object lp_SoftwareLogic__Go_Go_instReprGameState_repr___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_Go_instReprGameState_repr___redArg___closed__11_value)}};
static const lean_object* lp_SoftwareLogic__Go_Go_instReprGameState_repr___redArg___closed__12 = (const lean_object*)&lp_SoftwareLogic__Go_Go_instReprGameState_repr___redArg___closed__12_value;
static const lean_string_object lp_SoftwareLogic__Go_Go_instReprGameState_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* lp_SoftwareLogic__Go_Go_instReprGameState_repr___redArg___closed__13 = (const lean_object*)&lp_SoftwareLogic__Go_Go_instReprGameState_repr___redArg___closed__13_value;
static lean_once_cell_t lp_SoftwareLogic__Go_Go_instReprGameState_repr___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_SoftwareLogic__Go_Go_instReprGameState_repr___redArg___closed__14;
static lean_once_cell_t lp_SoftwareLogic__Go_Go_instReprGameState_repr___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_SoftwareLogic__Go_Go_instReprGameState_repr___redArg___closed__15;
static const lean_ctor_object lp_SoftwareLogic__Go_Go_instReprGameState_repr___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_Go_instReprGameState_repr___redArg___closed__0_value)}};
static const lean_object* lp_SoftwareLogic__Go_Go_instReprGameState_repr___redArg___closed__16 = (const lean_object*)&lp_SoftwareLogic__Go_Go_instReprGameState_repr___redArg___closed__16_value;
static const lean_ctor_object lp_SoftwareLogic__Go_Go_instReprGameState_repr___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_Go_instReprGameState_repr___redArg___closed__13_value)}};
static const lean_object* lp_SoftwareLogic__Go_Go_instReprGameState_repr___redArg___closed__17 = (const lean_object*)&lp_SoftwareLogic__Go_Go_instReprGameState_repr___redArg___closed__17_value;
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_instReprGameState_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_instReprGameState_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_instReprGameState_repr___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_repr___at___00Go_instReprGameState_repr_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_repr___at___00Go_instReprGameState_repr_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_repr___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_repr___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__0___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_SoftwareLogic__Go_Go_instReprGameState___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_SoftwareLogic__Go_Go_instReprGameState_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_SoftwareLogic__Go_Go_instReprGameState___closed__0 = (const lean_object*)&lp_SoftwareLogic__Go_Go_instReprGameState___closed__0_value;
LEAN_EXPORT const lean_object* lp_SoftwareLogic__Go_Go_instReprGameState = (const lean_object*)&lp_SoftwareLogic__Go_Go_instReprGameState___closed__0_value;
LEAN_EXPORT uint8_t lp_SoftwareLogic__Go_Go_instDecidableEqGameState_decEq___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_instDecidableEqGameState_decEq___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_SoftwareLogic__Go_Go_instDecidableEqGameState_decEq___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_instDecidableEqGameState_decEq___lam__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object lp_SoftwareLogic__Go_Go_instDecidableEqGameState_decEq___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_SoftwareLogic__Go_Go_instDecidableEqGameState_decEq___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_SoftwareLogic__Go_Go_instDecidableEqGameState_decEq___closed__0 = (const lean_object*)&lp_SoftwareLogic__Go_Go_instDecidableEqGameState_decEq___closed__0_value;
static const lean_closure_object lp_SoftwareLogic__Go_Go_instDecidableEqGameState_decEq___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_SoftwareLogic__Go_Go_instDecidableEqGameState_decEq___lam__1___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_Go_instDecidableEqGameState_decEq___closed__0_value)} };
static const lean_object* lp_SoftwareLogic__Go_Go_instDecidableEqGameState_decEq___closed__1 = (const lean_object*)&lp_SoftwareLogic__Go_Go_instDecidableEqGameState_decEq___closed__1_value;
LEAN_EXPORT uint8_t lp_SoftwareLogic__Go_Go_instDecidableEqGameState_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_instDecidableEqGameState_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_SoftwareLogic__Go_Go_instDecidableEqGameState(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_instDecidableEqGameState___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_emptyRow(lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_emptyBoard(lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_initialState(lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_Stone_ctorIdx(uint8_t v_x_1_){
_start:
{
if (v_x_1_ == 0)
{
lean_object* v___x_2_; 
v___x_2_ = lean_unsigned_to_nat(0u);
return v___x_2_;
}
else
{
lean_object* v___x_3_; 
v___x_3_ = lean_unsigned_to_nat(1u);
return v___x_3_;
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_Stone_ctorIdx___boxed(lean_object* v_x_4_){
_start:
{
uint8_t v_x_boxed_5_; lean_object* v_res_6_; 
v_x_boxed_5_ = lean_unbox(v_x_4_);
v_res_6_ = lp_SoftwareLogic__Go_Go_Stone_ctorIdx(v_x_boxed_5_);
return v_res_6_;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_Stone_toCtorIdx(uint8_t v_x_7_){
_start:
{
lean_object* v___x_8_; 
v___x_8_ = lp_SoftwareLogic__Go_Go_Stone_ctorIdx(v_x_7_);
return v___x_8_;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_Stone_toCtorIdx___boxed(lean_object* v_x_9_){
_start:
{
uint8_t v_x_4__boxed_10_; lean_object* v_res_11_; 
v_x_4__boxed_10_ = lean_unbox(v_x_9_);
v_res_11_ = lp_SoftwareLogic__Go_Go_Stone_toCtorIdx(v_x_4__boxed_10_);
return v_res_11_;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_Stone_ctorElim___redArg(lean_object* v_k_12_){
_start:
{
lean_inc(v_k_12_);
return v_k_12_;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_Stone_ctorElim___redArg___boxed(lean_object* v_k_13_){
_start:
{
lean_object* v_res_14_; 
v_res_14_ = lp_SoftwareLogic__Go_Go_Stone_ctorElim___redArg(v_k_13_);
lean_dec(v_k_13_);
return v_res_14_;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_Stone_ctorElim(lean_object* v_motive_15_, lean_object* v_ctorIdx_16_, uint8_t v_t_17_, lean_object* v_h_18_, lean_object* v_k_19_){
_start:
{
lean_inc(v_k_19_);
return v_k_19_;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_Stone_ctorElim___boxed(lean_object* v_motive_20_, lean_object* v_ctorIdx_21_, lean_object* v_t_22_, lean_object* v_h_23_, lean_object* v_k_24_){
_start:
{
uint8_t v_t_boxed_25_; lean_object* v_res_26_; 
v_t_boxed_25_ = lean_unbox(v_t_22_);
v_res_26_ = lp_SoftwareLogic__Go_Go_Stone_ctorElim(v_motive_20_, v_ctorIdx_21_, v_t_boxed_25_, v_h_23_, v_k_24_);
lean_dec(v_k_24_);
lean_dec(v_ctorIdx_21_);
return v_res_26_;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_Stone_black_elim___redArg(lean_object* v_black_27_){
_start:
{
lean_inc(v_black_27_);
return v_black_27_;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_Stone_black_elim___redArg___boxed(lean_object* v_black_28_){
_start:
{
lean_object* v_res_29_; 
v_res_29_ = lp_SoftwareLogic__Go_Go_Stone_black_elim___redArg(v_black_28_);
lean_dec(v_black_28_);
return v_res_29_;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_Stone_black_elim(lean_object* v_motive_30_, uint8_t v_t_31_, lean_object* v_h_32_, lean_object* v_black_33_){
_start:
{
lean_inc(v_black_33_);
return v_black_33_;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_Stone_black_elim___boxed(lean_object* v_motive_34_, lean_object* v_t_35_, lean_object* v_h_36_, lean_object* v_black_37_){
_start:
{
uint8_t v_t_boxed_38_; lean_object* v_res_39_; 
v_t_boxed_38_ = lean_unbox(v_t_35_);
v_res_39_ = lp_SoftwareLogic__Go_Go_Stone_black_elim(v_motive_34_, v_t_boxed_38_, v_h_36_, v_black_37_);
lean_dec(v_black_37_);
return v_res_39_;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_Stone_white_elim___redArg(lean_object* v_white_40_){
_start:
{
lean_inc(v_white_40_);
return v_white_40_;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_Stone_white_elim___redArg___boxed(lean_object* v_white_41_){
_start:
{
lean_object* v_res_42_; 
v_res_42_ = lp_SoftwareLogic__Go_Go_Stone_white_elim___redArg(v_white_41_);
lean_dec(v_white_41_);
return v_res_42_;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_Stone_white_elim(lean_object* v_motive_43_, uint8_t v_t_44_, lean_object* v_h_45_, lean_object* v_white_46_){
_start:
{
lean_inc(v_white_46_);
return v_white_46_;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_Stone_white_elim___boxed(lean_object* v_motive_47_, lean_object* v_t_48_, lean_object* v_h_49_, lean_object* v_white_50_){
_start:
{
uint8_t v_t_boxed_51_; lean_object* v_res_52_; 
v_t_boxed_51_ = lean_unbox(v_t_48_);
v_res_52_ = lp_SoftwareLogic__Go_Go_Stone_white_elim(v_motive_47_, v_t_boxed_51_, v_h_49_, v_white_50_);
lean_dec(v_white_50_);
return v_res_52_;
}
}
static lean_object* _init_lp_SoftwareLogic__Go_Go_instReprStone_repr___closed__4(void){
_start:
{
lean_object* v___x_59_; lean_object* v___x_60_; 
v___x_59_ = lean_unsigned_to_nat(2u);
v___x_60_ = lean_nat_to_int(v___x_59_);
return v___x_60_;
}
}
static lean_object* _init_lp_SoftwareLogic__Go_Go_instReprStone_repr___closed__5(void){
_start:
{
lean_object* v___x_61_; lean_object* v___x_62_; 
v___x_61_ = lean_unsigned_to_nat(1u);
v___x_62_ = lean_nat_to_int(v___x_61_);
return v___x_62_;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_instReprStone_repr(uint8_t v_x_63_, lean_object* v_prec_64_){
_start:
{
lean_object* v___y_66_; lean_object* v___y_73_; 
if (v_x_63_ == 0)
{
lean_object* v___x_79_; uint8_t v___x_80_; 
v___x_79_ = lean_unsigned_to_nat(1024u);
v___x_80_ = lean_nat_dec_le(v___x_79_, v_prec_64_);
if (v___x_80_ == 0)
{
lean_object* v___x_81_; 
v___x_81_ = lean_obj_once(&lp_SoftwareLogic__Go_Go_instReprStone_repr___closed__4, &lp_SoftwareLogic__Go_Go_instReprStone_repr___closed__4_once, _init_lp_SoftwareLogic__Go_Go_instReprStone_repr___closed__4);
v___y_66_ = v___x_81_;
goto v___jp_65_;
}
else
{
lean_object* v___x_82_; 
v___x_82_ = lean_obj_once(&lp_SoftwareLogic__Go_Go_instReprStone_repr___closed__5, &lp_SoftwareLogic__Go_Go_instReprStone_repr___closed__5_once, _init_lp_SoftwareLogic__Go_Go_instReprStone_repr___closed__5);
v___y_66_ = v___x_82_;
goto v___jp_65_;
}
}
else
{
lean_object* v___x_83_; uint8_t v___x_84_; 
v___x_83_ = lean_unsigned_to_nat(1024u);
v___x_84_ = lean_nat_dec_le(v___x_83_, v_prec_64_);
if (v___x_84_ == 0)
{
lean_object* v___x_85_; 
v___x_85_ = lean_obj_once(&lp_SoftwareLogic__Go_Go_instReprStone_repr___closed__4, &lp_SoftwareLogic__Go_Go_instReprStone_repr___closed__4_once, _init_lp_SoftwareLogic__Go_Go_instReprStone_repr___closed__4);
v___y_73_ = v___x_85_;
goto v___jp_72_;
}
else
{
lean_object* v___x_86_; 
v___x_86_ = lean_obj_once(&lp_SoftwareLogic__Go_Go_instReprStone_repr___closed__5, &lp_SoftwareLogic__Go_Go_instReprStone_repr___closed__5_once, _init_lp_SoftwareLogic__Go_Go_instReprStone_repr___closed__5);
v___y_73_ = v___x_86_;
goto v___jp_72_;
}
}
v___jp_65_:
{
lean_object* v___x_67_; lean_object* v___x_68_; uint8_t v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; 
v___x_67_ = ((lean_object*)(lp_SoftwareLogic__Go_Go_instReprStone_repr___closed__1));
lean_inc(v___y_66_);
v___x_68_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_68_, 0, v___y_66_);
lean_ctor_set(v___x_68_, 1, v___x_67_);
v___x_69_ = 0;
v___x_70_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_70_, 0, v___x_68_);
lean_ctor_set_uint8(v___x_70_, sizeof(void*)*1, v___x_69_);
v___x_71_ = l_Repr_addAppParen(v___x_70_, v_prec_64_);
return v___x_71_;
}
v___jp_72_:
{
lean_object* v___x_74_; lean_object* v___x_75_; uint8_t v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; 
v___x_74_ = ((lean_object*)(lp_SoftwareLogic__Go_Go_instReprStone_repr___closed__3));
lean_inc(v___y_73_);
v___x_75_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_75_, 0, v___y_73_);
lean_ctor_set(v___x_75_, 1, v___x_74_);
v___x_76_ = 0;
v___x_77_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_77_, 0, v___x_75_);
lean_ctor_set_uint8(v___x_77_, sizeof(void*)*1, v___x_76_);
v___x_78_ = l_Repr_addAppParen(v___x_77_, v_prec_64_);
return v___x_78_;
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_instReprStone_repr___boxed(lean_object* v_x_87_, lean_object* v_prec_88_){
_start:
{
uint8_t v_x_121__boxed_89_; lean_object* v_res_90_; 
v_x_121__boxed_89_ = lean_unbox(v_x_87_);
v_res_90_ = lp_SoftwareLogic__Go_Go_instReprStone_repr(v_x_121__boxed_89_, v_prec_88_);
lean_dec(v_prec_88_);
return v_res_90_;
}
}
LEAN_EXPORT uint8_t lp_SoftwareLogic__Go_Go_Stone_ofNat(lean_object* v_n_93_){
_start:
{
lean_object* v___x_94_; uint8_t v___x_95_; 
v___x_94_ = lean_unsigned_to_nat(0u);
v___x_95_ = lean_nat_dec_le(v_n_93_, v___x_94_);
if (v___x_95_ == 0)
{
uint8_t v___x_96_; 
v___x_96_ = 1;
return v___x_96_;
}
else
{
uint8_t v___x_97_; 
v___x_97_ = 0;
return v___x_97_;
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_Stone_ofNat___boxed(lean_object* v_n_98_){
_start:
{
uint8_t v_res_99_; lean_object* v_r_100_; 
v_res_99_ = lp_SoftwareLogic__Go_Go_Stone_ofNat(v_n_98_);
lean_dec(v_n_98_);
v_r_100_ = lean_box(v_res_99_);
return v_r_100_;
}
}
LEAN_EXPORT uint8_t lp_SoftwareLogic__Go_Go_instDecidableEqStone(uint8_t v_x_101_, uint8_t v_y_102_){
_start:
{
lean_object* v___x_103_; lean_object* v___x_104_; uint8_t v___x_105_; 
v___x_103_ = lp_SoftwareLogic__Go_Go_Stone_ctorIdx(v_x_101_);
v___x_104_ = lp_SoftwareLogic__Go_Go_Stone_ctorIdx(v_y_102_);
v___x_105_ = lean_nat_dec_eq(v___x_103_, v___x_104_);
lean_dec(v___x_104_);
lean_dec(v___x_103_);
return v___x_105_;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_instDecidableEqStone___boxed(lean_object* v_x_106_, lean_object* v_y_107_){
_start:
{
uint8_t v_x_13__boxed_108_; uint8_t v_y_14__boxed_109_; uint8_t v_res_110_; lean_object* v_r_111_; 
v_x_13__boxed_108_ = lean_unbox(v_x_106_);
v_y_14__boxed_109_ = lean_unbox(v_y_107_);
v_res_110_ = lp_SoftwareLogic__Go_Go_instDecidableEqStone(v_x_13__boxed_108_, v_y_14__boxed_109_);
v_r_111_ = lean_box(v_res_110_);
return v_r_111_;
}
}
LEAN_EXPORT uint8_t lp_SoftwareLogic__Go_Go_instBEqStone_beq(uint8_t v_x_112_, uint8_t v_y_113_){
_start:
{
lean_object* v___x_114_; lean_object* v___x_115_; uint8_t v___x_116_; 
v___x_114_ = lp_SoftwareLogic__Go_Go_Stone_ctorIdx(v_x_112_);
v___x_115_ = lp_SoftwareLogic__Go_Go_Stone_ctorIdx(v_y_113_);
v___x_116_ = lean_nat_dec_eq(v___x_114_, v___x_115_);
lean_dec(v___x_115_);
lean_dec(v___x_114_);
return v___x_116_;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_instBEqStone_beq___boxed(lean_object* v_x_117_, lean_object* v_y_118_){
_start:
{
uint8_t v_x_17__boxed_119_; uint8_t v_y_18__boxed_120_; uint8_t v_res_121_; lean_object* v_r_122_; 
v_x_17__boxed_119_ = lean_unbox(v_x_117_);
v_y_18__boxed_120_ = lean_unbox(v_y_118_);
v_res_121_ = lp_SoftwareLogic__Go_Go_instBEqStone_beq(v_x_17__boxed_119_, v_y_18__boxed_120_);
v_r_122_ = lean_box(v_res_121_);
return v_r_122_;
}
}
LEAN_EXPORT uint8_t lp_SoftwareLogic__Go_Go_Stone_other(uint8_t v_x_125_){
_start:
{
if (v_x_125_ == 0)
{
uint8_t v___x_126_; 
v___x_126_ = 1;
return v___x_126_;
}
else
{
uint8_t v___x_127_; 
v___x_127_ = 0;
return v___x_127_;
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_Stone_other___boxed(lean_object* v_x_128_){
_start:
{
uint8_t v_x_18__boxed_129_; uint8_t v_res_130_; lean_object* v_r_131_; 
v_x_18__boxed_129_ = lean_unbox(v_x_128_);
v_res_130_ = lp_SoftwareLogic__Go_Go_Stone_other(v_x_18__boxed_129_);
v_r_131_ = lean_box(v_res_130_);
return v_r_131_;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_Move_ctorIdx(lean_object* v_x_132_){
_start:
{
if (lean_obj_tag(v_x_132_) == 0)
{
lean_object* v___x_133_; 
v___x_133_ = lean_unsigned_to_nat(0u);
return v___x_133_;
}
else
{
lean_object* v___x_134_; 
v___x_134_ = lean_unsigned_to_nat(1u);
return v___x_134_;
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_Move_ctorIdx___boxed(lean_object* v_x_135_){
_start:
{
lean_object* v_res_136_; 
v_res_136_ = lp_SoftwareLogic__Go_Go_Move_ctorIdx(v_x_135_);
lean_dec(v_x_135_);
return v_res_136_;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_Move_ctorElim___redArg(lean_object* v_t_137_, lean_object* v_k_138_){
_start:
{
if (lean_obj_tag(v_t_137_) == 0)
{
lean_object* v_p_139_; lean_object* v___x_140_; 
v_p_139_ = lean_ctor_get(v_t_137_, 0);
lean_inc_ref(v_p_139_);
lean_dec_ref(v_t_137_);
v___x_140_ = lean_apply_1(v_k_138_, v_p_139_);
return v___x_140_;
}
else
{
return v_k_138_;
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_Move_ctorElim(lean_object* v_motive_141_, lean_object* v_ctorIdx_142_, lean_object* v_t_143_, lean_object* v_h_144_, lean_object* v_k_145_){
_start:
{
lean_object* v___x_146_; 
v___x_146_ = lp_SoftwareLogic__Go_Go_Move_ctorElim___redArg(v_t_143_, v_k_145_);
return v___x_146_;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_Move_ctorElim___boxed(lean_object* v_motive_147_, lean_object* v_ctorIdx_148_, lean_object* v_t_149_, lean_object* v_h_150_, lean_object* v_k_151_){
_start:
{
lean_object* v_res_152_; 
v_res_152_ = lp_SoftwareLogic__Go_Go_Move_ctorElim(v_motive_147_, v_ctorIdx_148_, v_t_149_, v_h_150_, v_k_151_);
lean_dec(v_ctorIdx_148_);
return v_res_152_;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_Move_place_elim___redArg(lean_object* v_t_153_, lean_object* v_place_154_){
_start:
{
lean_object* v___x_155_; 
v___x_155_ = lp_SoftwareLogic__Go_Go_Move_ctorElim___redArg(v_t_153_, v_place_154_);
return v___x_155_;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_Move_place_elim(lean_object* v_motive_156_, lean_object* v_t_157_, lean_object* v_h_158_, lean_object* v_place_159_){
_start:
{
lean_object* v___x_160_; 
v___x_160_ = lp_SoftwareLogic__Go_Go_Move_ctorElim___redArg(v_t_157_, v_place_159_);
return v___x_160_;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_Move_pass_elim___redArg(lean_object* v_t_161_, lean_object* v_pass_162_){
_start:
{
lean_object* v___x_163_; 
v___x_163_ = lp_SoftwareLogic__Go_Go_Move_ctorElim___redArg(v_t_161_, v_pass_162_);
return v___x_163_;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_Move_pass_elim(lean_object* v_motive_164_, lean_object* v_t_165_, lean_object* v_h_166_, lean_object* v_pass_167_){
_start:
{
lean_object* v___x_168_; 
v___x_168_ = lp_SoftwareLogic__Go_Go_Move_ctorElim___redArg(v_t_165_, v_pass_167_);
return v___x_168_;
}
}
static lean_object* _init_lp_SoftwareLogic__Go_Prod_repr___at___00Go_instReprMove_repr_spec__0___redArg___closed__5(void){
_start:
{
lean_object* v___x_177_; lean_object* v___x_178_; 
v___x_177_ = ((lean_object*)(lp_SoftwareLogic__Go_Prod_repr___at___00Go_instReprMove_repr_spec__0___redArg___closed__0));
v___x_178_ = lean_string_length(v___x_177_);
return v___x_178_;
}
}
static lean_object* _init_lp_SoftwareLogic__Go_Prod_repr___at___00Go_instReprMove_repr_spec__0___redArg___closed__6(void){
_start:
{
lean_object* v___x_179_; lean_object* v___x_180_; 
v___x_179_ = lean_obj_once(&lp_SoftwareLogic__Go_Prod_repr___at___00Go_instReprMove_repr_spec__0___redArg___closed__5, &lp_SoftwareLogic__Go_Prod_repr___at___00Go_instReprMove_repr_spec__0___redArg___closed__5_once, _init_lp_SoftwareLogic__Go_Prod_repr___at___00Go_instReprMove_repr_spec__0___redArg___closed__5);
v___x_180_ = lean_nat_to_int(v___x_179_);
return v___x_180_;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Prod_repr___at___00Go_instReprMove_repr_spec__0___redArg(lean_object* v_x_185_){
_start:
{
lean_object* v_fst_186_; lean_object* v_snd_187_; lean_object* v___x_189_; uint8_t v_isShared_190_; uint8_t v_isSharedCheck_211_; 
v_fst_186_ = lean_ctor_get(v_x_185_, 0);
v_snd_187_ = lean_ctor_get(v_x_185_, 1);
v_isSharedCheck_211_ = !lean_is_exclusive(v_x_185_);
if (v_isSharedCheck_211_ == 0)
{
v___x_189_ = v_x_185_;
v_isShared_190_ = v_isSharedCheck_211_;
goto v_resetjp_188_;
}
else
{
lean_inc(v_snd_187_);
lean_inc(v_fst_186_);
lean_dec(v_x_185_);
v___x_189_ = lean_box(0);
v_isShared_190_ = v_isSharedCheck_211_;
goto v_resetjp_188_;
}
v_resetjp_188_:
{
lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_195_; 
v___x_191_ = l_Nat_reprFast(v_fst_186_);
v___x_192_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_192_, 0, v___x_191_);
v___x_193_ = lean_box(0);
if (v_isShared_190_ == 0)
{
lean_ctor_set_tag(v___x_189_, 1);
lean_ctor_set(v___x_189_, 1, v___x_193_);
lean_ctor_set(v___x_189_, 0, v___x_192_);
v___x_195_ = v___x_189_;
goto v_reusejp_194_;
}
else
{
lean_object* v_reuseFailAlloc_210_; 
v_reuseFailAlloc_210_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_210_, 0, v___x_192_);
lean_ctor_set(v_reuseFailAlloc_210_, 1, v___x_193_);
v___x_195_ = v_reuseFailAlloc_210_;
goto v_reusejp_194_;
}
v_reusejp_194_:
{
lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; uint8_t v___x_208_; lean_object* v___x_209_; 
v___x_196_ = l_Nat_reprFast(v_snd_187_);
v___x_197_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_197_, 0, v___x_196_);
v___x_198_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_198_, 0, v___x_197_);
lean_ctor_set(v___x_198_, 1, v___x_195_);
v___x_199_ = l_List_reverse___redArg(v___x_198_);
v___x_200_ = ((lean_object*)(lp_SoftwareLogic__Go_Prod_repr___at___00Go_instReprMove_repr_spec__0___redArg___closed__3));
v___x_201_ = l_Std_Format_joinSep___at___00Lean_Syntax_formatStxAux_spec__2(v___x_199_, v___x_200_);
v___x_202_ = lean_obj_once(&lp_SoftwareLogic__Go_Prod_repr___at___00Go_instReprMove_repr_spec__0___redArg___closed__6, &lp_SoftwareLogic__Go_Prod_repr___at___00Go_instReprMove_repr_spec__0___redArg___closed__6_once, _init_lp_SoftwareLogic__Go_Prod_repr___at___00Go_instReprMove_repr_spec__0___redArg___closed__6);
v___x_203_ = ((lean_object*)(lp_SoftwareLogic__Go_Prod_repr___at___00Go_instReprMove_repr_spec__0___redArg___closed__7));
v___x_204_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_204_, 0, v___x_203_);
lean_ctor_set(v___x_204_, 1, v___x_201_);
v___x_205_ = ((lean_object*)(lp_SoftwareLogic__Go_Prod_repr___at___00Go_instReprMove_repr_spec__0___redArg___closed__8));
v___x_206_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_206_, 0, v___x_204_);
lean_ctor_set(v___x_206_, 1, v___x_205_);
v___x_207_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_207_, 0, v___x_202_);
lean_ctor_set(v___x_207_, 1, v___x_206_);
v___x_208_ = 0;
v___x_209_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_209_, 0, v___x_207_);
lean_ctor_set_uint8(v___x_209_, sizeof(void*)*1, v___x_208_);
return v___x_209_;
}
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_instReprMove_repr(lean_object* v_x_221_, lean_object* v_prec_222_){
_start:
{
lean_object* v___y_224_; 
if (lean_obj_tag(v_x_221_) == 0)
{
lean_object* v_p_230_; lean_object* v___y_232_; lean_object* v___x_240_; uint8_t v___x_241_; 
v_p_230_ = lean_ctor_get(v_x_221_, 0);
lean_inc_ref(v_p_230_);
lean_dec_ref(v_x_221_);
v___x_240_ = lean_unsigned_to_nat(1024u);
v___x_241_ = lean_nat_dec_le(v___x_240_, v_prec_222_);
if (v___x_241_ == 0)
{
lean_object* v___x_242_; 
v___x_242_ = lean_obj_once(&lp_SoftwareLogic__Go_Go_instReprStone_repr___closed__4, &lp_SoftwareLogic__Go_Go_instReprStone_repr___closed__4_once, _init_lp_SoftwareLogic__Go_Go_instReprStone_repr___closed__4);
v___y_232_ = v___x_242_;
goto v___jp_231_;
}
else
{
lean_object* v___x_243_; 
v___x_243_ = lean_obj_once(&lp_SoftwareLogic__Go_Go_instReprStone_repr___closed__5, &lp_SoftwareLogic__Go_Go_instReprStone_repr___closed__5_once, _init_lp_SoftwareLogic__Go_Go_instReprStone_repr___closed__5);
v___y_232_ = v___x_243_;
goto v___jp_231_;
}
v___jp_231_:
{
lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; uint8_t v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; 
v___x_233_ = ((lean_object*)(lp_SoftwareLogic__Go_Go_instReprMove_repr___closed__4));
v___x_234_ = lp_SoftwareLogic__Go_Prod_repr___at___00Go_instReprMove_repr_spec__0___redArg(v_p_230_);
v___x_235_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_235_, 0, v___x_233_);
lean_ctor_set(v___x_235_, 1, v___x_234_);
lean_inc(v___y_232_);
v___x_236_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_236_, 0, v___y_232_);
lean_ctor_set(v___x_236_, 1, v___x_235_);
v___x_237_ = 0;
v___x_238_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_238_, 0, v___x_236_);
lean_ctor_set_uint8(v___x_238_, sizeof(void*)*1, v___x_237_);
v___x_239_ = l_Repr_addAppParen(v___x_238_, v_prec_222_);
return v___x_239_;
}
}
else
{
lean_object* v___x_244_; uint8_t v___x_245_; 
v___x_244_ = lean_unsigned_to_nat(1024u);
v___x_245_ = lean_nat_dec_le(v___x_244_, v_prec_222_);
if (v___x_245_ == 0)
{
lean_object* v___x_246_; 
v___x_246_ = lean_obj_once(&lp_SoftwareLogic__Go_Go_instReprStone_repr___closed__4, &lp_SoftwareLogic__Go_Go_instReprStone_repr___closed__4_once, _init_lp_SoftwareLogic__Go_Go_instReprStone_repr___closed__4);
v___y_224_ = v___x_246_;
goto v___jp_223_;
}
else
{
lean_object* v___x_247_; 
v___x_247_ = lean_obj_once(&lp_SoftwareLogic__Go_Go_instReprStone_repr___closed__5, &lp_SoftwareLogic__Go_Go_instReprStone_repr___closed__5_once, _init_lp_SoftwareLogic__Go_Go_instReprStone_repr___closed__5);
v___y_224_ = v___x_247_;
goto v___jp_223_;
}
}
v___jp_223_:
{
lean_object* v___x_225_; lean_object* v___x_226_; uint8_t v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; 
v___x_225_ = ((lean_object*)(lp_SoftwareLogic__Go_Go_instReprMove_repr___closed__1));
lean_inc(v___y_224_);
v___x_226_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_226_, 0, v___y_224_);
lean_ctor_set(v___x_226_, 1, v___x_225_);
v___x_227_ = 0;
v___x_228_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_228_, 0, v___x_226_);
lean_ctor_set_uint8(v___x_228_, sizeof(void*)*1, v___x_227_);
v___x_229_ = l_Repr_addAppParen(v___x_228_, v_prec_222_);
return v___x_229_;
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_instReprMove_repr___boxed(lean_object* v_x_248_, lean_object* v_prec_249_){
_start:
{
lean_object* v_res_250_; 
v_res_250_ = lp_SoftwareLogic__Go_Go_instReprMove_repr(v_x_248_, v_prec_249_);
lean_dec(v_prec_249_);
return v_res_250_;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Prod_repr___at___00Go_instReprMove_repr_spec__0(lean_object* v_x_251_, lean_object* v_x_252_){
_start:
{
lean_object* v___x_253_; 
v___x_253_ = lp_SoftwareLogic__Go_Prod_repr___at___00Go_instReprMove_repr_spec__0___redArg(v_x_251_);
return v___x_253_;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Prod_repr___at___00Go_instReprMove_repr_spec__0___boxed(lean_object* v_x_254_, lean_object* v_x_255_){
_start:
{
lean_object* v_res_256_; 
v_res_256_ = lp_SoftwareLogic__Go_Prod_repr___at___00Go_instReprMove_repr_spec__0(v_x_254_, v_x_255_);
lean_dec(v_x_255_);
return v_res_256_;
}
}
LEAN_EXPORT uint8_t lp_SoftwareLogic__Go_Go_instDecidableEqMove_decEq(lean_object* v_x_259_, lean_object* v_x_260_){
_start:
{
if (lean_obj_tag(v_x_259_) == 0)
{
lean_object* v_p_261_; uint8_t v___x_262_; 
v_p_261_ = lean_ctor_get(v_x_259_, 0);
lean_inc_ref(v_p_261_);
lean_dec_ref(v_x_259_);
v___x_262_ = 0;
if (lean_obj_tag(v_x_260_) == 0)
{
lean_object* v_p_263_; lean_object* v___x_264_; uint8_t v___x_265_; 
v_p_263_ = lean_ctor_get(v_x_260_, 0);
lean_inc_ref(v_p_263_);
lean_dec_ref(v_x_260_);
v___x_264_ = lean_alloc_closure((void*)(l_instDecidableEqNat___boxed), 2, 0);
lean_inc_ref(v___x_264_);
v___x_265_ = l_instDecidableEqProd___redArg(v___x_264_, v___x_264_, v_p_261_, v_p_263_);
if (v___x_265_ == 0)
{
return v___x_262_;
}
else
{
return v___x_265_;
}
}
else
{
lean_dec_ref(v_p_261_);
return v___x_262_;
}
}
else
{
if (lean_obj_tag(v_x_260_) == 0)
{
uint8_t v___x_266_; 
lean_dec_ref(v_x_260_);
v___x_266_ = 0;
return v___x_266_;
}
else
{
uint8_t v___x_267_; 
v___x_267_ = 1;
return v___x_267_;
}
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_instDecidableEqMove_decEq___boxed(lean_object* v_x_268_, lean_object* v_x_269_){
_start:
{
uint8_t v_res_270_; lean_object* v_r_271_; 
v_res_270_ = lp_SoftwareLogic__Go_Go_instDecidableEqMove_decEq(v_x_268_, v_x_269_);
v_r_271_ = lean_box(v_res_270_);
return v_r_271_;
}
}
LEAN_EXPORT uint8_t lp_SoftwareLogic__Go_Go_instDecidableEqMove(lean_object* v_x_272_, lean_object* v_x_273_){
_start:
{
uint8_t v___x_274_; 
v___x_274_ = lp_SoftwareLogic__Go_Go_instDecidableEqMove_decEq(v_x_272_, v_x_273_);
return v___x_274_;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_instDecidableEqMove___boxed(lean_object* v_x_275_, lean_object* v_x_276_){
_start:
{
uint8_t v_res_277_; lean_object* v_r_278_; 
v_res_277_ = lp_SoftwareLogic__Go_Go_instDecidableEqMove(v_x_275_, v_x_276_);
v_r_278_ = lean_box(v_res_277_);
return v_r_278_;
}
}
LEAN_EXPORT uint8_t lp_SoftwareLogic__Go_Go_instBEqMove_beq(lean_object* v_x_279_, lean_object* v_x_280_){
_start:
{
if (lean_obj_tag(v_x_279_) == 0)
{
if (lean_obj_tag(v_x_280_) == 0)
{
lean_object* v_p_281_; lean_object* v_p_282_; lean_object* v_fst_283_; lean_object* v_snd_284_; lean_object* v_fst_285_; lean_object* v_snd_286_; uint8_t v___x_287_; 
v_p_281_ = lean_ctor_get(v_x_279_, 0);
v_p_282_ = lean_ctor_get(v_x_280_, 0);
v_fst_283_ = lean_ctor_get(v_p_281_, 0);
v_snd_284_ = lean_ctor_get(v_p_281_, 1);
v_fst_285_ = lean_ctor_get(v_p_282_, 0);
v_snd_286_ = lean_ctor_get(v_p_282_, 1);
v___x_287_ = lean_nat_dec_eq(v_fst_283_, v_fst_285_);
if (v___x_287_ == 0)
{
return v___x_287_;
}
else
{
uint8_t v___x_288_; 
v___x_288_ = lean_nat_dec_eq(v_snd_284_, v_snd_286_);
return v___x_288_;
}
}
else
{
uint8_t v___x_289_; 
v___x_289_ = 0;
return v___x_289_;
}
}
else
{
if (lean_obj_tag(v_x_280_) == 1)
{
uint8_t v___x_290_; 
v___x_290_ = 1;
return v___x_290_;
}
else
{
uint8_t v___x_291_; 
v___x_291_ = 0;
return v___x_291_;
}
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_instBEqMove_beq___boxed(lean_object* v_x_292_, lean_object* v_x_293_){
_start:
{
uint8_t v_res_294_; lean_object* v_r_295_; 
v_res_294_ = lp_SoftwareLogic__Go_Go_instBEqMove_beq(v_x_292_, v_x_293_);
lean_dec(v_x_293_);
lean_dec(v_x_292_);
v_r_295_ = lean_box(v_res_294_);
return v_r_295_;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Option_repr___at___00List_repr___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__0_spec__1(lean_object* v_x_304_, lean_object* v_x_305_){
_start:
{
if (lean_obj_tag(v_x_304_) == 0)
{
lean_object* v___x_306_; 
v___x_306_ = ((lean_object*)(lp_SoftwareLogic__Go_Option_repr___at___00List_repr___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__0_spec__1___closed__1));
return v___x_306_;
}
else
{
lean_object* v_val_307_; lean_object* v___x_308_; lean_object* v___x_309_; uint8_t v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; 
v_val_307_ = lean_ctor_get(v_x_304_, 0);
v___x_308_ = ((lean_object*)(lp_SoftwareLogic__Go_Option_repr___at___00List_repr___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__0_spec__1___closed__3));
v___x_309_ = lean_unsigned_to_nat(1024u);
v___x_310_ = lean_unbox(v_val_307_);
v___x_311_ = lp_SoftwareLogic__Go_Go_instReprStone_repr(v___x_310_, v___x_309_);
v___x_312_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_312_, 0, v___x_308_);
lean_ctor_set(v___x_312_, 1, v___x_311_);
v___x_313_ = l_Repr_addAppParen(v___x_312_, v_x_305_);
return v___x_313_;
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Option_repr___at___00List_repr___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__0_spec__1___boxed(lean_object* v_x_314_, lean_object* v_x_315_){
_start:
{
lean_object* v_res_316_; 
v_res_316_ = lp_SoftwareLogic__Go_Option_repr___at___00List_repr___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__0_spec__1(v_x_314_, v_x_315_);
lean_dec(v_x_315_);
lean_dec(v_x_314_);
return v_res_316_;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__0_spec__2_spec__3_spec__5(lean_object* v_x_317_, lean_object* v_x_318_, lean_object* v_x_319_){
_start:
{
if (lean_obj_tag(v_x_319_) == 0)
{
lean_dec(v_x_317_);
return v_x_318_;
}
else
{
lean_object* v_head_320_; lean_object* v_tail_321_; lean_object* v___x_323_; uint8_t v_isShared_324_; uint8_t v_isSharedCheck_332_; 
v_head_320_ = lean_ctor_get(v_x_319_, 0);
v_tail_321_ = lean_ctor_get(v_x_319_, 1);
v_isSharedCheck_332_ = !lean_is_exclusive(v_x_319_);
if (v_isSharedCheck_332_ == 0)
{
v___x_323_ = v_x_319_;
v_isShared_324_ = v_isSharedCheck_332_;
goto v_resetjp_322_;
}
else
{
lean_inc(v_tail_321_);
lean_inc(v_head_320_);
lean_dec(v_x_319_);
v___x_323_ = lean_box(0);
v_isShared_324_ = v_isSharedCheck_332_;
goto v_resetjp_322_;
}
v_resetjp_322_:
{
lean_object* v___x_326_; 
lean_inc(v_x_317_);
if (v_isShared_324_ == 0)
{
lean_ctor_set_tag(v___x_323_, 5);
lean_ctor_set(v___x_323_, 1, v_x_317_);
lean_ctor_set(v___x_323_, 0, v_x_318_);
v___x_326_ = v___x_323_;
goto v_reusejp_325_;
}
else
{
lean_object* v_reuseFailAlloc_331_; 
v_reuseFailAlloc_331_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_331_, 0, v_x_318_);
lean_ctor_set(v_reuseFailAlloc_331_, 1, v_x_317_);
v___x_326_ = v_reuseFailAlloc_331_;
goto v_reusejp_325_;
}
v_reusejp_325_:
{
lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; 
v___x_327_ = lean_unsigned_to_nat(0u);
v___x_328_ = lp_SoftwareLogic__Go_Option_repr___at___00List_repr___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__0_spec__1(v_head_320_, v___x_327_);
lean_dec(v_head_320_);
v___x_329_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_329_, 0, v___x_326_);
lean_ctor_set(v___x_329_, 1, v___x_328_);
v_x_318_ = v___x_329_;
v_x_319_ = v_tail_321_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__0_spec__2_spec__3(lean_object* v_x_333_, lean_object* v_x_334_, lean_object* v_x_335_){
_start:
{
if (lean_obj_tag(v_x_335_) == 0)
{
lean_dec(v_x_333_);
return v_x_334_;
}
else
{
lean_object* v_head_336_; lean_object* v_tail_337_; lean_object* v___x_339_; uint8_t v_isShared_340_; uint8_t v_isSharedCheck_348_; 
v_head_336_ = lean_ctor_get(v_x_335_, 0);
v_tail_337_ = lean_ctor_get(v_x_335_, 1);
v_isSharedCheck_348_ = !lean_is_exclusive(v_x_335_);
if (v_isSharedCheck_348_ == 0)
{
v___x_339_ = v_x_335_;
v_isShared_340_ = v_isSharedCheck_348_;
goto v_resetjp_338_;
}
else
{
lean_inc(v_tail_337_);
lean_inc(v_head_336_);
lean_dec(v_x_335_);
v___x_339_ = lean_box(0);
v_isShared_340_ = v_isSharedCheck_348_;
goto v_resetjp_338_;
}
v_resetjp_338_:
{
lean_object* v___x_342_; 
lean_inc(v_x_333_);
if (v_isShared_340_ == 0)
{
lean_ctor_set_tag(v___x_339_, 5);
lean_ctor_set(v___x_339_, 1, v_x_333_);
lean_ctor_set(v___x_339_, 0, v_x_334_);
v___x_342_ = v___x_339_;
goto v_reusejp_341_;
}
else
{
lean_object* v_reuseFailAlloc_347_; 
v_reuseFailAlloc_347_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_347_, 0, v_x_334_);
lean_ctor_set(v_reuseFailAlloc_347_, 1, v_x_333_);
v___x_342_ = v_reuseFailAlloc_347_;
goto v_reusejp_341_;
}
v_reusejp_341_:
{
lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; 
v___x_343_ = lean_unsigned_to_nat(0u);
v___x_344_ = lp_SoftwareLogic__Go_Option_repr___at___00List_repr___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__0_spec__1(v_head_336_, v___x_343_);
lean_dec(v_head_336_);
v___x_345_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_345_, 0, v___x_342_);
lean_ctor_set(v___x_345_, 1, v___x_344_);
v___x_346_ = lp_SoftwareLogic__Go_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__0_spec__2_spec__3_spec__5(v_x_333_, v___x_345_, v_tail_337_);
return v___x_346_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Std_Format_joinSep___at___00List_repr___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__0_spec__2___lam__0(lean_object* v___y_349_){
_start:
{
lean_object* v___x_350_; lean_object* v___x_351_; 
v___x_350_ = lean_unsigned_to_nat(0u);
v___x_351_ = lp_SoftwareLogic__Go_Option_repr___at___00List_repr___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__0_spec__1(v___y_349_, v___x_350_);
return v___x_351_;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Std_Format_joinSep___at___00List_repr___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__0_spec__2___lam__0___boxed(lean_object* v___y_352_){
_start:
{
lean_object* v_res_353_; 
v_res_353_ = lp_SoftwareLogic__Go_Std_Format_joinSep___at___00List_repr___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__0_spec__2___lam__0(v___y_352_);
lean_dec(v___y_352_);
return v_res_353_;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Std_Format_joinSep___at___00List_repr___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__0_spec__2(lean_object* v_x_354_, lean_object* v_x_355_){
_start:
{
if (lean_obj_tag(v_x_354_) == 0)
{
lean_object* v___x_356_; 
lean_dec(v_x_355_);
v___x_356_ = lean_box(0);
return v___x_356_;
}
else
{
lean_object* v_tail_357_; 
v_tail_357_ = lean_ctor_get(v_x_354_, 1);
if (lean_obj_tag(v_tail_357_) == 0)
{
lean_object* v_head_358_; lean_object* v___x_359_; 
lean_dec(v_x_355_);
v_head_358_ = lean_ctor_get(v_x_354_, 0);
lean_inc(v_head_358_);
lean_dec_ref(v_x_354_);
v___x_359_ = lp_SoftwareLogic__Go_Std_Format_joinSep___at___00List_repr___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__0_spec__2___lam__0(v_head_358_);
lean_dec(v_head_358_);
return v___x_359_;
}
else
{
lean_object* v_head_360_; lean_object* v___x_361_; lean_object* v___x_362_; 
lean_inc(v_tail_357_);
v_head_360_ = lean_ctor_get(v_x_354_, 0);
lean_inc(v_head_360_);
lean_dec_ref(v_x_354_);
v___x_361_ = lp_SoftwareLogic__Go_Std_Format_joinSep___at___00List_repr___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__0_spec__2___lam__0(v_head_360_);
lean_dec(v_head_360_);
v___x_362_ = lp_SoftwareLogic__Go_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__0_spec__2_spec__3(v_x_355_, v___x_361_, v_tail_357_);
return v___x_362_;
}
}
}
}
static lean_object* _init_lp_SoftwareLogic__Go_List_repr___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__0___redArg___closed__4(void){
_start:
{
lean_object* v___x_368_; lean_object* v___x_369_; 
v___x_368_ = ((lean_object*)(lp_SoftwareLogic__Go_List_repr___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__0___redArg___closed__2));
v___x_369_ = lean_string_length(v___x_368_);
return v___x_369_;
}
}
static lean_object* _init_lp_SoftwareLogic__Go_List_repr___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__0___redArg___closed__5(void){
_start:
{
lean_object* v___x_370_; lean_object* v___x_371_; 
v___x_370_ = lean_obj_once(&lp_SoftwareLogic__Go_List_repr___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__0___redArg___closed__4, &lp_SoftwareLogic__Go_List_repr___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__0___redArg___closed__4_once, _init_lp_SoftwareLogic__Go_List_repr___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__0___redArg___closed__4);
v___x_371_ = lean_nat_to_int(v___x_370_);
return v___x_371_;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_repr___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__0___redArg(lean_object* v_a_376_){
_start:
{
if (lean_obj_tag(v_a_376_) == 0)
{
lean_object* v___x_377_; 
v___x_377_ = ((lean_object*)(lp_SoftwareLogic__Go_List_repr___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__0___redArg___closed__1));
return v___x_377_;
}
else
{
lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_385_; uint8_t v___x_386_; lean_object* v___x_387_; 
v___x_378_ = ((lean_object*)(lp_SoftwareLogic__Go_Prod_repr___at___00Go_instReprMove_repr_spec__0___redArg___closed__3));
v___x_379_ = lp_SoftwareLogic__Go_Std_Format_joinSep___at___00List_repr___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__0_spec__2(v_a_376_, v___x_378_);
v___x_380_ = lean_obj_once(&lp_SoftwareLogic__Go_List_repr___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__0___redArg___closed__5, &lp_SoftwareLogic__Go_List_repr___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__0___redArg___closed__5_once, _init_lp_SoftwareLogic__Go_List_repr___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__0___redArg___closed__5);
v___x_381_ = ((lean_object*)(lp_SoftwareLogic__Go_List_repr___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__0___redArg___closed__6));
v___x_382_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_382_, 0, v___x_381_);
lean_ctor_set(v___x_382_, 1, v___x_379_);
v___x_383_ = ((lean_object*)(lp_SoftwareLogic__Go_List_repr___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__0___redArg___closed__7));
v___x_384_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_384_, 0, v___x_382_);
lean_ctor_set(v___x_384_, 1, v___x_383_);
v___x_385_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_385_, 0, v___x_380_);
lean_ctor_set(v___x_385_, 1, v___x_384_);
v___x_386_ = 0;
v___x_387_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_387_, 0, v___x_385_);
lean_ctor_set_uint8(v___x_387_, sizeof(void*)*1, v___x_386_);
return v___x_387_;
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__1_spec__4_spec__6(lean_object* v_x_388_, lean_object* v_x_389_, lean_object* v_x_390_){
_start:
{
if (lean_obj_tag(v_x_390_) == 0)
{
lean_dec(v_x_388_);
return v_x_389_;
}
else
{
lean_object* v_head_391_; lean_object* v_tail_392_; lean_object* v___x_394_; uint8_t v_isShared_395_; uint8_t v_isSharedCheck_402_; 
v_head_391_ = lean_ctor_get(v_x_390_, 0);
v_tail_392_ = lean_ctor_get(v_x_390_, 1);
v_isSharedCheck_402_ = !lean_is_exclusive(v_x_390_);
if (v_isSharedCheck_402_ == 0)
{
v___x_394_ = v_x_390_;
v_isShared_395_ = v_isSharedCheck_402_;
goto v_resetjp_393_;
}
else
{
lean_inc(v_tail_392_);
lean_inc(v_head_391_);
lean_dec(v_x_390_);
v___x_394_ = lean_box(0);
v_isShared_395_ = v_isSharedCheck_402_;
goto v_resetjp_393_;
}
v_resetjp_393_:
{
lean_object* v___x_397_; 
lean_inc(v_x_388_);
if (v_isShared_395_ == 0)
{
lean_ctor_set_tag(v___x_394_, 5);
lean_ctor_set(v___x_394_, 1, v_x_388_);
lean_ctor_set(v___x_394_, 0, v_x_389_);
v___x_397_ = v___x_394_;
goto v_reusejp_396_;
}
else
{
lean_object* v_reuseFailAlloc_401_; 
v_reuseFailAlloc_401_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_401_, 0, v_x_389_);
lean_ctor_set(v_reuseFailAlloc_401_, 1, v_x_388_);
v___x_397_ = v_reuseFailAlloc_401_;
goto v_reusejp_396_;
}
v_reusejp_396_:
{
lean_object* v___x_398_; lean_object* v___x_399_; 
v___x_398_ = lp_SoftwareLogic__Go_List_repr___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__0___redArg(v_head_391_);
v___x_399_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_399_, 0, v___x_397_);
lean_ctor_set(v___x_399_, 1, v___x_398_);
v_x_389_ = v___x_399_;
v_x_390_ = v_tail_392_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__1_spec__4(lean_object* v_x_403_, lean_object* v_x_404_, lean_object* v_x_405_){
_start:
{
if (lean_obj_tag(v_x_405_) == 0)
{
lean_dec(v_x_403_);
return v_x_404_;
}
else
{
lean_object* v_head_406_; lean_object* v_tail_407_; lean_object* v___x_409_; uint8_t v_isShared_410_; uint8_t v_isSharedCheck_417_; 
v_head_406_ = lean_ctor_get(v_x_405_, 0);
v_tail_407_ = lean_ctor_get(v_x_405_, 1);
v_isSharedCheck_417_ = !lean_is_exclusive(v_x_405_);
if (v_isSharedCheck_417_ == 0)
{
v___x_409_ = v_x_405_;
v_isShared_410_ = v_isSharedCheck_417_;
goto v_resetjp_408_;
}
else
{
lean_inc(v_tail_407_);
lean_inc(v_head_406_);
lean_dec(v_x_405_);
v___x_409_ = lean_box(0);
v_isShared_410_ = v_isSharedCheck_417_;
goto v_resetjp_408_;
}
v_resetjp_408_:
{
lean_object* v___x_412_; 
lean_inc(v_x_403_);
if (v_isShared_410_ == 0)
{
lean_ctor_set_tag(v___x_409_, 5);
lean_ctor_set(v___x_409_, 1, v_x_403_);
lean_ctor_set(v___x_409_, 0, v_x_404_);
v___x_412_ = v___x_409_;
goto v_reusejp_411_;
}
else
{
lean_object* v_reuseFailAlloc_416_; 
v_reuseFailAlloc_416_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_416_, 0, v_x_404_);
lean_ctor_set(v_reuseFailAlloc_416_, 1, v_x_403_);
v___x_412_ = v_reuseFailAlloc_416_;
goto v_reusejp_411_;
}
v_reusejp_411_:
{
lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v___x_415_; 
v___x_413_ = lp_SoftwareLogic__Go_List_repr___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__0___redArg(v_head_406_);
v___x_414_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_414_, 0, v___x_412_);
lean_ctor_set(v___x_414_, 1, v___x_413_);
v___x_415_ = lp_SoftwareLogic__Go_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__1_spec__4_spec__6(v_x_403_, v___x_414_, v_tail_407_);
return v___x_415_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Std_Format_joinSep___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__1(lean_object* v_x_418_, lean_object* v_x_419_){
_start:
{
if (lean_obj_tag(v_x_418_) == 0)
{
lean_object* v___x_420_; 
lean_dec(v_x_419_);
v___x_420_ = lean_box(0);
return v___x_420_;
}
else
{
lean_object* v_tail_421_; 
v_tail_421_ = lean_ctor_get(v_x_418_, 1);
if (lean_obj_tag(v_tail_421_) == 0)
{
lean_object* v_head_422_; lean_object* v___x_423_; 
lean_dec(v_x_419_);
v_head_422_ = lean_ctor_get(v_x_418_, 0);
lean_inc(v_head_422_);
lean_dec_ref(v_x_418_);
v___x_423_ = lp_SoftwareLogic__Go_List_repr___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__0___redArg(v_head_422_);
return v___x_423_;
}
else
{
lean_object* v_head_424_; lean_object* v___x_425_; lean_object* v___x_426_; 
lean_inc(v_tail_421_);
v_head_424_ = lean_ctor_get(v_x_418_, 0);
lean_inc(v_head_424_);
lean_dec_ref(v_x_418_);
v___x_425_ = lp_SoftwareLogic__Go_List_repr___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__0___redArg(v_head_424_);
v___x_426_ = lp_SoftwareLogic__Go_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__1_spec__4(v_x_419_, v___x_425_, v_tail_421_);
return v___x_426_;
}
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_repr___at___00Go_instReprGameState_repr_spec__0___redArg(lean_object* v_a_427_){
_start:
{
if (lean_obj_tag(v_a_427_) == 0)
{
lean_object* v___x_428_; 
v___x_428_ = ((lean_object*)(lp_SoftwareLogic__Go_List_repr___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__0___redArg___closed__1));
return v___x_428_;
}
else
{
lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v___x_434_; lean_object* v___x_435_; lean_object* v___x_436_; uint8_t v___x_437_; lean_object* v___x_438_; 
v___x_429_ = ((lean_object*)(lp_SoftwareLogic__Go_Prod_repr___at___00Go_instReprMove_repr_spec__0___redArg___closed__3));
v___x_430_ = lp_SoftwareLogic__Go_Std_Format_joinSep___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__1(v_a_427_, v___x_429_);
v___x_431_ = lean_obj_once(&lp_SoftwareLogic__Go_List_repr___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__0___redArg___closed__5, &lp_SoftwareLogic__Go_List_repr___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__0___redArg___closed__5_once, _init_lp_SoftwareLogic__Go_List_repr___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__0___redArg___closed__5);
v___x_432_ = ((lean_object*)(lp_SoftwareLogic__Go_List_repr___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__0___redArg___closed__6));
v___x_433_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_433_, 0, v___x_432_);
lean_ctor_set(v___x_433_, 1, v___x_430_);
v___x_434_ = ((lean_object*)(lp_SoftwareLogic__Go_List_repr___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__0___redArg___closed__7));
v___x_435_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_435_, 0, v___x_433_);
lean_ctor_set(v___x_435_, 1, v___x_434_);
v___x_436_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_436_, 0, v___x_431_);
lean_ctor_set(v___x_436_, 1, v___x_435_);
v___x_437_ = 0;
v___x_438_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_438_, 0, v___x_436_);
lean_ctor_set_uint8(v___x_438_, sizeof(void*)*1, v___x_437_);
return v___x_438_;
}
}
}
static lean_object* _init_lp_SoftwareLogic__Go_Go_instReprGameState_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_452_; lean_object* v___x_453_; 
v___x_452_ = lean_unsigned_to_nat(8u);
v___x_453_ = lean_nat_to_int(v___x_452_);
return v___x_453_;
}
}
static lean_object* _init_lp_SoftwareLogic__Go_Go_instReprGameState_repr___redArg___closed__10(void){
_start:
{
lean_object* v___x_457_; lean_object* v___x_458_; 
v___x_457_ = lean_unsigned_to_nat(9u);
v___x_458_ = lean_nat_to_int(v___x_457_);
return v___x_458_;
}
}
static lean_object* _init_lp_SoftwareLogic__Go_Go_instReprGameState_repr___redArg___closed__14(void){
_start:
{
lean_object* v___x_463_; lean_object* v___x_464_; 
v___x_463_ = ((lean_object*)(lp_SoftwareLogic__Go_Go_instReprGameState_repr___redArg___closed__0));
v___x_464_ = lean_string_length(v___x_463_);
return v___x_464_;
}
}
static lean_object* _init_lp_SoftwareLogic__Go_Go_instReprGameState_repr___redArg___closed__15(void){
_start:
{
lean_object* v___x_465_; lean_object* v___x_466_; 
v___x_465_ = lean_obj_once(&lp_SoftwareLogic__Go_Go_instReprGameState_repr___redArg___closed__14, &lp_SoftwareLogic__Go_Go_instReprGameState_repr___redArg___closed__14_once, _init_lp_SoftwareLogic__Go_Go_instReprGameState_repr___redArg___closed__14);
v___x_466_ = lean_nat_to_int(v___x_465_);
return v___x_466_;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_instReprGameState_repr___redArg(lean_object* v_x_471_){
_start:
{
lean_object* v_size_472_; lean_object* v_board_473_; uint8_t v_turn_474_; lean_object* v___x_475_; lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; uint8_t v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; lean_object* v___x_491_; lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v___x_494_; lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v___x_506_; lean_object* v___x_507_; lean_object* v___x_508_; lean_object* v___x_509_; lean_object* v___x_510_; lean_object* v___x_511_; lean_object* v___x_512_; 
v_size_472_ = lean_ctor_get(v_x_471_, 0);
lean_inc(v_size_472_);
v_board_473_ = lean_ctor_get(v_x_471_, 1);
lean_inc(v_board_473_);
v_turn_474_ = lean_ctor_get_uint8(v_x_471_, sizeof(void*)*2);
lean_dec_ref(v_x_471_);
v___x_475_ = ((lean_object*)(lp_SoftwareLogic__Go_Go_instReprGameState_repr___redArg___closed__5));
v___x_476_ = ((lean_object*)(lp_SoftwareLogic__Go_Go_instReprGameState_repr___redArg___closed__6));
v___x_477_ = lean_obj_once(&lp_SoftwareLogic__Go_Go_instReprGameState_repr___redArg___closed__7, &lp_SoftwareLogic__Go_Go_instReprGameState_repr___redArg___closed__7_once, _init_lp_SoftwareLogic__Go_Go_instReprGameState_repr___redArg___closed__7);
v___x_478_ = l_Nat_reprFast(v_size_472_);
v___x_479_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_479_, 0, v___x_478_);
v___x_480_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_480_, 0, v___x_477_);
lean_ctor_set(v___x_480_, 1, v___x_479_);
v___x_481_ = 0;
v___x_482_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_482_, 0, v___x_480_);
lean_ctor_set_uint8(v___x_482_, sizeof(void*)*1, v___x_481_);
v___x_483_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_483_, 0, v___x_476_);
lean_ctor_set(v___x_483_, 1, v___x_482_);
v___x_484_ = ((lean_object*)(lp_SoftwareLogic__Go_Prod_repr___at___00Go_instReprMove_repr_spec__0___redArg___closed__2));
v___x_485_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_485_, 0, v___x_483_);
lean_ctor_set(v___x_485_, 1, v___x_484_);
v___x_486_ = lean_box(1);
v___x_487_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_487_, 0, v___x_485_);
lean_ctor_set(v___x_487_, 1, v___x_486_);
v___x_488_ = ((lean_object*)(lp_SoftwareLogic__Go_Go_instReprGameState_repr___redArg___closed__9));
v___x_489_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_489_, 0, v___x_487_);
lean_ctor_set(v___x_489_, 1, v___x_488_);
v___x_490_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_490_, 0, v___x_489_);
lean_ctor_set(v___x_490_, 1, v___x_475_);
v___x_491_ = lean_obj_once(&lp_SoftwareLogic__Go_Go_instReprGameState_repr___redArg___closed__10, &lp_SoftwareLogic__Go_Go_instReprGameState_repr___redArg___closed__10_once, _init_lp_SoftwareLogic__Go_Go_instReprGameState_repr___redArg___closed__10);
v___x_492_ = lean_unsigned_to_nat(0u);
v___x_493_ = lp_SoftwareLogic__Go_List_repr___at___00Go_instReprGameState_repr_spec__0___redArg(v_board_473_);
v___x_494_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_494_, 0, v___x_491_);
lean_ctor_set(v___x_494_, 1, v___x_493_);
v___x_495_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_495_, 0, v___x_494_);
lean_ctor_set_uint8(v___x_495_, sizeof(void*)*1, v___x_481_);
v___x_496_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_496_, 0, v___x_490_);
lean_ctor_set(v___x_496_, 1, v___x_495_);
v___x_497_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_497_, 0, v___x_496_);
lean_ctor_set(v___x_497_, 1, v___x_484_);
v___x_498_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_498_, 0, v___x_497_);
lean_ctor_set(v___x_498_, 1, v___x_486_);
v___x_499_ = ((lean_object*)(lp_SoftwareLogic__Go_Go_instReprGameState_repr___redArg___closed__12));
v___x_500_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_500_, 0, v___x_498_);
lean_ctor_set(v___x_500_, 1, v___x_499_);
v___x_501_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_501_, 0, v___x_500_);
lean_ctor_set(v___x_501_, 1, v___x_475_);
v___x_502_ = lp_SoftwareLogic__Go_Go_instReprStone_repr(v_turn_474_, v___x_492_);
v___x_503_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_503_, 0, v___x_477_);
lean_ctor_set(v___x_503_, 1, v___x_502_);
v___x_504_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_504_, 0, v___x_503_);
lean_ctor_set_uint8(v___x_504_, sizeof(void*)*1, v___x_481_);
v___x_505_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_505_, 0, v___x_501_);
lean_ctor_set(v___x_505_, 1, v___x_504_);
v___x_506_ = lean_obj_once(&lp_SoftwareLogic__Go_Go_instReprGameState_repr___redArg___closed__15, &lp_SoftwareLogic__Go_Go_instReprGameState_repr___redArg___closed__15_once, _init_lp_SoftwareLogic__Go_Go_instReprGameState_repr___redArg___closed__15);
v___x_507_ = ((lean_object*)(lp_SoftwareLogic__Go_Go_instReprGameState_repr___redArg___closed__16));
v___x_508_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_508_, 0, v___x_507_);
lean_ctor_set(v___x_508_, 1, v___x_505_);
v___x_509_ = ((lean_object*)(lp_SoftwareLogic__Go_Go_instReprGameState_repr___redArg___closed__17));
v___x_510_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_510_, 0, v___x_508_);
lean_ctor_set(v___x_510_, 1, v___x_509_);
v___x_511_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_511_, 0, v___x_506_);
lean_ctor_set(v___x_511_, 1, v___x_510_);
v___x_512_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_512_, 0, v___x_511_);
lean_ctor_set_uint8(v___x_512_, sizeof(void*)*1, v___x_481_);
return v___x_512_;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_instReprGameState_repr(lean_object* v_x_513_, lean_object* v_prec_514_){
_start:
{
lean_object* v___x_515_; 
v___x_515_ = lp_SoftwareLogic__Go_Go_instReprGameState_repr___redArg(v_x_513_);
return v___x_515_;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_instReprGameState_repr___boxed(lean_object* v_x_516_, lean_object* v_prec_517_){
_start:
{
lean_object* v_res_518_; 
v_res_518_ = lp_SoftwareLogic__Go_Go_instReprGameState_repr(v_x_516_, v_prec_517_);
lean_dec(v_prec_517_);
return v_res_518_;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_repr___at___00Go_instReprGameState_repr_spec__0(lean_object* v_a_519_, lean_object* v_n_520_){
_start:
{
lean_object* v___x_521_; 
v___x_521_ = lp_SoftwareLogic__Go_List_repr___at___00Go_instReprGameState_repr_spec__0___redArg(v_a_519_);
return v___x_521_;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_repr___at___00Go_instReprGameState_repr_spec__0___boxed(lean_object* v_a_522_, lean_object* v_n_523_){
_start:
{
lean_object* v_res_524_; 
v_res_524_ = lp_SoftwareLogic__Go_List_repr___at___00Go_instReprGameState_repr_spec__0(v_a_522_, v_n_523_);
lean_dec(v_n_523_);
return v_res_524_;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_repr___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__0(lean_object* v_a_525_, lean_object* v_n_526_){
_start:
{
lean_object* v___x_527_; 
v___x_527_ = lp_SoftwareLogic__Go_List_repr___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__0___redArg(v_a_525_);
return v___x_527_;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_repr___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__0___boxed(lean_object* v_a_528_, lean_object* v_n_529_){
_start:
{
lean_object* v_res_530_; 
v_res_530_ = lp_SoftwareLogic__Go_List_repr___at___00List_repr___at___00Go_instReprGameState_repr_spec__0_spec__0(v_a_528_, v_n_529_);
lean_dec(v_n_529_);
return v_res_530_;
}
}
LEAN_EXPORT uint8_t lp_SoftwareLogic__Go_Go_instDecidableEqGameState_decEq___lam__0(lean_object* v_a_533_, lean_object* v_b_534_){
_start:
{
lean_object* v___x_535_; uint8_t v___x_536_; 
v___x_535_ = lean_alloc_closure((void*)(lp_SoftwareLogic__Go_Go_instDecidableEqStone___boxed), 2, 0);
v___x_536_ = l_Option_instDecidableEq___redArg(v___x_535_, v_a_533_, v_b_534_);
return v___x_536_;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_instDecidableEqGameState_decEq___lam__0___boxed(lean_object* v_a_537_, lean_object* v_b_538_){
_start:
{
uint8_t v_res_539_; lean_object* v_r_540_; 
v_res_539_ = lp_SoftwareLogic__Go_Go_instDecidableEqGameState_decEq___lam__0(v_a_537_, v_b_538_);
v_r_540_ = lean_box(v_res_539_);
return v_r_540_;
}
}
LEAN_EXPORT uint8_t lp_SoftwareLogic__Go_Go_instDecidableEqGameState_decEq___lam__1(lean_object* v___f_541_, lean_object* v_a_542_, lean_object* v_b_543_){
_start:
{
uint8_t v___x_544_; 
v___x_544_ = l_instDecidableEqList___redArg(v___f_541_, v_a_542_, v_b_543_);
return v___x_544_;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_instDecidableEqGameState_decEq___lam__1___boxed(lean_object* v___f_545_, lean_object* v_a_546_, lean_object* v_b_547_){
_start:
{
uint8_t v_res_548_; lean_object* v_r_549_; 
v_res_548_ = lp_SoftwareLogic__Go_Go_instDecidableEqGameState_decEq___lam__1(v___f_545_, v_a_546_, v_b_547_);
v_r_549_ = lean_box(v_res_548_);
return v_r_549_;
}
}
LEAN_EXPORT uint8_t lp_SoftwareLogic__Go_Go_instDecidableEqGameState_decEq(lean_object* v_x_553_, lean_object* v_x_554_){
_start:
{
lean_object* v_size_555_; lean_object* v_board_556_; uint8_t v_turn_557_; lean_object* v_size_558_; lean_object* v_board_559_; uint8_t v_turn_560_; uint8_t v___x_561_; 
v_size_555_ = lean_ctor_get(v_x_553_, 0);
lean_inc(v_size_555_);
v_board_556_ = lean_ctor_get(v_x_553_, 1);
lean_inc(v_board_556_);
v_turn_557_ = lean_ctor_get_uint8(v_x_553_, sizeof(void*)*2);
lean_dec_ref(v_x_553_);
v_size_558_ = lean_ctor_get(v_x_554_, 0);
lean_inc(v_size_558_);
v_board_559_ = lean_ctor_get(v_x_554_, 1);
lean_inc(v_board_559_);
v_turn_560_ = lean_ctor_get_uint8(v_x_554_, sizeof(void*)*2);
lean_dec_ref(v_x_554_);
v___x_561_ = lean_nat_dec_eq(v_size_555_, v_size_558_);
lean_dec(v_size_558_);
lean_dec(v_size_555_);
if (v___x_561_ == 0)
{
lean_dec(v_board_559_);
lean_dec(v_board_556_);
return v___x_561_;
}
else
{
lean_object* v___f_562_; uint8_t v___x_563_; 
v___f_562_ = ((lean_object*)(lp_SoftwareLogic__Go_Go_instDecidableEqGameState_decEq___closed__1));
v___x_563_ = l_instDecidableEqList___redArg(v___f_562_, v_board_556_, v_board_559_);
if (v___x_563_ == 0)
{
return v___x_563_;
}
else
{
uint8_t v___x_564_; 
v___x_564_ = lp_SoftwareLogic__Go_Go_instDecidableEqStone(v_turn_557_, v_turn_560_);
return v___x_564_;
}
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_instDecidableEqGameState_decEq___boxed(lean_object* v_x_565_, lean_object* v_x_566_){
_start:
{
uint8_t v_res_567_; lean_object* v_r_568_; 
v_res_567_ = lp_SoftwareLogic__Go_Go_instDecidableEqGameState_decEq(v_x_565_, v_x_566_);
v_r_568_ = lean_box(v_res_567_);
return v_r_568_;
}
}
LEAN_EXPORT uint8_t lp_SoftwareLogic__Go_Go_instDecidableEqGameState(lean_object* v_x_569_, lean_object* v_x_570_){
_start:
{
uint8_t v___x_571_; 
v___x_571_ = lp_SoftwareLogic__Go_Go_instDecidableEqGameState_decEq(v_x_569_, v_x_570_);
return v___x_571_;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_instDecidableEqGameState___boxed(lean_object* v_x_572_, lean_object* v_x_573_){
_start:
{
uint8_t v_res_574_; lean_object* v_r_575_; 
v_res_574_ = lp_SoftwareLogic__Go_Go_instDecidableEqGameState(v_x_572_, v_x_573_);
v_r_575_ = lean_box(v_res_574_);
return v_r_575_;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_emptyRow(lean_object* v_n_576_){
_start:
{
lean_object* v___x_577_; lean_object* v___x_578_; 
v___x_577_ = lean_box(0);
v___x_578_ = l_List_replicateTR___redArg(v_n_576_, v___x_577_);
return v___x_578_;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_emptyBoard(lean_object* v_n_579_){
_start:
{
lean_object* v___x_580_; lean_object* v___x_581_; 
lean_inc(v_n_579_);
v___x_580_ = lp_SoftwareLogic__Go_Go_emptyRow(v_n_579_);
v___x_581_ = l_List_replicateTR___redArg(v_n_579_, v___x_580_);
return v___x_581_;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_initialState(lean_object* v_n_582_){
_start:
{
lean_object* v___x_583_; uint8_t v___x_584_; lean_object* v___x_585_; 
lean_inc(v_n_582_);
v___x_583_ = lp_SoftwareLogic__Go_Go_emptyBoard(v_n_582_);
v___x_584_ = 0;
v___x_585_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_585_, 0, v_n_582_);
lean_ctor_set(v___x_585_, 1, v___x_583_);
lean_ctor_set_uint8(v___x_585_, sizeof(void*)*2, v___x_584_);
return v___x_585_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_SoftwareLogic__Go_Go_Basic(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
