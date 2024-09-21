// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vco_sim_syn2.h for the primary calling header

#include "Vco_sim_syn2__pch.h"
#include "Vco_sim_syn2_fpu_add.h"

VL_INLINE_OPT void Vco_sim_syn2_fpu_add___eval_initial__TOP__co_sim_syn2__DOT__golden__DOT__add1_add(Vco_sim_syn2_fpu_add* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_syn2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vco_sim_syn2_fpu_add___eval_initial__TOP__co_sim_syn2__DOT__golden__DOT__add1_add\n"); );
    // Body
    vlSelf->__PVT__u4__DOT__u6__DOT__fi_ldz_r0 = 0U;
}

VL_INLINE_OPT void Vco_sim_syn2_fpu_add___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__add1_add__0(Vco_sim_syn2_fpu_add* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_syn2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vco_sim_syn2_fpu_add___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__add1_add__0\n"); );
    // Init
    CData/*0:0*/ u4__DOT____VdfgRegularize_he8d392c1_0_8;
    u4__DOT____VdfgRegularize_he8d392c1_0_8 = 0;
    CData/*0:0*/ u4__DOT____VdfgRegularize_he8d392c1_0_10;
    u4__DOT____VdfgRegularize_he8d392c1_0_10 = 0;
    CData/*0:0*/ u4__DOT____VdfgRegularize_he8d392c1_0_19;
    u4__DOT____VdfgRegularize_he8d392c1_0_19 = 0;
    // Body
    vlSelf->__PVT__div_by_zero = vlSelf->__PVT__div_by_zero_o1;
    vlSelf->__PVT__zero = vlSelf->__PVT__zero_o1;
    vlSelf->__PVT__overflow = vlSelf->__PVT__overflow_o1;
    vlSelf->__PVT__underflow = vlSelf->__PVT__underflow_o1;
    if (vlSelf->__PVT__u1__DOT__fractb_lt_fracta) {
        vlSelf->__PVT__fractb = vlSelf->__PVT__u1__DOT__fracta_n;
        vlSelf->__PVT__fracta = vlSelf->__PVT__u1__DOT__fractb_n;
    } else {
        vlSelf->__PVT__fractb = vlSelf->__PVT__u1__DOT__fractb_n;
        vlSelf->__PVT__fracta = vlSelf->__PVT__u1__DOT__fracta_n;
    }
    vlSelf->__PVT__opa_r1 = (0x7fffffffU & vlSelf->__PVT__opa_r);
    vlSelf->__PVT__opa_nan_r = ((~ (IData)(vlSelf->__PVT__opa_nan)) 
                                & (3U == (IData)(vlSelf->__PVT__fpu_op_r2)));
    vlSelf->__PVT__sign = (1U & ((3U == (IData)(vlSelf->__PVT__rmode_r2))
                                  ? (~ (IData)(vlSelf->__PVT__sign_fasu))
                                  : (IData)(vlSelf->__PVT__sign_fasu)));
    vlSelf->__PVT__opb_00 = ((IData)(vlSelf->__PVT__u0__DOT__expb_00) 
                             & (IData)(vlSelf->__PVT__u0__DOT__fractb_00));
    vlSelf->__PVT__opb_inf = ((IData)(vlSelf->__PVT__u0__DOT__expb_ff) 
                              & (IData)(vlSelf->__PVT__u0__DOT__infb_f_r));
    vlSelf->__PVT__opa_00 = ((IData)(vlSelf->__PVT__u0__DOT__expa_00) 
                             & (IData)(vlSelf->__PVT__u0__DOT__fracta_00));
    vlSelf->__PVT__opa_inf = ((IData)(vlSelf->__PVT__u0__DOT__expa_ff) 
                              & (IData)(vlSelf->__PVT__u0__DOT__infa_f_r));
    vlSelf->__PVT__snan = vlSelf->__PVT__snan_o1;
    vlSelf->__PVT__qnan = vlSelf->__PVT__qnan_o1;
    vlSelf->__PVT__opb_dn = vlSelf->__PVT__u0__DOT__expb_00;
    vlSelf->__PVT__opa_dn = vlSelf->__PVT__u0__DOT__expa_00;
    vlSelf->__PVT__opas_r2 = vlSelf->__PVT__opas_r1;
    vlSelf->__PVT__rmode_r3 = vlSelf->__PVT__rmode_r2;
    vlSelf->__PVT__inf = vlSelf->__PVT__inf_o1;
    vlSelf->__PVT__ine = vlSelf->__PVT__ine_o1;
    vlSelf->__PVT__fract_out_q = vlSelf->u3__DOT____VdfgRegularize_h60e48f75_0_0;
    vlSelf->__PVT__exp_r = vlSelf->__PVT__exp_fasu;
    vlSelf->__PVT__div_by_zero_o1 = 0U;
    vlSelf->__PVT__zero_o1 = vlSelf->__PVT__output_zero_fasu;
    vlSelf->__PVT__overflow_o1 = ((IData)(vlSelf->__VdfgRegularize_h16e0ae4d_5_1) 
                                  & (IData)(vlSelf->__PVT__overflow_d));
    vlSelf->__PVT__underflow_o1 = ((IData)(vlSelf->__VdfgRegularize_h16e0ae4d_5_2) 
                                   & (IData)(vlSelf->__PVT__underflow_d));
    vlSelf->__PVT__u0__DOT__fractb_00 = (1U & (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (0x7fffffU 
                                                           & vlSelf->__PVT__opb_r)))));
    vlSelf->__PVT__u0__DOT__fracta_00 = (1U & (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (0x7fffffU 
                                                           & vlSelf->__PVT__opa_r)))));
    vlSelf->__PVT__snan_o1 = vlSelf->__PVT__snan_d;
    vlSelf->__PVT__qnan_o1 = (((IData)(vlSelf->__PVT__snan_d) 
                               | (IData)(vlSelf->__PVT__qnan_d)) 
                              | ((IData)(vlSelf->__PVT__ind_d) 
                                 & (~ (IData)(vlSelf->__PVT__fasu_op_r2))));
    vlSelf->__PVT__u0__DOT__expb_00 = (1U & (~ (IData)(
                                                       (0U 
                                                        != 
                                                        (0xffU 
                                                         & (vlSelf->__PVT__opb_r 
                                                            >> 0x17U))))));
    vlSelf->__PVT__u0__DOT__expa_00 = (1U & (~ (IData)(
                                                       (0U 
                                                        != 
                                                        (0xffU 
                                                         & (vlSelf->__PVT__opa_r 
                                                            >> 0x17U))))));
    vlSelf->__PVT__u4__DOT__op_dn = ((IData)(vlSelf->__PVT__opa_dn) 
                                     | (IData)(vlSelf->__PVT__opb_dn));
    vlSelf->__PVT__opas_r1 = (vlSelf->__PVT__opa_r 
                              >> 0x1fU);
    vlSelf->__PVT__inf_o1 = ((~ ((IData)(vlSelf->__PVT__qnan_d) 
                                 | (IData)(vlSelf->__PVT__snan_d))) 
                             & ((IData)(((0x7f800000U 
                                          == (0x7f800000U 
                                              & vlSelf->__PVT__out_d)) 
                                         & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (0x7fffffU 
                                                        & vlSelf->__PVT__out_d)))))) 
                                | (((IData)(vlSelf->__PVT__inf_d) 
                                    & (~ ((IData)(vlSelf->__PVT__ind_d) 
                                          & (~ (IData)(vlSelf->__PVT__fasu_op_r2))))) 
                                   & (~ ((IData)(vlSelf->__PVT__fpu_op_r3) 
                                         >> 1U)))));
    vlSelf->__PVT__ine_o1 = ((IData)(vlSelf->__VdfgRegularize_h16e0ae4d_5_1) 
                             & (((5U == (IData)(vlSelf->__PVT__fpu_op_r3))
                                  ? (IData)(vlSelf->__PVT__u4__DOT__f2i_ine)
                                  : ((4U == (IData)(vlSelf->__PVT__fpu_op_r3))
                                      ? (0U != (0x1ffffffU 
                                                & (IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_21)))
                                      : (((~ (IData)(vlSelf->__PVT__u4__DOT__dn)) 
                                          & (IData)(
                                                    (vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_21 
                                                     >> 0x18U))) 
                                         | (((~ (IData)(vlSelf->__PVT__u4__DOT__dn)) 
                                             & (IData)(vlSelf->__PVT__u4__DOT__s)) 
                                            | ((IData)(vlSelf->__PVT__u4__DOT__max_num) 
                                               | (3U 
                                                  == (IData)(vlSelf->__PVT__fpu_op_r3))))))) 
                                | ((IData)(vlSelf->__PVT__overflow_d) 
                                   | (IData)(vlSelf->__PVT__underflow_d))));
    vlSelf->__PVT__exp_fasu = ((((~ (IData)(vlSelf->__PVT__u1__DOT__add_d)) 
                                 & ((0xffU & (vlSelf->__PVT__opa_r 
                                              >> 0x17U)) 
                                    == (0xffU & (vlSelf->__PVT__opb_r 
                                                 >> 0x17U)))) 
                                & ((0x7fffffU & vlSelf->__PVT__opa_r) 
                                   == (0x7fffffU & vlSelf->__PVT__opb_r)))
                                ? 0U : (IData)(vlSelf->__PVT__u1__DOT__exp_large));
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
                                                        ? 
                                                       ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                        << 0x14U)
                                                        : 
                                                       ((4U 
                                                         & ((IData)(vlSelf->__PVT__exp_r) 
                                                            - (IData)(0x3dU)))
                                                         ? 
                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                         << 0x14U)
                                                         : 
                                                        ((2U 
                                                          & ((IData)(vlSelf->__PVT__exp_r) 
                                                             - (IData)(0x3dU)))
                                                          ? 
                                                         ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                          << 0x14U)
                                                          : 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                           << 0x14U)
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
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0x2fU)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0x2eU))
                                                          : 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0x2dU)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0x2cU)))
                                                         : 
                                                        ((2U 
                                                          & ((IData)(vlSelf->__PVT__exp_r) 
                                                             - (IData)(0x3dU)))
                                                          ? 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0x2bU)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0x2aU))
                                                          : 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0x29U)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0x28U))))
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
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0x27U)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0x26U))
                                                          : 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0x25U)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0x24U)))
                                                         : 
                                                        ((2U 
                                                          & ((IData)(vlSelf->__PVT__exp_r) 
                                                             - (IData)(0x3dU)))
                                                          ? 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0x23U)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0x22U))
                                                          : 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0x21U)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0x20U))))))
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
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0x1fU)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0x1eU))
                                                          : 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0x1dU)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0x1cU)))
                                                         : 
                                                        ((2U 
                                                          & ((IData)(vlSelf->__PVT__exp_r) 
                                                             - (IData)(0x3dU)))
                                                          ? 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0x1bU)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0x1aU))
                                                          : 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0x19U)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0x18U))))
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
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0x17U)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0x16U))
                                                          : 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0x15U)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0x14U)))
                                                         : 
                                                        ((2U 
                                                          & ((IData)(vlSelf->__PVT__exp_r) 
                                                             - (IData)(0x3dU)))
                                                          ? 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0x13U)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0x12U))
                                                          : 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0x11U)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0x10U)))))
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
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0xfU)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0xeU))
                                                          : 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0xdU)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0xcU)))
                                                         : 
                                                        ((2U 
                                                          & ((IData)(vlSelf->__PVT__exp_r) 
                                                             - (IData)(0x3dU)))
                                                          ? 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0xbU)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0xaU))
                                                          : 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 9U)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 8U))))
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
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 7U)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 6U))
                                                          : 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 5U)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 4U)))
                                                         : 
                                                        ((2U 
                                                          & ((IData)(vlSelf->__PVT__exp_r) 
                                                             - (IData)(0x3dU)))
                                                          ? 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 3U)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 2U))
                                                          : 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 1U)
                                                           : 
                                                          ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                           << 0x14U))))))));
    u4__DOT____VdfgRegularize_he8d392c1_0_8 = ((IData)(vlSelf->__PVT__exp_r) 
                                               < ((0U 
                                                   == (IData)(vlSelf->__PVT__rmode_r3))
                                                   ? 0x7eU
                                                   : 0x7fU));
    vlSelf->__PVT__u4__DOT__u6__DOT__fi_ldz_r0 = ((0x8000000U 
                                                   & vlSelf->__PVT__fract_out_q)
                                                   ? 1U
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (3U 
                                                     & (vlSelf->__PVT__fract_out_q 
                                                        >> 0x1aU)))
                                                    ? 2U
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->__PVT__fract_out_q 
                                                         >> 0x19U)))
                                                     ? 3U
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (0xfU 
                                                       & (vlSelf->__PVT__fract_out_q 
                                                          >> 0x18U)))
                                                      ? 4U
                                                      : 
                                                     ((1U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->__PVT__fract_out_q 
                                                           >> 0x17U)))
                                                       ? 5U
                                                       : 
                                                      ((1U 
                                                        == 
                                                        (0x3fU 
                                                         & (vlSelf->__PVT__fract_out_q 
                                                            >> 0x16U)))
                                                        ? 6U
                                                        : 
                                                       ((1U 
                                                         == 
                                                         (0x7fU 
                                                          & (vlSelf->__PVT__fract_out_q 
                                                             >> 0x15U)))
                                                         ? 7U
                                                         : 
                                                        ((1U 
                                                          == 
                                                          (0xffU 
                                                           & (vlSelf->__PVT__fract_out_q 
                                                              >> 0x14U)))
                                                          ? 8U
                                                          : 
                                                         ((1U 
                                                           == 
                                                           (0x1ffU 
                                                            & (vlSelf->__PVT__fract_out_q 
                                                               >> 0x13U)))
                                                           ? 9U
                                                           : 
                                                          ((1U 
                                                            == 
                                                            (0x3ffU 
                                                             & (vlSelf->__PVT__fract_out_q 
                                                                >> 0x12U)))
                                                            ? 0xaU
                                                            : 
                                                           ((1U 
                                                             == 
                                                             (0x7ffU 
                                                              & (vlSelf->__PVT__fract_out_q 
                                                                 >> 0x11U)))
                                                             ? 0xbU
                                                             : 
                                                            ((1U 
                                                              == 
                                                              (0xfffU 
                                                               & (vlSelf->__PVT__fract_out_q 
                                                                  >> 0x10U)))
                                                              ? 0xcU
                                                              : 
                                                             ((1U 
                                                               == 
                                                               (0x1fffU 
                                                                & (vlSelf->__PVT__fract_out_q 
                                                                   >> 0xfU)))
                                                               ? 0xdU
                                                               : 
                                                              ((1U 
                                                                == 
                                                                (0x3fffU 
                                                                 & (vlSelf->__PVT__fract_out_q 
                                                                    >> 0xeU)))
                                                                ? 0xeU
                                                                : 
                                                               ((1U 
                                                                 == 
                                                                 (0x7fffU 
                                                                  & (vlSelf->__PVT__fract_out_q 
                                                                     >> 0xdU)))
                                                                 ? 0xfU
                                                                 : 
                                                                ((1U 
                                                                  == 
                                                                  (0xffffU 
                                                                   & (vlSelf->__PVT__fract_out_q 
                                                                      >> 0xcU)))
                                                                  ? 0x10U
                                                                  : 
                                                                 ((1U 
                                                                   == 
                                                                   (0x1ffffU 
                                                                    & (vlSelf->__PVT__fract_out_q 
                                                                       >> 0xbU)))
                                                                   ? 0x11U
                                                                   : 
                                                                  ((1U 
                                                                    == 
                                                                    (0x3ffffU 
                                                                     & (vlSelf->__PVT__fract_out_q 
                                                                        >> 0xaU)))
                                                                    ? 0x12U
                                                                    : 
                                                                   ((1U 
                                                                     == 
                                                                     (0x7ffffU 
                                                                      & (vlSelf->__PVT__fract_out_q 
                                                                         >> 9U)))
                                                                     ? 0x13U
                                                                     : 
                                                                    ((1U 
                                                                      == 
                                                                      (0xfffffU 
                                                                       & (vlSelf->__PVT__fract_out_q 
                                                                          >> 8U)))
                                                                      ? 0x14U
                                                                      : 
                                                                     ((1U 
                                                                       == 
                                                                       (0x1fffffU 
                                                                        & (vlSelf->__PVT__fract_out_q 
                                                                           >> 7U)))
                                                                       ? 0x15U
                                                                       : 
                                                                      ((1U 
                                                                        == 
                                                                        (0x3fffffU 
                                                                         & (vlSelf->__PVT__fract_out_q 
                                                                            >> 6U)))
                                                                        ? 0x16U
                                                                        : 
                                                                       ((1U 
                                                                         == 
                                                                         (0x7fffffU 
                                                                          & (vlSelf->__PVT__fract_out_q 
                                                                             >> 5U)))
                                                                         ? 0x17U
                                                                         : 
                                                                        ((1U 
                                                                          == 
                                                                          (0xffffffU 
                                                                           & (vlSelf->__PVT__fract_out_q 
                                                                              >> 4U)))
                                                                          ? 0x18U
                                                                          : 
                                                                         ((1U 
                                                                           == 
                                                                           (0x1ffffffU 
                                                                            & (vlSelf->__PVT__fract_out_q 
                                                                               >> 3U)))
                                                                           ? 0x19U
                                                                           : 
                                                                          ((1U 
                                                                            == 
                                                                            (0x3ffffffU 
                                                                             & (vlSelf->__PVT__fract_out_q 
                                                                                >> 2U)))
                                                                            ? 0x1aU
                                                                            : 
                                                                           ((1U 
                                                                             == 
                                                                             (0x7ffffffU 
                                                                              & (vlSelf->__PVT__fract_out_q 
                                                                                >> 1U)))
                                                                             ? 0x1bU
                                                                             : 
                                                                            ((1U 
                                                                              == vlSelf->__PVT__fract_out_q)
                                                                              ? 0x1cU
                                                                              : 
                                                                             ((1U 
                                                                               == 
                                                                               (vlSelf->__PVT__fract_out_q 
                                                                                << 1U))
                                                                               ? 0x1dU
                                                                               : 
                                                                              ((1U 
                                                                                == 
                                                                                (vlSelf->__PVT__fract_out_q 
                                                                                << 2U))
                                                                                ? 0x1eU
                                                                                : 
                                                                               ((1U 
                                                                                == 
                                                                                (vlSelf->__PVT__fract_out_q 
                                                                                << 3U))
                                                                                 ? 0x1fU
                                                                                 : 
                                                                                ((1U 
                                                                                == 
                                                                                (vlSelf->__PVT__fract_out_q 
                                                                                << 4U))
                                                                                 ? 0x20U
                                                                                 : 
                                                                                ((1ULL 
                                                                                == 
                                                                                ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                                << 5U))
                                                                                 ? 0x21U
                                                                                 : 
                                                                                ((1ULL 
                                                                                == 
                                                                                ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                                << 6U))
                                                                                 ? 0x22U
                                                                                 : 
                                                                                ((1ULL 
                                                                                == 
                                                                                ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                                << 7U))
                                                                                 ? 0x23U
                                                                                 : 
                                                                                ((1ULL 
                                                                                == 
                                                                                ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                                << 8U))
                                                                                 ? 0x24U
                                                                                 : 
                                                                                ((1ULL 
                                                                                == 
                                                                                ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                                << 9U))
                                                                                 ? 0x25U
                                                                                 : 
                                                                                ((1ULL 
                                                                                == 
                                                                                ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                                << 0xaU))
                                                                                 ? 0x26U
                                                                                 : 
                                                                                ((1ULL 
                                                                                == 
                                                                                ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                                << 0xbU))
                                                                                 ? 0x27U
                                                                                 : 
                                                                                ((1ULL 
                                                                                == 
                                                                                ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                                << 0xcU))
                                                                                 ? 0x28U
                                                                                 : 
                                                                                ((1ULL 
                                                                                == 
                                                                                ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                                << 0xdU))
                                                                                 ? 0x29U
                                                                                 : 
                                                                                ((1ULL 
                                                                                == 
                                                                                ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                                << 0xeU))
                                                                                 ? 0x2aU
                                                                                 : 
                                                                                ((1ULL 
                                                                                == 
                                                                                ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                                << 0xfU))
                                                                                 ? 0x2bU
                                                                                 : 
                                                                                ((1ULL 
                                                                                == 
                                                                                ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                                << 0x10U))
                                                                                 ? 0x2cU
                                                                                 : 
                                                                                ((1ULL 
                                                                                == 
                                                                                ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                                << 0x11U))
                                                                                 ? 0x2dU
                                                                                 : 
                                                                                ((1ULL 
                                                                                == 
                                                                                ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                                << 0x12U))
                                                                                 ? 0x2eU
                                                                                 : 
                                                                                ((1ULL 
                                                                                == 
                                                                                ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                                << 0x13U))
                                                                                 ? 0x2fU
                                                                                 : 0x30U)))))))))))))))))))))))))))))))))))))))))))))));
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
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_23 
        = (0x1ffU & ((0x8000000U & vlSelf->__PVT__fract_out_q)
                      ? ((IData)(1U) + (IData)(vlSelf->__PVT__exp_r))
                      : (IData)(vlSelf->__PVT__u4__DOT__exp_next_mi)));
    u4__DOT____VdfgRegularize_he8d392c1_0_10 = ((IData)(vlSelf->__PVT__opas_r2) 
                                                & (IData)(u4__DOT____VdfgRegularize_he8d392c1_0_8));
    vlSelf->__PVT__fpu_op_r3 = vlSelf->__PVT__fpu_op_r2;
    vlSelf->__PVT__u4__DOT__div_exp1 = (0x1ffU & (((IData)(vlSelf->__PVT__exp_r) 
                                                   - (IData)(1U)) 
                                                  + (IData)(vlSelf->__PVT__u4__DOT__fi_ldz_2)));
    vlSelf->__PVT__u4__DOT__f2i_max = (((~ (IData)(vlSelf->__PVT__opas_r2)) 
                                        & (0x9dU < (IData)(vlSelf->__PVT__exp_r))) 
                                       | ((IData)(u4__DOT____VdfgRegularize_he8d392c1_0_10) 
                                          & ((0U != vlSelf->__PVT__fract_out_q) 
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
                                                             != vlSelf->__PVT__fract_out_q))) 
                                                 | (3U 
                                                    != (IData)(vlSelf->__PVT__rmode_r3))))));
    vlSelf->__PVT__u4__DOT__div_inf = ((IData)(vlSelf->__PVT__opb_dn) 
                                       & ((~ (IData)(vlSelf->__PVT__opa_dn)) 
                                          & (0x7fU 
                                             > (0xffU 
                                                & (IData)(vlSelf->__PVT__u4__DOT__div_exp1)))));
    vlSelf->__PVT__fpu_op_r2 = vlSelf->__PVT__fpu_op_r1;
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_46 
        = ((IData)(vlSelf->__PVT__u4__DOT__f2i_max) 
           & (5U == (IData)(vlSelf->__PVT__fpu_op_r3)));
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_37 
        = ((2U == (IData)(vlSelf->__PVT__fpu_op_r3)) 
           | (3U == (IData)(vlSelf->__PVT__fpu_op_r3)));
    u4__DOT____VdfgRegularize_he8d392c1_0_19 = ((5U 
                                                 == (IData)(vlSelf->__PVT__fpu_op_r3)) 
                                                | (4U 
                                                   == (IData)(vlSelf->__PVT__fpu_op_r3)));
    vlSelf->__PVT__u4__DOT__dn = ((2U != (IData)(vlSelf->__PVT__fpu_op_r3)) 
                                  & ((3U != (IData)(vlSelf->__PVT__fpu_op_r3)) 
                                     & ((~ (IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->__PVT__exp_r)))) 
                                        | ((~ (vlSelf->__PVT__fract_out_q 
                                               >> 0x1bU)) 
                                           & ((IData)(vlSelf->__PVT__u4__DOT__exp_next_mi) 
                                              >> 8U)))));
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_53 
        = ((~ (IData)(vlSelf->__PVT__u4__DOT__dn)) 
           & (5U != (IData)(vlSelf->__PVT__fpu_op_r3)));
    vlSelf->__PVT__u4__DOT__exp_out = (0xffU & ((3U 
                                                 == (IData)(vlSelf->__PVT__fpu_op_r3))
                                                 ? 
                                                (((IData)(vlSelf->__PVT__opa_dn) 
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
                                                     & ((~ (IData)(
                                                                   (0U 
                                                                    != (IData)(vlSelf->__PVT__exp_r)))) 
                                                        | (IData)(vlSelf->__PVT__opa_dn)))
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_23) 
                                                     - (IData)(1U))))))
                                                 : 
                                                ((IData)(u4__DOT____VdfgRegularize_he8d392c1_0_19)
                                                  ? 
                                                 ((5U 
                                                   == (IData)(vlSelf->__PVT__fpu_op_r3))
                                                   ? 
                                                  ((IData)(vlSelf->__PVT__u4__DOT__f2i_zero)
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelf->__PVT__u4__DOT__f2i_max)
                                                     ? 0xffU
                                                     : 0U))
                                                   : 
                                                  ((0U 
                                                    != vlSelf->__PVT__fract_out_q)
                                                    ? 
                                                   ((IData)(0x9eU) 
                                                    - (IData)(vlSelf->__PVT__u4__DOT__u6__DOT__fi_ldz_r0))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__opas_r2)
                                                     ? 0x9eU
                                                     : 0U)))
                                                  : 
                                                 (((2U 
                                                    == (IData)(vlSelf->__PVT__fpu_op_r3)) 
                                                   & ((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_23) 
                                                      >> 8U))
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlSelf->__PVT__u4__DOT__dn)
                                                    ? 
                                                   (3U 
                                                    & (vlSelf->__PVT__fract_out_q 
                                                       >> 0x1aU))
                                                    : (IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_23))))));
    vlSelf->__PVT__u4__DOT__exp_out_fe = (IData)((0xfeU 
                                                  == (IData)(vlSelf->__PVT__u4__DOT__exp_out)));
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_38 
        = ((IData)(vlSelf->__PVT__sign) & (0xffU == (IData)(vlSelf->__PVT__u4__DOT__exp_out)));
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_64 
        = (1U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__u4__DOT__exp_out)))) 
                 | ((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_23) 
                    >> 8U)));
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_14 
        = (0x1ffU & ((0U != (IData)(vlSelf->__PVT__exp_r))
                      ? ((IData)(vlSelf->__PVT__exp_r) 
                         - (IData)(1U)) : (IData)(vlSelf->__PVT__u4__DOT__exp_out)));
    vlSelf->__PVT__u4__DOT__z = (1U & (((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_14) 
                                        >> 8U) | ((~ (IData)(
                                                             (0U 
                                                              != (IData)(vlSelf->__PVT__exp_r)))) 
                                                  | ((0U 
                                                      != (IData)(vlSelf->__PVT__exp_r)) 
                                                     & (IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_64)))));
    vlSelf->__PVT__u4__DOT__shift_right = (0xffU & 
                                           ((3U == (IData)(vlSelf->__PVT__fpu_op_r3))
                                             ? ((IData)(2U) 
                                                + (IData)(vlSelf->__PVT__exp_r))
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
                                                      ? 
                                                     ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                      << 0x14U)
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                       ? 
                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                       << 0x14U)
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                        ? 
                                                       ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                        << 0x14U)
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                         << 0x14U)
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
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x2fU)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x2eU))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x2dU)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x2cU)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x2bU)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x2aU))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x29U)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x28U))))
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
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x27U)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x26U))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x25U)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x24U)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x23U)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x22U))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x21U)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x20U))))))
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
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x1fU)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x1eU))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x1dU)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x1cU)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x1bU)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x1aU))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x19U)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x18U))))
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
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x17U)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x16U))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x15U)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x14U)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x13U)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x12U))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x11U)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x10U)))))
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
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0xfU)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0xeU))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0xdU)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0xcU)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0xbU)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0xaU))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 9U)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 8U))))
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
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 7U)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 6U))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 5U)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 4U)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 3U)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 2U))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 1U)
                                                         : 
                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                         << 0x14U))))))));
    vlSelf->__PVT__u4__DOT__shift_left = (0xffU & (
                                                   (3U 
                                                    == (IData)(vlSelf->__PVT__fpu_op_r3))
                                                    ? 
                                                   (((~ (IData)(
                                                                (0U 
                                                                 != (IData)(vlSelf->__PVT__u4__DOT__exp_out)))) 
                                                     & (IData)(vlSelf->__PVT__u4__DOT__op_dn))
                                                     ? 
                                                    ((0U 
                                                      != (IData)(vlSelf->__PVT__exp_r))
                                                      ? (IData)(vlSelf->__PVT__exp_r)
                                                      : 0U)
                                                     : 
                                                    ((1U 
                                                      & ((~ (IData)(vlSelf->__PVT__u4__DOT__op_dn)) 
                                                         & (~ (IData)(
                                                                      (0U 
                                                                       != (IData)(vlSelf->__PVT__u4__DOT__exp_out))))))
                                                      ? (IData)(vlSelf->__PVT__exp_r)
                                                      : (IData)(vlSelf->__PVT__u4__DOT__u6__DOT__fi_ldz_r0)))
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->__PVT__fpu_op_r3))
                                                     ? 
                                                    ((IData)(vlSelf->__PVT__u4__DOT__z)
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
                                                      ? 
                                                     ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                      << 0x14U)
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                       ? 
                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                       << 0x14U)
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                        ? 
                                                       ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                        << 0x14U)
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                         << 0x14U)
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
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x2fU)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x2eU))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x2dU)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x2cU)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x2bU)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x2aU))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x29U)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x28U))))
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
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x27U)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x26U))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x25U)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x24U)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x23U)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x22U))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x21U)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x20U))))))
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
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x1fU)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x1eU))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x1dU)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x1cU)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x1bU)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x1aU))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x19U)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x18U))))
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
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x17U)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x16U))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x15U)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x14U)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x13U)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x12U))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x11U)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x10U)))))
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
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0xfU)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0xeU))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0xdU)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0xcU)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0xbU)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0xaU))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 9U)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 8U))))
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
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 7U)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 6U))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 5U)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 4U)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 3U)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 2U))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 1U)
                                                         : 
                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                         << 0x14U))))))));
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_21 
        = (((3U == (IData)(vlSelf->__PVT__fpu_op_r3)) 
            | ((2U != (IData)(vlSelf->__PVT__fpu_op_r3)) 
               | ((0U != (IData)(vlSelf->__PVT__exp_r)) 
                  | (IData)(vlSelf->__PVT__u4__DOT__z))))
            ? (((0U != (3U & ((IData)(vlSelf->__PVT__u4__DOT__shift_left) 
                              >> 6U))) | ((IData)(vlSelf->__PVT__u4__DOT__f2i_zero) 
                                          & (5U == (IData)(vlSelf->__PVT__fpu_op_r3))))
                ? 0ULL : vlSelf->__PVT__u4__DOT__fract_in_shftl_1)
            : ((0U != (3U & ((IData)(vlSelf->__PVT__u4__DOT__shift_right) 
                             >> 6U))) ? 0ULL : vlSelf->__PVT__u4__DOT__fract_in_shftr_1));
    vlSelf->__PVT__u4__DOT__f2i_ine = (((IData)(vlSelf->__PVT__u4__DOT__f2i_zero) 
                                        & ((~ (IData)(vlSelf->__PVT__opas_r2)) 
                                           & (0U != vlSelf->__PVT__fract_out_q))) 
                                       | ((0U != (0x1ffffffU 
                                                  & (IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_21))) 
                                          | (((IData)(vlSelf->__PVT__u4__DOT__f2i_zero) 
                                              & ((0x80U 
                                                  > (IData)(vlSelf->__PVT__exp_r)) 
                                                 & ((0U 
                                                     != vlSelf->__PVT__fract_out_q) 
                                                    & (IData)(vlSelf->__PVT__opas_r2)))) 
                                             | ((IData)(vlSelf->__PVT__u4__DOT__f2i_max) 
                                                & ((3U 
                                                    == (IData)(vlSelf->__PVT__rmode_r3)) 
                                                   & (0x80U 
                                                      > (IData)(vlSelf->__PVT__exp_r)))))));
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_27 
        = (IData)((0x3000000ULL == (0x3000000ULL & vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_21)));
    vlSelf->__PVT__u4__DOT__s = (((3U == (IData)(vlSelf->__PVT__fpu_op_r3)) 
                                  & (IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_64))
                                  ? (0U != (0x1ffffffU 
                                            & (IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_21)))
                                  : ((0U != (0xffffffU 
                                             & (IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_21))) 
                                     | ((IData)((vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_21 
                                                 >> 0x18U)) 
                                        & (3U == (IData)(vlSelf->__PVT__fpu_op_r3)))));
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_55 
        = (0xffffffU & ((0x7fffffU & (IData)((vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_21 
                                              >> 0x19U))) 
                        + ((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_27) 
                           | ((IData)((vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_21 
                                       >> 0x18U)) & (IData)(vlSelf->__PVT__u4__DOT__s)))));
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_30 
        = (1U & ((IData)((vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_21 
                          >> 0x18U)) | (IData)(vlSelf->__PVT__u4__DOT__s)));
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_54 
        = (0xffffffU & ((0x7fffffU & (IData)((vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_21 
                                              >> 0x19U))) 
                        + ((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_37)
                            ? ((~ (IData)(vlSelf->__PVT__sign)) 
                               & ((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_30) 
                                  | (3U == (IData)(vlSelf->__PVT__fpu_op_r3))))
                            : ((5U == (IData)(vlSelf->__PVT__fpu_op_r3))
                                ? ((2U == (IData)(vlSelf->__PVT__rmode_r3)) 
                                   & (((0U != (0xfU 
                                               & vlSelf->__PVT__fract_out_q)) 
                                       & ((~ (IData)(vlSelf->__PVT__opas_r2)) 
                                          & (0x80U 
                                             > (IData)(vlSelf->__PVT__exp_r)))) 
                                      | (0U != (0x1ffffffU 
                                                & (IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_21)))))
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
                                                  ((IData)(vlSelf->__PVT__u4__DOT__exp_out) 
                                                   + 
                                                   (1U 
                                                    & (vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_54 
                                                       >> 0x17U)))));
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
                                           & ((0xffU 
                                               == (IData)(vlSelf->__PVT__exp_r)) 
                                              & ((0x18U 
                                                  > (IData)(vlSelf->__PVT__u4__DOT__fi_ldz_2)) 
                                                 & (0xfeU 
                                                    != (IData)(vlSelf->__PVT__u4__DOT__exp_out)))))) 
                                       | ((3U == (IData)(vlSelf->__PVT__fpu_op_r3)) 
                                          & (((1U == (IData)(vlSelf->__PVT__rmode_r3)) 
                                              & ((IData)(vlSelf->__PVT__u4__DOT__div_inf) 
                                                 | (0xffU 
                                                    == (IData)(vlSelf->__PVT__u4__DOT__exp_out)))) 
                                             | (((IData)(vlSelf->__PVT__rmode_r3) 
                                                 >> 1U) 
                                                & (((IData)(vlSelf->__PVT__sign) 
                                                    & (((vlSelf->__PVT__fract_out_q 
                                                         >> 0x1bU) 
                                                        & (IData)(vlSelf->__PVT__u4__DOT__div_inf)) 
                                                       | (((~ 
                                                            ((IData)(vlSelf->__PVT__u4__DOT__exp_out_rnd) 
                                                             >> 7U)) 
                                                           & ((~ 
                                                               (((~ (IData)(
                                                                            (0U 
                                                                             != 
                                                                             (0x7fU 
                                                                              & (IData)(vlSelf->__PVT__exp_r))))) 
                                                                 & ((IData)(vlSelf->__PVT__exp_r) 
                                                                    >> 7U)) 
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
                                                                  > (IData)(vlSelf->__PVT__u4__DOT__fi_ldz_2)))))))))));
    vlSelf->__PVT__u4__DOT__inf_out = ((((IData)(vlSelf->__PVT__rmode_r3) 
                                         >> 1U) & ((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_37) 
                                                   & ((~ (IData)(vlSelf->__PVT__sign)) 
                                                      & ((3U 
                                                          != (IData)(vlSelf->__PVT__fpu_op_r3)) 
                                                         & (0xffU 
                                                            == (IData)(vlSelf->__PVT__exp_r)))))) 
                                       | (((IData)(vlSelf->__PVT__u4__DOT__div_inf) 
                                           & ((3U == (IData)(vlSelf->__PVT__fpu_op_r3)) 
                                              & ((0U 
                                                  == (IData)(vlSelf->__PVT__rmode_r3)) 
                                                 | (((IData)(vlSelf->__PVT__rmode_r3) 
                                                     >> 1U) 
                                                    & ((~ (IData)(
                                                                  (0xffU 
                                                                   == (IData)(vlSelf->__PVT__exp_r)))) 
                                                       & (~ (IData)(vlSelf->__PVT__sign))))))) 
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
    vlSelf->__PVT__u4__DOT__overflow_fdiv = ((IData)(vlSelf->__PVT__u4__DOT__inf_out) 
                                             | (((0U 
                                                  != (IData)(vlSelf->__PVT__rmode_r3)) 
                                                 & (IData)(vlSelf->__PVT__u4__DOT__max_num)) 
                                                | (((IData)(vlSelf->__PVT__exp_r) 
                                                    >> 7U) 
                                                   & ((IData)(vlSelf->__PVT__u4__DOT__op_dn) 
                                                      & (0xffU 
                                                         == (IData)(vlSelf->__PVT__u4__DOT__exp_out))))));
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_51 
        = ((IData)(vlSelf->__PVT__u4__DOT__inf_out) 
           | (IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_46));
    vlSelf->__PVT__u4__DOT__ovf0 = (((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_51) 
                                     | ((~ (IData)(vlSelf->__PVT__u4__DOT__max_num)) 
                                        & (0xffU == (IData)(vlSelf->__PVT__u4__DOT__exp_out_rnd)))) 
                                    & ((1U != (IData)(vlSelf->__PVT__rmode_r3)) 
                                       & (5U != (IData)(vlSelf->__PVT__fpu_op_r3))));
    vlSelf->__PVT__u4__DOT__exp_out_final = ((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_51)
                                              ? 0xffU
                                              : ((IData)(vlSelf->__PVT__u4__DOT__max_num)
                                                  ? 0xfeU
                                                  : (IData)(vlSelf->__PVT__u4__DOT__exp_out_rnd)));
    if ((3U == (IData)(vlSelf->__PVT__fpu_op_r3))) {
        vlSelf->__PVT__overflow_d = vlSelf->__PVT__u4__DOT__overflow_fdiv;
        vlSelf->__PVT__underflow_d = (1U & ((~ (IData)(vlSelf->__PVT__u4__DOT__inf_out)) 
                                            & ((~ (IData)(vlSelf->__PVT__u4__DOT__max_num)) 
                                               & ((0xffU 
                                                   != (IData)(vlSelf->__PVT__u4__DOT__exp_out_final)) 
                                                  & (((0U 
                                                       != 
                                                       (0x1ffffffU 
                                                        & (IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_21))) 
                                                      & ((~ (IData)(vlSelf->__PVT__opb_dn)) 
                                                         & (~ (IData)(
                                                                      (0U 
                                                                       != (IData)(vlSelf->__PVT__u4__DOT__exp_out)))))) 
                                                     | (((IData)(vlSelf->__PVT__u4__DOT__op_dn) 
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
                                                                       == (IData)(vlSelf->__PVT__exp_r))))))))))));
    } else {
        vlSelf->__PVT__overflow_d = ((IData)(vlSelf->__PVT__u4__DOT__ovf0) 
                                     | ((~ (IData)(vlSelf->__PVT__u4__DOT__dn)) 
                                        & (0xffU == (IData)(vlSelf->__PVT__u4__DOT__exp_out))));
        vlSelf->__PVT__underflow_d = (1U & ((2U == (IData)(vlSelf->__PVT__fpu_op_r3))
                                             ? ((0U 
                                                 != 
                                                 (0x1ffffffU 
                                                  & (IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_21))) 
                                                & ((~ (IData)(
                                                              (0xffU 
                                                               == (IData)(vlSelf->__PVT__exp_r)))) 
                                                   & (IData)(vlSelf->__PVT__u4__DOT__z)))
                                             : ((~ 
                                                 (vlSelf->__PVT__fract_out_q 
                                                  >> 0x1bU)) 
                                                & ((~ (IData)(vlSelf->__PVT__u4__DOT__dn)) 
                                                   & ((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_23) 
                                                      >> 8U)))));
    }
}

VL_INLINE_OPT void Vco_sim_syn2_fpu_add___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__add1_add__3(Vco_sim_syn2_fpu_add* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_syn2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vco_sim_syn2_fpu_add___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__add1_add__3\n"); );
    // Body
    vlSelf->__PVT__u1__DOT__exp_diff_sft = ((0x1bU 
                                             < ((IData)(vlSelf->u1__DOT____VdfgRegularize_h05e998eb_0_2)
                                                 ? 0U
                                                 : (IData)(vlSelf->__PVT__u1__DOT__exp_diff2)))
                                             ? 0x1bU
                                             : ((IData)(vlSelf->u1__DOT____VdfgRegularize_h05e998eb_0_2)
                                                 ? 0U
                                                 : 
                                                (0x1fU 
                                                 & (IData)(vlSelf->__PVT__u1__DOT__exp_diff2))));
    vlSelf->__PVT__u1__DOT__adj_op_tmp = ((0x4000000U 
                                           & ((~ ((IData)(vlSelf->__PVT__u1__DOT__expa_lt_expb)
                                                   ? 
                                                  (~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0xffU 
                                                               & (vlSelf->__PVT__opb_r 
                                                                  >> 0x17U)))))
                                                   : 
                                                  (~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0xffU 
                                                               & (vlSelf->__PVT__opa_r 
                                                                  >> 0x17U))))))) 
                                              << 0x1aU)) 
                                          | (0x3fffff8U 
                                             & (((IData)(vlSelf->__PVT__u1__DOT__expa_lt_expb)
                                                  ? vlSelf->__PVT__opb_r
                                                  : vlSelf->__PVT__opa_r) 
                                                << 3U)));
    vlSelf->u1__DOT____Vcellout__u7__shift_out = (0xffffffffffffULL 
                                                  & ((0x20U 
                                                      & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                      ? 
                                                     ((0x10U 
                                                       & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                       ? 
                                                      ((8U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                        ? (QData)((IData)(vlSelf->__PVT__u1__DOT__adj_op_tmp))
                                                        : 
                                                       ((4U 
                                                         & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                         ? (QData)((IData)(vlSelf->__PVT__u1__DOT__adj_op_tmp))
                                                         : 
                                                        ((2U 
                                                          & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                          ? (QData)((IData)(vlSelf->__PVT__u1__DOT__adj_op_tmp))
                                                          : 
                                                         ((1U 
                                                           & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                           ? (QData)((IData)(vlSelf->__PVT__u1__DOT__adj_op_tmp))
                                                           : 0ULL))))
                                                       : 
                                                      ((8U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                        ? 
                                                       ((4U 
                                                         & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                         ? 
                                                        ((2U 
                                                          & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                          ? 
                                                         ((1U 
                                                           & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                           ? 
                                                          VL_SHIFTR_QQI(48,48,32, (QData)((IData)(vlSelf->__PVT__u1__DOT__adj_op_tmp)), 0x2fU)
                                                           : 
                                                          VL_SHIFTR_QQI(48,48,32, (QData)((IData)(vlSelf->__PVT__u1__DOT__adj_op_tmp)), 0x2eU))
                                                          : 
                                                         ((1U 
                                                           & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                           ? 
                                                          VL_SHIFTR_QQI(48,48,32, (QData)((IData)(vlSelf->__PVT__u1__DOT__adj_op_tmp)), 0x2dU)
                                                           : 
                                                          VL_SHIFTR_QQI(48,48,32, (QData)((IData)(vlSelf->__PVT__u1__DOT__adj_op_tmp)), 0x2cU)))
                                                         : 
                                                        ((2U 
                                                          & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                          ? 
                                                         ((1U 
                                                           & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                           ? 
                                                          VL_SHIFTR_QQI(48,48,32, (QData)((IData)(vlSelf->__PVT__u1__DOT__adj_op_tmp)), 0x2bU)
                                                           : 
                                                          VL_SHIFTR_QQI(48,48,32, (QData)((IData)(vlSelf->__PVT__u1__DOT__adj_op_tmp)), 0x2aU))
                                                          : 
                                                         ((1U 
                                                           & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                           ? 
                                                          VL_SHIFTR_QQI(48,48,32, (QData)((IData)(vlSelf->__PVT__u1__DOT__adj_op_tmp)), 0x29U)
                                                           : 
                                                          VL_SHIFTR_QQI(48,48,32, (QData)((IData)(vlSelf->__PVT__u1__DOT__adj_op_tmp)), 0x28U))))
                                                        : 
                                                       ((4U 
                                                         & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                         ? 
                                                        ((2U 
                                                          & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                          ? 
                                                         ((1U 
                                                           & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                           ? 
                                                          VL_SHIFTR_QQI(48,48,32, (QData)((IData)(vlSelf->__PVT__u1__DOT__adj_op_tmp)), 0x27U)
                                                           : 
                                                          VL_SHIFTR_QQI(48,48,32, (QData)((IData)(vlSelf->__PVT__u1__DOT__adj_op_tmp)), 0x26U))
                                                          : 
                                                         ((1U 
                                                           & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                           ? 
                                                          VL_SHIFTR_QQI(48,48,32, (QData)((IData)(vlSelf->__PVT__u1__DOT__adj_op_tmp)), 0x25U)
                                                           : 
                                                          VL_SHIFTR_QQI(48,48,32, (QData)((IData)(vlSelf->__PVT__u1__DOT__adj_op_tmp)), 0x24U)))
                                                         : 
                                                        ((2U 
                                                          & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                          ? 
                                                         ((1U 
                                                           & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                           ? 
                                                          VL_SHIFTR_QQI(48,48,32, (QData)((IData)(vlSelf->__PVT__u1__DOT__adj_op_tmp)), 0x23U)
                                                           : 
                                                          VL_SHIFTR_QQI(48,48,32, (QData)((IData)(vlSelf->__PVT__u1__DOT__adj_op_tmp)), 0x22U))
                                                          : 
                                                         ((1U 
                                                           & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                           ? 
                                                          VL_SHIFTR_QQI(48,48,32, (QData)((IData)(vlSelf->__PVT__u1__DOT__adj_op_tmp)), 0x21U)
                                                           : 
                                                          VL_SHIFTR_QQI(48,48,32, (QData)((IData)(vlSelf->__PVT__u1__DOT__adj_op_tmp)), 0x20U))))))
                                                      : 
                                                     ((0x10U 
                                                       & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                       ? 
                                                      ((8U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                        ? 
                                                       ((4U 
                                                         & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                         ? 
                                                        ((2U 
                                                          & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                          ? 
                                                         ((1U 
                                                           & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                           ? 
                                                          VL_SHIFTR_QQI(48,48,32, (QData)((IData)(vlSelf->__PVT__u1__DOT__adj_op_tmp)), 0x1fU)
                                                           : 
                                                          VL_SHIFTR_QQI(48,48,32, (QData)((IData)(vlSelf->__PVT__u1__DOT__adj_op_tmp)), 0x1eU))
                                                          : 
                                                         ((1U 
                                                           & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                           ? 
                                                          VL_SHIFTR_QQI(48,48,32, (QData)((IData)(vlSelf->__PVT__u1__DOT__adj_op_tmp)), 0x1dU)
                                                           : 
                                                          VL_SHIFTR_QQI(48,48,32, (QData)((IData)(vlSelf->__PVT__u1__DOT__adj_op_tmp)), 0x1cU)))
                                                         : 
                                                        ((2U 
                                                          & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                          ? 
                                                         ((1U 
                                                           & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                           ? 
                                                          VL_SHIFTR_QQI(48,48,32, (QData)((IData)(vlSelf->__PVT__u1__DOT__adj_op_tmp)), 0x1bU)
                                                           : 
                                                          VL_SHIFTR_QQI(48,48,32, (QData)((IData)(vlSelf->__PVT__u1__DOT__adj_op_tmp)), 0x1aU))
                                                          : 
                                                         ((1U 
                                                           & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                           ? 
                                                          VL_SHIFTR_QQI(48,48,32, (QData)((IData)(vlSelf->__PVT__u1__DOT__adj_op_tmp)), 0x19U)
                                                           : 
                                                          VL_SHIFTR_QQI(48,48,32, (QData)((IData)(vlSelf->__PVT__u1__DOT__adj_op_tmp)), 0x18U))))
                                                        : 
                                                       ((4U 
                                                         & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                         ? 
                                                        ((2U 
                                                          & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                          ? 
                                                         ((1U 
                                                           & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                           ? 
                                                          VL_SHIFTR_QQI(48,48,32, (QData)((IData)(vlSelf->__PVT__u1__DOT__adj_op_tmp)), 0x17U)
                                                           : 
                                                          VL_SHIFTR_QQI(48,48,32, (QData)((IData)(vlSelf->__PVT__u1__DOT__adj_op_tmp)), 0x16U))
                                                          : 
                                                         ((1U 
                                                           & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                           ? 
                                                          VL_SHIFTR_QQI(48,48,32, (QData)((IData)(vlSelf->__PVT__u1__DOT__adj_op_tmp)), 0x15U)
                                                           : 
                                                          VL_SHIFTR_QQI(48,48,32, (QData)((IData)(vlSelf->__PVT__u1__DOT__adj_op_tmp)), 0x14U)))
                                                         : 
                                                        ((2U 
                                                          & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                          ? 
                                                         ((1U 
                                                           & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                           ? 
                                                          VL_SHIFTR_QQI(48,48,32, (QData)((IData)(vlSelf->__PVT__u1__DOT__adj_op_tmp)), 0x13U)
                                                           : 
                                                          VL_SHIFTR_QQI(48,48,32, (QData)((IData)(vlSelf->__PVT__u1__DOT__adj_op_tmp)), 0x12U))
                                                          : 
                                                         ((1U 
                                                           & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                           ? 
                                                          VL_SHIFTR_QQI(48,48,32, (QData)((IData)(vlSelf->__PVT__u1__DOT__adj_op_tmp)), 0x11U)
                                                           : 
                                                          VL_SHIFTR_QQI(48,48,32, (QData)((IData)(vlSelf->__PVT__u1__DOT__adj_op_tmp)), 0x10U)))))
                                                       : 
                                                      ((8U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                        ? 
                                                       ((4U 
                                                         & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                         ? 
                                                        ((2U 
                                                          & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                          ? 
                                                         ((1U 
                                                           & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                           ? 
                                                          VL_SHIFTR_QQI(48,48,32, (QData)((IData)(vlSelf->__PVT__u1__DOT__adj_op_tmp)), 0xfU)
                                                           : 
                                                          VL_SHIFTR_QQI(48,48,32, (QData)((IData)(vlSelf->__PVT__u1__DOT__adj_op_tmp)), 0xeU))
                                                          : 
                                                         ((1U 
                                                           & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                           ? 
                                                          VL_SHIFTR_QQI(48,48,32, (QData)((IData)(vlSelf->__PVT__u1__DOT__adj_op_tmp)), 0xdU)
                                                           : 
                                                          VL_SHIFTR_QQI(48,48,32, (QData)((IData)(vlSelf->__PVT__u1__DOT__adj_op_tmp)), 0xcU)))
                                                         : 
                                                        ((2U 
                                                          & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                          ? 
                                                         ((1U 
                                                           & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                           ? 
                                                          VL_SHIFTR_QQI(48,48,32, (QData)((IData)(vlSelf->__PVT__u1__DOT__adj_op_tmp)), 0xbU)
                                                           : 
                                                          VL_SHIFTR_QQI(48,48,32, (QData)((IData)(vlSelf->__PVT__u1__DOT__adj_op_tmp)), 0xaU))
                                                          : 
                                                         ((1U 
                                                           & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                           ? 
                                                          VL_SHIFTR_QQI(48,48,32, (QData)((IData)(vlSelf->__PVT__u1__DOT__adj_op_tmp)), 9U)
                                                           : 
                                                          VL_SHIFTR_QQI(48,48,32, (QData)((IData)(vlSelf->__PVT__u1__DOT__adj_op_tmp)), 8U))))
                                                        : 
                                                       ((4U 
                                                         & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                         ? 
                                                        ((2U 
                                                          & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                          ? 
                                                         ((1U 
                                                           & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                           ? 
                                                          VL_SHIFTR_QQI(48,48,32, (QData)((IData)(vlSelf->__PVT__u1__DOT__adj_op_tmp)), 7U)
                                                           : 
                                                          VL_SHIFTR_QQI(48,48,32, (QData)((IData)(vlSelf->__PVT__u1__DOT__adj_op_tmp)), 6U))
                                                          : 
                                                         ((1U 
                                                           & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                           ? 
                                                          VL_SHIFTR_QQI(48,48,32, (QData)((IData)(vlSelf->__PVT__u1__DOT__adj_op_tmp)), 5U)
                                                           : 
                                                          VL_SHIFTR_QQI(48,48,32, (QData)((IData)(vlSelf->__PVT__u1__DOT__adj_op_tmp)), 4U)))
                                                         : 
                                                        ((2U 
                                                          & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                          ? 
                                                         ((1U 
                                                           & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                           ? 
                                                          VL_SHIFTR_QQI(48,48,32, (QData)((IData)(vlSelf->__PVT__u1__DOT__adj_op_tmp)), 3U)
                                                           : 
                                                          VL_SHIFTR_QQI(48,48,32, (QData)((IData)(vlSelf->__PVT__u1__DOT__adj_op_tmp)), 2U))
                                                          : 
                                                         ((1U 
                                                           & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                           ? 
                                                          VL_SHIFTR_QQI(48,48,32, (QData)((IData)(vlSelf->__PVT__u1__DOT__adj_op_tmp)), 1U)
                                                           : (QData)((IData)(vlSelf->__PVT__u1__DOT__adj_op_tmp)))))))));
}

extern const VlUnpacked<CData/*0:0*/, 16> Vco_sim_syn2__ConstPool__TABLE_hbcbc7a3d_0;

VL_INLINE_OPT void Vco_sim_syn2_fpu_add___nba_comb__TOP__co_sim_syn2__DOT__golden__DOT__add1_add__0(Vco_sim_syn2_fpu_add* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_syn2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vco_sim_syn2_fpu_add___nba_comb__TOP__co_sim_syn2__DOT__golden__DOT__add1_add__0\n"); );
    // Init
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelf->__PVT__u1__DOT__adj_op_out = ((0x7fffffeU 
                                           & ((IData)(
                                                      (vlSelf->u1__DOT____Vcellout__u7__shift_out 
                                                       >> 1U)) 
                                              << 1U)) 
                                          | (1U & ((IData)(vlSelf->u1__DOT____Vcellout__u7__shift_out) 
                                                   | (IData)(vlSelf->__PVT__u1__DOT__sticky))));
    if (vlSelf->__PVT__u1__DOT__expa_lt_expb) {
        vlSelf->__PVT__u1__DOT__fracta_n = (((IData)(
                                                     (0U 
                                                      != 
                                                      (0xffU 
                                                       & (vlSelf->__PVT__opa_r 
                                                          >> 0x17U)))) 
                                             << 0x1aU) 
                                            | (0x3fffff8U 
                                               & (vlSelf->__PVT__opa_r 
                                                  << 3U)));
        vlSelf->__PVT__u1__DOT__fractb_n = vlSelf->__PVT__u1__DOT__adj_op_out;
    } else {
        vlSelf->__PVT__u1__DOT__fracta_n = vlSelf->__PVT__u1__DOT__adj_op_out;
        vlSelf->__PVT__u1__DOT__fractb_n = (((IData)(
                                                     (0U 
                                                      != 
                                                      (0xffU 
                                                       & (vlSelf->__PVT__opb_r 
                                                          >> 0x17U)))) 
                                             << 0x1aU) 
                                            | (0x3fffff8U 
                                               & (vlSelf->__PVT__opb_r 
                                                  << 3U)));
    }
    vlSelf->__PVT__u1__DOT__fractb_lt_fracta = (vlSelf->__PVT__u1__DOT__fractb_n 
                                                > vlSelf->__PVT__u1__DOT__fracta_n);
    __Vtableidx1 = (((IData)(vlSelf->__PVT__u1__DOT__fractb_lt_fracta) 
                     << 3U) | ((4U & ((~ (IData)(vlSelf->__PVT__fpu_op_r1)) 
                                      << 2U)) | ((2U 
                                                  & (vlSelf->__PVT__opb_r 
                                                     >> 0x1eU)) 
                                                 | (vlSelf->__PVT__opa_r 
                                                    >> 0x1fU))));
    vlSelf->__PVT__u1__DOT__sign_d = Vco_sim_syn2__ConstPool__TABLE_hbcbc7a3d_0
        [__Vtableidx1];
}

VL_INLINE_OPT void Vco_sim_syn2_fpu_add___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__add2_add__0(Vco_sim_syn2_fpu_add* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_syn2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vco_sim_syn2_fpu_add___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__add2_add__0\n"); );
    // Init
    CData/*0:0*/ u4__DOT____VdfgRegularize_he8d392c1_0_8;
    u4__DOT____VdfgRegularize_he8d392c1_0_8 = 0;
    CData/*0:0*/ u4__DOT____VdfgRegularize_he8d392c1_0_10;
    u4__DOT____VdfgRegularize_he8d392c1_0_10 = 0;
    CData/*0:0*/ u4__DOT____VdfgRegularize_he8d392c1_0_19;
    u4__DOT____VdfgRegularize_he8d392c1_0_19 = 0;
    // Body
    vlSelf->__PVT__div_by_zero = vlSelf->__PVT__div_by_zero_o1;
    vlSelf->__PVT__zero = vlSelf->__PVT__zero_o1;
    vlSelf->__PVT__overflow = vlSelf->__PVT__overflow_o1;
    vlSelf->__PVT__underflow = vlSelf->__PVT__underflow_o1;
    if (vlSelf->__PVT__u1__DOT__fractb_lt_fracta) {
        vlSelf->__PVT__fractb = vlSelf->__PVT__u1__DOT__fracta_n;
        vlSelf->__PVT__fracta = vlSelf->__PVT__u1__DOT__fractb_n;
    } else {
        vlSelf->__PVT__fractb = vlSelf->__PVT__u1__DOT__fractb_n;
        vlSelf->__PVT__fracta = vlSelf->__PVT__u1__DOT__fracta_n;
    }
    vlSelf->__PVT__sign = (1U & ((3U == (IData)(vlSelf->__PVT__rmode_r2))
                                  ? (~ (IData)(vlSelf->__PVT__sign_fasu))
                                  : (IData)(vlSelf->__PVT__sign_fasu)));
    vlSelf->__PVT__opa_r1 = (0x7fffffffU & vlSelf->__PVT__opa_r);
    vlSelf->__PVT__opa_nan_r = ((~ (IData)(vlSelf->__PVT__opa_nan)) 
                                & (3U == (IData)(vlSelf->__PVT__fpu_op_r2)));
    vlSelf->__PVT__opa_00 = ((IData)(vlSelf->__PVT__u0__DOT__expa_00) 
                             & (IData)(vlSelf->__PVT__u0__DOT__fracta_00));
    vlSelf->__PVT__opa_inf = ((IData)(vlSelf->__PVT__u0__DOT__expa_ff) 
                              & (IData)(vlSelf->__PVT__u0__DOT__infa_f_r));
    vlSelf->__PVT__opb_00 = ((IData)(vlSelf->__PVT__u0__DOT__expb_00) 
                             & (IData)(vlSelf->__PVT__u0__DOT__fractb_00));
    vlSelf->__PVT__opb_inf = ((IData)(vlSelf->__PVT__u0__DOT__expb_ff) 
                              & (IData)(vlSelf->__PVT__u0__DOT__infb_f_r));
    vlSelf->__PVT__opa_dn = vlSelf->__PVT__u0__DOT__expa_00;
    vlSelf->__PVT__opb_dn = vlSelf->__PVT__u0__DOT__expb_00;
    vlSelf->__PVT__snan = vlSelf->__PVT__snan_o1;
    vlSelf->__PVT__rmode_r3 = vlSelf->__PVT__rmode_r2;
    vlSelf->__PVT__opas_r2 = vlSelf->__PVT__opas_r1;
    vlSelf->__PVT__ine = vlSelf->__PVT__ine_o1;
    vlSelf->__PVT__qnan = vlSelf->__PVT__qnan_o1;
    vlSelf->__PVT__fract_out_q = vlSelf->u3__DOT____VdfgRegularize_h60e48f75_0_0;
    vlSelf->__PVT__exp_r = vlSelf->__PVT__exp_fasu;
    vlSelf->__PVT__inf = vlSelf->__PVT__inf_o1;
    vlSelf->__PVT__div_by_zero_o1 = 0U;
    vlSelf->__PVT__zero_o1 = vlSelf->__PVT__output_zero_fasu;
    vlSelf->__PVT__overflow_o1 = ((IData)(vlSelf->__VdfgRegularize_h16e0ae4d_5_1) 
                                  & (IData)(vlSelf->__PVT__overflow_d));
    vlSelf->__PVT__underflow_o1 = ((IData)(vlSelf->__VdfgRegularize_h16e0ae4d_5_2) 
                                   & (IData)(vlSelf->__PVT__underflow_d));
    vlSelf->__PVT__u0__DOT__fracta_00 = (1U & (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (0x7fffffU 
                                                           & vlSelf->__PVT__opa_r)))));
    vlSelf->__PVT__u0__DOT__fractb_00 = (1U & (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (0x7fffffU 
                                                           & vlSelf->__PVT__opb_r)))));
    vlSelf->__PVT__u0__DOT__expa_00 = (1U & (~ (IData)(
                                                       (0U 
                                                        != 
                                                        (0xffU 
                                                         & (vlSelf->__PVT__opa_r 
                                                            >> 0x17U))))));
    vlSelf->__PVT__u4__DOT__op_dn = ((IData)(vlSelf->__PVT__opa_dn) 
                                     | (IData)(vlSelf->__PVT__opb_dn));
    vlSelf->__PVT__u0__DOT__expb_00 = (1U & (~ (IData)(
                                                       (0U 
                                                        != 
                                                        (0xffU 
                                                         & (vlSelf->__PVT__opb_r 
                                                            >> 0x17U))))));
    vlSelf->__PVT__snan_o1 = vlSelf->__PVT__snan_d;
    vlSelf->__PVT__opas_r1 = (vlSelf->__PVT__opa_r 
                              >> 0x1fU);
    vlSelf->__PVT__ine_o1 = ((IData)(vlSelf->__VdfgRegularize_h16e0ae4d_5_1) 
                             & (((5U == (IData)(vlSelf->__PVT__fpu_op_r3))
                                  ? (IData)(vlSelf->__PVT__u4__DOT__f2i_ine)
                                  : ((4U == (IData)(vlSelf->__PVT__fpu_op_r3))
                                      ? (0U != (0x1ffffffU 
                                                & (IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_21)))
                                      : (((~ (IData)(vlSelf->__PVT__u4__DOT__dn)) 
                                          & (IData)(
                                                    (vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_21 
                                                     >> 0x18U))) 
                                         | (((~ (IData)(vlSelf->__PVT__u4__DOT__dn)) 
                                             & (IData)(vlSelf->__PVT__u4__DOT__s)) 
                                            | ((IData)(vlSelf->__PVT__u4__DOT__max_num) 
                                               | (3U 
                                                  == (IData)(vlSelf->__PVT__fpu_op_r3))))))) 
                                | ((IData)(vlSelf->__PVT__overflow_d) 
                                   | (IData)(vlSelf->__PVT__underflow_d))));
    vlSelf->__PVT__qnan_o1 = (((IData)(vlSelf->__PVT__snan_d) 
                               | (IData)(vlSelf->__PVT__qnan_d)) 
                              | ((IData)(vlSelf->__PVT__ind_d) 
                                 & (~ (IData)(vlSelf->__PVT__fasu_op_r2))));
    vlSelf->__PVT__exp_fasu = ((((~ (IData)(vlSelf->__PVT__u1__DOT__add_d)) 
                                 & ((0xffU & (vlSelf->__PVT__opa_r 
                                              >> 0x17U)) 
                                    == (0xffU & (vlSelf->__PVT__opb_r 
                                                 >> 0x17U)))) 
                                & ((0x7fffffU & vlSelf->__PVT__opa_r) 
                                   == (0x7fffffU & vlSelf->__PVT__opb_r)))
                                ? 0U : (IData)(vlSelf->__PVT__u1__DOT__exp_large));
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
                                                        ? 
                                                       ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                        << 0x14U)
                                                        : 
                                                       ((4U 
                                                         & ((IData)(vlSelf->__PVT__exp_r) 
                                                            - (IData)(0x3dU)))
                                                         ? 
                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                         << 0x14U)
                                                         : 
                                                        ((2U 
                                                          & ((IData)(vlSelf->__PVT__exp_r) 
                                                             - (IData)(0x3dU)))
                                                          ? 
                                                         ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                          << 0x14U)
                                                          : 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                           << 0x14U)
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
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0x2fU)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0x2eU))
                                                          : 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0x2dU)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0x2cU)))
                                                         : 
                                                        ((2U 
                                                          & ((IData)(vlSelf->__PVT__exp_r) 
                                                             - (IData)(0x3dU)))
                                                          ? 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0x2bU)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0x2aU))
                                                          : 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0x29U)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0x28U))))
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
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0x27U)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0x26U))
                                                          : 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0x25U)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0x24U)))
                                                         : 
                                                        ((2U 
                                                          & ((IData)(vlSelf->__PVT__exp_r) 
                                                             - (IData)(0x3dU)))
                                                          ? 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0x23U)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0x22U))
                                                          : 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0x21U)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0x20U))))))
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
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0x1fU)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0x1eU))
                                                          : 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0x1dU)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0x1cU)))
                                                         : 
                                                        ((2U 
                                                          & ((IData)(vlSelf->__PVT__exp_r) 
                                                             - (IData)(0x3dU)))
                                                          ? 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0x1bU)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0x1aU))
                                                          : 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0x19U)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0x18U))))
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
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0x17U)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0x16U))
                                                          : 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0x15U)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0x14U)))
                                                         : 
                                                        ((2U 
                                                          & ((IData)(vlSelf->__PVT__exp_r) 
                                                             - (IData)(0x3dU)))
                                                          ? 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0x13U)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0x12U))
                                                          : 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0x11U)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0x10U)))))
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
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0xfU)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0xeU))
                                                          : 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0xdU)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0xcU)))
                                                         : 
                                                        ((2U 
                                                          & ((IData)(vlSelf->__PVT__exp_r) 
                                                             - (IData)(0x3dU)))
                                                          ? 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0xbU)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0xaU))
                                                          : 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 9U)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 8U))))
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
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 7U)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 6U))
                                                          : 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 5U)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 4U)))
                                                         : 
                                                        ((2U 
                                                          & ((IData)(vlSelf->__PVT__exp_r) 
                                                             - (IData)(0x3dU)))
                                                          ? 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 3U)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 2U))
                                                          : 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 1U)
                                                           : 
                                                          ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                           << 0x14U))))))));
    u4__DOT____VdfgRegularize_he8d392c1_0_8 = ((IData)(vlSelf->__PVT__exp_r) 
                                               < ((0U 
                                                   == (IData)(vlSelf->__PVT__rmode_r3))
                                                   ? 0x7eU
                                                   : 0x7fU));
    vlSelf->__PVT__inf_o1 = ((~ ((IData)(vlSelf->__PVT__qnan_d) 
                                 | (IData)(vlSelf->__PVT__snan_d))) 
                             & ((IData)(((0x7f800000U 
                                          == (0x7f800000U 
                                              & vlSelf->__PVT__out_d)) 
                                         & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (0x7fffffU 
                                                        & vlSelf->__PVT__out_d)))))) 
                                | (((IData)(vlSelf->__PVT__inf_d) 
                                    & (~ ((IData)(vlSelf->__PVT__ind_d) 
                                          & (~ (IData)(vlSelf->__PVT__fasu_op_r2))))) 
                                   & (~ ((IData)(vlSelf->__PVT__fpu_op_r3) 
                                         >> 1U)))));
    vlSelf->__PVT__u4__DOT__u6__DOT__fi_ldz_r0 = ((0x8000000U 
                                                   & vlSelf->__PVT__fract_out_q)
                                                   ? 1U
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (3U 
                                                     & (vlSelf->__PVT__fract_out_q 
                                                        >> 0x1aU)))
                                                    ? 2U
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->__PVT__fract_out_q 
                                                         >> 0x19U)))
                                                     ? 3U
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (0xfU 
                                                       & (vlSelf->__PVT__fract_out_q 
                                                          >> 0x18U)))
                                                      ? 4U
                                                      : 
                                                     ((1U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->__PVT__fract_out_q 
                                                           >> 0x17U)))
                                                       ? 5U
                                                       : 
                                                      ((1U 
                                                        == 
                                                        (0x3fU 
                                                         & (vlSelf->__PVT__fract_out_q 
                                                            >> 0x16U)))
                                                        ? 6U
                                                        : 
                                                       ((1U 
                                                         == 
                                                         (0x7fU 
                                                          & (vlSelf->__PVT__fract_out_q 
                                                             >> 0x15U)))
                                                         ? 7U
                                                         : 
                                                        ((1U 
                                                          == 
                                                          (0xffU 
                                                           & (vlSelf->__PVT__fract_out_q 
                                                              >> 0x14U)))
                                                          ? 8U
                                                          : 
                                                         ((1U 
                                                           == 
                                                           (0x1ffU 
                                                            & (vlSelf->__PVT__fract_out_q 
                                                               >> 0x13U)))
                                                           ? 9U
                                                           : 
                                                          ((1U 
                                                            == 
                                                            (0x3ffU 
                                                             & (vlSelf->__PVT__fract_out_q 
                                                                >> 0x12U)))
                                                            ? 0xaU
                                                            : 
                                                           ((1U 
                                                             == 
                                                             (0x7ffU 
                                                              & (vlSelf->__PVT__fract_out_q 
                                                                 >> 0x11U)))
                                                             ? 0xbU
                                                             : 
                                                            ((1U 
                                                              == 
                                                              (0xfffU 
                                                               & (vlSelf->__PVT__fract_out_q 
                                                                  >> 0x10U)))
                                                              ? 0xcU
                                                              : 
                                                             ((1U 
                                                               == 
                                                               (0x1fffU 
                                                                & (vlSelf->__PVT__fract_out_q 
                                                                   >> 0xfU)))
                                                               ? 0xdU
                                                               : 
                                                              ((1U 
                                                                == 
                                                                (0x3fffU 
                                                                 & (vlSelf->__PVT__fract_out_q 
                                                                    >> 0xeU)))
                                                                ? 0xeU
                                                                : 
                                                               ((1U 
                                                                 == 
                                                                 (0x7fffU 
                                                                  & (vlSelf->__PVT__fract_out_q 
                                                                     >> 0xdU)))
                                                                 ? 0xfU
                                                                 : 
                                                                ((1U 
                                                                  == 
                                                                  (0xffffU 
                                                                   & (vlSelf->__PVT__fract_out_q 
                                                                      >> 0xcU)))
                                                                  ? 0x10U
                                                                  : 
                                                                 ((1U 
                                                                   == 
                                                                   (0x1ffffU 
                                                                    & (vlSelf->__PVT__fract_out_q 
                                                                       >> 0xbU)))
                                                                   ? 0x11U
                                                                   : 
                                                                  ((1U 
                                                                    == 
                                                                    (0x3ffffU 
                                                                     & (vlSelf->__PVT__fract_out_q 
                                                                        >> 0xaU)))
                                                                    ? 0x12U
                                                                    : 
                                                                   ((1U 
                                                                     == 
                                                                     (0x7ffffU 
                                                                      & (vlSelf->__PVT__fract_out_q 
                                                                         >> 9U)))
                                                                     ? 0x13U
                                                                     : 
                                                                    ((1U 
                                                                      == 
                                                                      (0xfffffU 
                                                                       & (vlSelf->__PVT__fract_out_q 
                                                                          >> 8U)))
                                                                      ? 0x14U
                                                                      : 
                                                                     ((1U 
                                                                       == 
                                                                       (0x1fffffU 
                                                                        & (vlSelf->__PVT__fract_out_q 
                                                                           >> 7U)))
                                                                       ? 0x15U
                                                                       : 
                                                                      ((1U 
                                                                        == 
                                                                        (0x3fffffU 
                                                                         & (vlSelf->__PVT__fract_out_q 
                                                                            >> 6U)))
                                                                        ? 0x16U
                                                                        : 
                                                                       ((1U 
                                                                         == 
                                                                         (0x7fffffU 
                                                                          & (vlSelf->__PVT__fract_out_q 
                                                                             >> 5U)))
                                                                         ? 0x17U
                                                                         : 
                                                                        ((1U 
                                                                          == 
                                                                          (0xffffffU 
                                                                           & (vlSelf->__PVT__fract_out_q 
                                                                              >> 4U)))
                                                                          ? 0x18U
                                                                          : 
                                                                         ((1U 
                                                                           == 
                                                                           (0x1ffffffU 
                                                                            & (vlSelf->__PVT__fract_out_q 
                                                                               >> 3U)))
                                                                           ? 0x19U
                                                                           : 
                                                                          ((1U 
                                                                            == 
                                                                            (0x3ffffffU 
                                                                             & (vlSelf->__PVT__fract_out_q 
                                                                                >> 2U)))
                                                                            ? 0x1aU
                                                                            : 
                                                                           ((1U 
                                                                             == 
                                                                             (0x7ffffffU 
                                                                              & (vlSelf->__PVT__fract_out_q 
                                                                                >> 1U)))
                                                                             ? 0x1bU
                                                                             : 
                                                                            ((1U 
                                                                              == vlSelf->__PVT__fract_out_q)
                                                                              ? 0x1cU
                                                                              : 
                                                                             ((1U 
                                                                               == 
                                                                               (vlSelf->__PVT__fract_out_q 
                                                                                << 1U))
                                                                               ? 0x1dU
                                                                               : 
                                                                              ((1U 
                                                                                == 
                                                                                (vlSelf->__PVT__fract_out_q 
                                                                                << 2U))
                                                                                ? 0x1eU
                                                                                : 
                                                                               ((1U 
                                                                                == 
                                                                                (vlSelf->__PVT__fract_out_q 
                                                                                << 3U))
                                                                                 ? 0x1fU
                                                                                 : 
                                                                                ((1U 
                                                                                == 
                                                                                (vlSelf->__PVT__fract_out_q 
                                                                                << 4U))
                                                                                 ? 0x20U
                                                                                 : 
                                                                                ((1ULL 
                                                                                == 
                                                                                ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                                << 5U))
                                                                                 ? 0x21U
                                                                                 : 
                                                                                ((1ULL 
                                                                                == 
                                                                                ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                                << 6U))
                                                                                 ? 0x22U
                                                                                 : 
                                                                                ((1ULL 
                                                                                == 
                                                                                ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                                << 7U))
                                                                                 ? 0x23U
                                                                                 : 
                                                                                ((1ULL 
                                                                                == 
                                                                                ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                                << 8U))
                                                                                 ? 0x24U
                                                                                 : 
                                                                                ((1ULL 
                                                                                == 
                                                                                ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                                << 9U))
                                                                                 ? 0x25U
                                                                                 : 
                                                                                ((1ULL 
                                                                                == 
                                                                                ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                                << 0xaU))
                                                                                 ? 0x26U
                                                                                 : 
                                                                                ((1ULL 
                                                                                == 
                                                                                ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                                << 0xbU))
                                                                                 ? 0x27U
                                                                                 : 
                                                                                ((1ULL 
                                                                                == 
                                                                                ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                                << 0xcU))
                                                                                 ? 0x28U
                                                                                 : 
                                                                                ((1ULL 
                                                                                == 
                                                                                ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                                << 0xdU))
                                                                                 ? 0x29U
                                                                                 : 
                                                                                ((1ULL 
                                                                                == 
                                                                                ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                                << 0xeU))
                                                                                 ? 0x2aU
                                                                                 : 
                                                                                ((1ULL 
                                                                                == 
                                                                                ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                                << 0xfU))
                                                                                 ? 0x2bU
                                                                                 : 
                                                                                ((1ULL 
                                                                                == 
                                                                                ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                                << 0x10U))
                                                                                 ? 0x2cU
                                                                                 : 
                                                                                ((1ULL 
                                                                                == 
                                                                                ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                                << 0x11U))
                                                                                 ? 0x2dU
                                                                                 : 
                                                                                ((1ULL 
                                                                                == 
                                                                                ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                                << 0x12U))
                                                                                 ? 0x2eU
                                                                                 : 
                                                                                ((1ULL 
                                                                                == 
                                                                                ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                                << 0x13U))
                                                                                 ? 0x2fU
                                                                                 : 0x30U)))))))))))))))))))))))))))))))))))))))))))))));
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
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_23 
        = (0x1ffU & ((0x8000000U & vlSelf->__PVT__fract_out_q)
                      ? ((IData)(1U) + (IData)(vlSelf->__PVT__exp_r))
                      : (IData)(vlSelf->__PVT__u4__DOT__exp_next_mi)));
    u4__DOT____VdfgRegularize_he8d392c1_0_10 = ((IData)(vlSelf->__PVT__opas_r2) 
                                                & (IData)(u4__DOT____VdfgRegularize_he8d392c1_0_8));
    vlSelf->__PVT__u4__DOT__div_exp1 = (0x1ffU & (((IData)(vlSelf->__PVT__exp_r) 
                                                   - (IData)(1U)) 
                                                  + (IData)(vlSelf->__PVT__u4__DOT__fi_ldz_2)));
    vlSelf->__PVT__u4__DOT__f2i_max = (((~ (IData)(vlSelf->__PVT__opas_r2)) 
                                        & (0x9dU < (IData)(vlSelf->__PVT__exp_r))) 
                                       | ((IData)(u4__DOT____VdfgRegularize_he8d392c1_0_10) 
                                          & ((0U != vlSelf->__PVT__fract_out_q) 
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
                                                             != vlSelf->__PVT__fract_out_q))) 
                                                 | (3U 
                                                    != (IData)(vlSelf->__PVT__rmode_r3))))));
    vlSelf->__PVT__fpu_op_r3 = vlSelf->__PVT__fpu_op_r2;
    vlSelf->__PVT__u4__DOT__div_inf = ((IData)(vlSelf->__PVT__opb_dn) 
                                       & ((~ (IData)(vlSelf->__PVT__opa_dn)) 
                                          & (0x7fU 
                                             > (0xffU 
                                                & (IData)(vlSelf->__PVT__u4__DOT__div_exp1)))));
    vlSelf->__PVT__fpu_op_r2 = vlSelf->__PVT__fpu_op_r1;
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_46 
        = ((IData)(vlSelf->__PVT__u4__DOT__f2i_max) 
           & (5U == (IData)(vlSelf->__PVT__fpu_op_r3)));
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_37 
        = ((2U == (IData)(vlSelf->__PVT__fpu_op_r3)) 
           | (3U == (IData)(vlSelf->__PVT__fpu_op_r3)));
    u4__DOT____VdfgRegularize_he8d392c1_0_19 = ((5U 
                                                 == (IData)(vlSelf->__PVT__fpu_op_r3)) 
                                                | (4U 
                                                   == (IData)(vlSelf->__PVT__fpu_op_r3)));
    vlSelf->__PVT__u4__DOT__dn = ((2U != (IData)(vlSelf->__PVT__fpu_op_r3)) 
                                  & ((3U != (IData)(vlSelf->__PVT__fpu_op_r3)) 
                                     & ((~ (IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->__PVT__exp_r)))) 
                                        | ((~ (vlSelf->__PVT__fract_out_q 
                                               >> 0x1bU)) 
                                           & ((IData)(vlSelf->__PVT__u4__DOT__exp_next_mi) 
                                              >> 8U)))));
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_53 
        = ((~ (IData)(vlSelf->__PVT__u4__DOT__dn)) 
           & (5U != (IData)(vlSelf->__PVT__fpu_op_r3)));
    vlSelf->__PVT__u4__DOT__exp_out = (0xffU & ((3U 
                                                 == (IData)(vlSelf->__PVT__fpu_op_r3))
                                                 ? 
                                                (((IData)(vlSelf->__PVT__opa_dn) 
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
                                                     & ((~ (IData)(
                                                                   (0U 
                                                                    != (IData)(vlSelf->__PVT__exp_r)))) 
                                                        | (IData)(vlSelf->__PVT__opa_dn)))
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_23) 
                                                     - (IData)(1U))))))
                                                 : 
                                                ((IData)(u4__DOT____VdfgRegularize_he8d392c1_0_19)
                                                  ? 
                                                 ((5U 
                                                   == (IData)(vlSelf->__PVT__fpu_op_r3))
                                                   ? 
                                                  ((IData)(vlSelf->__PVT__u4__DOT__f2i_zero)
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelf->__PVT__u4__DOT__f2i_max)
                                                     ? 0xffU
                                                     : 0U))
                                                   : 
                                                  ((0U 
                                                    != vlSelf->__PVT__fract_out_q)
                                                    ? 
                                                   ((IData)(0x9eU) 
                                                    - (IData)(vlSelf->__PVT__u4__DOT__u6__DOT__fi_ldz_r0))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__opas_r2)
                                                     ? 0x9eU
                                                     : 0U)))
                                                  : 
                                                 (((2U 
                                                    == (IData)(vlSelf->__PVT__fpu_op_r3)) 
                                                   & ((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_23) 
                                                      >> 8U))
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlSelf->__PVT__u4__DOT__dn)
                                                    ? 
                                                   (3U 
                                                    & (vlSelf->__PVT__fract_out_q 
                                                       >> 0x1aU))
                                                    : (IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_23))))));
    vlSelf->__PVT__u4__DOT__exp_out_fe = (IData)((0xfeU 
                                                  == (IData)(vlSelf->__PVT__u4__DOT__exp_out)));
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_38 
        = ((IData)(vlSelf->__PVT__sign) & (0xffU == (IData)(vlSelf->__PVT__u4__DOT__exp_out)));
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_64 
        = (1U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__u4__DOT__exp_out)))) 
                 | ((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_23) 
                    >> 8U)));
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_14 
        = (0x1ffU & ((0U != (IData)(vlSelf->__PVT__exp_r))
                      ? ((IData)(vlSelf->__PVT__exp_r) 
                         - (IData)(1U)) : (IData)(vlSelf->__PVT__u4__DOT__exp_out)));
    vlSelf->__PVT__u4__DOT__z = (1U & (((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_14) 
                                        >> 8U) | ((~ (IData)(
                                                             (0U 
                                                              != (IData)(vlSelf->__PVT__exp_r)))) 
                                                  | ((0U 
                                                      != (IData)(vlSelf->__PVT__exp_r)) 
                                                     & (IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_64)))));
    vlSelf->__PVT__u4__DOT__shift_right = (0xffU & 
                                           ((3U == (IData)(vlSelf->__PVT__fpu_op_r3))
                                             ? ((IData)(2U) 
                                                + (IData)(vlSelf->__PVT__exp_r))
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
                                                      ? 
                                                     ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                      << 0x14U)
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                       ? 
                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                       << 0x14U)
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                        ? 
                                                       ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                        << 0x14U)
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                         << 0x14U)
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
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x2fU)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x2eU))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x2dU)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x2cU)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x2bU)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x2aU))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x29U)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x28U))))
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
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x27U)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x26U))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x25U)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x24U)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x23U)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x22U))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x21U)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x20U))))))
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
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x1fU)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x1eU))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x1dU)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x1cU)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x1bU)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x1aU))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x19U)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x18U))))
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
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x17U)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x16U))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x15U)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x14U)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x13U)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x12U))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x11U)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x10U)))))
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
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0xfU)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0xeU))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0xdU)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0xcU)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0xbU)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0xaU))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 9U)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 8U))))
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
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 7U)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 6U))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 5U)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 4U)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 3U)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 2U))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 1U)
                                                         : 
                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                         << 0x14U))))))));
    vlSelf->__PVT__u4__DOT__shift_left = (0xffU & (
                                                   (3U 
                                                    == (IData)(vlSelf->__PVT__fpu_op_r3))
                                                    ? 
                                                   (((~ (IData)(
                                                                (0U 
                                                                 != (IData)(vlSelf->__PVT__u4__DOT__exp_out)))) 
                                                     & (IData)(vlSelf->__PVT__u4__DOT__op_dn))
                                                     ? 
                                                    ((0U 
                                                      != (IData)(vlSelf->__PVT__exp_r))
                                                      ? (IData)(vlSelf->__PVT__exp_r)
                                                      : 0U)
                                                     : 
                                                    ((1U 
                                                      & ((~ (IData)(vlSelf->__PVT__u4__DOT__op_dn)) 
                                                         & (~ (IData)(
                                                                      (0U 
                                                                       != (IData)(vlSelf->__PVT__u4__DOT__exp_out))))))
                                                      ? (IData)(vlSelf->__PVT__exp_r)
                                                      : (IData)(vlSelf->__PVT__u4__DOT__u6__DOT__fi_ldz_r0)))
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->__PVT__fpu_op_r3))
                                                     ? 
                                                    ((IData)(vlSelf->__PVT__u4__DOT__z)
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
                                                      ? 
                                                     ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                      << 0x14U)
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                       ? 
                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                       << 0x14U)
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                        ? 
                                                       ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                        << 0x14U)
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                         << 0x14U)
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
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x2fU)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x2eU))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x2dU)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x2cU)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x2bU)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x2aU))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x29U)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x28U))))
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
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x27U)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x26U))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x25U)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x24U)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x23U)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x22U))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x21U)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x20U))))))
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
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x1fU)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x1eU))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x1dU)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x1cU)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x1bU)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x1aU))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x19U)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x18U))))
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
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x17U)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x16U))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x15U)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x14U)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x13U)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x12U))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x11U)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x10U)))))
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
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0xfU)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0xeU))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0xdU)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0xcU)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0xbU)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0xaU))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 9U)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 8U))))
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
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 7U)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 6U))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 5U)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 4U)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 3U)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 2U))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 1U)
                                                         : 
                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                         << 0x14U))))))));
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_21 
        = (((3U == (IData)(vlSelf->__PVT__fpu_op_r3)) 
            | ((2U != (IData)(vlSelf->__PVT__fpu_op_r3)) 
               | ((0U != (IData)(vlSelf->__PVT__exp_r)) 
                  | (IData)(vlSelf->__PVT__u4__DOT__z))))
            ? (((0U != (3U & ((IData)(vlSelf->__PVT__u4__DOT__shift_left) 
                              >> 6U))) | ((IData)(vlSelf->__PVT__u4__DOT__f2i_zero) 
                                          & (5U == (IData)(vlSelf->__PVT__fpu_op_r3))))
                ? 0ULL : vlSelf->__PVT__u4__DOT__fract_in_shftl_1)
            : ((0U != (3U & ((IData)(vlSelf->__PVT__u4__DOT__shift_right) 
                             >> 6U))) ? 0ULL : vlSelf->__PVT__u4__DOT__fract_in_shftr_1));
    vlSelf->__PVT__u4__DOT__f2i_ine = (((IData)(vlSelf->__PVT__u4__DOT__f2i_zero) 
                                        & ((~ (IData)(vlSelf->__PVT__opas_r2)) 
                                           & (0U != vlSelf->__PVT__fract_out_q))) 
                                       | ((0U != (0x1ffffffU 
                                                  & (IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_21))) 
                                          | (((IData)(vlSelf->__PVT__u4__DOT__f2i_zero) 
                                              & ((0x80U 
                                                  > (IData)(vlSelf->__PVT__exp_r)) 
                                                 & ((0U 
                                                     != vlSelf->__PVT__fract_out_q) 
                                                    & (IData)(vlSelf->__PVT__opas_r2)))) 
                                             | ((IData)(vlSelf->__PVT__u4__DOT__f2i_max) 
                                                & ((3U 
                                                    == (IData)(vlSelf->__PVT__rmode_r3)) 
                                                   & (0x80U 
                                                      > (IData)(vlSelf->__PVT__exp_r)))))));
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_27 
        = (IData)((0x3000000ULL == (0x3000000ULL & vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_21)));
    vlSelf->__PVT__u4__DOT__s = (((3U == (IData)(vlSelf->__PVT__fpu_op_r3)) 
                                  & (IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_64))
                                  ? (0U != (0x1ffffffU 
                                            & (IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_21)))
                                  : ((0U != (0xffffffU 
                                             & (IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_21))) 
                                     | ((IData)((vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_21 
                                                 >> 0x18U)) 
                                        & (3U == (IData)(vlSelf->__PVT__fpu_op_r3)))));
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_55 
        = (0xffffffU & ((0x7fffffU & (IData)((vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_21 
                                              >> 0x19U))) 
                        + ((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_27) 
                           | ((IData)((vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_21 
                                       >> 0x18U)) & (IData)(vlSelf->__PVT__u4__DOT__s)))));
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_30 
        = (1U & ((IData)((vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_21 
                          >> 0x18U)) | (IData)(vlSelf->__PVT__u4__DOT__s)));
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_54 
        = (0xffffffU & ((0x7fffffU & (IData)((vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_21 
                                              >> 0x19U))) 
                        + ((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_37)
                            ? ((~ (IData)(vlSelf->__PVT__sign)) 
                               & ((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_30) 
                                  | (3U == (IData)(vlSelf->__PVT__fpu_op_r3))))
                            : ((5U == (IData)(vlSelf->__PVT__fpu_op_r3))
                                ? ((2U == (IData)(vlSelf->__PVT__rmode_r3)) 
                                   & (((0U != (0xfU 
                                               & vlSelf->__PVT__fract_out_q)) 
                                       & ((~ (IData)(vlSelf->__PVT__opas_r2)) 
                                          & (0x80U 
                                             > (IData)(vlSelf->__PVT__exp_r)))) 
                                      | (0U != (0x1ffffffU 
                                                & (IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_21)))))
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
                                                  ((IData)(vlSelf->__PVT__u4__DOT__exp_out) 
                                                   + 
                                                   (1U 
                                                    & (vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_54 
                                                       >> 0x17U)))));
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
                                           & ((0xffU 
                                               == (IData)(vlSelf->__PVT__exp_r)) 
                                              & ((0x18U 
                                                  > (IData)(vlSelf->__PVT__u4__DOT__fi_ldz_2)) 
                                                 & (0xfeU 
                                                    != (IData)(vlSelf->__PVT__u4__DOT__exp_out)))))) 
                                       | ((3U == (IData)(vlSelf->__PVT__fpu_op_r3)) 
                                          & (((1U == (IData)(vlSelf->__PVT__rmode_r3)) 
                                              & ((IData)(vlSelf->__PVT__u4__DOT__div_inf) 
                                                 | (0xffU 
                                                    == (IData)(vlSelf->__PVT__u4__DOT__exp_out)))) 
                                             | (((IData)(vlSelf->__PVT__rmode_r3) 
                                                 >> 1U) 
                                                & (((IData)(vlSelf->__PVT__sign) 
                                                    & (((vlSelf->__PVT__fract_out_q 
                                                         >> 0x1bU) 
                                                        & (IData)(vlSelf->__PVT__u4__DOT__div_inf)) 
                                                       | (((~ 
                                                            ((IData)(vlSelf->__PVT__u4__DOT__exp_out_rnd) 
                                                             >> 7U)) 
                                                           & ((~ 
                                                               (((~ (IData)(
                                                                            (0U 
                                                                             != 
                                                                             (0x7fU 
                                                                              & (IData)(vlSelf->__PVT__exp_r))))) 
                                                                 & ((IData)(vlSelf->__PVT__exp_r) 
                                                                    >> 7U)) 
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
                                                                  > (IData)(vlSelf->__PVT__u4__DOT__fi_ldz_2)))))))))));
    vlSelf->__PVT__u4__DOT__inf_out = ((((IData)(vlSelf->__PVT__rmode_r3) 
                                         >> 1U) & ((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_37) 
                                                   & ((~ (IData)(vlSelf->__PVT__sign)) 
                                                      & ((3U 
                                                          != (IData)(vlSelf->__PVT__fpu_op_r3)) 
                                                         & (0xffU 
                                                            == (IData)(vlSelf->__PVT__exp_r)))))) 
                                       | (((IData)(vlSelf->__PVT__u4__DOT__div_inf) 
                                           & ((3U == (IData)(vlSelf->__PVT__fpu_op_r3)) 
                                              & ((0U 
                                                  == (IData)(vlSelf->__PVT__rmode_r3)) 
                                                 | (((IData)(vlSelf->__PVT__rmode_r3) 
                                                     >> 1U) 
                                                    & ((~ (IData)(
                                                                  (0xffU 
                                                                   == (IData)(vlSelf->__PVT__exp_r)))) 
                                                       & (~ (IData)(vlSelf->__PVT__sign))))))) 
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
    vlSelf->__PVT__u4__DOT__overflow_fdiv = ((IData)(vlSelf->__PVT__u4__DOT__inf_out) 
                                             | (((0U 
                                                  != (IData)(vlSelf->__PVT__rmode_r3)) 
                                                 & (IData)(vlSelf->__PVT__u4__DOT__max_num)) 
                                                | (((IData)(vlSelf->__PVT__exp_r) 
                                                    >> 7U) 
                                                   & ((IData)(vlSelf->__PVT__u4__DOT__op_dn) 
                                                      & (0xffU 
                                                         == (IData)(vlSelf->__PVT__u4__DOT__exp_out))))));
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_51 
        = ((IData)(vlSelf->__PVT__u4__DOT__inf_out) 
           | (IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_46));
    vlSelf->__PVT__u4__DOT__ovf0 = (((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_51) 
                                     | ((~ (IData)(vlSelf->__PVT__u4__DOT__max_num)) 
                                        & (0xffU == (IData)(vlSelf->__PVT__u4__DOT__exp_out_rnd)))) 
                                    & ((1U != (IData)(vlSelf->__PVT__rmode_r3)) 
                                       & (5U != (IData)(vlSelf->__PVT__fpu_op_r3))));
    vlSelf->__PVT__u4__DOT__exp_out_final = ((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_51)
                                              ? 0xffU
                                              : ((IData)(vlSelf->__PVT__u4__DOT__max_num)
                                                  ? 0xfeU
                                                  : (IData)(vlSelf->__PVT__u4__DOT__exp_out_rnd)));
    if ((3U == (IData)(vlSelf->__PVT__fpu_op_r3))) {
        vlSelf->__PVT__overflow_d = vlSelf->__PVT__u4__DOT__overflow_fdiv;
        vlSelf->__PVT__underflow_d = (1U & ((~ (IData)(vlSelf->__PVT__u4__DOT__inf_out)) 
                                            & ((~ (IData)(vlSelf->__PVT__u4__DOT__max_num)) 
                                               & ((0xffU 
                                                   != (IData)(vlSelf->__PVT__u4__DOT__exp_out_final)) 
                                                  & (((0U 
                                                       != 
                                                       (0x1ffffffU 
                                                        & (IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_21))) 
                                                      & ((~ (IData)(vlSelf->__PVT__opb_dn)) 
                                                         & (~ (IData)(
                                                                      (0U 
                                                                       != (IData)(vlSelf->__PVT__u4__DOT__exp_out)))))) 
                                                     | (((IData)(vlSelf->__PVT__u4__DOT__op_dn) 
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
                                                                       == (IData)(vlSelf->__PVT__exp_r))))))))))));
    } else {
        vlSelf->__PVT__overflow_d = ((IData)(vlSelf->__PVT__u4__DOT__ovf0) 
                                     | ((~ (IData)(vlSelf->__PVT__u4__DOT__dn)) 
                                        & (0xffU == (IData)(vlSelf->__PVT__u4__DOT__exp_out))));
        vlSelf->__PVT__underflow_d = (1U & ((2U == (IData)(vlSelf->__PVT__fpu_op_r3))
                                             ? ((0U 
                                                 != 
                                                 (0x1ffffffU 
                                                  & (IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_21))) 
                                                & ((~ (IData)(
                                                              (0xffU 
                                                               == (IData)(vlSelf->__PVT__exp_r)))) 
                                                   & (IData)(vlSelf->__PVT__u4__DOT__z)))
                                             : ((~ 
                                                 (vlSelf->__PVT__fract_out_q 
                                                  >> 0x1bU)) 
                                                & ((~ (IData)(vlSelf->__PVT__u4__DOT__dn)) 
                                                   & ((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_23) 
                                                      >> 8U)))));
    }
}

VL_INLINE_OPT void Vco_sim_syn2_fpu_add___nba_comb__TOP__co_sim_syn2__DOT__golden__DOT__add2_add__0(Vco_sim_syn2_fpu_add* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_syn2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vco_sim_syn2_fpu_add___nba_comb__TOP__co_sim_syn2__DOT__golden__DOT__add2_add__0\n"); );
    // Init
    CData/*3:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelf->__PVT__u1__DOT__adj_op_out = ((0x7fffffeU 
                                           & ((IData)(
                                                      (vlSelf->u1__DOT____Vcellout__u7__shift_out 
                                                       >> 1U)) 
                                              << 1U)) 
                                          | (1U & ((IData)(vlSelf->u1__DOT____Vcellout__u7__shift_out) 
                                                   | (IData)(vlSelf->__PVT__u1__DOT__sticky))));
    if (vlSelf->__PVT__u1__DOT__expa_lt_expb) {
        vlSelf->__PVT__u1__DOT__fracta_n = (((IData)(
                                                     (0U 
                                                      != 
                                                      (0xffU 
                                                       & (vlSelf->__PVT__opa_r 
                                                          >> 0x17U)))) 
                                             << 0x1aU) 
                                            | (0x3fffff8U 
                                               & (vlSelf->__PVT__opa_r 
                                                  << 3U)));
        vlSelf->__PVT__u1__DOT__fractb_n = vlSelf->__PVT__u1__DOT__adj_op_out;
    } else {
        vlSelf->__PVT__u1__DOT__fracta_n = vlSelf->__PVT__u1__DOT__adj_op_out;
        vlSelf->__PVT__u1__DOT__fractb_n = (((IData)(
                                                     (0U 
                                                      != 
                                                      (0xffU 
                                                       & (vlSelf->__PVT__opb_r 
                                                          >> 0x17U)))) 
                                             << 0x1aU) 
                                            | (0x3fffff8U 
                                               & (vlSelf->__PVT__opb_r 
                                                  << 3U)));
    }
    vlSelf->__PVT__u1__DOT__fractb_lt_fracta = (vlSelf->__PVT__u1__DOT__fractb_n 
                                                > vlSelf->__PVT__u1__DOT__fracta_n);
    __Vtableidx2 = (((IData)(vlSelf->__PVT__u1__DOT__fractb_lt_fracta) 
                     << 3U) | ((4U & ((~ (IData)(vlSelf->__PVT__fpu_op_r1)) 
                                      << 2U)) | ((2U 
                                                  & (vlSelf->__PVT__opb_r 
                                                     >> 0x1eU)) 
                                                 | (vlSelf->__PVT__opa_r 
                                                    >> 0x1fU))));
    vlSelf->__PVT__u1__DOT__sign_d = Vco_sim_syn2__ConstPool__TABLE_hbcbc7a3d_0
        [__Vtableidx2];
}

VL_INLINE_OPT void Vco_sim_syn2_fpu_add___nba_comb__TOP__co_sim_syn2__DOT__golden__DOT__add3_add__0(Vco_sim_syn2_fpu_add* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_syn2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vco_sim_syn2_fpu_add___nba_comb__TOP__co_sim_syn2__DOT__golden__DOT__add3_add__0\n"); );
    // Init
    CData/*3:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    // Body
    vlSelf->__PVT__u1__DOT__adj_op_out = ((0x7fffffeU 
                                           & ((IData)(
                                                      (vlSelf->u1__DOT____Vcellout__u7__shift_out 
                                                       >> 1U)) 
                                              << 1U)) 
                                          | (1U & ((IData)(vlSelf->u1__DOT____Vcellout__u7__shift_out) 
                                                   | (IData)(vlSelf->__PVT__u1__DOT__sticky))));
    if (vlSelf->__PVT__u1__DOT__expa_lt_expb) {
        vlSelf->__PVT__u1__DOT__fracta_n = (((IData)(
                                                     (0U 
                                                      != 
                                                      (0xffU 
                                                       & (vlSelf->__PVT__opa_r 
                                                          >> 0x17U)))) 
                                             << 0x1aU) 
                                            | (0x3fffff8U 
                                               & (vlSelf->__PVT__opa_r 
                                                  << 3U)));
        vlSelf->__PVT__u1__DOT__fractb_n = vlSelf->__PVT__u1__DOT__adj_op_out;
    } else {
        vlSelf->__PVT__u1__DOT__fracta_n = vlSelf->__PVT__u1__DOT__adj_op_out;
        vlSelf->__PVT__u1__DOT__fractb_n = (((IData)(
                                                     (0U 
                                                      != 
                                                      (0xffU 
                                                       & (vlSelf->__PVT__opb_r 
                                                          >> 0x17U)))) 
                                             << 0x1aU) 
                                            | (0x3fffff8U 
                                               & (vlSelf->__PVT__opb_r 
                                                  << 3U)));
    }
    vlSelf->__PVT__u1__DOT__fractb_lt_fracta = (vlSelf->__PVT__u1__DOT__fractb_n 
                                                > vlSelf->__PVT__u1__DOT__fracta_n);
    __Vtableidx3 = (((IData)(vlSelf->__PVT__u1__DOT__fractb_lt_fracta) 
                     << 3U) | ((4U & ((~ (IData)(vlSelf->__PVT__fpu_op_r1)) 
                                      << 2U)) | ((2U 
                                                  & (vlSelf->__PVT__opb_r 
                                                     >> 0x1eU)) 
                                                 | (vlSelf->__PVT__opa_r 
                                                    >> 0x1fU))));
    vlSelf->__PVT__u1__DOT__sign_d = Vco_sim_syn2__ConstPool__TABLE_hbcbc7a3d_0
        [__Vtableidx3];
}

VL_INLINE_OPT void Vco_sim_syn2_fpu_add___nba_comb__TOP__co_sim_syn2__DOT__golden__DOT__add4_add__0(Vco_sim_syn2_fpu_add* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_syn2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vco_sim_syn2_fpu_add___nba_comb__TOP__co_sim_syn2__DOT__golden__DOT__add4_add__0\n"); );
    // Init
    CData/*3:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    // Body
    vlSelf->__PVT__u1__DOT__adj_op_out = ((0x7fffffeU 
                                           & ((IData)(
                                                      (vlSelf->u1__DOT____Vcellout__u7__shift_out 
                                                       >> 1U)) 
                                              << 1U)) 
                                          | (1U & ((IData)(vlSelf->u1__DOT____Vcellout__u7__shift_out) 
                                                   | (IData)(vlSelf->__PVT__u1__DOT__sticky))));
    if (vlSelf->__PVT__u1__DOT__expa_lt_expb) {
        vlSelf->__PVT__u1__DOT__fracta_n = (((IData)(
                                                     (0U 
                                                      != 
                                                      (0xffU 
                                                       & (vlSelf->__PVT__opa_r 
                                                          >> 0x17U)))) 
                                             << 0x1aU) 
                                            | (0x3fffff8U 
                                               & (vlSelf->__PVT__opa_r 
                                                  << 3U)));
        vlSelf->__PVT__u1__DOT__fractb_n = vlSelf->__PVT__u1__DOT__adj_op_out;
    } else {
        vlSelf->__PVT__u1__DOT__fracta_n = vlSelf->__PVT__u1__DOT__adj_op_out;
        vlSelf->__PVT__u1__DOT__fractb_n = (((IData)(
                                                     (0U 
                                                      != 
                                                      (0xffU 
                                                       & (vlSelf->__PVT__opb_r 
                                                          >> 0x17U)))) 
                                             << 0x1aU) 
                                            | (0x3fffff8U 
                                               & (vlSelf->__PVT__opb_r 
                                                  << 3U)));
    }
    vlSelf->__PVT__u1__DOT__fractb_lt_fracta = (vlSelf->__PVT__u1__DOT__fractb_n 
                                                > vlSelf->__PVT__u1__DOT__fracta_n);
    __Vtableidx4 = (((IData)(vlSelf->__PVT__u1__DOT__fractb_lt_fracta) 
                     << 3U) | ((4U & ((~ (IData)(vlSelf->__PVT__fpu_op_r1)) 
                                      << 2U)) | ((2U 
                                                  & (vlSelf->__PVT__opb_r 
                                                     >> 0x1eU)) 
                                                 | (vlSelf->__PVT__opa_r 
                                                    >> 0x1fU))));
    vlSelf->__PVT__u1__DOT__sign_d = Vco_sim_syn2__ConstPool__TABLE_hbcbc7a3d_0
        [__Vtableidx4];
}

VL_INLINE_OPT void Vco_sim_syn2_fpu_add___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__add5_add__0(Vco_sim_syn2_fpu_add* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_syn2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vco_sim_syn2_fpu_add___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__add5_add__0\n"); );
    // Init
    CData/*0:0*/ u4__DOT____VdfgRegularize_he8d392c1_0_8;
    u4__DOT____VdfgRegularize_he8d392c1_0_8 = 0;
    CData/*0:0*/ u4__DOT____VdfgRegularize_he8d392c1_0_10;
    u4__DOT____VdfgRegularize_he8d392c1_0_10 = 0;
    CData/*0:0*/ u4__DOT____VdfgRegularize_he8d392c1_0_19;
    u4__DOT____VdfgRegularize_he8d392c1_0_19 = 0;
    // Body
    vlSelf->__PVT__div_by_zero = vlSelf->__PVT__div_by_zero_o1;
    vlSelf->__PVT__zero = vlSelf->__PVT__zero_o1;
    vlSelf->__PVT__overflow = vlSelf->__PVT__overflow_o1;
    vlSelf->__PVT__underflow = vlSelf->__PVT__underflow_o1;
    if (vlSelf->__PVT__u1__DOT__fractb_lt_fracta) {
        vlSelf->__PVT__fractb = vlSelf->__PVT__u1__DOT__fracta_n;
        vlSelf->__PVT__fracta = vlSelf->__PVT__u1__DOT__fractb_n;
    } else {
        vlSelf->__PVT__fractb = vlSelf->__PVT__u1__DOT__fractb_n;
        vlSelf->__PVT__fracta = vlSelf->__PVT__u1__DOT__fracta_n;
    }
    vlSelf->__PVT__opa_r1 = (0x7fffffffU & vlSelf->__PVT__opa_r);
    vlSelf->__PVT__opa_nan_r = ((~ (IData)(vlSelf->__PVT__opa_nan)) 
                                & (3U == (IData)(vlSelf->__PVT__fpu_op_r2)));
    vlSelf->__PVT__sign = (1U & ((3U == (IData)(vlSelf->__PVT__rmode_r2))
                                  ? (~ (IData)(vlSelf->__PVT__sign_fasu))
                                  : (IData)(vlSelf->__PVT__sign_fasu)));
    vlSelf->__PVT__opb_00 = ((IData)(vlSelf->__PVT__u0__DOT__expb_00) 
                             & (IData)(vlSelf->__PVT__u0__DOT__fractb_00));
    vlSelf->__PVT__opa_00 = ((IData)(vlSelf->__PVT__u0__DOT__expa_00) 
                             & (IData)(vlSelf->__PVT__u0__DOT__fracta_00));
    vlSelf->__PVT__opb_inf = ((IData)(vlSelf->__PVT__u0__DOT__expb_ff) 
                              & (IData)(vlSelf->__PVT__u0__DOT__infb_f_r));
    vlSelf->__PVT__opa_inf = ((IData)(vlSelf->__PVT__u0__DOT__expa_ff) 
                              & (IData)(vlSelf->__PVT__u0__DOT__infa_f_r));
    vlSelf->__PVT__snan = vlSelf->__PVT__snan_o1;
    vlSelf->__PVT__qnan = vlSelf->__PVT__qnan_o1;
    vlSelf->__PVT__opa_dn = vlSelf->__PVT__u0__DOT__expa_00;
    vlSelf->__PVT__opb_dn = vlSelf->__PVT__u0__DOT__expb_00;
    vlSelf->__PVT__opas_r2 = vlSelf->__PVT__opas_r1;
    vlSelf->__PVT__rmode_r3 = vlSelf->__PVT__rmode_r2;
    vlSelf->__PVT__inf = vlSelf->__PVT__inf_o1;
    vlSelf->__PVT__ine = vlSelf->__PVT__ine_o1;
    vlSelf->__PVT__fract_out_q = vlSelf->u3__DOT____VdfgRegularize_h60e48f75_0_0;
    vlSelf->__PVT__exp_r = vlSelf->__PVT__exp_fasu;
    vlSelf->__PVT__div_by_zero_o1 = 0U;
    vlSelf->__PVT__zero_o1 = vlSelf->__PVT__output_zero_fasu;
    vlSelf->__PVT__overflow_o1 = ((IData)(vlSelf->__VdfgRegularize_h16e0ae4d_5_1) 
                                  & (IData)(vlSelf->__PVT__overflow_d));
    vlSelf->__PVT__underflow_o1 = ((IData)(vlSelf->__VdfgRegularize_h16e0ae4d_5_2) 
                                   & (IData)(vlSelf->__PVT__underflow_d));
    vlSelf->__PVT__u0__DOT__fractb_00 = (1U & (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (0x7fffffU 
                                                           & vlSelf->__PVT__opb_r)))));
    vlSelf->__PVT__u0__DOT__fracta_00 = (1U & (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (0x7fffffU 
                                                           & vlSelf->__PVT__opa_r)))));
    vlSelf->__PVT__snan_o1 = vlSelf->__PVT__snan_d;
    vlSelf->__PVT__qnan_o1 = (((IData)(vlSelf->__PVT__snan_d) 
                               | (IData)(vlSelf->__PVT__qnan_d)) 
                              | ((IData)(vlSelf->__PVT__ind_d) 
                                 & (~ (IData)(vlSelf->__PVT__fasu_op_r2))));
    vlSelf->__PVT__u0__DOT__expa_00 = (1U & (~ (IData)(
                                                       (0U 
                                                        != 
                                                        (0xffU 
                                                         & (vlSelf->__PVT__opa_r 
                                                            >> 0x17U))))));
    vlSelf->__PVT__u0__DOT__expb_00 = (1U & (~ (IData)(
                                                       (0U 
                                                        != 
                                                        (0xffU 
                                                         & (vlSelf->__PVT__opb_r 
                                                            >> 0x17U))))));
    vlSelf->__PVT__u4__DOT__op_dn = ((IData)(vlSelf->__PVT__opa_dn) 
                                     | (IData)(vlSelf->__PVT__opb_dn));
    vlSelf->__PVT__opas_r1 = (vlSelf->__PVT__opa_r 
                              >> 0x1fU);
    vlSelf->__PVT__inf_o1 = ((~ ((IData)(vlSelf->__PVT__qnan_d) 
                                 | (IData)(vlSelf->__PVT__snan_d))) 
                             & ((IData)(((0x7f800000U 
                                          == (0x7f800000U 
                                              & vlSelf->__PVT__out_d)) 
                                         & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (0x7fffffU 
                                                        & vlSelf->__PVT__out_d)))))) 
                                | (((IData)(vlSelf->__PVT__inf_d) 
                                    & (~ ((IData)(vlSelf->__PVT__ind_d) 
                                          & (~ (IData)(vlSelf->__PVT__fasu_op_r2))))) 
                                   & (~ ((IData)(vlSelf->__PVT__fpu_op_r3) 
                                         >> 1U)))));
    vlSelf->__PVT__ine_o1 = ((IData)(vlSelf->__VdfgRegularize_h16e0ae4d_5_1) 
                             & (((5U == (IData)(vlSelf->__PVT__fpu_op_r3))
                                  ? (IData)(vlSelf->__PVT__u4__DOT__f2i_ine)
                                  : ((4U == (IData)(vlSelf->__PVT__fpu_op_r3))
                                      ? (0U != (0x1ffffffU 
                                                & (IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_21)))
                                      : (((~ (IData)(vlSelf->__PVT__u4__DOT__dn)) 
                                          & (IData)(
                                                    (vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_21 
                                                     >> 0x18U))) 
                                         | (((~ (IData)(vlSelf->__PVT__u4__DOT__dn)) 
                                             & (IData)(vlSelf->__PVT__u4__DOT__s)) 
                                            | ((IData)(vlSelf->__PVT__u4__DOT__max_num) 
                                               | (3U 
                                                  == (IData)(vlSelf->__PVT__fpu_op_r3))))))) 
                                | ((IData)(vlSelf->__PVT__overflow_d) 
                                   | (IData)(vlSelf->__PVT__underflow_d))));
    vlSelf->__PVT__exp_fasu = ((((~ (IData)(vlSelf->__PVT__u1__DOT__add_d)) 
                                 & ((0xffU & (vlSelf->__PVT__opa_r 
                                              >> 0x17U)) 
                                    == (0xffU & (vlSelf->__PVT__opb_r 
                                                 >> 0x17U)))) 
                                & ((0x7fffffU & vlSelf->__PVT__opa_r) 
                                   == (0x7fffffU & vlSelf->__PVT__opb_r)))
                                ? 0U : (IData)(vlSelf->__PVT__u1__DOT__exp_large));
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
                                                        ? 
                                                       ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                        << 0x14U)
                                                        : 
                                                       ((4U 
                                                         & ((IData)(vlSelf->__PVT__exp_r) 
                                                            - (IData)(0x3dU)))
                                                         ? 
                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                         << 0x14U)
                                                         : 
                                                        ((2U 
                                                          & ((IData)(vlSelf->__PVT__exp_r) 
                                                             - (IData)(0x3dU)))
                                                          ? 
                                                         ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                          << 0x14U)
                                                          : 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                           << 0x14U)
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
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0x2fU)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0x2eU))
                                                          : 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0x2dU)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0x2cU)))
                                                         : 
                                                        ((2U 
                                                          & ((IData)(vlSelf->__PVT__exp_r) 
                                                             - (IData)(0x3dU)))
                                                          ? 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0x2bU)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0x2aU))
                                                          : 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0x29U)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0x28U))))
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
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0x27U)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0x26U))
                                                          : 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0x25U)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0x24U)))
                                                         : 
                                                        ((2U 
                                                          & ((IData)(vlSelf->__PVT__exp_r) 
                                                             - (IData)(0x3dU)))
                                                          ? 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0x23U)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0x22U))
                                                          : 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0x21U)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0x20U))))))
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
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0x1fU)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0x1eU))
                                                          : 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0x1dU)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0x1cU)))
                                                         : 
                                                        ((2U 
                                                          & ((IData)(vlSelf->__PVT__exp_r) 
                                                             - (IData)(0x3dU)))
                                                          ? 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0x1bU)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0x1aU))
                                                          : 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0x19U)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0x18U))))
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
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0x17U)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0x16U))
                                                          : 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0x15U)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0x14U)))
                                                         : 
                                                        ((2U 
                                                          & ((IData)(vlSelf->__PVT__exp_r) 
                                                             - (IData)(0x3dU)))
                                                          ? 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0x13U)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0x12U))
                                                          : 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0x11U)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0x10U)))))
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
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0xfU)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0xeU))
                                                          : 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0xdU)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0xcU)))
                                                         : 
                                                        ((2U 
                                                          & ((IData)(vlSelf->__PVT__exp_r) 
                                                             - (IData)(0x3dU)))
                                                          ? 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0xbU)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 0xaU))
                                                          : 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 9U)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 8U))))
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
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 7U)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 6U))
                                                          : 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 5U)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 4U)))
                                                         : 
                                                        ((2U 
                                                          & ((IData)(vlSelf->__PVT__exp_r) 
                                                             - (IData)(0x3dU)))
                                                          ? 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 3U)
                                                           : 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 2U))
                                                          : 
                                                         ((1U 
                                                           & ((IData)(vlSelf->__PVT__exp_r) 
                                                              - (IData)(1U)))
                                                           ? 
                                                          VL_SHIFTL_QQI(48,48,32, 
                                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                         << 0x14U), 1U)
                                                           : 
                                                          ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                           << 0x14U))))))));
    u4__DOT____VdfgRegularize_he8d392c1_0_8 = ((IData)(vlSelf->__PVT__exp_r) 
                                               < ((0U 
                                                   == (IData)(vlSelf->__PVT__rmode_r3))
                                                   ? 0x7eU
                                                   : 0x7fU));
    vlSelf->__PVT__u4__DOT__u6__DOT__fi_ldz_r0 = ((0x8000000U 
                                                   & vlSelf->__PVT__fract_out_q)
                                                   ? 1U
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (3U 
                                                     & (vlSelf->__PVT__fract_out_q 
                                                        >> 0x1aU)))
                                                    ? 2U
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->__PVT__fract_out_q 
                                                         >> 0x19U)))
                                                     ? 3U
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (0xfU 
                                                       & (vlSelf->__PVT__fract_out_q 
                                                          >> 0x18U)))
                                                      ? 4U
                                                      : 
                                                     ((1U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->__PVT__fract_out_q 
                                                           >> 0x17U)))
                                                       ? 5U
                                                       : 
                                                      ((1U 
                                                        == 
                                                        (0x3fU 
                                                         & (vlSelf->__PVT__fract_out_q 
                                                            >> 0x16U)))
                                                        ? 6U
                                                        : 
                                                       ((1U 
                                                         == 
                                                         (0x7fU 
                                                          & (vlSelf->__PVT__fract_out_q 
                                                             >> 0x15U)))
                                                         ? 7U
                                                         : 
                                                        ((1U 
                                                          == 
                                                          (0xffU 
                                                           & (vlSelf->__PVT__fract_out_q 
                                                              >> 0x14U)))
                                                          ? 8U
                                                          : 
                                                         ((1U 
                                                           == 
                                                           (0x1ffU 
                                                            & (vlSelf->__PVT__fract_out_q 
                                                               >> 0x13U)))
                                                           ? 9U
                                                           : 
                                                          ((1U 
                                                            == 
                                                            (0x3ffU 
                                                             & (vlSelf->__PVT__fract_out_q 
                                                                >> 0x12U)))
                                                            ? 0xaU
                                                            : 
                                                           ((1U 
                                                             == 
                                                             (0x7ffU 
                                                              & (vlSelf->__PVT__fract_out_q 
                                                                 >> 0x11U)))
                                                             ? 0xbU
                                                             : 
                                                            ((1U 
                                                              == 
                                                              (0xfffU 
                                                               & (vlSelf->__PVT__fract_out_q 
                                                                  >> 0x10U)))
                                                              ? 0xcU
                                                              : 
                                                             ((1U 
                                                               == 
                                                               (0x1fffU 
                                                                & (vlSelf->__PVT__fract_out_q 
                                                                   >> 0xfU)))
                                                               ? 0xdU
                                                               : 
                                                              ((1U 
                                                                == 
                                                                (0x3fffU 
                                                                 & (vlSelf->__PVT__fract_out_q 
                                                                    >> 0xeU)))
                                                                ? 0xeU
                                                                : 
                                                               ((1U 
                                                                 == 
                                                                 (0x7fffU 
                                                                  & (vlSelf->__PVT__fract_out_q 
                                                                     >> 0xdU)))
                                                                 ? 0xfU
                                                                 : 
                                                                ((1U 
                                                                  == 
                                                                  (0xffffU 
                                                                   & (vlSelf->__PVT__fract_out_q 
                                                                      >> 0xcU)))
                                                                  ? 0x10U
                                                                  : 
                                                                 ((1U 
                                                                   == 
                                                                   (0x1ffffU 
                                                                    & (vlSelf->__PVT__fract_out_q 
                                                                       >> 0xbU)))
                                                                   ? 0x11U
                                                                   : 
                                                                  ((1U 
                                                                    == 
                                                                    (0x3ffffU 
                                                                     & (vlSelf->__PVT__fract_out_q 
                                                                        >> 0xaU)))
                                                                    ? 0x12U
                                                                    : 
                                                                   ((1U 
                                                                     == 
                                                                     (0x7ffffU 
                                                                      & (vlSelf->__PVT__fract_out_q 
                                                                         >> 9U)))
                                                                     ? 0x13U
                                                                     : 
                                                                    ((1U 
                                                                      == 
                                                                      (0xfffffU 
                                                                       & (vlSelf->__PVT__fract_out_q 
                                                                          >> 8U)))
                                                                      ? 0x14U
                                                                      : 
                                                                     ((1U 
                                                                       == 
                                                                       (0x1fffffU 
                                                                        & (vlSelf->__PVT__fract_out_q 
                                                                           >> 7U)))
                                                                       ? 0x15U
                                                                       : 
                                                                      ((1U 
                                                                        == 
                                                                        (0x3fffffU 
                                                                         & (vlSelf->__PVT__fract_out_q 
                                                                            >> 6U)))
                                                                        ? 0x16U
                                                                        : 
                                                                       ((1U 
                                                                         == 
                                                                         (0x7fffffU 
                                                                          & (vlSelf->__PVT__fract_out_q 
                                                                             >> 5U)))
                                                                         ? 0x17U
                                                                         : 
                                                                        ((1U 
                                                                          == 
                                                                          (0xffffffU 
                                                                           & (vlSelf->__PVT__fract_out_q 
                                                                              >> 4U)))
                                                                          ? 0x18U
                                                                          : 
                                                                         ((1U 
                                                                           == 
                                                                           (0x1ffffffU 
                                                                            & (vlSelf->__PVT__fract_out_q 
                                                                               >> 3U)))
                                                                           ? 0x19U
                                                                           : 
                                                                          ((1U 
                                                                            == 
                                                                            (0x3ffffffU 
                                                                             & (vlSelf->__PVT__fract_out_q 
                                                                                >> 2U)))
                                                                            ? 0x1aU
                                                                            : 
                                                                           ((1U 
                                                                             == 
                                                                             (0x7ffffffU 
                                                                              & (vlSelf->__PVT__fract_out_q 
                                                                                >> 1U)))
                                                                             ? 0x1bU
                                                                             : 
                                                                            ((1U 
                                                                              == vlSelf->__PVT__fract_out_q)
                                                                              ? 0x1cU
                                                                              : 
                                                                             ((1U 
                                                                               == 
                                                                               (vlSelf->__PVT__fract_out_q 
                                                                                << 1U))
                                                                               ? 0x1dU
                                                                               : 
                                                                              ((1U 
                                                                                == 
                                                                                (vlSelf->__PVT__fract_out_q 
                                                                                << 2U))
                                                                                ? 0x1eU
                                                                                : 
                                                                               ((1U 
                                                                                == 
                                                                                (vlSelf->__PVT__fract_out_q 
                                                                                << 3U))
                                                                                 ? 0x1fU
                                                                                 : 
                                                                                ((1U 
                                                                                == 
                                                                                (vlSelf->__PVT__fract_out_q 
                                                                                << 4U))
                                                                                 ? 0x20U
                                                                                 : 
                                                                                ((1ULL 
                                                                                == 
                                                                                ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                                << 5U))
                                                                                 ? 0x21U
                                                                                 : 
                                                                                ((1ULL 
                                                                                == 
                                                                                ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                                << 6U))
                                                                                 ? 0x22U
                                                                                 : 
                                                                                ((1ULL 
                                                                                == 
                                                                                ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                                << 7U))
                                                                                 ? 0x23U
                                                                                 : 
                                                                                ((1ULL 
                                                                                == 
                                                                                ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                                << 8U))
                                                                                 ? 0x24U
                                                                                 : 
                                                                                ((1ULL 
                                                                                == 
                                                                                ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                                << 9U))
                                                                                 ? 0x25U
                                                                                 : 
                                                                                ((1ULL 
                                                                                == 
                                                                                ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                                << 0xaU))
                                                                                 ? 0x26U
                                                                                 : 
                                                                                ((1ULL 
                                                                                == 
                                                                                ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                                << 0xbU))
                                                                                 ? 0x27U
                                                                                 : 
                                                                                ((1ULL 
                                                                                == 
                                                                                ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                                << 0xcU))
                                                                                 ? 0x28U
                                                                                 : 
                                                                                ((1ULL 
                                                                                == 
                                                                                ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                                << 0xdU))
                                                                                 ? 0x29U
                                                                                 : 
                                                                                ((1ULL 
                                                                                == 
                                                                                ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                                << 0xeU))
                                                                                 ? 0x2aU
                                                                                 : 
                                                                                ((1ULL 
                                                                                == 
                                                                                ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                                << 0xfU))
                                                                                 ? 0x2bU
                                                                                 : 
                                                                                ((1ULL 
                                                                                == 
                                                                                ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                                << 0x10U))
                                                                                 ? 0x2cU
                                                                                 : 
                                                                                ((1ULL 
                                                                                == 
                                                                                ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                                << 0x11U))
                                                                                 ? 0x2dU
                                                                                 : 
                                                                                ((1ULL 
                                                                                == 
                                                                                ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                                << 0x12U))
                                                                                 ? 0x2eU
                                                                                 : 
                                                                                ((1ULL 
                                                                                == 
                                                                                ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                                << 0x13U))
                                                                                 ? 0x2fU
                                                                                 : 0x30U)))))))))))))))))))))))))))))))))))))))))))))));
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
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_23 
        = (0x1ffU & ((0x8000000U & vlSelf->__PVT__fract_out_q)
                      ? ((IData)(1U) + (IData)(vlSelf->__PVT__exp_r))
                      : (IData)(vlSelf->__PVT__u4__DOT__exp_next_mi)));
    u4__DOT____VdfgRegularize_he8d392c1_0_10 = ((IData)(vlSelf->__PVT__opas_r2) 
                                                & (IData)(u4__DOT____VdfgRegularize_he8d392c1_0_8));
    vlSelf->__PVT__fpu_op_r3 = vlSelf->__PVT__fpu_op_r2;
    vlSelf->__PVT__u4__DOT__div_exp1 = (0x1ffU & (((IData)(vlSelf->__PVT__exp_r) 
                                                   - (IData)(1U)) 
                                                  + (IData)(vlSelf->__PVT__u4__DOT__fi_ldz_2)));
    vlSelf->__PVT__u4__DOT__f2i_max = (((~ (IData)(vlSelf->__PVT__opas_r2)) 
                                        & (0x9dU < (IData)(vlSelf->__PVT__exp_r))) 
                                       | ((IData)(u4__DOT____VdfgRegularize_he8d392c1_0_10) 
                                          & ((0U != vlSelf->__PVT__fract_out_q) 
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
                                                             != vlSelf->__PVT__fract_out_q))) 
                                                 | (3U 
                                                    != (IData)(vlSelf->__PVT__rmode_r3))))));
    vlSelf->__PVT__u4__DOT__div_inf = ((IData)(vlSelf->__PVT__opb_dn) 
                                       & ((~ (IData)(vlSelf->__PVT__opa_dn)) 
                                          & (0x7fU 
                                             > (0xffU 
                                                & (IData)(vlSelf->__PVT__u4__DOT__div_exp1)))));
    vlSelf->__PVT__fpu_op_r2 = vlSelf->__PVT__fpu_op_r1;
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_46 
        = ((IData)(vlSelf->__PVT__u4__DOT__f2i_max) 
           & (5U == (IData)(vlSelf->__PVT__fpu_op_r3)));
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_37 
        = ((2U == (IData)(vlSelf->__PVT__fpu_op_r3)) 
           | (3U == (IData)(vlSelf->__PVT__fpu_op_r3)));
    u4__DOT____VdfgRegularize_he8d392c1_0_19 = ((5U 
                                                 == (IData)(vlSelf->__PVT__fpu_op_r3)) 
                                                | (4U 
                                                   == (IData)(vlSelf->__PVT__fpu_op_r3)));
    vlSelf->__PVT__u4__DOT__dn = ((2U != (IData)(vlSelf->__PVT__fpu_op_r3)) 
                                  & ((3U != (IData)(vlSelf->__PVT__fpu_op_r3)) 
                                     & ((~ (IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->__PVT__exp_r)))) 
                                        | ((~ (vlSelf->__PVT__fract_out_q 
                                               >> 0x1bU)) 
                                           & ((IData)(vlSelf->__PVT__u4__DOT__exp_next_mi) 
                                              >> 8U)))));
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_53 
        = ((~ (IData)(vlSelf->__PVT__u4__DOT__dn)) 
           & (5U != (IData)(vlSelf->__PVT__fpu_op_r3)));
    vlSelf->__PVT__u4__DOT__exp_out = (0xffU & ((3U 
                                                 == (IData)(vlSelf->__PVT__fpu_op_r3))
                                                 ? 
                                                (((IData)(vlSelf->__PVT__opa_dn) 
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
                                                     & ((~ (IData)(
                                                                   (0U 
                                                                    != (IData)(vlSelf->__PVT__exp_r)))) 
                                                        | (IData)(vlSelf->__PVT__opa_dn)))
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_23) 
                                                     - (IData)(1U))))))
                                                 : 
                                                ((IData)(u4__DOT____VdfgRegularize_he8d392c1_0_19)
                                                  ? 
                                                 ((5U 
                                                   == (IData)(vlSelf->__PVT__fpu_op_r3))
                                                   ? 
                                                  ((IData)(vlSelf->__PVT__u4__DOT__f2i_zero)
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelf->__PVT__u4__DOT__f2i_max)
                                                     ? 0xffU
                                                     : 0U))
                                                   : 
                                                  ((0U 
                                                    != vlSelf->__PVT__fract_out_q)
                                                    ? 
                                                   ((IData)(0x9eU) 
                                                    - (IData)(vlSelf->__PVT__u4__DOT__u6__DOT__fi_ldz_r0))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__opas_r2)
                                                     ? 0x9eU
                                                     : 0U)))
                                                  : 
                                                 (((2U 
                                                    == (IData)(vlSelf->__PVT__fpu_op_r3)) 
                                                   & ((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_23) 
                                                      >> 8U))
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlSelf->__PVT__u4__DOT__dn)
                                                    ? 
                                                   (3U 
                                                    & (vlSelf->__PVT__fract_out_q 
                                                       >> 0x1aU))
                                                    : (IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_23))))));
    vlSelf->__PVT__u4__DOT__exp_out_fe = (IData)((0xfeU 
                                                  == (IData)(vlSelf->__PVT__u4__DOT__exp_out)));
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_38 
        = ((IData)(vlSelf->__PVT__sign) & (0xffU == (IData)(vlSelf->__PVT__u4__DOT__exp_out)));
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_64 
        = (1U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__u4__DOT__exp_out)))) 
                 | ((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_23) 
                    >> 8U)));
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_14 
        = (0x1ffU & ((0U != (IData)(vlSelf->__PVT__exp_r))
                      ? ((IData)(vlSelf->__PVT__exp_r) 
                         - (IData)(1U)) : (IData)(vlSelf->__PVT__u4__DOT__exp_out)));
    vlSelf->__PVT__u4__DOT__z = (1U & (((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_14) 
                                        >> 8U) | ((~ (IData)(
                                                             (0U 
                                                              != (IData)(vlSelf->__PVT__exp_r)))) 
                                                  | ((0U 
                                                      != (IData)(vlSelf->__PVT__exp_r)) 
                                                     & (IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_64)))));
    vlSelf->__PVT__u4__DOT__shift_right = (0xffU & 
                                           ((3U == (IData)(vlSelf->__PVT__fpu_op_r3))
                                             ? ((IData)(2U) 
                                                + (IData)(vlSelf->__PVT__exp_r))
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
                                                      ? 
                                                     ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                      << 0x14U)
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                       ? 
                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                       << 0x14U)
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                        ? 
                                                       ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                        << 0x14U)
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                         << 0x14U)
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
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x2fU)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x2eU))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x2dU)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x2cU)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x2bU)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x2aU))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x29U)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x28U))))
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
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x27U)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x26U))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x25U)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x24U)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x23U)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x22U))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x21U)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x20U))))))
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
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x1fU)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x1eU))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x1dU)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x1cU)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x1bU)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x1aU))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x19U)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x18U))))
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
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x17U)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x16U))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x15U)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x14U)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x13U)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x12U))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x11U)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x10U)))))
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
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0xfU)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0xeU))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0xdU)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0xcU)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0xbU)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0xaU))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 9U)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 8U))))
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
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 7U)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 6U))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 5U)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 4U)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 3U)
                                                         : 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 2U))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_right))
                                                         ? 
                                                        VL_SHIFTR_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 1U)
                                                         : 
                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                         << 0x14U))))))));
    vlSelf->__PVT__u4__DOT__shift_left = (0xffU & (
                                                   (3U 
                                                    == (IData)(vlSelf->__PVT__fpu_op_r3))
                                                    ? 
                                                   (((~ (IData)(
                                                                (0U 
                                                                 != (IData)(vlSelf->__PVT__u4__DOT__exp_out)))) 
                                                     & (IData)(vlSelf->__PVT__u4__DOT__op_dn))
                                                     ? 
                                                    ((0U 
                                                      != (IData)(vlSelf->__PVT__exp_r))
                                                      ? (IData)(vlSelf->__PVT__exp_r)
                                                      : 0U)
                                                     : 
                                                    ((1U 
                                                      & ((~ (IData)(vlSelf->__PVT__u4__DOT__op_dn)) 
                                                         & (~ (IData)(
                                                                      (0U 
                                                                       != (IData)(vlSelf->__PVT__u4__DOT__exp_out))))))
                                                      ? (IData)(vlSelf->__PVT__exp_r)
                                                      : (IData)(vlSelf->__PVT__u4__DOT__u6__DOT__fi_ldz_r0)))
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->__PVT__fpu_op_r3))
                                                     ? 
                                                    ((IData)(vlSelf->__PVT__u4__DOT__z)
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
                                                      ? 
                                                     ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                      << 0x14U)
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                       ? 
                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                       << 0x14U)
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                        ? 
                                                       ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                        << 0x14U)
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                         << 0x14U)
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
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x2fU)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x2eU))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x2dU)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x2cU)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x2bU)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x2aU))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x29U)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x28U))))
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
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x27U)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x26U))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x25U)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x24U)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x23U)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x22U))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x21U)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x20U))))))
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
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x1fU)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x1eU))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x1dU)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x1cU)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x1bU)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x1aU))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x19U)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x18U))))
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
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x17U)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x16U))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x15U)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x14U)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x13U)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x12U))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x11U)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0x10U)))))
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
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0xfU)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0xeU))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0xdU)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0xcU)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0xbU)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 0xaU))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 9U)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 8U))))
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
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 7U)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 6U))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 5U)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 4U)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 3U)
                                                         : 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 2U))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__u4__DOT__shift_left))
                                                         ? 
                                                        VL_SHIFTL_QQI(48,48,32, 
                                                                      ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                                       << 0x14U), 1U)
                                                         : 
                                                        ((QData)((IData)(vlSelf->__PVT__fract_out_q)) 
                                                         << 0x14U))))))));
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_21 
        = (((3U == (IData)(vlSelf->__PVT__fpu_op_r3)) 
            | ((2U != (IData)(vlSelf->__PVT__fpu_op_r3)) 
               | ((0U != (IData)(vlSelf->__PVT__exp_r)) 
                  | (IData)(vlSelf->__PVT__u4__DOT__z))))
            ? (((0U != (3U & ((IData)(vlSelf->__PVT__u4__DOT__shift_left) 
                              >> 6U))) | ((IData)(vlSelf->__PVT__u4__DOT__f2i_zero) 
                                          & (5U == (IData)(vlSelf->__PVT__fpu_op_r3))))
                ? 0ULL : vlSelf->__PVT__u4__DOT__fract_in_shftl_1)
            : ((0U != (3U & ((IData)(vlSelf->__PVT__u4__DOT__shift_right) 
                             >> 6U))) ? 0ULL : vlSelf->__PVT__u4__DOT__fract_in_shftr_1));
    vlSelf->__PVT__u4__DOT__f2i_ine = (((IData)(vlSelf->__PVT__u4__DOT__f2i_zero) 
                                        & ((~ (IData)(vlSelf->__PVT__opas_r2)) 
                                           & (0U != vlSelf->__PVT__fract_out_q))) 
                                       | ((0U != (0x1ffffffU 
                                                  & (IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_21))) 
                                          | (((IData)(vlSelf->__PVT__u4__DOT__f2i_zero) 
                                              & ((0x80U 
                                                  > (IData)(vlSelf->__PVT__exp_r)) 
                                                 & ((0U 
                                                     != vlSelf->__PVT__fract_out_q) 
                                                    & (IData)(vlSelf->__PVT__opas_r2)))) 
                                             | ((IData)(vlSelf->__PVT__u4__DOT__f2i_max) 
                                                & ((3U 
                                                    == (IData)(vlSelf->__PVT__rmode_r3)) 
                                                   & (0x80U 
                                                      > (IData)(vlSelf->__PVT__exp_r)))))));
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_27 
        = (IData)((0x3000000ULL == (0x3000000ULL & vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_21)));
    vlSelf->__PVT__u4__DOT__s = (((3U == (IData)(vlSelf->__PVT__fpu_op_r3)) 
                                  & (IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_64))
                                  ? (0U != (0x1ffffffU 
                                            & (IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_21)))
                                  : ((0U != (0xffffffU 
                                             & (IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_21))) 
                                     | ((IData)((vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_21 
                                                 >> 0x18U)) 
                                        & (3U == (IData)(vlSelf->__PVT__fpu_op_r3)))));
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_55 
        = (0xffffffU & ((0x7fffffU & (IData)((vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_21 
                                              >> 0x19U))) 
                        + ((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_27) 
                           | ((IData)((vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_21 
                                       >> 0x18U)) & (IData)(vlSelf->__PVT__u4__DOT__s)))));
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_30 
        = (1U & ((IData)((vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_21 
                          >> 0x18U)) | (IData)(vlSelf->__PVT__u4__DOT__s)));
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_54 
        = (0xffffffU & ((0x7fffffU & (IData)((vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_21 
                                              >> 0x19U))) 
                        + ((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_37)
                            ? ((~ (IData)(vlSelf->__PVT__sign)) 
                               & ((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_30) 
                                  | (3U == (IData)(vlSelf->__PVT__fpu_op_r3))))
                            : ((5U == (IData)(vlSelf->__PVT__fpu_op_r3))
                                ? ((2U == (IData)(vlSelf->__PVT__rmode_r3)) 
                                   & (((0U != (0xfU 
                                               & vlSelf->__PVT__fract_out_q)) 
                                       & ((~ (IData)(vlSelf->__PVT__opas_r2)) 
                                          & (0x80U 
                                             > (IData)(vlSelf->__PVT__exp_r)))) 
                                      | (0U != (0x1ffffffU 
                                                & (IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_21)))))
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
                                                  ((IData)(vlSelf->__PVT__u4__DOT__exp_out) 
                                                   + 
                                                   (1U 
                                                    & (vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_54 
                                                       >> 0x17U)))));
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
                                           & ((0xffU 
                                               == (IData)(vlSelf->__PVT__exp_r)) 
                                              & ((0x18U 
                                                  > (IData)(vlSelf->__PVT__u4__DOT__fi_ldz_2)) 
                                                 & (0xfeU 
                                                    != (IData)(vlSelf->__PVT__u4__DOT__exp_out)))))) 
                                       | ((3U == (IData)(vlSelf->__PVT__fpu_op_r3)) 
                                          & (((1U == (IData)(vlSelf->__PVT__rmode_r3)) 
                                              & ((IData)(vlSelf->__PVT__u4__DOT__div_inf) 
                                                 | (0xffU 
                                                    == (IData)(vlSelf->__PVT__u4__DOT__exp_out)))) 
                                             | (((IData)(vlSelf->__PVT__rmode_r3) 
                                                 >> 1U) 
                                                & (((IData)(vlSelf->__PVT__sign) 
                                                    & (((vlSelf->__PVT__fract_out_q 
                                                         >> 0x1bU) 
                                                        & (IData)(vlSelf->__PVT__u4__DOT__div_inf)) 
                                                       | (((~ 
                                                            ((IData)(vlSelf->__PVT__u4__DOT__exp_out_rnd) 
                                                             >> 7U)) 
                                                           & ((~ 
                                                               (((~ (IData)(
                                                                            (0U 
                                                                             != 
                                                                             (0x7fU 
                                                                              & (IData)(vlSelf->__PVT__exp_r))))) 
                                                                 & ((IData)(vlSelf->__PVT__exp_r) 
                                                                    >> 7U)) 
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
                                                                  > (IData)(vlSelf->__PVT__u4__DOT__fi_ldz_2)))))))))));
    vlSelf->__PVT__u4__DOT__inf_out = ((((IData)(vlSelf->__PVT__rmode_r3) 
                                         >> 1U) & ((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_37) 
                                                   & ((~ (IData)(vlSelf->__PVT__sign)) 
                                                      & ((3U 
                                                          != (IData)(vlSelf->__PVT__fpu_op_r3)) 
                                                         & (0xffU 
                                                            == (IData)(vlSelf->__PVT__exp_r)))))) 
                                       | (((IData)(vlSelf->__PVT__u4__DOT__div_inf) 
                                           & ((3U == (IData)(vlSelf->__PVT__fpu_op_r3)) 
                                              & ((0U 
                                                  == (IData)(vlSelf->__PVT__rmode_r3)) 
                                                 | (((IData)(vlSelf->__PVT__rmode_r3) 
                                                     >> 1U) 
                                                    & ((~ (IData)(
                                                                  (0xffU 
                                                                   == (IData)(vlSelf->__PVT__exp_r)))) 
                                                       & (~ (IData)(vlSelf->__PVT__sign))))))) 
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
    vlSelf->__PVT__u4__DOT__overflow_fdiv = ((IData)(vlSelf->__PVT__u4__DOT__inf_out) 
                                             | (((0U 
                                                  != (IData)(vlSelf->__PVT__rmode_r3)) 
                                                 & (IData)(vlSelf->__PVT__u4__DOT__max_num)) 
                                                | (((IData)(vlSelf->__PVT__exp_r) 
                                                    >> 7U) 
                                                   & ((IData)(vlSelf->__PVT__u4__DOT__op_dn) 
                                                      & (0xffU 
                                                         == (IData)(vlSelf->__PVT__u4__DOT__exp_out))))));
    vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_51 
        = ((IData)(vlSelf->__PVT__u4__DOT__inf_out) 
           | (IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_46));
    vlSelf->__PVT__u4__DOT__ovf0 = (((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_51) 
                                     | ((~ (IData)(vlSelf->__PVT__u4__DOT__max_num)) 
                                        & (0xffU == (IData)(vlSelf->__PVT__u4__DOT__exp_out_rnd)))) 
                                    & ((1U != (IData)(vlSelf->__PVT__rmode_r3)) 
                                       & (5U != (IData)(vlSelf->__PVT__fpu_op_r3))));
    vlSelf->__PVT__u4__DOT__exp_out_final = ((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_51)
                                              ? 0xffU
                                              : ((IData)(vlSelf->__PVT__u4__DOT__max_num)
                                                  ? 0xfeU
                                                  : (IData)(vlSelf->__PVT__u4__DOT__exp_out_rnd)));
    if ((3U == (IData)(vlSelf->__PVT__fpu_op_r3))) {
        vlSelf->__PVT__overflow_d = vlSelf->__PVT__u4__DOT__overflow_fdiv;
        vlSelf->__PVT__underflow_d = (1U & ((~ (IData)(vlSelf->__PVT__u4__DOT__inf_out)) 
                                            & ((~ (IData)(vlSelf->__PVT__u4__DOT__max_num)) 
                                               & ((0xffU 
                                                   != (IData)(vlSelf->__PVT__u4__DOT__exp_out_final)) 
                                                  & (((0U 
                                                       != 
                                                       (0x1ffffffU 
                                                        & (IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_21))) 
                                                      & ((~ (IData)(vlSelf->__PVT__opb_dn)) 
                                                         & (~ (IData)(
                                                                      (0U 
                                                                       != (IData)(vlSelf->__PVT__u4__DOT__exp_out)))))) 
                                                     | (((IData)(vlSelf->__PVT__u4__DOT__op_dn) 
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
                                                                       == (IData)(vlSelf->__PVT__exp_r))))))))))));
    } else {
        vlSelf->__PVT__overflow_d = ((IData)(vlSelf->__PVT__u4__DOT__ovf0) 
                                     | ((~ (IData)(vlSelf->__PVT__u4__DOT__dn)) 
                                        & (0xffU == (IData)(vlSelf->__PVT__u4__DOT__exp_out))));
        vlSelf->__PVT__underflow_d = (1U & ((2U == (IData)(vlSelf->__PVT__fpu_op_r3))
                                             ? ((0U 
                                                 != 
                                                 (0x1ffffffU 
                                                  & (IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_21))) 
                                                & ((~ (IData)(
                                                              (0xffU 
                                                               == (IData)(vlSelf->__PVT__exp_r)))) 
                                                   & (IData)(vlSelf->__PVT__u4__DOT__z)))
                                             : ((~ 
                                                 (vlSelf->__PVT__fract_out_q 
                                                  >> 0x1bU)) 
                                                & ((~ (IData)(vlSelf->__PVT__u4__DOT__dn)) 
                                                   & ((IData)(vlSelf->u4__DOT____VdfgRegularize_he8d392c1_0_23) 
                                                      >> 8U)))));
    }
}

VL_INLINE_OPT void Vco_sim_syn2_fpu_add___nba_comb__TOP__co_sim_syn2__DOT__golden__DOT__add5_add__0(Vco_sim_syn2_fpu_add* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_syn2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vco_sim_syn2_fpu_add___nba_comb__TOP__co_sim_syn2__DOT__golden__DOT__add5_add__0\n"); );
    // Init
    CData/*3:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    // Body
    vlSelf->__PVT__u1__DOT__adj_op_out = ((0x7fffffeU 
                                           & ((IData)(
                                                      (vlSelf->u1__DOT____Vcellout__u7__shift_out 
                                                       >> 1U)) 
                                              << 1U)) 
                                          | (1U & ((IData)(vlSelf->u1__DOT____Vcellout__u7__shift_out) 
                                                   | (IData)(vlSelf->__PVT__u1__DOT__sticky))));
    if (vlSelf->__PVT__u1__DOT__expa_lt_expb) {
        vlSelf->__PVT__u1__DOT__fracta_n = (((IData)(
                                                     (0U 
                                                      != 
                                                      (0xffU 
                                                       & (vlSelf->__PVT__opa_r 
                                                          >> 0x17U)))) 
                                             << 0x1aU) 
                                            | (0x3fffff8U 
                                               & (vlSelf->__PVT__opa_r 
                                                  << 3U)));
        vlSelf->__PVT__u1__DOT__fractb_n = vlSelf->__PVT__u1__DOT__adj_op_out;
    } else {
        vlSelf->__PVT__u1__DOT__fracta_n = vlSelf->__PVT__u1__DOT__adj_op_out;
        vlSelf->__PVT__u1__DOT__fractb_n = (((IData)(
                                                     (0U 
                                                      != 
                                                      (0xffU 
                                                       & (vlSelf->__PVT__opb_r 
                                                          >> 0x17U)))) 
                                             << 0x1aU) 
                                            | (0x3fffff8U 
                                               & (vlSelf->__PVT__opb_r 
                                                  << 3U)));
    }
    vlSelf->__PVT__u1__DOT__fractb_lt_fracta = (vlSelf->__PVT__u1__DOT__fractb_n 
                                                > vlSelf->__PVT__u1__DOT__fracta_n);
    __Vtableidx5 = (((IData)(vlSelf->__PVT__u1__DOT__fractb_lt_fracta) 
                     << 3U) | ((4U & ((~ (IData)(vlSelf->__PVT__fpu_op_r1)) 
                                      << 2U)) | ((2U 
                                                  & (vlSelf->__PVT__opb_r 
                                                     >> 0x1eU)) 
                                                 | (vlSelf->__PVT__opa_r 
                                                    >> 0x1fU))));
    vlSelf->__PVT__u1__DOT__sign_d = Vco_sim_syn2__ConstPool__TABLE_hbcbc7a3d_0
        [__Vtableidx5];
}
