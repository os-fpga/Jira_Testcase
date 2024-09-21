// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vco_sim_syn2.h for the primary calling header

#include "Vco_sim_syn2__pch.h"
#include "Vco_sim_syn2_fpu_add.h"
#include "Vco_sim_syn2_post_norm.h"

VL_INLINE_OPT void Vco_sim_syn2_fpu_add___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__add1_add__0(Vco_sim_syn2_fpu_add* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_syn2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vco_sim_syn2_fpu_add___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__add1_add__0\n"); );
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
    vlSelf->__PVT__fpu_op_r3 = vlSelf->__PVT__fpu_op_r2;
    vlSelf->__PVT__opas_r2 = vlSelf->__PVT__opas_r1;
    vlSelf->__PVT__rmode_r3 = vlSelf->__PVT__rmode_r2;
    vlSelf->__PVT__fract_out_q = vlSelf->u3__DOT____VdfgRegularize_h60e48f75_0_0;
    vlSelf->__PVT__exp_r = vlSelf->__PVT__exp_fasu;
    vlSelf->__PVT__fpu_op_r2 = vlSelf->__PVT__fpu_op_r1;
    vlSelf->__PVT__opas_r1 = (vlSelf->__PVT__opa_r 
                              >> 0x1fU);
    vlSelf->__PVT__exp_fasu = ((((~ (IData)(vlSelf->__PVT__u1__DOT__add_d)) 
                                 & ((0xffU & (vlSelf->__PVT__opa_r 
                                              >> 0x17U)) 
                                    == (0xffU & (vlSelf->__PVT__opb_r 
                                                 >> 0x17U)))) 
                                & ((0x7fffffU & vlSelf->__PVT__opa_r) 
                                   == (0x7fffffU & vlSelf->__PVT__opb_r)))
                                ? 0U : (IData)(vlSelf->__PVT__u1__DOT__exp_large));
}

VL_INLINE_OPT void Vco_sim_syn2_fpu_add___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__add1_add__2(Vco_sim_syn2_fpu_add* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_syn2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vco_sim_syn2_fpu_add___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__add1_add__2\n"); );
    // Body
    vlSelf->__PVT__output_zero_fasu = ((~ (IData)((0U 
                                                   != vlSelf->__PVT__u4->__PVT__out))) 
                                       & (IData)(vlSelf->__VdfgRegularize_h16e0ae4d_5_2));
}

VL_INLINE_OPT void Vco_sim_syn2_fpu_add___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__add2_add__0(Vco_sim_syn2_fpu_add* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_syn2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vco_sim_syn2_fpu_add___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__add2_add__0\n"); );
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
    vlSelf->__PVT__qnan = vlSelf->__PVT__qnan_o1;
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
    vlSelf->__PVT__snan_o1 = vlSelf->__PVT__snan_d;
    vlSelf->__PVT__qnan_o1 = (((IData)(vlSelf->__PVT__snan_d) 
                               | (IData)(vlSelf->__PVT__qnan_d)) 
                              | ((IData)(vlSelf->__PVT__ind_d) 
                                 & (~ (IData)(vlSelf->__PVT__fasu_op_r2))));
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
    vlSelf->__PVT__fpu_op_r3 = vlSelf->__PVT__fpu_op_r2;
    vlSelf->__PVT__rmode_r3 = vlSelf->__PVT__rmode_r2;
    vlSelf->__PVT__opas_r2 = vlSelf->__PVT__opas_r1;
    vlSelf->__PVT__fract_out_q = vlSelf->u3__DOT____VdfgRegularize_h60e48f75_0_0;
    vlSelf->__PVT__exp_r = vlSelf->__PVT__exp_fasu;
    vlSelf->__PVT__fpu_op_r2 = vlSelf->__PVT__fpu_op_r1;
    vlSelf->__PVT__opas_r1 = (vlSelf->__PVT__opa_r 
                              >> 0x1fU);
    vlSelf->__PVT__exp_fasu = ((((~ (IData)(vlSelf->__PVT__u1__DOT__add_d)) 
                                 & ((0xffU & (vlSelf->__PVT__opa_r 
                                              >> 0x17U)) 
                                    == (0xffU & (vlSelf->__PVT__opb_r 
                                                 >> 0x17U)))) 
                                & ((0x7fffffU & vlSelf->__PVT__opa_r) 
                                   == (0x7fffffU & vlSelf->__PVT__opb_r)))
                                ? 0U : (IData)(vlSelf->__PVT__u1__DOT__exp_large));
}

VL_INLINE_OPT void Vco_sim_syn2_fpu_add___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__add5_add__0(Vco_sim_syn2_fpu_add* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_syn2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vco_sim_syn2_fpu_add___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__add5_add__0\n"); );
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
    vlSelf->__PVT__fpu_op_r3 = vlSelf->__PVT__fpu_op_r2;
    vlSelf->__PVT__opas_r2 = vlSelf->__PVT__opas_r1;
    vlSelf->__PVT__rmode_r3 = vlSelf->__PVT__rmode_r2;
    vlSelf->__PVT__fract_out_q = vlSelf->u3__DOT____VdfgRegularize_h60e48f75_0_0;
    vlSelf->__PVT__exp_r = vlSelf->__PVT__exp_fasu;
    vlSelf->__PVT__fpu_op_r2 = vlSelf->__PVT__fpu_op_r1;
    vlSelf->__PVT__opas_r1 = (vlSelf->__PVT__opa_r 
                              >> 0x1fU);
    vlSelf->__PVT__exp_fasu = ((((~ (IData)(vlSelf->__PVT__u1__DOT__add_d)) 
                                 & ((0xffU & (vlSelf->__PVT__opa_r 
                                              >> 0x17U)) 
                                    == (0xffU & (vlSelf->__PVT__opb_r 
                                                 >> 0x17U)))) 
                                & ((0x7fffffU & vlSelf->__PVT__opa_r) 
                                   == (0x7fffffU & vlSelf->__PVT__opb_r)))
                                ? 0U : (IData)(vlSelf->__PVT__u1__DOT__exp_large));
}
