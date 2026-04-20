// Lean compiler output
// Module: Go.Capture
// Imports: public import Init public meta import Init public import Go.Liberty
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
lean_object* lp_SoftwareLogic__Go_Go_groupFrom_x3f(lean_object*, lean_object*);
lean_object* lp_SoftwareLogic__Go_Go_libertiesOfGroup(lean_object*, lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* lp_SoftwareLogic__Go_Go_placeStone_x3f(lean_object*, lean_object*);
uint8_t lp_SoftwareLogic__Go_Go_Stone_other(uint8_t);
lean_object* lp_SoftwareLogic__Go_Go_neighbors(lean_object*, lean_object*);
lean_object* lp_SoftwareLogic__Go_List_filterTR_loop___at___00Go_sameStoneNeighbors_spec__0(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_foldl___at___00Go_removePositions_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_removePositions(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_enemyNeighbors(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_enemyNeighbors___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_foldl___at___00Go_captureAround_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_foldl___at___00Go_captureAround_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_captureAround(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_resolvePlacement_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_foldl___at___00Go_removePositions_spec__0(lean_object* v_x_1_, lean_object* v_x_2_){
_start:
{
if (lean_obj_tag(v_x_2_) == 0)
{
return v_x_1_;
}
else
{
lean_object* v_head_3_; lean_object* v_tail_4_; lean_object* v___x_5_; lean_object* v___x_6_; 
v_head_3_ = lean_ctor_get(v_x_2_, 0);
lean_inc(v_head_3_);
v_tail_4_ = lean_ctor_get(v_x_2_, 1);
lean_inc(v_tail_4_);
lean_dec_ref(v_x_2_);
v___x_5_ = lean_box(0);
lean_inc(v_x_1_);
v___x_6_ = lp_SoftwareLogic__Go_Go_boardSet_x3f(v_x_1_, v_head_3_, v___x_5_);
if (lean_obj_tag(v___x_6_) == 0)
{
v_x_2_ = v_tail_4_;
goto _start;
}
else
{
lean_object* v_val_8_; 
lean_dec(v_x_1_);
v_val_8_ = lean_ctor_get(v___x_6_, 0);
lean_inc(v_val_8_);
lean_dec_ref(v___x_6_);
v_x_1_ = v_val_8_;
v_x_2_ = v_tail_4_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_removePositions(lean_object* v_b_10_, lean_object* v_ps_11_){
_start:
{
lean_object* v___x_12_; 
v___x_12_ = lp_SoftwareLogic__Go_List_foldl___at___00Go_removePositions_spec__0(v_b_10_, v_ps_11_);
return v___x_12_;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_enemyNeighbors(lean_object* v_st_13_, lean_object* v_p_14_){
_start:
{
lean_object* v_size_15_; uint8_t v_turn_16_; uint8_t v_enemy_17_; lean_object* v___x_18_; lean_object* v___x_19_; lean_object* v___x_20_; 
v_size_15_ = lean_ctor_get(v_st_13_, 0);
v_turn_16_ = lean_ctor_get_uint8(v_st_13_, sizeof(void*)*2);
v_enemy_17_ = lp_SoftwareLogic__Go_Go_Stone_other(v_turn_16_);
v___x_18_ = lp_SoftwareLogic__Go_Go_neighbors(v_size_15_, v_p_14_);
v___x_19_ = lean_box(0);
v___x_20_ = lp_SoftwareLogic__Go_List_filterTR_loop___at___00Go_sameStoneNeighbors_spec__0(v_st_13_, v_enemy_17_, v___x_18_, v___x_19_);
return v___x_20_;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_enemyNeighbors___boxed(lean_object* v_st_21_, lean_object* v_p_22_){
_start:
{
lean_object* v_res_23_; 
v_res_23_ = lp_SoftwareLogic__Go_Go_enemyNeighbors(v_st_21_, v_p_22_);
lean_dec_ref(v_st_21_);
return v_res_23_;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_foldl___at___00Go_captureAround_spec__0(lean_object* v_st_24_, lean_object* v_x_25_, lean_object* v_x_26_){
_start:
{
if (lean_obj_tag(v_x_26_) == 0)
{
return v_x_25_;
}
else
{
lean_object* v_head_27_; lean_object* v_tail_28_; lean_object* v_size_29_; uint8_t v_turn_30_; lean_object* v_tempState_31_; lean_object* v___x_32_; 
v_head_27_ = lean_ctor_get(v_x_26_, 0);
lean_inc(v_head_27_);
v_tail_28_ = lean_ctor_get(v_x_26_, 1);
lean_inc(v_tail_28_);
lean_dec_ref(v_x_26_);
v_size_29_ = lean_ctor_get(v_st_24_, 0);
v_turn_30_ = lean_ctor_get_uint8(v_st_24_, sizeof(void*)*2);
lean_inc(v_x_25_);
lean_inc(v_size_29_);
v_tempState_31_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_tempState_31_, 0, v_size_29_);
lean_ctor_set(v_tempState_31_, 1, v_x_25_);
lean_ctor_set_uint8(v_tempState_31_, sizeof(void*)*2, v_turn_30_);
v___x_32_ = lp_SoftwareLogic__Go_Go_groupFrom_x3f(v_tempState_31_, v_head_27_);
if (lean_obj_tag(v___x_32_) == 0)
{
lean_dec_ref(v_tempState_31_);
v_x_26_ = v_tail_28_;
goto _start;
}
else
{
lean_object* v_val_34_; lean_object* v_libs_35_; uint8_t v___x_36_; 
v_val_34_ = lean_ctor_get(v___x_32_, 0);
lean_inc_n(v_val_34_, 2);
lean_dec_ref(v___x_32_);
v_libs_35_ = lp_SoftwareLogic__Go_Go_libertiesOfGroup(v_tempState_31_, v_val_34_);
lean_dec_ref(v_tempState_31_);
v___x_36_ = l_List_isEmpty___redArg(v_libs_35_);
lean_dec(v_libs_35_);
if (v___x_36_ == 0)
{
lean_dec(v_val_34_);
v_x_26_ = v_tail_28_;
goto _start;
}
else
{
lean_object* v___x_38_; 
v___x_38_ = lp_SoftwareLogic__Go_List_foldl___at___00Go_removePositions_spec__0(v_x_25_, v_val_34_);
v_x_25_ = v___x_38_;
v_x_26_ = v_tail_28_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_foldl___at___00Go_captureAround_spec__0___boxed(lean_object* v_st_40_, lean_object* v_x_41_, lean_object* v_x_42_){
_start:
{
lean_object* v_res_43_; 
v_res_43_ = lp_SoftwareLogic__Go_List_foldl___at___00Go_captureAround_spec__0(v_st_40_, v_x_41_, v_x_42_);
lean_dec_ref(v_st_40_);
return v_res_43_;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_captureAround(lean_object* v_st_44_, lean_object* v_p_45_){
_start:
{
lean_object* v_size_46_; lean_object* v_board_47_; uint8_t v_turn_48_; lean_object* v_nbrs_49_; lean_object* v_finalBoard_50_; lean_object* v___x_52_; uint8_t v_isShared_53_; uint8_t v_isSharedCheck_57_; 
v_size_46_ = lean_ctor_get(v_st_44_, 0);
lean_inc(v_size_46_);
v_board_47_ = lean_ctor_get(v_st_44_, 1);
v_turn_48_ = lean_ctor_get_uint8(v_st_44_, sizeof(void*)*2);
v_nbrs_49_ = lp_SoftwareLogic__Go_Go_enemyNeighbors(v_st_44_, v_p_45_);
lean_inc(v_board_47_);
v_finalBoard_50_ = lp_SoftwareLogic__Go_List_foldl___at___00Go_captureAround_spec__0(v_st_44_, v_board_47_, v_nbrs_49_);
v_isSharedCheck_57_ = !lean_is_exclusive(v_st_44_);
if (v_isSharedCheck_57_ == 0)
{
lean_object* v_unused_58_; lean_object* v_unused_59_; 
v_unused_58_ = lean_ctor_get(v_st_44_, 1);
lean_dec(v_unused_58_);
v_unused_59_ = lean_ctor_get(v_st_44_, 0);
lean_dec(v_unused_59_);
v___x_52_ = v_st_44_;
v_isShared_53_ = v_isSharedCheck_57_;
goto v_resetjp_51_;
}
else
{
lean_dec(v_st_44_);
v___x_52_ = lean_box(0);
v_isShared_53_ = v_isSharedCheck_57_;
goto v_resetjp_51_;
}
v_resetjp_51_:
{
lean_object* v___x_55_; 
if (v_isShared_53_ == 0)
{
lean_ctor_set(v___x_52_, 1, v_finalBoard_50_);
v___x_55_ = v___x_52_;
goto v_reusejp_54_;
}
else
{
lean_object* v_reuseFailAlloc_56_; 
v_reuseFailAlloc_56_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_56_, 0, v_size_46_);
lean_ctor_set(v_reuseFailAlloc_56_, 1, v_finalBoard_50_);
lean_ctor_set_uint8(v_reuseFailAlloc_56_, sizeof(void*)*2, v_turn_48_);
v___x_55_ = v_reuseFailAlloc_56_;
goto v_reusejp_54_;
}
v_reusejp_54_:
{
return v___x_55_;
}
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_resolvePlacement_x3f(lean_object* v_st_60_, lean_object* v_p_61_){
_start:
{
lean_object* v___x_62_; 
lean_inc_ref(v_p_61_);
v___x_62_ = lp_SoftwareLogic__Go_Go_placeStone_x3f(v_st_60_, v_p_61_);
if (lean_obj_tag(v___x_62_) == 0)
{
lean_dec_ref(v_p_61_);
return v___x_62_;
}
else
{
lean_object* v_val_63_; lean_object* v___x_65_; uint8_t v_isShared_66_; uint8_t v_isSharedCheck_71_; 
v_val_63_ = lean_ctor_get(v___x_62_, 0);
v_isSharedCheck_71_ = !lean_is_exclusive(v___x_62_);
if (v_isSharedCheck_71_ == 0)
{
v___x_65_ = v___x_62_;
v_isShared_66_ = v_isSharedCheck_71_;
goto v_resetjp_64_;
}
else
{
lean_inc(v_val_63_);
lean_dec(v___x_62_);
v___x_65_ = lean_box(0);
v_isShared_66_ = v_isSharedCheck_71_;
goto v_resetjp_64_;
}
v_resetjp_64_:
{
lean_object* v___x_67_; lean_object* v___x_69_; 
v___x_67_ = lp_SoftwareLogic__Go_Go_captureAround(v_val_63_, v_p_61_);
if (v_isShared_66_ == 0)
{
lean_ctor_set(v___x_65_, 0, v___x_67_);
v___x_69_ = v___x_65_;
goto v_reusejp_68_;
}
else
{
lean_object* v_reuseFailAlloc_70_; 
v_reuseFailAlloc_70_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_70_, 0, v___x_67_);
v___x_69_ = v_reuseFailAlloc_70_;
goto v_reusejp_68_;
}
v_reusejp_68_:
{
return v___x_69_;
}
}
}
}
}
lean_object* initialize_Init(uint8_t builtin);
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
