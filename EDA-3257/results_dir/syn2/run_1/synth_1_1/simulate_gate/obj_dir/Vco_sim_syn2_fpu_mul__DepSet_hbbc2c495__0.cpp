// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vco_sim_syn2.h for the primary calling header

#include "Vco_sim_syn2__pch.h"
#include "Vco_sim_syn2__Syms.h"
#include "Vco_sim_syn2_fpu_mul.h"
#include "Vco_sim_syn2_post_norm.h"

VL_INLINE_OPT void Vco_sim_syn2_fpu_mul___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__1(Vco_sim_syn2_fpu_mul* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_syn2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vco_sim_syn2_fpu_mul___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__1\n"); );
    // Init
    CData/*0:0*/ __VdfgRegularize_h62b27241_3_10;
    __VdfgRegularize_h62b27241_3_10 = 0;
    // Body
    vlSelf->out = vlSelf->__PVT__out_o1;
    vlSelf->__PVT__out_o1 = ((0x7fffffffU & vlSelf->__PVT__out_o1) 
                             | (((~ ((IData)(vlSelf->__PVT__snan_d) 
                                     | (IData)(vlSelf->__PVT__qnan_d))) 
                                 & (((IData)(vlSelf->__PVT__sign_exe_r) 
                                     & ((IData)(vlSelf->__VdfgRegularize_h62b27241_3_5) 
                                        | (IData)(vlSelf->__VdfgRegularize_h62b27241_3_4)))
                                     ? (~ (IData)(vlSelf->__PVT__sign_mul_r))
                                     : (IData)(vlSelf->__PVT__sign_mul_r))) 
                                << 0x1fU));
    vlSelf->__PVT__out_o1 = ((0x80000000U & vlSelf->__PVT__out_o1) 
                             | (((((((2U == (IData)(vlSelf->__PVT__fpu_op_r3)) 
                                     & (IData)(vlSelf->__VdfgRegularize_h62b27241_3_9)) 
                                    | ((3U == (IData)(vlSelf->__PVT__fpu_op_r3)) 
                                       & ((IData)(vlSelf->__PVT__opa_inf) 
                                          | (IData)(vlSelf->__PVT__opb_00)))) 
                                   | (IData)(vlSelf->__PVT__inf_d)) 
                                  | (IData)(vlSelf->__PVT__snan_d)) 
                                 | (IData)(vlSelf->__PVT__qnan_d))
                                 ? (((IData)(vlSelf->__VdfgRegularize_h62b27241_3_3) 
                                     | (IData)(vlSelf->__VdfgRegularize_h62b27241_3_7))
                                     ? 0x7fc00001U : 0x7f800000U)
                                 : vlSelf->__PVT__u4->__PVT__out));
    vlSelf->__VdfgRegularize_h62b27241_3_5 = ((IData)(vlSelf->__PVT__opa_00) 
                                              & (IData)(vlSelf->__PVT__opb_inf));
    vlSelf->__VdfgRegularize_h62b27241_3_9 = ((IData)(vlSelf->__VdfgRegularize_h62b27241_3_12) 
                                              & (0U 
                                                 == (IData)(vlSelf->__PVT__rmode_r3)));
    vlSelf->__PVT__sign_mul_r = vlSelf->__PVT__sign_mul;
    vlSelf->__PVT__sign_exe_r = vlSelf->__PVT__sign_exe;
    vlSelf->__PVT__opb_00 = ((IData)(vlSelf->__PVT__u0__DOT__expb_00) 
                             & (IData)(vlSelf->__PVT__u0__DOT__fractb_00));
    vlSelf->__PVT__fpu_op_r3 = vlSelf->__PVT__fpu_op_r2;
    vlSelf->__PVT__opa_inf = ((IData)(vlSelf->__PVT__u0__DOT__expa_ff) 
                              & (IData)(vlSelf->__PVT__u0__DOT__infa_f_r));
    vlSelf->__PVT__inf_d = (((IData)(vlSelf->__PVT__u0__DOT__expa_ff) 
                             & (IData)(vlSelf->__PVT__u0__DOT__infa_f_r)) 
                            | ((IData)(vlSelf->__PVT__u0__DOT__expb_ff) 
                               & (IData)(vlSelf->__PVT__u0__DOT__infb_f_r)));
    vlSelf->__PVT__qnan_d = (((IData)(vlSelf->__PVT__u0__DOT__expa_ff) 
                              & (IData)(vlSelf->__PVT__u0__DOT__qnan_r_a)) 
                             | ((IData)(vlSelf->__PVT__u0__DOT__expb_ff) 
                                & (IData)(vlSelf->__PVT__u0__DOT__qnan_r_b)));
    vlSelf->__PVT__snan_d = (((IData)(vlSelf->__PVT__u0__DOT__expa_ff) 
                              & (IData)(vlSelf->__PVT__u0__DOT__snan_r_a)) 
                             | ((IData)(vlSelf->__PVT__u0__DOT__expb_ff) 
                                & (IData)(vlSelf->__PVT__u0__DOT__snan_r_b)));
    vlSelf->__PVT__sign_mul = vlSelf->__PVT__u2__DOT__sign_d;
    vlSelf->__PVT__sign_exe = ((vlSelf->__PVT__opa_r 
                                & vlSelf->__PVT__opb_r) 
                               >> 0x1fU);
    vlSelf->__VdfgRegularize_h62b27241_3_2 = ((IData)(vlSelf->__PVT__opa_00) 
                                              | (IData)(vlSelf->__PVT__opb_00));
    vlSelf->__PVT__u0__DOT__fractb_00 = (1U & (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (0x7fffffU 
                                                           & vlSelf->__PVT__opb_r)))));
    vlSelf->__PVT__u0__DOT__expb_00 = (1U & (~ (IData)(
                                                       (0U 
                                                        != 
                                                        (0xffU 
                                                         & (vlSelf->__PVT__opb_r 
                                                            >> 0x17U))))));
    vlSelf->__PVT__fpu_op_r2 = vlSelf->__PVT__fpu_op_r1;
    vlSelf->__VdfgRegularize_h62b27241_3_4 = ((IData)(vlSelf->__PVT__opa_inf) 
                                              & (IData)(vlSelf->__PVT__opb_00));
    __VdfgRegularize_h62b27241_3_10 = ((IData)(vlSelf->__PVT__opa_inf) 
                                       | (IData)(vlSelf->__PVT__opb_inf));
    vlSelf->__PVT__u0__DOT__infb_f_r = (1U & (~ (IData)(
                                                        (0U 
                                                         != 
                                                         (0x7fffffU 
                                                          & vlSelf->__PVT__opb_r)))));
    vlSelf->__PVT__u0__DOT__infa_f_r = (1U & (~ (IData)(
                                                        (0U 
                                                         != 
                                                         (0x7fffffU 
                                                          & vlSelf->__PVT__opa_r)))));
    vlSelf->__PVT__u0__DOT__qnan_r_b = (1U & (vlSelf->__PVT__opb_r 
                                              >> 0x16U));
    vlSelf->__PVT__u0__DOT__qnan_r_a = (1U & (vlSelf->__PVT__opa_r 
                                              >> 0x16U));
    vlSelf->__VdfgRegularize_h62b27241_3_3 = ((IData)(vlSelf->__PVT__qnan_d) 
                                              | (IData)(vlSelf->__PVT__snan_d));
    vlSelf->__PVT__u0__DOT__snan_r_b = ((~ (vlSelf->__PVT__opb_r 
                                            >> 0x16U)) 
                                        & (0U != (0x3fffffU 
                                                  & vlSelf->__PVT__opb_r)));
    vlSelf->__PVT__u0__DOT__expb_ff = (0xffU == (0xffU 
                                                 & (vlSelf->__PVT__opb_r 
                                                    >> 0x17U)));
    vlSelf->__PVT__u0__DOT__snan_r_a = ((~ (vlSelf->__PVT__opa_r 
                                            >> 0x16U)) 
                                        & (0U != (0x3fffffU 
                                                  & vlSelf->__PVT__opa_r)));
    vlSelf->__PVT__u0__DOT__expa_ff = (0xffU == (0xffU 
                                                 & (vlSelf->__PVT__opa_r 
                                                    >> 0x17U)));
    vlSelf->__PVT__or_result = (((2U == (IData)(vlSelf->__PVT__fpu_op_r3)) 
                                 & (IData)(vlSelf->__VdfgRegularize_h62b27241_3_2)) 
                                | ((3U == (IData)(vlSelf->__PVT__fpu_op_r3)) 
                                   & ((IData)(vlSelf->__PVT__opa_00) 
                                      | (IData)(vlSelf->__PVT__opb_inf))));
    vlSelf->__VdfgRegularize_h62b27241_3_7 = ((IData)(vlSelf->__VdfgRegularize_h62b27241_3_4) 
                                              | (IData)(vlSelf->__VdfgRegularize_h62b27241_3_5));
    vlSelf->__VdfgRegularize_h62b27241_3_11 = ((IData)(vlSelf->__VdfgRegularize_h62b27241_3_12) 
                                               | (IData)(__VdfgRegularize_h62b27241_3_10));
    vlSelf->__PVT__fpu_op_r1 = vlSelf->__PVT__fpu_op;
    vlSelf->__PVT__inf_fmul = (((IData)(vlSelf->__VdfgRegularize_h62b27241_3_9) 
                                | (IData)(__VdfgRegularize_h62b27241_3_10)) 
                               & ((~ (IData)(vlSelf->__VdfgRegularize_h62b27241_3_7)) 
                                  & (2U == (IData)(vlSelf->__PVT__fpu_op_r3))));
    vlSelf->__PVT__opb_r = vlSymsp->TOP.co_sim_syn2__DOT__in1;
    vlSelf->__PVT__opa_r = vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.out;
    vlSelf->__PVT__fpu_op = 2U;
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
}

VL_INLINE_OPT void Vco_sim_syn2_fpu_mul___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__0(Vco_sim_syn2_fpu_mul* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_syn2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vco_sim_syn2_fpu_mul___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__0\n"); );
    // Init
    CData/*0:0*/ __VdfgRegularize_h62b27241_3_10;
    __VdfgRegularize_h62b27241_3_10 = 0;
    // Body
    vlSelf->__PVT__zero = vlSelf->__PVT__zero_o1;
    vlSelf->__PVT__inf_mul2 = (0xffU == (IData)(vlSelf->__PVT__exp_mul));
    vlSelf->__PVT__sign = (1U & ((3U == (IData)(vlSelf->__PVT__rmode_r2))
                                  ? (~ (IData)(vlSelf->__PVT__sign_mul))
                                  : (IData)(vlSelf->__PVT__sign_mul)));
    vlSelf->__PVT__opb_nan = (IData)(((0x7f800000U 
                                       == (0x7f800000U 
                                           & vlSelf->__PVT__opb_r)) 
                                      & (0U != (0x7fffffU 
                                                & vlSelf->__PVT__opb_r))));
    vlSelf->__PVT__opb_dn = vlSelf->__PVT__u0__DOT__expb_00;
    vlSelf->__PVT__opa_r1 = (0x7fffffffU & vlSelf->__PVT__opa_r);
    vlSelf->__PVT__opa_dn = vlSelf->__PVT__u0__DOT__expa_00;
    vlSelf->__PVT__underflow_fmul_r = vlSelf->__PVT__underflow_fmul_d;
    vlSelf->__PVT__underflow = vlSelf->__PVT__underflow_o1;
    vlSelf->__PVT__exp_ovf_r = vlSelf->__PVT__exp_ovf;
    vlSelf->__PVT__prod = vlSelf->__PVT__u5__DOT__prod1;
    vlSelf->__PVT__ind_d = (((IData)(vlSelf->__PVT__u0__DOT__expa_ff) 
                             & (IData)(vlSelf->__PVT__u0__DOT__infa_f_r)) 
                            & ((IData)(vlSelf->__PVT__u0__DOT__expb_ff) 
                               & (IData)(vlSelf->__PVT__u0__DOT__infb_f_r)));
    vlSelf->__PVT__snan = vlSelf->__PVT__snan_o1;
    vlSelf->__PVT__overflow = vlSelf->__PVT__overflow_o1;
    vlSelf->__PVT__inf = vlSelf->__PVT__inf_o1;
    vlSelf->__PVT__div_by_zero = vlSelf->__PVT__div_by_zero_o1;
    vlSelf->__PVT__ine = vlSelf->__PVT__ine_o1;
    vlSelf->__PVT__qnan = vlSelf->__PVT__qnan_o1;
    vlSelf->out = vlSelf->__PVT__out_o1;
    vlSelf->__PVT__zero_o1 = (1U & ((~ ((IData)(vlSelf->__VdfgRegularize_h62b27241_3_11) 
                                        | (IData)(vlSelf->__VdfgRegularize_h62b27241_3_3))) 
                                    & ((~ (IData)(vlSelf->__VdfgRegularize_h62b27241_3_7)) 
                                       & ((~ (IData)(
                                                     (0U 
                                                      != vlSelf->__PVT__u4->__PVT__out))) 
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
    vlSelf->__PVT__snan_o1 = vlSelf->__PVT__snan_d;
    vlSelf->__PVT__overflow_o1 = ((~ (IData)(vlSelf->__PVT__inf_d)) 
                                  & ((~ (IData)(vlSelf->__VdfgRegularize_h62b27241_3_3)) 
                                     & ((IData)(vlSelf->__VdfgRegularize_h62b27241_3_12) 
                                        | (IData)(vlSelf->__PVT__u4->__PVT__overflow))));
    vlSelf->__PVT__inf_o1 = ((~ ((IData)(vlSelf->__PVT__fpu_op_r3) 
                                 >> 2U)) & ((~ ((IData)(vlSelf->__PVT__qnan_d) 
                                                | (IData)(vlSelf->__PVT__snan_d))) 
                                            & (((IData)(
                                                        ((0x7f800000U 
                                                          == 
                                                          (0x7f800000U 
                                                           & vlSelf->__PVT__u4->__PVT__out)) 
                                                         & (~ (IData)(
                                                                      (0U 
                                                                       != 
                                                                       (0x7fffffU 
                                                                        & vlSelf->__PVT__u4->__PVT__out)))))) 
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
                                      & (((IData)(vlSelf->__VdfgRegularize_h62b27241_3_11) 
                                          & ((1U == (IData)(vlSelf->__PVT__rmode_r3)) 
                                             & ((~ (IData)(vlSelf->__VdfgRegularize_h62b27241_3_7)) 
                                                & ((IData)(vlSelf->__PVT__fpu_op_r3) 
                                                   >> 1U)))) 
                                         | (((5U == (IData)(vlSelf->__PVT__fpu_op_r3))
                                              ? (((IData)(vlSelf->__PVT__u4->__PVT__f2i_zero) 
                                                  & ((~ (IData)(vlSelf->__PVT__opas_r2)) 
                                                     & (0U 
                                                        != vlSelf->__PVT__fract_denorm))) 
                                                 | ((0U 
                                                     != 
                                                     (0x1ffffffU 
                                                      & (IData)(vlSelf->__PVT__u4->__VdfgRegularize_he8d392c1_0_21))) 
                                                    | (((IData)(vlSelf->__PVT__u4->__PVT__f2i_zero) 
                                                        & ((0x80U 
                                                            > (IData)(vlSelf->__PVT__exp_r)) 
                                                           & ((0U 
                                                               != vlSelf->__PVT__fract_denorm) 
                                                              & (IData)(vlSelf->__PVT__opas_r2)))) 
                                                       | ((IData)(vlSelf->__PVT__u4->__PVT__f2i_max) 
                                                          & ((3U 
                                                              == (IData)(vlSelf->__PVT__rmode_r3)) 
                                                             & (0x80U 
                                                                > (IData)(vlSelf->__PVT__exp_r)))))))
                                              : ((4U 
                                                  == (IData)(vlSelf->__PVT__fpu_op_r3))
                                                  ? 
                                                 (0U 
                                                  != 
                                                  (0x1ffffffU 
                                                   & (IData)(vlSelf->__PVT__u4->__VdfgRegularize_he8d392c1_0_21)))
                                                  : 
                                                 (((~ (IData)(vlSelf->__PVT__u4->__PVT__dn)) 
                                                   & (IData)(vlSelf->__PVT__u4->__PVT__r)) 
                                                  | (((~ (IData)(vlSelf->__PVT__u4->__PVT__dn)) 
                                                      & (IData)(vlSelf->__PVT__u4->__PVT__s)) 
                                                     | ((IData)(vlSelf->__PVT__u4->__PVT__max_num) 
                                                        | (3U 
                                                           == (IData)(vlSelf->__PVT__fpu_op_r3))))))) 
                                            | ((~ (IData)(
                                                          (0U 
                                                           != vlSelf->__PVT__u4->__PVT__out))) 
                                               | ((IData)(vlSelf->__PVT__inf_fmul) 
                                                  | ((IData)(vlSelf->__PVT__u4->__PVT__overflow) 
                                                     | (IData)(vlSelf->__PVT__u4->__PVT__underflow)))))))));
    vlSelf->__PVT__qnan_o1 = (((IData)(vlSelf->__PVT__snan_d) 
                               | (IData)(vlSelf->__PVT__qnan_d)) 
                              | ((((IData)(vlSelf->__PVT__opa_inf) 
                                   & (IData)(vlSelf->__PVT__opb_00)) 
                                  | ((IData)(vlSelf->__PVT__opb_inf) 
                                     & (IData)(vlSelf->__PVT__opa_00))) 
                                 & (2U == (IData)(vlSelf->__PVT__fpu_op_r3))));
    vlSelf->__PVT__out_o1 = ((0x7fffffffU & vlSelf->__PVT__out_o1) 
                             | (((~ ((IData)(vlSelf->__PVT__snan_d) 
                                     | (IData)(vlSelf->__PVT__qnan_d))) 
                                 & (((IData)(vlSelf->__PVT__sign_exe_r) 
                                     & ((IData)(vlSelf->__VdfgRegularize_h62b27241_3_5) 
                                        | (IData)(vlSelf->__VdfgRegularize_h62b27241_3_4)))
                                     ? (~ (IData)(vlSelf->__PVT__sign_mul_r))
                                     : (IData)(vlSelf->__PVT__sign_mul_r))) 
                                << 0x1fU));
    vlSelf->__PVT__out_o1 = ((0x80000000U & vlSelf->__PVT__out_o1) 
                             | (((((((2U == (IData)(vlSelf->__PVT__fpu_op_r3)) 
                                     & (IData)(vlSelf->__VdfgRegularize_h62b27241_3_9)) 
                                    | ((3U == (IData)(vlSelf->__PVT__fpu_op_r3)) 
                                       & ((IData)(vlSelf->__PVT__opa_inf) 
                                          | (IData)(vlSelf->__PVT__opb_00)))) 
                                   | (IData)(vlSelf->__PVT__inf_d)) 
                                  | (IData)(vlSelf->__PVT__snan_d)) 
                                 | (IData)(vlSelf->__PVT__qnan_d))
                                 ? (((IData)(vlSelf->__VdfgRegularize_h62b27241_3_3) 
                                     | (IData)(vlSelf->__VdfgRegularize_h62b27241_3_7))
                                     ? 0x7fc00001U : 0x7f800000U)
                                 : vlSelf->__PVT__u4->__PVT__out));
    vlSelf->__PVT__fract_denorm = vlSelf->__PVT__prod;
    vlSelf->__PVT__inf_mul_r = vlSelf->__PVT__inf_mul;
    vlSelf->__PVT__opa_nan_r = ((~ (IData)(vlSelf->__PVT__opa_nan)) 
                                & (3U == (IData)(vlSelf->__PVT__fpu_op_r2)));
    vlSelf->__PVT__rmode_r3 = vlSelf->__PVT__rmode_r2;
    vlSelf->__PVT__exp_r = vlSelf->__PVT__exp_mul;
    vlSelf->__PVT__opas_r2 = vlSelf->__PVT__opas_r1;
    vlSelf->__PVT__opb_inf = ((IData)(vlSelf->__PVT__u0__DOT__expb_ff) 
                              & (IData)(vlSelf->__PVT__u0__DOT__infb_f_r));
    vlSelf->__PVT__opa_00 = ((IData)(vlSelf->__PVT__u0__DOT__expa_00) 
                             & (IData)(vlSelf->__PVT__u0__DOT__fracta_00));
    vlSelf->__PVT__sign_mul_r = vlSelf->__PVT__sign_mul;
    vlSelf->__PVT__sign_exe_r = vlSelf->__PVT__sign_exe;
    vlSelf->__PVT__fpu_op_r3 = vlSelf->__PVT__fpu_op_r2;
    vlSelf->__PVT__opb_00 = ((IData)(vlSelf->__PVT__u0__DOT__expb_00) 
                             & (IData)(vlSelf->__PVT__u0__DOT__fractb_00));
    vlSelf->__PVT__opa_inf = ((IData)(vlSelf->__PVT__u0__DOT__expa_ff) 
                              & (IData)(vlSelf->__PVT__u0__DOT__infa_f_r));
    vlSelf->__PVT__inf_d = (((IData)(vlSelf->__PVT__u0__DOT__expa_ff) 
                             & (IData)(vlSelf->__PVT__u0__DOT__infa_f_r)) 
                            | ((IData)(vlSelf->__PVT__u0__DOT__expb_ff) 
                               & (IData)(vlSelf->__PVT__u0__DOT__infb_f_r)));
    vlSelf->__PVT__qnan_d = (((IData)(vlSelf->__PVT__u0__DOT__expa_ff) 
                              & (IData)(vlSelf->__PVT__u0__DOT__qnan_r_a)) 
                             | ((IData)(vlSelf->__PVT__u0__DOT__expb_ff) 
                                & (IData)(vlSelf->__PVT__u0__DOT__qnan_r_b)));
    vlSelf->__PVT__snan_d = (((IData)(vlSelf->__PVT__u0__DOT__expa_ff) 
                              & (IData)(vlSelf->__PVT__u0__DOT__snan_r_a)) 
                             | ((IData)(vlSelf->__PVT__u0__DOT__expb_ff) 
                                & (IData)(vlSelf->__PVT__u0__DOT__snan_r_b)));
    vlSelf->__VdfgRegularize_h62b27241_3_12 = ((IData)(vlSelf->__PVT__inf_mul2) 
                                               | (IData)(vlSelf->__PVT__inf_mul_r));
    vlSelf->__PVT__opa_nan = (IData)(((0x7f800000U 
                                       == (0x7f800000U 
                                           & vlSelf->__PVT__opa_r)) 
                                      & (0U != (0x7fffffU 
                                                & vlSelf->__PVT__opa_r))));
    vlSelf->__PVT__rmode_r2 = vlSelf->__PVT__rmode_r1;
    vlSelf->__PVT__opas_r1 = (vlSelf->__PVT__opa_r 
                              >> 0x1fU);
    vlSelf->__VdfgRegularize_h62b27241_3_5 = ((IData)(vlSelf->__PVT__opa_00) 
                                              & (IData)(vlSelf->__PVT__opb_inf));
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
    vlSelf->__PVT__sign_mul = vlSelf->__PVT__u2__DOT__sign_d;
    vlSelf->__PVT__sign_exe = ((vlSelf->__PVT__opa_r 
                                & vlSelf->__PVT__opb_r) 
                               >> 0x1fU);
    vlSelf->__PVT__fpu_op_r2 = vlSelf->__PVT__fpu_op_r1;
    vlSelf->__VdfgRegularize_h62b27241_3_2 = ((IData)(vlSelf->__PVT__opa_00) 
                                              | (IData)(vlSelf->__PVT__opb_00));
    vlSelf->__PVT__u0__DOT__fractb_00 = (1U & (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (0x7fffffU 
                                                           & vlSelf->__PVT__opb_r)))));
    vlSelf->__PVT__u0__DOT__expb_00 = (1U & (~ (IData)(
                                                       (0U 
                                                        != 
                                                        (0xffU 
                                                         & (vlSelf->__PVT__opb_r 
                                                            >> 0x17U))))));
    vlSelf->__VdfgRegularize_h62b27241_3_4 = ((IData)(vlSelf->__PVT__opa_inf) 
                                              & (IData)(vlSelf->__PVT__opb_00));
    __VdfgRegularize_h62b27241_3_10 = ((IData)(vlSelf->__PVT__opa_inf) 
                                       | (IData)(vlSelf->__PVT__opb_inf));
    vlSelf->__PVT__u0__DOT__infb_f_r = (1U & (~ (IData)(
                                                        (0U 
                                                         != 
                                                         (0x7fffffU 
                                                          & vlSelf->__PVT__opb_r)))));
    vlSelf->__PVT__u0__DOT__infa_f_r = (1U & (~ (IData)(
                                                        (0U 
                                                         != 
                                                         (0x7fffffU 
                                                          & vlSelf->__PVT__opa_r)))));
    vlSelf->__PVT__u0__DOT__qnan_r_b = (1U & (vlSelf->__PVT__opb_r 
                                              >> 0x16U));
    vlSelf->__PVT__u0__DOT__qnan_r_a = (1U & (vlSelf->__PVT__opa_r 
                                              >> 0x16U));
    vlSelf->__VdfgRegularize_h62b27241_3_3 = ((IData)(vlSelf->__PVT__qnan_d) 
                                              | (IData)(vlSelf->__PVT__snan_d));
    vlSelf->__PVT__u0__DOT__snan_r_b = ((~ (vlSelf->__PVT__opb_r 
                                            >> 0x16U)) 
                                        & (0U != (0x3fffffU 
                                                  & vlSelf->__PVT__opb_r)));
    vlSelf->__PVT__u0__DOT__expb_ff = (0xffU == (0xffU 
                                                 & (vlSelf->__PVT__opb_r 
                                                    >> 0x17U)));
    vlSelf->__PVT__u0__DOT__snan_r_a = ((~ (vlSelf->__PVT__opa_r 
                                            >> 0x16U)) 
                                        & (0U != (0x3fffffU 
                                                  & vlSelf->__PVT__opa_r)));
    vlSelf->__PVT__u0__DOT__expa_ff = (0xffU == (0xffU 
                                                 & (vlSelf->__PVT__opa_r 
                                                    >> 0x17U)));
    vlSelf->__VdfgRegularize_h62b27241_3_9 = ((IData)(vlSelf->__VdfgRegularize_h62b27241_3_12) 
                                              & (0U 
                                                 == (IData)(vlSelf->__PVT__rmode_r3)));
    vlSelf->__PVT__or_result = (((2U == (IData)(vlSelf->__PVT__fpu_op_r3)) 
                                 & (IData)(vlSelf->__VdfgRegularize_h62b27241_3_2)) 
                                | ((3U == (IData)(vlSelf->__PVT__fpu_op_r3)) 
                                   & ((IData)(vlSelf->__PVT__opa_00) 
                                      | (IData)(vlSelf->__PVT__opb_inf))));
    vlSelf->__VdfgRegularize_h62b27241_3_7 = ((IData)(vlSelf->__VdfgRegularize_h62b27241_3_4) 
                                              | (IData)(vlSelf->__VdfgRegularize_h62b27241_3_5));
    vlSelf->__VdfgRegularize_h62b27241_3_11 = ((IData)(vlSelf->__VdfgRegularize_h62b27241_3_12) 
                                               | (IData)(__VdfgRegularize_h62b27241_3_10));
    vlSelf->__PVT__rmode_r1 = 0U;
    if ((3U == (IData)(vlSelf->__PVT__fpu_op_r1))) {
        vlSelf->__PVT__inf_mul = (1U & ((~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0xffU 
                                                     & (vlSelf->__PVT__opb_r 
                                                        >> 0x17U))))) 
                                        & (~ (vlSelf->__PVT__opa_r 
                                              >> 0x1eU))));
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
    } else {
        vlSelf->__PVT__inf_mul = (1U & (0x17eU < (IData)(vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_8)));
        vlSelf->__PVT__exp_mul = (0xffU & ((IData)(vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_12)
                                            ? ((IData)(vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_10)
                                                ? (IData)(vlSelf->__PVT__u2__DOT__exp_tmp5)
                                                : ((IData)(0x7fU) 
                                                   - (IData)(vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_8)))
                                            : ((IData)(vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_9) 
                                               + (IData)(vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_10))));
    }
    vlSelf->__PVT__fpu_op_r1 = vlSelf->__PVT__fpu_op;
    vlSelf->__PVT__inf_fmul = (((IData)(vlSelf->__VdfgRegularize_h62b27241_3_9) 
                                | (IData)(__VdfgRegularize_h62b27241_3_10)) 
                               & ((~ (IData)(vlSelf->__VdfgRegularize_h62b27241_3_7)) 
                                  & (2U == (IData)(vlSelf->__PVT__fpu_op_r3))));
    vlSelf->__PVT__opb_r = vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.out;
    vlSelf->__PVT__opa_r = vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.out;
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
    vlSelf->__PVT__fpu_op = 2U;
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
}

VL_INLINE_OPT void Vco_sim_syn2_fpu_mul___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__1(Vco_sim_syn2_fpu_mul* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_syn2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vco_sim_syn2_fpu_mul___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__1\n"); );
    // Init
    CData/*0:0*/ __VdfgRegularize_h62b27241_3_10;
    __VdfgRegularize_h62b27241_3_10 = 0;
    // Body
    vlSelf->out = vlSelf->__PVT__out_o1;
    vlSelf->__PVT__out_o1 = ((0x7fffffffU & vlSelf->__PVT__out_o1) 
                             | (((~ ((IData)(vlSelf->__PVT__snan_d) 
                                     | (IData)(vlSelf->__PVT__qnan_d))) 
                                 & (((IData)(vlSelf->__PVT__sign_exe_r) 
                                     & ((IData)(vlSelf->__VdfgRegularize_h62b27241_3_5) 
                                        | (IData)(vlSelf->__VdfgRegularize_h62b27241_3_4)))
                                     ? (~ (IData)(vlSelf->__PVT__sign_mul_r))
                                     : (IData)(vlSelf->__PVT__sign_mul_r))) 
                                << 0x1fU));
    vlSelf->__PVT__out_o1 = ((0x80000000U & vlSelf->__PVT__out_o1) 
                             | (((((((2U == (IData)(vlSelf->__PVT__fpu_op_r3)) 
                                     & (IData)(vlSelf->__VdfgRegularize_h62b27241_3_9)) 
                                    | ((3U == (IData)(vlSelf->__PVT__fpu_op_r3)) 
                                       & ((IData)(vlSelf->__PVT__opa_inf) 
                                          | (IData)(vlSelf->__PVT__opb_00)))) 
                                   | (IData)(vlSelf->__PVT__inf_d)) 
                                  | (IData)(vlSelf->__PVT__snan_d)) 
                                 | (IData)(vlSelf->__PVT__qnan_d))
                                 ? (((IData)(vlSelf->__VdfgRegularize_h62b27241_3_3) 
                                     | (IData)(vlSelf->__VdfgRegularize_h62b27241_3_7))
                                     ? 0x7fc00001U : 0x7f800000U)
                                 : vlSelf->__PVT__u4->__PVT__out));
    vlSelf->__VdfgRegularize_h62b27241_3_5 = ((IData)(vlSelf->__PVT__opa_00) 
                                              & (IData)(vlSelf->__PVT__opb_inf));
    vlSelf->__VdfgRegularize_h62b27241_3_9 = ((IData)(vlSelf->__VdfgRegularize_h62b27241_3_12) 
                                              & (0U 
                                                 == (IData)(vlSelf->__PVT__rmode_r3)));
    vlSelf->__PVT__sign_mul_r = vlSelf->__PVT__sign_mul;
    vlSelf->__PVT__sign_exe_r = vlSelf->__PVT__sign_exe;
    vlSelf->__PVT__opa_inf = ((IData)(vlSelf->__PVT__u0__DOT__expa_ff) 
                              & (IData)(vlSelf->__PVT__u0__DOT__infa_f_r));
    vlSelf->__PVT__opb_00 = ((IData)(vlSelf->__PVT__u0__DOT__expb_00) 
                             & (IData)(vlSelf->__PVT__u0__DOT__fractb_00));
    vlSelf->__PVT__inf_d = (((IData)(vlSelf->__PVT__u0__DOT__expa_ff) 
                             & (IData)(vlSelf->__PVT__u0__DOT__infa_f_r)) 
                            | ((IData)(vlSelf->__PVT__u0__DOT__expb_ff) 
                               & (IData)(vlSelf->__PVT__u0__DOT__infb_f_r)));
    vlSelf->__PVT__qnan_d = (((IData)(vlSelf->__PVT__u0__DOT__expa_ff) 
                              & (IData)(vlSelf->__PVT__u0__DOT__qnan_r_a)) 
                             | ((IData)(vlSelf->__PVT__u0__DOT__expb_ff) 
                                & (IData)(vlSelf->__PVT__u0__DOT__qnan_r_b)));
    vlSelf->__PVT__snan_d = (((IData)(vlSelf->__PVT__u0__DOT__expa_ff) 
                              & (IData)(vlSelf->__PVT__u0__DOT__snan_r_a)) 
                             | ((IData)(vlSelf->__PVT__u0__DOT__expb_ff) 
                                & (IData)(vlSelf->__PVT__u0__DOT__snan_r_b)));
    vlSelf->__PVT__fpu_op_r3 = vlSelf->__PVT__fpu_op_r2;
    vlSelf->__PVT__sign_mul = vlSelf->__PVT__u2__DOT__sign_d;
    vlSelf->__PVT__sign_exe = ((vlSelf->__PVT__opa_r 
                                & vlSelf->__PVT__opb_r) 
                               >> 0x1fU);
    __VdfgRegularize_h62b27241_3_10 = ((IData)(vlSelf->__PVT__opa_inf) 
                                       | (IData)(vlSelf->__PVT__opb_inf));
    vlSelf->__VdfgRegularize_h62b27241_3_4 = ((IData)(vlSelf->__PVT__opa_inf) 
                                              & (IData)(vlSelf->__PVT__opb_00));
    vlSelf->__VdfgRegularize_h62b27241_3_2 = ((IData)(vlSelf->__PVT__opa_00) 
                                              | (IData)(vlSelf->__PVT__opb_00));
    vlSelf->__PVT__u0__DOT__fractb_00 = (1U & (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (0x7fffffU 
                                                           & vlSelf->__PVT__opb_r)))));
    vlSelf->__PVT__u0__DOT__expb_00 = (1U & (~ (IData)(
                                                       (0U 
                                                        != 
                                                        (0xffU 
                                                         & (vlSelf->__PVT__opb_r 
                                                            >> 0x17U))))));
    vlSelf->__PVT__u0__DOT__infa_f_r = (1U & (~ (IData)(
                                                        (0U 
                                                         != 
                                                         (0x7fffffU 
                                                          & vlSelf->__PVT__opa_r)))));
    vlSelf->__PVT__u0__DOT__infb_f_r = (1U & (~ (IData)(
                                                        (0U 
                                                         != 
                                                         (0x7fffffU 
                                                          & vlSelf->__PVT__opb_r)))));
    vlSelf->__PVT__u0__DOT__qnan_r_a = (1U & (vlSelf->__PVT__opa_r 
                                              >> 0x16U));
    vlSelf->__PVT__u0__DOT__qnan_r_b = (1U & (vlSelf->__PVT__opb_r 
                                              >> 0x16U));
    vlSelf->__VdfgRegularize_h62b27241_3_3 = ((IData)(vlSelf->__PVT__qnan_d) 
                                              | (IData)(vlSelf->__PVT__snan_d));
    vlSelf->__PVT__u0__DOT__snan_r_a = ((~ (vlSelf->__PVT__opa_r 
                                            >> 0x16U)) 
                                        & (0U != (0x3fffffU 
                                                  & vlSelf->__PVT__opa_r)));
    vlSelf->__PVT__u0__DOT__snan_r_b = ((~ (vlSelf->__PVT__opb_r 
                                            >> 0x16U)) 
                                        & (0U != (0x3fffffU 
                                                  & vlSelf->__PVT__opb_r)));
    vlSelf->__PVT__u0__DOT__expa_ff = (0xffU == (0xffU 
                                                 & (vlSelf->__PVT__opa_r 
                                                    >> 0x17U)));
    vlSelf->__PVT__u0__DOT__expb_ff = (0xffU == (0xffU 
                                                 & (vlSelf->__PVT__opb_r 
                                                    >> 0x17U)));
    vlSelf->__PVT__fpu_op_r2 = vlSelf->__PVT__fpu_op_r1;
    vlSelf->__VdfgRegularize_h62b27241_3_11 = ((IData)(vlSelf->__VdfgRegularize_h62b27241_3_12) 
                                               | (IData)(__VdfgRegularize_h62b27241_3_10));
    vlSelf->__VdfgRegularize_h62b27241_3_7 = ((IData)(vlSelf->__VdfgRegularize_h62b27241_3_4) 
                                              | (IData)(vlSelf->__VdfgRegularize_h62b27241_3_5));
    vlSelf->__PVT__or_result = (((2U == (IData)(vlSelf->__PVT__fpu_op_r3)) 
                                 & (IData)(vlSelf->__VdfgRegularize_h62b27241_3_2)) 
                                | ((3U == (IData)(vlSelf->__PVT__fpu_op_r3)) 
                                   & ((IData)(vlSelf->__PVT__opa_00) 
                                      | (IData)(vlSelf->__PVT__opb_inf))));
    vlSelf->__PVT__inf_fmul = (((IData)(vlSelf->__VdfgRegularize_h62b27241_3_9) 
                                | (IData)(__VdfgRegularize_h62b27241_3_10)) 
                               & ((~ (IData)(vlSelf->__VdfgRegularize_h62b27241_3_7)) 
                                  & (2U == (IData)(vlSelf->__PVT__fpu_op_r3))));
    vlSelf->__PVT__opa_r = vlSymsp->TOP.co_sim_syn2__DOT__in3;
    vlSelf->__PVT__opb_r = vlSymsp->TOP.co_sim_syn2__DOT__in1;
    vlSelf->__PVT__fpu_op_r1 = vlSelf->__PVT__fpu_op;
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
    vlSelf->__PVT__fpu_op = 2U;
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
}

VL_INLINE_OPT void Vco_sim_syn2_fpu_mul___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__0(Vco_sim_syn2_fpu_mul* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_syn2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vco_sim_syn2_fpu_mul___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__0\n"); );
    // Init
    CData/*0:0*/ __VdfgRegularize_h62b27241_3_10;
    __VdfgRegularize_h62b27241_3_10 = 0;
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
    vlSelf->__PVT__inf = vlSelf->__PVT__inf_o1;
    vlSelf->__PVT__qnan = vlSelf->__PVT__qnan_o1;
    vlSelf->out = vlSelf->__PVT__out_o1;
    vlSelf->__PVT__prod = vlSelf->__PVT__u5__DOT__prod1;
    vlSelf->__PVT__ine = vlSelf->__PVT__ine_o1;
    vlSelf->__PVT__zero_o1 = (1U & ((~ ((IData)(vlSelf->__VdfgRegularize_h62b27241_3_11) 
                                        | (IData)(vlSelf->__VdfgRegularize_h62b27241_3_3))) 
                                    & ((~ (IData)(vlSelf->__VdfgRegularize_h62b27241_3_7)) 
                                       & ((~ (IData)(
                                                     (0U 
                                                      != vlSelf->__PVT__u4->__PVT__out))) 
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
                                        | (IData)(vlSelf->__PVT__u4->__PVT__overflow))));
    vlSelf->__PVT__div_by_zero_o1 = ((((IData)(vlSelf->__PVT__opa_nan_r) 
                                       & (~ (IData)(vlSelf->__PVT__opa_00))) 
                                      & (~ (IData)(vlSelf->__PVT__opa_inf))) 
                                     & (IData)(vlSelf->__PVT__opb_00));
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
    vlSelf->__PVT__inf_o1 = ((~ ((IData)(vlSelf->__PVT__fpu_op_r3) 
                                 >> 2U)) & ((~ ((IData)(vlSelf->__PVT__qnan_d) 
                                                | (IData)(vlSelf->__PVT__snan_d))) 
                                            & (((IData)(
                                                        ((0x7f800000U 
                                                          == 
                                                          (0x7f800000U 
                                                           & vlSelf->__PVT__u4->__PVT__out)) 
                                                         & (~ (IData)(
                                                                      (0U 
                                                                       != 
                                                                       (0x7fffffU 
                                                                        & vlSelf->__PVT__u4->__PVT__out)))))) 
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
    vlSelf->__PVT__out_o1 = ((0x7fffffffU & vlSelf->__PVT__out_o1) 
                             | (((~ ((IData)(vlSelf->__PVT__snan_d) 
                                     | (IData)(vlSelf->__PVT__qnan_d))) 
                                 & (((IData)(vlSelf->__PVT__sign_exe_r) 
                                     & ((IData)(vlSelf->__VdfgRegularize_h62b27241_3_5) 
                                        | (IData)(vlSelf->__VdfgRegularize_h62b27241_3_4)))
                                     ? (~ (IData)(vlSelf->__PVT__sign_mul_r))
                                     : (IData)(vlSelf->__PVT__sign_mul_r))) 
                                << 0x1fU));
    vlSelf->__PVT__out_o1 = ((0x80000000U & vlSelf->__PVT__out_o1) 
                             | (((((((2U == (IData)(vlSelf->__PVT__fpu_op_r3)) 
                                     & (IData)(vlSelf->__VdfgRegularize_h62b27241_3_9)) 
                                    | ((3U == (IData)(vlSelf->__PVT__fpu_op_r3)) 
                                       & ((IData)(vlSelf->__PVT__opa_inf) 
                                          | (IData)(vlSelf->__PVT__opb_00)))) 
                                   | (IData)(vlSelf->__PVT__inf_d)) 
                                  | (IData)(vlSelf->__PVT__snan_d)) 
                                 | (IData)(vlSelf->__PVT__qnan_d))
                                 ? (((IData)(vlSelf->__VdfgRegularize_h62b27241_3_3) 
                                     | (IData)(vlSelf->__VdfgRegularize_h62b27241_3_7))
                                     ? 0x7fc00001U : 0x7f800000U)
                                 : vlSelf->__PVT__u4->__PVT__out));
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
    vlSelf->__PVT__ine_o1 = (1U & ((~ (IData)(vlSelf->__PVT__opa_00)) 
                                   & ((~ ((IData)(vlSelf->__PVT__opb_00) 
                                          | ((IData)(vlSelf->__VdfgRegularize_h62b27241_3_3) 
                                             | (IData)(vlSelf->__PVT__inf_d)))) 
                                      & (((IData)(vlSelf->__VdfgRegularize_h62b27241_3_11) 
                                          & ((1U == (IData)(vlSelf->__PVT__rmode_r3)) 
                                             & ((~ (IData)(vlSelf->__VdfgRegularize_h62b27241_3_7)) 
                                                & ((IData)(vlSelf->__PVT__fpu_op_r3) 
                                                   >> 1U)))) 
                                         | (((5U == (IData)(vlSelf->__PVT__fpu_op_r3))
                                              ? (((IData)(vlSelf->__PVT__u4->__PVT__f2i_zero) 
                                                  & ((~ (IData)(vlSelf->__PVT__opas_r2)) 
                                                     & (0U 
                                                        != vlSelf->__PVT__fract_denorm))) 
                                                 | ((0U 
                                                     != 
                                                     (0x1ffffffU 
                                                      & (IData)(vlSelf->__PVT__u4->__VdfgRegularize_he8d392c1_0_21))) 
                                                    | (((IData)(vlSelf->__PVT__u4->__PVT__f2i_zero) 
                                                        & ((0x80U 
                                                            > (IData)(vlSelf->__PVT__exp_r)) 
                                                           & ((0U 
                                                               != vlSelf->__PVT__fract_denorm) 
                                                              & (IData)(vlSelf->__PVT__opas_r2)))) 
                                                       | ((IData)(vlSelf->__PVT__u4->__PVT__f2i_max) 
                                                          & ((3U 
                                                              == (IData)(vlSelf->__PVT__rmode_r3)) 
                                                             & (0x80U 
                                                                > (IData)(vlSelf->__PVT__exp_r)))))))
                                              : ((4U 
                                                  == (IData)(vlSelf->__PVT__fpu_op_r3))
                                                  ? 
                                                 (0U 
                                                  != 
                                                  (0x1ffffffU 
                                                   & (IData)(vlSelf->__PVT__u4->__VdfgRegularize_he8d392c1_0_21)))
                                                  : 
                                                 (((~ (IData)(vlSelf->__PVT__u4->__PVT__dn)) 
                                                   & (IData)(vlSelf->__PVT__u4->__PVT__r)) 
                                                  | (((~ (IData)(vlSelf->__PVT__u4->__PVT__dn)) 
                                                      & (IData)(vlSelf->__PVT__u4->__PVT__s)) 
                                                     | ((IData)(vlSelf->__PVT__u4->__PVT__max_num) 
                                                        | (3U 
                                                           == (IData)(vlSelf->__PVT__fpu_op_r3))))))) 
                                            | ((~ (IData)(
                                                          (0U 
                                                           != vlSelf->__PVT__u4->__PVT__out))) 
                                               | ((IData)(vlSelf->__PVT__inf_fmul) 
                                                  | ((IData)(vlSelf->__PVT__u4->__PVT__overflow) 
                                                     | (IData)(vlSelf->__PVT__u4->__PVT__underflow)))))))));
    vlSelf->__PVT__fract_denorm = vlSelf->__PVT__prod;
    vlSelf->__PVT__inf_mul_r = vlSelf->__PVT__inf_mul;
    vlSelf->__PVT__opa_nan_r = ((~ (IData)(vlSelf->__PVT__opa_nan)) 
                                & (3U == (IData)(vlSelf->__PVT__fpu_op_r2)));
    vlSelf->__PVT__opb_inf = ((IData)(vlSelf->__PVT__u0__DOT__expb_ff) 
                              & (IData)(vlSelf->__PVT__u0__DOT__infb_f_r));
    vlSelf->__PVT__sign_mul_r = vlSelf->__PVT__sign_mul;
    vlSelf->__PVT__sign_exe_r = vlSelf->__PVT__sign_exe;
    vlSelf->__PVT__opa_inf = ((IData)(vlSelf->__PVT__u0__DOT__expa_ff) 
                              & (IData)(vlSelf->__PVT__u0__DOT__infa_f_r));
    vlSelf->__PVT__qnan_d = (((IData)(vlSelf->__PVT__u0__DOT__expa_ff) 
                              & (IData)(vlSelf->__PVT__u0__DOT__qnan_r_a)) 
                             | ((IData)(vlSelf->__PVT__u0__DOT__expb_ff) 
                                & (IData)(vlSelf->__PVT__u0__DOT__qnan_r_b)));
    vlSelf->__PVT__snan_d = (((IData)(vlSelf->__PVT__u0__DOT__expa_ff) 
                              & (IData)(vlSelf->__PVT__u0__DOT__snan_r_a)) 
                             | ((IData)(vlSelf->__PVT__u0__DOT__expb_ff) 
                                & (IData)(vlSelf->__PVT__u0__DOT__snan_r_b)));
    vlSelf->__PVT__opb_00 = ((IData)(vlSelf->__PVT__u0__DOT__expb_00) 
                             & (IData)(vlSelf->__PVT__u0__DOT__fractb_00));
    vlSelf->__PVT__inf_d = (((IData)(vlSelf->__PVT__u0__DOT__expa_ff) 
                             & (IData)(vlSelf->__PVT__u0__DOT__infa_f_r)) 
                            | ((IData)(vlSelf->__PVT__u0__DOT__expb_ff) 
                               & (IData)(vlSelf->__PVT__u0__DOT__infb_f_r)));
    vlSelf->__PVT__opa_00 = ((IData)(vlSelf->__PVT__u0__DOT__expa_00) 
                             & (IData)(vlSelf->__PVT__u0__DOT__fracta_00));
    vlSelf->__PVT__fpu_op_r3 = vlSelf->__PVT__fpu_op_r2;
    vlSelf->__PVT__opas_r2 = vlSelf->__PVT__opas_r1;
    vlSelf->__PVT__rmode_r3 = vlSelf->__PVT__rmode_r2;
    vlSelf->__PVT__exp_r = vlSelf->__PVT__exp_mul;
    vlSelf->__VdfgRegularize_h62b27241_3_12 = ((IData)(vlSelf->__PVT__inf_mul2) 
                                               | (IData)(vlSelf->__PVT__inf_mul_r));
    vlSelf->__PVT__opa_nan = (IData)(((0x7f800000U 
                                       == (0x7f800000U 
                                           & vlSelf->__PVT__opa_r)) 
                                      & (0U != (0x7fffffU 
                                                & vlSelf->__PVT__opa_r))));
    vlSelf->__PVT__sign_mul = vlSelf->__PVT__u2__DOT__sign_d;
    vlSelf->__PVT__sign_exe = ((vlSelf->__PVT__opa_r 
                                & vlSelf->__PVT__opb_r) 
                               >> 0x1fU);
    __VdfgRegularize_h62b27241_3_10 = ((IData)(vlSelf->__PVT__opa_inf) 
                                       | (IData)(vlSelf->__PVT__opb_inf));
    vlSelf->__PVT__u0__DOT__qnan_r_b = (1U & (vlSelf->__PVT__opb_r 
                                              >> 0x16U));
    vlSelf->__PVT__u0__DOT__qnan_r_a = (1U & (vlSelf->__PVT__opa_r 
                                              >> 0x16U));
    vlSelf->__VdfgRegularize_h62b27241_3_3 = ((IData)(vlSelf->__PVT__qnan_d) 
                                              | (IData)(vlSelf->__PVT__snan_d));
    vlSelf->__PVT__u0__DOT__snan_r_b = ((~ (vlSelf->__PVT__opb_r 
                                            >> 0x16U)) 
                                        & (0U != (0x3fffffU 
                                                  & vlSelf->__PVT__opb_r)));
    vlSelf->__PVT__u0__DOT__snan_r_a = ((~ (vlSelf->__PVT__opa_r 
                                            >> 0x16U)) 
                                        & (0U != (0x3fffffU 
                                                  & vlSelf->__PVT__opa_r)));
    vlSelf->__VdfgRegularize_h62b27241_3_4 = ((IData)(vlSelf->__PVT__opa_inf) 
                                              & (IData)(vlSelf->__PVT__opb_00));
    vlSelf->__PVT__u0__DOT__fractb_00 = (1U & (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (0x7fffffU 
                                                           & vlSelf->__PVT__opb_r)))));
    vlSelf->__PVT__u0__DOT__expb_00 = (1U & (~ (IData)(
                                                       (0U 
                                                        != 
                                                        (0xffU 
                                                         & (vlSelf->__PVT__opb_r 
                                                            >> 0x17U))))));
    vlSelf->__PVT__u0__DOT__infb_f_r = (1U & (~ (IData)(
                                                        (0U 
                                                         != 
                                                         (0x7fffffU 
                                                          & vlSelf->__PVT__opb_r)))));
    vlSelf->__PVT__u0__DOT__expb_ff = (0xffU == (0xffU 
                                                 & (vlSelf->__PVT__opb_r 
                                                    >> 0x17U)));
    vlSelf->__PVT__u0__DOT__infa_f_r = (1U & (~ (IData)(
                                                        (0U 
                                                         != 
                                                         (0x7fffffU 
                                                          & vlSelf->__PVT__opa_r)))));
    vlSelf->__PVT__u0__DOT__expa_ff = (0xffU == (0xffU 
                                                 & (vlSelf->__PVT__opa_r 
                                                    >> 0x17U)));
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
    vlSelf->__VdfgRegularize_h62b27241_3_5 = ((IData)(vlSelf->__PVT__opa_00) 
                                              & (IData)(vlSelf->__PVT__opb_inf));
    vlSelf->__VdfgRegularize_h62b27241_3_2 = ((IData)(vlSelf->__PVT__opa_00) 
                                              | (IData)(vlSelf->__PVT__opb_00));
    vlSelf->__PVT__fpu_op_r2 = vlSelf->__PVT__fpu_op_r1;
    vlSelf->__PVT__opas_r1 = (vlSelf->__PVT__opa_r 
                              >> 0x1fU);
    vlSelf->__PVT__rmode_r2 = vlSelf->__PVT__rmode_r1;
    vlSelf->__VdfgRegularize_h62b27241_3_9 = ((IData)(vlSelf->__VdfgRegularize_h62b27241_3_12) 
                                              & (0U 
                                                 == (IData)(vlSelf->__PVT__rmode_r3)));
    vlSelf->__VdfgRegularize_h62b27241_3_11 = ((IData)(vlSelf->__VdfgRegularize_h62b27241_3_12) 
                                               | (IData)(__VdfgRegularize_h62b27241_3_10));
    vlSelf->__VdfgRegularize_h62b27241_3_7 = ((IData)(vlSelf->__VdfgRegularize_h62b27241_3_4) 
                                              | (IData)(vlSelf->__VdfgRegularize_h62b27241_3_5));
    vlSelf->__PVT__or_result = (((2U == (IData)(vlSelf->__PVT__fpu_op_r3)) 
                                 & (IData)(vlSelf->__VdfgRegularize_h62b27241_3_2)) 
                                | ((3U == (IData)(vlSelf->__PVT__fpu_op_r3)) 
                                   & ((IData)(vlSelf->__PVT__opa_00) 
                                      | (IData)(vlSelf->__PVT__opb_inf))));
    vlSelf->__PVT__inf_mul = (1U & ((3U == (IData)(vlSelf->__PVT__fpu_op_r1))
                                     ? ((~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0xffU 
                                                     & (vlSelf->__PVT__opb_r 
                                                        >> 0x17U))))) 
                                        & (~ (vlSelf->__PVT__opa_r 
                                              >> 0x1eU)))
                                     : (0x17eU < (IData)(vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_8))));
    vlSelf->__PVT__opb_r = vlSymsp->TOP.co_sim_syn2__DOT__in4;
    vlSelf->__PVT__inf_fmul = (((IData)(vlSelf->__VdfgRegularize_h62b27241_3_9) 
                                | (IData)(__VdfgRegularize_h62b27241_3_10)) 
                               & ((~ (IData)(vlSelf->__VdfgRegularize_h62b27241_3_7)) 
                                  & (2U == (IData)(vlSelf->__PVT__fpu_op_r3))));
    vlSelf->__PVT__opa_r = vlSymsp->TOP.co_sim_syn2__DOT__in5;
    vlSelf->__PVT__rmode_r1 = 0U;
    vlSelf->__PVT__exp_mul = (0xffU & ((3U == (IData)(vlSelf->__PVT__fpu_op_r1))
                                        ? ((IData)(vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_10)
                                            ? ((0x100U 
                                                & (IData)(vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_9))
                                                ? (IData)(vlSelf->__PVT__u2__DOT__exp_tmp5)
                                                : ((IData)(1U) 
                                                   + (IData)(vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_9)))
                                            : ((0x100U 
                                                & (IData)(vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_9))
                                                ? ((IData)(0x7fU) 
                                                   - (IData)(vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_8))
                                                : (IData)(vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_9)))
                                        : ((IData)(vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_12)
                                            ? ((IData)(vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_10)
                                                ? (IData)(vlSelf->__PVT__u2__DOT__exp_tmp5)
                                                : ((IData)(0x7fU) 
                                                   - (IData)(vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_8)))
                                            : ((IData)(vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_9) 
                                               + (IData)(vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_10)))));
    vlSelf->__PVT__fpu_op_r1 = vlSelf->__PVT__fpu_op;
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
    vlSelf->__PVT__fpu_op = 2U;
}
