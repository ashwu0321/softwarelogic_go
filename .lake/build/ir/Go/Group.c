// Lean compiler output
// Module: Go.Group
// Imports: public import Init public import Go.Board
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
LEAN_EXPORT uint8_t lp_SoftwareLogic__Go_Go_posMem(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_posMem___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_insertPos(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_foldl___at___00Go_insertManyPos_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_insertManyPos(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* lp_SoftwareLogic__Go_Go_stoneAt_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_filterTR_loop___at___00Go_sameStoneNeighbors_spec__0(lean_object*, uint8_t, lean_object*, lean_object*);
uint8_t lp_SoftwareLogic__Go_Go_instBEqStone_beq(uint8_t, uint8_t);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_filterTR_loop___at___00Go_sameStoneNeighbors_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_SoftwareLogic__Go_Go_neighbors(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_sameStoneNeighbors(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_sameStoneNeighbors___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_groupFromAux(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_groupFromAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_groupFrom_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_groupFrom_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_SoftwareLogic__Go_Go_posMem(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 1);
x_9 = lean_ctor_get(x_1, 0);
x_10 = lean_ctor_get(x_1, 1);
x_11 = lean_ctor_get(x_4, 0);
x_12 = lean_ctor_get(x_4, 1);
x_13 = lean_nat_dec_eq(x_9, x_11);
if (x_13 == 0)
{
x_6 = x_13;
goto block_8;
}
else
{
uint8_t x_14; 
x_14 = lean_nat_dec_eq(x_10, x_12);
x_6 = x_14;
goto block_8;
}
block_8:
{
if (x_6 == 0)
{
x_2 = x_5;
goto _start;
}
else
{
return x_6;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_posMem___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lp_SoftwareLogic__Go_Go_posMem(x_1, x_2);
lean_dec(x_2);
lean_dec_ref(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_insertPos(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = lp_SoftwareLogic__Go_Go_posMem(x_1, x_2);
if (x_3 == 0)
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
return x_4;
}
else
{
lean_dec_ref(x_1);
return x_2;
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_foldl___at___00Go_insertManyPos_spec__0(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
lean_dec_ref(x_2);
x_5 = lp_SoftwareLogic__Go_Go_insertPos(x_3, x_1);
x_1 = x_5;
x_2 = x_4;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_insertManyPos(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lp_SoftwareLogic__Go_List_foldl___at___00Go_insertManyPos_spec__0(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_filterTR_loop___at___00Go_sameStoneNeighbors_spec__0(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_5; 
x_5 = l_List_reverse___redArg(x_4);
return x_5;
}
else
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_3);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_ctor_get(x_3, 0);
x_8 = lean_ctor_get(x_3, 1);
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
x_10 = lp_SoftwareLogic__Go_Go_stoneAt_x3f(x_9, x_7);
if (lean_obj_tag(x_10) == 0)
{
lean_free_object(x_3);
lean_dec(x_7);
x_3 = x_8;
goto _start;
}
else
{
lean_object* x_12; uint8_t x_13; uint8_t x_14; 
x_12 = lean_ctor_get(x_10, 0);
lean_inc(x_12);
lean_dec_ref(x_10);
x_13 = lean_unbox(x_12);
lean_dec(x_12);
x_14 = lp_SoftwareLogic__Go_Go_instBEqStone_beq(x_13, x_2);
if (x_14 == 0)
{
lean_free_object(x_3);
lean_dec(x_7);
x_3 = x_8;
goto _start;
}
else
{
lean_ctor_set(x_3, 1, x_4);
{
lean_object* _tmp_2 = x_8;
lean_object* _tmp_3 = x_3;
x_3 = _tmp_2;
x_4 = _tmp_3;
}
goto _start;
}
}
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_17 = lean_ctor_get(x_3, 0);
x_18 = lean_ctor_get(x_3, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_3);
x_19 = lean_ctor_get(x_1, 1);
lean_inc(x_17);
x_20 = lp_SoftwareLogic__Go_Go_stoneAt_x3f(x_19, x_17);
if (lean_obj_tag(x_20) == 0)
{
lean_dec(x_17);
x_3 = x_18;
goto _start;
}
else
{
lean_object* x_22; uint8_t x_23; uint8_t x_24; 
x_22 = lean_ctor_get(x_20, 0);
lean_inc(x_22);
lean_dec_ref(x_20);
x_23 = lean_unbox(x_22);
lean_dec(x_22);
x_24 = lp_SoftwareLogic__Go_Go_instBEqStone_beq(x_23, x_2);
if (x_24 == 0)
{
lean_dec(x_17);
x_3 = x_18;
goto _start;
}
else
{
lean_object* x_26; 
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_17);
lean_ctor_set(x_26, 1, x_4);
x_3 = x_18;
x_4 = x_26;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_filterTR_loop___at___00Go_sameStoneNeighbors_spec__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_2);
x_6 = lp_SoftwareLogic__Go_List_filterTR_loop___at___00Go_sameStoneNeighbors_spec__0(x_1, x_5, x_3, x_4);
lean_dec_ref(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_sameStoneNeighbors(lean_object* x_1, uint8_t x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lp_SoftwareLogic__Go_Go_neighbors(x_4, x_3);
x_6 = lean_box(0);
x_7 = lp_SoftwareLogic__Go_List_filterTR_loop___at___00Go_sameStoneNeighbors_spec__0(x_1, x_2, x_5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_sameStoneNeighbors___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lean_unbox(x_2);
x_5 = lp_SoftwareLogic__Go_Go_sameStoneNeighbors(x_1, x_4, x_3);
lean_dec_ref(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_groupFromAux(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_eq(x_3, x_6);
if (x_7 == 1)
{
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
else
{
if (lean_obj_tag(x_4) == 0)
{
lean_dec(x_3);
return x_5;
}
else
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_4);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_9 = lean_ctor_get(x_4, 0);
x_10 = lean_ctor_get(x_4, 1);
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_sub(x_3, x_11);
lean_dec(x_3);
x_13 = lp_SoftwareLogic__Go_Go_posMem(x_9, x_5);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
lean_inc(x_9);
x_14 = lp_SoftwareLogic__Go_Go_sameStoneNeighbors(x_1, x_2, x_9);
x_15 = lp_SoftwareLogic__Go_List_foldl___at___00Go_insertManyPos_spec__0(x_10, x_14);
lean_ctor_set(x_4, 1, x_5);
{
lean_object* _tmp_2 = x_12;
lean_object* _tmp_3 = x_15;
lean_object* _tmp_4 = x_4;
x_3 = _tmp_2;
x_4 = _tmp_3;
x_5 = _tmp_4;
}
goto _start;
}
else
{
lean_free_object(x_4);
lean_dec(x_9);
x_3 = x_12;
x_4 = x_10;
goto _start;
}
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_18 = lean_ctor_get(x_4, 0);
x_19 = lean_ctor_get(x_4, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_4);
x_20 = lean_unsigned_to_nat(1u);
x_21 = lean_nat_sub(x_3, x_20);
lean_dec(x_3);
x_22 = lp_SoftwareLogic__Go_Go_posMem(x_18, x_5);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
lean_inc(x_18);
x_23 = lp_SoftwareLogic__Go_Go_sameStoneNeighbors(x_1, x_2, x_18);
x_24 = lp_SoftwareLogic__Go_List_foldl___at___00Go_insertManyPos_spec__0(x_19, x_23);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_18);
lean_ctor_set(x_25, 1, x_5);
x_3 = x_21;
x_4 = x_24;
x_5 = x_25;
goto _start;
}
else
{
lean_dec(x_18);
x_3 = x_21;
x_4 = x_19;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_groupFromAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = lean_unbox(x_2);
x_7 = lp_SoftwareLogic__Go_Go_groupFromAux(x_1, x_6, x_3, x_4, x_5);
lean_dec_ref(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_groupFrom_x3f(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_1, 1);
lean_inc_ref(x_2);
x_5 = lp_SoftwareLogic__Go_Go_stoneAt_x3f(x_4, x_2);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; 
lean_dec_ref(x_2);
x_6 = lean_box(0);
return x_6;
}
else
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_5);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; lean_object* x_15; 
x_8 = lean_ctor_get(x_5, 0);
x_9 = lean_nat_mul(x_3, x_3);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_9, x_10);
lean_dec(x_9);
x_12 = lean_box(0);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_2);
lean_ctor_set(x_13, 1, x_12);
x_14 = lean_unbox(x_8);
lean_dec(x_8);
x_15 = lp_SoftwareLogic__Go_Go_groupFromAux(x_1, x_14, x_11, x_13, x_12);
lean_ctor_set(x_5, 0, x_15);
return x_5;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; lean_object* x_23; lean_object* x_24; 
x_16 = lean_ctor_get(x_5, 0);
lean_inc(x_16);
lean_dec(x_5);
x_17 = lean_nat_mul(x_3, x_3);
x_18 = lean_unsigned_to_nat(1u);
x_19 = lean_nat_add(x_17, x_18);
lean_dec(x_17);
x_20 = lean_box(0);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_2);
lean_ctor_set(x_21, 1, x_20);
x_22 = lean_unbox(x_16);
lean_dec(x_16);
x_23 = lp_SoftwareLogic__Go_Go_groupFromAux(x_1, x_22, x_19, x_21, x_20);
x_24 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_24, 0, x_23);
return x_24;
}
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_groupFrom_x3f___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lp_SoftwareLogic__Go_Go_groupFrom_x3f(x_1, x_2);
lean_dec_ref(x_1);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_SoftwareLogic__Go_Go_Board(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_SoftwareLogic__Go_Go_Group(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_SoftwareLogic__Go_Go_Board(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
