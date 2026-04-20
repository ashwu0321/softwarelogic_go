// Lean compiler output
// Module: Go.Move
// Imports: public import Init public meta import Init public import Go.Capture
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
lean_object* lp_SoftwareLogic__Go_Go_resolvePlacement_x3f(lean_object*, lean_object*);
lean_object* lp_SoftwareLogic__Go_Go_groupHasLiberties_x3f(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_SoftwareLogic__Go_Go_legalPlaceBasic(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_legalPlaceBasic___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_SoftwareLogic__Go_Go_legalPlaceNoSuicide(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_legalPlaceNoSuicide___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_SoftwareLogic__Go_Go_legalMove(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_legalMove___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_SoftwareLogic__Go_Go_legalPlaceBasic(lean_object* v_st_1_, lean_object* v_p_2_){
_start:
{
lean_object* v_size_3_; lean_object* v_board_4_; uint8_t v___x_5_; 
v_size_3_ = lean_ctor_get(v_st_1_, 0);
v_board_4_ = lean_ctor_get(v_st_1_, 1);
v___x_5_ = lp_SoftwareLogic__Go_Go_inBounds(v_size_3_, v_p_2_);
if (v___x_5_ == 0)
{
lean_dec_ref(v_p_2_);
return v___x_5_;
}
else
{
uint8_t v___x_6_; 
v___x_6_ = lp_SoftwareLogic__Go_Go_isEmptyAt(v_board_4_, v_p_2_);
return v___x_6_;
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_legalPlaceBasic___boxed(lean_object* v_st_7_, lean_object* v_p_8_){
_start:
{
uint8_t v_res_9_; lean_object* v_r_10_; 
v_res_9_ = lp_SoftwareLogic__Go_Go_legalPlaceBasic(v_st_7_, v_p_8_);
lean_dec_ref(v_st_7_);
v_r_10_ = lean_box(v_res_9_);
return v_r_10_;
}
}
LEAN_EXPORT uint8_t lp_SoftwareLogic__Go_Go_legalPlaceNoSuicide(lean_object* v_st_11_, lean_object* v_p_12_){
_start:
{
uint8_t v___x_13_; 
lean_inc_ref(v_p_12_);
v___x_13_ = lp_SoftwareLogic__Go_Go_legalPlaceBasic(v_st_11_, v_p_12_);
if (v___x_13_ == 0)
{
lean_dec_ref(v_p_12_);
lean_dec_ref(v_st_11_);
return v___x_13_;
}
else
{
uint8_t v___x_14_; lean_object* v___x_15_; 
v___x_14_ = 0;
lean_inc_ref(v_p_12_);
v___x_15_ = lp_SoftwareLogic__Go_Go_resolvePlacement_x3f(v_st_11_, v_p_12_);
if (lean_obj_tag(v___x_15_) == 0)
{
lean_dec_ref(v_p_12_);
return v___x_14_;
}
else
{
lean_object* v_val_16_; lean_object* v___x_17_; 
v_val_16_ = lean_ctor_get(v___x_15_, 0);
lean_inc(v_val_16_);
lean_dec_ref(v___x_15_);
v___x_17_ = lp_SoftwareLogic__Go_Go_groupHasLiberties_x3f(v_val_16_, v_p_12_);
lean_dec(v_val_16_);
if (lean_obj_tag(v___x_17_) == 0)
{
return v___x_14_;
}
else
{
lean_object* v_val_18_; uint8_t v___x_19_; 
v_val_18_ = lean_ctor_get(v___x_17_, 0);
lean_inc(v_val_18_);
lean_dec_ref(v___x_17_);
v___x_19_ = lean_unbox(v_val_18_);
lean_dec(v_val_18_);
return v___x_19_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_legalPlaceNoSuicide___boxed(lean_object* v_st_20_, lean_object* v_p_21_){
_start:
{
uint8_t v_res_22_; lean_object* v_r_23_; 
v_res_22_ = lp_SoftwareLogic__Go_Go_legalPlaceNoSuicide(v_st_20_, v_p_21_);
v_r_23_ = lean_box(v_res_22_);
return v_r_23_;
}
}
LEAN_EXPORT uint8_t lp_SoftwareLogic__Go_Go_legalMove(lean_object* v_st_24_, lean_object* v_x_25_){
_start:
{
if (lean_obj_tag(v_x_25_) == 0)
{
lean_object* v_p_26_; uint8_t v___x_27_; 
v_p_26_ = lean_ctor_get(v_x_25_, 0);
lean_inc_ref(v_p_26_);
lean_dec_ref(v_x_25_);
v___x_27_ = lp_SoftwareLogic__Go_Go_legalPlaceNoSuicide(v_st_24_, v_p_26_);
return v___x_27_;
}
else
{
uint8_t v___x_28_; 
lean_dec_ref(v_st_24_);
v___x_28_ = 1;
return v___x_28_;
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_legalMove___boxed(lean_object* v_st_29_, lean_object* v_x_30_){
_start:
{
uint8_t v_res_31_; lean_object* v_r_32_; 
v_res_31_ = lp_SoftwareLogic__Go_Go_legalMove(v_st_29_, v_x_30_);
v_r_32_ = lean_box(v_res_31_);
return v_r_32_;
}
}
lean_object* initialize_Init(uint8_t builtin);
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
