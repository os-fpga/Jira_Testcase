// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vco_sim_syn2.h for the primary calling header

#include "Vco_sim_syn2__pch.h"
#include "Vco_sim_syn2__Syms.h"
#include "Vco_sim_syn2_fpu_add.h"
#include "Vco_sim_syn2_post_norm.h"

VL_INLINE_OPT void Vco_sim_syn2_fpu_add___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__add1_add__1(Vco_sim_syn2_fpu_add* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_syn2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vco_sim_syn2_fpu_add___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__add1_add__1\n"); );
    // Body
    vlSelf->out = vlSelf->__PVT__out_o1;
    vlSelf->__PVT__out_o1 = ((0x80000000U & vlSelf->__PVT__out_o1) 
                             | ((((IData)(vlSelf->__PVT__inf_d) 
                                  | (IData)(vlSelf->__PVT__snan_d)) 
                                 | (IData)(vlSelf->__PVT__qnan_d))
                                 ? (((IData)(vlSelf->__VdfgRegularize_h16e0ae4d_5_0) 
                                     | ((~ (IData)(vlSelf->__PVT__fasu_op_r2)) 
                                        & (IData)(vlSelf->__PVT__ind_d)))
                                     ? 0x7fc00001U : 0x7f800000U)
                                 : vlSelf->__PVT__u4->__PVT__out));
    vlSelf->__PVT__out_o1 = ((0x7fffffffU & vlSelf->__PVT__out_o1) 
                             | (((((IData)(vlSelf->__PVT__snan_d) 
                                   | (IData)(vlSelf->__PVT__qnan_d)) 
                                  | (IData)(vlSelf->__PVT__ind_d))
                                  ? (IData)(vlSelf->__PVT__nan_sign_d)
                                  : ((IData)(vlSelf->__PVT__output_zero_fasu)
                                      ? (IData)(vlSelf->__PVT__result_zero_sign_d)
                                      : (IData)(vlSelf->__PVT__sign_fasu_r))) 
                                << 0x1fU));
    vlSelf->__PVT__fasu_op_r2 = vlSelf->__PVT__fasu_op_r1;
    vlSelf->__PVT__inf_d = (((IData)(vlSelf->__PVT__u0__DOT__expa_ff) 
                             & (IData)(vlSelf->__PVT__u0__DOT__infa_f_r)) 
                            | ((IData)(vlSelf->__PVT__u0__DOT__expb_ff) 
                               & (IData)(vlSelf->__PVT__u0__DOT__infb_f_r)));
    vlSelf->__PVT__sign_fasu_r = vlSelf->__PVT__sign_fasu;
    vlSelf->__PVT__result_zero_sign_d = ((((((IData)(vlSelf->__PVT__u1__DOT__add_r) 
                                             & (IData)(vlSelf->__PVT__u1__DOT__signa_r)) 
                                            & (IData)(vlSelf->__PVT__u1__DOT__signb_r)) 
                                           | (((~ (IData)(vlSelf->__PVT__u1__DOT__add_r)) 
                                               & (IData)(vlSelf->__PVT__u1__DOT__signa_r)) 
                                              & (~ (IData)(vlSelf->__PVT__u1__DOT__signb_r)))) 
                                          | (((IData)(vlSelf->__PVT__u1__DOT__add_r) 
                                              & ((IData)(vlSelf->__PVT__u1__DOT__signa_r) 
                                                 | (IData)(vlSelf->__PVT__u1__DOT__signb_r))) 
                                             & (3U 
                                                == (IData)(vlSelf->__PVT__rmode_r2)))) 
                                         | (((~ (IData)(vlSelf->__PVT__u1__DOT__add_r)) 
                                             & ((IData)(vlSelf->__PVT__u1__DOT__signa_r) 
                                                == (IData)(vlSelf->__PVT__u1__DOT__signb_r))) 
                                            & (3U == (IData)(vlSelf->__PVT__rmode_r2))));
    vlSelf->__PVT__ind_d = (((IData)(vlSelf->__PVT__u0__DOT__expa_ff) 
                             & (IData)(vlSelf->__PVT__u0__DOT__infa_f_r)) 
                            & ((IData)(vlSelf->__PVT__u0__DOT__expb_ff) 
                               & (IData)(vlSelf->__PVT__u0__DOT__infb_f_r)));
    vlSelf->__PVT__qnan_d = (((IData)(vlSelf->__PVT__u0__DOT__expa_ff) 
                              & (IData)(vlSelf->__PVT__u0__DOT__qnan_r_a)) 
                             | ((IData)(vlSelf->__PVT__u0__DOT__expb_ff) 
                                & (IData)(vlSelf->__PVT__u0__DOT__qnan_r_b)));
    vlSelf->__PVT__snan_d = (((IData)(vlSelf->__PVT__u0__DOT__expa_ff) 
                              & (IData)(vlSelf->__PVT__u0__DOT__snan_r_a)) 
                             | ((IData)(vlSelf->__PVT__u0__DOT__expb_ff) 
                                & (IData)(vlSelf->__PVT__u0__DOT__snan_r_b)));
    vlSelf->__PVT__nan_sign_d = (((IData)(vlSelf->__PVT__opa_nan) 
                                  & (IData)(vlSelf->__PVT__opb_nan))
                                  ? ((IData)(vlSelf->__PVT__u1__DOT__fracta_eq_fractb)
                                      ? ((IData)(vlSelf->__PVT__u1__DOT__signa_r) 
                                         & (IData)(vlSelf->__PVT__u1__DOT__signb_r))
                                      : ((IData)(vlSelf->__PVT__u1__DOT__fracta_lt_fractb)
                                          ? (IData)(vlSelf->__PVT__u1__DOT__signb_r)
                                          : (IData)(vlSelf->__PVT__u1__DOT__signa_r)))
                                  : ((IData)(vlSelf->__PVT__opb_nan)
                                      ? (IData)(vlSelf->__PVT__u1__DOT__signb_r)
                                      : (IData)(vlSelf->__PVT__u1__DOT__signa_r)));
    vlSelf->__PVT__fasu_op_r1 = vlSelf->__PVT__fasu_op;
    vlSelf->__PVT__sign_fasu = vlSelf->__PVT__u1__DOT__sign_d;
    vlSelf->__PVT__rmode_r2 = vlSelf->__PVT__rmode_r1;
    vlSelf->__PVT__u1__DOT__add_r = (1U & (~ (IData)(vlSelf->__PVT__fpu_op_r1)));
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
    vlSelf->__VdfgRegularize_h16e0ae4d_5_0 = ((IData)(vlSelf->__PVT__qnan_d) 
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
    vlSelf->__PVT__opb_nan = (IData)(((0x7f800000U 
                                       == (0x7f800000U 
                                           & vlSelf->__PVT__opb_r)) 
                                      & (0U != (0x7fffffU 
                                                & vlSelf->__PVT__opb_r))));
    vlSelf->__PVT__u1__DOT__signb_r = (vlSelf->__PVT__opb_r 
                                       >> 0x1fU);
    vlSelf->__PVT__opa_nan = (IData)(((0x7f800000U 
                                       == (0x7f800000U 
                                           & vlSelf->__PVT__opa_r)) 
                                      & (0U != (0x7fffffU 
                                                & vlSelf->__PVT__opa_r))));
    vlSelf->__PVT__u1__DOT__signa_r = (vlSelf->__PVT__opa_r 
                                       >> 0x1fU);
    vlSelf->__PVT__u1__DOT__fracta_eq_fractb = ((0x7fffffU 
                                                 & vlSelf->__PVT__opa_r) 
                                                == 
                                                (0x7fffffU 
                                                 & vlSelf->__PVT__opb_r));
    vlSelf->__PVT__u1__DOT__fracta_lt_fractb = ((0x7fffffU 
                                                 & vlSelf->__PVT__opa_r) 
                                                < (0x7fffffU 
                                                   & vlSelf->__PVT__opb_r));
    vlSelf->__VdfgRegularize_h16e0ae4d_5_1 = (1U & 
                                              (~ ((IData)(vlSelf->__VdfgRegularize_h16e0ae4d_5_0) 
                                                  | (IData)(vlSelf->__PVT__inf_d))));
    vlSelf->__VdfgRegularize_h16e0ae4d_5_2 = (1U & 
                                              (~ ((IData)(vlSelf->__PVT__inf_d) 
                                                  | (IData)(vlSelf->__VdfgRegularize_h16e0ae4d_5_0))));
    vlSelf->__PVT__fasu_op = vlSelf->__PVT__u1__DOT__add_d;
    vlSelf->__PVT__rmode_r1 = 0U;
    vlSelf->__PVT__fpu_op_r1 = vlSelf->__PVT__fpu_op;
    vlSelf->__PVT__opb_r = vlSymsp->TOP.co_sim_syn2__DOT__in4;
    vlSelf->__PVT__opa_r = vlSymsp->TOP.co_sim_syn2__DOT__golden__DOT__reg6;
    vlSelf->u3__DOT____VdfgRegularize_h60e48f75_0_0 
        = (0xfffffffU & ((IData)(vlSelf->__PVT__fasu_op)
                          ? (vlSelf->__PVT__fracta 
                             + vlSelf->__PVT__fractb)
                          : (vlSelf->__PVT__fracta 
                             - vlSelf->__PVT__fractb)));
    vlSelf->__PVT__fpu_op = 0U;
    vlSelf->__PVT__u1__DOT__add_d = (1U & ((vlSelf->__PVT__opa_r 
                                            >> 0x1fU)
                                            ? ((vlSelf->__PVT__opb_r 
                                                >> 0x1fU)
                                                ? (~ (IData)(vlSelf->__PVT__fpu_op_r1))
                                                : (IData)(vlSelf->__PVT__fpu_op_r1))
                                            : ((vlSelf->__PVT__opb_r 
                                                >> 0x1fU)
                                                ? (IData)(vlSelf->__PVT__fpu_op_r1)
                                                : (~ (IData)(vlSelf->__PVT__fpu_op_r1)))));
    vlSelf->u1__DOT____VdfgRegularize_h05e998eb_0_2 
        = (1U & ((~ (IData)((0U != (0xffU & (vlSelf->__PVT__opa_r 
                                             >> 0x17U))))) 
                 & (~ (IData)((0U != (0xffU & (vlSelf->__PVT__opb_r 
                                               >> 0x17U)))))));
    vlSelf->__PVT__u1__DOT__expa_lt_expb = ((0xffU 
                                             & (vlSelf->__PVT__opa_r 
                                                >> 0x17U)) 
                                            > (0xffU 
                                               & (vlSelf->__PVT__opb_r 
                                                  >> 0x17U)));
    vlSelf->__PVT__u1__DOT__exp_large = (0xffU & ((IData)(vlSelf->__PVT__u1__DOT__expa_lt_expb)
                                                   ? 
                                                  (vlSelf->__PVT__opa_r 
                                                   >> 0x17U)
                                                   : 
                                                  (vlSelf->__PVT__opb_r 
                                                   >> 0x17U)));
    vlSelf->__PVT__u1__DOT__exp_diff2 = (0xffU & (((IData)(vlSelf->__PVT__u1__DOT__exp_large) 
                                                   - 
                                                   ((IData)(vlSelf->__PVT__u1__DOT__expa_lt_expb)
                                                     ? 
                                                    (vlSelf->__PVT__opb_r 
                                                     >> 0x17U)
                                                     : 
                                                    (vlSelf->__PVT__opa_r 
                                                     >> 0x17U))) 
                                                  - 
                                                  (1U 
                                                   & ((~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0xffU 
                                                                   & (vlSelf->__PVT__opa_r 
                                                                      >> 0x17U))))) 
                                                      | (~ (IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0xffU 
                                                                     & (vlSelf->__PVT__opb_r 
                                                                        >> 0x17U)))))))));
}

VL_INLINE_OPT void Vco_sim_syn2_fpu_add___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__add2_add__1(Vco_sim_syn2_fpu_add* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_syn2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vco_sim_syn2_fpu_add___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__add2_add__1\n"); );
    // Body
    vlSelf->out = vlSelf->__PVT__out_o1;
    vlSelf->__PVT__out_o1 = ((0x80000000U & vlSelf->__PVT__out_o1) 
                             | ((((IData)(vlSelf->__PVT__inf_d) 
                                  | (IData)(vlSelf->__PVT__snan_d)) 
                                 | (IData)(vlSelf->__PVT__qnan_d))
                                 ? (((IData)(vlSelf->__VdfgRegularize_h16e0ae4d_5_0) 
                                     | ((~ (IData)(vlSelf->__PVT__fasu_op_r2)) 
                                        & (IData)(vlSelf->__PVT__ind_d)))
                                     ? 0x7fc00001U : 0x7f800000U)
                                 : vlSelf->__PVT__u4->__PVT__out));
    vlSelf->__PVT__out_o1 = ((0x7fffffffU & vlSelf->__PVT__out_o1) 
                             | (((((IData)(vlSelf->__PVT__snan_d) 
                                   | (IData)(vlSelf->__PVT__qnan_d)) 
                                  | (IData)(vlSelf->__PVT__ind_d))
                                  ? (IData)(vlSelf->__PVT__nan_sign_d)
                                  : ((IData)(vlSelf->__PVT__output_zero_fasu)
                                      ? (IData)(vlSelf->__PVT__result_zero_sign_d)
                                      : (IData)(vlSelf->__PVT__sign_fasu_r))) 
                                << 0x1fU));
    vlSelf->__PVT__fasu_op_r2 = vlSelf->__PVT__fasu_op_r1;
    vlSelf->__PVT__inf_d = (((IData)(vlSelf->__PVT__u0__DOT__expa_ff) 
                             & (IData)(vlSelf->__PVT__u0__DOT__infa_f_r)) 
                            | ((IData)(vlSelf->__PVT__u0__DOT__expb_ff) 
                               & (IData)(vlSelf->__PVT__u0__DOT__infb_f_r)));
    vlSelf->__PVT__sign_fasu_r = vlSelf->__PVT__sign_fasu;
    vlSelf->__PVT__result_zero_sign_d = ((((((IData)(vlSelf->__PVT__u1__DOT__add_r) 
                                             & (IData)(vlSelf->__PVT__u1__DOT__signa_r)) 
                                            & (IData)(vlSelf->__PVT__u1__DOT__signb_r)) 
                                           | (((~ (IData)(vlSelf->__PVT__u1__DOT__add_r)) 
                                               & (IData)(vlSelf->__PVT__u1__DOT__signa_r)) 
                                              & (~ (IData)(vlSelf->__PVT__u1__DOT__signb_r)))) 
                                          | (((IData)(vlSelf->__PVT__u1__DOT__add_r) 
                                              & ((IData)(vlSelf->__PVT__u1__DOT__signa_r) 
                                                 | (IData)(vlSelf->__PVT__u1__DOT__signb_r))) 
                                             & (3U 
                                                == (IData)(vlSelf->__PVT__rmode_r2)))) 
                                         | (((~ (IData)(vlSelf->__PVT__u1__DOT__add_r)) 
                                             & ((IData)(vlSelf->__PVT__u1__DOT__signa_r) 
                                                == (IData)(vlSelf->__PVT__u1__DOT__signb_r))) 
                                            & (3U == (IData)(vlSelf->__PVT__rmode_r2))));
    vlSelf->__PVT__ind_d = (((IData)(vlSelf->__PVT__u0__DOT__expa_ff) 
                             & (IData)(vlSelf->__PVT__u0__DOT__infa_f_r)) 
                            & ((IData)(vlSelf->__PVT__u0__DOT__expb_ff) 
                               & (IData)(vlSelf->__PVT__u0__DOT__infb_f_r)));
    vlSelf->__PVT__qnan_d = (((IData)(vlSelf->__PVT__u0__DOT__expa_ff) 
                              & (IData)(vlSelf->__PVT__u0__DOT__qnan_r_a)) 
                             | ((IData)(vlSelf->__PVT__u0__DOT__expb_ff) 
                                & (IData)(vlSelf->__PVT__u0__DOT__qnan_r_b)));
    vlSelf->__PVT__snan_d = (((IData)(vlSelf->__PVT__u0__DOT__expa_ff) 
                              & (IData)(vlSelf->__PVT__u0__DOT__snan_r_a)) 
                             | ((IData)(vlSelf->__PVT__u0__DOT__expb_ff) 
                                & (IData)(vlSelf->__PVT__u0__DOT__snan_r_b)));
    vlSelf->__PVT__nan_sign_d = (((IData)(vlSelf->__PVT__opa_nan) 
                                  & (IData)(vlSelf->__PVT__opb_nan))
                                  ? ((IData)(vlSelf->__PVT__u1__DOT__fracta_eq_fractb)
                                      ? ((IData)(vlSelf->__PVT__u1__DOT__signa_r) 
                                         & (IData)(vlSelf->__PVT__u1__DOT__signb_r))
                                      : ((IData)(vlSelf->__PVT__u1__DOT__fracta_lt_fractb)
                                          ? (IData)(vlSelf->__PVT__u1__DOT__signb_r)
                                          : (IData)(vlSelf->__PVT__u1__DOT__signa_r)))
                                  : ((IData)(vlSelf->__PVT__opb_nan)
                                      ? (IData)(vlSelf->__PVT__u1__DOT__signb_r)
                                      : (IData)(vlSelf->__PVT__u1__DOT__signa_r)));
    vlSelf->__PVT__fasu_op_r1 = vlSelf->__PVT__fasu_op;
    vlSelf->__PVT__sign_fasu = vlSelf->__PVT__u1__DOT__sign_d;
    vlSelf->__PVT__rmode_r2 = vlSelf->__PVT__rmode_r1;
    vlSelf->__PVT__u1__DOT__add_r = (1U & (~ (IData)(vlSelf->__PVT__fpu_op_r1)));
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
    vlSelf->__VdfgRegularize_h16e0ae4d_5_0 = ((IData)(vlSelf->__PVT__qnan_d) 
                                              | (IData)(vlSelf->__PVT__snan_d));
    vlSelf->__PVT__u0__DOT__snan_r_a = ((~ (vlSelf->__PVT__opa_r 
                                            >> 0x16U)) 
                                        & (0U != (0x3fffffU 
                                                  & vlSelf->__PVT__opa_r)));
    vlSelf->__PVT__u0__DOT__expa_ff = (0xffU == (0xffU 
                                                 & (vlSelf->__PVT__opa_r 
                                                    >> 0x17U)));
    vlSelf->__PVT__u0__DOT__snan_r_b = ((~ (vlSelf->__PVT__opb_r 
                                            >> 0x16U)) 
                                        & (0U != (0x3fffffU 
                                                  & vlSelf->__PVT__opb_r)));
    vlSelf->__PVT__u0__DOT__expb_ff = (0xffU == (0xffU 
                                                 & (vlSelf->__PVT__opb_r 
                                                    >> 0x17U)));
    vlSelf->__PVT__opa_nan = (IData)(((0x7f800000U 
                                       == (0x7f800000U 
                                           & vlSelf->__PVT__opa_r)) 
                                      & (0U != (0x7fffffU 
                                                & vlSelf->__PVT__opa_r))));
    vlSelf->__PVT__u1__DOT__signa_r = (vlSelf->__PVT__opa_r 
                                       >> 0x1fU);
    vlSelf->__PVT__opb_nan = (IData)(((0x7f800000U 
                                       == (0x7f800000U 
                                           & vlSelf->__PVT__opb_r)) 
                                      & (0U != (0x7fffffU 
                                                & vlSelf->__PVT__opb_r))));
    vlSelf->__PVT__u1__DOT__signb_r = (vlSelf->__PVT__opb_r 
                                       >> 0x1fU);
    vlSelf->__PVT__u1__DOT__fracta_eq_fractb = ((0x7fffffU 
                                                 & vlSelf->__PVT__opa_r) 
                                                == 
                                                (0x7fffffU 
                                                 & vlSelf->__PVT__opb_r));
    vlSelf->__PVT__u1__DOT__fracta_lt_fractb = ((0x7fffffU 
                                                 & vlSelf->__PVT__opa_r) 
                                                < (0x7fffffU 
                                                   & vlSelf->__PVT__opb_r));
    vlSelf->__VdfgRegularize_h16e0ae4d_5_1 = (1U & 
                                              (~ ((IData)(vlSelf->__VdfgRegularize_h16e0ae4d_5_0) 
                                                  | (IData)(vlSelf->__PVT__inf_d))));
    vlSelf->__VdfgRegularize_h16e0ae4d_5_2 = (1U & 
                                              (~ ((IData)(vlSelf->__PVT__inf_d) 
                                                  | (IData)(vlSelf->__VdfgRegularize_h16e0ae4d_5_0))));
    vlSelf->__PVT__fasu_op = vlSelf->__PVT__u1__DOT__add_d;
    vlSelf->__PVT__rmode_r1 = 0U;
    vlSelf->__PVT__fpu_op_r1 = vlSelf->__PVT__fpu_op;
    vlSelf->__PVT__opa_r = vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.out;
    vlSelf->__PVT__opb_r = vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.out;
    vlSelf->u3__DOT____VdfgRegularize_h60e48f75_0_0 
        = (0xfffffffU & ((IData)(vlSelf->__PVT__fasu_op)
                          ? (vlSelf->__PVT__fracta 
                             + vlSelf->__PVT__fractb)
                          : (vlSelf->__PVT__fracta 
                             - vlSelf->__PVT__fractb)));
    vlSelf->__PVT__fpu_op = 0U;
    vlSelf->__PVT__u1__DOT__add_d = (1U & ((vlSelf->__PVT__opa_r 
                                            >> 0x1fU)
                                            ? ((vlSelf->__PVT__opb_r 
                                                >> 0x1fU)
                                                ? (~ (IData)(vlSelf->__PVT__fpu_op_r1))
                                                : (IData)(vlSelf->__PVT__fpu_op_r1))
                                            : ((vlSelf->__PVT__opb_r 
                                                >> 0x1fU)
                                                ? (IData)(vlSelf->__PVT__fpu_op_r1)
                                                : (~ (IData)(vlSelf->__PVT__fpu_op_r1)))));
    vlSelf->u1__DOT____VdfgRegularize_h05e998eb_0_2 
        = (1U & ((~ (IData)((0U != (0xffU & (vlSelf->__PVT__opa_r 
                                             >> 0x17U))))) 
                 & (~ (IData)((0U != (0xffU & (vlSelf->__PVT__opb_r 
                                               >> 0x17U)))))));
    vlSelf->__PVT__u1__DOT__expa_lt_expb = ((0xffU 
                                             & (vlSelf->__PVT__opa_r 
                                                >> 0x17U)) 
                                            > (0xffU 
                                               & (vlSelf->__PVT__opb_r 
                                                  >> 0x17U)));
    vlSelf->__PVT__u1__DOT__exp_large = (0xffU & ((IData)(vlSelf->__PVT__u1__DOT__expa_lt_expb)
                                                   ? 
                                                  (vlSelf->__PVT__opa_r 
                                                   >> 0x17U)
                                                   : 
                                                  (vlSelf->__PVT__opb_r 
                                                   >> 0x17U)));
    vlSelf->__PVT__u1__DOT__exp_diff2 = (0xffU & (((IData)(vlSelf->__PVT__u1__DOT__exp_large) 
                                                   - 
                                                   ((IData)(vlSelf->__PVT__u1__DOT__expa_lt_expb)
                                                     ? 
                                                    (vlSelf->__PVT__opb_r 
                                                     >> 0x17U)
                                                     : 
                                                    (vlSelf->__PVT__opa_r 
                                                     >> 0x17U))) 
                                                  - 
                                                  (1U 
                                                   & ((~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0xffU 
                                                                   & (vlSelf->__PVT__opa_r 
                                                                      >> 0x17U))))) 
                                                      | (~ (IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0xffU 
                                                                     & (vlSelf->__PVT__opb_r 
                                                                        >> 0x17U)))))))));
}

VL_INLINE_OPT void Vco_sim_syn2_fpu_add___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__add3_add__0(Vco_sim_syn2_fpu_add* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_syn2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vco_sim_syn2_fpu_add___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__add3_add__0\n"); );
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
    vlSelf->__PVT__opa_00 = ((IData)(vlSelf->__PVT__u0__DOT__expa_00) 
                             & (IData)(vlSelf->__PVT__u0__DOT__fracta_00));
    vlSelf->__PVT__opa_inf = ((IData)(vlSelf->__PVT__u0__DOT__expa_ff) 
                              & (IData)(vlSelf->__PVT__u0__DOT__infa_f_r));
    vlSelf->__PVT__opb_00 = ((IData)(vlSelf->__PVT__u0__DOT__expb_00) 
                             & (IData)(vlSelf->__PVT__u0__DOT__fractb_00));
    vlSelf->__PVT__opb_inf = ((IData)(vlSelf->__PVT__u0__DOT__expb_ff) 
                              & (IData)(vlSelf->__PVT__u0__DOT__infb_f_r));
    vlSelf->__PVT__snan = vlSelf->__PVT__snan_o1;
    vlSelf->__PVT__qnan = vlSelf->__PVT__qnan_o1;
    vlSelf->out = vlSelf->__PVT__out_o1;
    vlSelf->__PVT__opa_dn = vlSelf->__PVT__u0__DOT__expa_00;
    vlSelf->__PVT__opb_dn = vlSelf->__PVT__u0__DOT__expb_00;
    vlSelf->__PVT__inf = vlSelf->__PVT__inf_o1;
    vlSelf->__PVT__ine = vlSelf->__PVT__ine_o1;
    vlSelf->__PVT__div_by_zero_o1 = 0U;
    vlSelf->__PVT__zero_o1 = vlSelf->__PVT__output_zero_fasu;
    vlSelf->__PVT__overflow_o1 = ((IData)(vlSelf->__VdfgRegularize_h16e0ae4d_5_1) 
                                  & (IData)(vlSelf->__PVT__u4->__PVT__overflow));
    vlSelf->__PVT__underflow_o1 = ((IData)(vlSelf->__VdfgRegularize_h16e0ae4d_5_2) 
                                   & (IData)(vlSelf->__PVT__u4->__PVT__underflow));
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
    vlSelf->__PVT__snan_o1 = vlSelf->__PVT__snan_d;
    vlSelf->__PVT__qnan_o1 = (((IData)(vlSelf->__PVT__snan_d) 
                               | (IData)(vlSelf->__PVT__qnan_d)) 
                              | ((IData)(vlSelf->__PVT__ind_d) 
                                 & (~ (IData)(vlSelf->__PVT__fasu_op_r2))));
    vlSelf->__PVT__out_o1 = ((0x80000000U & vlSelf->__PVT__out_o1) 
                             | ((((IData)(vlSelf->__PVT__inf_d) 
                                  | (IData)(vlSelf->__PVT__snan_d)) 
                                 | (IData)(vlSelf->__PVT__qnan_d))
                                 ? (((IData)(vlSelf->__VdfgRegularize_h16e0ae4d_5_0) 
                                     | ((~ (IData)(vlSelf->__PVT__fasu_op_r2)) 
                                        & (IData)(vlSelf->__PVT__ind_d)))
                                     ? 0x7fc00001U : 0x7f800000U)
                                 : vlSelf->__PVT__u4->__PVT__out));
    vlSelf->__PVT__out_o1 = ((0x7fffffffU & vlSelf->__PVT__out_o1) 
                             | (((((IData)(vlSelf->__PVT__snan_d) 
                                   | (IData)(vlSelf->__PVT__qnan_d)) 
                                  | (IData)(vlSelf->__PVT__ind_d))
                                  ? (IData)(vlSelf->__PVT__nan_sign_d)
                                  : ((IData)(vlSelf->__PVT__output_zero_fasu)
                                      ? (IData)(vlSelf->__PVT__result_zero_sign_d)
                                      : (IData)(vlSelf->__PVT__sign_fasu_r))) 
                                << 0x1fU));
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
    vlSelf->__PVT__inf_o1 = ((~ ((IData)(vlSelf->__PVT__qnan_d) 
                                 | (IData)(vlSelf->__PVT__snan_d))) 
                             & ((IData)(((0x7f800000U 
                                          == (0x7f800000U 
                                              & vlSelf->__PVT__u4->__PVT__out)) 
                                         & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (0x7fffffU 
                                                        & vlSelf->__PVT__u4->__PVT__out)))))) 
                                | (((IData)(vlSelf->__PVT__inf_d) 
                                    & (~ ((IData)(vlSelf->__PVT__ind_d) 
                                          & (~ (IData)(vlSelf->__PVT__fasu_op_r2))))) 
                                   & (~ ((IData)(vlSelf->__PVT__fpu_op_r3) 
                                         >> 1U)))));
    vlSelf->__PVT__ine_o1 = ((IData)(vlSelf->__VdfgRegularize_h16e0ae4d_5_1) 
                             & (((5U == (IData)(vlSelf->__PVT__fpu_op_r3))
                                  ? (((IData)(vlSelf->__PVT__u4->__PVT__f2i_zero) 
                                      & ((~ (IData)(vlSelf->__PVT__opas_r2)) 
                                         & (0U != vlSelf->__PVT__fract_out_q))) 
                                     | ((0U != (0x1ffffffU 
                                                & (IData)(vlSelf->__PVT__u4->__VdfgRegularize_he8d392c1_0_21))) 
                                        | (((IData)(vlSelf->__PVT__u4->__PVT__f2i_zero) 
                                            & ((0x80U 
                                                > (IData)(vlSelf->__PVT__exp_r)) 
                                               & ((0U 
                                                   != vlSelf->__PVT__fract_out_q) 
                                                  & (IData)(vlSelf->__PVT__opas_r2)))) 
                                           | ((IData)(vlSelf->__PVT__u4->__PVT__f2i_max) 
                                              & ((3U 
                                                  == (IData)(vlSelf->__PVT__rmode_r3)) 
                                                 & (0x80U 
                                                    > (IData)(vlSelf->__PVT__exp_r)))))))
                                  : ((4U == (IData)(vlSelf->__PVT__fpu_op_r3))
                                      ? (0U != (0x1ffffffU 
                                                & (IData)(vlSelf->__PVT__u4->__VdfgRegularize_he8d392c1_0_21)))
                                      : (((~ (IData)(vlSelf->__PVT__u4->__PVT__dn)) 
                                          & (IData)(vlSelf->__PVT__u4->__PVT__r)) 
                                         | (((~ (IData)(vlSelf->__PVT__u4->__PVT__dn)) 
                                             & (IData)(vlSelf->__PVT__u4->__PVT__s)) 
                                            | ((IData)(vlSelf->__PVT__u4->__PVT__max_num) 
                                               | (3U 
                                                  == (IData)(vlSelf->__PVT__fpu_op_r3))))))) 
                                | ((IData)(vlSelf->__PVT__u4->__PVT__overflow) 
                                   | (IData)(vlSelf->__PVT__u4->__PVT__underflow))));
    vlSelf->__PVT__sign_fasu_r = vlSelf->__PVT__sign_fasu;
    vlSelf->__PVT__result_zero_sign_d = ((((((IData)(vlSelf->__PVT__u1__DOT__add_r) 
                                             & (IData)(vlSelf->__PVT__u1__DOT__signa_r)) 
                                            & (IData)(vlSelf->__PVT__u1__DOT__signb_r)) 
                                           | (((~ (IData)(vlSelf->__PVT__u1__DOT__add_r)) 
                                               & (IData)(vlSelf->__PVT__u1__DOT__signa_r)) 
                                              & (~ (IData)(vlSelf->__PVT__u1__DOT__signb_r)))) 
                                          | (((IData)(vlSelf->__PVT__u1__DOT__add_r) 
                                              & ((IData)(vlSelf->__PVT__u1__DOT__signa_r) 
                                                 | (IData)(vlSelf->__PVT__u1__DOT__signb_r))) 
                                             & (3U 
                                                == (IData)(vlSelf->__PVT__rmode_r2)))) 
                                         | (((~ (IData)(vlSelf->__PVT__u1__DOT__add_r)) 
                                             & ((IData)(vlSelf->__PVT__u1__DOT__signa_r) 
                                                == (IData)(vlSelf->__PVT__u1__DOT__signb_r))) 
                                            & (3U == (IData)(vlSelf->__PVT__rmode_r2))));
    vlSelf->__PVT__nan_sign_d = (((IData)(vlSelf->__PVT__opa_nan) 
                                  & (IData)(vlSelf->__PVT__opb_nan))
                                  ? ((IData)(vlSelf->__PVT__u1__DOT__fracta_eq_fractb)
                                      ? ((IData)(vlSelf->__PVT__u1__DOT__signa_r) 
                                         & (IData)(vlSelf->__PVT__u1__DOT__signb_r))
                                      : ((IData)(vlSelf->__PVT__u1__DOT__fracta_lt_fractb)
                                          ? (IData)(vlSelf->__PVT__u1__DOT__signb_r)
                                          : (IData)(vlSelf->__PVT__u1__DOT__signa_r)))
                                  : ((IData)(vlSelf->__PVT__opb_nan)
                                      ? (IData)(vlSelf->__PVT__u1__DOT__signb_r)
                                      : (IData)(vlSelf->__PVT__u1__DOT__signa_r)));
    vlSelf->__PVT__fasu_op_r2 = vlSelf->__PVT__fasu_op_r1;
    vlSelf->__PVT__ind_d = (((IData)(vlSelf->__PVT__u0__DOT__expa_ff) 
                             & (IData)(vlSelf->__PVT__u0__DOT__infa_f_r)) 
                            & ((IData)(vlSelf->__PVT__u0__DOT__expb_ff) 
                               & (IData)(vlSelf->__PVT__u0__DOT__infb_f_r)));
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
    vlSelf->__PVT__opas_r2 = vlSelf->__PVT__opas_r1;
    vlSelf->__PVT__rmode_r3 = vlSelf->__PVT__rmode_r2;
    vlSelf->__PVT__fract_out_q = vlSelf->u3__DOT____VdfgRegularize_h60e48f75_0_0;
    vlSelf->__PVT__exp_r = vlSelf->__PVT__exp_fasu;
    vlSelf->__PVT__sign_fasu = vlSelf->__PVT__u1__DOT__sign_d;
    vlSelf->__PVT__u1__DOT__add_r = (1U & (~ (IData)(vlSelf->__PVT__fpu_op_r1)));
    vlSelf->__PVT__opa_nan = (IData)(((0x7f800000U 
                                       == (0x7f800000U 
                                           & vlSelf->__PVT__opa_r)) 
                                      & (0U != (0x7fffffU 
                                                & vlSelf->__PVT__opa_r))));
    vlSelf->__PVT__u1__DOT__signa_r = (vlSelf->__PVT__opa_r 
                                       >> 0x1fU);
    vlSelf->__PVT__opb_nan = (IData)(((0x7f800000U 
                                       == (0x7f800000U 
                                           & vlSelf->__PVT__opb_r)) 
                                      & (0U != (0x7fffffU 
                                                & vlSelf->__PVT__opb_r))));
    vlSelf->__PVT__u1__DOT__signb_r = (vlSelf->__PVT__opb_r 
                                       >> 0x1fU);
    vlSelf->__PVT__u1__DOT__fracta_eq_fractb = ((0x7fffffU 
                                                 & vlSelf->__PVT__opa_r) 
                                                == 
                                                (0x7fffffU 
                                                 & vlSelf->__PVT__opb_r));
    vlSelf->__PVT__u1__DOT__fracta_lt_fractb = ((0x7fffffU 
                                                 & vlSelf->__PVT__opa_r) 
                                                < (0x7fffffU 
                                                   & vlSelf->__PVT__opb_r));
    vlSelf->__PVT__fasu_op_r1 = vlSelf->__PVT__fasu_op;
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
    vlSelf->__VdfgRegularize_h16e0ae4d_5_0 = ((IData)(vlSelf->__PVT__qnan_d) 
                                              | (IData)(vlSelf->__PVT__snan_d));
    vlSelf->__PVT__u0__DOT__snan_r_a = ((~ (vlSelf->__PVT__opa_r 
                                            >> 0x16U)) 
                                        & (0U != (0x3fffffU 
                                                  & vlSelf->__PVT__opa_r)));
    vlSelf->__PVT__u0__DOT__expa_ff = (0xffU == (0xffU 
                                                 & (vlSelf->__PVT__opa_r 
                                                    >> 0x17U)));
    vlSelf->__PVT__u0__DOT__snan_r_b = ((~ (vlSelf->__PVT__opb_r 
                                            >> 0x16U)) 
                                        & (0U != (0x3fffffU 
                                                  & vlSelf->__PVT__opb_r)));
    vlSelf->__PVT__u0__DOT__expb_ff = (0xffU == (0xffU 
                                                 & (vlSelf->__PVT__opb_r 
                                                    >> 0x17U)));
    vlSelf->__PVT__fpu_op_r2 = vlSelf->__PVT__fpu_op_r1;
    vlSelf->__PVT__opas_r1 = (vlSelf->__PVT__opa_r 
                              >> 0x1fU);
    vlSelf->__PVT__rmode_r2 = vlSelf->__PVT__rmode_r1;
    vlSelf->__PVT__exp_fasu = ((((~ (IData)(vlSelf->__PVT__u1__DOT__add_d)) 
                                 & ((0xffU & (vlSelf->__PVT__opa_r 
                                              >> 0x17U)) 
                                    == (0xffU & (vlSelf->__PVT__opb_r 
                                                 >> 0x17U)))) 
                                & ((0x7fffffU & vlSelf->__PVT__opa_r) 
                                   == (0x7fffffU & vlSelf->__PVT__opb_r)))
                                ? 0U : (IData)(vlSelf->__PVT__u1__DOT__exp_large));
    vlSelf->__VdfgRegularize_h16e0ae4d_5_1 = (1U & 
                                              (~ ((IData)(vlSelf->__VdfgRegularize_h16e0ae4d_5_0) 
                                                  | (IData)(vlSelf->__PVT__inf_d))));
    vlSelf->__VdfgRegularize_h16e0ae4d_5_2 = (1U & 
                                              (~ ((IData)(vlSelf->__PVT__inf_d) 
                                                  | (IData)(vlSelf->__VdfgRegularize_h16e0ae4d_5_0))));
    vlSelf->__PVT__fasu_op = vlSelf->__PVT__u1__DOT__add_d;
    vlSelf->__PVT__fpu_op_r1 = vlSelf->__PVT__fpu_op;
    vlSelf->__PVT__rmode_r1 = 0U;
    vlSelf->__PVT__opa_r = vlSymsp->TOP.co_sim_syn2__DOT__in1;
    vlSelf->__PVT__opb_r = vlSymsp->TOP.co_sim_syn2__DOT__golden__DOT__reg6;
    vlSelf->u3__DOT____VdfgRegularize_h60e48f75_0_0 
        = (0xfffffffU & ((IData)(vlSelf->__PVT__fasu_op)
                          ? (vlSelf->__PVT__fracta 
                             + vlSelf->__PVT__fractb)
                          : (vlSelf->__PVT__fracta 
                             - vlSelf->__PVT__fractb)));
    vlSelf->__PVT__fpu_op = 0U;
    vlSelf->__PVT__u1__DOT__add_d = (1U & ((vlSelf->__PVT__opa_r 
                                            >> 0x1fU)
                                            ? ((vlSelf->__PVT__opb_r 
                                                >> 0x1fU)
                                                ? (~ (IData)(vlSelf->__PVT__fpu_op_r1))
                                                : (IData)(vlSelf->__PVT__fpu_op_r1))
                                            : ((vlSelf->__PVT__opb_r 
                                                >> 0x1fU)
                                                ? (IData)(vlSelf->__PVT__fpu_op_r1)
                                                : (~ (IData)(vlSelf->__PVT__fpu_op_r1)))));
    vlSelf->u1__DOT____VdfgRegularize_h05e998eb_0_2 
        = (1U & ((~ (IData)((0U != (0xffU & (vlSelf->__PVT__opa_r 
                                             >> 0x17U))))) 
                 & (~ (IData)((0U != (0xffU & (vlSelf->__PVT__opb_r 
                                               >> 0x17U)))))));
    vlSelf->__PVT__u1__DOT__expa_lt_expb = ((0xffU 
                                             & (vlSelf->__PVT__opa_r 
                                                >> 0x17U)) 
                                            > (0xffU 
                                               & (vlSelf->__PVT__opb_r 
                                                  >> 0x17U)));
    vlSelf->__PVT__u1__DOT__exp_large = (0xffU & ((IData)(vlSelf->__PVT__u1__DOT__expa_lt_expb)
                                                   ? 
                                                  (vlSelf->__PVT__opa_r 
                                                   >> 0x17U)
                                                   : 
                                                  (vlSelf->__PVT__opb_r 
                                                   >> 0x17U)));
    vlSelf->__PVT__u1__DOT__exp_diff2 = (0xffU & (((IData)(vlSelf->__PVT__u1__DOT__exp_large) 
                                                   - 
                                                   ((IData)(vlSelf->__PVT__u1__DOT__expa_lt_expb)
                                                     ? 
                                                    (vlSelf->__PVT__opb_r 
                                                     >> 0x17U)
                                                     : 
                                                    (vlSelf->__PVT__opa_r 
                                                     >> 0x17U))) 
                                                  - 
                                                  (1U 
                                                   & ((~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0xffU 
                                                                   & (vlSelf->__PVT__opa_r 
                                                                      >> 0x17U))))) 
                                                      | (~ (IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0xffU 
                                                                     & (vlSelf->__PVT__opb_r 
                                                                        >> 0x17U)))))))));
}

VL_INLINE_OPT void Vco_sim_syn2_fpu_add___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__add4_add__0(Vco_sim_syn2_fpu_add* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_syn2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vco_sim_syn2_fpu_add___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__add4_add__0\n"); );
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
    vlSelf->out = vlSelf->__PVT__out_o1;
    vlSelf->__PVT__opa_dn = vlSelf->__PVT__u0__DOT__expa_00;
    vlSelf->__PVT__opb_dn = vlSelf->__PVT__u0__DOT__expb_00;
    vlSelf->__PVT__inf = vlSelf->__PVT__inf_o1;
    vlSelf->__PVT__ine = vlSelf->__PVT__ine_o1;
    vlSelf->__PVT__div_by_zero_o1 = 0U;
    vlSelf->__PVT__zero_o1 = vlSelf->__PVT__output_zero_fasu;
    vlSelf->__PVT__overflow_o1 = ((IData)(vlSelf->__VdfgRegularize_h16e0ae4d_5_1) 
                                  & (IData)(vlSelf->__PVT__u4->__PVT__overflow));
    vlSelf->__PVT__underflow_o1 = ((IData)(vlSelf->__VdfgRegularize_h16e0ae4d_5_2) 
                                   & (IData)(vlSelf->__PVT__u4->__PVT__underflow));
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
    vlSelf->__PVT__out_o1 = ((0x80000000U & vlSelf->__PVT__out_o1) 
                             | ((((IData)(vlSelf->__PVT__inf_d) 
                                  | (IData)(vlSelf->__PVT__snan_d)) 
                                 | (IData)(vlSelf->__PVT__qnan_d))
                                 ? (((IData)(vlSelf->__VdfgRegularize_h16e0ae4d_5_0) 
                                     | ((~ (IData)(vlSelf->__PVT__fasu_op_r2)) 
                                        & (IData)(vlSelf->__PVT__ind_d)))
                                     ? 0x7fc00001U : 0x7f800000U)
                                 : vlSelf->__PVT__u4->__PVT__out));
    vlSelf->__PVT__out_o1 = ((0x7fffffffU & vlSelf->__PVT__out_o1) 
                             | (((((IData)(vlSelf->__PVT__snan_d) 
                                   | (IData)(vlSelf->__PVT__qnan_d)) 
                                  | (IData)(vlSelf->__PVT__ind_d))
                                  ? (IData)(vlSelf->__PVT__nan_sign_d)
                                  : ((IData)(vlSelf->__PVT__output_zero_fasu)
                                      ? (IData)(vlSelf->__PVT__result_zero_sign_d)
                                      : (IData)(vlSelf->__PVT__sign_fasu_r))) 
                                << 0x1fU));
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
    vlSelf->__PVT__inf_o1 = ((~ ((IData)(vlSelf->__PVT__qnan_d) 
                                 | (IData)(vlSelf->__PVT__snan_d))) 
                             & ((IData)(((0x7f800000U 
                                          == (0x7f800000U 
                                              & vlSelf->__PVT__u4->__PVT__out)) 
                                         & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (0x7fffffU 
                                                        & vlSelf->__PVT__u4->__PVT__out)))))) 
                                | (((IData)(vlSelf->__PVT__inf_d) 
                                    & (~ ((IData)(vlSelf->__PVT__ind_d) 
                                          & (~ (IData)(vlSelf->__PVT__fasu_op_r2))))) 
                                   & (~ ((IData)(vlSelf->__PVT__fpu_op_r3) 
                                         >> 1U)))));
    vlSelf->__PVT__ine_o1 = ((IData)(vlSelf->__VdfgRegularize_h16e0ae4d_5_1) 
                             & (((5U == (IData)(vlSelf->__PVT__fpu_op_r3))
                                  ? (((IData)(vlSelf->__PVT__u4->__PVT__f2i_zero) 
                                      & ((~ (IData)(vlSelf->__PVT__opas_r2)) 
                                         & (0U != vlSelf->__PVT__fract_out_q))) 
                                     | ((0U != (0x1ffffffU 
                                                & (IData)(vlSelf->__PVT__u4->__VdfgRegularize_he8d392c1_0_21))) 
                                        | (((IData)(vlSelf->__PVT__u4->__PVT__f2i_zero) 
                                            & ((0x80U 
                                                > (IData)(vlSelf->__PVT__exp_r)) 
                                               & ((0U 
                                                   != vlSelf->__PVT__fract_out_q) 
                                                  & (IData)(vlSelf->__PVT__opas_r2)))) 
                                           | ((IData)(vlSelf->__PVT__u4->__PVT__f2i_max) 
                                              & ((3U 
                                                  == (IData)(vlSelf->__PVT__rmode_r3)) 
                                                 & (0x80U 
                                                    > (IData)(vlSelf->__PVT__exp_r)))))))
                                  : ((4U == (IData)(vlSelf->__PVT__fpu_op_r3))
                                      ? (0U != (0x1ffffffU 
                                                & (IData)(vlSelf->__PVT__u4->__VdfgRegularize_he8d392c1_0_21)))
                                      : (((~ (IData)(vlSelf->__PVT__u4->__PVT__dn)) 
                                          & (IData)(vlSelf->__PVT__u4->__PVT__r)) 
                                         | (((~ (IData)(vlSelf->__PVT__u4->__PVT__dn)) 
                                             & (IData)(vlSelf->__PVT__u4->__PVT__s)) 
                                            | ((IData)(vlSelf->__PVT__u4->__PVT__max_num) 
                                               | (3U 
                                                  == (IData)(vlSelf->__PVT__fpu_op_r3))))))) 
                                | ((IData)(vlSelf->__PVT__u4->__PVT__overflow) 
                                   | (IData)(vlSelf->__PVT__u4->__PVT__underflow))));
    vlSelf->__PVT__sign_fasu_r = vlSelf->__PVT__sign_fasu;
    vlSelf->__PVT__result_zero_sign_d = ((((((IData)(vlSelf->__PVT__u1__DOT__add_r) 
                                             & (IData)(vlSelf->__PVT__u1__DOT__signa_r)) 
                                            & (IData)(vlSelf->__PVT__u1__DOT__signb_r)) 
                                           | (((~ (IData)(vlSelf->__PVT__u1__DOT__add_r)) 
                                               & (IData)(vlSelf->__PVT__u1__DOT__signa_r)) 
                                              & (~ (IData)(vlSelf->__PVT__u1__DOT__signb_r)))) 
                                          | (((IData)(vlSelf->__PVT__u1__DOT__add_r) 
                                              & ((IData)(vlSelf->__PVT__u1__DOT__signa_r) 
                                                 | (IData)(vlSelf->__PVT__u1__DOT__signb_r))) 
                                             & (3U 
                                                == (IData)(vlSelf->__PVT__rmode_r2)))) 
                                         | (((~ (IData)(vlSelf->__PVT__u1__DOT__add_r)) 
                                             & ((IData)(vlSelf->__PVT__u1__DOT__signa_r) 
                                                == (IData)(vlSelf->__PVT__u1__DOT__signb_r))) 
                                            & (3U == (IData)(vlSelf->__PVT__rmode_r2))));
    vlSelf->__PVT__nan_sign_d = (((IData)(vlSelf->__PVT__opa_nan) 
                                  & (IData)(vlSelf->__PVT__opb_nan))
                                  ? ((IData)(vlSelf->__PVT__u1__DOT__fracta_eq_fractb)
                                      ? ((IData)(vlSelf->__PVT__u1__DOT__signa_r) 
                                         & (IData)(vlSelf->__PVT__u1__DOT__signb_r))
                                      : ((IData)(vlSelf->__PVT__u1__DOT__fracta_lt_fractb)
                                          ? (IData)(vlSelf->__PVT__u1__DOT__signb_r)
                                          : (IData)(vlSelf->__PVT__u1__DOT__signa_r)))
                                  : ((IData)(vlSelf->__PVT__opb_nan)
                                      ? (IData)(vlSelf->__PVT__u1__DOT__signb_r)
                                      : (IData)(vlSelf->__PVT__u1__DOT__signa_r)));
    vlSelf->__PVT__fasu_op_r2 = vlSelf->__PVT__fasu_op_r1;
    vlSelf->__PVT__ind_d = (((IData)(vlSelf->__PVT__u0__DOT__expa_ff) 
                             & (IData)(vlSelf->__PVT__u0__DOT__infa_f_r)) 
                            & ((IData)(vlSelf->__PVT__u0__DOT__expb_ff) 
                               & (IData)(vlSelf->__PVT__u0__DOT__infb_f_r)));
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
    vlSelf->__PVT__opas_r2 = vlSelf->__PVT__opas_r1;
    vlSelf->__PVT__rmode_r3 = vlSelf->__PVT__rmode_r2;
    vlSelf->__PVT__fract_out_q = vlSelf->u3__DOT____VdfgRegularize_h60e48f75_0_0;
    vlSelf->__PVT__exp_r = vlSelf->__PVT__exp_fasu;
    vlSelf->__PVT__sign_fasu = vlSelf->__PVT__u1__DOT__sign_d;
    vlSelf->__PVT__u1__DOT__add_r = (1U & (~ (IData)(vlSelf->__PVT__fpu_op_r1)));
    vlSelf->__PVT__opb_nan = (IData)(((0x7f800000U 
                                       == (0x7f800000U 
                                           & vlSelf->__PVT__opb_r)) 
                                      & (0U != (0x7fffffU 
                                                & vlSelf->__PVT__opb_r))));
    vlSelf->__PVT__u1__DOT__signb_r = (vlSelf->__PVT__opb_r 
                                       >> 0x1fU);
    vlSelf->__PVT__opa_nan = (IData)(((0x7f800000U 
                                       == (0x7f800000U 
                                           & vlSelf->__PVT__opa_r)) 
                                      & (0U != (0x7fffffU 
                                                & vlSelf->__PVT__opa_r))));
    vlSelf->__PVT__u1__DOT__signa_r = (vlSelf->__PVT__opa_r 
                                       >> 0x1fU);
    vlSelf->__PVT__u1__DOT__fracta_eq_fractb = ((0x7fffffU 
                                                 & vlSelf->__PVT__opa_r) 
                                                == 
                                                (0x7fffffU 
                                                 & vlSelf->__PVT__opb_r));
    vlSelf->__PVT__u1__DOT__fracta_lt_fractb = ((0x7fffffU 
                                                 & vlSelf->__PVT__opa_r) 
                                                < (0x7fffffU 
                                                   & vlSelf->__PVT__opb_r));
    vlSelf->__PVT__fasu_op_r1 = vlSelf->__PVT__fasu_op;
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
    vlSelf->__VdfgRegularize_h16e0ae4d_5_0 = ((IData)(vlSelf->__PVT__qnan_d) 
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
    vlSelf->__PVT__fpu_op_r2 = vlSelf->__PVT__fpu_op_r1;
    vlSelf->__PVT__opas_r1 = (vlSelf->__PVT__opa_r 
                              >> 0x1fU);
    vlSelf->__PVT__rmode_r2 = vlSelf->__PVT__rmode_r1;
    vlSelf->__PVT__exp_fasu = ((((~ (IData)(vlSelf->__PVT__u1__DOT__add_d)) 
                                 & ((0xffU & (vlSelf->__PVT__opa_r 
                                              >> 0x17U)) 
                                    == (0xffU & (vlSelf->__PVT__opb_r 
                                                 >> 0x17U)))) 
                                & ((0x7fffffU & vlSelf->__PVT__opa_r) 
                                   == (0x7fffffU & vlSelf->__PVT__opb_r)))
                                ? 0U : (IData)(vlSelf->__PVT__u1__DOT__exp_large));
    vlSelf->__VdfgRegularize_h16e0ae4d_5_1 = (1U & 
                                              (~ ((IData)(vlSelf->__VdfgRegularize_h16e0ae4d_5_0) 
                                                  | (IData)(vlSelf->__PVT__inf_d))));
    vlSelf->__VdfgRegularize_h16e0ae4d_5_2 = (1U & 
                                              (~ ((IData)(vlSelf->__PVT__inf_d) 
                                                  | (IData)(vlSelf->__VdfgRegularize_h16e0ae4d_5_0))));
    vlSelf->__PVT__fasu_op = vlSelf->__PVT__u1__DOT__add_d;
    vlSelf->__PVT__fpu_op_r1 = vlSelf->__PVT__fpu_op;
    vlSelf->__PVT__rmode_r1 = 0U;
    vlSelf->__PVT__opb_r = vlSymsp->TOP.co_sim_syn2__DOT__in3;
    vlSelf->__PVT__opa_r = vlSymsp->TOP.co_sim_syn2__DOT__in5;
    vlSelf->u3__DOT____VdfgRegularize_h60e48f75_0_0 
        = (0xfffffffU & ((IData)(vlSelf->__PVT__fasu_op)
                          ? (vlSelf->__PVT__fracta 
                             + vlSelf->__PVT__fractb)
                          : (vlSelf->__PVT__fracta 
                             - vlSelf->__PVT__fractb)));
    vlSelf->__PVT__fpu_op = 0U;
    vlSelf->__PVT__u1__DOT__add_d = (1U & ((vlSelf->__PVT__opa_r 
                                            >> 0x1fU)
                                            ? ((vlSelf->__PVT__opb_r 
                                                >> 0x1fU)
                                                ? (~ (IData)(vlSelf->__PVT__fpu_op_r1))
                                                : (IData)(vlSelf->__PVT__fpu_op_r1))
                                            : ((vlSelf->__PVT__opb_r 
                                                >> 0x1fU)
                                                ? (IData)(vlSelf->__PVT__fpu_op_r1)
                                                : (~ (IData)(vlSelf->__PVT__fpu_op_r1)))));
    vlSelf->u1__DOT____VdfgRegularize_h05e998eb_0_2 
        = (1U & ((~ (IData)((0U != (0xffU & (vlSelf->__PVT__opa_r 
                                             >> 0x17U))))) 
                 & (~ (IData)((0U != (0xffU & (vlSelf->__PVT__opb_r 
                                               >> 0x17U)))))));
    vlSelf->__PVT__u1__DOT__expa_lt_expb = ((0xffU 
                                             & (vlSelf->__PVT__opa_r 
                                                >> 0x17U)) 
                                            > (0xffU 
                                               & (vlSelf->__PVT__opb_r 
                                                  >> 0x17U)));
    vlSelf->__PVT__u1__DOT__exp_large = (0xffU & ((IData)(vlSelf->__PVT__u1__DOT__expa_lt_expb)
                                                   ? 
                                                  (vlSelf->__PVT__opa_r 
                                                   >> 0x17U)
                                                   : 
                                                  (vlSelf->__PVT__opb_r 
                                                   >> 0x17U)));
    vlSelf->__PVT__u1__DOT__exp_diff2 = (0xffU & (((IData)(vlSelf->__PVT__u1__DOT__exp_large) 
                                                   - 
                                                   ((IData)(vlSelf->__PVT__u1__DOT__expa_lt_expb)
                                                     ? 
                                                    (vlSelf->__PVT__opb_r 
                                                     >> 0x17U)
                                                     : 
                                                    (vlSelf->__PVT__opa_r 
                                                     >> 0x17U))) 
                                                  - 
                                                  (1U 
                                                   & ((~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0xffU 
                                                                   & (vlSelf->__PVT__opa_r 
                                                                      >> 0x17U))))) 
                                                      | (~ (IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0xffU 
                                                                     & (vlSelf->__PVT__opb_r 
                                                                        >> 0x17U)))))))));
}

VL_INLINE_OPT void Vco_sim_syn2_fpu_add___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__add5_add__1(Vco_sim_syn2_fpu_add* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_syn2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vco_sim_syn2_fpu_add___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__add5_add__1\n"); );
    // Body
    vlSelf->out = vlSelf->__PVT__out_o1;
    vlSelf->__PVT__out_o1 = ((0x80000000U & vlSelf->__PVT__out_o1) 
                             | ((((IData)(vlSelf->__PVT__inf_d) 
                                  | (IData)(vlSelf->__PVT__snan_d)) 
                                 | (IData)(vlSelf->__PVT__qnan_d))
                                 ? (((IData)(vlSelf->__VdfgRegularize_h16e0ae4d_5_0) 
                                     | ((~ (IData)(vlSelf->__PVT__fasu_op_r2)) 
                                        & (IData)(vlSelf->__PVT__ind_d)))
                                     ? 0x7fc00001U : 0x7f800000U)
                                 : vlSelf->__PVT__u4->__PVT__out));
    vlSelf->__PVT__out_o1 = ((0x7fffffffU & vlSelf->__PVT__out_o1) 
                             | (((((IData)(vlSelf->__PVT__snan_d) 
                                   | (IData)(vlSelf->__PVT__qnan_d)) 
                                  | (IData)(vlSelf->__PVT__ind_d))
                                  ? (IData)(vlSelf->__PVT__nan_sign_d)
                                  : ((IData)(vlSelf->__PVT__output_zero_fasu)
                                      ? (IData)(vlSelf->__PVT__result_zero_sign_d)
                                      : (IData)(vlSelf->__PVT__sign_fasu_r))) 
                                << 0x1fU));
    vlSelf->__PVT__fasu_op_r2 = vlSelf->__PVT__fasu_op_r1;
    vlSelf->__PVT__inf_d = (((IData)(vlSelf->__PVT__u0__DOT__expa_ff) 
                             & (IData)(vlSelf->__PVT__u0__DOT__infa_f_r)) 
                            | ((IData)(vlSelf->__PVT__u0__DOT__expb_ff) 
                               & (IData)(vlSelf->__PVT__u0__DOT__infb_f_r)));
    vlSelf->__PVT__sign_fasu_r = vlSelf->__PVT__sign_fasu;
    vlSelf->__PVT__result_zero_sign_d = ((((((IData)(vlSelf->__PVT__u1__DOT__add_r) 
                                             & (IData)(vlSelf->__PVT__u1__DOT__signa_r)) 
                                            & (IData)(vlSelf->__PVT__u1__DOT__signb_r)) 
                                           | (((~ (IData)(vlSelf->__PVT__u1__DOT__add_r)) 
                                               & (IData)(vlSelf->__PVT__u1__DOT__signa_r)) 
                                              & (~ (IData)(vlSelf->__PVT__u1__DOT__signb_r)))) 
                                          | (((IData)(vlSelf->__PVT__u1__DOT__add_r) 
                                              & ((IData)(vlSelf->__PVT__u1__DOT__signa_r) 
                                                 | (IData)(vlSelf->__PVT__u1__DOT__signb_r))) 
                                             & (3U 
                                                == (IData)(vlSelf->__PVT__rmode_r2)))) 
                                         | (((~ (IData)(vlSelf->__PVT__u1__DOT__add_r)) 
                                             & ((IData)(vlSelf->__PVT__u1__DOT__signa_r) 
                                                == (IData)(vlSelf->__PVT__u1__DOT__signb_r))) 
                                            & (3U == (IData)(vlSelf->__PVT__rmode_r2))));
    vlSelf->__PVT__ind_d = (((IData)(vlSelf->__PVT__u0__DOT__expa_ff) 
                             & (IData)(vlSelf->__PVT__u0__DOT__infa_f_r)) 
                            & ((IData)(vlSelf->__PVT__u0__DOT__expb_ff) 
                               & (IData)(vlSelf->__PVT__u0__DOT__infb_f_r)));
    vlSelf->__PVT__qnan_d = (((IData)(vlSelf->__PVT__u0__DOT__expa_ff) 
                              & (IData)(vlSelf->__PVT__u0__DOT__qnan_r_a)) 
                             | ((IData)(vlSelf->__PVT__u0__DOT__expb_ff) 
                                & (IData)(vlSelf->__PVT__u0__DOT__qnan_r_b)));
    vlSelf->__PVT__snan_d = (((IData)(vlSelf->__PVT__u0__DOT__expa_ff) 
                              & (IData)(vlSelf->__PVT__u0__DOT__snan_r_a)) 
                             | ((IData)(vlSelf->__PVT__u0__DOT__expb_ff) 
                                & (IData)(vlSelf->__PVT__u0__DOT__snan_r_b)));
    vlSelf->__PVT__nan_sign_d = (((IData)(vlSelf->__PVT__opa_nan) 
                                  & (IData)(vlSelf->__PVT__opb_nan))
                                  ? ((IData)(vlSelf->__PVT__u1__DOT__fracta_eq_fractb)
                                      ? ((IData)(vlSelf->__PVT__u1__DOT__signa_r) 
                                         & (IData)(vlSelf->__PVT__u1__DOT__signb_r))
                                      : ((IData)(vlSelf->__PVT__u1__DOT__fracta_lt_fractb)
                                          ? (IData)(vlSelf->__PVT__u1__DOT__signb_r)
                                          : (IData)(vlSelf->__PVT__u1__DOT__signa_r)))
                                  : ((IData)(vlSelf->__PVT__opb_nan)
                                      ? (IData)(vlSelf->__PVT__u1__DOT__signb_r)
                                      : (IData)(vlSelf->__PVT__u1__DOT__signa_r)));
    vlSelf->__PVT__fasu_op_r1 = vlSelf->__PVT__fasu_op;
    vlSelf->__PVT__sign_fasu = vlSelf->__PVT__u1__DOT__sign_d;
    vlSelf->__PVT__rmode_r2 = vlSelf->__PVT__rmode_r1;
    vlSelf->__PVT__u1__DOT__add_r = (1U & (~ (IData)(vlSelf->__PVT__fpu_op_r1)));
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
    vlSelf->__VdfgRegularize_h16e0ae4d_5_0 = ((IData)(vlSelf->__PVT__qnan_d) 
                                              | (IData)(vlSelf->__PVT__snan_d));
    vlSelf->__PVT__u0__DOT__snan_r_b = ((~ (vlSelf->__PVT__opb_r 
                                            >> 0x16U)) 
                                        & (0U != (0x3fffffU 
                                                  & vlSelf->__PVT__opb_r)));
    vlSelf->__PVT__u0__DOT__snan_r_a = ((~ (vlSelf->__PVT__opa_r 
                                            >> 0x16U)) 
                                        & (0U != (0x3fffffU 
                                                  & vlSelf->__PVT__opa_r)));
    vlSelf->__PVT__u0__DOT__expb_ff = (0xffU == (0xffU 
                                                 & (vlSelf->__PVT__opb_r 
                                                    >> 0x17U)));
    vlSelf->__PVT__u0__DOT__expa_ff = (0xffU == (0xffU 
                                                 & (vlSelf->__PVT__opa_r 
                                                    >> 0x17U)));
    vlSelf->__PVT__opb_nan = (IData)(((0x7f800000U 
                                       == (0x7f800000U 
                                           & vlSelf->__PVT__opb_r)) 
                                      & (0U != (0x7fffffU 
                                                & vlSelf->__PVT__opb_r))));
    vlSelf->__PVT__u1__DOT__signb_r = (vlSelf->__PVT__opb_r 
                                       >> 0x1fU);
    vlSelf->__PVT__opa_nan = (IData)(((0x7f800000U 
                                       == (0x7f800000U 
                                           & vlSelf->__PVT__opa_r)) 
                                      & (0U != (0x7fffffU 
                                                & vlSelf->__PVT__opa_r))));
    vlSelf->__PVT__u1__DOT__signa_r = (vlSelf->__PVT__opa_r 
                                       >> 0x1fU);
    vlSelf->__PVT__u1__DOT__fracta_eq_fractb = ((0x7fffffU 
                                                 & vlSelf->__PVT__opa_r) 
                                                == 
                                                (0x7fffffU 
                                                 & vlSelf->__PVT__opb_r));
    vlSelf->__PVT__u1__DOT__fracta_lt_fractb = ((0x7fffffU 
                                                 & vlSelf->__PVT__opa_r) 
                                                < (0x7fffffU 
                                                   & vlSelf->__PVT__opb_r));
    vlSelf->__VdfgRegularize_h16e0ae4d_5_1 = (1U & 
                                              (~ ((IData)(vlSelf->__VdfgRegularize_h16e0ae4d_5_0) 
                                                  | (IData)(vlSelf->__PVT__inf_d))));
    vlSelf->__VdfgRegularize_h16e0ae4d_5_2 = (1U & 
                                              (~ ((IData)(vlSelf->__PVT__inf_d) 
                                                  | (IData)(vlSelf->__VdfgRegularize_h16e0ae4d_5_0))));
    vlSelf->__PVT__fasu_op = vlSelf->__PVT__u1__DOT__add_d;
    vlSelf->__PVT__rmode_r1 = 0U;
    vlSelf->__PVT__fpu_op_r1 = vlSelf->__PVT__fpu_op;
    vlSelf->__PVT__opb_r = vlSymsp->TOP.co_sim_syn2__DOT__in4;
    vlSelf->__PVT__opa_r = vlSymsp->TOP.co_sim_syn2__DOT__in5;
    vlSelf->u3__DOT____VdfgRegularize_h60e48f75_0_0 
        = (0xfffffffU & ((IData)(vlSelf->__PVT__fasu_op)
                          ? (vlSelf->__PVT__fracta 
                             + vlSelf->__PVT__fractb)
                          : (vlSelf->__PVT__fracta 
                             - vlSelf->__PVT__fractb)));
    vlSelf->__PVT__fpu_op = 0U;
    vlSelf->__PVT__u1__DOT__add_d = (1U & ((vlSelf->__PVT__opa_r 
                                            >> 0x1fU)
                                            ? ((vlSelf->__PVT__opb_r 
                                                >> 0x1fU)
                                                ? (~ (IData)(vlSelf->__PVT__fpu_op_r1))
                                                : (IData)(vlSelf->__PVT__fpu_op_r1))
                                            : ((vlSelf->__PVT__opb_r 
                                                >> 0x1fU)
                                                ? (IData)(vlSelf->__PVT__fpu_op_r1)
                                                : (~ (IData)(vlSelf->__PVT__fpu_op_r1)))));
    vlSelf->u1__DOT____VdfgRegularize_h05e998eb_0_2 
        = (1U & ((~ (IData)((0U != (0xffU & (vlSelf->__PVT__opa_r 
                                             >> 0x17U))))) 
                 & (~ (IData)((0U != (0xffU & (vlSelf->__PVT__opb_r 
                                               >> 0x17U)))))));
    vlSelf->__PVT__u1__DOT__expa_lt_expb = ((0xffU 
                                             & (vlSelf->__PVT__opa_r 
                                                >> 0x17U)) 
                                            > (0xffU 
                                               & (vlSelf->__PVT__opb_r 
                                                  >> 0x17U)));
    vlSelf->__PVT__u1__DOT__exp_large = (0xffU & ((IData)(vlSelf->__PVT__u1__DOT__expa_lt_expb)
                                                   ? 
                                                  (vlSelf->__PVT__opa_r 
                                                   >> 0x17U)
                                                   : 
                                                  (vlSelf->__PVT__opb_r 
                                                   >> 0x17U)));
    vlSelf->__PVT__u1__DOT__exp_diff2 = (0xffU & (((IData)(vlSelf->__PVT__u1__DOT__exp_large) 
                                                   - 
                                                   ((IData)(vlSelf->__PVT__u1__DOT__expa_lt_expb)
                                                     ? 
                                                    (vlSelf->__PVT__opb_r 
                                                     >> 0x17U)
                                                     : 
                                                    (vlSelf->__PVT__opa_r 
                                                     >> 0x17U))) 
                                                  - 
                                                  (1U 
                                                   & ((~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0xffU 
                                                                   & (vlSelf->__PVT__opa_r 
                                                                      >> 0x17U))))) 
                                                      | (~ (IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0xffU 
                                                                     & (vlSelf->__PVT__opb_r 
                                                                        >> 0x17U)))))))));
}
