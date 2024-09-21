// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vco_sim_syn2.h for the primary calling header

#include "Vco_sim_syn2__pch.h"
#include "Vco_sim_syn2_fpu_mul.h"

VL_ATTR_COLD void Vco_sim_syn2_fpu_mul___eval_static__TOP__co_sim_syn2__DOT__golden__DOT__x1_mul(Vco_sim_syn2_fpu_mul* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_syn2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vco_sim_syn2_fpu_mul___eval_static__TOP__co_sim_syn2__DOT__golden__DOT__x1_mul\n"); );
    // Body
    vlSelf->__PVT__fpu_op = 0U;
    vlSelf->__PVT__zero = 0U;
    vlSelf->__PVT__opa_r = 0U;
    vlSelf->__PVT__opb_r = 0U;
    vlSelf->out = 0U;
    vlSelf->__PVT__div_by_zero = 0U;
    vlSelf->__PVT__exp_r = 0U;
    vlSelf->__PVT__overflow = 0U;
    vlSelf->__PVT__underflow = 0U;
    vlSelf->__PVT__inf = 0U;
    vlSelf->__PVT__snan = 0U;
    vlSelf->__PVT__qnan = 0U;
    vlSelf->__PVT__ine = 0U;
    vlSelf->__PVT__rmode_r1 = 0U;
    vlSelf->__PVT__rmode_r2 = 0U;
    vlSelf->__PVT__fpu_op_r1 = 0U;
    vlSelf->__PVT__fpu_op_r2 = 0U;
    vlSelf->__PVT__out_o1 = 0U;
    vlSelf->__PVT__inf_o1 = 0U;
    vlSelf->__PVT__snan_o1 = 0U;
    vlSelf->__PVT__qnan_o1 = 0U;
    vlSelf->__PVT__ine_o1 = 0U;
    vlSelf->__PVT__overflow_o1 = 0U;
    vlSelf->__PVT__underflow_o1 = 0U;
    vlSelf->__PVT__zero_o1 = 0U;
    vlSelf->__PVT__div_by_zero_o1 = 0U;
    vlSelf->__PVT__sign_mul_r = 0U;
    vlSelf->__PVT__inf_mul_r = 0U;
    vlSelf->__PVT__exp_ovf_r = 0U;
    vlSelf->__PVT__sign_exe_r = 0U;
    vlSelf->__PVT__fract_denorm = 0ULL;
    vlSelf->__PVT__sign = 0U;
    vlSelf->__PVT__opa_r1 = 0U;
    vlSelf->__PVT__opas_r1 = 0U;
    vlSelf->__PVT__opas_r2 = 0U;
    vlSelf->__PVT__inf_mul2 = 0U;
    vlSelf->__PVT__underflow_fmul_r = 0U;
    vlSelf->__PVT__opa_nan_r = 0U;
    vlSelf->__PVT__u0__DOT__expa_ff = 0U;
    vlSelf->__PVT__u0__DOT__infa_f_r = 0U;
    vlSelf->__PVT__u0__DOT__qnan_r_a = 0U;
    vlSelf->__PVT__u0__DOT__snan_r_a = 0U;
    vlSelf->__PVT__u0__DOT__expb_ff = 0U;
    vlSelf->__PVT__u0__DOT__infb_f_r = 0U;
    vlSelf->__PVT__u0__DOT__qnan_r_b = 0U;
    vlSelf->__PVT__u0__DOT__snan_r_b = 0U;
    vlSelf->__PVT__inf_d = 0U;
    vlSelf->__PVT__ind_d = 0U;
    vlSelf->__PVT__qnan_d = 0U;
    vlSelf->__PVT__snan_d = 0U;
    vlSelf->__PVT__opa_nan = 0U;
    vlSelf->__PVT__opb_nan = 0U;
    vlSelf->__PVT__u0__DOT__expa_00 = 0U;
    vlSelf->__PVT__u0__DOT__expb_00 = 0U;
    vlSelf->__PVT__u0__DOT__fracta_00 = 0U;
    vlSelf->__PVT__u0__DOT__fractb_00 = 0U;
    vlSelf->__PVT__opa_00 = 0U;
    vlSelf->__PVT__opb_00 = 0U;
    vlSelf->__PVT__opa_inf = 0U;
    vlSelf->__PVT__opb_inf = 0U;
    vlSelf->__PVT__opa_dn = 0U;
    vlSelf->__PVT__opb_dn = 0U;
    vlSelf->__PVT__exp_mul = 0U;
    vlSelf->__PVT__sign_mul = 0U;
    vlSelf->__PVT__u2__DOT__sign_d = 0U;
    vlSelf->__PVT__sign_exe = 0U;
    vlSelf->__PVT__inf_mul = 0U;
    vlSelf->__PVT__exp_ovf = 0U;
    vlSelf->__PVT__underflow_fmul_d = 0U;
    vlSelf->__PVT__u5__DOT__prod1 = 0ULL;
    vlSelf->__PVT__prod = 0ULL;
    vlSelf->__PVT__u4__DOT__fract_out_rnd = 0U;
    vlSelf->__PVT__u4__DOT__exp_out_rnd = 0U;
    vlSelf->__PVT__u4__DOT__fract_in_shftr_1 = 0ULL;
    vlSelf->__PVT__u4__DOT__fract_in_shftl_1 = 0ULL;
    vlSelf->u4__DOT____Vcellout__u3__shift_out = 0ULL;
}

VL_ATTR_COLD void Vco_sim_syn2_fpu_mul___stl_sequent__TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__0(Vco_sim_syn2_fpu_mul* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_syn2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vco_sim_syn2_fpu_mul___stl_sequent__TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__0\n"); );
    // Init
    CData/*0:0*/ __VdfgRegularize_h62b27241_3_10;
    __VdfgRegularize_h62b27241_3_10 = 0;
    CData/*0:0*/ u4__DOT____VdfgRegularize_he8d392c1_0_8;
    u4__DOT____VdfgRegularize_he8d392c1_0_8 = 0;
    CData/*0:0*/ u4__DOT____VdfgRegularize_he8d392c1_0_10;
    u4__DOT____VdfgRegularize_he8d392c1_0_10 = 0;
    CData/*0:0*/ u4__DOT____VdfgRegularize_he8d392c1_0_19;
    u4__DOT____VdfgRegularize_he8d392c1_0_19 = 0;
    CData/*0:0*/ u4__DOT____VdfgRegularize_he8d392c1_0_35;
    u4__DOT____VdfgRegularize_he8d392c1_0_35 = 0;
    CData/*0:0*/ u4__DOT____VdfgRegularize_he8d392c1_0_46;
    u4__DOT____VdfgRegularize_he8d392c1_0_46 = 0;
    CData/*0:0*/ u4__DOT____VdfgRegularize_he8d392c1_0_47;
    u4__DOT____VdfgRegularize_he8d392c1_0_47 = 0;
    CData/*0:0*/ u4__DOT____VdfgRegularize_he8d392c1_0_64;
    u4__DOT____VdfgRegularize_he8d392c1_0_64 = 0;
    // Body
    vlSelf->__PVT__u2__DOT__sign_d = (1U & ((vlSelf->__PVT__opa_r 
                                             >> 0x1fU)
                                             ? (~ (vlSelf->__PVT__opb_r 
                                                   >> 0x1fU))
                                             : (vlSelf->__PVT__opb_r 
                                                >> 0x1fU)));
    vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_10 
        = (1U & ((~ (IData)((0U != (0xffU & (vlSelf->__PVT__opa_r 
                                             >> 0x17U))))) 
                 | (~ (IData)((0U != (0xffU & (vlSelf->__PVT__opb_r 
                                               >> 0x17U)))))));
    vlSelf->__VdfgRegularize_h62b27241_3_3 = ((IData)(vlSelf->__PVT__qnan_d) 
                                              | (IData)(vlSelf->__PVT__snan_d));
    if ((3U == (IData)(vlSelf->__PVT__fpu_op_r1))) {
        vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_8 
            = (0x1ffU & ((0xffU & (vlSelf->__PVT__opa_r 
                                   >> 0x17U)) - (0xffU 
                                                 & (vlSelf->__PVT__opb_r 
                                                    >> 0x17U))));
        vlSelf->__PVT__u2__DOT__exp_tmp5 = (0xffU & 
                                            ((IData)(1U) 
                                             + ((IData)(0x7fU) 
                                                - (IData)(vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_8))));
        vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_9 
            = (0x1ffU & ((IData)(0x7fU) + (IData)(vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_8)));
        vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_12 
            = (1U & ((IData)(vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_9) 
                     >> 8U));
    } else {
        vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_8 
            = (0x1ffU & ((0xffU & (vlSelf->__PVT__opa_r 
                                   >> 0x17U)) + (0xffU 
                                                 & (vlSelf->__PVT__opb_r 
                                                    >> 0x17U))));
        vlSelf->__PVT__u2__DOT__exp_tmp5 = (0xffU & 
                                            (((IData)(0x7fU) 
                                              - (IData)(vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_8)) 
                                             - (IData)(1U)));
        vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_9 
            = (0x1ffU & ((IData)(vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_8) 
                         - (IData)(0x7fU)));
        vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_12 
            = (1U & (((~ (vlSelf->__PVT__opa_r >> 0x1eU)) 
                      & ((~ (vlSelf->__PVT__opb_r >> 0x1eU)) 
                         & ((IData)(vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_9) 
                            >> 7U))) | ((IData)(vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_9) 
                                        >> 8U)));
    }
    vlSelf->__VdfgRegularize_h62b27241_3_5 = ((IData)(vlSelf->__PVT__opa_00) 
                                              & (IData)(vlSelf->__PVT__opb_inf));
    vlSelf->__VdfgRegularize_h62b27241_3_4 = ((IData)(vlSelf->__PVT__opa_inf) 
                                              & (IData)(vlSelf->__PVT__opb_00));
    __VdfgRegularize_h62b27241_3_10 = ((IData)(vlSelf->__PVT__opa_inf) 
                                       | (IData)(vlSelf->__PVT__opb_inf));
    vlSelf->__VdfgRegularize_h62b27241_3_12 = ((IData)(vlSelf->__PVT__inf_mul2) 
                                               | (IData)(vlSelf->__PVT__inf_mul_r));
    vlSelf->__VdfgRegularize_h62b27241_3_2 = ((IData)(vlSelf->__PVT__opa_00) 
                                              | (IData)(vlSelf->__PVT__opb_00));
    u4__DOT____VdfgRegularize_he8d392c1_0_47 = ((3U 
                                                 == (IData)(vlSelf->__PVT__fpu_op_r3)) 
                                                & ((IData)(vlSelf->__PVT__exp_ovf_r) 
                                                   >> 1U));
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_41 
        = (IData)((0U == (IData)(vlSelf->__PVT__exp_ovf_r)));
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_52 
        = (IData)(((~ ((IData)(vlSelf->__PVT__exp_ovf_r) 
                       >> 1U)) & ((IData)(vlSelf->__PVT__rmode_r3) 
                                  >> 1U)));
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_40 
        = (IData)((3U == (IData)(vlSelf->__PVT__exp_ovf_r)));
    vlSelf->__PVT__u4__DOT__exp_in_80 = (IData)((((IData)(vlSelf->__PVT__exp_r) 
                                                  >> 7U) 
                                                 & (~ (IData)(
                                                              (0U 
                                                               != 
                                                               (0x7fU 
                                                                & (IData)(vlSelf->__PVT__exp_r)))))));
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_37 
        = ((2U == (IData)(vlSelf->__PVT__fpu_op_r3)) 
           | (3U == (IData)(vlSelf->__PVT__fpu_op_r3)));
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_61 
        = (1U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__exp_r)))) 
                 | ((IData)(vlSelf->__PVT__exp_ovf_r) 
                    >> 1U)));
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_20 
        = (IData)((1U == (IData)(vlSelf->__PVT__exp_ovf_r)));
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_13 
        = (1U & ((~ ((IData)(vlSelf->__PVT__exp_ovf_r) 
                     >> 1U)) & (~ (IData)((0U != (IData)(vlSelf->__PVT__exp_r))))));
    vlSelf->__PVT__u4__DOT__op_dn = ((IData)(vlSelf->__PVT__opa_dn) 
                                     | (IData)(vlSelf->__PVT__opb_dn));
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_59 
        = (IData)((2U == (IData)(vlSelf->__PVT__exp_ovf_r)));
    u4__DOT____VdfgRegularize_he8d392c1_0_19 = ((5U 
                                                 == (IData)(vlSelf->__PVT__fpu_op_r3)) 
                                                | (4U 
                                                   == (IData)(vlSelf->__PVT__fpu_op_r3)));
    u4__DOT____VdfgRegularize_he8d392c1_0_8 = ((IData)(vlSelf->__PVT__exp_r) 
                                               < ((0U 
                                                   == (IData)(vlSelf->__PVT__rmode_r3))
                                                   ? 0x7eU
                                                   : 0x7fU));
    vlSelf->__PVT__fract_denorm = vlSelf->__PVT__prod;
    vlSelf->__VdfgRegularize_h62b27241_3_7 = ((IData)(vlSelf->__VdfgRegularize_h62b27241_3_4) 
                                              | (IData)(vlSelf->__VdfgRegularize_h62b27241_3_5));
    vlSelf->__VdfgRegularize_h62b27241_3_9 = ((IData)(vlSelf->__VdfgRegularize_h62b27241_3_12) 
                                              & (0U 
                                                 == (IData)(vlSelf->__PVT__rmode_r3)));
    vlSelf->__VdfgRegularize_h62b27241_3_11 = ((IData)(vlSelf->__VdfgRegularize_h62b27241_3_12) 
                                               | (IData)(__VdfgRegularize_h62b27241_3_10));
    vlSelf->__PVT__or_result = (((2U == (IData)(vlSelf->__PVT__fpu_op_r3)) 
                                 & (IData)(vlSelf->__VdfgRegularize_h62b27241_3_2)) 
                                | ((3U == (IData)(vlSelf->__PVT__fpu_op_r3)) 
                                   & ((IData)(vlSelf->__PVT__opa_00) 
                                      | (IData)(vlSelf->__PVT__opb_inf))));
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_67 
        = ((IData)(vlSelf->__PVT__u4__DOT__op_dn) & (IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_20));
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_15 
        = ((IData)(vlSelf->__PVT__u4__DOT__op_dn) & 
           ((IData)(vlSelf->__PVT__exp_ovf_r) >> 1U));
    u4__DOT____VdfgRegularize_he8d392c1_0_10 = ((IData)(vlSelf->__PVT__opas_r2) 
                                                & (IData)(u4__DOT____VdfgRegularize_he8d392c1_0_8));
    vlSelf->u4__DOT____Vcellout__u3__shift_out = (0xffffffffffffULL 
                                                  & ((0x20U 
                                                      & ((IData)(vlSelf->__PVT__exp_r) 
                                                         - (IData)(0x3dU)))
                                                      ? 
                                                     ((0x10U 
                                                       & ((IData)(vlSelf->__PVT__exp_r) 
                                                          - (IData)(0x3dU)))
                                                       ? 
                                                      ((8U 
                                                        & ((IData)(vlSelf->__PVT__exp_r) 
                                                           - (IData)(0x3dU)))
                                                        ? vlSelf->__PVT__fract_denorm
                                                        : 
                                                       ((4U 
                                                         & ((IData)(vlSelf->__PVT__exp_r) 
                                                            - (IData)(0x3dU)))
                                                         ? vlSelf->__PVT__fract_denorm
                                                         : 
                                                        ((2U 
                                                          & ((IData)(vlSelf->__PVT__exp_r) 
                                                             - (IData)(0x3dU)))
                                                          ? vlSelf->__PVT__fract_denorm
                                                          : 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? vlSelf->__PVT__fract_denorm
                                                           : 0ULL))))
                                                       : 
                                                      ((8U 
                                                        & ((IData)(vlSelf->__PVT__exp_r) 
                                                           - (IData)(0x3dU)))
                                                        ? 
                                                       ((4U 
                                                         & ((IData)(vlSelf->__PVT__exp_r) 
                                                            - (IData)(0x3dU)))
                                                         ? 
                                                        ((2U 
                                                          & ((IData)(vlSelf->__PVT__exp_r) 
                                                             - (IData)(0x3dU)))
                                                          ? 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x2fU)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x2eU))
                                                          : 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x2dU)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x2cU)))
                                                         : 
                                                        ((2U 
                                                          & ((IData)(vlSelf->__PVT__exp_r) 
                                                             - (IData)(0x3dU)))
                                                          ? 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x2bU)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x2aU))
                                                          : 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x29U)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x28U))))
                                                        : 
                                                       ((4U 
                                                         & ((IData)(vlSelf->__PVT__exp_r) 
                                                            - (IData)(0x3dU)))
                                                         ? 
                                                        ((2U 
                                                          & ((IData)(vlSelf->__PVT__exp_r) 
                                                             - (IData)(0x3dU)))
                                                          ? 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x27U)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x26U))
                                                          : 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x25U)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x24U)))
                                                         : 
                                                        ((2U 
                                                          & ((IData)(vlSelf->__PVT__exp_r) 
                                                             - (IData)(0x3dU)))
                                                          ? 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x23U)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x22U))
                                                          : 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x21U)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x20U))))))
                                                      : 
                                                     ((0x10U 
                                                       & ((IData)(vlSelf->__PVT__exp_r) 
                                                          - (IData)(0x3dU)))
                                                       ? 
                                                      ((8U 
                                                        & ((IData)(vlSelf->__PVT__exp_r) 
                                                           - (IData)(0x3dU)))
                                                        ? 
                                                       ((4U 
                                                         & ((IData)(vlSelf->__PVT__exp_r) 
                                                            - (IData)(0x3dU)))
                                                         ? 
                                                        ((2U 
                                                          & ((IData)(vlSelf->__PVT__exp_r) 
                                                             - (IData)(0x3dU)))
                                                          ? 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x1fU)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x1eU))
                                                          : 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x1dU)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x1cU)))
                                                         : 
                                                        ((2U 
                                                          & ((IData)(vlSelf->__PVT__exp_r) 
                                                             - (IData)(0x3dU)))
                                                          ? 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x1bU)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x1aU))
                                                          : 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x19U)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x18U))))
                                                        : 
                                                       ((4U 
                                                         & ((IData)(vlSelf->__PVT__exp_r) 
                                                            - (IData)(0x3dU)))
                                                         ? 
                                                        ((2U 
                                                          & ((IData)(vlSelf->__PVT__exp_r) 
                                                             - (IData)(0x3dU)))
                                                          ? 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x17U)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x16U))
                                                          : 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x15U)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x14U)))
                                                         : 
                                                        ((2U 
                                                          & ((IData)(vlSelf->__PVT__exp_r) 
                                                             - (IData)(0x3dU)))
                                                          ? 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x13U)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x12U))
                                                          : 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x11U)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x10U)))))
                                                       : 
                                                      ((8U 
                                                        & ((IData)(vlSelf->__PVT__exp_r) 
                                                           - (IData)(0x3dU)))
                                                        ? 
                                                       ((4U 
                                                         & ((IData)(vlSelf->__PVT__exp_r) 
                                                            - (IData)(0x3dU)))
                                                         ? 
                                                        ((2U 
                                                          & ((IData)(vlSelf->__PVT__exp_r) 
                                                             - (IData)(0x3dU)))
                                                          ? 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0xfU)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0xeU))
                                                          : 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0xdU)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0xcU)))
                                                         : 
                                                        ((2U 
                                                          & ((IData)(vlSelf->__PVT__exp_r) 
                                                             - (IData)(0x3dU)))
                                                          ? 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0xbU)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0xaU))
                                                          : 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 9U)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 8U))))
                                                        : 
                                                       ((4U 
                                                         & ((IData)(vlSelf->__PVT__exp_r) 
                                                            - (IData)(0x3dU)))
                                                         ? 
                                                        ((2U 
                                                          & ((IData)(vlSelf->__PVT__exp_r) 
                                                             - (IData)(0x3dU)))
                                                          ? 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 7U)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 6U))
                                                          : 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 5U)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 4U)))
                                                         : 
                                                        ((2U 
                                                          & ((IData)(vlSelf->__PVT__exp_r) 
                                                             - (IData)(0x3dU)))
                                                          ? 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 3U)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 2U))
                                                          : 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 1U)
                                                           : vlSelf->__PVT__fract_denorm)))))));
    vlSelf->__PVT__u4__DOT__u6__DOT__fi_ldz_r0 = ((1U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__fract_denorm 
                                                              >> 0x2fU)))
                                                   ? 1U
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__fract_denorm 
                                                                >> 0x2eU))))
                                                    ? 2U
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->__PVT__fract_denorm 
                                                                 >> 0x2dU))))
                                                     ? 3U
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (0xfU 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__fract_denorm 
                                                                  >> 0x2cU))))
                                                      ? 4U
                                                      : 
                                                     ((1U 
                                                       == 
                                                       (0x1fU 
                                                        & (IData)(
                                                                  (vlSelf->__PVT__fract_denorm 
                                                                   >> 0x2bU))))
                                                       ? 5U
                                                       : 
                                                      ((1U 
                                                        == 
                                                        (0x3fU 
                                                         & (IData)(
                                                                   (vlSelf->__PVT__fract_denorm 
                                                                    >> 0x2aU))))
                                                        ? 6U
                                                        : 
                                                       ((1U 
                                                         == 
                                                         (0x7fU 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__fract_denorm 
                                                                     >> 0x29U))))
                                                         ? 7U
                                                         : 
                                                        ((1U 
                                                          == 
                                                          (0xffU 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__fract_denorm 
                                                                      >> 0x28U))))
                                                          ? 8U
                                                          : 
                                                         ((1U 
                                                           == 
                                                           (0x1ffU 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__fract_denorm 
                                                                       >> 0x27U))))
                                                           ? 9U
                                                           : 
                                                          ((1U 
                                                            == 
                                                            (0x3ffU 
                                                             & (IData)(
                                                                       (vlSelf->__PVT__fract_denorm 
                                                                        >> 0x26U))))
                                                            ? 0xaU
                                                            : 
                                                           ((1U 
                                                             == 
                                                             (0x7ffU 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__fract_denorm 
                                                                         >> 0x25U))))
                                                             ? 0xbU
                                                             : 
                                                            ((1U 
                                                              == 
                                                              (0xfffU 
                                                               & (IData)(
                                                                         (vlSelf->__PVT__fract_denorm 
                                                                          >> 0x24U))))
                                                              ? 0xcU
                                                              : 
                                                             ((1U 
                                                               == 
                                                               (0x1fffU 
                                                                & (IData)(
                                                                          (vlSelf->__PVT__fract_denorm 
                                                                           >> 0x23U))))
                                                               ? 0xdU
                                                               : 
                                                              ((1U 
                                                                == 
                                                                (0x3fffU 
                                                                 & (IData)(
                                                                           (vlSelf->__PVT__fract_denorm 
                                                                            >> 0x22U))))
                                                                ? 0xeU
                                                                : 
                                                               ((1U 
                                                                 == 
                                                                 (0x7fffU 
                                                                  & (IData)(
                                                                            (vlSelf->__PVT__fract_denorm 
                                                                             >> 0x21U))))
                                                                 ? 0xfU
                                                                 : 
                                                                ((1U 
                                                                  == 
                                                                  (0xffffU 
                                                                   & (IData)(
                                                                             (vlSelf->__PVT__fract_denorm 
                                                                              >> 0x20U))))
                                                                  ? 0x10U
                                                                  : 
                                                                 ((1U 
                                                                   == 
                                                                   (0x1ffffU 
                                                                    & (IData)(
                                                                              (vlSelf->__PVT__fract_denorm 
                                                                               >> 0x1fU))))
                                                                   ? 0x11U
                                                                   : 
                                                                  ((1U 
                                                                    == 
                                                                    (0x3ffffU 
                                                                     & (IData)(
                                                                               (vlSelf->__PVT__fract_denorm 
                                                                                >> 0x1eU))))
                                                                    ? 0x12U
                                                                    : 
                                                                   ((1U 
                                                                     == 
                                                                     (0x7ffffU 
                                                                      & (IData)(
                                                                                (vlSelf->__PVT__fract_denorm 
                                                                                >> 0x1dU))))
                                                                     ? 0x13U
                                                                     : 
                                                                    ((1U 
                                                                      == 
                                                                      (0xfffffU 
                                                                       & (IData)(
                                                                                (vlSelf->__PVT__fract_denorm 
                                                                                >> 0x1cU))))
                                                                      ? 0x14U
                                                                      : 
                                                                     ((1U 
                                                                       == 
                                                                       (0x1fffffU 
                                                                        & (IData)(
                                                                                (vlSelf->__PVT__fract_denorm 
                                                                                >> 0x1bU))))
                                                                       ? 0x15U
                                                                       : 
                                                                      ((1U 
                                                                        == 
                                                                        (0x3fffffU 
                                                                         & (IData)(
                                                                                (vlSelf->__PVT__fract_denorm 
                                                                                >> 0x1aU))))
                                                                        ? 0x16U
                                                                        : 
                                                                       ((1U 
                                                                         == 
                                                                         (0x7fffffU 
                                                                          & (IData)(
                                                                                (vlSelf->__PVT__fract_denorm 
                                                                                >> 0x19U))))
                                                                         ? 0x17U
                                                                         : 
                                                                        ((1U 
                                                                          == 
                                                                          (0xffffffU 
                                                                           & (IData)(
                                                                                (vlSelf->__PVT__fract_denorm 
                                                                                >> 0x18U))))
                                                                          ? 0x18U
                                                                          : 
                                                                         ((1U 
                                                                           == 
                                                                           (0x1ffffffU 
                                                                            & (IData)(
                                                                                (vlSelf->__PVT__fract_denorm 
                                                                                >> 0x17U))))
                                                                           ? 0x19U
                                                                           : 
                                                                          ((1U 
                                                                            == 
                                                                            (0x3ffffffU 
                                                                             & (IData)(
                                                                                (vlSelf->__PVT__fract_denorm 
                                                                                >> 0x16U))))
                                                                            ? 0x1aU
                                                                            : 
                                                                           ((1U 
                                                                             == 
                                                                             (0x7ffffffU 
                                                                              & (IData)(
                                                                                (vlSelf->__PVT__fract_denorm 
                                                                                >> 0x15U))))
                                                                             ? 0x1bU
                                                                             : 
                                                                            ((1U 
                                                                              == 
                                                                              (0xfffffffU 
                                                                               & (IData)(
                                                                                (vlSelf->__PVT__fract_denorm 
                                                                                >> 0x14U))))
                                                                              ? 0x1cU
                                                                              : 
                                                                             ((1U 
                                                                               == 
                                                                               (0x1fffffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__fract_denorm 
                                                                                >> 0x13U))))
                                                                               ? 0x1dU
                                                                               : 
                                                                              ((1U 
                                                                                == 
                                                                                (0x3fffffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__fract_denorm 
                                                                                >> 0x12U))))
                                                                                ? 0x1eU
                                                                                : 
                                                                               ((1U 
                                                                                == 
                                                                                (0x7fffffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__fract_denorm 
                                                                                >> 0x11U))))
                                                                                 ? 0x1fU
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(
                                                                                (vlSelf->__PVT__fract_denorm 
                                                                                >> 0x10U)))
                                                                                 ? 0x20U
                                                                                 : 
                                                                                ((1ULL 
                                                                                == 
                                                                                (0x1ffffffffULL 
                                                                                & (vlSelf->__PVT__fract_denorm 
                                                                                >> 0xfU)))
                                                                                 ? 0x21U
                                                                                 : 
                                                                                ((1ULL 
                                                                                == 
                                                                                (0x3ffffffffULL 
                                                                                & (vlSelf->__PVT__fract_denorm 
                                                                                >> 0xeU)))
                                                                                 ? 0x22U
                                                                                 : 
                                                                                ((1ULL 
                                                                                == 
                                                                                (0x7ffffffffULL 
                                                                                & (vlSelf->__PVT__fract_denorm 
                                                                                >> 0xdU)))
                                                                                 ? 0x23U
                                                                                 : 
                                                                                ((1ULL 
                                                                                == 
                                                                                (0xfffffffffULL 
                                                                                & (vlSelf->__PVT__fract_denorm 
                                                                                >> 0xcU)))
                                                                                 ? 0x24U
                                                                                 : 
                                                                                ((1ULL 
                                                                                == 
                                                                                (0x1fffffffffULL 
                                                                                & (vlSelf->__PVT__fract_denorm 
                                                                                >> 0xbU)))
                                                                                 ? 0x25U
                                                                                 : 
                                                                                ((1ULL 
                                                                                == 
                                                                                (0x3fffffffffULL 
                                                                                & (vlSelf->__PVT__fract_denorm 
                                                                                >> 0xaU)))
                                                                                 ? 0x26U
                                                                                 : 
                                                                                ((1ULL 
                                                                                == 
                                                                                (0x7fffffffffULL 
                                                                                & (vlSelf->__PVT__fract_denorm 
                                                                                >> 9U)))
                                                                                 ? 0x27U
                                                                                 : 
                                                                                ((1ULL 
                                                                                == 
                                                                                (0xffffffffffULL 
                                                                                & (vlSelf->__PVT__fract_denorm 
                                                                                >> 8U)))
                                                                                 ? 0x28U
                                                                                 : 
                                                                                ((1ULL 
                                                                                == 
                                                                                (0x1ffffffffffULL 
                                                                                & (vlSelf->__PVT__fract_denorm 
                                                                                >> 7U)))
                                                                                 ? 0x29U
                                                                                 : 
                                                                                ((1ULL 
                                                                                == 
                                                                                (0x3ffffffffffULL 
                                                                                & (vlSelf->__PVT__fract_denorm 
                                                                                >> 6U)))
                                                                                 ? 0x2aU
                                                                                 : 
                                                                                ((1ULL 
                                                                                == 
                                                                                (0x7ffffffffffULL 
                                                                                & (vlSelf->__PVT__fract_denorm 
                                                                                >> 5U)))
                                                                                 ? 0x2bU
                                                                                 : 
                                                                                ((1ULL 
                                                                                == 
                                                                                (0xfffffffffffULL 
                                                                                & (vlSelf->__PVT__fract_denorm 
                                                                                >> 4U)))
                                                                                 ? 0x2cU
                                                                                 : 
                                                                                ((1ULL 
                                                                                == 
                                                                                (0x1fffffffffffULL 
                                                                                & (vlSelf->__PVT__fract_denorm 
                                                                                >> 3U)))
                                                                                 ? 0x2dU
                                                                                 : 
                                                                                ((1ULL 
                                                                                == 
                                                                                (0x3fffffffffffULL 
                                                                                & (vlSelf->__PVT__fract_denorm 
                                                                                >> 2U)))
                                                                                 ? 0x2eU
                                                                                 : 
                                                                                ((1ULL 
                                                                                == 
                                                                                (0x7fffffffffffULL 
                                                                                & (vlSelf->__PVT__fract_denorm 
                                                                                >> 1U)))
                                                                                 ? 0x2fU
                                                                                 : 0x30U)))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->__PVT__inf_fmul = (((IData)(vlSelf->__VdfgRegularize_h62b27241_3_9) 
                                | (IData)(__VdfgRegularize_h62b27241_3_10)) 
                               & ((~ (IData)(vlSelf->__VdfgRegularize_h62b27241_3_7)) 
                                  & (2U == (IData)(vlSelf->__PVT__fpu_op_r3))));
    vlSelf->__PVT__ine_mula = ((IData)(vlSelf->__VdfgRegularize_h62b27241_3_11) 
                               & ((1U == (IData)(vlSelf->__PVT__rmode_r3)) 
                                  & ((~ (IData)(vlSelf->__VdfgRegularize_h62b27241_3_7)) 
                                     & ((IData)(vlSelf->__PVT__fpu_op_r3) 
                                        >> 1U))));
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_48 
        = (((~ (IData)(vlSelf->__PVT__exp_ovf_r)) & (IData)(u4__DOT____VdfgRegularize_he8d392c1_0_47)) 
           | (IData)(vlSelf->__PVT__or_result));
    vlSelf->__PVT__u4__DOT__div_nr = ((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_15) 
                                      & ((~ (IData)(
                                                    (0U 
                                                     != 
                                                     (0xffffffU 
                                                      & (IData)(
                                                                (vlSelf->__PVT__fract_denorm 
                                                                 >> 0x17U)))))) 
                                         & (0x16U < (IData)(vlSelf->__PVT__exp_r))));
    vlSelf->__PVT__u4__DOT__f2i_max = (((~ (IData)(vlSelf->__PVT__opas_r2)) 
                                        & (0x9dU < (IData)(vlSelf->__PVT__exp_r))) 
                                       | ((IData)(u4__DOT____VdfgRegularize_he8d392c1_0_10) 
                                          & ((0U != vlSelf->__PVT__fract_denorm) 
                                             & (3U 
                                                == (IData)(vlSelf->__PVT__rmode_r3)))));
    vlSelf->__PVT__u4__DOT__f2i_zero = (((~ (IData)(vlSelf->__PVT__opas_r2)) 
                                         & (IData)(u4__DOT____VdfgRegularize_he8d392c1_0_8)) 
                                        | (((IData)(vlSelf->__PVT__opas_r2) 
                                            & (0x9dU 
                                               < (IData)(vlSelf->__PVT__exp_r))) 
                                           | ((IData)(u4__DOT____VdfgRegularize_he8d392c1_0_10) 
                                              & ((~ (IData)(
                                                            (0U 
                                                             != vlSelf->__PVT__fract_denorm))) 
                                                 | (3U 
                                                    != (IData)(vlSelf->__PVT__rmode_r3))))));
    vlSelf->__PVT__u4__DOT__div_exp2 = (0xffU & (((IData)(1U) 
                                                  + (IData)(vlSelf->__PVT__exp_r)) 
                                                 - (IData)(vlSelf->__PVT__u4__DOT__u6__DOT__fi_ldz_r0)));
    vlSelf->__PVT__u4__DOT__fi_ldz_2 = ((0x80U & (((IData)(0x17U) 
                                                   - (IData)(vlSelf->__PVT__u4__DOT__u6__DOT__fi_ldz_r0)) 
                                                  << 1U)) 
                                        | (0x7fU & 
                                           ((IData)(0x17U) 
                                            - (IData)(vlSelf->__PVT__u4__DOT__u6__DOT__fi_ldz_r0))));
    vlSelf->__PVT__u4__DOT__exp_next_mi = (0x1ffU & 
                                           (((IData)(1U) 
                                             + (IData)(vlSelf->__PVT__exp_r)) 
                                            - (0x3fU 
                                               & ((IData)(vlSelf->__PVT__u4__DOT__u6__DOT__fi_ldz_r0) 
                                                  - (IData)(1U)))));
    if ((5U == (IData)(vlSelf->__PVT__fpu_op_r3))) {
        u4__DOT____VdfgRegularize_he8d392c1_0_46 = vlSelf->__PVT__u4__DOT__f2i_max;
        vlSelf->__PVT__u4__DOT__conv_exp = (0xffU & 
                                            ((IData)(vlSelf->__PVT__u4__DOT__f2i_zero)
                                              ? 0U : 
                                             ((IData)(vlSelf->__PVT__u4__DOT__f2i_max)
                                               ? 0xffU
                                               : 0U)));
    } else {
        u4__DOT____VdfgRegularize_he8d392c1_0_46 = 0U;
        vlSelf->__PVT__u4__DOT__conv_exp = (0xffU & 
                                            ((0U != vlSelf->__PVT__fract_denorm)
                                              ? ((IData)(0x9eU) 
                                                 - (IData)(vlSelf->__PVT__u4__DOT__u6__DOT__fi_ldz_r0))
                                              : ((IData)(vlSelf->__PVT__opas_r2)
                                                  ? 0x9eU
                                                  : 0U)));
    }
    vlSelf->__PVT__u4__DOT__div_exp1 = (0x1ffU & (((IData)(vlSelf->__PVT__exp_r) 
                                                   - (IData)(1U)) 
                                                  + (IData)(vlSelf->__PVT__u4__DOT__fi_ldz_2)));
    vlSelf->__PVT__u4__DOT__dn = ((2U != (IData)(vlSelf->__PVT__fpu_op_r3)) 
                                  & ((3U != (IData)(vlSelf->__PVT__fpu_op_r3)) 
                                     & ((~ (IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->__PVT__exp_r)))) 
                                        | ((~ (IData)(
                                                      (vlSelf->__PVT__fract_denorm 
                                                       >> 0x2fU))) 
                                           & ((IData)(vlSelf->__PVT__u4__DOT__exp_next_mi) 
                                              >> 8U)))));
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_23 
        = (0x1ffU & ((1U & (IData)((vlSelf->__PVT__fract_denorm 
                                    >> 0x2fU))) ? ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__exp_r))
                      : (IData)(vlSelf->__PVT__u4__DOT__exp_next_mi)));
    vlSelf->__PVT__u4__DOT__div_inf = ((IData)(vlSelf->__PVT__opb_dn) 
                                       & ((~ (IData)(vlSelf->__PVT__opa_dn)) 
                                          & (0x7fU 
                                             > (0xffU 
                                                & (IData)(vlSelf->__PVT__u4__DOT__div_exp1)))));
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_53 
        = ((~ (IData)(vlSelf->__PVT__u4__DOT__dn)) 
           & (5U != (IData)(vlSelf->__PVT__fpu_op_r3)));
    vlSelf->__PVT__u4__DOT__exp_div = (0xffU & (((IData)(vlSelf->__PVT__opa_dn) 
                                                 & (IData)(vlSelf->__PVT__opb_dn))
                                                 ? 
                                                ((IData)(vlSelf->__PVT__exp_r) 
                                                 + (IData)(vlSelf->__PVT__u4__DOT__fi_ldz_2))
                                                 : 
                                                ((IData)(vlSelf->__PVT__opb_dn)
                                                  ? (IData)(vlSelf->__PVT__u4__DOT__div_exp1)
                                                  : 
                                                 (((0xfeU 
                                                    >= (IData)(vlSelf->__PVT__u4__DOT__div_exp2)) 
                                                   & (IData)(vlSelf->__PVT__opa_dn))
                                                   ? (IData)(vlSelf->__PVT__u4__DOT__div_exp2)
                                                   : 
                                                  ((1U 
                                                    & ((IData)(vlSelf->__PVT__opa_dn) 
                                                       | ((~ (IData)(
                                                                     (0U 
                                                                      != (IData)(vlSelf->__PVT__exp_r)))) 
                                                          & (~ 
                                                             ((IData)(vlSelf->__PVT__exp_ovf_r) 
                                                              >> 1U)))))
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_23) 
                                                    - (IData)(1U)))))));
    vlSelf->__PVT__u4__DOT__exp_out = (0xffU & ((3U 
                                                 == (IData)(vlSelf->__PVT__fpu_op_r3))
                                                 ? (IData)(vlSelf->__PVT__u4__DOT__exp_div)
                                                 : 
                                                ((IData)(u4__DOT____VdfgRegularize_he8d392c1_0_19)
                                                  ? (IData)(vlSelf->__PVT__u4__DOT__conv_exp)
                                                  : 
                                                 ((((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_59) 
                                                    & (2U 
                                                       == (IData)(vlSelf->__PVT__fpu_op_r3))) 
                                                   | ((2U 
                                                       == (IData)(vlSelf->__PVT__fpu_op_r3)) 
                                                      & ((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_23) 
                                                         >> 8U)))
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlSelf->__PVT__u4__DOT__dn)
                                                    ? 
                                                   (3U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__fract_denorm 
                                                               >> 0x2eU)))
                                                    : (IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_23))))));
    vlSelf->__PVT__u4__DOT__exp_out_fe = (IData)((0xfeU 
                                                  == (IData)(vlSelf->__PVT__u4__DOT__exp_out)));
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_38 
        = ((IData)(vlSelf->__PVT__sign) & (0xffU == (IData)(vlSelf->__PVT__u4__DOT__exp_out)));
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_66 
        = ((~ (IData)((0U != (IData)(vlSelf->__PVT__u4__DOT__exp_out)))) 
           & (IData)(vlSelf->__PVT__u4__DOT__op_dn));
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_65 
        = (1U & ((~ (IData)(vlSelf->__PVT__u4__DOT__op_dn)) 
                 & ((~ (IData)((0U != (IData)(vlSelf->__PVT__u4__DOT__exp_out)))) 
                    & (~ ((IData)(vlSelf->__PVT__exp_ovf_r) 
                          >> 1U)))));
    u4__DOT____VdfgRegularize_he8d392c1_0_64 = (1U 
                                                & ((~ (IData)(
                                                              (0U 
                                                               != (IData)(vlSelf->__PVT__u4__DOT__exp_out)))) 
                                                   | ((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_23) 
                                                      >> 8U)));
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_14 
        = (0x1ffU & ((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_13)
                      ? (IData)(vlSelf->__PVT__u4__DOT__exp_out)
                      : ((IData)(vlSelf->__PVT__exp_r) 
                         - (IData)(1U))));
    vlSelf->__PVT__u4__DOT__grs_sel_div = ((3U == (IData)(vlSelf->__PVT__fpu_op_r3)) 
                                           & (((IData)(vlSelf->__PVT__exp_ovf_r) 
                                               >> 1U) 
                                              | (IData)(u4__DOT____VdfgRegularize_he8d392c1_0_64)));
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_63 
        = ((~ ((IData)(vlSelf->__PVT__exp_ovf_r) >> 1U)) 
           & ((0U != (IData)(vlSelf->__PVT__exp_r)) 
              & (IData)(u4__DOT____VdfgRegularize_he8d392c1_0_64)));
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_62 
        = (IData)(((((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_14) 
                     >> 8U) | (IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_13)) 
                   | (IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_63)));
    vlSelf->__PVT__u4__DOT__shift_right = (0xffU & 
                                           ((3U == (IData)(vlSelf->__PVT__fpu_op_r3))
                                             ? ((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_15)
                                                 ? (IData)(vlSelf->__PVT__exp_r)
                                                 : 
                                                ((IData)(2U) 
                                                 + (IData)(vlSelf->__PVT__exp_r)))
                                             : (IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_14)));
    vlSelf->__PVT__u4__DOT__fract_in_shftr_1 = (0xffffffffffffULL 
                                                & ((0x20U 
                                                    & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                    ? 
                                                   ((0x10U 
                                                     & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                     ? 
                                                    ((8U 
                                                      & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                      ? vlSelf->__PVT__fract_denorm
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                       ? vlSelf->__PVT__fract_denorm
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                        ? vlSelf->__PVT__fract_denorm
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? vlSelf->__PVT__fract_denorm
                                                         : 0ULL))))
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                      ? 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x2fU)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x2eU))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x2dU)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x2cU)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x2bU)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x2aU))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x29U)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x28U))))
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x27U)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x26U))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x25U)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x24U)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x23U)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x22U))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x21U)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x20U))))))
                                                    : 
                                                   ((0x10U 
                                                     & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                     ? 
                                                    ((8U 
                                                      & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                      ? 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x1fU)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x1eU))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x1dU)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x1cU)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x1bU)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x1aU))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x19U)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x18U))))
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x17U)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x16U))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x15U)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x14U)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x13U)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x12U))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x11U)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x10U)))))
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                      ? 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0xfU)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0xeU))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0xdU)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0xcU)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0xbU)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0xaU))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 9U)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 8U))))
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 7U)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 6U))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 5U)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 4U)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 3U)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 2U))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 1U)
                                                         : vlSelf->__PVT__fract_denorm)))))));
    vlSelf->__PVT__u4__DOT__shift_left = (0xffU & (
                                                   (3U 
                                                    == (IData)(vlSelf->__PVT__fpu_op_r3))
                                                    ? 
                                                   (((~ (IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_20)) 
                                                     & (IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_66))
                                                     ? 
                                                    ((0U 
                                                      != (IData)(vlSelf->__PVT__exp_r))
                                                      ? (IData)(vlSelf->__PVT__exp_r)
                                                      : 0U)
                                                     : 
                                                    ((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_65)
                                                      ? (IData)(vlSelf->__PVT__exp_r)
                                                      : (IData)(vlSelf->__PVT__u4__DOT__u6__DOT__fi_ldz_r0)))
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->__PVT__fpu_op_r3))
                                                     ? 
                                                    ((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_62)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__exp_r))
                                                      : (IData)(vlSelf->__PVT__u4__DOT__u6__DOT__fi_ldz_r0))
                                                     : 
                                                    ((IData)(u4__DOT____VdfgRegularize_he8d392c1_0_19)
                                                      ? 
                                                     ((5U 
                                                       == (IData)(vlSelf->__PVT__fpu_op_r3))
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__exp_r) 
                                                       - (IData)(0x7dU))
                                                       : (IData)(vlSelf->__PVT__u4__DOT__u6__DOT__fi_ldz_r0))
                                                      : 
                                                     ((1U 
                                                       & ((~ (IData)(
                                                                     (0U 
                                                                      != (IData)(vlSelf->__PVT__u4__DOT__exp_out)))) 
                                                          | (IData)(vlSelf->__PVT__u4__DOT__dn)))
                                                       ? 
                                                      ((0U 
                                                        != (IData)(vlSelf->__PVT__exp_r))
                                                        ? 
                                                       ((IData)(1U) 
                                                        + (IData)(vlSelf->__PVT__exp_r))
                                                        : 2U)
                                                       : (IData)(vlSelf->__PVT__u4__DOT__u6__DOT__fi_ldz_r0))))));
    vlSelf->__PVT__u4__DOT__fract_in_shftl_1 = (0xffffffffffffULL 
                                                & ((0x20U 
                                                    & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                    ? 
                                                   ((0x10U 
                                                     & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                     ? 
                                                    ((8U 
                                                      & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                      ? vlSelf->__PVT__fract_denorm
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                       ? vlSelf->__PVT__fract_denorm
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                        ? vlSelf->__PVT__fract_denorm
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? vlSelf->__PVT__fract_denorm
                                                         : 0ULL))))
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                      ? 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x2fU)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x2eU))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x2dU)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x2cU)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x2bU)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x2aU))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x29U)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x28U))))
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x27U)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x26U))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x25U)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x24U)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x23U)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x22U))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x21U)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x20U))))))
                                                    : 
                                                   ((0x10U 
                                                     & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                     ? 
                                                    ((8U 
                                                      & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                      ? 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x1fU)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x1eU))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x1dU)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x1cU)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x1bU)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x1aU))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x19U)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x18U))))
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x17U)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x16U))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x15U)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x14U)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x13U)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x12U))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x11U)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x10U)))))
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                      ? 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0xfU)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0xeU))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0xdU)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0xcU)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0xbU)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0xaU))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 9U)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 8U))))
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 7U)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 6U))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 5U)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 4U)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 3U)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 2U))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 1U)
                                                         : vlSelf->__PVT__fract_denorm)))))));
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_21 
        = ((1U & ((3U == (IData)(vlSelf->__PVT__fpu_op_r3))
                   ? ((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_67) 
                      | ((~ (IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_15)) 
                         & ((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_66) 
                            | ((~ ((IData)(vlSelf->__PVT__exp_ovf_r) 
                                   >> 1U)) | (IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_65)))))
                   : ((2U != (IData)(vlSelf->__PVT__fpu_op_r3)) 
                      | ((~ (IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_61)) 
                         | (IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_62)))))
            ? (((0U != (3U & ((IData)(vlSelf->__PVT__u4__DOT__shift_left) 
                              >> 6U))) | ((IData)(vlSelf->__PVT__u4__DOT__f2i_zero) 
                                          & (5U == (IData)(vlSelf->__PVT__fpu_op_r3))))
                ? 0ULL : vlSelf->__PVT__u4__DOT__fract_in_shftl_1)
            : ((0U != (3U & ((IData)(vlSelf->__PVT__u4__DOT__shift_right) 
                             >> 6U))) ? 0ULL : vlSelf->__PVT__u4__DOT__fract_in_shftr_1));
    vlSelf->__PVT__u4__DOT__f2i_ine = (((IData)(vlSelf->__PVT__u4__DOT__f2i_zero) 
                                        & ((~ (IData)(vlSelf->__PVT__opas_r2)) 
                                           & (0U != vlSelf->__PVT__fract_denorm))) 
                                       | ((0U != (0x1ffffffU 
                                                  & (IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_21))) 
                                          | (((IData)(vlSelf->__PVT__u4__DOT__f2i_zero) 
                                              & ((0x80U 
                                                  > (IData)(vlSelf->__PVT__exp_r)) 
                                                 & ((0U 
                                                     != vlSelf->__PVT__fract_denorm) 
                                                    & (IData)(vlSelf->__PVT__opas_r2)))) 
                                             | ((IData)(vlSelf->__PVT__u4__DOT__f2i_max) 
                                                & ((3U 
                                                    == (IData)(vlSelf->__PVT__rmode_r3)) 
                                                   & (0x80U 
                                                      > (IData)(vlSelf->__PVT__exp_r)))))));
    vlSelf->__PVT__u4__DOT__underflow_fmul = (((0U 
                                                != 
                                                (0x1ffffffU 
                                                 & (IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_21))) 
                                               & ((~ (IData)(
                                                             (0xffU 
                                                              == (IData)(vlSelf->__PVT__exp_r)))) 
                                                  & (((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_14) 
                                                      >> 8U) 
                                                     | ((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_61) 
                                                        | (IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_63))))) 
                                              | ((~ (IData)(
                                                            (0U 
                                                             != 
                                                             (0x7fffffU 
                                                              & (IData)(
                                                                        (vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_21 
                                                                         >> 0x19U)))))) 
                                                 & ((0U 
                                                     != vlSelf->__PVT__fract_denorm) 
                                                    & ((IData)(vlSelf->__PVT__exp_ovf_r) 
                                                       >> 1U))));
    vlSelf->__PVT__u4__DOT__round2_f2i = ((2U == (IData)(vlSelf->__PVT__rmode_r3)) 
                                          & (((0U != 
                                               (0xffffffU 
                                                & (IData)(vlSelf->__PVT__fract_denorm))) 
                                              & ((~ (IData)(vlSelf->__PVT__opas_r2)) 
                                                 & (0x80U 
                                                    > (IData)(vlSelf->__PVT__exp_r)))) 
                                             | (0U 
                                                != 
                                                (0x1ffffffU 
                                                 & (IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_21)))));
    if (vlSelf->__PVT__u4__DOT__grs_sel_div) {
        vlSelf->__PVT__u4__DOT__s = (0U != (0x1ffffffU 
                                            & (IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_21)));
        vlSelf->__PVT__u4__DOT__r = (1U & ((~ (IData)(vlSelf->__PVT__u4__DOT__div_nr)) 
                                           & (IData)(
                                                     (vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_21 
                                                      >> 0x18U))));
    } else {
        vlSelf->__PVT__u4__DOT__s = ((0U != (0xffffffU 
                                             & (IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_21))) 
                                     | ((IData)((vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_21 
                                                 >> 0x18U)) 
                                        & (3U == (IData)(vlSelf->__PVT__fpu_op_r3))));
        vlSelf->__PVT__u4__DOT__r = (1U & (IData)((vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_21 
                                                   >> 0x18U)));
    }
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_27 
        = ((IData)((vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_21 
                    >> 0x19U)) & (IData)(vlSelf->__PVT__u4__DOT__r));
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_30 
        = ((IData)(vlSelf->__PVT__u4__DOT__r) | (IData)(vlSelf->__PVT__u4__DOT__s));
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_55 
        = (0xffffffU & ((0x7fffffU & (IData)((vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_21 
                                              >> 0x19U))) 
                        + ((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_27) 
                           | ((IData)(vlSelf->__PVT__u4__DOT__r) 
                              & (IData)(vlSelf->__PVT__u4__DOT__s)))));
    u4__DOT____VdfgRegularize_he8d392c1_0_35 = ((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_30) 
                                                | (3U 
                                                   == (IData)(vlSelf->__PVT__fpu_op_r3)));
    vlSelf->__PVT__u4__DOT__round2_fmul = ((~ (IData)(vlSelf->__PVT__sign)) 
                                           & ((((IData)(vlSelf->__PVT__exp_ovf_r) 
                                                >> 1U) 
                                               & ((0U 
                                                   != vlSelf->__PVT__fract_denorm) 
                                                  & ((((~ 
                                                        ((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_23) 
                                                         >> 8U)) 
                                                       | (IData)(vlSelf->__PVT__u4__DOT__op_dn)) 
                                                      & (IData)(u4__DOT____VdfgRegularize_he8d392c1_0_35)) 
                                                     | ((~ (IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0x7fffffU 
                                                                     & (IData)(
                                                                               (vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_21 
                                                                                >> 0x19U)))))) 
                                                        | ((~ (IData)(vlSelf->__PVT__u4__DOT__op_dn)) 
                                                           & (3U 
                                                              != (IData)(vlSelf->__PVT__fpu_op_r3))))))) 
                                              | ((IData)(u4__DOT____VdfgRegularize_he8d392c1_0_35) 
                                                 & (((~ 
                                                      ((IData)(vlSelf->__PVT__exp_ovf_r) 
                                                       >> 1U)) 
                                                     & ((~ (IData)(vlSelf->__PVT__exp_ovf_r)) 
                                                        | (IData)(vlSelf->__PVT__u4__DOT__exp_in_80))) 
                                                    | ((3U 
                                                        == (IData)(vlSelf->__PVT__fpu_op_r3)) 
                                                       | ((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_59) 
                                                          & ((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_23) 
                                                             >> 8U)))))));
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_54 
        = (0xffffffU & ((0x7fffffU & (IData)((vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_21 
                                              >> 0x19U))) 
                        + ((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_37)
                            ? (IData)(vlSelf->__PVT__u4__DOT__round2_fmul)
                            : ((5U == (IData)(vlSelf->__PVT__fpu_op_r3))
                                ? (IData)(vlSelf->__PVT__u4__DOT__round2_f2i)
                                : ((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_30) 
                                   & ((~ (IData)(vlSelf->__PVT__sign)) 
                                      & ((~ ((IData)(vlSelf->__PVT__u4__DOT__exp_out) 
                                             >> 7U)) 
                                         | (((IData)(vlSelf->__PVT__u4__DOT__exp_out) 
                                             >> 7U) 
                                            & ((~ (IData)(vlSelf->__PVT__u4__DOT__exp_out_fe)) 
                                               | ((~ (IData)(
                                                             (0x7fffffU 
                                                              == 
                                                              (0x7fffffU 
                                                               & (IData)(
                                                                         (vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_21 
                                                                          >> 0x19U)))))) 
                                                  | ((IData)(vlSelf->__PVT__u4__DOT__exp_out_fe) 
                                                     & (0xfffffe000000ULL 
                                                        == 
                                                        (0xfffffe000000ULL 
                                                         & vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_21)))))))))))));
    if ((2U & (IData)(vlSelf->__PVT__rmode_r3))) {
        vlSelf->__PVT__u4__DOT__fract_out_rnd = (0x7fffffU 
                                                 & (((3U 
                                                      != (IData)(vlSelf->__PVT__fpu_op_r3)) 
                                                     & ((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_38) 
                                                        & (IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_53)))
                                                     ? 0x7fffffU
                                                     : vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_54));
        vlSelf->__PVT__u4__DOT__exp_out_rnd = (0xffU 
                                               & (((5U 
                                                    != (IData)(vlSelf->__PVT__fpu_op_r3)) 
                                                   & (IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_38))
                                                   ? 0xfeU
                                                   : 
                                                  ((0x800000U 
                                                    & vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_54)
                                                    ? 
                                                   ((((IData)(vlSelf->__PVT__exp_ovf_r) 
                                                      >> 1U) 
                                                     & (2U 
                                                        == (IData)(vlSelf->__PVT__fpu_op_r3)))
                                                     ? 
                                                    ((IData)(vlSelf->__PVT__u4__DOT__exp_out) 
                                                     - (IData)(1U))
                                                     : 
                                                    ((IData)(1U) 
                                                     + (IData)(vlSelf->__PVT__u4__DOT__exp_out)))
                                                    : (IData)(vlSelf->__PVT__u4__DOT__exp_out))));
    } else if ((1U & (IData)(vlSelf->__PVT__rmode_r3))) {
        vlSelf->__PVT__u4__DOT__fract_out_rnd = (0x7fffffU 
                                                 & (((3U 
                                                      != (IData)(vlSelf->__PVT__fpu_op_r3)) 
                                                     & ((0xffU 
                                                         == (IData)(vlSelf->__PVT__u4__DOT__exp_out)) 
                                                        & (IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_53)))
                                                     ? 0x7fffffU
                                                     : (IData)(
                                                               (vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_21 
                                                                >> 0x19U))));
        vlSelf->__PVT__u4__DOT__exp_out_rnd = (0xffU 
                                               & (((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_27) 
                                                   & ((IData)(vlSelf->__PVT__u4__DOT__s) 
                                                      & (0xffU 
                                                         == (IData)(vlSelf->__PVT__exp_r))))
                                                   ? 
                                                  ((3U 
                                                    == (IData)(vlSelf->__PVT__fpu_op_r3))
                                                    ? 
                                                   ((0x16U 
                                                     < (IData)(vlSelf->__PVT__u4__DOT__u6__DOT__fi_ldz_r0))
                                                     ? 
                                                    ((IData)(vlSelf->__PVT__exp_r) 
                                                     - 
                                                     (0x3fU 
                                                      & ((IData)(vlSelf->__PVT__u4__DOT__u6__DOT__fi_ldz_r0) 
                                                         - (IData)(0x16U))))
                                                     : 
                                                    ((IData)(vlSelf->__PVT__exp_r) 
                                                     - 
                                                     (0x3fU 
                                                      & ((IData)(vlSelf->__PVT__u4__DOT__u6__DOT__fi_ldz_r0) 
                                                         - (IData)(1U)))))
                                                    : (IData)(vlSelf->__PVT__u4__DOT__exp_next_mi))
                                                   : 
                                                  (((5U 
                                                     != (IData)(vlSelf->__PVT__fpu_op_r3)) 
                                                    & (0xffU 
                                                       == (IData)(vlSelf->__PVT__u4__DOT__exp_out)))
                                                    ? (IData)(vlSelf->__PVT__exp_r)
                                                    : (IData)(vlSelf->__PVT__u4__DOT__exp_out))));
    } else {
        vlSelf->__PVT__u4__DOT__fract_out_rnd = (0x7fffffU 
                                                 & vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_55);
        vlSelf->__PVT__u4__DOT__exp_out_rnd = (0xffU 
                                               & ((IData)(vlSelf->__PVT__u4__DOT__exp_out) 
                                                  + 
                                                  (1U 
                                                   & (vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_55 
                                                      >> 0x17U))));
    }
    vlSelf->__PVT__u4__DOT__max_num = (((0U != (IData)(vlSelf->__PVT__rmode_r3)) 
                                        & ((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_37) 
                                           & ((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_40) 
                                              | ((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_41) 
                                                 & ((0xffU 
                                                     == (IData)(vlSelf->__PVT__exp_r)) 
                                                    & ((0x18U 
                                                        > (IData)(vlSelf->__PVT__u4__DOT__fi_ldz_2)) 
                                                       & (0xfeU 
                                                          != (IData)(vlSelf->__PVT__u4__DOT__exp_out)))))))) 
                                       | ((3U == (IData)(vlSelf->__PVT__fpu_op_r3)) 
                                          & (((1U == (IData)(vlSelf->__PVT__rmode_r3)) 
                                              & ((IData)(vlSelf->__PVT__u4__DOT__div_inf) 
                                                 | (((~ 
                                                      ((IData)(vlSelf->__PVT__exp_ovf_r) 
                                                       >> 1U)) 
                                                     & (0xffU 
                                                        == (IData)(vlSelf->__PVT__u4__DOT__exp_out))) 
                                                    | (IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_40)))) 
                                             | ((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_52) 
                                                & (((IData)(vlSelf->__PVT__exp_ovf_r) 
                                                    & ((0xffU 
                                                        == (IData)(vlSelf->__PVT__exp_r)) 
                                                       & ((IData)(vlSelf->__PVT__sign) 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__fract_denorm 
                                                                     >> 0x2fU))))) 
                                                   | (((IData)(vlSelf->__PVT__sign) 
                                                       & (((IData)(
                                                                   (vlSelf->__PVT__fract_denorm 
                                                                    >> 0x2fU)) 
                                                           & (IData)(vlSelf->__PVT__u4__DOT__div_inf)) 
                                                          | (((~ 
                                                               ((IData)(vlSelf->__PVT__u4__DOT__exp_out_rnd) 
                                                                >> 7U)) 
                                                              & ((~ 
                                                                  ((IData)(vlSelf->__PVT__u4__DOT__exp_in_80) 
                                                                   | (0x7fU 
                                                                      == (IData)(vlSelf->__PVT__u4__DOT__exp_out)))) 
                                                                 & ((IData)(vlSelf->__PVT__exp_r) 
                                                                    >> 7U))) 
                                                             | (((IData)(vlSelf->__PVT__exp_r) 
                                                                 >> 7U) 
                                                                & (((IData)(vlSelf->__PVT__u4__DOT__exp_out_rnd) 
                                                                    >> 7U) 
                                                                   & ((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_38) 
                                                                      & ((IData)(vlSelf->__PVT__u4__DOT__op_dn) 
                                                                         & (0xfeU 
                                                                            < (IData)(vlSelf->__PVT__u4__DOT__div_exp1))))))))) 
                                                      | ((~ (IData)(
                                                                    (0U 
                                                                     != (IData)(vlSelf->__PVT__exp_r)))) 
                                                         & ((IData)(vlSelf->__PVT__sign) 
                                                            & ((IData)(vlSelf->__PVT__u4__DOT__div_inf) 
                                                               | ((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_38) 
                                                                  & (0x18U 
                                                                     > (IData)(vlSelf->__PVT__u4__DOT__fi_ldz_2))))))))))));
    vlSelf->__PVT__u4__DOT__inf_out = ((((IData)(vlSelf->__PVT__rmode_r3) 
                                         >> 1U) & ((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_37) 
                                                   & ((~ (IData)(vlSelf->__PVT__sign)) 
                                                      & (((3U 
                                                           != (IData)(vlSelf->__PVT__fpu_op_r3)) 
                                                          & (0xffU 
                                                             == (IData)(vlSelf->__PVT__exp_r))) 
                                                         | ((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_40) 
                                                            & ((~ (IData)(
                                                                          (0U 
                                                                           != (IData)(vlSelf->__PVT__exp_r)))) 
                                                               | ((IData)(vlSelf->__PVT__exp_r) 
                                                                  >> 7U))))))) 
                                       | (((IData)(vlSelf->__PVT__u4__DOT__div_inf) 
                                           & ((3U == (IData)(vlSelf->__PVT__fpu_op_r3)) 
                                              & ((0U 
                                                  == (IData)(vlSelf->__PVT__rmode_r3)) 
                                                 | ((((IData)(vlSelf->__PVT__rmode_r3) 
                                                      >> 1U) 
                                                     & ((~ (IData)(
                                                                   (0xffU 
                                                                    == (IData)(vlSelf->__PVT__exp_r)))) 
                                                        & (IData)(
                                                                  ((0U 
                                                                    == (IData)(vlSelf->__PVT__exp_ovf_r)) 
                                                                   & (~ (IData)(vlSelf->__PVT__sign)))))) 
                                                    | ((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_52) 
                                                       & ((IData)(vlSelf->__PVT__exp_ovf_r) 
                                                          & ((~ (IData)(
                                                                        (0U 
                                                                         != (IData)(vlSelf->__PVT__exp_r)))) 
                                                             & (~ (IData)(vlSelf->__PVT__sign))))))))) 
                                          | ((3U == (IData)(vlSelf->__PVT__fpu_op_r3)) 
                                             & (((IData)(vlSelf->__PVT__rmode_r3) 
                                                 >> 1U) 
                                                & ((0xffU 
                                                    == (IData)(vlSelf->__PVT__exp_r)) 
                                                   & ((~ (IData)(vlSelf->__PVT__sign)) 
                                                      & ((IData)(vlSelf->__PVT__u4__DOT__op_dn) 
                                                         & ((0x18U 
                                                             > (IData)(vlSelf->__PVT__u4__DOT__fi_ldz_2)) 
                                                            & (0xfeU 
                                                               != (IData)(vlSelf->__PVT__u4__DOT__exp_out_rnd))))))))));
    vlSelf->__PVT__u4__DOT__overflow_fdiv = (1U & ((IData)(vlSelf->__PVT__u4__DOT__inf_out) 
                                                   | (((0U 
                                                        != (IData)(vlSelf->__PVT__rmode_r3)) 
                                                       & (IData)(vlSelf->__PVT__u4__DOT__max_num)) 
                                                      | ((((IData)(vlSelf->__PVT__exp_r) 
                                                           >> 7U) 
                                                          & ((IData)(vlSelf->__PVT__u4__DOT__op_dn) 
                                                             & (0xffU 
                                                                == (IData)(vlSelf->__PVT__u4__DOT__exp_out)))) 
                                                         | ((IData)(vlSelf->__PVT__exp_ovf_r) 
                                                            & (((IData)(vlSelf->__PVT__exp_ovf_r) 
                                                                >> 1U) 
                                                               | (0xffU 
                                                                  == (IData)(vlSelf->__PVT__u4__DOT__exp_out))))))));
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_51 
        = (((IData)(u4__DOT____VdfgRegularize_he8d392c1_0_47) 
            & ((IData)(vlSelf->__PVT__exp_ovf_r) & 
               (0U == (IData)(vlSelf->__PVT__rmode_r3)))) 
           | ((IData)(vlSelf->__PVT__u4__DOT__inf_out) 
              | (IData)(u4__DOT____VdfgRegularize_he8d392c1_0_46)));
    vlSelf->__PVT__u4__DOT__ovf0 = (((~ (IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_48)) 
                                     & ((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_51) 
                                        | ((~ (IData)(vlSelf->__PVT__u4__DOT__max_num)) 
                                           & (0xffU 
                                              == (IData)(vlSelf->__PVT__u4__DOT__exp_out_rnd))))) 
                                    & ((1U != (IData)(vlSelf->__PVT__rmode_r3)) 
                                       & (5U != (IData)(vlSelf->__PVT__fpu_op_r3))));
    vlSelf->__PVT__u4__DOT__exp_out_final = ((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_48)
                                              ? 0U : 
                                             ((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_51)
                                               ? 0xffU
                                               : ((IData)(vlSelf->__PVT__u4__DOT__max_num)
                                                   ? 0xfeU
                                                   : (IData)(vlSelf->__PVT__u4__DOT__exp_out_rnd))));
    vlSelf->__PVT__u4__DOT__fract_out_final = (((IData)(vlSelf->__PVT__u4__DOT__inf_out) 
                                                | ((IData)(vlSelf->__PVT__u4__DOT__ovf0) 
                                                   | (IData)(vlSelf->__PVT__or_result)))
                                                ? 0U
                                                : (
                                                   ((IData)(vlSelf->__PVT__u4__DOT__max_num) 
                                                    | (IData)(u4__DOT____VdfgRegularize_he8d392c1_0_46))
                                                    ? 0x7fffffU
                                                    : vlSelf->__PVT__u4__DOT__fract_out_rnd));
    vlSelf->__PVT__u4__DOT__undeflow_div = ((~ ((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_40) 
                                                & (0U 
                                                   == (IData)(vlSelf->__PVT__rmode_r3)))) 
                                            & ((~ (IData)(vlSelf->__PVT__u4__DOT__inf_out)) 
                                               & ((~ (IData)(vlSelf->__PVT__u4__DOT__max_num)) 
                                                  & ((0xffU 
                                                      != (IData)(vlSelf->__PVT__u4__DOT__exp_out_final)) 
                                                     & (((0U 
                                                          != 
                                                          (0x1ffffffU 
                                                           & (IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_21))) 
                                                         & ((~ (IData)(vlSelf->__PVT__opb_dn)) 
                                                            & ((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_67) 
                                                               | ((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_15) 
                                                                  | ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->__PVT__u4__DOT__exp_out)))) 
                                                                     | ((IData)(vlSelf->__PVT__exp_ovf_r) 
                                                                        >> 1U)))))) 
                                                        | (((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_59) 
                                                            & (((IData)(vlSelf->__PVT__u4__DOT__op_dn) 
                                                                & ((0x16U 
                                                                    < (IData)(vlSelf->__PVT__exp_r)) 
                                                                   & (0x17U 
                                                                      > (IData)(vlSelf->__PVT__u4__DOT__u6__DOT__fi_ldz_r0)))) 
                                                               | (((IData)(vlSelf->__PVT__u4__DOT__op_dn) 
                                                                   & ((0x17U 
                                                                       > (IData)(vlSelf->__PVT__exp_r)) 
                                                                      & (0x17U 
                                                                         > (IData)(vlSelf->__PVT__u4__DOT__u6__DOT__fi_ldz_r0)))) 
                                                                  | ((~ (IData)(vlSelf->__PVT__u4__DOT__op_dn)) 
                                                                     & (((1U 
                                                                          & ((IData)(vlSelf->__PVT__exp_r) 
                                                                             >> 7U)) 
                                                                         == 
                                                                         (1U 
                                                                          & ((IData)(vlSelf->__PVT__u4__DOT__exp_div) 
                                                                             >> 7U))) 
                                                                        | ((IData)(
                                                                                ((0xfeU 
                                                                                == 
                                                                                (0xfeU 
                                                                                & (IData)(vlSelf->__PVT__u4__DOT__exp_div))) 
                                                                                & (~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->__PVT__exp_r)))))) 
                                                                           | ((0x7fU 
                                                                               > (IData)(vlSelf->__PVT__exp_r)) 
                                                                              & (0x20U 
                                                                                < (IData)(vlSelf->__PVT__exp_r))))))))) 
                                                           | ((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_41) 
                                                              & (((IData)(vlSelf->__PVT__u4__DOT__op_dn) 
                                                                  & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->__PVT__u4__DOT__exp_out)))) 
                                                                     & (0x17U 
                                                                        > (IData)(vlSelf->__PVT__u4__DOT__u6__DOT__fi_ldz_r0)))) 
                                                                 | ((~ (IData)(
                                                                               (0U 
                                                                                != (IData)(vlSelf->__PVT__exp_r)))) 
                                                                    | ((~ (IData)(vlSelf->__PVT__u4__DOT__op_dn)) 
                                                                       & ((0x17U 
                                                                           > (IData)(vlSelf->__PVT__u4__DOT__u6__DOT__fi_ldz_r0)) 
                                                                          & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->__PVT__u4__DOT__exp_out)))) 
                                                                             & (1U 
                                                                                == (IData)(vlSelf->__PVT__exp_r))))))))))))));
    if ((3U == (IData)(vlSelf->__PVT__fpu_op_r3))) {
        vlSelf->__PVT__overflow_d = vlSelf->__PVT__u4__DOT__overflow_fdiv;
        vlSelf->__PVT__underflow_d = (1U & (IData)(vlSelf->__PVT__u4__DOT__undeflow_div));
    } else {
        vlSelf->__PVT__overflow_d = ((IData)(vlSelf->__PVT__u4__DOT__ovf0) 
                                     | ((~ (IData)(vlSelf->__PVT__u4__DOT__dn)) 
                                        & (0xffU == (IData)(vlSelf->__PVT__u4__DOT__exp_out))));
        vlSelf->__PVT__underflow_d = (1U & ((2U == (IData)(vlSelf->__PVT__fpu_op_r3))
                                             ? (IData)(vlSelf->__PVT__u4__DOT__underflow_fmul)
                                             : ((~ (IData)(
                                                           (vlSelf->__PVT__fract_denorm 
                                                            >> 0x2fU))) 
                                                & ((~ (IData)(vlSelf->__PVT__u4__DOT__dn)) 
                                                   & ((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_23) 
                                                      >> 8U)))));
    }
    vlSelf->__PVT__out_d = (((IData)(vlSelf->__PVT__u4__DOT__exp_out_final) 
                             << 0x17U) | vlSelf->__PVT__u4__DOT__fract_out_final);
    vlSelf->__PVT__underflow_fmul1 = (1U & ((IData)(vlSelf->__PVT__underflow_fmul_r) 
                                            | ((((IData)(vlSelf->__PVT__underflow_fmul_r) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__underflow_d)) 
                                               | (((~ (IData)(
                                                              (0U 
                                                               != vlSelf->__PVT__out_d))) 
                                                   & ((IData)(vlSelf->__PVT__u4__DOT__op_dn) 
                                                      & ((0ULL 
                                                          != vlSelf->__PVT__prod) 
                                                         & (IData)(vlSelf->__PVT__sign)))) 
                                                  | (((IData)(vlSelf->__PVT__underflow_fmul_r) 
                                                      >> 2U) 
                                                     & ((0U 
                                                         == (IData)(vlSelf->__PVT__u4__DOT__exp_out_final)) 
                                                        | (0U 
                                                           == vlSelf->__PVT__u4__DOT__fract_out_final)))))));
}

VL_ATTR_COLD void Vco_sim_syn2_fpu_mul___stl_sequent__TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__0(Vco_sim_syn2_fpu_mul* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_syn2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vco_sim_syn2_fpu_mul___stl_sequent__TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__0\n"); );
    // Init
    CData/*0:0*/ __VdfgRegularize_h62b27241_3_10;
    __VdfgRegularize_h62b27241_3_10 = 0;
    CData/*0:0*/ u4__DOT____VdfgRegularize_he8d392c1_0_8;
    u4__DOT____VdfgRegularize_he8d392c1_0_8 = 0;
    CData/*0:0*/ u4__DOT____VdfgRegularize_he8d392c1_0_10;
    u4__DOT____VdfgRegularize_he8d392c1_0_10 = 0;
    CData/*0:0*/ u4__DOT____VdfgRegularize_he8d392c1_0_13;
    u4__DOT____VdfgRegularize_he8d392c1_0_13 = 0;
    CData/*0:0*/ u4__DOT____VdfgRegularize_he8d392c1_0_19;
    u4__DOT____VdfgRegularize_he8d392c1_0_19 = 0;
    CData/*0:0*/ u4__DOT____VdfgRegularize_he8d392c1_0_35;
    u4__DOT____VdfgRegularize_he8d392c1_0_35 = 0;
    CData/*0:0*/ u4__DOT____VdfgRegularize_he8d392c1_0_40;
    u4__DOT____VdfgRegularize_he8d392c1_0_40 = 0;
    CData/*0:0*/ u4__DOT____VdfgRegularize_he8d392c1_0_41;
    u4__DOT____VdfgRegularize_he8d392c1_0_41 = 0;
    CData/*0:0*/ u4__DOT____VdfgRegularize_he8d392c1_0_46;
    u4__DOT____VdfgRegularize_he8d392c1_0_46 = 0;
    CData/*0:0*/ u4__DOT____VdfgRegularize_he8d392c1_0_47;
    u4__DOT____VdfgRegularize_he8d392c1_0_47 = 0;
    CData/*0:0*/ u4__DOT____VdfgRegularize_he8d392c1_0_52;
    u4__DOT____VdfgRegularize_he8d392c1_0_52 = 0;
    CData/*0:0*/ u4__DOT____VdfgRegularize_he8d392c1_0_64;
    u4__DOT____VdfgRegularize_he8d392c1_0_64 = 0;
    // Body
    vlSelf->__PVT__u2__DOT__sign_d = (1U & ((vlSelf->__PVT__opa_r 
                                             >> 0x1fU)
                                             ? (~ (vlSelf->__PVT__opb_r 
                                                   >> 0x1fU))
                                             : (vlSelf->__PVT__opb_r 
                                                >> 0x1fU)));
    vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_10 
        = (1U & ((~ (IData)((0U != (0xffU & (vlSelf->__PVT__opa_r 
                                             >> 0x17U))))) 
                 | (~ (IData)((0U != (0xffU & (vlSelf->__PVT__opb_r 
                                               >> 0x17U)))))));
    vlSelf->__VdfgRegularize_h62b27241_3_3 = ((IData)(vlSelf->__PVT__qnan_d) 
                                              | (IData)(vlSelf->__PVT__snan_d));
    if ((3U == (IData)(vlSelf->__PVT__fpu_op_r1))) {
        vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_8 
            = (0x1ffU & ((0xffU & (vlSelf->__PVT__opa_r 
                                   >> 0x17U)) - (0xffU 
                                                 & (vlSelf->__PVT__opb_r 
                                                    >> 0x17U))));
        vlSelf->__PVT__u2__DOT__exp_tmp5 = (0xffU & 
                                            ((IData)(1U) 
                                             + ((IData)(0x7fU) 
                                                - (IData)(vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_8))));
        vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_9 
            = (0x1ffU & ((IData)(0x7fU) + (IData)(vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_8)));
        vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_12 
            = (1U & ((IData)(vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_9) 
                     >> 8U));
    } else {
        vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_8 
            = (0x1ffU & ((0xffU & (vlSelf->__PVT__opa_r 
                                   >> 0x17U)) + (0xffU 
                                                 & (vlSelf->__PVT__opb_r 
                                                    >> 0x17U))));
        vlSelf->__PVT__u2__DOT__exp_tmp5 = (0xffU & 
                                            (((IData)(0x7fU) 
                                              - (IData)(vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_8)) 
                                             - (IData)(1U)));
        vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_9 
            = (0x1ffU & ((IData)(vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_8) 
                         - (IData)(0x7fU)));
        vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_12 
            = (1U & (((~ (vlSelf->__PVT__opa_r >> 0x1eU)) 
                      & ((~ (vlSelf->__PVT__opb_r >> 0x1eU)) 
                         & ((IData)(vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_9) 
                            >> 7U))) | ((IData)(vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_9) 
                                        >> 8U)));
    }
    vlSelf->__VdfgRegularize_h62b27241_3_5 = ((IData)(vlSelf->__PVT__opa_00) 
                                              & (IData)(vlSelf->__PVT__opb_inf));
    vlSelf->__VdfgRegularize_h62b27241_3_4 = ((IData)(vlSelf->__PVT__opa_inf) 
                                              & (IData)(vlSelf->__PVT__opb_00));
    __VdfgRegularize_h62b27241_3_10 = ((IData)(vlSelf->__PVT__opa_inf) 
                                       | (IData)(vlSelf->__PVT__opb_inf));
    vlSelf->__VdfgRegularize_h62b27241_3_12 = ((IData)(vlSelf->__PVT__inf_mul2) 
                                               | (IData)(vlSelf->__PVT__inf_mul_r));
    vlSelf->__VdfgRegularize_h62b27241_3_2 = ((IData)(vlSelf->__PVT__opa_00) 
                                              | (IData)(vlSelf->__PVT__opb_00));
    u4__DOT____VdfgRegularize_he8d392c1_0_47 = ((3U 
                                                 == (IData)(vlSelf->__PVT__fpu_op_r3)) 
                                                & ((IData)(vlSelf->__PVT__exp_ovf_r) 
                                                   >> 1U));
    u4__DOT____VdfgRegularize_he8d392c1_0_41 = (IData)(
                                                       (0U 
                                                        == (IData)(vlSelf->__PVT__exp_ovf_r)));
    u4__DOT____VdfgRegularize_he8d392c1_0_52 = (IData)(
                                                       ((~ 
                                                         ((IData)(vlSelf->__PVT__exp_ovf_r) 
                                                          >> 1U)) 
                                                        & ((IData)(vlSelf->__PVT__rmode_r3) 
                                                           >> 1U)));
    u4__DOT____VdfgRegularize_he8d392c1_0_40 = (IData)(
                                                       (3U 
                                                        == (IData)(vlSelf->__PVT__exp_ovf_r)));
    vlSelf->__PVT__u4__DOT__exp_in_80 = (IData)((((IData)(vlSelf->__PVT__exp_r) 
                                                  >> 7U) 
                                                 & (~ (IData)(
                                                              (0U 
                                                               != 
                                                               (0x7fU 
                                                                & (IData)(vlSelf->__PVT__exp_r)))))));
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_37 
        = ((2U == (IData)(vlSelf->__PVT__fpu_op_r3)) 
           | (3U == (IData)(vlSelf->__PVT__fpu_op_r3)));
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_61 
        = (1U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__exp_r)))) 
                 | ((IData)(vlSelf->__PVT__exp_ovf_r) 
                    >> 1U)));
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_20 
        = (IData)((1U == (IData)(vlSelf->__PVT__exp_ovf_r)));
    u4__DOT____VdfgRegularize_he8d392c1_0_13 = (1U 
                                                & ((~ 
                                                    ((IData)(vlSelf->__PVT__exp_ovf_r) 
                                                     >> 1U)) 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != (IData)(vlSelf->__PVT__exp_r))))));
    vlSelf->__PVT__u4__DOT__op_dn = ((IData)(vlSelf->__PVT__opa_dn) 
                                     | (IData)(vlSelf->__PVT__opb_dn));
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_59 
        = (IData)((2U == (IData)(vlSelf->__PVT__exp_ovf_r)));
    u4__DOT____VdfgRegularize_he8d392c1_0_19 = ((5U 
                                                 == (IData)(vlSelf->__PVT__fpu_op_r3)) 
                                                | (4U 
                                                   == (IData)(vlSelf->__PVT__fpu_op_r3)));
    u4__DOT____VdfgRegularize_he8d392c1_0_8 = ((IData)(vlSelf->__PVT__exp_r) 
                                               < ((0U 
                                                   == (IData)(vlSelf->__PVT__rmode_r3))
                                                   ? 0x7eU
                                                   : 0x7fU));
    vlSelf->__PVT__fract_denorm = vlSelf->__PVT__prod;
    vlSelf->__VdfgRegularize_h62b27241_3_7 = ((IData)(vlSelf->__VdfgRegularize_h62b27241_3_4) 
                                              | (IData)(vlSelf->__VdfgRegularize_h62b27241_3_5));
    vlSelf->__VdfgRegularize_h62b27241_3_9 = ((IData)(vlSelf->__VdfgRegularize_h62b27241_3_12) 
                                              & (0U 
                                                 == (IData)(vlSelf->__PVT__rmode_r3)));
    vlSelf->__VdfgRegularize_h62b27241_3_11 = ((IData)(vlSelf->__VdfgRegularize_h62b27241_3_12) 
                                               | (IData)(__VdfgRegularize_h62b27241_3_10));
    vlSelf->__PVT__or_result = (((2U == (IData)(vlSelf->__PVT__fpu_op_r3)) 
                                 & (IData)(vlSelf->__VdfgRegularize_h62b27241_3_2)) 
                                | ((3U == (IData)(vlSelf->__PVT__fpu_op_r3)) 
                                   & ((IData)(vlSelf->__PVT__opa_00) 
                                      | (IData)(vlSelf->__PVT__opb_inf))));
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_67 
        = ((IData)(vlSelf->__PVT__u4__DOT__op_dn) & (IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_20));
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_15 
        = ((IData)(vlSelf->__PVT__u4__DOT__op_dn) & 
           ((IData)(vlSelf->__PVT__exp_ovf_r) >> 1U));
    u4__DOT____VdfgRegularize_he8d392c1_0_10 = ((IData)(vlSelf->__PVT__opas_r2) 
                                                & (IData)(u4__DOT____VdfgRegularize_he8d392c1_0_8));
    vlSelf->u4__DOT____Vcellout__u3__shift_out = (0xffffffffffffULL 
                                                  & ((0x20U 
                                                      & ((IData)(vlSelf->__PVT__exp_r) 
                                                         - (IData)(0x3dU)))
                                                      ? 
                                                     ((0x10U 
                                                       & ((IData)(vlSelf->__PVT__exp_r) 
                                                          - (IData)(0x3dU)))
                                                       ? 
                                                      ((8U 
                                                        & ((IData)(vlSelf->__PVT__exp_r) 
                                                           - (IData)(0x3dU)))
                                                        ? vlSelf->__PVT__fract_denorm
                                                        : 
                                                       ((4U 
                                                         & ((IData)(vlSelf->__PVT__exp_r) 
                                                            - (IData)(0x3dU)))
                                                         ? vlSelf->__PVT__fract_denorm
                                                         : 
                                                        ((2U 
                                                          & ((IData)(vlSelf->__PVT__exp_r) 
                                                             - (IData)(0x3dU)))
                                                          ? vlSelf->__PVT__fract_denorm
                                                          : 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? vlSelf->__PVT__fract_denorm
                                                           : 0ULL))))
                                                       : 
                                                      ((8U 
                                                        & ((IData)(vlSelf->__PVT__exp_r) 
                                                           - (IData)(0x3dU)))
                                                        ? 
                                                       ((4U 
                                                         & ((IData)(vlSelf->__PVT__exp_r) 
                                                            - (IData)(0x3dU)))
                                                         ? 
                                                        ((2U 
                                                          & ((IData)(vlSelf->__PVT__exp_r) 
                                                             - (IData)(0x3dU)))
                                                          ? 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x2fU)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x2eU))
                                                          : 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x2dU)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x2cU)))
                                                         : 
                                                        ((2U 
                                                          & ((IData)(vlSelf->__PVT__exp_r) 
                                                             - (IData)(0x3dU)))
                                                          ? 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x2bU)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x2aU))
                                                          : 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x29U)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x28U))))
                                                        : 
                                                       ((4U 
                                                         & ((IData)(vlSelf->__PVT__exp_r) 
                                                            - (IData)(0x3dU)))
                                                         ? 
                                                        ((2U 
                                                          & ((IData)(vlSelf->__PVT__exp_r) 
                                                             - (IData)(0x3dU)))
                                                          ? 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x27U)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x26U))
                                                          : 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x25U)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x24U)))
                                                         : 
                                                        ((2U 
                                                          & ((IData)(vlSelf->__PVT__exp_r) 
                                                             - (IData)(0x3dU)))
                                                          ? 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x23U)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x22U))
                                                          : 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x21U)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x20U))))))
                                                      : 
                                                     ((0x10U 
                                                       & ((IData)(vlSelf->__PVT__exp_r) 
                                                          - (IData)(0x3dU)))
                                                       ? 
                                                      ((8U 
                                                        & ((IData)(vlSelf->__PVT__exp_r) 
                                                           - (IData)(0x3dU)))
                                                        ? 
                                                       ((4U 
                                                         & ((IData)(vlSelf->__PVT__exp_r) 
                                                            - (IData)(0x3dU)))
                                                         ? 
                                                        ((2U 
                                                          & ((IData)(vlSelf->__PVT__exp_r) 
                                                             - (IData)(0x3dU)))
                                                          ? 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x1fU)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x1eU))
                                                          : 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x1dU)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x1cU)))
                                                         : 
                                                        ((2U 
                                                          & ((IData)(vlSelf->__PVT__exp_r) 
                                                             - (IData)(0x3dU)))
                                                          ? 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x1bU)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x1aU))
                                                          : 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x19U)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x18U))))
                                                        : 
                                                       ((4U 
                                                         & ((IData)(vlSelf->__PVT__exp_r) 
                                                            - (IData)(0x3dU)))
                                                         ? 
                                                        ((2U 
                                                          & ((IData)(vlSelf->__PVT__exp_r) 
                                                             - (IData)(0x3dU)))
                                                          ? 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x17U)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x16U))
                                                          : 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x15U)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x14U)))
                                                         : 
                                                        ((2U 
                                                          & ((IData)(vlSelf->__PVT__exp_r) 
                                                             - (IData)(0x3dU)))
                                                          ? 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x13U)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x12U))
                                                          : 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x11U)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x10U)))))
                                                       : 
                                                      ((8U 
                                                        & ((IData)(vlSelf->__PVT__exp_r) 
                                                           - (IData)(0x3dU)))
                                                        ? 
                                                       ((4U 
                                                         & ((IData)(vlSelf->__PVT__exp_r) 
                                                            - (IData)(0x3dU)))
                                                         ? 
                                                        ((2U 
                                                          & ((IData)(vlSelf->__PVT__exp_r) 
                                                             - (IData)(0x3dU)))
                                                          ? 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0xfU)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0xeU))
                                                          : 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0xdU)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0xcU)))
                                                         : 
                                                        ((2U 
                                                          & ((IData)(vlSelf->__PVT__exp_r) 
                                                             - (IData)(0x3dU)))
                                                          ? 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0xbU)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0xaU))
                                                          : 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 9U)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 8U))))
                                                        : 
                                                       ((4U 
                                                         & ((IData)(vlSelf->__PVT__exp_r) 
                                                            - (IData)(0x3dU)))
                                                         ? 
                                                        ((2U 
                                                          & ((IData)(vlSelf->__PVT__exp_r) 
                                                             - (IData)(0x3dU)))
                                                          ? 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 7U)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 6U))
                                                          : 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 5U)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 4U)))
                                                         : 
                                                        ((2U 
                                                          & ((IData)(vlSelf->__PVT__exp_r) 
                                                             - (IData)(0x3dU)))
                                                          ? 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 3U)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 2U))
                                                          : 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 1U)
                                                           : vlSelf->__PVT__fract_denorm)))))));
    vlSelf->__PVT__u4__DOT__u6__DOT__fi_ldz_r0 = ((1U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__fract_denorm 
                                                              >> 0x2fU)))
                                                   ? 1U
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__fract_denorm 
                                                                >> 0x2eU))))
                                                    ? 2U
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->__PVT__fract_denorm 
                                                                 >> 0x2dU))))
                                                     ? 3U
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (0xfU 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__fract_denorm 
                                                                  >> 0x2cU))))
                                                      ? 4U
                                                      : 
                                                     ((1U 
                                                       == 
                                                       (0x1fU 
                                                        & (IData)(
                                                                  (vlSelf->__PVT__fract_denorm 
                                                                   >> 0x2bU))))
                                                       ? 5U
                                                       : 
                                                      ((1U 
                                                        == 
                                                        (0x3fU 
                                                         & (IData)(
                                                                   (vlSelf->__PVT__fract_denorm 
                                                                    >> 0x2aU))))
                                                        ? 6U
                                                        : 
                                                       ((1U 
                                                         == 
                                                         (0x7fU 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__fract_denorm 
                                                                     >> 0x29U))))
                                                         ? 7U
                                                         : 
                                                        ((1U 
                                                          == 
                                                          (0xffU 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__fract_denorm 
                                                                      >> 0x28U))))
                                                          ? 8U
                                                          : 
                                                         ((1U 
                                                           == 
                                                           (0x1ffU 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__fract_denorm 
                                                                       >> 0x27U))))
                                                           ? 9U
                                                           : 
                                                          ((1U 
                                                            == 
                                                            (0x3ffU 
                                                             & (IData)(
                                                                       (vlSelf->__PVT__fract_denorm 
                                                                        >> 0x26U))))
                                                            ? 0xaU
                                                            : 
                                                           ((1U 
                                                             == 
                                                             (0x7ffU 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__fract_denorm 
                                                                         >> 0x25U))))
                                                             ? 0xbU
                                                             : 
                                                            ((1U 
                                                              == 
                                                              (0xfffU 
                                                               & (IData)(
                                                                         (vlSelf->__PVT__fract_denorm 
                                                                          >> 0x24U))))
                                                              ? 0xcU
                                                              : 
                                                             ((1U 
                                                               == 
                                                               (0x1fffU 
                                                                & (IData)(
                                                                          (vlSelf->__PVT__fract_denorm 
                                                                           >> 0x23U))))
                                                               ? 0xdU
                                                               : 
                                                              ((1U 
                                                                == 
                                                                (0x3fffU 
                                                                 & (IData)(
                                                                           (vlSelf->__PVT__fract_denorm 
                                                                            >> 0x22U))))
                                                                ? 0xeU
                                                                : 
                                                               ((1U 
                                                                 == 
                                                                 (0x7fffU 
                                                                  & (IData)(
                                                                            (vlSelf->__PVT__fract_denorm 
                                                                             >> 0x21U))))
                                                                 ? 0xfU
                                                                 : 
                                                                ((1U 
                                                                  == 
                                                                  (0xffffU 
                                                                   & (IData)(
                                                                             (vlSelf->__PVT__fract_denorm 
                                                                              >> 0x20U))))
                                                                  ? 0x10U
                                                                  : 
                                                                 ((1U 
                                                                   == 
                                                                   (0x1ffffU 
                                                                    & (IData)(
                                                                              (vlSelf->__PVT__fract_denorm 
                                                                               >> 0x1fU))))
                                                                   ? 0x11U
                                                                   : 
                                                                  ((1U 
                                                                    == 
                                                                    (0x3ffffU 
                                                                     & (IData)(
                                                                               (vlSelf->__PVT__fract_denorm 
                                                                                >> 0x1eU))))
                                                                    ? 0x12U
                                                                    : 
                                                                   ((1U 
                                                                     == 
                                                                     (0x7ffffU 
                                                                      & (IData)(
                                                                                (vlSelf->__PVT__fract_denorm 
                                                                                >> 0x1dU))))
                                                                     ? 0x13U
                                                                     : 
                                                                    ((1U 
                                                                      == 
                                                                      (0xfffffU 
                                                                       & (IData)(
                                                                                (vlSelf->__PVT__fract_denorm 
                                                                                >> 0x1cU))))
                                                                      ? 0x14U
                                                                      : 
                                                                     ((1U 
                                                                       == 
                                                                       (0x1fffffU 
                                                                        & (IData)(
                                                                                (vlSelf->__PVT__fract_denorm 
                                                                                >> 0x1bU))))
                                                                       ? 0x15U
                                                                       : 
                                                                      ((1U 
                                                                        == 
                                                                        (0x3fffffU 
                                                                         & (IData)(
                                                                                (vlSelf->__PVT__fract_denorm 
                                                                                >> 0x1aU))))
                                                                        ? 0x16U
                                                                        : 
                                                                       ((1U 
                                                                         == 
                                                                         (0x7fffffU 
                                                                          & (IData)(
                                                                                (vlSelf->__PVT__fract_denorm 
                                                                                >> 0x19U))))
                                                                         ? 0x17U
                                                                         : 
                                                                        ((1U 
                                                                          == 
                                                                          (0xffffffU 
                                                                           & (IData)(
                                                                                (vlSelf->__PVT__fract_denorm 
                                                                                >> 0x18U))))
                                                                          ? 0x18U
                                                                          : 
                                                                         ((1U 
                                                                           == 
                                                                           (0x1ffffffU 
                                                                            & (IData)(
                                                                                (vlSelf->__PVT__fract_denorm 
                                                                                >> 0x17U))))
                                                                           ? 0x19U
                                                                           : 
                                                                          ((1U 
                                                                            == 
                                                                            (0x3ffffffU 
                                                                             & (IData)(
                                                                                (vlSelf->__PVT__fract_denorm 
                                                                                >> 0x16U))))
                                                                            ? 0x1aU
                                                                            : 
                                                                           ((1U 
                                                                             == 
                                                                             (0x7ffffffU 
                                                                              & (IData)(
                                                                                (vlSelf->__PVT__fract_denorm 
                                                                                >> 0x15U))))
                                                                             ? 0x1bU
                                                                             : 
                                                                            ((1U 
                                                                              == 
                                                                              (0xfffffffU 
                                                                               & (IData)(
                                                                                (vlSelf->__PVT__fract_denorm 
                                                                                >> 0x14U))))
                                                                              ? 0x1cU
                                                                              : 
                                                                             ((1U 
                                                                               == 
                                                                               (0x1fffffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__fract_denorm 
                                                                                >> 0x13U))))
                                                                               ? 0x1dU
                                                                               : 
                                                                              ((1U 
                                                                                == 
                                                                                (0x3fffffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__fract_denorm 
                                                                                >> 0x12U))))
                                                                                ? 0x1eU
                                                                                : 
                                                                               ((1U 
                                                                                == 
                                                                                (0x7fffffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__fract_denorm 
                                                                                >> 0x11U))))
                                                                                 ? 0x1fU
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(
                                                                                (vlSelf->__PVT__fract_denorm 
                                                                                >> 0x10U)))
                                                                                 ? 0x20U
                                                                                 : 
                                                                                ((1ULL 
                                                                                == 
                                                                                (0x1ffffffffULL 
                                                                                & (vlSelf->__PVT__fract_denorm 
                                                                                >> 0xfU)))
                                                                                 ? 0x21U
                                                                                 : 
                                                                                ((1ULL 
                                                                                == 
                                                                                (0x3ffffffffULL 
                                                                                & (vlSelf->__PVT__fract_denorm 
                                                                                >> 0xeU)))
                                                                                 ? 0x22U
                                                                                 : 
                                                                                ((1ULL 
                                                                                == 
                                                                                (0x7ffffffffULL 
                                                                                & (vlSelf->__PVT__fract_denorm 
                                                                                >> 0xdU)))
                                                                                 ? 0x23U
                                                                                 : 
                                                                                ((1ULL 
                                                                                == 
                                                                                (0xfffffffffULL 
                                                                                & (vlSelf->__PVT__fract_denorm 
                                                                                >> 0xcU)))
                                                                                 ? 0x24U
                                                                                 : 
                                                                                ((1ULL 
                                                                                == 
                                                                                (0x1fffffffffULL 
                                                                                & (vlSelf->__PVT__fract_denorm 
                                                                                >> 0xbU)))
                                                                                 ? 0x25U
                                                                                 : 
                                                                                ((1ULL 
                                                                                == 
                                                                                (0x3fffffffffULL 
                                                                                & (vlSelf->__PVT__fract_denorm 
                                                                                >> 0xaU)))
                                                                                 ? 0x26U
                                                                                 : 
                                                                                ((1ULL 
                                                                                == 
                                                                                (0x7fffffffffULL 
                                                                                & (vlSelf->__PVT__fract_denorm 
                                                                                >> 9U)))
                                                                                 ? 0x27U
                                                                                 : 
                                                                                ((1ULL 
                                                                                == 
                                                                                (0xffffffffffULL 
                                                                                & (vlSelf->__PVT__fract_denorm 
                                                                                >> 8U)))
                                                                                 ? 0x28U
                                                                                 : 
                                                                                ((1ULL 
                                                                                == 
                                                                                (0x1ffffffffffULL 
                                                                                & (vlSelf->__PVT__fract_denorm 
                                                                                >> 7U)))
                                                                                 ? 0x29U
                                                                                 : 
                                                                                ((1ULL 
                                                                                == 
                                                                                (0x3ffffffffffULL 
                                                                                & (vlSelf->__PVT__fract_denorm 
                                                                                >> 6U)))
                                                                                 ? 0x2aU
                                                                                 : 
                                                                                ((1ULL 
                                                                                == 
                                                                                (0x7ffffffffffULL 
                                                                                & (vlSelf->__PVT__fract_denorm 
                                                                                >> 5U)))
                                                                                 ? 0x2bU
                                                                                 : 
                                                                                ((1ULL 
                                                                                == 
                                                                                (0xfffffffffffULL 
                                                                                & (vlSelf->__PVT__fract_denorm 
                                                                                >> 4U)))
                                                                                 ? 0x2cU
                                                                                 : 
                                                                                ((1ULL 
                                                                                == 
                                                                                (0x1fffffffffffULL 
                                                                                & (vlSelf->__PVT__fract_denorm 
                                                                                >> 3U)))
                                                                                 ? 0x2dU
                                                                                 : 
                                                                                ((1ULL 
                                                                                == 
                                                                                (0x3fffffffffffULL 
                                                                                & (vlSelf->__PVT__fract_denorm 
                                                                                >> 2U)))
                                                                                 ? 0x2eU
                                                                                 : 
                                                                                ((1ULL 
                                                                                == 
                                                                                (0x7fffffffffffULL 
                                                                                & (vlSelf->__PVT__fract_denorm 
                                                                                >> 1U)))
                                                                                 ? 0x2fU
                                                                                 : 0x30U)))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->__PVT__inf_fmul = (((IData)(vlSelf->__VdfgRegularize_h62b27241_3_9) 
                                | (IData)(__VdfgRegularize_h62b27241_3_10)) 
                               & ((~ (IData)(vlSelf->__VdfgRegularize_h62b27241_3_7)) 
                                  & (2U == (IData)(vlSelf->__PVT__fpu_op_r3))));
    vlSelf->__PVT__ine_mula = ((IData)(vlSelf->__VdfgRegularize_h62b27241_3_11) 
                               & ((1U == (IData)(vlSelf->__PVT__rmode_r3)) 
                                  & ((~ (IData)(vlSelf->__VdfgRegularize_h62b27241_3_7)) 
                                     & ((IData)(vlSelf->__PVT__fpu_op_r3) 
                                        >> 1U))));
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_48 
        = (((~ (IData)(vlSelf->__PVT__exp_ovf_r)) & (IData)(u4__DOT____VdfgRegularize_he8d392c1_0_47)) 
           | (IData)(vlSelf->__PVT__or_result));
    vlSelf->__PVT__u4__DOT__div_nr = ((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_15) 
                                      & ((~ (IData)(
                                                    (0U 
                                                     != 
                                                     (0xffffffU 
                                                      & (IData)(
                                                                (vlSelf->__PVT__fract_denorm 
                                                                 >> 0x17U)))))) 
                                         & (0x16U < (IData)(vlSelf->__PVT__exp_r))));
    vlSelf->__PVT__u4__DOT__f2i_max = (((~ (IData)(vlSelf->__PVT__opas_r2)) 
                                        & (0x9dU < (IData)(vlSelf->__PVT__exp_r))) 
                                       | ((IData)(u4__DOT____VdfgRegularize_he8d392c1_0_10) 
                                          & ((0U != vlSelf->__PVT__fract_denorm) 
                                             & (3U 
                                                == (IData)(vlSelf->__PVT__rmode_r3)))));
    vlSelf->__PVT__u4__DOT__f2i_zero = (((~ (IData)(vlSelf->__PVT__opas_r2)) 
                                         & (IData)(u4__DOT____VdfgRegularize_he8d392c1_0_8)) 
                                        | (((IData)(vlSelf->__PVT__opas_r2) 
                                            & (0x9dU 
                                               < (IData)(vlSelf->__PVT__exp_r))) 
                                           | ((IData)(u4__DOT____VdfgRegularize_he8d392c1_0_10) 
                                              & ((~ (IData)(
                                                            (0U 
                                                             != vlSelf->__PVT__fract_denorm))) 
                                                 | (3U 
                                                    != (IData)(vlSelf->__PVT__rmode_r3))))));
    vlSelf->__PVT__u4__DOT__div_exp2 = (0xffU & (((IData)(1U) 
                                                  + (IData)(vlSelf->__PVT__exp_r)) 
                                                 - (IData)(vlSelf->__PVT__u4__DOT__u6__DOT__fi_ldz_r0)));
    vlSelf->__PVT__u4__DOT__fi_ldz_2 = ((0x80U & (((IData)(0x17U) 
                                                   - (IData)(vlSelf->__PVT__u4__DOT__u6__DOT__fi_ldz_r0)) 
                                                  << 1U)) 
                                        | (0x7fU & 
                                           ((IData)(0x17U) 
                                            - (IData)(vlSelf->__PVT__u4__DOT__u6__DOT__fi_ldz_r0))));
    vlSelf->__PVT__u4__DOT__exp_next_mi = (0x1ffU & 
                                           (((IData)(1U) 
                                             + (IData)(vlSelf->__PVT__exp_r)) 
                                            - (0x3fU 
                                               & ((IData)(vlSelf->__PVT__u4__DOT__u6__DOT__fi_ldz_r0) 
                                                  - (IData)(1U)))));
    if ((5U == (IData)(vlSelf->__PVT__fpu_op_r3))) {
        u4__DOT____VdfgRegularize_he8d392c1_0_46 = vlSelf->__PVT__u4__DOT__f2i_max;
        vlSelf->__PVT__u4__DOT__conv_exp = (0xffU & 
                                            ((IData)(vlSelf->__PVT__u4__DOT__f2i_zero)
                                              ? 0U : 
                                             ((IData)(vlSelf->__PVT__u4__DOT__f2i_max)
                                               ? 0xffU
                                               : 0U)));
    } else {
        u4__DOT____VdfgRegularize_he8d392c1_0_46 = 0U;
        vlSelf->__PVT__u4__DOT__conv_exp = (0xffU & 
                                            ((0U != vlSelf->__PVT__fract_denorm)
                                              ? ((IData)(0x9eU) 
                                                 - (IData)(vlSelf->__PVT__u4__DOT__u6__DOT__fi_ldz_r0))
                                              : ((IData)(vlSelf->__PVT__opas_r2)
                                                  ? 0x9eU
                                                  : 0U)));
    }
    vlSelf->__PVT__u4__DOT__div_exp1 = (0x1ffU & (((IData)(vlSelf->__PVT__exp_r) 
                                                   - (IData)(1U)) 
                                                  + (IData)(vlSelf->__PVT__u4__DOT__fi_ldz_2)));
    vlSelf->__PVT__u4__DOT__dn = ((2U != (IData)(vlSelf->__PVT__fpu_op_r3)) 
                                  & ((3U != (IData)(vlSelf->__PVT__fpu_op_r3)) 
                                     & ((~ (IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->__PVT__exp_r)))) 
                                        | ((~ (IData)(
                                                      (vlSelf->__PVT__fract_denorm 
                                                       >> 0x2fU))) 
                                           & ((IData)(vlSelf->__PVT__u4__DOT__exp_next_mi) 
                                              >> 8U)))));
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_23 
        = (0x1ffU & ((1U & (IData)((vlSelf->__PVT__fract_denorm 
                                    >> 0x2fU))) ? ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__exp_r))
                      : (IData)(vlSelf->__PVT__u4__DOT__exp_next_mi)));
    vlSelf->__PVT__u4__DOT__div_inf = ((IData)(vlSelf->__PVT__opb_dn) 
                                       & ((~ (IData)(vlSelf->__PVT__opa_dn)) 
                                          & (0x7fU 
                                             > (0xffU 
                                                & (IData)(vlSelf->__PVT__u4__DOT__div_exp1)))));
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_53 
        = ((~ (IData)(vlSelf->__PVT__u4__DOT__dn)) 
           & (5U != (IData)(vlSelf->__PVT__fpu_op_r3)));
    vlSelf->__PVT__u4__DOT__exp_div = (0xffU & (((IData)(vlSelf->__PVT__opa_dn) 
                                                 & (IData)(vlSelf->__PVT__opb_dn))
                                                 ? 
                                                ((IData)(vlSelf->__PVT__exp_r) 
                                                 + (IData)(vlSelf->__PVT__u4__DOT__fi_ldz_2))
                                                 : 
                                                ((IData)(vlSelf->__PVT__opb_dn)
                                                  ? (IData)(vlSelf->__PVT__u4__DOT__div_exp1)
                                                  : 
                                                 (((0xfeU 
                                                    >= (IData)(vlSelf->__PVT__u4__DOT__div_exp2)) 
                                                   & (IData)(vlSelf->__PVT__opa_dn))
                                                   ? (IData)(vlSelf->__PVT__u4__DOT__div_exp2)
                                                   : 
                                                  ((1U 
                                                    & ((IData)(vlSelf->__PVT__opa_dn) 
                                                       | ((~ (IData)(
                                                                     (0U 
                                                                      != (IData)(vlSelf->__PVT__exp_r)))) 
                                                          & (~ 
                                                             ((IData)(vlSelf->__PVT__exp_ovf_r) 
                                                              >> 1U)))))
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_23) 
                                                    - (IData)(1U)))))));
    vlSelf->__PVT__u4__DOT__exp_out = (0xffU & ((3U 
                                                 == (IData)(vlSelf->__PVT__fpu_op_r3))
                                                 ? (IData)(vlSelf->__PVT__u4__DOT__exp_div)
                                                 : 
                                                ((IData)(u4__DOT____VdfgRegularize_he8d392c1_0_19)
                                                  ? (IData)(vlSelf->__PVT__u4__DOT__conv_exp)
                                                  : 
                                                 ((((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_59) 
                                                    & (2U 
                                                       == (IData)(vlSelf->__PVT__fpu_op_r3))) 
                                                   | ((2U 
                                                       == (IData)(vlSelf->__PVT__fpu_op_r3)) 
                                                      & ((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_23) 
                                                         >> 8U)))
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlSelf->__PVT__u4__DOT__dn)
                                                    ? 
                                                   (3U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__fract_denorm 
                                                               >> 0x2eU)))
                                                    : (IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_23))))));
    vlSelf->__PVT__u4__DOT__exp_out_fe = (IData)((0xfeU 
                                                  == (IData)(vlSelf->__PVT__u4__DOT__exp_out)));
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_38 
        = ((IData)(vlSelf->__PVT__sign) & (0xffU == (IData)(vlSelf->__PVT__u4__DOT__exp_out)));
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_66 
        = ((~ (IData)((0U != (IData)(vlSelf->__PVT__u4__DOT__exp_out)))) 
           & (IData)(vlSelf->__PVT__u4__DOT__op_dn));
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_65 
        = (1U & ((~ (IData)(vlSelf->__PVT__u4__DOT__op_dn)) 
                 & ((~ (IData)((0U != (IData)(vlSelf->__PVT__u4__DOT__exp_out)))) 
                    & (~ ((IData)(vlSelf->__PVT__exp_ovf_r) 
                          >> 1U)))));
    u4__DOT____VdfgRegularize_he8d392c1_0_64 = (1U 
                                                & ((~ (IData)(
                                                              (0U 
                                                               != (IData)(vlSelf->__PVT__u4__DOT__exp_out)))) 
                                                   | ((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_23) 
                                                      >> 8U)));
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_14 
        = (0x1ffU & ((IData)(u4__DOT____VdfgRegularize_he8d392c1_0_13)
                      ? (IData)(vlSelf->__PVT__u4__DOT__exp_out)
                      : ((IData)(vlSelf->__PVT__exp_r) 
                         - (IData)(1U))));
    vlSelf->__PVT__u4__DOT__grs_sel_div = ((3U == (IData)(vlSelf->__PVT__fpu_op_r3)) 
                                           & (((IData)(vlSelf->__PVT__exp_ovf_r) 
                                               >> 1U) 
                                              | (IData)(u4__DOT____VdfgRegularize_he8d392c1_0_64)));
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_63 
        = ((~ ((IData)(vlSelf->__PVT__exp_ovf_r) >> 1U)) 
           & ((0U != (IData)(vlSelf->__PVT__exp_r)) 
              & (IData)(u4__DOT____VdfgRegularize_he8d392c1_0_64)));
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_62 
        = (IData)(((((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_14) 
                     >> 8U) | (IData)(u4__DOT____VdfgRegularize_he8d392c1_0_13)) 
                   | (IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_63)));
    vlSelf->__PVT__u4__DOT__shift_right = (0xffU & 
                                           ((3U == (IData)(vlSelf->__PVT__fpu_op_r3))
                                             ? ((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_15)
                                                 ? (IData)(vlSelf->__PVT__exp_r)
                                                 : 
                                                ((IData)(2U) 
                                                 + (IData)(vlSelf->__PVT__exp_r)))
                                             : (IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_14)));
    vlSelf->__PVT__u4__DOT__fract_in_shftr_1 = (0xffffffffffffULL 
                                                & ((0x20U 
                                                    & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                    ? 
                                                   ((0x10U 
                                                     & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                     ? 
                                                    ((8U 
                                                      & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                      ? vlSelf->__PVT__fract_denorm
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                       ? vlSelf->__PVT__fract_denorm
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                        ? vlSelf->__PVT__fract_denorm
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? vlSelf->__PVT__fract_denorm
                                                         : 0ULL))))
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                      ? 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x2fU)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x2eU))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x2dU)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x2cU)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x2bU)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x2aU))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x29U)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x28U))))
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x27U)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x26U))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x25U)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x24U)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x23U)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x22U))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x21U)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x20U))))))
                                                    : 
                                                   ((0x10U 
                                                     & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                     ? 
                                                    ((8U 
                                                      & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                      ? 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x1fU)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x1eU))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x1dU)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x1cU)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x1bU)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x1aU))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x19U)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x18U))))
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x17U)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x16U))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x15U)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x14U)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x13U)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x12U))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x11U)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x10U)))))
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                      ? 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0xfU)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0xeU))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0xdU)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0xcU)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0xbU)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0xaU))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 9U)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 8U))))
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 7U)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 6U))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 5U)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 4U)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 3U)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 2U))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 1U)
                                                         : vlSelf->__PVT__fract_denorm)))))));
    vlSelf->__PVT__u4__DOT__shift_left = (0xffU & (
                                                   (3U 
                                                    == (IData)(vlSelf->__PVT__fpu_op_r3))
                                                    ? 
                                                   (((~ (IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_20)) 
                                                     & (IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_66))
                                                     ? 
                                                    ((0U 
                                                      != (IData)(vlSelf->__PVT__exp_r))
                                                      ? (IData)(vlSelf->__PVT__exp_r)
                                                      : 0U)
                                                     : 
                                                    ((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_65)
                                                      ? (IData)(vlSelf->__PVT__exp_r)
                                                      : (IData)(vlSelf->__PVT__u4__DOT__u6__DOT__fi_ldz_r0)))
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->__PVT__fpu_op_r3))
                                                     ? 
                                                    ((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_62)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__exp_r))
                                                      : (IData)(vlSelf->__PVT__u4__DOT__u6__DOT__fi_ldz_r0))
                                                     : 
                                                    ((IData)(u4__DOT____VdfgRegularize_he8d392c1_0_19)
                                                      ? 
                                                     ((5U 
                                                       == (IData)(vlSelf->__PVT__fpu_op_r3))
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__exp_r) 
                                                       - (IData)(0x7dU))
                                                       : (IData)(vlSelf->__PVT__u4__DOT__u6__DOT__fi_ldz_r0))
                                                      : 
                                                     ((1U 
                                                       & ((~ (IData)(
                                                                     (0U 
                                                                      != (IData)(vlSelf->__PVT__u4__DOT__exp_out)))) 
                                                          | (IData)(vlSelf->__PVT__u4__DOT__dn)))
                                                       ? 
                                                      ((0U 
                                                        != (IData)(vlSelf->__PVT__exp_r))
                                                        ? 
                                                       ((IData)(1U) 
                                                        + (IData)(vlSelf->__PVT__exp_r))
                                                        : 2U)
                                                       : (IData)(vlSelf->__PVT__u4__DOT__u6__DOT__fi_ldz_r0))))));
    vlSelf->__PVT__u4__DOT__fract_in_shftl_1 = (0xffffffffffffULL 
                                                & ((0x20U 
                                                    & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                    ? 
                                                   ((0x10U 
                                                     & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                     ? 
                                                    ((8U 
                                                      & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                      ? vlSelf->__PVT__fract_denorm
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                       ? vlSelf->__PVT__fract_denorm
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                        ? vlSelf->__PVT__fract_denorm
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? vlSelf->__PVT__fract_denorm
                                                         : 0ULL))))
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                      ? 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x2fU)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x2eU))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x2dU)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x2cU)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x2bU)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x2aU))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x29U)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x28U))))
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x27U)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x26U))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x25U)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x24U)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x23U)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x22U))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x21U)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x20U))))))
                                                    : 
                                                   ((0x10U 
                                                     & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                     ? 
                                                    ((8U 
                                                      & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                      ? 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x1fU)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x1eU))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x1dU)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x1cU)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x1bU)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x1aU))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x19U)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x18U))))
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x17U)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x16U))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x15U)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x14U)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x13U)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x12U))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x11U)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0x10U)))))
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                      ? 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0xfU)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0xeU))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0xdU)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0xcU)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0xbU)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 0xaU))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 9U)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 8U))))
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 7U)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 6U))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 5U)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 4U)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 3U)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 2U))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fract_denorm, 1U)
                                                         : vlSelf->__PVT__fract_denorm)))))));
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_21 
        = ((1U & ((3U == (IData)(vlSelf->__PVT__fpu_op_r3))
                   ? ((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_67) 
                      | ((~ (IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_15)) 
                         & ((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_66) 
                            | ((~ ((IData)(vlSelf->__PVT__exp_ovf_r) 
                                   >> 1U)) | (IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_65)))))
                   : ((2U != (IData)(vlSelf->__PVT__fpu_op_r3)) 
                      | ((~ (IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_61)) 
                         | (IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_62)))))
            ? (((0U != (3U & ((IData)(vlSelf->__PVT__u4__DOT__shift_left) 
                              >> 6U))) | ((IData)(vlSelf->__PVT__u4__DOT__f2i_zero) 
                                          & (5U == (IData)(vlSelf->__PVT__fpu_op_r3))))
                ? 0ULL : vlSelf->__PVT__u4__DOT__fract_in_shftl_1)
            : ((0U != (3U & ((IData)(vlSelf->__PVT__u4__DOT__shift_right) 
                             >> 6U))) ? 0ULL : vlSelf->__PVT__u4__DOT__fract_in_shftr_1));
    vlSelf->__PVT__u4__DOT__f2i_ine = (((IData)(vlSelf->__PVT__u4__DOT__f2i_zero) 
                                        & ((~ (IData)(vlSelf->__PVT__opas_r2)) 
                                           & (0U != vlSelf->__PVT__fract_denorm))) 
                                       | ((0U != (0x1ffffffU 
                                                  & (IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_21))) 
                                          | (((IData)(vlSelf->__PVT__u4__DOT__f2i_zero) 
                                              & ((0x80U 
                                                  > (IData)(vlSelf->__PVT__exp_r)) 
                                                 & ((0U 
                                                     != vlSelf->__PVT__fract_denorm) 
                                                    & (IData)(vlSelf->__PVT__opas_r2)))) 
                                             | ((IData)(vlSelf->__PVT__u4__DOT__f2i_max) 
                                                & ((3U 
                                                    == (IData)(vlSelf->__PVT__rmode_r3)) 
                                                   & (0x80U 
                                                      > (IData)(vlSelf->__PVT__exp_r)))))));
    vlSelf->__PVT__u4__DOT__underflow_fmul = (((0U 
                                                != 
                                                (0x1ffffffU 
                                                 & (IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_21))) 
                                               & ((~ (IData)(
                                                             (0xffU 
                                                              == (IData)(vlSelf->__PVT__exp_r)))) 
                                                  & (((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_14) 
                                                      >> 8U) 
                                                     | ((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_61) 
                                                        | (IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_63))))) 
                                              | ((~ (IData)(
                                                            (0U 
                                                             != 
                                                             (0x7fffffU 
                                                              & (IData)(
                                                                        (vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_21 
                                                                         >> 0x19U)))))) 
                                                 & ((0U 
                                                     != vlSelf->__PVT__fract_denorm) 
                                                    & ((IData)(vlSelf->__PVT__exp_ovf_r) 
                                                       >> 1U))));
    vlSelf->__PVT__u4__DOT__round2_f2i = ((2U == (IData)(vlSelf->__PVT__rmode_r3)) 
                                          & (((0U != 
                                               (0xffffffU 
                                                & (IData)(vlSelf->__PVT__fract_denorm))) 
                                              & ((~ (IData)(vlSelf->__PVT__opas_r2)) 
                                                 & (0x80U 
                                                    > (IData)(vlSelf->__PVT__exp_r)))) 
                                             | (0U 
                                                != 
                                                (0x1ffffffU 
                                                 & (IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_21)))));
    if (vlSelf->__PVT__u4__DOT__grs_sel_div) {
        vlSelf->__PVT__u4__DOT__s = (0U != (0x1ffffffU 
                                            & (IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_21)));
        vlSelf->__PVT__u4__DOT__r = (1U & ((~ (IData)(vlSelf->__PVT__u4__DOT__div_nr)) 
                                           & (IData)(
                                                     (vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_21 
                                                      >> 0x18U))));
    } else {
        vlSelf->__PVT__u4__DOT__s = ((0U != (0xffffffU 
                                             & (IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_21))) 
                                     | ((IData)((vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_21 
                                                 >> 0x18U)) 
                                        & (3U == (IData)(vlSelf->__PVT__fpu_op_r3))));
        vlSelf->__PVT__u4__DOT__r = (1U & (IData)((vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_21 
                                                   >> 0x18U)));
    }
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_27 
        = ((IData)((vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_21 
                    >> 0x19U)) & (IData)(vlSelf->__PVT__u4__DOT__r));
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_30 
        = ((IData)(vlSelf->__PVT__u4__DOT__r) | (IData)(vlSelf->__PVT__u4__DOT__s));
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_55 
        = (0xffffffU & ((0x7fffffU & (IData)((vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_21 
                                              >> 0x19U))) 
                        + ((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_27) 
                           | ((IData)(vlSelf->__PVT__u4__DOT__r) 
                              & (IData)(vlSelf->__PVT__u4__DOT__s)))));
    u4__DOT____VdfgRegularize_he8d392c1_0_35 = ((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_30) 
                                                | (3U 
                                                   == (IData)(vlSelf->__PVT__fpu_op_r3)));
    vlSelf->__PVT__u4__DOT__round2_fmul = ((~ (IData)(vlSelf->__PVT__sign)) 
                                           & ((((IData)(vlSelf->__PVT__exp_ovf_r) 
                                                >> 1U) 
                                               & ((0U 
                                                   != vlSelf->__PVT__fract_denorm) 
                                                  & ((((~ 
                                                        ((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_23) 
                                                         >> 8U)) 
                                                       | (IData)(vlSelf->__PVT__u4__DOT__op_dn)) 
                                                      & (IData)(u4__DOT____VdfgRegularize_he8d392c1_0_35)) 
                                                     | ((~ (IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0x7fffffU 
                                                                     & (IData)(
                                                                               (vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_21 
                                                                                >> 0x19U)))))) 
                                                        | ((~ (IData)(vlSelf->__PVT__u4__DOT__op_dn)) 
                                                           & (3U 
                                                              != (IData)(vlSelf->__PVT__fpu_op_r3))))))) 
                                              | ((IData)(u4__DOT____VdfgRegularize_he8d392c1_0_35) 
                                                 & (((~ 
                                                      ((IData)(vlSelf->__PVT__exp_ovf_r) 
                                                       >> 1U)) 
                                                     & ((~ (IData)(vlSelf->__PVT__exp_ovf_r)) 
                                                        | (IData)(vlSelf->__PVT__u4__DOT__exp_in_80))) 
                                                    | ((3U 
                                                        == (IData)(vlSelf->__PVT__fpu_op_r3)) 
                                                       | ((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_59) 
                                                          & ((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_23) 
                                                             >> 8U)))))));
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_54 
        = (0xffffffU & ((0x7fffffU & (IData)((vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_21 
                                              >> 0x19U))) 
                        + ((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_37)
                            ? (IData)(vlSelf->__PVT__u4__DOT__round2_fmul)
                            : ((5U == (IData)(vlSelf->__PVT__fpu_op_r3))
                                ? (IData)(vlSelf->__PVT__u4__DOT__round2_f2i)
                                : ((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_30) 
                                   & ((~ (IData)(vlSelf->__PVT__sign)) 
                                      & ((~ ((IData)(vlSelf->__PVT__u4__DOT__exp_out) 
                                             >> 7U)) 
                                         | (((IData)(vlSelf->__PVT__u4__DOT__exp_out) 
                                             >> 7U) 
                                            & ((~ (IData)(vlSelf->__PVT__u4__DOT__exp_out_fe)) 
                                               | ((~ (IData)(
                                                             (0x7fffffU 
                                                              == 
                                                              (0x7fffffU 
                                                               & (IData)(
                                                                         (vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_21 
                                                                          >> 0x19U)))))) 
                                                  | ((IData)(vlSelf->__PVT__u4__DOT__exp_out_fe) 
                                                     & (0xfffffe000000ULL 
                                                        == 
                                                        (0xfffffe000000ULL 
                                                         & vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_21)))))))))))));
    if ((2U & (IData)(vlSelf->__PVT__rmode_r3))) {
        vlSelf->__PVT__u4__DOT__fract_out_rnd = (0x7fffffU 
                                                 & (((3U 
                                                      != (IData)(vlSelf->__PVT__fpu_op_r3)) 
                                                     & ((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_38) 
                                                        & (IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_53)))
                                                     ? 0x7fffffU
                                                     : vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_54));
        vlSelf->__PVT__u4__DOT__exp_out_rnd = (0xffU 
                                               & (((5U 
                                                    != (IData)(vlSelf->__PVT__fpu_op_r3)) 
                                                   & (IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_38))
                                                   ? 0xfeU
                                                   : 
                                                  ((0x800000U 
                                                    & vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_54)
                                                    ? 
                                                   ((((IData)(vlSelf->__PVT__exp_ovf_r) 
                                                      >> 1U) 
                                                     & (2U 
                                                        == (IData)(vlSelf->__PVT__fpu_op_r3)))
                                                     ? 
                                                    ((IData)(vlSelf->__PVT__u4__DOT__exp_out) 
                                                     - (IData)(1U))
                                                     : 
                                                    ((IData)(1U) 
                                                     + (IData)(vlSelf->__PVT__u4__DOT__exp_out)))
                                                    : (IData)(vlSelf->__PVT__u4__DOT__exp_out))));
    } else if ((1U & (IData)(vlSelf->__PVT__rmode_r3))) {
        vlSelf->__PVT__u4__DOT__fract_out_rnd = (0x7fffffU 
                                                 & (((3U 
                                                      != (IData)(vlSelf->__PVT__fpu_op_r3)) 
                                                     & ((0xffU 
                                                         == (IData)(vlSelf->__PVT__u4__DOT__exp_out)) 
                                                        & (IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_53)))
                                                     ? 0x7fffffU
                                                     : (IData)(
                                                               (vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_21 
                                                                >> 0x19U))));
        vlSelf->__PVT__u4__DOT__exp_out_rnd = (0xffU 
                                               & (((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_27) 
                                                   & ((IData)(vlSelf->__PVT__u4__DOT__s) 
                                                      & (0xffU 
                                                         == (IData)(vlSelf->__PVT__exp_r))))
                                                   ? 
                                                  ((3U 
                                                    == (IData)(vlSelf->__PVT__fpu_op_r3))
                                                    ? 
                                                   ((0x16U 
                                                     < (IData)(vlSelf->__PVT__u4__DOT__u6__DOT__fi_ldz_r0))
                                                     ? 
                                                    ((IData)(vlSelf->__PVT__exp_r) 
                                                     - 
                                                     (0x3fU 
                                                      & ((IData)(vlSelf->__PVT__u4__DOT__u6__DOT__fi_ldz_r0) 
                                                         - (IData)(0x16U))))
                                                     : 
                                                    ((IData)(vlSelf->__PVT__exp_r) 
                                                     - 
                                                     (0x3fU 
                                                      & ((IData)(vlSelf->__PVT__u4__DOT__u6__DOT__fi_ldz_r0) 
                                                         - (IData)(1U)))))
                                                    : (IData)(vlSelf->__PVT__u4__DOT__exp_next_mi))
                                                   : 
                                                  (((5U 
                                                     != (IData)(vlSelf->__PVT__fpu_op_r3)) 
                                                    & (0xffU 
                                                       == (IData)(vlSelf->__PVT__u4__DOT__exp_out)))
                                                    ? (IData)(vlSelf->__PVT__exp_r)
                                                    : (IData)(vlSelf->__PVT__u4__DOT__exp_out))));
    } else {
        vlSelf->__PVT__u4__DOT__fract_out_rnd = (0x7fffffU 
                                                 & vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_55);
        vlSelf->__PVT__u4__DOT__exp_out_rnd = (0xffU 
                                               & ((IData)(vlSelf->__PVT__u4__DOT__exp_out) 
                                                  + 
                                                  (1U 
                                                   & (vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_55 
                                                      >> 0x17U))));
    }
    vlSelf->__PVT__u4__DOT__max_num = (((0U != (IData)(vlSelf->__PVT__rmode_r3)) 
                                        & ((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_37) 
                                           & ((IData)(u4__DOT____VdfgRegularize_he8d392c1_0_40) 
                                              | ((IData)(u4__DOT____VdfgRegularize_he8d392c1_0_41) 
                                                 & ((0xffU 
                                                     == (IData)(vlSelf->__PVT__exp_r)) 
                                                    & ((0x18U 
                                                        > (IData)(vlSelf->__PVT__u4__DOT__fi_ldz_2)) 
                                                       & (0xfeU 
                                                          != (IData)(vlSelf->__PVT__u4__DOT__exp_out)))))))) 
                                       | ((3U == (IData)(vlSelf->__PVT__fpu_op_r3)) 
                                          & (((1U == (IData)(vlSelf->__PVT__rmode_r3)) 
                                              & ((IData)(vlSelf->__PVT__u4__DOT__div_inf) 
                                                 | (((~ 
                                                      ((IData)(vlSelf->__PVT__exp_ovf_r) 
                                                       >> 1U)) 
                                                     & (0xffU 
                                                        == (IData)(vlSelf->__PVT__u4__DOT__exp_out))) 
                                                    | (IData)(u4__DOT____VdfgRegularize_he8d392c1_0_40)))) 
                                             | ((IData)(u4__DOT____VdfgRegularize_he8d392c1_0_52) 
                                                & (((IData)(vlSelf->__PVT__exp_ovf_r) 
                                                    & ((0xffU 
                                                        == (IData)(vlSelf->__PVT__exp_r)) 
                                                       & ((IData)(vlSelf->__PVT__sign) 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__fract_denorm 
                                                                     >> 0x2fU))))) 
                                                   | (((IData)(vlSelf->__PVT__sign) 
                                                       & (((IData)(
                                                                   (vlSelf->__PVT__fract_denorm 
                                                                    >> 0x2fU)) 
                                                           & (IData)(vlSelf->__PVT__u4__DOT__div_inf)) 
                                                          | (((~ 
                                                               ((IData)(vlSelf->__PVT__u4__DOT__exp_out_rnd) 
                                                                >> 7U)) 
                                                              & ((~ 
                                                                  ((IData)(vlSelf->__PVT__u4__DOT__exp_in_80) 
                                                                   | (0x7fU 
                                                                      == (IData)(vlSelf->__PVT__u4__DOT__exp_out)))) 
                                                                 & ((IData)(vlSelf->__PVT__exp_r) 
                                                                    >> 7U))) 
                                                             | (((IData)(vlSelf->__PVT__exp_r) 
                                                                 >> 7U) 
                                                                & (((IData)(vlSelf->__PVT__u4__DOT__exp_out_rnd) 
                                                                    >> 7U) 
                                                                   & ((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_38) 
                                                                      & ((IData)(vlSelf->__PVT__u4__DOT__op_dn) 
                                                                         & (0xfeU 
                                                                            < (IData)(vlSelf->__PVT__u4__DOT__div_exp1))))))))) 
                                                      | ((~ (IData)(
                                                                    (0U 
                                                                     != (IData)(vlSelf->__PVT__exp_r)))) 
                                                         & ((IData)(vlSelf->__PVT__sign) 
                                                            & ((IData)(vlSelf->__PVT__u4__DOT__div_inf) 
                                                               | ((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_38) 
                                                                  & (0x18U 
                                                                     > (IData)(vlSelf->__PVT__u4__DOT__fi_ldz_2))))))))))));
    vlSelf->__PVT__u4__DOT__inf_out = ((((IData)(vlSelf->__PVT__rmode_r3) 
                                         >> 1U) & ((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_37) 
                                                   & ((~ (IData)(vlSelf->__PVT__sign)) 
                                                      & (((3U 
                                                           != (IData)(vlSelf->__PVT__fpu_op_r3)) 
                                                          & (0xffU 
                                                             == (IData)(vlSelf->__PVT__exp_r))) 
                                                         | ((IData)(u4__DOT____VdfgRegularize_he8d392c1_0_40) 
                                                            & ((~ (IData)(
                                                                          (0U 
                                                                           != (IData)(vlSelf->__PVT__exp_r)))) 
                                                               | ((IData)(vlSelf->__PVT__exp_r) 
                                                                  >> 7U))))))) 
                                       | (((IData)(vlSelf->__PVT__u4__DOT__div_inf) 
                                           & ((3U == (IData)(vlSelf->__PVT__fpu_op_r3)) 
                                              & ((0U 
                                                  == (IData)(vlSelf->__PVT__rmode_r3)) 
                                                 | ((((IData)(vlSelf->__PVT__rmode_r3) 
                                                      >> 1U) 
                                                     & ((~ (IData)(
                                                                   (0xffU 
                                                                    == (IData)(vlSelf->__PVT__exp_r)))) 
                                                        & (IData)(
                                                                  ((0U 
                                                                    == (IData)(vlSelf->__PVT__exp_ovf_r)) 
                                                                   & (~ (IData)(vlSelf->__PVT__sign)))))) 
                                                    | ((IData)(u4__DOT____VdfgRegularize_he8d392c1_0_52) 
                                                       & ((IData)(vlSelf->__PVT__exp_ovf_r) 
                                                          & ((~ (IData)(
                                                                        (0U 
                                                                         != (IData)(vlSelf->__PVT__exp_r)))) 
                                                             & (~ (IData)(vlSelf->__PVT__sign))))))))) 
                                          | ((3U == (IData)(vlSelf->__PVT__fpu_op_r3)) 
                                             & (((IData)(vlSelf->__PVT__rmode_r3) 
                                                 >> 1U) 
                                                & ((0xffU 
                                                    == (IData)(vlSelf->__PVT__exp_r)) 
                                                   & ((~ (IData)(vlSelf->__PVT__sign)) 
                                                      & ((IData)(vlSelf->__PVT__u4__DOT__op_dn) 
                                                         & ((0x18U 
                                                             > (IData)(vlSelf->__PVT__u4__DOT__fi_ldz_2)) 
                                                            & (0xfeU 
                                                               != (IData)(vlSelf->__PVT__u4__DOT__exp_out_rnd))))))))));
    vlSelf->__PVT__u4__DOT__overflow_fdiv = (1U & ((IData)(vlSelf->__PVT__u4__DOT__inf_out) 
                                                   | (((0U 
                                                        != (IData)(vlSelf->__PVT__rmode_r3)) 
                                                       & (IData)(vlSelf->__PVT__u4__DOT__max_num)) 
                                                      | ((((IData)(vlSelf->__PVT__exp_r) 
                                                           >> 7U) 
                                                          & ((IData)(vlSelf->__PVT__u4__DOT__op_dn) 
                                                             & (0xffU 
                                                                == (IData)(vlSelf->__PVT__u4__DOT__exp_out)))) 
                                                         | ((IData)(vlSelf->__PVT__exp_ovf_r) 
                                                            & (((IData)(vlSelf->__PVT__exp_ovf_r) 
                                                                >> 1U) 
                                                               | (0xffU 
                                                                  == (IData)(vlSelf->__PVT__u4__DOT__exp_out))))))));
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_51 
        = (((IData)(u4__DOT____VdfgRegularize_he8d392c1_0_47) 
            & ((IData)(vlSelf->__PVT__exp_ovf_r) & 
               (0U == (IData)(vlSelf->__PVT__rmode_r3)))) 
           | ((IData)(vlSelf->__PVT__u4__DOT__inf_out) 
              | (IData)(u4__DOT____VdfgRegularize_he8d392c1_0_46)));
    vlSelf->__PVT__u4__DOT__ovf0 = (((~ (IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_48)) 
                                     & ((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_51) 
                                        | ((~ (IData)(vlSelf->__PVT__u4__DOT__max_num)) 
                                           & (0xffU 
                                              == (IData)(vlSelf->__PVT__u4__DOT__exp_out_rnd))))) 
                                    & ((1U != (IData)(vlSelf->__PVT__rmode_r3)) 
                                       & (5U != (IData)(vlSelf->__PVT__fpu_op_r3))));
    vlSelf->__PVT__u4__DOT__exp_out_final = ((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_48)
                                              ? 0U : 
                                             ((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_51)
                                               ? 0xffU
                                               : ((IData)(vlSelf->__PVT__u4__DOT__max_num)
                                                   ? 0xfeU
                                                   : (IData)(vlSelf->__PVT__u4__DOT__exp_out_rnd))));
    vlSelf->__PVT__u4__DOT__fract_out_final = (((IData)(vlSelf->__PVT__u4__DOT__inf_out) 
                                                | ((IData)(vlSelf->__PVT__u4__DOT__ovf0) 
                                                   | (IData)(vlSelf->__PVT__or_result)))
                                                ? 0U
                                                : (
                                                   ((IData)(vlSelf->__PVT__u4__DOT__max_num) 
                                                    | (IData)(u4__DOT____VdfgRegularize_he8d392c1_0_46))
                                                    ? 0x7fffffU
                                                    : vlSelf->__PVT__u4__DOT__fract_out_rnd));
    vlSelf->__PVT__u4__DOT__undeflow_div = ((~ ((IData)(u4__DOT____VdfgRegularize_he8d392c1_0_40) 
                                                & (0U 
                                                   == (IData)(vlSelf->__PVT__rmode_r3)))) 
                                            & ((~ (IData)(vlSelf->__PVT__u4__DOT__inf_out)) 
                                               & ((~ (IData)(vlSelf->__PVT__u4__DOT__max_num)) 
                                                  & ((0xffU 
                                                      != (IData)(vlSelf->__PVT__u4__DOT__exp_out_final)) 
                                                     & (((0U 
                                                          != 
                                                          (0x1ffffffU 
                                                           & (IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_21))) 
                                                         & ((~ (IData)(vlSelf->__PVT__opb_dn)) 
                                                            & ((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_67) 
                                                               | ((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_15) 
                                                                  | ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->__PVT__u4__DOT__exp_out)))) 
                                                                     | ((IData)(vlSelf->__PVT__exp_ovf_r) 
                                                                        >> 1U)))))) 
                                                        | (((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_59) 
                                                            & (((IData)(vlSelf->__PVT__u4__DOT__op_dn) 
                                                                & ((0x16U 
                                                                    < (IData)(vlSelf->__PVT__exp_r)) 
                                                                   & (0x17U 
                                                                      > (IData)(vlSelf->__PVT__u4__DOT__u6__DOT__fi_ldz_r0)))) 
                                                               | (((IData)(vlSelf->__PVT__u4__DOT__op_dn) 
                                                                   & ((0x17U 
                                                                       > (IData)(vlSelf->__PVT__exp_r)) 
                                                                      & (0x17U 
                                                                         > (IData)(vlSelf->__PVT__u4__DOT__u6__DOT__fi_ldz_r0)))) 
                                                                  | ((~ (IData)(vlSelf->__PVT__u4__DOT__op_dn)) 
                                                                     & (((1U 
                                                                          & ((IData)(vlSelf->__PVT__exp_r) 
                                                                             >> 7U)) 
                                                                         == 
                                                                         (1U 
                                                                          & ((IData)(vlSelf->__PVT__u4__DOT__exp_div) 
                                                                             >> 7U))) 
                                                                        | ((IData)(
                                                                                ((0xfeU 
                                                                                == 
                                                                                (0xfeU 
                                                                                & (IData)(vlSelf->__PVT__u4__DOT__exp_div))) 
                                                                                & (~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->__PVT__exp_r)))))) 
                                                                           | ((0x7fU 
                                                                               > (IData)(vlSelf->__PVT__exp_r)) 
                                                                              & (0x20U 
                                                                                < (IData)(vlSelf->__PVT__exp_r))))))))) 
                                                           | ((IData)(u4__DOT____VdfgRegularize_he8d392c1_0_41) 
                                                              & (((IData)(vlSelf->__PVT__u4__DOT__op_dn) 
                                                                  & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->__PVT__u4__DOT__exp_out)))) 
                                                                     & (0x17U 
                                                                        > (IData)(vlSelf->__PVT__u4__DOT__u6__DOT__fi_ldz_r0)))) 
                                                                 | ((~ (IData)(
                                                                               (0U 
                                                                                != (IData)(vlSelf->__PVT__exp_r)))) 
                                                                    | ((~ (IData)(vlSelf->__PVT__u4__DOT__op_dn)) 
                                                                       & ((0x17U 
                                                                           > (IData)(vlSelf->__PVT__u4__DOT__u6__DOT__fi_ldz_r0)) 
                                                                          & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->__PVT__u4__DOT__exp_out)))) 
                                                                             & (1U 
                                                                                == (IData)(vlSelf->__PVT__exp_r))))))))))))));
    if ((3U == (IData)(vlSelf->__PVT__fpu_op_r3))) {
        vlSelf->__PVT__overflow_d = vlSelf->__PVT__u4__DOT__overflow_fdiv;
        vlSelf->__PVT__underflow_d = (1U & (IData)(vlSelf->__PVT__u4__DOT__undeflow_div));
    } else {
        vlSelf->__PVT__overflow_d = ((IData)(vlSelf->__PVT__u4__DOT__ovf0) 
                                     | ((~ (IData)(vlSelf->__PVT__u4__DOT__dn)) 
                                        & (0xffU == (IData)(vlSelf->__PVT__u4__DOT__exp_out))));
        vlSelf->__PVT__underflow_d = (1U & ((2U == (IData)(vlSelf->__PVT__fpu_op_r3))
                                             ? (IData)(vlSelf->__PVT__u4__DOT__underflow_fmul)
                                             : ((~ (IData)(
                                                           (vlSelf->__PVT__fract_denorm 
                                                            >> 0x2fU))) 
                                                & ((~ (IData)(vlSelf->__PVT__u4__DOT__dn)) 
                                                   & ((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_23) 
                                                      >> 8U)))));
    }
    vlSelf->__PVT__out_d = (((IData)(vlSelf->__PVT__u4__DOT__exp_out_final) 
                             << 0x17U) | vlSelf->__PVT__u4__DOT__fract_out_final);
    vlSelf->__PVT__underflow_fmul1 = (1U & ((IData)(vlSelf->__PVT__underflow_fmul_r) 
                                            | ((((IData)(vlSelf->__PVT__underflow_fmul_r) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__underflow_d)) 
                                               | (((~ (IData)(
                                                              (0U 
                                                               != vlSelf->__PVT__out_d))) 
                                                   & ((IData)(vlSelf->__PVT__u4__DOT__op_dn) 
                                                      & ((0ULL 
                                                          != vlSelf->__PVT__prod) 
                                                         & (IData)(vlSelf->__PVT__sign)))) 
                                                  | (((IData)(vlSelf->__PVT__underflow_fmul_r) 
                                                      >> 2U) 
                                                     & ((0U 
                                                         == (IData)(vlSelf->__PVT__u4__DOT__exp_out_final)) 
                                                        | (0U 
                                                           == vlSelf->__PVT__u4__DOT__fract_out_final)))))));
}

VL_ATTR_COLD void Vco_sim_syn2_fpu_mul___ctor_var_reset(Vco_sim_syn2_fpu_mul* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_syn2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vco_sim_syn2_fpu_mul___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->opa = VL_RAND_RESET_I(32);
    vlSelf->opb = VL_RAND_RESET_I(32);
    vlSelf->out = VL_RAND_RESET_I(32);
    vlSelf->control = VL_RAND_RESET_I(8);
    vlSelf->__PVT__fpu_op = VL_RAND_RESET_I(3);
    vlSelf->__PVT__zero = VL_RAND_RESET_I(1);
    vlSelf->__PVT__opa_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__opb_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__div_by_zero = VL_RAND_RESET_I(1);
    vlSelf->__PVT__signa = VL_RAND_RESET_I(1);
    vlSelf->__PVT__signb = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sign_fasu = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fracta = VL_RAND_RESET_I(27);
    vlSelf->__PVT__fractb = VL_RAND_RESET_I(27);
    vlSelf->__PVT__exp_fasu = VL_RAND_RESET_I(8);
    vlSelf->__PVT__exp_r = VL_RAND_RESET_I(8);
    vlSelf->__PVT__fract_out_d = VL_RAND_RESET_I(27);
    vlSelf->__PVT__co = VL_RAND_RESET_I(1);
    vlSelf->__PVT__out_d = VL_RAND_RESET_I(31);
    vlSelf->__PVT__overflow_d = VL_RAND_RESET_I(1);
    vlSelf->__PVT__underflow_d = VL_RAND_RESET_I(1);
    vlSelf->__PVT__overflow = VL_RAND_RESET_I(1);
    vlSelf->__PVT__underflow = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inf = VL_RAND_RESET_I(1);
    vlSelf->__PVT__snan = VL_RAND_RESET_I(1);
    vlSelf->__PVT__qnan = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ine = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rmode_r1 = VL_RAND_RESET_I(2);
    vlSelf->__PVT__rmode_r2 = VL_RAND_RESET_I(2);
    vlSelf->__PVT__rmode_r3 = VL_RAND_RESET_I(2);
    vlSelf->__PVT__fpu_op_r1 = VL_RAND_RESET_I(3);
    vlSelf->__PVT__fpu_op_r2 = VL_RAND_RESET_I(3);
    vlSelf->__PVT__fpu_op_r3 = VL_RAND_RESET_I(3);
    vlSelf->__PVT__out_o1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__inf_o1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__snan_o1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__qnan_o1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ine_o1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__overflow_o1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__underflow_o1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__zero_o1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__div_by_zero_o1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__contorl = VL_RAND_RESET_I(8);
    vlSelf->__PVT__inf_d = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ind_d = VL_RAND_RESET_I(1);
    vlSelf->__PVT__qnan_d = VL_RAND_RESET_I(1);
    vlSelf->__PVT__snan_d = VL_RAND_RESET_I(1);
    vlSelf->__PVT__opa_nan = VL_RAND_RESET_I(1);
    vlSelf->__PVT__opb_nan = VL_RAND_RESET_I(1);
    vlSelf->__PVT__opa_00 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__opb_00 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__opa_inf = VL_RAND_RESET_I(1);
    vlSelf->__PVT__opb_inf = VL_RAND_RESET_I(1);
    vlSelf->__PVT__opa_dn = VL_RAND_RESET_I(1);
    vlSelf->__PVT__opb_dn = VL_RAND_RESET_I(1);
    vlSelf->__PVT__nan_sign_d = VL_RAND_RESET_I(1);
    vlSelf->__PVT__result_zero_sign_d = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exp_mul = VL_RAND_RESET_I(8);
    vlSelf->__PVT__sign_mul = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sign_mul_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inf_mul = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inf_mul_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exp_ovf = VL_RAND_RESET_I(2);
    vlSelf->__PVT__exp_ovf_r = VL_RAND_RESET_I(2);
    vlSelf->__PVT__sign_exe = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sign_exe_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__underflow_fmul_d = VL_RAND_RESET_I(3);
    vlSelf->__PVT__prod = VL_RAND_RESET_Q(48);
    vlSelf->__PVT__fract_denorm = VL_RAND_RESET_Q(48);
    vlSelf->__PVT__fract_div = VL_RAND_RESET_Q(48);
    vlSelf->__PVT__sign = VL_RAND_RESET_I(1);
    vlSelf->__PVT__opa_r1 = VL_RAND_RESET_I(31);
    vlSelf->__PVT__opas_r1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__opas_r2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__or_result = VL_RAND_RESET_I(1);
    vlSelf->__PVT__output_zero_fasu = VL_RAND_RESET_I(1);
    vlSelf->__PVT__output_zero_fdiv = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inf_mul2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__overflow_fasu = VL_RAND_RESET_I(1);
    vlSelf->__PVT__overflow_fdiv = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inf_fmul = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ine_mula = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ine_div = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ine_fasu = VL_RAND_RESET_I(1);
    vlSelf->__PVT__underflow_fasu = VL_RAND_RESET_I(1);
    vlSelf->__PVT__underflow_fdiv = VL_RAND_RESET_I(1);
    vlSelf->__PVT__underflow_fmul1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__underflow_fmul_r = VL_RAND_RESET_I(3);
    vlSelf->__PVT__opa_nan_r = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_h62b27241_3_2 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_h62b27241_3_3 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_h62b27241_3_4 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_h62b27241_3_5 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_h62b27241_3_7 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_h62b27241_3_9 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_h62b27241_3_11 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_h62b27241_3_12 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u0__DOT__expa_ff = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u0__DOT__infa_f_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u0__DOT__qnan_r_a = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u0__DOT__snan_r_a = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u0__DOT__expb_ff = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u0__DOT__infb_f_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u0__DOT__qnan_r_b = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u0__DOT__snan_r_b = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u0__DOT__expa_00 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u0__DOT__expb_00 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u0__DOT__fracta_00 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u0__DOT__fractb_00 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u2__DOT__sign_d = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u2__DOT__exp_tmp5 = VL_RAND_RESET_I(8);
    vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_8 = VL_RAND_RESET_I(9);
    vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_9 = VL_RAND_RESET_I(9);
    vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_10 = VL_RAND_RESET_I(1);
    vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_12 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u5__DOT__prod1 = VL_RAND_RESET_Q(48);
    vlSelf->__PVT__u4__DOT__exp_out = VL_RAND_RESET_I(8);
    vlSelf->__PVT__u4__DOT__fract_out_final = VL_RAND_RESET_I(23);
    vlSelf->__PVT__u4__DOT__fract_out_rnd = VL_RAND_RESET_I(23);
    vlSelf->__PVT__u4__DOT__exp_next_mi = VL_RAND_RESET_I(9);
    vlSelf->__PVT__u4__DOT__dn = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u4__DOT__exp_rnd_adj = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u4__DOT__exp_out_final = VL_RAND_RESET_I(8);
    vlSelf->__PVT__u4__DOT__exp_out_rnd = VL_RAND_RESET_I(8);
    vlSelf->__PVT__u4__DOT__op_dn = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u4__DOT__r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u4__DOT__s = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u4__DOT__round2_fmul = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u4__DOT__ovf0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u4__DOT__exp_out_fe = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u4__DOT__grs_sel = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u4__DOT__fract_in_shftr_1 = VL_RAND_RESET_Q(48);
    vlSelf->__PVT__u4__DOT__fract_in_shftl_1 = VL_RAND_RESET_Q(48);
    vlSelf->__PVT__u4__DOT__exp_div = VL_RAND_RESET_I(8);
    vlSelf->__PVT__u4__DOT__shft2 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__u4__DOT__div_nr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u4__DOT__grs_sel_div = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u4__DOT__div_inf = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u4__DOT__fi_ldz_2 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__u4__DOT__div_exp1 = VL_RAND_RESET_I(9);
    vlSelf->__PVT__u4__DOT__div_exp2 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__u4__DOT__shift_right = VL_RAND_RESET_I(8);
    vlSelf->__PVT__u4__DOT__shift_left = VL_RAND_RESET_I(8);
    vlSelf->__PVT__u4__DOT__f2i_zero = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u4__DOT__f2i_max = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u4__DOT__conv_exp = VL_RAND_RESET_I(8);
    vlSelf->__PVT__u4__DOT__round2_f2i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u4__DOT__exp_in_80 = VL_RAND_RESET_I(1);
    vlSelf->u4__DOT____Vcellout__u3__shift_out = VL_RAND_RESET_Q(48);
    vlSelf->__PVT__u4__DOT__max_num = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u4__DOT__inf_out = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u4__DOT__underflow_fmul = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u4__DOT__overflow_fdiv = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u4__DOT__undeflow_div = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u4__DOT__f2i_ine = VL_RAND_RESET_I(1);
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_13 = VL_RAND_RESET_I(1);
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_14 = VL_RAND_RESET_I(9);
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_15 = VL_RAND_RESET_I(1);
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_20 = VL_RAND_RESET_I(1);
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_21 = VL_RAND_RESET_Q(48);
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_23 = VL_RAND_RESET_I(9);
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_27 = VL_RAND_RESET_I(1);
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_30 = VL_RAND_RESET_I(1);
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_37 = VL_RAND_RESET_I(1);
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_38 = VL_RAND_RESET_I(1);
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_40 = VL_RAND_RESET_I(1);
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_41 = VL_RAND_RESET_I(1);
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_48 = VL_RAND_RESET_I(1);
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_51 = VL_RAND_RESET_I(1);
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_52 = VL_RAND_RESET_I(1);
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_53 = VL_RAND_RESET_I(1);
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_54 = VL_RAND_RESET_I(24);
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_55 = VL_RAND_RESET_I(24);
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_59 = VL_RAND_RESET_I(1);
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_61 = VL_RAND_RESET_I(1);
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_62 = VL_RAND_RESET_I(1);
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_63 = VL_RAND_RESET_I(1);
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_65 = VL_RAND_RESET_I(1);
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_66 = VL_RAND_RESET_I(1);
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_67 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u4__DOT__u6__DOT__fi_ldz_r0 = VL_RAND_RESET_I(6);
}
