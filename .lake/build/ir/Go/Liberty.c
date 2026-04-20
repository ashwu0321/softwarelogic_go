// Lean compiler output
// Module: Go.Liberty
// Imports: public import Init public meta import Init public import Go.Group
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
lean_object* lp_SoftwareLogic__Go_Go_neighbors(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
uint8_t lp_SoftwareLogic__Go_Go_isEmptyAt(lean_object*, lean_object*);
lean_object* lp_SoftwareLogic__Go_List_foldl___at___00Go_insertManyPos_spec__0(lean_object*, lean_object*);
lean_object* lp_SoftwareLogic__Go_Go_groupFrom_x3f(lean_object*, lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_filterTR_loop___at___00Go_emptyNeighbors_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_filterTR_loop___at___00Go_emptyNeighbors_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_emptyNeighbors(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_emptyNeighbors___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_foldl___at___00Go_libertiesOfGroup_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_foldl___at___00Go_libertiesOfGroup_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_libertiesOfGroup(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_libertiesOfGroup___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_libertiesAt_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_libertiesAt_x3f___boxed(lean_object*, lean_object*);
static const lean_ctor_object lp_SoftwareLogic__Go_Go_groupHasLiberties_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_SoftwareLogic__Go_Go_groupHasLiberties_x3f___closed__0 = (const lean_object*)&lp_SoftwareLogic__Go_Go_groupHasLiberties_x3f___closed__0_value;
static const lean_ctor_object lp_SoftwareLogic__Go_Go_groupHasLiberties_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_SoftwareLogic__Go_Go_groupHasLiberties_x3f___closed__1 = (const lean_object*)&lp_SoftwareLogic__Go_Go_groupHasLiberties_x3f___closed__1_value;
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_groupHasLiberties_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_groupHasLiberties_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_filterTR_loop___at___00Go_emptyNeighbors_spec__0(lean_object* v_st_1_, lean_object* v_a_2_, lean_object* v_a_3_){
_start:
{
if (lean_obj_tag(v_a_2_) == 0)
{
lean_object* v___x_4_; 
v___x_4_ = l_List_reverse___redArg(v_a_3_);
return v___x_4_;
}
else
{
lean_object* v_head_5_; lean_object* v_tail_6_; lean_object* v___x_8_; uint8_t v_isShared_9_; uint8_t v_isSharedCheck_17_; 
v_head_5_ = lean_ctor_get(v_a_2_, 0);
v_tail_6_ = lean_ctor_get(v_a_2_, 1);
v_isSharedCheck_17_ = !lean_is_exclusive(v_a_2_);
if (v_isSharedCheck_17_ == 0)
{
v___x_8_ = v_a_2_;
v_isShared_9_ = v_isSharedCheck_17_;
goto v_resetjp_7_;
}
else
{
lean_inc(v_tail_6_);
lean_inc(v_head_5_);
lean_dec(v_a_2_);
v___x_8_ = lean_box(0);
v_isShared_9_ = v_isSharedCheck_17_;
goto v_resetjp_7_;
}
v_resetjp_7_:
{
lean_object* v_board_10_; uint8_t v___x_11_; 
v_board_10_ = lean_ctor_get(v_st_1_, 1);
lean_inc(v_head_5_);
v___x_11_ = lp_SoftwareLogic__Go_Go_isEmptyAt(v_board_10_, v_head_5_);
if (v___x_11_ == 0)
{
lean_del_object(v___x_8_);
lean_dec(v_head_5_);
v_a_2_ = v_tail_6_;
goto _start;
}
else
{
lean_object* v___x_14_; 
if (v_isShared_9_ == 0)
{
lean_ctor_set(v___x_8_, 1, v_a_3_);
v___x_14_ = v___x_8_;
goto v_reusejp_13_;
}
else
{
lean_object* v_reuseFailAlloc_16_; 
v_reuseFailAlloc_16_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_16_, 0, v_head_5_);
lean_ctor_set(v_reuseFailAlloc_16_, 1, v_a_3_);
v___x_14_ = v_reuseFailAlloc_16_;
goto v_reusejp_13_;
}
v_reusejp_13_:
{
v_a_2_ = v_tail_6_;
v_a_3_ = v___x_14_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_filterTR_loop___at___00Go_emptyNeighbors_spec__0___boxed(lean_object* v_st_18_, lean_object* v_a_19_, lean_object* v_a_20_){
_start:
{
lean_object* v_res_21_; 
v_res_21_ = lp_SoftwareLogic__Go_List_filterTR_loop___at___00Go_emptyNeighbors_spec__0(v_st_18_, v_a_19_, v_a_20_);
lean_dec_ref(v_st_18_);
return v_res_21_;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_emptyNeighbors(lean_object* v_st_22_, lean_object* v_p_23_){
_start:
{
lean_object* v_size_24_; lean_object* v___x_25_; lean_object* v___x_26_; lean_object* v___x_27_; 
v_size_24_ = lean_ctor_get(v_st_22_, 0);
v___x_25_ = lp_SoftwareLogic__Go_Go_neighbors(v_size_24_, v_p_23_);
v___x_26_ = lean_box(0);
v___x_27_ = lp_SoftwareLogic__Go_List_filterTR_loop___at___00Go_emptyNeighbors_spec__0(v_st_22_, v___x_25_, v___x_26_);
return v___x_27_;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_emptyNeighbors___boxed(lean_object* v_st_28_, lean_object* v_p_29_){
_start:
{
lean_object* v_res_30_; 
v_res_30_ = lp_SoftwareLogic__Go_Go_emptyNeighbors(v_st_28_, v_p_29_);
lean_dec_ref(v_st_28_);
return v_res_30_;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_foldl___at___00Go_libertiesOfGroup_spec__0(lean_object* v_st_31_, lean_object* v_x_32_, lean_object* v_x_33_){
_start:
{
if (lean_obj_tag(v_x_33_) == 0)
{
return v_x_32_;
}
else
{
lean_object* v_head_34_; lean_object* v_tail_35_; lean_object* v_empties_36_; lean_object* v___x_37_; 
v_head_34_ = lean_ctor_get(v_x_33_, 0);
lean_inc(v_head_34_);
v_tail_35_ = lean_ctor_get(v_x_33_, 1);
lean_inc(v_tail_35_);
lean_dec_ref(v_x_33_);
v_empties_36_ = lp_SoftwareLogic__Go_Go_emptyNeighbors(v_st_31_, v_head_34_);
v___x_37_ = lp_SoftwareLogic__Go_List_foldl___at___00Go_insertManyPos_spec__0(v_x_32_, v_empties_36_);
v_x_32_ = v___x_37_;
v_x_33_ = v_tail_35_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_foldl___at___00Go_libertiesOfGroup_spec__0___boxed(lean_object* v_st_39_, lean_object* v_x_40_, lean_object* v_x_41_){
_start:
{
lean_object* v_res_42_; 
v_res_42_ = lp_SoftwareLogic__Go_List_foldl___at___00Go_libertiesOfGroup_spec__0(v_st_39_, v_x_40_, v_x_41_);
lean_dec_ref(v_st_39_);
return v_res_42_;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_libertiesOfGroup(lean_object* v_st_43_, lean_object* v_grp_44_){
_start:
{
lean_object* v___x_45_; lean_object* v___x_46_; 
v___x_45_ = lean_box(0);
v___x_46_ = lp_SoftwareLogic__Go_List_foldl___at___00Go_libertiesOfGroup_spec__0(v_st_43_, v___x_45_, v_grp_44_);
return v___x_46_;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_libertiesOfGroup___boxed(lean_object* v_st_47_, lean_object* v_grp_48_){
_start:
{
lean_object* v_res_49_; 
v_res_49_ = lp_SoftwareLogic__Go_Go_libertiesOfGroup(v_st_47_, v_grp_48_);
lean_dec_ref(v_st_47_);
return v_res_49_;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_libertiesAt_x3f(lean_object* v_st_50_, lean_object* v_p_51_){
_start:
{
lean_object* v___x_52_; 
v___x_52_ = lp_SoftwareLogic__Go_Go_groupFrom_x3f(v_st_50_, v_p_51_);
if (lean_obj_tag(v___x_52_) == 0)
{
return v___x_52_;
}
else
{
lean_object* v_val_53_; lean_object* v___x_55_; uint8_t v_isShared_56_; uint8_t v_isSharedCheck_61_; 
v_val_53_ = lean_ctor_get(v___x_52_, 0);
v_isSharedCheck_61_ = !lean_is_exclusive(v___x_52_);
if (v_isSharedCheck_61_ == 0)
{
v___x_55_ = v___x_52_;
v_isShared_56_ = v_isSharedCheck_61_;
goto v_resetjp_54_;
}
else
{
lean_inc(v_val_53_);
lean_dec(v___x_52_);
v___x_55_ = lean_box(0);
v_isShared_56_ = v_isSharedCheck_61_;
goto v_resetjp_54_;
}
v_resetjp_54_:
{
lean_object* v___x_57_; lean_object* v___x_59_; 
v___x_57_ = lp_SoftwareLogic__Go_Go_libertiesOfGroup(v_st_50_, v_val_53_);
if (v_isShared_56_ == 0)
{
lean_ctor_set(v___x_55_, 0, v___x_57_);
v___x_59_ = v___x_55_;
goto v_reusejp_58_;
}
else
{
lean_object* v_reuseFailAlloc_60_; 
v_reuseFailAlloc_60_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_60_, 0, v___x_57_);
v___x_59_ = v_reuseFailAlloc_60_;
goto v_reusejp_58_;
}
v_reusejp_58_:
{
return v___x_59_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_libertiesAt_x3f___boxed(lean_object* v_st_62_, lean_object* v_p_63_){
_start:
{
lean_object* v_res_64_; 
v_res_64_ = lp_SoftwareLogic__Go_Go_libertiesAt_x3f(v_st_62_, v_p_63_);
lean_dec_ref(v_st_62_);
return v_res_64_;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_groupHasLiberties_x3f(lean_object* v_st_71_, lean_object* v_p_72_){
_start:
{
lean_object* v___x_73_; 
v___x_73_ = lp_SoftwareLogic__Go_Go_libertiesAt_x3f(v_st_71_, v_p_72_);
if (lean_obj_tag(v___x_73_) == 0)
{
lean_object* v___x_74_; 
v___x_74_ = lean_box(0);
return v___x_74_;
}
else
{
lean_object* v_val_75_; uint8_t v___x_76_; 
v_val_75_ = lean_ctor_get(v___x_73_, 0);
lean_inc(v_val_75_);
lean_dec_ref(v___x_73_);
v___x_76_ = l_List_isEmpty___redArg(v_val_75_);
lean_dec(v_val_75_);
if (v___x_76_ == 0)
{
lean_object* v___x_77_; 
v___x_77_ = ((lean_object*)(lp_SoftwareLogic__Go_Go_groupHasLiberties_x3f___closed__0));
return v___x_77_;
}
else
{
lean_object* v___x_78_; 
v___x_78_ = ((lean_object*)(lp_SoftwareLogic__Go_Go_groupHasLiberties_x3f___closed__1));
return v___x_78_;
}
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_groupHasLiberties_x3f___boxed(lean_object* v_st_79_, lean_object* v_p_80_){
_start:
{
lean_object* v_res_81_; 
v_res_81_ = lp_SoftwareLogic__Go_Go_groupHasLiberties_x3f(v_st_79_, v_p_80_);
lean_dec_ref(v_st_79_);
return v_res_81_;
}
}
lean_object* initialize_Init(uint8_t builtin);
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
