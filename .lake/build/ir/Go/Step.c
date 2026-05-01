// Lean compiler output
// Module: Go.Step
// Imports: public import Init public import Go.Move
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
uint8_t lp_SoftwareLogic__Go_Go_legalMove(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_checkMove_x3f(lean_object*, lean_object*);
lean_object* lp_SoftwareLogic__Go_Go_resolvePlacement_x3f(lean_object*, lean_object*);
lean_object* lp_SoftwareLogic__Go_Go_switchTurn(lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_applyMove_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_applyMoves_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_applyLegalMove(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_applyCheckedMove_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_applyCheckedMoves_x3f(lean_object*, lean_object*);
static const lean_ctor_object lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__0 = (const lean_object*)&lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__0_value;
static const lean_ctor_object lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__0_value)}};
static const lean_object* lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__1 = (const lean_object*)&lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__1_value;
static const lean_ctor_object lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__2 = (const lean_object*)&lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__2_value;
static const lean_ctor_object lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__2_value)}};
static const lean_object* lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__3 = (const lean_object*)&lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__3_value;
static const lean_ctor_object lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__4 = (const lean_object*)&lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__4_value;
static const lean_ctor_object lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__4_value)}};
static const lean_object* lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__5 = (const lean_object*)&lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__5_value;
static const lean_ctor_object lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__6 = (const lean_object*)&lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__6_value;
static const lean_ctor_object lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__6_value)}};
static const lean_object* lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__7 = (const lean_object*)&lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__7_value;
static const lean_ctor_object lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__8 = (const lean_object*)&lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__8_value;
static const lean_ctor_object lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__8_value)}};
static const lean_object* lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__9 = (const lean_object*)&lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__9_value;
static const lean_ctor_object lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__9_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__10 = (const lean_object*)&lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__10_value;
static const lean_ctor_object lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__10_value)}};
static const lean_object* lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__11 = (const lean_object*)&lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__11_value;
static const lean_ctor_object lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__7_value),((lean_object*)&lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__11_value)}};
static const lean_object* lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__12 = (const lean_object*)&lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__12_value;
static const lean_ctor_object lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__12_value)}};
static const lean_object* lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__13 = (const lean_object*)&lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__13_value;
static const lean_ctor_object lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__5_value),((lean_object*)&lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__13_value)}};
static const lean_object* lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__14 = (const lean_object*)&lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__14_value;
static const lean_ctor_object lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__14_value)}};
static const lean_object* lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__15 = (const lean_object*)&lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__15_value;
static const lean_ctor_object lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__3_value),((lean_object*)&lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__15_value)}};
static const lean_object* lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__16 = (const lean_object*)&lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__16_value;
static const lean_ctor_object lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__1_value),((lean_object*)&lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__16_value)}};
static const lean_object* lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__17 = (const lean_object*)&lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__17_value;
LEAN_EXPORT const lean_object* lp_SoftwareLogic__Go_Go_captureDemoMoves = (const lean_object*)&lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__17_value;
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_checkMove_x3f(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
lean_inc(x_2);
x_3 = lp_SoftwareLogic__Go_Go_legalMove(x_1, x_2);
if (x_3 == 0)
{
lean_object* x_4; 
lean_dec(x_2);
x_4 = lean_box(0);
return x_4;
}
else
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_5, 0, x_2);
return x_5;
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_applyMove_x3f(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc_ref(x_3);
lean_inc_ref(x_1);
x_4 = lp_SoftwareLogic__Go_Go_legalMove(x_1, x_2);
if (x_4 == 0)
{
lean_object* x_5; 
lean_dec_ref(x_3);
lean_dec_ref(x_1);
x_5 = lean_box(0);
return x_5;
}
else
{
lean_object* x_6; 
x_6 = lp_SoftwareLogic__Go_Go_resolvePlacement_x3f(x_1, x_3);
if (lean_obj_tag(x_6) == 0)
{
return x_6;
}
else
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_6, 0);
x_9 = lp_SoftwareLogic__Go_Go_switchTurn(x_8);
lean_ctor_set(x_6, 0, x_9);
return x_6;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_6, 0);
lean_inc(x_10);
lean_dec(x_6);
x_11 = lp_SoftwareLogic__Go_Go_switchTurn(x_10);
x_12 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_12, 0, x_11);
return x_12;
}
}
}
}
else
{
lean_object* x_13; lean_object* x_14; 
x_13 = lp_SoftwareLogic__Go_Go_switchTurn(x_1);
x_14 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_14, 0, x_13);
return x_14;
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_applyMoves_x3f(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_3, 0, x_1);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
lean_dec_ref(x_2);
x_6 = lp_SoftwareLogic__Go_Go_applyMove_x3f(x_1, x_4);
if (lean_obj_tag(x_6) == 0)
{
lean_dec(x_5);
return x_6;
}
else
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec_ref(x_6);
x_1 = x_7;
x_2 = x_5;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_applyLegalMove(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
lean_inc_ref(x_1);
x_3 = lp_SoftwareLogic__Go_Go_applyMove_x3f(x_1, x_2);
if (lean_obj_tag(x_3) == 0)
{
return x_1;
}
else
{
lean_object* x_4; 
lean_dec_ref(x_1);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec_ref(x_3);
return x_4;
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_applyCheckedMove_x3f(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
lean_inc_ref(x_1);
x_3 = lp_SoftwareLogic__Go_Go_checkMove_x3f(x_1, x_2);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; 
lean_dec_ref(x_1);
x_4 = lean_box(0);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_3, 0);
x_7 = lp_SoftwareLogic__Go_Go_applyLegalMove(x_1, x_6);
lean_ctor_set(x_3, 0, x_7);
return x_3;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_3, 0);
lean_inc(x_8);
lean_dec(x_3);
x_9 = lp_SoftwareLogic__Go_Go_applyLegalMove(x_1, x_8);
x_10 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_10, 0, x_9);
return x_10;
}
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_applyCheckedMoves_x3f(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_3, 0, x_1);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
lean_dec_ref(x_2);
x_6 = lp_SoftwareLogic__Go_Go_applyCheckedMove_x3f(x_1, x_4);
if (lean_obj_tag(x_6) == 0)
{
lean_dec(x_5);
return x_6;
}
else
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec_ref(x_6);
x_1 = x_7;
x_2 = x_5;
goto _start;
}
}
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_SoftwareLogic__Go_Go_Move(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_SoftwareLogic__Go_Go_Step(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_SoftwareLogic__Go_Go_Move(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
