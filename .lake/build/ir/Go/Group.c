// Lean compiler output
// Module: Go.Group
// Imports: public import Init public meta import Init public import Go.Board
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
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lp_SoftwareLogic__Go_Go_neighbors(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* lp_SoftwareLogic__Go_Go_stoneAt_x3f(lean_object*, lean_object*);
uint8_t lp_SoftwareLogic__Go_Go_instBEqStone_beq(uint8_t, uint8_t);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_SoftwareLogic__Go_Go_posMem(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_posMem___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_insertPos(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_foldl___at___00Go_insertManyPos_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_insertManyPos(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_filterTR_loop___at___00Go_sameStoneNeighbors_spec__0(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_filterTR_loop___at___00Go_sameStoneNeighbors_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_sameStoneNeighbors(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_sameStoneNeighbors___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_groupFromAux(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_groupFromAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_groupFrom_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_groupFrom_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_SoftwareLogic__Go_Go_posMem(lean_object* v_p_1_, lean_object* v_x_2_){
_start:
{
if (lean_obj_tag(v_x_2_) == 0)
{
uint8_t v___x_3_; 
v___x_3_ = 0;
return v___x_3_;
}
else
{
lean_object* v_head_4_; lean_object* v_tail_5_; uint8_t v___y_7_; lean_object* v_fst_9_; lean_object* v_snd_10_; lean_object* v_fst_11_; lean_object* v_snd_12_; uint8_t v___x_13_; 
v_head_4_ = lean_ctor_get(v_x_2_, 0);
v_tail_5_ = lean_ctor_get(v_x_2_, 1);
v_fst_9_ = lean_ctor_get(v_p_1_, 0);
v_snd_10_ = lean_ctor_get(v_p_1_, 1);
v_fst_11_ = lean_ctor_get(v_head_4_, 0);
v_snd_12_ = lean_ctor_get(v_head_4_, 1);
v___x_13_ = lean_nat_dec_eq(v_fst_9_, v_fst_11_);
if (v___x_13_ == 0)
{
v___y_7_ = v___x_13_;
goto v___jp_6_;
}
else
{
uint8_t v___x_14_; 
v___x_14_ = lean_nat_dec_eq(v_snd_10_, v_snd_12_);
v___y_7_ = v___x_14_;
goto v___jp_6_;
}
v___jp_6_:
{
if (v___y_7_ == 0)
{
v_x_2_ = v_tail_5_;
goto _start;
}
else
{
return v___y_7_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_posMem___boxed(lean_object* v_p_15_, lean_object* v_x_16_){
_start:
{
uint8_t v_res_17_; lean_object* v_r_18_; 
v_res_17_ = lp_SoftwareLogic__Go_Go_posMem(v_p_15_, v_x_16_);
lean_dec(v_x_16_);
lean_dec_ref(v_p_15_);
v_r_18_ = lean_box(v_res_17_);
return v_r_18_;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_insertPos(lean_object* v_p_19_, lean_object* v_xs_20_){
_start:
{
uint8_t v___x_21_; 
v___x_21_ = lp_SoftwareLogic__Go_Go_posMem(v_p_19_, v_xs_20_);
if (v___x_21_ == 0)
{
lean_object* v___x_22_; 
v___x_22_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_22_, 0, v_p_19_);
lean_ctor_set(v___x_22_, 1, v_xs_20_);
return v___x_22_;
}
else
{
lean_dec_ref(v_p_19_);
return v_xs_20_;
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_foldl___at___00Go_insertManyPos_spec__0(lean_object* v_x_23_, lean_object* v_x_24_){
_start:
{
if (lean_obj_tag(v_x_24_) == 0)
{
return v_x_23_;
}
else
{
lean_object* v_head_25_; lean_object* v_tail_26_; lean_object* v___x_27_; 
v_head_25_ = lean_ctor_get(v_x_24_, 0);
lean_inc(v_head_25_);
v_tail_26_ = lean_ctor_get(v_x_24_, 1);
lean_inc(v_tail_26_);
lean_dec_ref(v_x_24_);
v___x_27_ = lp_SoftwareLogic__Go_Go_insertPos(v_head_25_, v_x_23_);
v_x_23_ = v___x_27_;
v_x_24_ = v_tail_26_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_insertManyPos(lean_object* v_ps_29_, lean_object* v_xs_30_){
_start:
{
lean_object* v___x_31_; 
v___x_31_ = lp_SoftwareLogic__Go_List_foldl___at___00Go_insertManyPos_spec__0(v_xs_30_, v_ps_29_);
return v___x_31_;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_filterTR_loop___at___00Go_sameStoneNeighbors_spec__0(lean_object* v_st_32_, uint8_t v_s_33_, lean_object* v_a_34_, lean_object* v_a_35_){
_start:
{
if (lean_obj_tag(v_a_34_) == 0)
{
lean_object* v___x_36_; 
v___x_36_ = l_List_reverse___redArg(v_a_35_);
return v___x_36_;
}
else
{
lean_object* v_head_37_; lean_object* v_tail_38_; lean_object* v___x_40_; uint8_t v_isShared_41_; uint8_t v_isSharedCheck_53_; 
v_head_37_ = lean_ctor_get(v_a_34_, 0);
v_tail_38_ = lean_ctor_get(v_a_34_, 1);
v_isSharedCheck_53_ = !lean_is_exclusive(v_a_34_);
if (v_isSharedCheck_53_ == 0)
{
v___x_40_ = v_a_34_;
v_isShared_41_ = v_isSharedCheck_53_;
goto v_resetjp_39_;
}
else
{
lean_inc(v_tail_38_);
lean_inc(v_head_37_);
lean_dec(v_a_34_);
v___x_40_ = lean_box(0);
v_isShared_41_ = v_isSharedCheck_53_;
goto v_resetjp_39_;
}
v_resetjp_39_:
{
lean_object* v_board_42_; lean_object* v___x_43_; 
v_board_42_ = lean_ctor_get(v_st_32_, 1);
lean_inc(v_head_37_);
v___x_43_ = lp_SoftwareLogic__Go_Go_stoneAt_x3f(v_board_42_, v_head_37_);
if (lean_obj_tag(v___x_43_) == 0)
{
lean_del_object(v___x_40_);
lean_dec(v_head_37_);
v_a_34_ = v_tail_38_;
goto _start;
}
else
{
lean_object* v_val_45_; uint8_t v___x_46_; uint8_t v___x_47_; 
v_val_45_ = lean_ctor_get(v___x_43_, 0);
lean_inc(v_val_45_);
lean_dec_ref(v___x_43_);
v___x_46_ = lean_unbox(v_val_45_);
lean_dec(v_val_45_);
v___x_47_ = lp_SoftwareLogic__Go_Go_instBEqStone_beq(v___x_46_, v_s_33_);
if (v___x_47_ == 0)
{
lean_del_object(v___x_40_);
lean_dec(v_head_37_);
v_a_34_ = v_tail_38_;
goto _start;
}
else
{
lean_object* v___x_50_; 
if (v_isShared_41_ == 0)
{
lean_ctor_set(v___x_40_, 1, v_a_35_);
v___x_50_ = v___x_40_;
goto v_reusejp_49_;
}
else
{
lean_object* v_reuseFailAlloc_52_; 
v_reuseFailAlloc_52_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_52_, 0, v_head_37_);
lean_ctor_set(v_reuseFailAlloc_52_, 1, v_a_35_);
v___x_50_ = v_reuseFailAlloc_52_;
goto v_reusejp_49_;
}
v_reusejp_49_:
{
v_a_34_ = v_tail_38_;
v_a_35_ = v___x_50_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_filterTR_loop___at___00Go_sameStoneNeighbors_spec__0___boxed(lean_object* v_st_54_, lean_object* v_s_55_, lean_object* v_a_56_, lean_object* v_a_57_){
_start:
{
uint8_t v_s_boxed_58_; lean_object* v_res_59_; 
v_s_boxed_58_ = lean_unbox(v_s_55_);
v_res_59_ = lp_SoftwareLogic__Go_List_filterTR_loop___at___00Go_sameStoneNeighbors_spec__0(v_st_54_, v_s_boxed_58_, v_a_56_, v_a_57_);
lean_dec_ref(v_st_54_);
return v_res_59_;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_sameStoneNeighbors(lean_object* v_st_60_, uint8_t v_s_61_, lean_object* v_p_62_){
_start:
{
lean_object* v_size_63_; lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; 
v_size_63_ = lean_ctor_get(v_st_60_, 0);
v___x_64_ = lp_SoftwareLogic__Go_Go_neighbors(v_size_63_, v_p_62_);
v___x_65_ = lean_box(0);
v___x_66_ = lp_SoftwareLogic__Go_List_filterTR_loop___at___00Go_sameStoneNeighbors_spec__0(v_st_60_, v_s_61_, v___x_64_, v___x_65_);
return v___x_66_;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_sameStoneNeighbors___boxed(lean_object* v_st_67_, lean_object* v_s_68_, lean_object* v_p_69_){
_start:
{
uint8_t v_s_boxed_70_; lean_object* v_res_71_; 
v_s_boxed_70_ = lean_unbox(v_s_68_);
v_res_71_ = lp_SoftwareLogic__Go_Go_sameStoneNeighbors(v_st_67_, v_s_boxed_70_, v_p_69_);
lean_dec_ref(v_st_67_);
return v_res_71_;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_groupFromAux(lean_object* v_st_72_, uint8_t v_s_73_, lean_object* v_fuel_74_, lean_object* v_frontier_75_, lean_object* v_seen_76_){
_start:
{
lean_object* v_zero_77_; uint8_t v_isZero_78_; 
v_zero_77_ = lean_unsigned_to_nat(0u);
v_isZero_78_ = lean_nat_dec_eq(v_fuel_74_, v_zero_77_);
if (v_isZero_78_ == 1)
{
lean_dec(v_frontier_75_);
lean_dec(v_fuel_74_);
return v_seen_76_;
}
else
{
if (lean_obj_tag(v_frontier_75_) == 0)
{
lean_dec(v_fuel_74_);
return v_seen_76_;
}
else
{
lean_object* v_head_79_; lean_object* v_tail_80_; lean_object* v___x_82_; uint8_t v_isShared_83_; uint8_t v_isSharedCheck_94_; 
v_head_79_ = lean_ctor_get(v_frontier_75_, 0);
v_tail_80_ = lean_ctor_get(v_frontier_75_, 1);
v_isSharedCheck_94_ = !lean_is_exclusive(v_frontier_75_);
if (v_isSharedCheck_94_ == 0)
{
v___x_82_ = v_frontier_75_;
v_isShared_83_ = v_isSharedCheck_94_;
goto v_resetjp_81_;
}
else
{
lean_inc(v_tail_80_);
lean_inc(v_head_79_);
lean_dec(v_frontier_75_);
v___x_82_ = lean_box(0);
v_isShared_83_ = v_isSharedCheck_94_;
goto v_resetjp_81_;
}
v_resetjp_81_:
{
lean_object* v_one_84_; lean_object* v_n_85_; uint8_t v___x_86_; 
v_one_84_ = lean_unsigned_to_nat(1u);
v_n_85_ = lean_nat_sub(v_fuel_74_, v_one_84_);
lean_dec(v_fuel_74_);
v___x_86_ = lp_SoftwareLogic__Go_Go_posMem(v_head_79_, v_seen_76_);
if (v___x_86_ == 0)
{
lean_object* v_nbrs_87_; lean_object* v_newFrontier_88_; lean_object* v_newSeen_90_; 
lean_inc(v_head_79_);
v_nbrs_87_ = lp_SoftwareLogic__Go_Go_sameStoneNeighbors(v_st_72_, v_s_73_, v_head_79_);
v_newFrontier_88_ = lp_SoftwareLogic__Go_List_foldl___at___00Go_insertManyPos_spec__0(v_tail_80_, v_nbrs_87_);
if (v_isShared_83_ == 0)
{
lean_ctor_set(v___x_82_, 1, v_seen_76_);
v_newSeen_90_ = v___x_82_;
goto v_reusejp_89_;
}
else
{
lean_object* v_reuseFailAlloc_92_; 
v_reuseFailAlloc_92_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_92_, 0, v_head_79_);
lean_ctor_set(v_reuseFailAlloc_92_, 1, v_seen_76_);
v_newSeen_90_ = v_reuseFailAlloc_92_;
goto v_reusejp_89_;
}
v_reusejp_89_:
{
v_fuel_74_ = v_n_85_;
v_frontier_75_ = v_newFrontier_88_;
v_seen_76_ = v_newSeen_90_;
goto _start;
}
}
else
{
lean_del_object(v___x_82_);
lean_dec(v_head_79_);
v_fuel_74_ = v_n_85_;
v_frontier_75_ = v_tail_80_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_groupFromAux___boxed(lean_object* v_st_95_, lean_object* v_s_96_, lean_object* v_fuel_97_, lean_object* v_frontier_98_, lean_object* v_seen_99_){
_start:
{
uint8_t v_s_boxed_100_; lean_object* v_res_101_; 
v_s_boxed_100_ = lean_unbox(v_s_96_);
v_res_101_ = lp_SoftwareLogic__Go_Go_groupFromAux(v_st_95_, v_s_boxed_100_, v_fuel_97_, v_frontier_98_, v_seen_99_);
lean_dec_ref(v_st_95_);
return v_res_101_;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_groupFrom_x3f(lean_object* v_st_102_, lean_object* v_start_103_){
_start:
{
lean_object* v_size_104_; lean_object* v_board_105_; lean_object* v___x_106_; 
v_size_104_ = lean_ctor_get(v_st_102_, 0);
v_board_105_ = lean_ctor_get(v_st_102_, 1);
lean_inc_ref(v_start_103_);
v___x_106_ = lp_SoftwareLogic__Go_Go_stoneAt_x3f(v_board_105_, v_start_103_);
if (lean_obj_tag(v___x_106_) == 0)
{
lean_object* v___x_107_; 
lean_dec_ref(v_start_103_);
v___x_107_ = lean_box(0);
return v___x_107_;
}
else
{
lean_object* v_val_108_; lean_object* v___x_110_; uint8_t v_isShared_111_; uint8_t v_isSharedCheck_122_; 
v_val_108_ = lean_ctor_get(v___x_106_, 0);
v_isSharedCheck_122_ = !lean_is_exclusive(v___x_106_);
if (v_isSharedCheck_122_ == 0)
{
v___x_110_ = v___x_106_;
v_isShared_111_ = v_isSharedCheck_122_;
goto v_resetjp_109_;
}
else
{
lean_inc(v_val_108_);
lean_dec(v___x_106_);
v___x_110_ = lean_box(0);
v_isShared_111_ = v_isSharedCheck_122_;
goto v_resetjp_109_;
}
v_resetjp_109_:
{
lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v_fuel_114_; lean_object* v___x_115_; lean_object* v___x_116_; uint8_t v___x_117_; lean_object* v___x_118_; lean_object* v___x_120_; 
v___x_112_ = lean_nat_mul(v_size_104_, v_size_104_);
v___x_113_ = lean_unsigned_to_nat(1u);
v_fuel_114_ = lean_nat_add(v___x_112_, v___x_113_);
lean_dec(v___x_112_);
v___x_115_ = lean_box(0);
v___x_116_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_116_, 0, v_start_103_);
lean_ctor_set(v___x_116_, 1, v___x_115_);
v___x_117_ = lean_unbox(v_val_108_);
lean_dec(v_val_108_);
v___x_118_ = lp_SoftwareLogic__Go_Go_groupFromAux(v_st_102_, v___x_117_, v_fuel_114_, v___x_116_, v___x_115_);
if (v_isShared_111_ == 0)
{
lean_ctor_set(v___x_110_, 0, v___x_118_);
v___x_120_ = v___x_110_;
goto v_reusejp_119_;
}
else
{
lean_object* v_reuseFailAlloc_121_; 
v_reuseFailAlloc_121_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_121_, 0, v___x_118_);
v___x_120_ = v_reuseFailAlloc_121_;
goto v_reusejp_119_;
}
v_reusejp_119_:
{
return v___x_120_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_groupFrom_x3f___boxed(lean_object* v_st_123_, lean_object* v_start_124_){
_start:
{
lean_object* v_res_125_; 
v_res_125_ = lp_SoftwareLogic__Go_Go_groupFrom_x3f(v_st_123_, v_start_124_);
lean_dec_ref(v_st_123_);
return v_res_125_;
}
}
lean_object* initialize_Init(uint8_t builtin);
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
