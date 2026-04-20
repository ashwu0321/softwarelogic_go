// Lean compiler output
// Module: Go.Board
// Imports: public import Init public meta import Init public import Go.Basic
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
lean_object* l_List_lengthTR___redArg(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_List_get___redArg(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_String_intercalate(lean_object*, lean_object*);
uint8_t lp_SoftwareLogic__Go_Go_Stone_other(uint8_t);
LEAN_EXPORT uint8_t lp_SoftwareLogic__Go_Go_inBounds(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_inBounds___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_getAt_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_getAt_x3f___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_getAt_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_getAt_x3f___boxed(lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_filterTR_loop___at___00Go_neighbors_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_filterTR_loop___at___00Go_neighbors_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_neighbors(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_neighbors___boxed(lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_rowToString(lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_mapTR_loop___at___00Go_boardToString_spec__0(lean_object*, lean_object*);
static const lean_string_object lp_SoftwareLogic__Go_Go_boardToString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* lp_SoftwareLogic__Go_Go_boardToString___closed__0 = (const lean_object*)&lp_SoftwareLogic__Go_Go_boardToString___closed__0_value;
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_boardToString(lean_object*);
LEAN_EXPORT uint8_t lp_SoftwareLogic__Go_Go_inBounds(lean_object* v_size_1_, lean_object* v_p_2_){
_start:
{
lean_object* v_fst_3_; lean_object* v_snd_4_; uint8_t v___x_5_; 
v_fst_3_ = lean_ctor_get(v_p_2_, 0);
v_snd_4_ = lean_ctor_get(v_p_2_, 1);
v___x_5_ = lean_nat_dec_lt(v_fst_3_, v_size_1_);
if (v___x_5_ == 0)
{
return v___x_5_;
}
else
{
uint8_t v___x_6_; 
v___x_6_ = lean_nat_dec_lt(v_snd_4_, v_size_1_);
return v___x_6_;
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_inBounds___boxed(lean_object* v_size_7_, lean_object* v_p_8_){
_start:
{
uint8_t v_res_9_; lean_object* v_r_10_; 
v_res_9_ = lp_SoftwareLogic__Go_Go_inBounds(v_size_7_, v_p_8_);
lean_dec_ref(v_p_8_);
lean_dec(v_size_7_);
v_r_10_ = lean_box(v_res_9_);
return v_r_10_;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_getAt_x3f___redArg(lean_object* v_xs_11_, lean_object* v_i_12_){
_start:
{
lean_object* v___x_13_; uint8_t v___x_14_; 
v___x_13_ = l_List_lengthTR___redArg(v_xs_11_);
v___x_14_ = lean_nat_dec_lt(v_i_12_, v___x_13_);
lean_dec(v___x_13_);
if (v___x_14_ == 0)
{
lean_object* v___x_15_; 
lean_dec(v_i_12_);
v___x_15_ = lean_box(0);
return v___x_15_;
}
else
{
lean_object* v___x_16_; lean_object* v___x_17_; 
v___x_16_ = l_List_get___redArg(v_xs_11_, v_i_12_);
v___x_17_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_17_, 0, v___x_16_);
return v___x_17_;
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_getAt_x3f___redArg___boxed(lean_object* v_xs_18_, lean_object* v_i_19_){
_start:
{
lean_object* v_res_20_; 
v_res_20_ = lp_SoftwareLogic__Go_Go_getAt_x3f___redArg(v_xs_18_, v_i_19_);
lean_dec(v_xs_18_);
return v_res_20_;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_getAt_x3f(lean_object* v_00_u03b1_21_, lean_object* v_xs_22_, lean_object* v_i_23_){
_start:
{
lean_object* v___x_24_; 
v___x_24_ = lp_SoftwareLogic__Go_Go_getAt_x3f___redArg(v_xs_22_, v_i_23_);
return v___x_24_;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_getAt_x3f___boxed(lean_object* v_00_u03b1_25_, lean_object* v_xs_26_, lean_object* v_i_27_){
_start:
{
lean_object* v_res_28_; 
v_res_28_ = lp_SoftwareLogic__Go_Go_getAt_x3f(v_00_u03b1_25_, v_xs_26_, v_i_27_);
lean_dec(v_xs_26_);
return v_res_28_;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_setAt_x3f___redArg(lean_object* v_xs_29_, lean_object* v_i_30_, lean_object* v_val_31_){
_start:
{
if (lean_obj_tag(v_xs_29_) == 0)
{
lean_object* v___x_32_; 
lean_dec(v_val_31_);
v___x_32_ = lean_box(0);
return v___x_32_;
}
else
{
lean_object* v_head_33_; lean_object* v_tail_34_; lean_object* v___x_36_; uint8_t v_isShared_37_; uint8_t v_isSharedCheck_58_; 
v_head_33_ = lean_ctor_get(v_xs_29_, 0);
v_tail_34_ = lean_ctor_get(v_xs_29_, 1);
v_isSharedCheck_58_ = !lean_is_exclusive(v_xs_29_);
if (v_isSharedCheck_58_ == 0)
{
v___x_36_ = v_xs_29_;
v_isShared_37_ = v_isSharedCheck_58_;
goto v_resetjp_35_;
}
else
{
lean_inc(v_tail_34_);
lean_inc(v_head_33_);
lean_dec(v_xs_29_);
v___x_36_ = lean_box(0);
v_isShared_37_ = v_isSharedCheck_58_;
goto v_resetjp_35_;
}
v_resetjp_35_:
{
lean_object* v_zero_38_; uint8_t v_isZero_39_; 
v_zero_38_ = lean_unsigned_to_nat(0u);
v_isZero_39_ = lean_nat_dec_eq(v_i_30_, v_zero_38_);
if (v_isZero_39_ == 1)
{
lean_object* v___x_41_; 
lean_dec(v_head_33_);
if (v_isShared_37_ == 0)
{
lean_ctor_set(v___x_36_, 0, v_val_31_);
v___x_41_ = v___x_36_;
goto v_reusejp_40_;
}
else
{
lean_object* v_reuseFailAlloc_43_; 
v_reuseFailAlloc_43_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_43_, 0, v_val_31_);
lean_ctor_set(v_reuseFailAlloc_43_, 1, v_tail_34_);
v___x_41_ = v_reuseFailAlloc_43_;
goto v_reusejp_40_;
}
v_reusejp_40_:
{
lean_object* v___x_42_; 
v___x_42_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_42_, 0, v___x_41_);
return v___x_42_;
}
}
else
{
lean_object* v_one_44_; lean_object* v_n_45_; lean_object* v___x_46_; 
v_one_44_ = lean_unsigned_to_nat(1u);
v_n_45_ = lean_nat_sub(v_i_30_, v_one_44_);
v___x_46_ = lp_SoftwareLogic__Go_Go_setAt_x3f___redArg(v_tail_34_, v_n_45_, v_val_31_);
lean_dec(v_n_45_);
if (lean_obj_tag(v___x_46_) == 0)
{
lean_del_object(v___x_36_);
lean_dec(v_head_33_);
return v___x_46_;
}
else
{
lean_object* v_val_47_; lean_object* v___x_49_; uint8_t v_isShared_50_; uint8_t v_isSharedCheck_57_; 
v_val_47_ = lean_ctor_get(v___x_46_, 0);
v_isSharedCheck_57_ = !lean_is_exclusive(v___x_46_);
if (v_isSharedCheck_57_ == 0)
{
v___x_49_ = v___x_46_;
v_isShared_50_ = v_isSharedCheck_57_;
goto v_resetjp_48_;
}
else
{
lean_inc(v_val_47_);
lean_dec(v___x_46_);
v___x_49_ = lean_box(0);
v_isShared_50_ = v_isSharedCheck_57_;
goto v_resetjp_48_;
}
v_resetjp_48_:
{
lean_object* v___x_52_; 
if (v_isShared_37_ == 0)
{
lean_ctor_set(v___x_36_, 1, v_val_47_);
v___x_52_ = v___x_36_;
goto v_reusejp_51_;
}
else
{
lean_object* v_reuseFailAlloc_56_; 
v_reuseFailAlloc_56_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_56_, 0, v_head_33_);
lean_ctor_set(v_reuseFailAlloc_56_, 1, v_val_47_);
v___x_52_ = v_reuseFailAlloc_56_;
goto v_reusejp_51_;
}
v_reusejp_51_:
{
lean_object* v___x_54_; 
if (v_isShared_50_ == 0)
{
lean_ctor_set(v___x_49_, 0, v___x_52_);
v___x_54_ = v___x_49_;
goto v_reusejp_53_;
}
else
{
lean_object* v_reuseFailAlloc_55_; 
v_reuseFailAlloc_55_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_55_, 0, v___x_52_);
v___x_54_ = v_reuseFailAlloc_55_;
goto v_reusejp_53_;
}
v_reusejp_53_:
{
return v___x_54_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_setAt_x3f___redArg___boxed(lean_object* v_xs_59_, lean_object* v_i_60_, lean_object* v_val_61_){
_start:
{
lean_object* v_res_62_; 
v_res_62_ = lp_SoftwareLogic__Go_Go_setAt_x3f___redArg(v_xs_59_, v_i_60_, v_val_61_);
lean_dec(v_i_60_);
return v_res_62_;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_setAt_x3f(lean_object* v_00_u03b1_63_, lean_object* v_xs_64_, lean_object* v_i_65_, lean_object* v_val_66_){
_start:
{
lean_object* v___x_67_; 
v___x_67_ = lp_SoftwareLogic__Go_Go_setAt_x3f___redArg(v_xs_64_, v_i_65_, v_val_66_);
return v___x_67_;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_setAt_x3f___boxed(lean_object* v_00_u03b1_68_, lean_object* v_xs_69_, lean_object* v_i_70_, lean_object* v_val_71_){
_start:
{
lean_object* v_res_72_; 
v_res_72_ = lp_SoftwareLogic__Go_Go_setAt_x3f(v_00_u03b1_68_, v_xs_69_, v_i_70_, v_val_71_);
lean_dec(v_i_70_);
return v_res_72_;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_boardGet_x3f(lean_object* v_b_73_, lean_object* v_p_74_){
_start:
{
lean_object* v_fst_75_; lean_object* v_snd_76_; lean_object* v___x_77_; 
v_fst_75_ = lean_ctor_get(v_p_74_, 0);
lean_inc(v_fst_75_);
v_snd_76_ = lean_ctor_get(v_p_74_, 1);
lean_inc(v_snd_76_);
lean_dec_ref(v_p_74_);
v___x_77_ = lp_SoftwareLogic__Go_Go_getAt_x3f___redArg(v_b_73_, v_fst_75_);
if (lean_obj_tag(v___x_77_) == 0)
{
lean_object* v___x_78_; 
lean_dec(v_snd_76_);
v___x_78_ = lean_box(0);
return v___x_78_;
}
else
{
lean_object* v_val_79_; lean_object* v___x_80_; 
v_val_79_ = lean_ctor_get(v___x_77_, 0);
lean_inc(v_val_79_);
lean_dec_ref(v___x_77_);
v___x_80_ = lp_SoftwareLogic__Go_Go_getAt_x3f___redArg(v_val_79_, v_snd_76_);
lean_dec(v_val_79_);
return v___x_80_;
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_boardGet_x3f___boxed(lean_object* v_b_81_, lean_object* v_p_82_){
_start:
{
lean_object* v_res_83_; 
v_res_83_ = lp_SoftwareLogic__Go_Go_boardGet_x3f(v_b_81_, v_p_82_);
lean_dec(v_b_81_);
return v_res_83_;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_boardSet_x3f(lean_object* v_b_84_, lean_object* v_p_85_, lean_object* v_val_86_){
_start:
{
lean_object* v_fst_87_; lean_object* v_snd_88_; lean_object* v___x_89_; 
v_fst_87_ = lean_ctor_get(v_p_85_, 0);
lean_inc_n(v_fst_87_, 2);
v_snd_88_ = lean_ctor_get(v_p_85_, 1);
lean_inc(v_snd_88_);
lean_dec_ref(v_p_85_);
v___x_89_ = lp_SoftwareLogic__Go_Go_getAt_x3f___redArg(v_b_84_, v_fst_87_);
if (lean_obj_tag(v___x_89_) == 0)
{
lean_object* v___x_90_; 
lean_dec(v_snd_88_);
lean_dec(v_fst_87_);
lean_dec(v_val_86_);
lean_dec(v_b_84_);
v___x_90_ = lean_box(0);
return v___x_90_;
}
else
{
lean_object* v_val_91_; lean_object* v___x_92_; 
v_val_91_ = lean_ctor_get(v___x_89_, 0);
lean_inc(v_val_91_);
lean_dec_ref(v___x_89_);
v___x_92_ = lp_SoftwareLogic__Go_Go_setAt_x3f___redArg(v_val_91_, v_snd_88_, v_val_86_);
lean_dec(v_snd_88_);
if (lean_obj_tag(v___x_92_) == 0)
{
lean_object* v___x_93_; 
lean_dec(v_fst_87_);
lean_dec(v_b_84_);
v___x_93_ = lean_box(0);
return v___x_93_;
}
else
{
lean_object* v_val_94_; lean_object* v___x_95_; 
v_val_94_ = lean_ctor_get(v___x_92_, 0);
lean_inc(v_val_94_);
lean_dec_ref(v___x_92_);
v___x_95_ = lp_SoftwareLogic__Go_Go_setAt_x3f___redArg(v_b_84_, v_fst_87_, v_val_94_);
lean_dec(v_fst_87_);
return v___x_95_;
}
}
}
}
LEAN_EXPORT uint8_t lp_SoftwareLogic__Go_Go_isEmptyAt(lean_object* v_b_96_, lean_object* v_p_97_){
_start:
{
lean_object* v___x_98_; 
v___x_98_ = lp_SoftwareLogic__Go_Go_boardGet_x3f(v_b_96_, v_p_97_);
if (lean_obj_tag(v___x_98_) == 1)
{
lean_object* v_val_99_; 
v_val_99_ = lean_ctor_get(v___x_98_, 0);
lean_inc(v_val_99_);
lean_dec_ref(v___x_98_);
if (lean_obj_tag(v_val_99_) == 0)
{
uint8_t v___x_100_; 
v___x_100_ = 1;
return v___x_100_;
}
else
{
uint8_t v___x_101_; 
lean_dec(v_val_99_);
v___x_101_ = 0;
return v___x_101_;
}
}
else
{
uint8_t v___x_102_; 
lean_dec(v___x_98_);
v___x_102_ = 0;
return v___x_102_;
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_isEmptyAt___boxed(lean_object* v_b_103_, lean_object* v_p_104_){
_start:
{
uint8_t v_res_105_; lean_object* v_r_106_; 
v_res_105_ = lp_SoftwareLogic__Go_Go_isEmptyAt(v_b_103_, v_p_104_);
lean_dec(v_b_103_);
v_r_106_ = lean_box(v_res_105_);
return v_r_106_;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_stoneAt_x3f(lean_object* v_b_107_, lean_object* v_p_108_){
_start:
{
lean_object* v___x_109_; 
v___x_109_ = lp_SoftwareLogic__Go_Go_boardGet_x3f(v_b_107_, v_p_108_);
if (lean_obj_tag(v___x_109_) == 1)
{
lean_object* v_val_110_; 
v_val_110_ = lean_ctor_get(v___x_109_, 0);
lean_inc(v_val_110_);
lean_dec_ref(v___x_109_);
if (lean_obj_tag(v_val_110_) == 1)
{
return v_val_110_;
}
else
{
lean_object* v___x_111_; 
lean_dec(v_val_110_);
v___x_111_ = lean_box(0);
return v___x_111_;
}
}
else
{
lean_object* v___x_112_; 
lean_dec(v___x_109_);
v___x_112_ = lean_box(0);
return v___x_112_;
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_stoneAt_x3f___boxed(lean_object* v_b_113_, lean_object* v_p_114_){
_start:
{
lean_object* v_res_115_; 
v_res_115_ = lp_SoftwareLogic__Go_Go_stoneAt_x3f(v_b_113_, v_p_114_);
lean_dec(v_b_113_);
return v_res_115_;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_placeStone_x3f(lean_object* v_st_116_, lean_object* v_p_117_){
_start:
{
lean_object* v_size_118_; lean_object* v_board_119_; uint8_t v_turn_120_; lean_object* v___x_122_; uint8_t v_isShared_123_; uint8_t v_isSharedCheck_143_; 
v_size_118_ = lean_ctor_get(v_st_116_, 0);
v_board_119_ = lean_ctor_get(v_st_116_, 1);
v_turn_120_ = lean_ctor_get_uint8(v_st_116_, sizeof(void*)*2);
v_isSharedCheck_143_ = !lean_is_exclusive(v_st_116_);
if (v_isSharedCheck_143_ == 0)
{
v___x_122_ = v_st_116_;
v_isShared_123_ = v_isSharedCheck_143_;
goto v_resetjp_121_;
}
else
{
lean_inc(v_board_119_);
lean_inc(v_size_118_);
lean_dec(v_st_116_);
v___x_122_ = lean_box(0);
v_isShared_123_ = v_isSharedCheck_143_;
goto v_resetjp_121_;
}
v_resetjp_121_:
{
uint8_t v___x_124_; 
v___x_124_ = lp_SoftwareLogic__Go_Go_inBounds(v_size_118_, v_p_117_);
if (v___x_124_ == 0)
{
lean_object* v___x_125_; 
lean_del_object(v___x_122_);
lean_dec(v_board_119_);
lean_dec(v_size_118_);
lean_dec_ref(v_p_117_);
v___x_125_ = lean_box(0);
return v___x_125_;
}
else
{
uint8_t v___x_126_; 
lean_inc_ref(v_p_117_);
v___x_126_ = lp_SoftwareLogic__Go_Go_isEmptyAt(v_board_119_, v_p_117_);
if (v___x_126_ == 0)
{
lean_object* v___x_127_; 
lean_del_object(v___x_122_);
lean_dec(v_board_119_);
lean_dec(v_size_118_);
lean_dec_ref(v_p_117_);
v___x_127_ = lean_box(0);
return v___x_127_;
}
else
{
lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; 
v___x_128_ = lean_box(v_turn_120_);
v___x_129_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_129_, 0, v___x_128_);
v___x_130_ = lp_SoftwareLogic__Go_Go_boardSet_x3f(v_board_119_, v_p_117_, v___x_129_);
if (lean_obj_tag(v___x_130_) == 0)
{
lean_object* v___x_131_; 
lean_del_object(v___x_122_);
lean_dec(v_size_118_);
v___x_131_ = lean_box(0);
return v___x_131_;
}
else
{
lean_object* v_val_132_; lean_object* v___x_134_; uint8_t v_isShared_135_; uint8_t v_isSharedCheck_142_; 
v_val_132_ = lean_ctor_get(v___x_130_, 0);
v_isSharedCheck_142_ = !lean_is_exclusive(v___x_130_);
if (v_isSharedCheck_142_ == 0)
{
v___x_134_ = v___x_130_;
v_isShared_135_ = v_isSharedCheck_142_;
goto v_resetjp_133_;
}
else
{
lean_inc(v_val_132_);
lean_dec(v___x_130_);
v___x_134_ = lean_box(0);
v_isShared_135_ = v_isSharedCheck_142_;
goto v_resetjp_133_;
}
v_resetjp_133_:
{
lean_object* v___x_137_; 
if (v_isShared_123_ == 0)
{
lean_ctor_set(v___x_122_, 1, v_val_132_);
v___x_137_ = v___x_122_;
goto v_reusejp_136_;
}
else
{
lean_object* v_reuseFailAlloc_141_; 
v_reuseFailAlloc_141_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_141_, 0, v_size_118_);
lean_ctor_set(v_reuseFailAlloc_141_, 1, v_val_132_);
lean_ctor_set_uint8(v_reuseFailAlloc_141_, sizeof(void*)*2, v_turn_120_);
v___x_137_ = v_reuseFailAlloc_141_;
goto v_reusejp_136_;
}
v_reusejp_136_:
{
lean_object* v___x_139_; 
if (v_isShared_135_ == 0)
{
lean_ctor_set(v___x_134_, 0, v___x_137_);
v___x_139_ = v___x_134_;
goto v_reusejp_138_;
}
else
{
lean_object* v_reuseFailAlloc_140_; 
v_reuseFailAlloc_140_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_140_, 0, v___x_137_);
v___x_139_ = v_reuseFailAlloc_140_;
goto v_reusejp_138_;
}
v_reusejp_138_:
{
return v___x_139_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_filterTR_loop___at___00Go_neighbors_spec__0(lean_object* v_size_144_, lean_object* v_a_145_, lean_object* v_a_146_){
_start:
{
if (lean_obj_tag(v_a_145_) == 0)
{
lean_object* v___x_147_; 
v___x_147_ = l_List_reverse___redArg(v_a_146_);
return v___x_147_;
}
else
{
lean_object* v_head_148_; lean_object* v_tail_149_; lean_object* v___x_151_; uint8_t v_isShared_152_; uint8_t v_isSharedCheck_159_; 
v_head_148_ = lean_ctor_get(v_a_145_, 0);
v_tail_149_ = lean_ctor_get(v_a_145_, 1);
v_isSharedCheck_159_ = !lean_is_exclusive(v_a_145_);
if (v_isSharedCheck_159_ == 0)
{
v___x_151_ = v_a_145_;
v_isShared_152_ = v_isSharedCheck_159_;
goto v_resetjp_150_;
}
else
{
lean_inc(v_tail_149_);
lean_inc(v_head_148_);
lean_dec(v_a_145_);
v___x_151_ = lean_box(0);
v_isShared_152_ = v_isSharedCheck_159_;
goto v_resetjp_150_;
}
v_resetjp_150_:
{
uint8_t v___x_153_; 
v___x_153_ = lp_SoftwareLogic__Go_Go_inBounds(v_size_144_, v_head_148_);
if (v___x_153_ == 0)
{
lean_del_object(v___x_151_);
lean_dec(v_head_148_);
v_a_145_ = v_tail_149_;
goto _start;
}
else
{
lean_object* v___x_156_; 
if (v_isShared_152_ == 0)
{
lean_ctor_set(v___x_151_, 1, v_a_146_);
v___x_156_ = v___x_151_;
goto v_reusejp_155_;
}
else
{
lean_object* v_reuseFailAlloc_158_; 
v_reuseFailAlloc_158_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_158_, 0, v_head_148_);
lean_ctor_set(v_reuseFailAlloc_158_, 1, v_a_146_);
v___x_156_ = v_reuseFailAlloc_158_;
goto v_reusejp_155_;
}
v_reusejp_155_:
{
v_a_145_ = v_tail_149_;
v_a_146_ = v___x_156_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_filterTR_loop___at___00Go_neighbors_spec__0___boxed(lean_object* v_size_160_, lean_object* v_a_161_, lean_object* v_a_162_){
_start:
{
lean_object* v_res_163_; 
v_res_163_ = lp_SoftwareLogic__Go_List_filterTR_loop___at___00Go_neighbors_spec__0(v_size_160_, v_a_161_, v_a_162_);
lean_dec(v_size_160_);
return v_res_163_;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_neighbors(lean_object* v_size_164_, lean_object* v_p_165_){
_start:
{
lean_object* v_fst_166_; lean_object* v_snd_167_; lean_object* v___x_169_; uint8_t v_isShared_170_; uint8_t v_isSharedCheck_198_; 
v_fst_166_ = lean_ctor_get(v_p_165_, 0);
v_snd_167_ = lean_ctor_get(v_p_165_, 1);
v_isSharedCheck_198_ = !lean_is_exclusive(v_p_165_);
if (v_isSharedCheck_198_ == 0)
{
v___x_169_ = v_p_165_;
v_isShared_170_ = v_isSharedCheck_198_;
goto v_resetjp_168_;
}
else
{
lean_inc(v_snd_167_);
lean_inc(v_fst_166_);
lean_dec(v_p_165_);
v___x_169_ = lean_box(0);
v_isShared_170_ = v_isSharedCheck_198_;
goto v_resetjp_168_;
}
v_resetjp_168_:
{
lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_174_; 
v___x_171_ = lean_unsigned_to_nat(1u);
v___x_172_ = lean_nat_add(v_fst_166_, v___x_171_);
lean_inc(v_snd_167_);
if (v_isShared_170_ == 0)
{
lean_ctor_set(v___x_169_, 0, v___x_172_);
v___x_174_ = v___x_169_;
goto v_reusejp_173_;
}
else
{
lean_object* v_reuseFailAlloc_197_; 
v_reuseFailAlloc_197_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_197_, 0, v___x_172_);
lean_ctor_set(v_reuseFailAlloc_197_, 1, v_snd_167_);
v___x_174_ = v_reuseFailAlloc_197_;
goto v_reusejp_173_;
}
v_reusejp_173_:
{
lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___y_179_; lean_object* v___y_180_; lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; uint8_t v___x_186_; uint8_t v___x_187_; lean_object* v___y_189_; 
v___x_175_ = lean_nat_add(v_snd_167_, v___x_171_);
lean_inc(v_fst_166_);
v___x_176_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_176_, 0, v_fst_166_);
lean_ctor_set(v___x_176_, 1, v___x_175_);
v___x_177_ = lean_box(0);
v___x_183_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_183_, 0, v___x_176_);
lean_ctor_set(v___x_183_, 1, v___x_177_);
v___x_184_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_184_, 0, v___x_174_);
lean_ctor_set(v___x_184_, 1, v___x_183_);
v___x_185_ = lean_unsigned_to_nat(0u);
v___x_186_ = lean_nat_dec_lt(v___x_185_, v_fst_166_);
v___x_187_ = lean_nat_dec_lt(v___x_185_, v_snd_167_);
if (v___x_186_ == 0)
{
v___y_189_ = v___x_177_;
goto v___jp_188_;
}
else
{
lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; 
v___x_194_ = lean_nat_sub(v_fst_166_, v___x_171_);
lean_inc(v_snd_167_);
v___x_195_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_195_, 0, v___x_194_);
lean_ctor_set(v___x_195_, 1, v_snd_167_);
v___x_196_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_196_, 0, v___x_195_);
lean_ctor_set(v___x_196_, 1, v___x_177_);
v___y_189_ = v___x_196_;
goto v___jp_188_;
}
v___jp_178_:
{
lean_object* v_candidates_181_; lean_object* v___x_182_; 
v_candidates_181_ = l_List_appendTR___redArg(v___y_179_, v___y_180_);
v___x_182_ = lp_SoftwareLogic__Go_List_filterTR_loop___at___00Go_neighbors_spec__0(v_size_164_, v_candidates_181_, v___x_177_);
return v___x_182_;
}
v___jp_188_:
{
lean_object* v___x_190_; 
v___x_190_ = l_List_appendTR___redArg(v___x_184_, v___y_189_);
if (v___x_187_ == 0)
{
lean_dec(v_snd_167_);
lean_dec(v_fst_166_);
v___y_179_ = v___x_190_;
v___y_180_ = v___x_177_;
goto v___jp_178_;
}
else
{
lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; 
v___x_191_ = lean_nat_sub(v_snd_167_, v___x_171_);
lean_dec(v_snd_167_);
v___x_192_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_192_, 0, v_fst_166_);
lean_ctor_set(v___x_192_, 1, v___x_191_);
v___x_193_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_193_, 0, v___x_192_);
lean_ctor_set(v___x_193_, 1, v___x_177_);
v___y_179_ = v___x_190_;
v___y_180_ = v___x_193_;
goto v___jp_178_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_neighbors___boxed(lean_object* v_size_199_, lean_object* v_p_200_){
_start:
{
lean_object* v_res_201_; 
v_res_201_ = lp_SoftwareLogic__Go_Go_neighbors(v_size_199_, v_p_200_);
lean_dec(v_size_199_);
return v_res_201_;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_switchTurn(lean_object* v_st_202_){
_start:
{
lean_object* v_size_203_; lean_object* v_board_204_; uint8_t v_turn_205_; lean_object* v___x_207_; uint8_t v_isShared_208_; uint8_t v_isSharedCheck_213_; 
v_size_203_ = lean_ctor_get(v_st_202_, 0);
v_board_204_ = lean_ctor_get(v_st_202_, 1);
v_turn_205_ = lean_ctor_get_uint8(v_st_202_, sizeof(void*)*2);
v_isSharedCheck_213_ = !lean_is_exclusive(v_st_202_);
if (v_isSharedCheck_213_ == 0)
{
v___x_207_ = v_st_202_;
v_isShared_208_ = v_isSharedCheck_213_;
goto v_resetjp_206_;
}
else
{
lean_inc(v_board_204_);
lean_inc(v_size_203_);
lean_dec(v_st_202_);
v___x_207_ = lean_box(0);
v_isShared_208_ = v_isSharedCheck_213_;
goto v_resetjp_206_;
}
v_resetjp_206_:
{
uint8_t v___x_209_; lean_object* v___x_211_; 
v___x_209_ = lp_SoftwareLogic__Go_Go_Stone_other(v_turn_205_);
if (v_isShared_208_ == 0)
{
v___x_211_ = v___x_207_;
goto v_reusejp_210_;
}
else
{
lean_object* v_reuseFailAlloc_212_; 
v_reuseFailAlloc_212_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_212_, 0, v_size_203_);
lean_ctor_set(v_reuseFailAlloc_212_, 1, v_board_204_);
v___x_211_ = v_reuseFailAlloc_212_;
goto v_reusejp_210_;
}
v_reusejp_210_:
{
lean_ctor_set_uint8(v___x_211_, sizeof(void*)*2, v___x_209_);
return v___x_211_;
}
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_boardToStringCell(lean_object* v_x_217_){
_start:
{
if (lean_obj_tag(v_x_217_) == 0)
{
lean_object* v___x_218_; 
v___x_218_ = ((lean_object*)(lp_SoftwareLogic__Go_Go_boardToStringCell___closed__0));
return v___x_218_;
}
else
{
lean_object* v_val_219_; uint8_t v___x_220_; 
v_val_219_ = lean_ctor_get(v_x_217_, 0);
v___x_220_ = lean_unbox(v_val_219_);
if (v___x_220_ == 0)
{
lean_object* v___x_221_; 
v___x_221_ = ((lean_object*)(lp_SoftwareLogic__Go_Go_boardToStringCell___closed__1));
return v___x_221_;
}
else
{
lean_object* v___x_222_; 
v___x_222_ = ((lean_object*)(lp_SoftwareLogic__Go_Go_boardToStringCell___closed__2));
return v___x_222_;
}
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_boardToStringCell___boxed(lean_object* v_x_223_){
_start:
{
lean_object* v_res_224_; 
v_res_224_ = lp_SoftwareLogic__Go_Go_boardToStringCell(v_x_223_);
lean_dec(v_x_223_);
return v_res_224_;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_mapTR_loop___at___00Go_rowToString_spec__0(lean_object* v_a_225_, lean_object* v_a_226_){
_start:
{
if (lean_obj_tag(v_a_225_) == 0)
{
lean_object* v___x_227_; 
v___x_227_ = l_List_reverse___redArg(v_a_226_);
return v___x_227_;
}
else
{
lean_object* v_head_228_; lean_object* v_tail_229_; lean_object* v___x_231_; uint8_t v_isShared_232_; uint8_t v_isSharedCheck_238_; 
v_head_228_ = lean_ctor_get(v_a_225_, 0);
v_tail_229_ = lean_ctor_get(v_a_225_, 1);
v_isSharedCheck_238_ = !lean_is_exclusive(v_a_225_);
if (v_isSharedCheck_238_ == 0)
{
v___x_231_ = v_a_225_;
v_isShared_232_ = v_isSharedCheck_238_;
goto v_resetjp_230_;
}
else
{
lean_inc(v_tail_229_);
lean_inc(v_head_228_);
lean_dec(v_a_225_);
v___x_231_ = lean_box(0);
v_isShared_232_ = v_isSharedCheck_238_;
goto v_resetjp_230_;
}
v_resetjp_230_:
{
lean_object* v___x_233_; lean_object* v___x_235_; 
v___x_233_ = lp_SoftwareLogic__Go_Go_boardToStringCell(v_head_228_);
lean_dec(v_head_228_);
if (v_isShared_232_ == 0)
{
lean_ctor_set(v___x_231_, 1, v_a_226_);
lean_ctor_set(v___x_231_, 0, v___x_233_);
v___x_235_ = v___x_231_;
goto v_reusejp_234_;
}
else
{
lean_object* v_reuseFailAlloc_237_; 
v_reuseFailAlloc_237_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_237_, 0, v___x_233_);
lean_ctor_set(v_reuseFailAlloc_237_, 1, v_a_226_);
v___x_235_ = v_reuseFailAlloc_237_;
goto v_reusejp_234_;
}
v_reusejp_234_:
{
v_a_225_ = v_tail_229_;
v_a_226_ = v___x_235_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_rowToString(lean_object* v_row_240_){
_start:
{
lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; 
v___x_241_ = ((lean_object*)(lp_SoftwareLogic__Go_Go_rowToString___closed__0));
v___x_242_ = lean_box(0);
v___x_243_ = lp_SoftwareLogic__Go_List_mapTR_loop___at___00Go_rowToString_spec__0(v_row_240_, v___x_242_);
v___x_244_ = l_String_intercalate(v___x_241_, v___x_243_);
return v___x_244_;
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_List_mapTR_loop___at___00Go_boardToString_spec__0(lean_object* v_a_245_, lean_object* v_a_246_){
_start:
{
if (lean_obj_tag(v_a_245_) == 0)
{
lean_object* v___x_247_; 
v___x_247_ = l_List_reverse___redArg(v_a_246_);
return v___x_247_;
}
else
{
lean_object* v_head_248_; lean_object* v_tail_249_; lean_object* v___x_251_; uint8_t v_isShared_252_; uint8_t v_isSharedCheck_258_; 
v_head_248_ = lean_ctor_get(v_a_245_, 0);
v_tail_249_ = lean_ctor_get(v_a_245_, 1);
v_isSharedCheck_258_ = !lean_is_exclusive(v_a_245_);
if (v_isSharedCheck_258_ == 0)
{
v___x_251_ = v_a_245_;
v_isShared_252_ = v_isSharedCheck_258_;
goto v_resetjp_250_;
}
else
{
lean_inc(v_tail_249_);
lean_inc(v_head_248_);
lean_dec(v_a_245_);
v___x_251_ = lean_box(0);
v_isShared_252_ = v_isSharedCheck_258_;
goto v_resetjp_250_;
}
v_resetjp_250_:
{
lean_object* v___x_253_; lean_object* v___x_255_; 
v___x_253_ = lp_SoftwareLogic__Go_Go_rowToString(v_head_248_);
if (v_isShared_252_ == 0)
{
lean_ctor_set(v___x_251_, 1, v_a_246_);
lean_ctor_set(v___x_251_, 0, v___x_253_);
v___x_255_ = v___x_251_;
goto v_reusejp_254_;
}
else
{
lean_object* v_reuseFailAlloc_257_; 
v_reuseFailAlloc_257_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_257_, 0, v___x_253_);
lean_ctor_set(v_reuseFailAlloc_257_, 1, v_a_246_);
v___x_255_ = v_reuseFailAlloc_257_;
goto v_reusejp_254_;
}
v_reusejp_254_:
{
v_a_245_ = v_tail_249_;
v_a_246_ = v___x_255_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_boardToString(lean_object* v_b_260_){
_start:
{
lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; 
v___x_261_ = ((lean_object*)(lp_SoftwareLogic__Go_Go_boardToString___closed__0));
v___x_262_ = lean_box(0);
v___x_263_ = lp_SoftwareLogic__Go_List_mapTR_loop___at___00Go_boardToString_spec__0(v_b_260_, v___x_262_);
v___x_264_ = l_String_intercalate(v___x_261_, v___x_263_);
return v___x_264_;
}
}
lean_object* initialize_Init(uint8_t builtin);
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
