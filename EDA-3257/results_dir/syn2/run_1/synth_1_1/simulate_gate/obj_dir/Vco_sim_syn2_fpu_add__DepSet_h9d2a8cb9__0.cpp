// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vco_sim_syn2.h for the primary calling header

#include "Vco_sim_syn2__pch.h"
#include "Vco_sim_syn2_fpu_add.h"

VL_INLINE_OPT void Vco_sim_syn2_fpu_add___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__add1_add__4(Vco_sim_syn2_fpu_add* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_syn2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vco_sim_syn2_fpu_add___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__add1_add__4\n"); );
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
