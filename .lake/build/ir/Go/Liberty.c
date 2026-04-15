// Lean compiler output
// Module: Go.Liberty
// Imports: public import Init public import Go.Group
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
lean_object* l_List_reverse___redArg(lean_object*);
uint8_t lp_SoftwareLogic__Go_Go_isEmptyAt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_filterTR_loop___at___00Go_emptyNeighbors_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_filterTR_loop___at___00Go_emptyNeighbors_spec__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lp_SoftwareLogic__Go_Go_neighbors(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_emptyNeighbors(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_emptyNeighbors___boxed(lean_object*, lean_object*);
lean_object* lp_SoftwareLogic__Go_List_foldl___at___00Go_insertManyPos_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_foldl___at___00Go_libertiesOfGroup_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_foldl___at___00Go_libertiesOfGroup_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_libertiesOfGroup(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_libertiesOfGroup___boxed(lean_object*, lean_object*);
lean_object* lp_SoftwareLogic__Go_Go_groupFrom_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_libertiesAt_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_libertiesAt_x3f___boxed(lean_object*, lean_object*);
static lean_once_cell_t lp_SoftwareLogic__Go_Go_groupHasLiberties_x3f___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_SoftwareLogic__Go_Go_groupHasLiberties_x3f___closed__0;
static lean_once_cell_t lp_SoftwareLogic__Go_Go_groupHasLiberties_x3f___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_SoftwareLogic__Go_Go_groupHasLiberties_x3f___closed__1;
uint8_t l_List_isEmpty___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_groupHasLiberties_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_groupHasLiberties_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_filterTR_loop___at___00Go_emptyNeighbors_spec__0(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_4; 
x_4 = l_List_reverse___redArg(x_3);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_2);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_ctor_get(x_2, 0);
x_7 = lean_ctor_get(x_2, 1);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
x_9 = lp_SoftwareLogic__Go_Go_isEmptyAt(x_8, x_6);
if (x_9 == 0)
{
lean_free_object(x_2);
lean_dec(x_6);
x_2 = x_7;
goto _start;
}
else
{
lean_ctor_set(x_2, 1, x_3);
{
lean_object* _tmp_1 = x_7;
lean_object* _tmp_2 = x_2;
x_2 = _tmp_1;
x_3 = _tmp_2;
}
goto _start;
}
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_12 = lean_ctor_get(x_2, 0);
x_13 = lean_ctor_get(x_2, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_2);
x_14 = lean_ctor_get(x_1, 1);
lean_inc(x_12);
x_15 = lp_SoftwareLogic__Go_Go_isEmptyAt(x_14, x_12);
if (x_15 == 0)
{
lean_dec(x_12);
x_2 = x_13;
goto _start;
}
else
{
lean_object* x_17; 
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_12);
lean_ctor_set(x_17, 1, x_3);
x_2 = x_13;
x_3 = x_17;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_filterTR_loop___at___00Go_emptyNeighbors_spec__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lp_SoftwareLogic__Go_List_filterTR_loop___at___00Go_emptyNeighbors_spec__0(x_1, x_2, x_3);
lean_dec_ref(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_emptyNeighbors(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lp_SoftwareLogic__Go_Go_neighbors(x_3, x_2);
x_5 = lean_box(0);
x_6 = lp_SoftwareLogic__Go_List_filterTR_loop___at___00Go_emptyNeighbors_spec__0(x_1, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_emptyNeighbors___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lp_SoftwareLogic__Go_Go_emptyNeighbors(x_1, x_2);
lean_dec_ref(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_foldl___at___00Go_libertiesOfGroup_spec__0(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
return x_2;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_3, 1);
lean_inc(x_5);
lean_dec_ref(x_3);
x_6 = lp_SoftwareLogic__Go_Go_emptyNeighbors(x_1, x_4);
x_7 = lp_SoftwareLogic__Go_List_foldl___at___00Go_insertManyPos_spec__0(x_2, x_6);
x_2 = x_7;
x_3 = x_5;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_foldl___at___00Go_libertiesOfGroup_spec__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lp_SoftwareLogic__Go_List_foldl___at___00Go_libertiesOfGroup_spec__0(x_1, x_2, x_3);
lean_dec_ref(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_libertiesOfGroup(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_box(0);
x_4 = lp_SoftwareLogic__Go_List_foldl___at___00Go_libertiesOfGroup_spec__0(x_1, x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_libertiesOfGroup___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lp_SoftwareLogic__Go_Go_libertiesOfGroup(x_1, x_2);
lean_dec_ref(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_libertiesAt_x3f(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lp_SoftwareLogic__Go_Go_groupFrom_x3f(x_1, x_2);
if (lean_obj_tag(x_3) == 0)
{
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
x_6 = lp_SoftwareLogic__Go_Go_libertiesOfGroup(x_1, x_5);
lean_ctor_set(x_3, 0, x_6);
return x_3;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_3, 0);
lean_inc(x_7);
lean_dec(x_3);
x_8 = lp_SoftwareLogic__Go_Go_libertiesOfGroup(x_1, x_7);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_8);
return x_9;
}
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_libertiesAt_x3f___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lp_SoftwareLogic__Go_Go_libertiesAt_x3f(x_1, x_2);
lean_dec_ref(x_1);
return x_3;
}
}
static lean_object* _init_lp_SoftwareLogic__Go_Go_groupHasLiberties_x3f___closed__0(void) {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; 
x_1 = 1;
x_2 = lean_box(x_1);
x_3 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_3, 0, x_2);
return x_3;
}
}
static lean_object* _init_lp_SoftwareLogic__Go_Go_groupHasLiberties_x3f___closed__1(void) {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; 
x_1 = 0;
x_2 = lean_box(x_1);
x_3 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_3, 0, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_groupHasLiberties_x3f(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lp_SoftwareLogic__Go_Go_libertiesAt_x3f(x_1, x_2);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; 
x_4 = lean_box(0);
return x_4;
}
else
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
lean_dec_ref(x_3);
x_6 = l_List_isEmpty___redArg(x_5);
lean_dec(x_5);
if (x_6 == 0)
{
lean_object* x_7; 
x_7 = lean_obj_once(&lp_SoftwareLogic__Go_Go_groupHasLiberties_x3f___closed__0, &lp_SoftwareLogic__Go_Go_groupHasLiberties_x3f___closed__0_once, _init_lp_SoftwareLogic__Go_Go_groupHasLiberties_x3f___closed__0);
return x_7;
}
else
{
lean_object* x_8; 
x_8 = lean_obj_once(&lp_SoftwareLogic__Go_Go_groupHasLiberties_x3f___closed__1, &lp_SoftwareLogic__Go_Go_groupHasLiberties_x3f___closed__1_once, _init_lp_SoftwareLogic__Go_Go_groupHasLiberties_x3f___closed__1);
return x_8;
}
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_groupHasLiberties_x3f___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lp_SoftwareLogic__Go_Go_groupHasLiberties_x3f(x_1, x_2);
lean_dec_ref(x_1);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_SoftwareLogic__Go_Go_Group(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_SoftwareLogic__Go_Go_Liberty(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_SoftwareLogic__Go_Go_Group(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
