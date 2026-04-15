// Lean compiler output
// Module: Go.Move
// Imports: public import Init public import Go.Capture
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
uint8_t lp_SoftwareLogic__Go_Go_inBounds(lean_object*, lean_object*);
uint8_t lp_SoftwareLogic__Go_Go_isEmptyAt(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_SoftwareLogic__Go_Go_legalPlaceBasic(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_legalPlaceBasic___boxed(lean_object*, lean_object*);
lean_object* lp_SoftwareLogic__Go_Go_resolvePlacement_x3f(lean_object*, lean_object*);
lean_object* lp_SoftwareLogic__Go_Go_groupHasLiberties_x3f(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_SoftwareLogic__Go_Go_legalPlaceNoSuicide(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_legalPlaceNoSuicide___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_SoftwareLogic__Go_Go_legalMove(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_legalMove___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_SoftwareLogic__Go_Go_legalPlaceBasic(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_1, 1);
x_5 = lp_SoftwareLogic__Go_Go_inBounds(x_3, x_2);
if (x_5 == 0)
{
lean_dec_ref(x_2);
return x_5;
}
else
{
uint8_t x_6; 
x_6 = lp_SoftwareLogic__Go_Go_isEmptyAt(x_4, x_2);
return x_6;
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_legalPlaceBasic___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lp_SoftwareLogic__Go_Go_legalPlaceBasic(x_1, x_2);
lean_dec_ref(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT uint8_t lp_SoftwareLogic__Go_Go_legalPlaceNoSuicide(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
lean_inc_ref(x_2);
x_3 = lp_SoftwareLogic__Go_Go_legalPlaceBasic(x_1, x_2);
if (x_3 == 0)
{
lean_dec_ref(x_2);
lean_dec_ref(x_1);
return x_3;
}
else
{
uint8_t x_4; lean_object* x_5; 
x_4 = 0;
lean_inc_ref(x_2);
x_5 = lp_SoftwareLogic__Go_Go_resolvePlacement_x3f(x_1, x_2);
if (lean_obj_tag(x_5) == 0)
{
lean_dec_ref(x_2);
return x_4;
}
else
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec_ref(x_5);
x_7 = lp_SoftwareLogic__Go_Go_groupHasLiberties_x3f(x_6, x_2);
lean_dec(x_6);
if (lean_obj_tag(x_7) == 0)
{
return x_4;
}
else
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_dec_ref(x_7);
x_9 = lean_unbox(x_8);
lean_dec(x_8);
return x_9;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_legalPlaceNoSuicide___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lp_SoftwareLogic__Go_Go_legalPlaceNoSuicide(x_1, x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT uint8_t lp_SoftwareLogic__Go_Go_legalMove(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc_ref(x_3);
lean_dec_ref(x_2);
x_4 = lp_SoftwareLogic__Go_Go_legalPlaceNoSuicide(x_1, x_3);
return x_4;
}
else
{
uint8_t x_5; 
lean_dec_ref(x_1);
x_5 = 1;
return x_5;
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_legalMove___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lp_SoftwareLogic__Go_Go_legalMove(x_1, x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_SoftwareLogic__Go_Go_Capture(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_SoftwareLogic__Go_Go_Move(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_SoftwareLogic__Go_Go_Capture(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
