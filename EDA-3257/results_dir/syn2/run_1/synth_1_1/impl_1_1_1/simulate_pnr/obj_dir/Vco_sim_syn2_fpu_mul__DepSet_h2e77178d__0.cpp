// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vco_sim_syn2.h for the primary calling header

#include "Vco_sim_syn2__pch.h"
#include "Vco_sim_syn2_fpu_mul.h"

VL_INLINE_OPT void Vco_sim_syn2_fpu_mul___eval_initial__TOP__co_sim_syn2__DOT__golden__DOT__x1_mul(Vco_sim_syn2_fpu_mul* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_syn2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vco_sim_syn2_fpu_mul___eval_initial__TOP__co_sim_syn2__DOT__golden__DOT__x1_mul\n"); );
    // Body
    vlSelf->__PVT__u4__DOT__u6__DOT__fi_ldz_r0 = 0U;
}

VL_INLINE_OPT void Vco_sim_syn2_fpu_mul___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__0(Vco_sim_syn2_fpu_mul* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_syn2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vco_sim_syn2_fpu_mul___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__0\n"); );
    // Init
    CData/*0:0*/ u4__DOT____VdfgRegularize_he8d392c1_0_8;
    u4__DOT____VdfgRegularize_he8d392c1_0_8 = 0;
    CData/*0:0*/ u4__DOT____VdfgRegularize_he8d392c1_0_10;
    u4__DOT____VdfgRegularize_he8d392c1_0_10 = 0;
    // Body
    vlSelf->__PVT__opb_nan = (IData)(((0x7f800000U 
                                       == (0x7f800000U 
                                           & vlSelf->__PVT__opb_r)) 
                                      & (0U != (0x7fffffU 
                                                & vlSelf->__PVT__opb_r))));
    vlSelf->__PVT__zero = vlSelf->__PVT__zero_o1;
    vlSelf->__PVT__inf_mul2 = (0xffU == (IData)(vlSelf->__PVT__exp_mul));
    vlSelf->__PVT__sign = (1U & ((3U == (IData)(vlSelf->__PVT__rmode_r2))
                                  ? (~ (IData)(vlSelf->__PVT__sign_mul))
                                  : (IData)(vlSelf->__PVT__sign_mul)));
    vlSelf->__PVT__opb_dn = vlSelf->__PVT__u0__DOT__expb_00;
    vlSelf->__PVT__rmode_r3 = vlSelf->__PVT__rmode_r2;
    vlSelf->__PVT__opa_r1 = (0x7fffffffU & vlSelf->__PVT__opa_r);
    vlSelf->__PVT__underflow_fmul_r = vlSelf->__PVT__underflow_fmul_d;
    vlSelf->__PVT__underflow = vlSelf->__PVT__underflow_o1;
    vlSelf->__PVT__opa_dn = vlSelf->__PVT__u0__DOT__expa_00;
    vlSelf->__PVT__exp_ovf_r = vlSelf->__PVT__exp_ovf;
    vlSelf->__PVT__opas_r2 = vlSelf->__PVT__opas_r1;
    vlSelf->__PVT__ind_d = (((IData)(vlSelf->__PVT__u0__DOT__expa_ff) 
                             & (IData)(vlSelf->__PVT__u0__DOT__infa_f_r)) 
                            & ((IData)(vlSelf->__PVT__u0__DOT__expb_ff) 
                               & (IData)(vlSelf->__PVT__u0__DOT__infb_f_r)));
    vlSelf->__PVT__snan = vlSelf->__PVT__snan_o1;
    vlSelf->__PVT__overflow = vlSelf->__PVT__overflow_o1;
    vlSelf->__PVT__exp_r = vlSelf->__PVT__exp_mul;
    vlSelf->__PVT__prod = vlSelf->__PVT__u5__DOT__prod1;
    vlSelf->__PVT__inf = vlSelf->__PVT__inf_o1;
    vlSelf->__PVT__div_by_zero = vlSelf->__PVT__div_by_zero_o1;
    vlSelf->__PVT__ine = vlSelf->__PVT__ine_o1;
    vlSelf->__PVT__qnan = vlSelf->__PVT__qnan_o1;
    vlSelf->__PVT__zero_o1 = (1U & ((~ ((IData)(vlSelf->__VdfgRegularize_h62b27241_3_11) 
                                        | (IData)(vlSelf->__VdfgRegularize_h62b27241_3_3))) 
                                    & ((~ (IData)(vlSelf->__VdfgRegularize_h62b27241_3_7)) 
                                       & ((~ (IData)(
                                                     (0U 
                                                      != vlSelf->__PVT__out_d))) 
                                          | (IData)(vlSelf->__VdfgRegularize_h62b27241_3_2)))));
    vlSelf->__PVT__rmode_r2 = vlSelf->__PVT__rmode_r1;
    vlSelf->__PVT__underflow_fmul_d = ((((0U != (0x7fffffffU 
                                                 & vlSelf->__PVT__opa_r)) 
                                         & ((0U != 
                                             (0x7fffffffU 
                                              & vlSelf->__PVT__opb_r)) 
                                            & (0x7fU 
                                               == (0xffU 
                                                   & (IData)(vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_8))))) 
                                        << 2U) | ((
                                                   (6U 
                                                    & (((vlSelf->__PVT__opa_r 
                                                         | vlSelf->__PVT__opb_r) 
                                                        >> 0x1dU) 
                                                       & (((0U 
                                                            != 
                                                            (0x7fffffffU 
                                                             & vlSelf->__PVT__opa_r)) 
                                                           & (0U 
                                                              != 
                                                              (0x7fffffffU 
                                                               & vlSelf->__PVT__opb_r))) 
                                                          << 1U))) 
                                                   | ((((~ (IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0xffU 
                                                                     & (vlSelf->__PVT__opa_r 
                                                                        >> 0x17U))))) 
                                                        & (0U 
                                                           != 
                                                           (0x7fffffU 
                                                            & vlSelf->__PVT__opa_r))) 
                                                       | ((~ (IData)(
                                                                     (0U 
                                                                      != 
                                                                      (0xffU 
                                                                       & (vlSelf->__PVT__opb_r 
                                                                          >> 0x17U))))) 
                                                          & (0U 
                                                             != 
                                                             (0x7fffffU 
                                                              & vlSelf->__PVT__opb_r)))) 
                                                      << 1U)) 
                                                  | ((~ 
                                                      (((IData)(vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_8) 
                                                        >> 8U) 
                                                       | ((~ (IData)(
                                                                     (0U 
                                                                      != 
                                                                      (0x7fffffffU 
                                                                       & vlSelf->__PVT__opa_r)))) 
                                                          | ((~ (IData)(
                                                                        (0U 
                                                                         != 
                                                                         (0x7fffffffU 
                                                                          & vlSelf->__PVT__opb_r)))) 
                                                             | (IData)(vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_10))))) 
                                                     & (0x7fU 
                                                        > 
                                                        (0xffU 
                                                         & (IData)(vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_8))))));
    vlSelf->__PVT__underflow_o1 = ((~ ((IData)(vlSelf->__VdfgRegularize_h62b27241_3_3) 
                                       | (IData)(vlSelf->__PVT__inf_mul_r))) 
                                   & (IData)(vlSelf->__PVT__underflow_fmul1));
    vlSelf->__PVT__u4__DOT__op_dn = ((IData)(vlSelf->__PVT__opa_dn) 
                                     | (IData)(vlSelf->__PVT__opb_dn));
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_41 
        = (IData)((0U == (IData)(vlSelf->__PVT__exp_ovf_r)));
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_52 
        = (IData)(((~ ((IData)(vlSelf->__PVT__exp_ovf_r) 
                       >> 1U)) & ((IData)(vlSelf->__PVT__rmode_r3) 
                                  >> 1U)));
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_40 
        = (IData)((3U == (IData)(vlSelf->__PVT__exp_ovf_r)));
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_20 
        = (IData)((1U == (IData)(vlSelf->__PVT__exp_ovf_r)));
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_59 
        = (IData)((2U == (IData)(vlSelf->__PVT__exp_ovf_r)));
    vlSelf->__PVT__exp_ovf = (((IData)(vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_12) 
                               << 1U) | (1U & ((3U 
                                                == (IData)(vlSelf->__PVT__fpu_op_r1))
                                                ? (
                                                   (~ 
                                                    (vlSelf->__PVT__opb_r 
                                                     >> 0x1eU)) 
                                                   & (vlSelf->__PVT__opa_r 
                                                      >> 0x1eU))
                                                : (
                                                   ((IData)(vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_9) 
                                                    >> 8U) 
                                                   & ((vlSelf->__PVT__opa_r 
                                                       & vlSelf->__PVT__opb_r) 
                                                      >> 0x1eU)))));
    vlSelf->__PVT__opas_r1 = (vlSelf->__PVT__opa_r 
                              >> 0x1fU);
    vlSelf->__PVT__snan_o1 = vlSelf->__PVT__snan_d;
    vlSelf->__PVT__overflow_o1 = ((~ (IData)(vlSelf->__PVT__inf_d)) 
                                  & ((~ (IData)(vlSelf->__VdfgRegularize_h62b27241_3_3)) 
                                     & ((IData)(vlSelf->__VdfgRegularize_h62b27241_3_12) 
                                        | (IData)(vlSelf->__PVT__overflow_d))));
    vlSelf->__PVT__u4__DOT__exp_in_80 = (IData)((((IData)(vlSelf->__PVT__exp_r) 
                                                  >> 7U) 
                                                 & (~ (IData)(
                                                              (0U 
                                                               != 
                                                               (0x7fU 
                                                                & (IData)(vlSelf->__PVT__exp_r)))))));
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_61 
        = (1U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__exp_r)))) 
                 | ((IData)(vlSelf->__PVT__exp_ovf_r) 
                    >> 1U)));
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_13 
        = (1U & ((~ ((IData)(vlSelf->__PVT__exp_ovf_r) 
                     >> 1U)) & (~ (IData)((0U != (IData)(vlSelf->__PVT__exp_r))))));
    u4__DOT____VdfgRegularize_he8d392c1_0_8 = ((IData)(vlSelf->__PVT__exp_r) 
                                               < ((0U 
                                                   == (IData)(vlSelf->__PVT__rmode_r3))
                                                   ? 0x7eU
                                                   : 0x7fU));
    vlSelf->__PVT__u5__DOT__prod1 = (0xffffffffffffULL 
                                     & ((QData)((IData)(
                                                        (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0xffU 
                                                                    & (vlSelf->__PVT__opa_r 
                                                                       >> 0x17U)))) 
                                                          << 0x17U) 
                                                         | (0x7fffffU 
                                                            & vlSelf->__PVT__opa_r)))) 
                                        * (QData)((IData)(
                                                          (((IData)(
                                                                    (0U 
                                                                     != 
                                                                     (0xffU 
                                                                      & (vlSelf->__PVT__opb_r 
                                                                         >> 0x17U)))) 
                                                            << 0x17U) 
                                                           | (0x7fffffU 
                                                              & vlSelf->__PVT__opb_r))))));
    vlSelf->__PVT__fract_denorm = vlSelf->__PVT__prod;
    vlSelf->__PVT__inf_o1 = ((~ ((IData)(vlSelf->__PVT__fpu_op_r3) 
                                 >> 2U)) & ((~ ((IData)(vlSelf->__PVT__qnan_d) 
                                                | (IData)(vlSelf->__PVT__snan_d))) 
                                            & (((IData)(
                                                        ((0x7f800000U 
                                                          == 
                                                          (0x7f800000U 
                                                           & vlSelf->__PVT__out_d)) 
                                                         & (~ (IData)(
                                                                      (0U 
                                                                       != 
                                                                       (0x7fffffU 
                                                                        & vlSelf->__PVT__out_d)))))) 
                                                & (~ 
                                                   ((IData)(vlSelf->__PVT__opb_00) 
                                                    & (3U 
                                                       == (IData)(vlSelf->__PVT__fpu_op_r3))))) 
                                               | (IData)(vlSelf->__PVT__inf_fmul))));
    vlSelf->__PVT__div_by_zero_o1 = ((((IData)(vlSelf->__PVT__opa_nan_r) 
                                       & (~ (IData)(vlSelf->__PVT__opa_00))) 
                                      & (~ (IData)(vlSelf->__PVT__opa_inf))) 
                                     & (IData)(vlSelf->__PVT__opb_00));
    vlSelf->__PVT__ine_o1 = (1U & ((~ (IData)(vlSelf->__PVT__opa_00)) 
                                   & ((~ ((IData)(vlSelf->__PVT__opb_00) 
                                          | ((IData)(vlSelf->__VdfgRegularize_h62b27241_3_3) 
                                             | (IData)(vlSelf->__PVT__inf_d)))) 
                                      & ((IData)(vlSelf->__PVT__ine_mula) 
                                         | (((5U == (IData)(vlSelf->__PVT__fpu_op_r3))
                                              ? (IData)(vlSelf->__PVT__u4__DOT__f2i_ine)
                                              : ((4U 
                                                  == (IData)(vlSelf->__PVT__fpu_op_r3))
                                                  ? 
                                                 (0U 
                                                  != 
                                                  (0x1ffffffU 
                                                   & (IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_21)))
                                                  : 
                                                 (((~ (IData)(vlSelf->__PVT__u4__DOT__dn)) 
                                                   & (IData)(vlSelf->__PVT__u4__DOT__r)) 
                                                  | (((~ (IData)(vlSelf->__PVT__u4__DOT__dn)) 
                                                      & (IData)(vlSelf->__PVT__u4__DOT__s)) 
                                                     | ((IData)(vlSelf->__PVT__u4__DOT__max_num) 
                                                        | (3U 
                                                           == (IData)(vlSelf->__PVT__fpu_op_r3))))))) 
                                            | ((~ (IData)(
                                                          (0U 
                                                           != vlSelf->__PVT__out_d))) 
                                               | ((IData)(vlSelf->__PVT__inf_fmul) 
                                                  | ((IData)(vlSelf->__PVT__overflow_d) 
                                                     | (IData)(vlSelf->__PVT__underflow_d)))))))));
    vlSelf->__PVT__qnan_o1 = (((IData)(vlSelf->__PVT__snan_d) 
                               | (IData)(vlSelf->__PVT__qnan_d)) 
                              | ((((IData)(vlSelf->__PVT__opa_inf) 
                                   & (IData)(vlSelf->__PVT__opb_00)) 
                                  | ((IData)(vlSelf->__PVT__opb_inf) 
                                     & (IData)(vlSelf->__PVT__opa_00))) 
                                 & (2U == (IData)(vlSelf->__PVT__fpu_op_r3))));
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_15 
        = ((IData)(vlSelf->__PVT__u4__DOT__op_dn) & 
           ((IData)(vlSelf->__PVT__exp_ovf_r) >> 1U));
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_67 
        = ((IData)(vlSelf->__PVT__u4__DOT__op_dn) & (IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_20));
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
    vlSelf->__PVT__rmode_r1 = 0U;
    vlSelf->__PVT__inf_mul_r = vlSelf->__PVT__inf_mul;
    if ((3U == (IData)(vlSelf->__PVT__fpu_op_r1))) {
        vlSelf->__PVT__exp_mul = (0xffU & ((IData)(vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_10)
                                            ? ((0x100U 
                                                & (IData)(vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_9))
                                                ? (IData)(vlSelf->__PVT__u2__DOT__exp_tmp5)
                                                : ((IData)(1U) 
                                                   + (IData)(vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_9)))
                                            : ((0x100U 
                                                & (IData)(vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_9))
                                                ? ((IData)(0x7fU) 
                                                   - (IData)(vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_8))
                                                : (IData)(vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_9))));
        vlSelf->__PVT__inf_mul = (1U & ((~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0xffU 
                                                     & (vlSelf->__PVT__opb_r 
                                                        >> 0x17U))))) 
                                        & (~ (vlSelf->__PVT__opa_r 
                                              >> 0x1eU))));
    } else {
        vlSelf->__PVT__exp_mul = (0xffU & ((IData)(vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_12)
                                            ? ((IData)(vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_10)
                                                ? (IData)(vlSelf->__PVT__u2__DOT__exp_tmp5)
                                                : ((IData)(0x7fU) 
                                                   - (IData)(vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_8)))
                                            : ((IData)(vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_9) 
                                               + (IData)(vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_10))));
        vlSelf->__PVT__inf_mul = (1U & (0x17eU < (IData)(vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_8)));
    }
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
    vlSelf->__PVT__opa_nan_r = ((~ (IData)(vlSelf->__PVT__opa_nan)) 
                                & (3U == (IData)(vlSelf->__PVT__fpu_op_r2)));
    vlSelf->__PVT__opb_inf = ((IData)(vlSelf->__PVT__u0__DOT__expb_ff) 
                              & (IData)(vlSelf->__PVT__u0__DOT__infb_f_r));
    vlSelf->__PVT__opa_00 = ((IData)(vlSelf->__PVT__u0__DOT__expa_00) 
                             & (IData)(vlSelf->__PVT__u0__DOT__fracta_00));
    vlSelf->__PVT__u4__DOT__div_exp1 = (0x1ffU & (((IData)(vlSelf->__PVT__exp_r) 
                                                   - (IData)(1U)) 
                                                  + (IData)(vlSelf->__PVT__u4__DOT__fi_ldz_2)));
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_23 
        = (0x1ffU & ((1U & (IData)((vlSelf->__PVT__fract_denorm 
                                    >> 0x2fU))) ? ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__exp_r))
                      : (IData)(vlSelf->__PVT__u4__DOT__exp_next_mi)));
    vlSelf->__VdfgRegularize_h62b27241_3_12 = ((IData)(vlSelf->__PVT__inf_mul2) 
                                               | (IData)(vlSelf->__PVT__inf_mul_r));
    vlSelf->__PVT__u4__DOT__div_inf = ((IData)(vlSelf->__PVT__opb_dn) 
                                       & ((~ (IData)(vlSelf->__PVT__opa_dn)) 
                                          & (0x7fU 
                                             > (0xffU 
                                                & (IData)(vlSelf->__PVT__u4__DOT__div_exp1)))));
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
    vlSelf->__PVT__opa_nan = (IData)(((0x7f800000U 
                                       == (0x7f800000U 
                                           & vlSelf->__PVT__opa_r)) 
                                      & (0U != (0x7fffffU 
                                                & vlSelf->__PVT__opa_r))));
    vlSelf->__PVT__u0__DOT__fracta_00 = (1U & (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (0x7fffffU 
                                                           & vlSelf->__PVT__opa_r)))));
    vlSelf->__PVT__u0__DOT__expa_00 = (1U & (~ (IData)(
                                                       (0U 
                                                        != 
                                                        (0xffU 
                                                         & (vlSelf->__PVT__opa_r 
                                                            >> 0x17U))))));
}

VL_INLINE_OPT void Vco_sim_syn2_fpu_mul___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__0(Vco_sim_syn2_fpu_mul* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_syn2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vco_sim_syn2_fpu_mul___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__0\n"); );
    // Init
    CData/*0:0*/ u4__DOT____VdfgRegularize_he8d392c1_0_8;
    u4__DOT____VdfgRegularize_he8d392c1_0_8 = 0;
    CData/*0:0*/ u4__DOT____VdfgRegularize_he8d392c1_0_10;
    u4__DOT____VdfgRegularize_he8d392c1_0_10 = 0;
    // Body
    vlSelf->__PVT__opb_nan = (IData)(((0x7f800000U 
                                       == (0x7f800000U 
                                           & vlSelf->__PVT__opb_r)) 
                                      & (0U != (0x7fffffU 
                                                & vlSelf->__PVT__opb_r))));
    vlSelf->__PVT__opa_r1 = (0x7fffffffU & vlSelf->__PVT__opa_r);
    vlSelf->__PVT__zero = vlSelf->__PVT__zero_o1;
    vlSelf->__PVT__inf_mul2 = (0xffU == (IData)(vlSelf->__PVT__exp_mul));
    vlSelf->__PVT__underflow_fmul_r = vlSelf->__PVT__underflow_fmul_d;
    vlSelf->__PVT__underflow = vlSelf->__PVT__underflow_o1;
    vlSelf->__PVT__ind_d = (((IData)(vlSelf->__PVT__u0__DOT__expa_ff) 
                             & (IData)(vlSelf->__PVT__u0__DOT__infa_f_r)) 
                            & ((IData)(vlSelf->__PVT__u0__DOT__expb_ff) 
                               & (IData)(vlSelf->__PVT__u0__DOT__infb_f_r)));
    vlSelf->__PVT__snan = vlSelf->__PVT__snan_o1;
    vlSelf->__PVT__overflow = vlSelf->__PVT__overflow_o1;
    vlSelf->__PVT__div_by_zero = vlSelf->__PVT__div_by_zero_o1;
    vlSelf->__PVT__sign = (1U & ((3U == (IData)(vlSelf->__PVT__rmode_r2))
                                  ? (~ (IData)(vlSelf->__PVT__sign_mul))
                                  : (IData)(vlSelf->__PVT__sign_mul)));
    vlSelf->__PVT__opa_dn = vlSelf->__PVT__u0__DOT__expa_00;
    vlSelf->__PVT__opb_dn = vlSelf->__PVT__u0__DOT__expb_00;
    vlSelf->__PVT__exp_ovf_r = vlSelf->__PVT__exp_ovf;
    vlSelf->__PVT__opas_r2 = vlSelf->__PVT__opas_r1;
    vlSelf->__PVT__rmode_r3 = vlSelf->__PVT__rmode_r2;
    vlSelf->__PVT__inf = vlSelf->__PVT__inf_o1;
    vlSelf->__PVT__qnan = vlSelf->__PVT__qnan_o1;
    vlSelf->__PVT__ine = vlSelf->__PVT__ine_o1;
    vlSelf->__PVT__prod = vlSelf->__PVT__u5__DOT__prod1;
    vlSelf->__PVT__exp_r = vlSelf->__PVT__exp_mul;
    vlSelf->__PVT__zero_o1 = (1U & ((~ ((IData)(vlSelf->__VdfgRegularize_h62b27241_3_11) 
                                        | (IData)(vlSelf->__VdfgRegularize_h62b27241_3_3))) 
                                    & ((~ (IData)(vlSelf->__VdfgRegularize_h62b27241_3_7)) 
                                       & ((~ (IData)(
                                                     (0U 
                                                      != vlSelf->__PVT__out_d))) 
                                          | (IData)(vlSelf->__VdfgRegularize_h62b27241_3_2)))));
    vlSelf->__PVT__underflow_fmul_d = ((((0U != (0x7fffffffU 
                                                 & vlSelf->__PVT__opa_r)) 
                                         & ((0U != 
                                             (0x7fffffffU 
                                              & vlSelf->__PVT__opb_r)) 
                                            & (0x7fU 
                                               == (0xffU 
                                                   & (IData)(vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_8))))) 
                                        << 2U) | ((
                                                   (6U 
                                                    & (((vlSelf->__PVT__opa_r 
                                                         | vlSelf->__PVT__opb_r) 
                                                        >> 0x1dU) 
                                                       & (((0U 
                                                            != 
                                                            (0x7fffffffU 
                                                             & vlSelf->__PVT__opa_r)) 
                                                           & (0U 
                                                              != 
                                                              (0x7fffffffU 
                                                               & vlSelf->__PVT__opb_r))) 
                                                          << 1U))) 
                                                   | ((((~ (IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0xffU 
                                                                     & (vlSelf->__PVT__opa_r 
                                                                        >> 0x17U))))) 
                                                        & (0U 
                                                           != 
                                                           (0x7fffffU 
                                                            & vlSelf->__PVT__opa_r))) 
                                                       | ((~ (IData)(
                                                                     (0U 
                                                                      != 
                                                                      (0xffU 
                                                                       & (vlSelf->__PVT__opb_r 
                                                                          >> 0x17U))))) 
                                                          & (0U 
                                                             != 
                                                             (0x7fffffU 
                                                              & vlSelf->__PVT__opb_r)))) 
                                                      << 1U)) 
                                                  | ((~ 
                                                      (((IData)(vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_8) 
                                                        >> 8U) 
                                                       | ((~ (IData)(
                                                                     (0U 
                                                                      != 
                                                                      (0x7fffffffU 
                                                                       & vlSelf->__PVT__opa_r)))) 
                                                          | ((~ (IData)(
                                                                        (0U 
                                                                         != 
                                                                         (0x7fffffffU 
                                                                          & vlSelf->__PVT__opb_r)))) 
                                                             | (IData)(vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_10))))) 
                                                     & (0x7fU 
                                                        > 
                                                        (0xffU 
                                                         & (IData)(vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_8))))));
    vlSelf->__PVT__underflow_o1 = ((~ ((IData)(vlSelf->__VdfgRegularize_h62b27241_3_3) 
                                       | (IData)(vlSelf->__PVT__inf_mul_r))) 
                                   & (IData)(vlSelf->__PVT__underflow_fmul1));
    vlSelf->__PVT__snan_o1 = vlSelf->__PVT__snan_d;
    vlSelf->__PVT__overflow_o1 = ((~ (IData)(vlSelf->__PVT__inf_d)) 
                                  & ((~ (IData)(vlSelf->__VdfgRegularize_h62b27241_3_3)) 
                                     & ((IData)(vlSelf->__VdfgRegularize_h62b27241_3_12) 
                                        | (IData)(vlSelf->__PVT__overflow_d))));
    vlSelf->__PVT__div_by_zero_o1 = ((((IData)(vlSelf->__PVT__opa_nan_r) 
                                       & (~ (IData)(vlSelf->__PVT__opa_00))) 
                                      & (~ (IData)(vlSelf->__PVT__opa_inf))) 
                                     & (IData)(vlSelf->__PVT__opb_00));
    vlSelf->__PVT__u4__DOT__op_dn = ((IData)(vlSelf->__PVT__opa_dn) 
                                     | (IData)(vlSelf->__PVT__opb_dn));
    vlSelf->__PVT__exp_ovf = (((IData)(vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_12) 
                               << 1U) | (1U & ((3U 
                                                == (IData)(vlSelf->__PVT__fpu_op_r1))
                                                ? (
                                                   (~ 
                                                    (vlSelf->__PVT__opb_r 
                                                     >> 0x1eU)) 
                                                   & (vlSelf->__PVT__opa_r 
                                                      >> 0x1eU))
                                                : (
                                                   ((IData)(vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_9) 
                                                    >> 8U) 
                                                   & ((vlSelf->__PVT__opa_r 
                                                       & vlSelf->__PVT__opb_r) 
                                                      >> 0x1eU)))));
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_41 
        = (IData)((0U == (IData)(vlSelf->__PVT__exp_ovf_r)));
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_40 
        = (IData)((3U == (IData)(vlSelf->__PVT__exp_ovf_r)));
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_20 
        = (IData)((1U == (IData)(vlSelf->__PVT__exp_ovf_r)));
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_59 
        = (IData)((2U == (IData)(vlSelf->__PVT__exp_ovf_r)));
    vlSelf->__PVT__opas_r1 = (vlSelf->__PVT__opa_r 
                              >> 0x1fU);
    vlSelf->__PVT__rmode_r2 = vlSelf->__PVT__rmode_r1;
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_52 
        = (IData)(((~ ((IData)(vlSelf->__PVT__exp_ovf_r) 
                       >> 1U)) & ((IData)(vlSelf->__PVT__rmode_r3) 
                                  >> 1U)));
    vlSelf->__PVT__inf_o1 = ((~ ((IData)(vlSelf->__PVT__fpu_op_r3) 
                                 >> 2U)) & ((~ ((IData)(vlSelf->__PVT__qnan_d) 
                                                | (IData)(vlSelf->__PVT__snan_d))) 
                                            & (((IData)(
                                                        ((0x7f800000U 
                                                          == 
                                                          (0x7f800000U 
                                                           & vlSelf->__PVT__out_d)) 
                                                         & (~ (IData)(
                                                                      (0U 
                                                                       != 
                                                                       (0x7fffffU 
                                                                        & vlSelf->__PVT__out_d)))))) 
                                                & (~ 
                                                   ((IData)(vlSelf->__PVT__opb_00) 
                                                    & (3U 
                                                       == (IData)(vlSelf->__PVT__fpu_op_r3))))) 
                                               | (IData)(vlSelf->__PVT__inf_fmul))));
    vlSelf->__PVT__qnan_o1 = (((IData)(vlSelf->__PVT__snan_d) 
                               | (IData)(vlSelf->__PVT__qnan_d)) 
                              | ((((IData)(vlSelf->__PVT__opa_inf) 
                                   & (IData)(vlSelf->__PVT__opb_00)) 
                                  | ((IData)(vlSelf->__PVT__opb_inf) 
                                     & (IData)(vlSelf->__PVT__opa_00))) 
                                 & (2U == (IData)(vlSelf->__PVT__fpu_op_r3))));
    vlSelf->__PVT__ine_o1 = (1U & ((~ (IData)(vlSelf->__PVT__opa_00)) 
                                   & ((~ ((IData)(vlSelf->__PVT__opb_00) 
                                          | ((IData)(vlSelf->__VdfgRegularize_h62b27241_3_3) 
                                             | (IData)(vlSelf->__PVT__inf_d)))) 
                                      & ((IData)(vlSelf->__PVT__ine_mula) 
                                         | (((5U == (IData)(vlSelf->__PVT__fpu_op_r3))
                                              ? (IData)(vlSelf->__PVT__u4__DOT__f2i_ine)
                                              : ((4U 
                                                  == (IData)(vlSelf->__PVT__fpu_op_r3))
                                                  ? 
                                                 (0U 
                                                  != 
                                                  (0x1ffffffU 
                                                   & (IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_21)))
                                                  : 
                                                 (((~ (IData)(vlSelf->__PVT__u4__DOT__dn)) 
                                                   & (IData)(vlSelf->__PVT__u4__DOT__r)) 
                                                  | (((~ (IData)(vlSelf->__PVT__u4__DOT__dn)) 
                                                      & (IData)(vlSelf->__PVT__u4__DOT__s)) 
                                                     | ((IData)(vlSelf->__PVT__u4__DOT__max_num) 
                                                        | (3U 
                                                           == (IData)(vlSelf->__PVT__fpu_op_r3))))))) 
                                            | ((~ (IData)(
                                                          (0U 
                                                           != vlSelf->__PVT__out_d))) 
                                               | ((IData)(vlSelf->__PVT__inf_fmul) 
                                                  | ((IData)(vlSelf->__PVT__overflow_d) 
                                                     | (IData)(vlSelf->__PVT__underflow_d)))))))));
    vlSelf->__PVT__u5__DOT__prod1 = (0xffffffffffffULL 
                                     & ((QData)((IData)(
                                                        (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0xffU 
                                                                    & (vlSelf->__PVT__opa_r 
                                                                       >> 0x17U)))) 
                                                          << 0x17U) 
                                                         | (0x7fffffU 
                                                            & vlSelf->__PVT__opa_r)))) 
                                        * (QData)((IData)(
                                                          (((IData)(
                                                                    (0U 
                                                                     != 
                                                                     (0xffU 
                                                                      & (vlSelf->__PVT__opb_r 
                                                                         >> 0x17U)))) 
                                                            << 0x17U) 
                                                           | (0x7fffffU 
                                                              & vlSelf->__PVT__opb_r))))));
    vlSelf->__PVT__fract_denorm = vlSelf->__PVT__prod;
    vlSelf->__PVT__u4__DOT__exp_in_80 = (IData)((((IData)(vlSelf->__PVT__exp_r) 
                                                  >> 7U) 
                                                 & (~ (IData)(
                                                              (0U 
                                                               != 
                                                               (0x7fU 
                                                                & (IData)(vlSelf->__PVT__exp_r)))))));
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_61 
        = (1U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__exp_r)))) 
                 | ((IData)(vlSelf->__PVT__exp_ovf_r) 
                    >> 1U)));
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_13 
        = (1U & ((~ ((IData)(vlSelf->__PVT__exp_ovf_r) 
                     >> 1U)) & (~ (IData)((0U != (IData)(vlSelf->__PVT__exp_r))))));
    u4__DOT____VdfgRegularize_he8d392c1_0_8 = ((IData)(vlSelf->__PVT__exp_r) 
                                               < ((0U 
                                                   == (IData)(vlSelf->__PVT__rmode_r3))
                                                   ? 0x7eU
                                                   : 0x7fU));
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_15 
        = ((IData)(vlSelf->__PVT__u4__DOT__op_dn) & 
           ((IData)(vlSelf->__PVT__exp_ovf_r) >> 1U));
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_67 
        = ((IData)(vlSelf->__PVT__u4__DOT__op_dn) & (IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_20));
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
    u4__DOT____VdfgRegularize_he8d392c1_0_10 = ((IData)(vlSelf->__PVT__opas_r2) 
                                                & (IData)(u4__DOT____VdfgRegularize_he8d392c1_0_8));
    vlSelf->__PVT__inf_mul_r = vlSelf->__PVT__inf_mul;
    if ((3U == (IData)(vlSelf->__PVT__fpu_op_r1))) {
        vlSelf->__PVT__exp_mul = (0xffU & ((IData)(vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_10)
                                            ? ((0x100U 
                                                & (IData)(vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_9))
                                                ? (IData)(vlSelf->__PVT__u2__DOT__exp_tmp5)
                                                : ((IData)(1U) 
                                                   + (IData)(vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_9)))
                                            : ((0x100U 
                                                & (IData)(vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_9))
                                                ? ((IData)(0x7fU) 
                                                   - (IData)(vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_8))
                                                : (IData)(vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_9))));
        vlSelf->__PVT__inf_mul = (1U & ((~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0xffU 
                                                     & (vlSelf->__PVT__opb_r 
                                                        >> 0x17U))))) 
                                        & (~ (vlSelf->__PVT__opa_r 
                                              >> 0x1eU))));
    } else {
        vlSelf->__PVT__exp_mul = (0xffU & ((IData)(vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_12)
                                            ? ((IData)(vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_10)
                                                ? (IData)(vlSelf->__PVT__u2__DOT__exp_tmp5)
                                                : ((IData)(0x7fU) 
                                                   - (IData)(vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_8)))
                                            : ((IData)(vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_9) 
                                               + (IData)(vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_10))));
        vlSelf->__PVT__inf_mul = (1U & (0x17eU < (IData)(vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_8)));
    }
    vlSelf->__PVT__opa_nan_r = ((~ (IData)(vlSelf->__PVT__opa_nan)) 
                                & (3U == (IData)(vlSelf->__PVT__fpu_op_r2)));
    vlSelf->__PVT__u4__DOT__div_nr = ((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_15) 
                                      & ((~ (IData)(
                                                    (0U 
                                                     != 
                                                     (0xffffffU 
                                                      & (IData)(
                                                                (vlSelf->__PVT__fract_denorm 
                                                                 >> 0x17U)))))) 
                                         & (0x16U < (IData)(vlSelf->__PVT__exp_r))));
    vlSelf->__PVT__rmode_r1 = 0U;
    vlSelf->__PVT__opb_inf = ((IData)(vlSelf->__PVT__u0__DOT__expb_ff) 
                              & (IData)(vlSelf->__PVT__u0__DOT__infb_f_r));
    vlSelf->__PVT__opa_00 = ((IData)(vlSelf->__PVT__u0__DOT__expa_00) 
                             & (IData)(vlSelf->__PVT__u0__DOT__fracta_00));
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
    vlSelf->__PVT__u4__DOT__div_exp1 = (0x1ffU & (((IData)(vlSelf->__PVT__exp_r) 
                                                   - (IData)(1U)) 
                                                  + (IData)(vlSelf->__PVT__u4__DOT__fi_ldz_2)));
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_23 
        = (0x1ffU & ((1U & (IData)((vlSelf->__PVT__fract_denorm 
                                    >> 0x2fU))) ? ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__exp_r))
                      : (IData)(vlSelf->__PVT__u4__DOT__exp_next_mi)));
    vlSelf->__VdfgRegularize_h62b27241_3_12 = ((IData)(vlSelf->__PVT__inf_mul2) 
                                               | (IData)(vlSelf->__PVT__inf_mul_r));
    vlSelf->__PVT__opa_nan = (IData)(((0x7f800000U 
                                       == (0x7f800000U 
                                           & vlSelf->__PVT__opa_r)) 
                                      & (0U != (0x7fffffU 
                                                & vlSelf->__PVT__opa_r))));
    vlSelf->__PVT__u0__DOT__fracta_00 = (1U & (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (0x7fffffU 
                                                           & vlSelf->__PVT__opa_r)))));
    vlSelf->__PVT__u0__DOT__expa_00 = (1U & (~ (IData)(
                                                       (0U 
                                                        != 
                                                        (0xffU 
                                                         & (vlSelf->__PVT__opa_r 
                                                            >> 0x17U))))));
    vlSelf->__PVT__u4__DOT__div_inf = ((IData)(vlSelf->__PVT__opb_dn) 
                                       & ((~ (IData)(vlSelf->__PVT__opa_dn)) 
                                          & (0x7fU 
                                             > (0xffU 
                                                & (IData)(vlSelf->__PVT__u4__DOT__div_exp1)))));
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
}
