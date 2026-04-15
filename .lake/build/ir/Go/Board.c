// Lean compiler output
// Module: Go.Board
// Imports: public import Init public import Go.Basic
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
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_SoftwareLogic__Go_Go_inBounds(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_inBounds___boxed(lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* l_List_get___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_getAt_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_getAt_x3f___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_getAt_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_getAt_x3f___boxed(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_setAt_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_setAt_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_setAt_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_setAt_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_boardGet_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_boardGet_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_boardSet_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_SoftwareLogic__Go_Go_isEmptyAt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_isEmptyAt___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_stoneAt_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_stoneAt_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_placeStone_x3f(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_filterTR_loop___at___00Go_neighbors_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_filterTR_loop___at___00Go_neighbors_spec__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_neighbors(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_neighbors___boxed(lean_object*, lean_object*);
uint8_t lp_SoftwareLogic__Go_Go_Stone_other(uint8_t);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_switchTurn(lean_object*);
static const lean_string_object lp_SoftwareLogic__Go_Go_boardToStringCell___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* lp_SoftwareLogic__Go_Go_boardToStringCell___closed__0 = (const lean_object*)&lp_SoftwareLogic__Go_Go_boardToStringCell___closed__0_value;
static const lean_string_object lp_SoftwareLogic__Go_Go_boardToStringCell___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "B"};
static const lean_object* lp_SoftwareLogic__Go_Go_boardToStringCell___closed__1 = (const lean_object*)&lp_SoftwareLogic__Go_Go_boardToStringCell___closed__1_value;
static const lean_string_object lp_SoftwareLogic__Go_Go_boardToStringCell___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "W"};
static const lean_object* lp_SoftwareLogic__Go_Go_boardToStringCell___closed__2 = (const lean_object*)&lp_SoftwareLogic__Go_Go_boardToStringCell___closed__2_value;
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_boardToStringCell(lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_boardToStringCell___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_mapTR_loop___at___00Go_rowToString_spec__0(lean_object*, lean_object*);
static const lean_string_object lp_SoftwareLogic__Go_Go_rowToString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* lp_SoftwareLogic__Go_Go_rowToString___closed__0 = (const lean_object*)&lp_SoftwareLogic__Go_Go_rowToString___closed__0_value;
lean_object* l_String_intercalate(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_rowToString(lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_mapTR_loop___at___00Go_boardToString_spec__0(lean_object*, lean_object*);
static const lean_string_object lp_SoftwareLogic__Go_Go_boardToString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* lp_SoftwareLogic__Go_Go_boardToString___closed__0 = (const lean_object*)&lp_SoftwareLogic__Go_Go_boardToString___closed__0_value;
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_boardToString(lean_object*);
LEAN_EXPORT uint8_t lp_SoftwareLogic__Go_Go_inBounds(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_ctor_get(x_2, 1);
x_5 = lean_nat_dec_lt(x_3, x_1);
if (x_5 == 0)
{
return x_5;
}
else
{
uint8_t x_6; 
x_6 = lean_nat_dec_lt(x_4, x_1);
return x_6;
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_inBounds___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lp_SoftwareLogic__Go_Go_inBounds(x_1, x_2);
lean_dec_ref(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_getAt_x3f___redArg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = l_List_lengthTR___redArg(x_1);
x_4 = lean_nat_dec_lt(x_2, x_3);
lean_dec(x_3);
if (x_4 == 0)
{
lean_object* x_5; 
lean_dec(x_2);
x_5 = lean_box(0);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
x_6 = l_List_get___redArg(x_1, x_2);
x_7 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_7, 0, x_6);
return x_7;
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_getAt_x3f___redArg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lp_SoftwareLogic__Go_Go_getAt_x3f___redArg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_getAt_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lp_SoftwareLogic__Go_Go_getAt_x3f___redArg(x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_getAt_x3f___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lp_SoftwareLogic__Go_Go_getAt_x3f(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_setAt_x3f___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; 
lean_dec(x_3);
x_4 = lean_box(0);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_1);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_ctor_get(x_1, 0);
x_7 = lean_ctor_get(x_1, 1);
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_nat_dec_eq(x_2, x_8);
if (x_9 == 1)
{
lean_object* x_10; 
lean_dec(x_6);
lean_ctor_set(x_1, 0, x_3);
x_10 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_10, 0, x_1);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_sub(x_2, x_11);
x_13 = lp_SoftwareLogic__Go_Go_setAt_x3f___redArg(x_7, x_12, x_3);
lean_dec(x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_free_object(x_1);
lean_dec(x_6);
return x_13;
}
else
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; 
x_15 = lean_ctor_get(x_13, 0);
lean_ctor_set(x_1, 1, x_15);
lean_ctor_set(x_13, 0, x_1);
return x_13;
}
else
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_13, 0);
lean_inc(x_16);
lean_dec(x_13);
lean_ctor_set(x_1, 1, x_16);
x_17 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_17, 0, x_1);
return x_17;
}
}
}
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_18 = lean_ctor_get(x_1, 0);
x_19 = lean_ctor_get(x_1, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_1);
x_20 = lean_unsigned_to_nat(0u);
x_21 = lean_nat_dec_eq(x_2, x_20);
if (x_21 == 1)
{
lean_object* x_22; lean_object* x_23; 
lean_dec(x_18);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_3);
lean_ctor_set(x_22, 1, x_19);
x_23 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_23, 0, x_22);
return x_23;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_unsigned_to_nat(1u);
x_25 = lean_nat_sub(x_2, x_24);
x_26 = lp_SoftwareLogic__Go_Go_setAt_x3f___redArg(x_19, x_25, x_3);
lean_dec(x_25);
if (lean_obj_tag(x_26) == 0)
{
lean_dec(x_18);
return x_26;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
if (lean_is_exclusive(x_26)) {
 lean_ctor_release(x_26, 0);
 x_28 = x_26;
} else {
 lean_dec_ref(x_26);
 x_28 = lean_box(0);
}
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_18);
lean_ctor_set(x_29, 1, x_27);
if (lean_is_scalar(x_28)) {
 x_30 = lean_alloc_ctor(1, 1, 0);
} else {
 x_30 = x_28;
}
lean_ctor_set(x_30, 0, x_29);
return x_30;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_setAt_x3f___redArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lp_SoftwareLogic__Go_Go_setAt_x3f___redArg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_setAt_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lp_SoftwareLogic__Go_Go_setAt_x3f___redArg(x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_setAt_x3f___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lp_SoftwareLogic__Go_Go_setAt_x3f(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_boardGet_x3f(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
lean_dec_ref(x_2);
x_5 = lp_SoftwareLogic__Go_Go_getAt_x3f___redArg(x_1, x_3);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; 
lean_dec(x_4);
x_6 = lean_box(0);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_5, 0);
lean_inc(x_7);
lean_dec_ref(x_5);
x_8 = lp_SoftwareLogic__Go_Go_getAt_x3f___redArg(x_7, x_4);
lean_dec(x_7);
return x_8;
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_boardGet_x3f___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lp_SoftwareLogic__Go_Go_boardGet_x3f(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_boardSet_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
lean_dec_ref(x_2);
lean_inc(x_4);
x_6 = lp_SoftwareLogic__Go_Go_getAt_x3f___redArg(x_1, x_4);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_7 = lean_box(0);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_6, 0);
lean_inc(x_8);
lean_dec_ref(x_6);
x_9 = lp_SoftwareLogic__Go_Go_setAt_x3f___redArg(x_8, x_5, x_3);
lean_dec(x_5);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; 
lean_dec(x_4);
lean_dec(x_1);
x_10 = lean_box(0);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_9, 0);
lean_inc(x_11);
lean_dec_ref(x_9);
x_12 = lp_SoftwareLogic__Go_Go_setAt_x3f___redArg(x_1, x_4, x_11);
lean_dec(x_4);
return x_12;
}
}
}
}
LEAN_EXPORT uint8_t lp_SoftwareLogic__Go_Go_isEmptyAt(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lp_SoftwareLogic__Go_Go_boardGet_x3f(x_1, x_2);
if (lean_obj_tag(x_3) == 1)
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec_ref(x_3);
if (lean_obj_tag(x_4) == 0)
{
uint8_t x_5; 
x_5 = 1;
return x_5;
}
else
{
uint8_t x_6; 
lean_dec(x_4);
x_6 = 0;
return x_6;
}
}
else
{
uint8_t x_7; 
lean_dec(x_3);
x_7 = 0;
return x_7;
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_isEmptyAt___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lp_SoftwareLogic__Go_Go_isEmptyAt(x_1, x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_stoneAt_x3f(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lp_SoftwareLogic__Go_Go_boardGet_x3f(x_1, x_2);
if (lean_obj_tag(x_3) == 1)
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec_ref(x_3);
if (lean_obj_tag(x_4) == 1)
{
return x_4;
}
else
{
lean_object* x_5; 
lean_dec(x_4);
x_5 = lean_box(0);
return x_5;
}
}
else
{
lean_object* x_6; 
lean_dec(x_3);
x_6 = lean_box(0);
return x_6;
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_stoneAt_x3f___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lp_SoftwareLogic__Go_Go_stoneAt_x3f(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_placeStone_x3f(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = lean_ctor_get_uint8(x_1, sizeof(void*)*2);
x_7 = lp_SoftwareLogic__Go_Go_inBounds(x_4, x_2);
if (x_7 == 0)
{
lean_object* x_8; 
lean_free_object(x_1);
lean_dec(x_5);
lean_dec(x_4);
lean_dec_ref(x_2);
x_8 = lean_box(0);
return x_8;
}
else
{
uint8_t x_9; 
lean_inc_ref(x_2);
x_9 = lp_SoftwareLogic__Go_Go_isEmptyAt(x_5, x_2);
if (x_9 == 0)
{
lean_object* x_10; 
lean_free_object(x_1);
lean_dec(x_5);
lean_dec(x_4);
lean_dec_ref(x_2);
x_10 = lean_box(0);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_box(x_6);
x_12 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_12, 0, x_11);
x_13 = lp_SoftwareLogic__Go_Go_boardSet_x3f(x_5, x_2, x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; 
lean_free_object(x_1);
lean_dec(x_4);
x_14 = lean_box(0);
return x_14;
}
else
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_13);
if (x_15 == 0)
{
lean_object* x_16; 
x_16 = lean_ctor_get(x_13, 0);
lean_ctor_set(x_1, 1, x_16);
lean_ctor_set(x_13, 0, x_1);
return x_13;
}
else
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_13, 0);
lean_inc(x_17);
lean_dec(x_13);
lean_ctor_set(x_1, 1, x_17);
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_1);
return x_18;
}
}
}
}
}
else
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; uint8_t x_22; 
x_19 = lean_ctor_get(x_1, 0);
x_20 = lean_ctor_get(x_1, 1);
x_21 = lean_ctor_get_uint8(x_1, sizeof(void*)*2);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_1);
x_22 = lp_SoftwareLogic__Go_Go_inBounds(x_19, x_2);
if (x_22 == 0)
{
lean_object* x_23; 
lean_dec(x_20);
lean_dec(x_19);
lean_dec_ref(x_2);
x_23 = lean_box(0);
return x_23;
}
else
{
uint8_t x_24; 
lean_inc_ref(x_2);
x_24 = lp_SoftwareLogic__Go_Go_isEmptyAt(x_20, x_2);
if (x_24 == 0)
{
lean_object* x_25; 
lean_dec(x_20);
lean_dec(x_19);
lean_dec_ref(x_2);
x_25 = lean_box(0);
return x_25;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_box(x_21);
x_27 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_27, 0, x_26);
x_28 = lp_SoftwareLogic__Go_Go_boardSet_x3f(x_20, x_2, x_27);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; 
lean_dec(x_19);
x_29 = lean_box(0);
return x_29;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_30 = lean_ctor_get(x_28, 0);
lean_inc(x_30);
if (lean_is_exclusive(x_28)) {
 lean_ctor_release(x_28, 0);
 x_31 = x_28;
} else {
 lean_dec_ref(x_28);
 x_31 = lean_box(0);
}
x_32 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_32, 0, x_19);
lean_ctor_set(x_32, 1, x_30);
lean_ctor_set_uint8(x_32, sizeof(void*)*2, x_21);
if (lean_is_scalar(x_31)) {
 x_33 = lean_alloc_ctor(1, 1, 0);
} else {
 x_33 = x_31;
}
lean_ctor_set(x_33, 0, x_32);
return x_33;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_filterTR_loop___at___00Go_neighbors_spec__0(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_ctor_get(x_2, 0);
x_7 = lean_ctor_get(x_2, 1);
x_8 = lp_SoftwareLogic__Go_Go_inBounds(x_1, x_6);
if (x_8 == 0)
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
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_ctor_get(x_2, 0);
x_12 = lean_ctor_get(x_2, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_2);
x_13 = lp_SoftwareLogic__Go_Go_inBounds(x_1, x_11);
if (x_13 == 0)
{
lean_dec(x_11);
x_2 = x_12;
goto _start;
}
else
{
lean_object* x_15; 
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_11);
lean_ctor_set(x_15, 1, x_3);
x_2 = x_12;
x_3 = x_15;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_filterTR_loop___at___00Go_neighbors_spec__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lp_SoftwareLogic__Go_List_filterTR_loop___at___00Go_neighbors_spec__0(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_neighbors(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; uint8_t x_20; lean_object* x_21; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_add(x_4, x_6);
lean_inc(x_5);
lean_ctor_set(x_2, 0, x_7);
x_8 = lean_nat_add(x_5, x_6);
lean_inc(x_4);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_4);
lean_ctor_set(x_9, 1, x_8);
x_10 = lean_box(0);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_9);
lean_ctor_set(x_16, 1, x_10);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_2);
lean_ctor_set(x_17, 1, x_16);
x_18 = lean_unsigned_to_nat(0u);
x_19 = lean_nat_dec_lt(x_18, x_4);
x_20 = lean_nat_dec_lt(x_18, x_5);
if (x_19 == 0)
{
x_21 = x_10;
goto block_26;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_nat_sub(x_4, x_6);
lean_inc(x_5);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_5);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_10);
x_21 = x_29;
goto block_26;
}
block_15:
{
lean_object* x_13; lean_object* x_14; 
x_13 = l_List_appendTR___redArg(x_11, x_12);
x_14 = lp_SoftwareLogic__Go_List_filterTR_loop___at___00Go_neighbors_spec__0(x_1, x_13, x_10);
return x_14;
}
block_26:
{
lean_object* x_22; 
x_22 = l_List_appendTR___redArg(x_17, x_21);
if (x_20 == 0)
{
lean_dec(x_5);
lean_dec(x_4);
x_11 = x_22;
x_12 = x_10;
goto block_15;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_nat_sub(x_5, x_6);
lean_dec(x_5);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_4);
lean_ctor_set(x_24, 1, x_23);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_10);
x_11 = x_22;
x_12 = x_25;
goto block_15;
}
}
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_43; lean_object* x_44; lean_object* x_45; uint8_t x_46; uint8_t x_47; lean_object* x_48; 
x_30 = lean_ctor_get(x_2, 0);
x_31 = lean_ctor_get(x_2, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_2);
x_32 = lean_unsigned_to_nat(1u);
x_33 = lean_nat_add(x_30, x_32);
lean_inc(x_31);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_31);
x_35 = lean_nat_add(x_31, x_32);
lean_inc(x_30);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_30);
lean_ctor_set(x_36, 1, x_35);
x_37 = lean_box(0);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_36);
lean_ctor_set(x_43, 1, x_37);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_34);
lean_ctor_set(x_44, 1, x_43);
x_45 = lean_unsigned_to_nat(0u);
x_46 = lean_nat_dec_lt(x_45, x_30);
x_47 = lean_nat_dec_lt(x_45, x_31);
if (x_46 == 0)
{
x_48 = x_37;
goto block_53;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_54 = lean_nat_sub(x_30, x_32);
lean_inc(x_31);
x_55 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_31);
x_56 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_37);
x_48 = x_56;
goto block_53;
}
block_42:
{
lean_object* x_40; lean_object* x_41; 
x_40 = l_List_appendTR___redArg(x_38, x_39);
x_41 = lp_SoftwareLogic__Go_List_filterTR_loop___at___00Go_neighbors_spec__0(x_1, x_40, x_37);
return x_41;
}
block_53:
{
lean_object* x_49; 
x_49 = l_List_appendTR___redArg(x_44, x_48);
if (x_47 == 0)
{
lean_dec(x_31);
lean_dec(x_30);
x_38 = x_49;
x_39 = x_37;
goto block_42;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_nat_sub(x_31, x_32);
lean_dec(x_31);
x_51 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_51, 0, x_30);
lean_ctor_set(x_51, 1, x_50);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_52, 1, x_37);
x_38 = x_49;
x_39 = x_52;
goto block_42;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_neighbors___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lp_SoftwareLogic__Go_Go_neighbors(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_switchTurn(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
uint8_t x_3; uint8_t x_4; 
x_3 = lean_ctor_get_uint8(x_1, sizeof(void*)*2);
x_4 = lp_SoftwareLogic__Go_Go_Stone_other(x_3);
lean_ctor_set_uint8(x_1, sizeof(void*)*2, x_4);
return x_1;
}
else
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; uint8_t x_8; lean_object* x_9; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_ctor_get_uint8(x_1, sizeof(void*)*2);
lean_inc(x_6);
lean_inc(x_5);
lean_dec(x_1);
x_8 = lp_SoftwareLogic__Go_Go_Stone_other(x_7);
x_9 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_9, 0, x_5);
lean_ctor_set(x_9, 1, x_6);
lean_ctor_set_uint8(x_9, sizeof(void*)*2, x_8);
return x_9;
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_boardToStringCell(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = ((lean_object*)(lp_SoftwareLogic__Go_Go_boardToStringCell___closed__0));
return x_2;
}
else
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_unbox(x_3);
if (x_4 == 0)
{
lean_object* x_5; 
x_5 = ((lean_object*)(lp_SoftwareLogic__Go_Go_boardToStringCell___closed__1));
return x_5;
}
else
{
lean_object* x_6; 
x_6 = ((lean_object*)(lp_SoftwareLogic__Go_Go_boardToStringCell___closed__2));
return x_6;
}
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_boardToStringCell___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lp_SoftwareLogic__Go_Go_boardToStringCell(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_mapTR_loop___at___00Go_rowToString_spec__0(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
x_3 = l_List_reverse___redArg(x_2);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = lp_SoftwareLogic__Go_Go_boardToStringCell(x_5);
lean_dec(x_5);
lean_ctor_set(x_1, 1, x_2);
lean_ctor_set(x_1, 0, x_7);
{
lean_object* _tmp_0 = x_6;
lean_object* _tmp_1 = x_1;
x_1 = _tmp_0;
x_2 = _tmp_1;
}
goto _start;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_1, 0);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_1);
x_11 = lp_SoftwareLogic__Go_Go_boardToStringCell(x_9);
lean_dec(x_9);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_2);
x_1 = x_10;
x_2 = x_12;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_rowToString(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = ((lean_object*)(lp_SoftwareLogic__Go_Go_rowToString___closed__0));
x_3 = lean_box(0);
x_4 = lp_SoftwareLogic__Go_List_mapTR_loop___at___00Go_rowToString_spec__0(x_1, x_3);
x_5 = l_String_intercalate(x_2, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_mapTR_loop___at___00Go_boardToString_spec__0(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
x_3 = l_List_reverse___redArg(x_2);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = lp_SoftwareLogic__Go_Go_rowToString(x_5);
lean_ctor_set(x_1, 1, x_2);
lean_ctor_set(x_1, 0, x_7);
{
lean_object* _tmp_0 = x_6;
lean_object* _tmp_1 = x_1;
x_1 = _tmp_0;
x_2 = _tmp_1;
}
goto _start;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_1, 0);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_1);
x_11 = lp_SoftwareLogic__Go_Go_rowToString(x_9);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_2);
x_1 = x_10;
x_2 = x_12;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_boardToString(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = ((lean_object*)(lp_SoftwareLogic__Go_Go_boardToString___closed__0));
x_3 = lean_box(0);
x_4 = lp_SoftwareLogic__Go_List_mapTR_loop___at___00Go_boardToString_spec__0(x_1, x_3);
x_5 = l_String_intercalate(x_2, x_4);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_SoftwareLogic__Go_Go_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_SoftwareLogic__Go_Go_Board(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_SoftwareLogic__Go_Go_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
