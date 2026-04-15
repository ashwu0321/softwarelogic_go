// Lean compiler output
// Module: Go.Capture
// Imports: public import Init public import Go.Liberty
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
lean_object* lp_SoftwareLogic__Go_Go_boardSet_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_foldl___at___00Go_removePositions_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_removePositions(lean_object*, lean_object*);
uint8_t lp_SoftwareLogic__Go_Go_Stone_other(uint8_t);
lean_object* lp_SoftwareLogic__Go_Go_neighbors(lean_object*, lean_object*);
lean_object* lp_SoftwareLogic__Go_List_filterTR_loop___at___00Go_sameStoneNeighbors_spec__0(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_enemyNeighbors(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_enemyNeighbors___boxed(lean_object*, lean_object*);
lean_object* lp_SoftwareLogic__Go_Go_groupFrom_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_foldl___at___00Go_captureAround_spec__0(lean_object*, lean_object*, lean_object*);
lean_object* lp_SoftwareLogic__Go_Go_libertiesOfGroup(lean_object*, lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_foldl___at___00Go_captureAround_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_captureAround(lean_object*, lean_object*);
lean_object* lp_SoftwareLogic__Go_Go_placeStone_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_resolvePlacement_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_foldl___at___00Go_removePositions_spec__0(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
lean_dec_ref(x_2);
x_5 = lean_box(0);
lean_inc(x_1);
x_6 = lp_SoftwareLogic__Go_Go_boardSet_x3f(x_1, x_3, x_5);
if (lean_obj_tag(x_6) == 0)
{
x_2 = x_4;
goto _start;
}
else
{
lean_object* x_8; 
lean_dec(x_1);
x_8 = lean_ctor_get(x_6, 0);
lean_inc(x_8);
lean_dec_ref(x_6);
x_1 = x_8;
x_2 = x_4;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_removePositions(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lp_SoftwareLogic__Go_List_foldl___at___00Go_removePositions_spec__0(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_enemyNeighbors(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; uint8_t x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get_uint8(x_1, sizeof(void*)*2);
x_5 = lp_SoftwareLogic__Go_Go_Stone_other(x_4);
x_6 = lp_SoftwareLogic__Go_Go_neighbors(x_3, x_2);
x_7 = lean_box(0);
x_8 = lp_SoftwareLogic__Go_List_filterTR_loop___at___00Go_sameStoneNeighbors_spec__0(x_1, x_5, x_6, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_enemyNeighbors___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lp_SoftwareLogic__Go_Go_enemyNeighbors(x_1, x_2);
lean_dec_ref(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_foldl___at___00Go_captureAround_spec__0(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
return x_2;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; lean_object* x_8; lean_object* x_9; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_3, 1);
lean_inc(x_5);
lean_dec_ref(x_3);
x_6 = lean_ctor_get(x_1, 0);
x_7 = lean_ctor_get_uint8(x_1, sizeof(void*)*2);
lean_inc(x_2);
lean_inc(x_6);
x_8 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_2);
lean_ctor_set_uint8(x_8, sizeof(void*)*2, x_7);
x_9 = lp_SoftwareLogic__Go_Go_groupFrom_x3f(x_8, x_4);
if (lean_obj_tag(x_9) == 0)
{
lean_dec_ref(x_8);
x_3 = x_5;
goto _start;
}
else
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_ctor_get(x_9, 0);
lean_inc(x_11);
lean_dec_ref(x_9);
lean_inc(x_11);
x_12 = lp_SoftwareLogic__Go_Go_libertiesOfGroup(x_8, x_11);
lean_dec_ref(x_8);
x_13 = l_List_isEmpty___redArg(x_12);
lean_dec(x_12);
if (x_13 == 0)
{
lean_dec(x_11);
x_3 = x_5;
goto _start;
}
else
{
lean_object* x_15; 
x_15 = lp_SoftwareLogic__Go_List_foldl___at___00Go_removePositions_spec__0(x_2, x_11);
x_2 = x_15;
x_3 = x_5;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_foldl___at___00Go_captureAround_spec__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lp_SoftwareLogic__Go_List_foldl___at___00Go_captureAround_spec__0(x_1, x_2, x_3);
lean_dec_ref(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_captureAround(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
x_5 = lean_ctor_get_uint8(x_1, sizeof(void*)*2);
x_6 = lp_SoftwareLogic__Go_Go_enemyNeighbors(x_1, x_2);
lean_inc(x_4);
x_7 = lp_SoftwareLogic__Go_List_foldl___at___00Go_captureAround_spec__0(x_1, x_4, x_6);
x_8 = !lean_is_exclusive(x_1);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_1, 1);
lean_dec(x_9);
x_10 = lean_ctor_get(x_1, 0);
lean_dec(x_10);
lean_ctor_set(x_1, 1, x_7);
return x_1;
}
else
{
lean_object* x_11; 
lean_dec(x_1);
x_11 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_11, 0, x_3);
lean_ctor_set(x_11, 1, x_7);
lean_ctor_set_uint8(x_11, sizeof(void*)*2, x_5);
return x_11;
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_resolvePlacement_x3f(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
lean_inc_ref(x_2);
x_3 = lp_SoftwareLogic__Go_Go_placeStone_x3f(x_1, x_2);
if (lean_obj_tag(x_3) == 0)
{
lean_dec_ref(x_2);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lp_SoftwareLogic__Go_Go_captureAround(x_5, x_2);
lean_ctor_set(x_3, 0, x_6);
return x_3;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_3, 0);
lean_inc(x_7);
lean_dec(x_3);
x_8 = lp_SoftwareLogic__Go_Go_captureAround(x_7, x_2);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_8);
return x_9;
}
}
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_SoftwareLogic__Go_Go_Liberty(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_SoftwareLogic__Go_Go_Capture(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_SoftwareLogic__Go_Go_Liberty(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
