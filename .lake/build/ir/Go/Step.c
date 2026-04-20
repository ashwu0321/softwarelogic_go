// Lean compiler output
// Module: Go.Step
// Imports: public import Init public meta import Init public import Go.Move
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
uint8_t lp_SoftwareLogic__Go_Go_legalMove(lean_object*, lean_object*);
lean_object* lp_SoftwareLogic__Go_Go_resolvePlacement_x3f(lean_object*, lean_object*);
lean_object* lp_SoftwareLogic__Go_Go_switchTurn(lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_checkMove_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_applyMove_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_applyMoves_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_applyLegalMove(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_applyCheckedMove_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_applyCheckedMoves_x3f(lean_object*, lean_object*);
static const lean_ctor_object lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__0 = (const lean_object*)&lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__0_value;
static const lean_ctor_object lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__0_value)}};
static const lean_object* lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__1 = (const lean_object*)&lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__1_value;
static const lean_ctor_object lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__2 = (const lean_object*)&lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__2_value;
static const lean_ctor_object lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__2_value)}};
static const lean_object* lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__3 = (const lean_object*)&lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__3_value;
static const lean_ctor_object lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__4 = (const lean_object*)&lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__4_value;
static const lean_ctor_object lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__4_value)}};
static const lean_object* lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__5 = (const lean_object*)&lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__5_value;
static const lean_ctor_object lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__6 = (const lean_object*)&lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__6_value;
static const lean_ctor_object lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__6_value)}};
static const lean_object* lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__7 = (const lean_object*)&lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__7_value;
static const lean_ctor_object lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__8 = (const lean_object*)&lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__8_value;
static const lean_ctor_object lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__8_value)}};
static const lean_object* lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__9 = (const lean_object*)&lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__9_value;
static const lean_ctor_object lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__9_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__10 = (const lean_object*)&lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__10_value;
static const lean_ctor_object lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__10_value)}};
static const lean_object* lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__11 = (const lean_object*)&lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__11_value;
static const lean_ctor_object lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__7_value),((lean_object*)&lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__11_value)}};
static const lean_object* lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__12 = (const lean_object*)&lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__12_value;
static const lean_ctor_object lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__12_value)}};
static const lean_object* lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__13 = (const lean_object*)&lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__13_value;
static const lean_ctor_object lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__5_value),((lean_object*)&lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__13_value)}};
static const lean_object* lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__14 = (const lean_object*)&lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__14_value;
static const lean_ctor_object lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__14_value)}};
static const lean_object* lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__15 = (const lean_object*)&lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__15_value;
static const lean_ctor_object lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__3_value),((lean_object*)&lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__15_value)}};
static const lean_object* lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__16 = (const lean_object*)&lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__16_value;
static const lean_ctor_object lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__1_value),((lean_object*)&lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__16_value)}};
static const lean_object* lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__17 = (const lean_object*)&lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__17_value;
LEAN_EXPORT const lean_object* lp_SoftwareLogic__Go_Go_captureDemoMoves = (const lean_object*)&lp_SoftwareLogic__Go_Go_captureDemoMoves___closed__17_value;
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_checkMove_x3f(lean_object* v_st_1_, lean_object* v_m_2_){
_start:
{
uint8_t v___x_3_; 
lean_inc(v_m_2_);
v___x_3_ = lp_SoftwareLogic__Go_Go_legalMove(v_st_1_, v_m_2_);
if (v___x_3_ == 0)
{
lean_object* v___x_4_; 
lean_dec(v_m_2_);
v___x_4_ = lean_box(0);
return v___x_4_;
}
else
{
lean_object* v___x_5_; 
v___x_5_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5_, 0, v_m_2_);
return v___x_5_;
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_applyMove_x3f(lean_object* v_st_6_, lean_object* v_x_7_){
_start:
{
if (lean_obj_tag(v_x_7_) == 0)
{
lean_object* v_p_8_; uint8_t v___x_9_; 
v_p_8_ = lean_ctor_get(v_x_7_, 0);
lean_inc_ref(v_p_8_);
lean_inc_ref(v_st_6_);
v___x_9_ = lp_SoftwareLogic__Go_Go_legalMove(v_st_6_, v_x_7_);
if (v___x_9_ == 0)
{
lean_object* v___x_10_; 
lean_dec_ref(v_p_8_);
lean_dec_ref(v_st_6_);
v___x_10_ = lean_box(0);
return v___x_10_;
}
else
{
lean_object* v___x_11_; 
v___x_11_ = lp_SoftwareLogic__Go_Go_resolvePlacement_x3f(v_st_6_, v_p_8_);
if (lean_obj_tag(v___x_11_) == 0)
{
return v___x_11_;
}
else
{
lean_object* v_val_12_; lean_object* v___x_14_; uint8_t v_isShared_15_; uint8_t v_isSharedCheck_20_; 
v_val_12_ = lean_ctor_get(v___x_11_, 0);
v_isSharedCheck_20_ = !lean_is_exclusive(v___x_11_);
if (v_isSharedCheck_20_ == 0)
{
v___x_14_ = v___x_11_;
v_isShared_15_ = v_isSharedCheck_20_;
goto v_resetjp_13_;
}
else
{
lean_inc(v_val_12_);
lean_dec(v___x_11_);
v___x_14_ = lean_box(0);
v_isShared_15_ = v_isSharedCheck_20_;
goto v_resetjp_13_;
}
v_resetjp_13_:
{
lean_object* v___x_16_; lean_object* v___x_18_; 
v___x_16_ = lp_SoftwareLogic__Go_Go_switchTurn(v_val_12_);
if (v_isShared_15_ == 0)
{
lean_ctor_set(v___x_14_, 0, v___x_16_);
v___x_18_ = v___x_14_;
goto v_reusejp_17_;
}
else
{
lean_object* v_reuseFailAlloc_19_; 
v_reuseFailAlloc_19_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_19_, 0, v___x_16_);
v___x_18_ = v_reuseFailAlloc_19_;
goto v_reusejp_17_;
}
v_reusejp_17_:
{
return v___x_18_;
}
}
}
}
}
else
{
lean_object* v___x_21_; lean_object* v___x_22_; 
v___x_21_ = lp_SoftwareLogic__Go_Go_switchTurn(v_st_6_);
v___x_22_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_22_, 0, v___x_21_);
return v___x_22_;
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_applyMoves_x3f(lean_object* v_x_23_, lean_object* v_x_24_){
_start:
{
if (lean_obj_tag(v_x_24_) == 0)
{
lean_object* v___x_25_; 
v___x_25_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_25_, 0, v_x_23_);
return v___x_25_;
}
else
{
lean_object* v_head_26_; lean_object* v_tail_27_; lean_object* v___x_28_; 
v_head_26_ = lean_ctor_get(v_x_24_, 0);
lean_inc(v_head_26_);
v_tail_27_ = lean_ctor_get(v_x_24_, 1);
lean_inc(v_tail_27_);
lean_dec_ref(v_x_24_);
v___x_28_ = lp_SoftwareLogic__Go_Go_applyMove_x3f(v_x_23_, v_head_26_);
if (lean_obj_tag(v___x_28_) == 0)
{
lean_dec(v_tail_27_);
return v___x_28_;
}
else
{
lean_object* v_val_29_; 
v_val_29_ = lean_ctor_get(v___x_28_, 0);
lean_inc(v_val_29_);
lean_dec_ref(v___x_28_);
v_x_23_ = v_val_29_;
v_x_24_ = v_tail_27_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_applyLegalMove(lean_object* v_st_31_, lean_object* v_m_32_){
_start:
{
lean_object* v___x_33_; 
lean_inc_ref(v_st_31_);
v___x_33_ = lp_SoftwareLogic__Go_Go_applyMove_x3f(v_st_31_, v_m_32_);
if (lean_obj_tag(v___x_33_) == 0)
{
return v_st_31_;
}
else
{
lean_object* v_val_34_; 
lean_dec_ref(v_st_31_);
v_val_34_ = lean_ctor_get(v___x_33_, 0);
lean_inc(v_val_34_);
lean_dec_ref(v___x_33_);
return v_val_34_;
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_applyCheckedMove_x3f(lean_object* v_st_35_, lean_object* v_m_36_){
_start:
{
lean_object* v___x_37_; 
lean_inc_ref(v_st_35_);
v___x_37_ = lp_SoftwareLogic__Go_Go_checkMove_x3f(v_st_35_, v_m_36_);
if (lean_obj_tag(v___x_37_) == 0)
{
lean_object* v___x_38_; 
lean_dec_ref(v_st_35_);
v___x_38_ = lean_box(0);
return v___x_38_;
}
else
{
lean_object* v_val_39_; lean_object* v___x_41_; uint8_t v_isShared_42_; uint8_t v_isSharedCheck_47_; 
v_val_39_ = lean_ctor_get(v___x_37_, 0);
v_isSharedCheck_47_ = !lean_is_exclusive(v___x_37_);
if (v_isSharedCheck_47_ == 0)
{
v___x_41_ = v___x_37_;
v_isShared_42_ = v_isSharedCheck_47_;
goto v_resetjp_40_;
}
else
{
lean_inc(v_val_39_);
lean_dec(v___x_37_);
v___x_41_ = lean_box(0);
v_isShared_42_ = v_isSharedCheck_47_;
goto v_resetjp_40_;
}
v_resetjp_40_:
{
lean_object* v___x_43_; lean_object* v___x_45_; 
v___x_43_ = lp_SoftwareLogic__Go_Go_applyLegalMove(v_st_35_, v_val_39_);
if (v_isShared_42_ == 0)
{
lean_ctor_set(v___x_41_, 0, v___x_43_);
v___x_45_ = v___x_41_;
goto v_reusejp_44_;
}
else
{
lean_object* v_reuseFailAlloc_46_; 
v_reuseFailAlloc_46_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_46_, 0, v___x_43_);
v___x_45_ = v_reuseFailAlloc_46_;
goto v_reusejp_44_;
}
v_reusejp_44_:
{
return v___x_45_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_SoftwareLogic__Go_Go_applyCheckedMoves_x3f(lean_object* v_x_48_, lean_object* v_x_49_){
_start:
{
if (lean_obj_tag(v_x_49_) == 0)
{
lean_object* v___x_50_; 
v___x_50_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_50_, 0, v_x_48_);
return v___x_50_;
}
else
{
lean_object* v_head_51_; lean_object* v_tail_52_; lean_object* v___x_53_; 
v_head_51_ = lean_ctor_get(v_x_49_, 0);
lean_inc(v_head_51_);
v_tail_52_ = lean_ctor_get(v_x_49_, 1);
lean_inc(v_tail_52_);
lean_dec_ref(v_x_49_);
v___x_53_ = lp_SoftwareLogic__Go_Go_applyCheckedMove_x3f(v_x_48_, v_head_51_);
if (lean_obj_tag(v___x_53_) == 0)
{
lean_dec(v_tail_52_);
return v___x_53_;
}
else
{
lean_object* v_val_54_; 
v_val_54_ = lean_ctor_get(v___x_53_, 0);
lean_inc(v_val_54_);
lean_dec_ref(v___x_53_);
v_x_48_ = v_val_54_;
v_x_49_ = v_tail_52_;
goto _start;
}
}
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_SoftwareLogic__Go_Go_Move(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_SoftwareLogic__Go_Go_Step(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_SoftwareLogic__Go_Go_Move(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
