// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vco_sim_syn2__Syms.h"


VL_ATTR_COLD void Vco_sim_syn2___024root__trace_full_0_sub_12(Vco_sim_syn2___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_syn2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_syn2___024root__trace_full_0_sub_12\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+60122,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__add_r));
    bufp->fullBit(oldp+60123,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__signa_r));
    bufp->fullBit(oldp+60124,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__signb_r));
    bufp->fullBit(oldp+60125,((0x1bU < ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.u1__DOT____VdfgRegularize_h05e998eb_0_2)
                                         ? 0U : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__exp_diff2)))));
    bufp->fullBit(oldp+60126,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__expa_lt_expb)
                                      ? (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0xffU 
                                                     & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__opb_r 
                                                        >> 0x17U)))))
                                      : (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0xffU 
                                                     & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__opa_r 
                                                        >> 0x17U)))))))));
    bufp->fullBit(oldp+60127,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__fracta_lt_fractb));
    bufp->fullBit(oldp+60128,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__fracta_eq_fractb));
    bufp->fullBit(oldp+60129,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__fracta_eq_fractb)
                                ? ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__signa_r) 
                                   & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__signb_r))
                                : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__fracta_lt_fractb)
                                    ? (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__signb_r)
                                    : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__signa_r)))));
    bufp->fullCData(oldp+60130,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__exp_large) 
                                          - ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__expa_lt_expb)
                                              ? (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__opb_r 
                                                 >> 0x17U)
                                              : (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__opa_r 
                                                 >> 0x17U))))),8);
    bufp->fullCData(oldp+60131,((0xffU & (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__exp_large) 
                                           - ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__expa_lt_expb)
                                               ? (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__opb_r 
                                                  >> 0x17U)
                                               : (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__opa_r 
                                                  >> 0x17U))) 
                                          - (IData)(1U)))),8);
    bufp->fullCData(oldp+60132,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__exp_diff2),8);
    bufp->fullBit(oldp+60133,((1U & (~ ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__expa_lt_expb)
                                         ? (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (0xffU 
                                                        & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__opb_r 
                                                           >> 0x17U)))))
                                         : (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (0xffU 
                                                        & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__opa_r 
                                                           >> 0x17U))))))))));
    bufp->fullCData(oldp+60134,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__fpu_op),3);
    bufp->fullBit(oldp+60135,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__zero));
    bufp->fullIData(oldp+60136,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__opa_r),32);
    bufp->fullIData(oldp+60137,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__opb_r),32);
    bufp->fullBit(oldp+60138,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__div_by_zero));
    bufp->fullBit(oldp+60139,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__sign_fasu));
    bufp->fullIData(oldp+60140,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__fracta),27);
    bufp->fullIData(oldp+60141,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__fractb),27);
    bufp->fullCData(oldp+60142,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__exp_fasu),8);
    bufp->fullCData(oldp+60143,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__exp_r),8);
    bufp->fullIData(oldp+60144,((0x7ffffffU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.u3__DOT____VdfgRegularize_h60e48f75_0_0)),27);
    bufp->fullIData(oldp+60145,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__fract_out_q),28);
    bufp->fullIData(oldp+60146,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__out),31);
    bufp->fullBit(oldp+60147,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__overflow));
    bufp->fullBit(oldp+60148,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__underflow));
    bufp->fullBit(oldp+60149,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__overflow));
    bufp->fullBit(oldp+60150,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__underflow));
    bufp->fullBit(oldp+60151,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__inf));
    bufp->fullBit(oldp+60152,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__snan));
    bufp->fullBit(oldp+60153,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__qnan));
    bufp->fullBit(oldp+60154,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__ine));
    bufp->fullCData(oldp+60155,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__rmode_r1),2);
    bufp->fullCData(oldp+60156,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__rmode_r2),2);
    bufp->fullCData(oldp+60157,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__rmode_r3),2);
    bufp->fullCData(oldp+60158,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__fpu_op_r1),3);
    bufp->fullCData(oldp+60159,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__fpu_op_r2),3);
    bufp->fullCData(oldp+60160,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__fpu_op_r3),3);
    bufp->fullIData(oldp+60161,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__out_o1),32);
    bufp->fullBit(oldp+60162,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__inf_o1));
    bufp->fullBit(oldp+60163,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__snan_o1));
    bufp->fullBit(oldp+60164,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__qnan_o1));
    bufp->fullBit(oldp+60165,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__ine_o1));
    bufp->fullBit(oldp+60166,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__overflow_o1));
    bufp->fullBit(oldp+60167,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__underflow_o1));
    bufp->fullBit(oldp+60168,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__zero_o1));
    bufp->fullBit(oldp+60169,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__div_by_zero_o1));
    bufp->fullBit(oldp+60170,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__inf_d));
    bufp->fullBit(oldp+60171,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__ind_d));
    bufp->fullBit(oldp+60172,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__qnan_d));
    bufp->fullBit(oldp+60173,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__snan_d));
    bufp->fullBit(oldp+60174,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__opa_nan));
    bufp->fullBit(oldp+60175,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__opb_nan));
    bufp->fullBit(oldp+60176,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__opa_00));
    bufp->fullBit(oldp+60177,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__opb_00));
    bufp->fullBit(oldp+60178,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__opa_inf));
    bufp->fullBit(oldp+60179,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__opb_inf));
    bufp->fullBit(oldp+60180,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__opa_dn));
    bufp->fullBit(oldp+60181,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__opb_dn));
    bufp->fullBit(oldp+60182,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__nan_sign_d));
    bufp->fullBit(oldp+60183,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__result_zero_sign_d));
    bufp->fullBit(oldp+60184,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__sign_fasu_r));
    bufp->fullBit(oldp+60185,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__fasu_op));
    bufp->fullBit(oldp+60186,((1U & (~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__fpu_op_r1)))));
    bufp->fullBit(oldp+60187,((1U & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.u3__DOT____VdfgRegularize_h60e48f75_0_0 
                                     >> 0x1bU))));
    bufp->fullBit(oldp+60188,(((5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__fpu_op_r3))
                                ? (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__f2i_zero) 
                                    & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__opas_r2)) 
                                       & (0U != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__fract_out_q))) 
                                   | ((0U != (0x1ffffffU 
                                              & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_21))) 
                                      | (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__f2i_zero) 
                                          & ((0x80U 
                                              > (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__exp_r)) 
                                             & ((0U 
                                                 != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__fract_out_q) 
                                                & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__opas_r2)))) 
                                         | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__f2i_max) 
                                            & ((3U 
                                                == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__rmode_r3)) 
                                               & (0x80U 
                                                  > (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__exp_r)))))))
                                : ((4U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__fpu_op_r3))
                                    ? (0U != (0x1ffffffU 
                                              & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_21)))
                                    : (((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__dn)) 
                                        & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__r)) 
                                       | (((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__dn)) 
                                           & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__s)) 
                                          | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__max_num) 
                                             | (3U 
                                                == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__fpu_op_r3)))))))));
    bufp->fullQData(oldp+60189,(((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__fract_out_q)) 
                                 << 0x14U)),48);
    bufp->fullBit(oldp+60191,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__sign));
    bufp->fullIData(oldp+60192,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__opa_r1),31);
    bufp->fullBit(oldp+60193,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__opas_r1));
    bufp->fullBit(oldp+60194,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__opas_r2));
    bufp->fullBit(oldp+60195,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__opas_r2)
                                ? (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__exp_r) 
                                    >= ((0U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__rmode_r3))
                                         ? 0x7eU : 0x7fU)) 
                                   & ((0x9dU < (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__exp_r)) 
                                      | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__opas_r2)))
                                : (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__exp_r) 
                                    >= ((0U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__rmode_r3))
                                         ? 0x7eU : 0x7fU)) 
                                   & ((0x9dU >= (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__exp_r)) 
                                      & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__opas_r2))))));
    bufp->fullBit(oldp+60196,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__fasu_op_r1));
    bufp->fullBit(oldp+60197,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__fasu_op_r2));
    bufp->fullIData(oldp+60198,((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__VdfgRegularize_h16e0ae4d_5_0) 
                                  | ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__fasu_op_r2)) 
                                     & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__ind_d)))
                                  ? 0x7fc00001U : 0x7f800000U)),31);
    bufp->fullBit(oldp+60199,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__output_zero_fasu));
    bufp->fullBit(oldp+60200,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__VdfgRegularize_h16e0ae4d_5_1) 
                               & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__overflow))));
    bufp->fullBit(oldp+60201,((1U & (~ (IData)((0U 
                                                != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__out))))));
    bufp->fullBit(oldp+60202,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__VdfgRegularize_h16e0ae4d_5_1) 
                               & (((5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__fpu_op_r3))
                                    ? (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__f2i_zero) 
                                        & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__opas_r2)) 
                                           & (0U != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__fract_out_q))) 
                                       | ((0U != (0x1ffffffU 
                                                  & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_21))) 
                                          | (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__f2i_zero) 
                                              & ((0x80U 
                                                  > (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__exp_r)) 
                                                 & ((0U 
                                                     != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__fract_out_q) 
                                                    & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__opas_r2)))) 
                                             | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__f2i_max) 
                                                & ((3U 
                                                    == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__rmode_r3)) 
                                                   & (0x80U 
                                                      > (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__exp_r)))))))
                                    : ((4U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__fpu_op_r3))
                                        ? (0U != (0x1ffffffU 
                                                  & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_21)))
                                        : (((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__dn)) 
                                            & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__r)) 
                                           | (((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__dn)) 
                                               & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__s)) 
                                              | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__max_num) 
                                                 | (3U 
                                                    == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__fpu_op_r3))))))) 
                                  | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__overflow) 
                                     | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__underflow))))));
    bufp->fullBit(oldp+60203,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__VdfgRegularize_h16e0ae4d_5_2) 
                               & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__underflow))));
    bufp->fullBit(oldp+60204,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__opa_nan_r));
    bufp->fullIData(oldp+60205,((0x7fffffffU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__opa_r)),31);
    bufp->fullIData(oldp+60206,((0x7fffffffU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__opb_r)),31);
    bufp->fullCData(oldp+60207,((0xffU & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__opa_r 
                                          >> 0x17U))),8);
    bufp->fullCData(oldp+60208,((0xffU & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__opb_r 
                                          >> 0x17U))),8);
    bufp->fullIData(oldp+60209,((0x7fffffU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__opa_r)),23);
    bufp->fullIData(oldp+60210,((0x7fffffU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__opb_r)),23);
    bufp->fullBit(oldp+60211,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u0__DOT__expa_ff));
    bufp->fullBit(oldp+60212,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u0__DOT__infa_f_r));
    bufp->fullBit(oldp+60213,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u0__DOT__qnan_r_a));
    bufp->fullBit(oldp+60214,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u0__DOT__snan_r_a));
    bufp->fullBit(oldp+60215,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u0__DOT__expb_ff));
    bufp->fullBit(oldp+60216,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u0__DOT__infb_f_r));
    bufp->fullBit(oldp+60217,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u0__DOT__qnan_r_b));
    bufp->fullBit(oldp+60218,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u0__DOT__snan_r_b));
    bufp->fullBit(oldp+60219,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u0__DOT__expa_00));
    bufp->fullBit(oldp+60220,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u0__DOT__expb_00));
    bufp->fullBit(oldp+60221,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u0__DOT__fracta_00));
    bufp->fullBit(oldp+60222,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u0__DOT__fractb_00));
    bufp->fullBit(oldp+60223,((vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__opa_r 
                               >> 0x1fU)));
    bufp->fullBit(oldp+60224,((vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__opb_r 
                               >> 0x1fU)));
    bufp->fullBit(oldp+60225,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__expa_lt_expb));
    bufp->fullCData(oldp+60226,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__expa_lt_expb)
                                           ? (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__opb_r 
                                              >> 0x17U)
                                           : (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__opa_r 
                                              >> 0x17U)))),8);
    bufp->fullCData(oldp+60227,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__exp_large),8);
    bufp->fullCData(oldp+60228,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.u1__DOT____VdfgRegularize_h05e998eb_0_2)
                                  ? 0U : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__exp_diff2))),8);
    bufp->fullIData(oldp+60229,((0x7fffffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__expa_lt_expb)
                                               ? vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__opb_r
                                               : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__opa_r))),23);
    bufp->fullBit(oldp+60230,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__add_d));
    bufp->fullBit(oldp+60231,((1U & (~ (IData)((0U 
                                                != 
                                                (0xffU 
                                                 & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__opa_r 
                                                    >> 0x17U))))))));
    bufp->fullBit(oldp+60232,((1U & (~ (IData)((0U 
                                                != 
                                                (0xffU 
                                                 & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__opb_r 
                                                    >> 0x17U))))))));
    bufp->fullBit(oldp+60233,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__add_r));
    bufp->fullBit(oldp+60234,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__signa_r));
    bufp->fullBit(oldp+60235,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__signb_r));
    bufp->fullBit(oldp+60236,((0x1bU < ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.u1__DOT____VdfgRegularize_h05e998eb_0_2)
                                         ? 0U : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__exp_diff2)))));
    bufp->fullBit(oldp+60237,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__expa_lt_expb)
                                      ? (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0xffU 
                                                     & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__opb_r 
                                                        >> 0x17U)))))
                                      : (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0xffU 
                                                     & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__opa_r 
                                                        >> 0x17U)))))))));
    bufp->fullBit(oldp+60238,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__fracta_lt_fractb));
    bufp->fullBit(oldp+60239,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__fracta_eq_fractb));
    bufp->fullBit(oldp+60240,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__fracta_eq_fractb)
                                ? ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__signa_r) 
                                   & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__signb_r))
                                : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__fracta_lt_fractb)
                                    ? (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__signb_r)
                                    : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__signa_r)))));
    bufp->fullCData(oldp+60241,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__exp_large) 
                                          - ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__expa_lt_expb)
                                              ? (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__opb_r 
                                                 >> 0x17U)
                                              : (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__opa_r 
                                                 >> 0x17U))))),8);
    bufp->fullCData(oldp+60242,((0xffU & (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__exp_large) 
                                           - ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__expa_lt_expb)
                                               ? (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__opb_r 
                                                  >> 0x17U)
                                               : (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__opa_r 
                                                  >> 0x17U))) 
                                          - (IData)(1U)))),8);
    bufp->fullCData(oldp+60243,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__exp_diff2),8);
    bufp->fullBit(oldp+60244,((1U & (~ ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__expa_lt_expb)
                                         ? (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (0xffU 
                                                        & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__opb_r 
                                                           >> 0x17U)))))
                                         : (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (0xffU 
                                                        & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__opa_r 
                                                           >> 0x17U))))))))));
    bufp->fullCData(oldp+60245,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__fpu_op),3);
    bufp->fullBit(oldp+60246,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__zero));
    bufp->fullIData(oldp+60247,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__opa_r),32);
    bufp->fullIData(oldp+60248,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__opb_r),32);
    bufp->fullBit(oldp+60249,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__div_by_zero));
    bufp->fullBit(oldp+60250,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__sign_fasu));
    bufp->fullIData(oldp+60251,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__fracta),27);
    bufp->fullIData(oldp+60252,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__fractb),27);
    bufp->fullCData(oldp+60253,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__exp_fasu),8);
    bufp->fullCData(oldp+60254,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__exp_r),8);
    bufp->fullIData(oldp+60255,((0x7ffffffU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.u3__DOT____VdfgRegularize_h60e48f75_0_0)),27);
    bufp->fullIData(oldp+60256,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__fract_out_q),28);
    bufp->fullIData(oldp+60257,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__out),31);
    bufp->fullBit(oldp+60258,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__overflow));
    bufp->fullBit(oldp+60259,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__underflow));
    bufp->fullBit(oldp+60260,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__overflow));
    bufp->fullBit(oldp+60261,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__underflow));
    bufp->fullBit(oldp+60262,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__inf));
    bufp->fullBit(oldp+60263,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__snan));
    bufp->fullBit(oldp+60264,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__qnan));
    bufp->fullBit(oldp+60265,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__ine));
    bufp->fullCData(oldp+60266,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__rmode_r1),2);
    bufp->fullCData(oldp+60267,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__rmode_r2),2);
    bufp->fullCData(oldp+60268,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__rmode_r3),2);
    bufp->fullCData(oldp+60269,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__fpu_op_r1),3);
    bufp->fullCData(oldp+60270,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__fpu_op_r2),3);
    bufp->fullCData(oldp+60271,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__fpu_op_r3),3);
    bufp->fullIData(oldp+60272,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__out_o1),32);
    bufp->fullBit(oldp+60273,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__inf_o1));
    bufp->fullBit(oldp+60274,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__snan_o1));
    bufp->fullBit(oldp+60275,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__qnan_o1));
    bufp->fullBit(oldp+60276,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__ine_o1));
    bufp->fullBit(oldp+60277,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__overflow_o1));
    bufp->fullBit(oldp+60278,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__underflow_o1));
    bufp->fullBit(oldp+60279,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__zero_o1));
    bufp->fullBit(oldp+60280,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__div_by_zero_o1));
    bufp->fullBit(oldp+60281,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__inf_d));
    bufp->fullBit(oldp+60282,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__ind_d));
    bufp->fullBit(oldp+60283,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__qnan_d));
    bufp->fullBit(oldp+60284,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__snan_d));
    bufp->fullBit(oldp+60285,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__opa_nan));
    bufp->fullBit(oldp+60286,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__opb_nan));
    bufp->fullBit(oldp+60287,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__opa_00));
    bufp->fullBit(oldp+60288,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__opb_00));
    bufp->fullBit(oldp+60289,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__opa_inf));
    bufp->fullBit(oldp+60290,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__opb_inf));
    bufp->fullBit(oldp+60291,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__opa_dn));
    bufp->fullBit(oldp+60292,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__opb_dn));
    bufp->fullBit(oldp+60293,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__nan_sign_d));
    bufp->fullBit(oldp+60294,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__result_zero_sign_d));
    bufp->fullBit(oldp+60295,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__sign_fasu_r));
    bufp->fullBit(oldp+60296,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__fasu_op));
    bufp->fullBit(oldp+60297,((1U & (~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__fpu_op_r1)))));
    bufp->fullBit(oldp+60298,((1U & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.u3__DOT____VdfgRegularize_h60e48f75_0_0 
                                     >> 0x1bU))));
    bufp->fullBit(oldp+60299,(((5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__fpu_op_r3))
                                ? (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__f2i_zero) 
                                    & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__opas_r2)) 
                                       & (0U != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__fract_out_q))) 
                                   | ((0U != (0x1ffffffU 
                                              & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_21))) 
                                      | (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__f2i_zero) 
                                          & ((0x80U 
                                              > (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__exp_r)) 
                                             & ((0U 
                                                 != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__fract_out_q) 
                                                & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__opas_r2)))) 
                                         | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__f2i_max) 
                                            & ((3U 
                                                == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__rmode_r3)) 
                                               & (0x80U 
                                                  > (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__exp_r)))))))
                                : ((4U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__fpu_op_r3))
                                    ? (0U != (0x1ffffffU 
                                              & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_21)))
                                    : (((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__dn)) 
                                        & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__r)) 
                                       | (((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__dn)) 
                                           & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__s)) 
                                          | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__max_num) 
                                             | (3U 
                                                == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__fpu_op_r3)))))))));
    bufp->fullQData(oldp+60300,(((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__fract_out_q)) 
                                 << 0x14U)),48);
    bufp->fullBit(oldp+60302,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__sign));
    bufp->fullIData(oldp+60303,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__opa_r1),31);
    bufp->fullBit(oldp+60304,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__opas_r1));
    bufp->fullBit(oldp+60305,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__opas_r2));
    bufp->fullBit(oldp+60306,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__opas_r2)
                                ? (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__exp_r) 
                                    >= ((0U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__rmode_r3))
                                         ? 0x7eU : 0x7fU)) 
                                   & ((0x9dU < (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__exp_r)) 
                                      | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__opas_r2)))
                                : (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__exp_r) 
                                    >= ((0U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__rmode_r3))
                                         ? 0x7eU : 0x7fU)) 
                                   & ((0x9dU >= (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__exp_r)) 
                                      & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__opas_r2))))));
    bufp->fullBit(oldp+60307,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__fasu_op_r1));
    bufp->fullBit(oldp+60308,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__fasu_op_r2));
    bufp->fullIData(oldp+60309,((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__VdfgRegularize_h16e0ae4d_5_0) 
                                  | ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__fasu_op_r2)) 
                                     & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__ind_d)))
                                  ? 0x7fc00001U : 0x7f800000U)),31);
    bufp->fullBit(oldp+60310,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__output_zero_fasu));
    bufp->fullBit(oldp+60311,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__VdfgRegularize_h16e0ae4d_5_1) 
                               & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__overflow))));
    bufp->fullBit(oldp+60312,((1U & (~ (IData)((0U 
                                                != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__out))))));
    bufp->fullBit(oldp+60313,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__VdfgRegularize_h16e0ae4d_5_1) 
                               & (((5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__fpu_op_r3))
                                    ? (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__f2i_zero) 
                                        & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__opas_r2)) 
                                           & (0U != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__fract_out_q))) 
                                       | ((0U != (0x1ffffffU 
                                                  & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_21))) 
                                          | (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__f2i_zero) 
                                              & ((0x80U 
                                                  > (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__exp_r)) 
                                                 & ((0U 
                                                     != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__fract_out_q) 
                                                    & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__opas_r2)))) 
                                             | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__f2i_max) 
                                                & ((3U 
                                                    == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__rmode_r3)) 
                                                   & (0x80U 
                                                      > (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__exp_r)))))))
                                    : ((4U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__fpu_op_r3))
                                        ? (0U != (0x1ffffffU 
                                                  & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_21)))
                                        : (((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__dn)) 
                                            & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__r)) 
                                           | (((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__dn)) 
                                               & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__s)) 
                                              | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__max_num) 
                                                 | (3U 
                                                    == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__fpu_op_r3))))))) 
                                  | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__overflow) 
                                     | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__underflow))))));
    bufp->fullBit(oldp+60314,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__VdfgRegularize_h16e0ae4d_5_2) 
                               & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__underflow))));
    bufp->fullBit(oldp+60315,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__opa_nan_r));
    bufp->fullIData(oldp+60316,((0x7fffffffU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__opa_r)),31);
    bufp->fullIData(oldp+60317,((0x7fffffffU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__opb_r)),31);
    bufp->fullCData(oldp+60318,((0xffU & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__opa_r 
                                          >> 0x17U))),8);
    bufp->fullCData(oldp+60319,((0xffU & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__opb_r 
                                          >> 0x17U))),8);
    bufp->fullIData(oldp+60320,((0x7fffffU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__opa_r)),23);
    bufp->fullIData(oldp+60321,((0x7fffffU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__opb_r)),23);
    bufp->fullBit(oldp+60322,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u0__DOT__expa_ff));
    bufp->fullBit(oldp+60323,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u0__DOT__infa_f_r));
    bufp->fullBit(oldp+60324,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u0__DOT__qnan_r_a));
    bufp->fullBit(oldp+60325,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u0__DOT__snan_r_a));
    bufp->fullBit(oldp+60326,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u0__DOT__expb_ff));
    bufp->fullBit(oldp+60327,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u0__DOT__infb_f_r));
    bufp->fullBit(oldp+60328,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u0__DOT__qnan_r_b));
    bufp->fullBit(oldp+60329,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u0__DOT__snan_r_b));
    bufp->fullBit(oldp+60330,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u0__DOT__expa_00));
    bufp->fullBit(oldp+60331,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u0__DOT__expb_00));
    bufp->fullBit(oldp+60332,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u0__DOT__fracta_00));
    bufp->fullBit(oldp+60333,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u0__DOT__fractb_00));
    bufp->fullBit(oldp+60334,((vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__opa_r 
                               >> 0x1fU)));
    bufp->fullBit(oldp+60335,((vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__opb_r 
                               >> 0x1fU)));
    bufp->fullBit(oldp+60336,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__expa_lt_expb));
    bufp->fullCData(oldp+60337,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__expa_lt_expb)
                                           ? (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__opb_r 
                                              >> 0x17U)
                                           : (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__opa_r 
                                              >> 0x17U)))),8);
    bufp->fullCData(oldp+60338,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__exp_large),8);
    bufp->fullCData(oldp+60339,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.u1__DOT____VdfgRegularize_h05e998eb_0_2)
                                  ? 0U : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__exp_diff2))),8);
    bufp->fullIData(oldp+60340,((0x7fffffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__expa_lt_expb)
                                               ? vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__opb_r
                                               : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__opa_r))),23);
    bufp->fullBit(oldp+60341,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__add_d));
    bufp->fullBit(oldp+60342,((1U & (~ (IData)((0U 
                                                != 
                                                (0xffU 
                                                 & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__opa_r 
                                                    >> 0x17U))))))));
    bufp->fullBit(oldp+60343,((1U & (~ (IData)((0U 
                                                != 
                                                (0xffU 
                                                 & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__opb_r 
                                                    >> 0x17U))))))));
    bufp->fullBit(oldp+60344,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__add_r));
    bufp->fullBit(oldp+60345,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__signa_r));
    bufp->fullBit(oldp+60346,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__signb_r));
    bufp->fullBit(oldp+60347,((0x1bU < ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.u1__DOT____VdfgRegularize_h05e998eb_0_2)
                                         ? 0U : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__exp_diff2)))));
    bufp->fullBit(oldp+60348,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__expa_lt_expb)
                                      ? (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0xffU 
                                                     & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__opb_r 
                                                        >> 0x17U)))))
                                      : (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0xffU 
                                                     & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__opa_r 
                                                        >> 0x17U)))))))));
    bufp->fullBit(oldp+60349,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__fracta_lt_fractb));
    bufp->fullBit(oldp+60350,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__fracta_eq_fractb));
    bufp->fullBit(oldp+60351,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__fracta_eq_fractb)
                                ? ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__signa_r) 
                                   & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__signb_r))
                                : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__fracta_lt_fractb)
                                    ? (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__signb_r)
                                    : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__signa_r)))));
    bufp->fullCData(oldp+60352,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__exp_large) 
                                          - ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__expa_lt_expb)
                                              ? (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__opb_r 
                                                 >> 0x17U)
                                              : (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__opa_r 
                                                 >> 0x17U))))),8);
    bufp->fullCData(oldp+60353,((0xffU & (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__exp_large) 
                                           - ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__expa_lt_expb)
                                               ? (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__opb_r 
                                                  >> 0x17U)
                                               : (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__opa_r 
                                                  >> 0x17U))) 
                                          - (IData)(1U)))),8);
    bufp->fullCData(oldp+60354,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__exp_diff2),8);
    bufp->fullBit(oldp+60355,((1U & (~ ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__expa_lt_expb)
                                         ? (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (0xffU 
                                                        & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__opb_r 
                                                           >> 0x17U)))))
                                         : (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (0xffU 
                                                        & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__opa_r 
                                                           >> 0x17U))))))))));
    bufp->fullCData(oldp+60356,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fpu_op),3);
    bufp->fullBit(oldp+60357,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__zero));
    bufp->fullIData(oldp+60358,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opa_r),32);
    bufp->fullIData(oldp+60359,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opb_r),32);
    bufp->fullBit(oldp+60360,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__div_by_zero));
    bufp->fullBit(oldp+60361,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__sign_fasu));
    bufp->fullIData(oldp+60362,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fracta),27);
    bufp->fullIData(oldp+60363,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fractb),27);
    bufp->fullCData(oldp+60364,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_fasu),8);
    bufp->fullCData(oldp+60365,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r),8);
    bufp->fullIData(oldp+60366,((0x7ffffffU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.u3__DOT____VdfgRegularize_h60e48f75_0_0)),27);
    bufp->fullIData(oldp+60367,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q),28);
    bufp->fullIData(oldp+60368,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__out),31);
    bufp->fullBit(oldp+60369,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__overflow));
    bufp->fullBit(oldp+60370,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__underflow));
    bufp->fullBit(oldp+60371,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__overflow));
    bufp->fullBit(oldp+60372,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__underflow));
    bufp->fullBit(oldp+60373,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__inf));
    bufp->fullBit(oldp+60374,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__snan));
    bufp->fullBit(oldp+60375,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__qnan));
    bufp->fullBit(oldp+60376,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__ine));
    bufp->fullCData(oldp+60377,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__rmode_r1),2);
    bufp->fullCData(oldp+60378,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__rmode_r2),2);
    bufp->fullCData(oldp+60379,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__rmode_r3),2);
    bufp->fullCData(oldp+60380,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fpu_op_r1),3);
    bufp->fullCData(oldp+60381,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fpu_op_r2),3);
    bufp->fullCData(oldp+60382,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fpu_op_r3),3);
    bufp->fullIData(oldp+60383,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__out_o1),32);
    bufp->fullBit(oldp+60384,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__inf_o1));
    bufp->fullBit(oldp+60385,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__snan_o1));
    bufp->fullBit(oldp+60386,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__qnan_o1));
    bufp->fullBit(oldp+60387,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__ine_o1));
    bufp->fullBit(oldp+60388,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__overflow_o1));
    bufp->fullBit(oldp+60389,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__underflow_o1));
    bufp->fullBit(oldp+60390,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__zero_o1));
    bufp->fullBit(oldp+60391,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__div_by_zero_o1));
    bufp->fullBit(oldp+60392,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__inf_d));
    bufp->fullBit(oldp+60393,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__ind_d));
    bufp->fullBit(oldp+60394,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__qnan_d));
    bufp->fullBit(oldp+60395,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__snan_d));
    bufp->fullBit(oldp+60396,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opa_nan));
    bufp->fullBit(oldp+60397,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opb_nan));
    bufp->fullBit(oldp+60398,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opa_00));
    bufp->fullBit(oldp+60399,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opb_00));
    bufp->fullBit(oldp+60400,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opa_inf));
    bufp->fullBit(oldp+60401,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opb_inf));
    bufp->fullBit(oldp+60402,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opa_dn));
    bufp->fullBit(oldp+60403,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opb_dn));
    bufp->fullBit(oldp+60404,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__nan_sign_d));
    bufp->fullBit(oldp+60405,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__result_zero_sign_d));
    bufp->fullBit(oldp+60406,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__sign_fasu_r));
    bufp->fullBit(oldp+60407,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fasu_op));
    bufp->fullBit(oldp+60408,((1U & (~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fpu_op_r1)))));
    bufp->fullBit(oldp+60409,((1U & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.u3__DOT____VdfgRegularize_h60e48f75_0_0 
                                     >> 0x1bU))));
    bufp->fullBit(oldp+60410,(((5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fpu_op_r3))
                                ? (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__f2i_zero) 
                                    & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opas_r2)) 
                                       & (0U != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q))) 
                                   | ((0U != (0x1ffffffU 
                                              & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_21))) 
                                      | (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__f2i_zero) 
                                          & ((0x80U 
                                              > (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r)) 
                                             & ((0U 
                                                 != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q) 
                                                & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opas_r2)))) 
                                         | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__f2i_max) 
                                            & ((3U 
                                                == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__rmode_r3)) 
                                               & (0x80U 
                                                  > (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r)))))))
                                : ((4U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fpu_op_r3))
                                    ? (0U != (0x1ffffffU 
                                              & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_21)))
                                    : (((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__dn)) 
                                        & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__r)) 
                                       | (((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__dn)) 
                                           & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__s)) 
                                          | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__max_num) 
                                             | (3U 
                                                == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fpu_op_r3)))))))));
    bufp->fullQData(oldp+60411,(((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                 << 0x14U)),48);
    bufp->fullBit(oldp+60413,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__sign));
    bufp->fullIData(oldp+60414,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opa_r1),31);
    bufp->fullBit(oldp+60415,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opas_r1));
    bufp->fullBit(oldp+60416,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opas_r2));
    bufp->fullBit(oldp+60417,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opas_r2)
                                ? (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r) 
                                    >= ((0U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__rmode_r3))
                                         ? 0x7eU : 0x7fU)) 
                                   & ((0x9dU < (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r)) 
                                      | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opas_r2)))
                                : (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r) 
                                    >= ((0U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__rmode_r3))
                                         ? 0x7eU : 0x7fU)) 
                                   & ((0x9dU >= (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r)) 
                                      & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opas_r2))))));
    bufp->fullBit(oldp+60418,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fasu_op_r1));
    bufp->fullBit(oldp+60419,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fasu_op_r2));
    bufp->fullIData(oldp+60420,((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__VdfgRegularize_h16e0ae4d_5_0) 
                                  | ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fasu_op_r2)) 
                                     & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__ind_d)))
                                  ? 0x7fc00001U : 0x7f800000U)),31);
    bufp->fullBit(oldp+60421,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__output_zero_fasu));
    bufp->fullBit(oldp+60422,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__VdfgRegularize_h16e0ae4d_5_1) 
                               & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__overflow))));
    bufp->fullBit(oldp+60423,((1U & (~ (IData)((0U 
                                                != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__out))))));
    bufp->fullBit(oldp+60424,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__VdfgRegularize_h16e0ae4d_5_1) 
                               & (((5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fpu_op_r3))
                                    ? (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__f2i_zero) 
                                        & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opas_r2)) 
                                           & (0U != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q))) 
                                       | ((0U != (0x1ffffffU 
                                                  & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_21))) 
                                          | (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__f2i_zero) 
                                              & ((0x80U 
                                                  > (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r)) 
                                                 & ((0U 
                                                     != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q) 
                                                    & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opas_r2)))) 
                                             | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__f2i_max) 
                                                & ((3U 
                                                    == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__rmode_r3)) 
                                                   & (0x80U 
                                                      > (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r)))))))
                                    : ((4U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fpu_op_r3))
                                        ? (0U != (0x1ffffffU 
                                                  & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_21)))
                                        : (((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__dn)) 
                                            & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__r)) 
                                           | (((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__dn)) 
                                               & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__s)) 
                                              | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__max_num) 
                                                 | (3U 
                                                    == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fpu_op_r3))))))) 
                                  | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__overflow) 
                                     | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__underflow))))));
    bufp->fullBit(oldp+60425,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__VdfgRegularize_h16e0ae4d_5_2) 
                               & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__underflow))));
    bufp->fullBit(oldp+60426,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opa_nan_r));
    bufp->fullIData(oldp+60427,((0x7fffffffU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opa_r)),31);
    bufp->fullIData(oldp+60428,((0x7fffffffU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opb_r)),31);
    bufp->fullCData(oldp+60429,((0xffU & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opa_r 
                                          >> 0x17U))),8);
    bufp->fullCData(oldp+60430,((0xffU & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opb_r 
                                          >> 0x17U))),8);
    bufp->fullIData(oldp+60431,((0x7fffffU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opa_r)),23);
    bufp->fullIData(oldp+60432,((0x7fffffU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opb_r)),23);
    bufp->fullBit(oldp+60433,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u0__DOT__expa_ff));
    bufp->fullBit(oldp+60434,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u0__DOT__infa_f_r));
    bufp->fullBit(oldp+60435,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u0__DOT__qnan_r_a));
    bufp->fullBit(oldp+60436,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u0__DOT__snan_r_a));
    bufp->fullBit(oldp+60437,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u0__DOT__expb_ff));
    bufp->fullBit(oldp+60438,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u0__DOT__infb_f_r));
    bufp->fullBit(oldp+60439,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u0__DOT__qnan_r_b));
    bufp->fullBit(oldp+60440,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u0__DOT__snan_r_b));
    bufp->fullBit(oldp+60441,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u0__DOT__expa_00));
    bufp->fullBit(oldp+60442,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u0__DOT__expb_00));
    bufp->fullBit(oldp+60443,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u0__DOT__fracta_00));
    bufp->fullBit(oldp+60444,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u0__DOT__fractb_00));
    bufp->fullBit(oldp+60445,((vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opa_r 
                               >> 0x1fU)));
    bufp->fullBit(oldp+60446,((vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opb_r 
                               >> 0x1fU)));
    bufp->fullBit(oldp+60447,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__expa_lt_expb));
    bufp->fullCData(oldp+60448,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__expa_lt_expb)
                                           ? (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opb_r 
                                              >> 0x17U)
                                           : (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opa_r 
                                              >> 0x17U)))),8);
    bufp->fullCData(oldp+60449,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__exp_large),8);
    bufp->fullCData(oldp+60450,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.u1__DOT____VdfgRegularize_h05e998eb_0_2)
                                  ? 0U : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__exp_diff2))),8);
    bufp->fullIData(oldp+60451,((0x7fffffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__expa_lt_expb)
                                               ? vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opb_r
                                               : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opa_r))),23);
    bufp->fullBit(oldp+60452,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__add_d));
    bufp->fullBit(oldp+60453,((1U & (~ (IData)((0U 
                                                != 
                                                (0xffU 
                                                 & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opa_r 
                                                    >> 0x17U))))))));
    bufp->fullBit(oldp+60454,((1U & (~ (IData)((0U 
                                                != 
                                                (0xffU 
                                                 & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opb_r 
                                                    >> 0x17U))))))));
    bufp->fullBit(oldp+60455,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__add_r));
    bufp->fullBit(oldp+60456,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__signa_r));
    bufp->fullBit(oldp+60457,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__signb_r));
    bufp->fullBit(oldp+60458,((0x1bU < ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.u1__DOT____VdfgRegularize_h05e998eb_0_2)
                                         ? 0U : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__exp_diff2)))));
    bufp->fullBit(oldp+60459,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__expa_lt_expb)
                                      ? (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0xffU 
                                                     & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opb_r 
                                                        >> 0x17U)))))
                                      : (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0xffU 
                                                     & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opa_r 
                                                        >> 0x17U)))))))));
    bufp->fullBit(oldp+60460,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__fracta_lt_fractb));
    bufp->fullBit(oldp+60461,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__fracta_eq_fractb));
    bufp->fullBit(oldp+60462,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__fracta_eq_fractb)
                                ? ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__signa_r) 
                                   & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__signb_r))
                                : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__fracta_lt_fractb)
                                    ? (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__signb_r)
                                    : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__signa_r)))));
    bufp->fullCData(oldp+60463,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__exp_large) 
                                          - ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__expa_lt_expb)
                                              ? (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opb_r 
                                                 >> 0x17U)
                                              : (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opa_r 
                                                 >> 0x17U))))),8);
    bufp->fullCData(oldp+60464,((0xffU & (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__exp_large) 
                                           - ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__expa_lt_expb)
                                               ? (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opb_r 
                                                  >> 0x17U)
                                               : (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opa_r 
                                                  >> 0x17U))) 
                                          - (IData)(1U)))),8);
    bufp->fullCData(oldp+60465,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__exp_diff2),8);
    bufp->fullBit(oldp+60466,((1U & (~ ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__expa_lt_expb)
                                         ? (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (0xffU 
                                                        & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opb_r 
                                                           >> 0x17U)))))
                                         : (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (0xffU 
                                                        & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opa_r 
                                                           >> 0x17U))))))))));
    bufp->fullCData(oldp+60467,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fpu_op),3);
    bufp->fullBit(oldp+60468,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__zero));
    bufp->fullIData(oldp+60469,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opa_r),32);
    bufp->fullIData(oldp+60470,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opb_r),32);
    bufp->fullBit(oldp+60471,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__div_by_zero));
    bufp->fullBit(oldp+60472,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__sign_fasu));
    bufp->fullIData(oldp+60473,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fracta),27);
    bufp->fullIData(oldp+60474,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fractb),27);
    bufp->fullCData(oldp+60475,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_fasu),8);
    bufp->fullCData(oldp+60476,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r),8);
    bufp->fullIData(oldp+60477,((0x7ffffffU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.u3__DOT____VdfgRegularize_h60e48f75_0_0)),27);
    bufp->fullIData(oldp+60478,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q),28);
    bufp->fullIData(oldp+60479,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__out),31);
    bufp->fullBit(oldp+60480,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__overflow));
    bufp->fullBit(oldp+60481,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__underflow));
    bufp->fullBit(oldp+60482,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__overflow));
    bufp->fullBit(oldp+60483,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__underflow));
    bufp->fullBit(oldp+60484,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__inf));
    bufp->fullBit(oldp+60485,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__snan));
    bufp->fullBit(oldp+60486,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__qnan));
    bufp->fullBit(oldp+60487,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__ine));
    bufp->fullCData(oldp+60488,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__rmode_r1),2);
    bufp->fullCData(oldp+60489,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__rmode_r2),2);
    bufp->fullCData(oldp+60490,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__rmode_r3),2);
    bufp->fullCData(oldp+60491,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fpu_op_r1),3);
    bufp->fullCData(oldp+60492,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fpu_op_r2),3);
    bufp->fullCData(oldp+60493,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fpu_op_r3),3);
    bufp->fullIData(oldp+60494,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__out_o1),32);
    bufp->fullBit(oldp+60495,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__inf_o1));
    bufp->fullBit(oldp+60496,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__snan_o1));
    bufp->fullBit(oldp+60497,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__qnan_o1));
    bufp->fullBit(oldp+60498,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__ine_o1));
    bufp->fullBit(oldp+60499,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__overflow_o1));
    bufp->fullBit(oldp+60500,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__underflow_o1));
    bufp->fullBit(oldp+60501,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__zero_o1));
    bufp->fullBit(oldp+60502,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__div_by_zero_o1));
    bufp->fullBit(oldp+60503,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__inf_d));
    bufp->fullBit(oldp+60504,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__ind_d));
    bufp->fullBit(oldp+60505,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__qnan_d));
    bufp->fullBit(oldp+60506,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__snan_d));
    bufp->fullBit(oldp+60507,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opa_nan));
    bufp->fullBit(oldp+60508,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opb_nan));
    bufp->fullBit(oldp+60509,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opa_00));
    bufp->fullBit(oldp+60510,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opb_00));
    bufp->fullBit(oldp+60511,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opa_inf));
    bufp->fullBit(oldp+60512,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opb_inf));
    bufp->fullBit(oldp+60513,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opa_dn));
    bufp->fullBit(oldp+60514,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opb_dn));
    bufp->fullBit(oldp+60515,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__nan_sign_d));
    bufp->fullBit(oldp+60516,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__result_zero_sign_d));
    bufp->fullBit(oldp+60517,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__sign_fasu_r));
    bufp->fullBit(oldp+60518,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fasu_op));
    bufp->fullBit(oldp+60519,((1U & (~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fpu_op_r1)))));
    bufp->fullBit(oldp+60520,((1U & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.u3__DOT____VdfgRegularize_h60e48f75_0_0 
                                     >> 0x1bU))));
    bufp->fullBit(oldp+60521,(((5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fpu_op_r3))
                                ? (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__f2i_zero) 
                                    & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opas_r2)) 
                                       & (0U != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q))) 
                                   | ((0U != (0x1ffffffU 
                                              & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_21))) 
                                      | (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__f2i_zero) 
                                          & ((0x80U 
                                              > (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r)) 
                                             & ((0U 
                                                 != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q) 
                                                & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opas_r2)))) 
                                         | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__f2i_max) 
                                            & ((3U 
                                                == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__rmode_r3)) 
                                               & (0x80U 
                                                  > (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r)))))))
                                : ((4U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fpu_op_r3))
                                    ? (0U != (0x1ffffffU 
                                              & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_21)))
                                    : (((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__dn)) 
                                        & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__r)) 
                                       | (((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__dn)) 
                                           & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__s)) 
                                          | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__max_num) 
                                             | (3U 
                                                == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fpu_op_r3)))))))));
    bufp->fullQData(oldp+60522,(((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                 << 0x14U)),48);
    bufp->fullBit(oldp+60524,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__sign));
    bufp->fullIData(oldp+60525,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opa_r1),31);
    bufp->fullBit(oldp+60526,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opas_r1));
    bufp->fullBit(oldp+60527,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opas_r2));
    bufp->fullBit(oldp+60528,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opas_r2)
                                ? (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r) 
                                    >= ((0U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__rmode_r3))
                                         ? 0x7eU : 0x7fU)) 
                                   & ((0x9dU < (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r)) 
                                      | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opas_r2)))
                                : (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r) 
                                    >= ((0U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__rmode_r3))
                                         ? 0x7eU : 0x7fU)) 
                                   & ((0x9dU >= (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r)) 
                                      & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opas_r2))))));
    bufp->fullBit(oldp+60529,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fasu_op_r1));
    bufp->fullBit(oldp+60530,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fasu_op_r2));
    bufp->fullIData(oldp+60531,((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__VdfgRegularize_h16e0ae4d_5_0) 
                                  | ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fasu_op_r2)) 
                                     & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__ind_d)))
                                  ? 0x7fc00001U : 0x7f800000U)),31);
    bufp->fullBit(oldp+60532,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__output_zero_fasu));
    bufp->fullBit(oldp+60533,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__VdfgRegularize_h16e0ae4d_5_1) 
                               & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__overflow))));
    bufp->fullBit(oldp+60534,((1U & (~ (IData)((0U 
                                                != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__out))))));
    bufp->fullBit(oldp+60535,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__VdfgRegularize_h16e0ae4d_5_1) 
                               & (((5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fpu_op_r3))
                                    ? (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__f2i_zero) 
                                        & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opas_r2)) 
                                           & (0U != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q))) 
                                       | ((0U != (0x1ffffffU 
                                                  & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_21))) 
                                          | (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__f2i_zero) 
                                              & ((0x80U 
                                                  > (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r)) 
                                                 & ((0U 
                                                     != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q) 
                                                    & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opas_r2)))) 
                                             | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__f2i_max) 
                                                & ((3U 
                                                    == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__rmode_r3)) 
                                                   & (0x80U 
                                                      > (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r)))))))
                                    : ((4U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fpu_op_r3))
                                        ? (0U != (0x1ffffffU 
                                                  & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_21)))
                                        : (((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__dn)) 
                                            & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__r)) 
                                           | (((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__dn)) 
                                               & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__s)) 
                                              | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__max_num) 
                                                 | (3U 
                                                    == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fpu_op_r3))))))) 
                                  | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__overflow) 
                                     | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__underflow))))));
    bufp->fullBit(oldp+60536,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__VdfgRegularize_h16e0ae4d_5_2) 
                               & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__underflow))));
    bufp->fullBit(oldp+60537,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opa_nan_r));
    bufp->fullIData(oldp+60538,((0x7fffffffU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opa_r)),31);
    bufp->fullIData(oldp+60539,((0x7fffffffU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opb_r)),31);
    bufp->fullCData(oldp+60540,((0xffU & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opa_r 
                                          >> 0x17U))),8);
    bufp->fullCData(oldp+60541,((0xffU & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opb_r 
                                          >> 0x17U))),8);
    bufp->fullIData(oldp+60542,((0x7fffffU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opa_r)),23);
    bufp->fullIData(oldp+60543,((0x7fffffU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opb_r)),23);
    bufp->fullBit(oldp+60544,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u0__DOT__expa_ff));
    bufp->fullBit(oldp+60545,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u0__DOT__infa_f_r));
    bufp->fullBit(oldp+60546,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u0__DOT__qnan_r_a));
    bufp->fullBit(oldp+60547,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u0__DOT__snan_r_a));
    bufp->fullBit(oldp+60548,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u0__DOT__expb_ff));
    bufp->fullBit(oldp+60549,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u0__DOT__infb_f_r));
    bufp->fullBit(oldp+60550,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u0__DOT__qnan_r_b));
    bufp->fullBit(oldp+60551,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u0__DOT__snan_r_b));
    bufp->fullBit(oldp+60552,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u0__DOT__expa_00));
    bufp->fullBit(oldp+60553,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u0__DOT__expb_00));
    bufp->fullBit(oldp+60554,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u0__DOT__fracta_00));
    bufp->fullBit(oldp+60555,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u0__DOT__fractb_00));
    bufp->fullBit(oldp+60556,((vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opa_r 
                               >> 0x1fU)));
    bufp->fullBit(oldp+60557,((vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opb_r 
                               >> 0x1fU)));
    bufp->fullBit(oldp+60558,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__expa_lt_expb));
    bufp->fullCData(oldp+60559,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__expa_lt_expb)
                                           ? (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opb_r 
                                              >> 0x17U)
                                           : (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opa_r 
                                              >> 0x17U)))),8);
    bufp->fullCData(oldp+60560,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__exp_large),8);
    bufp->fullCData(oldp+60561,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.u1__DOT____VdfgRegularize_h05e998eb_0_2)
                                  ? 0U : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__exp_diff2))),8);
    bufp->fullIData(oldp+60562,((0x7fffffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__expa_lt_expb)
                                               ? vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opb_r
                                               : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opa_r))),23);
    bufp->fullBit(oldp+60563,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__add_d));
    bufp->fullBit(oldp+60564,((1U & (~ (IData)((0U 
                                                != 
                                                (0xffU 
                                                 & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opa_r 
                                                    >> 0x17U))))))));
    bufp->fullBit(oldp+60565,((1U & (~ (IData)((0U 
                                                != 
                                                (0xffU 
                                                 & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opb_r 
                                                    >> 0x17U))))))));
    bufp->fullBit(oldp+60566,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__add_r));
    bufp->fullBit(oldp+60567,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__signa_r));
    bufp->fullBit(oldp+60568,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__signb_r));
    bufp->fullBit(oldp+60569,((0x1bU < ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.u1__DOT____VdfgRegularize_h05e998eb_0_2)
                                         ? 0U : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__exp_diff2)))));
    bufp->fullBit(oldp+60570,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__expa_lt_expb)
                                      ? (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0xffU 
                                                     & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opb_r 
                                                        >> 0x17U)))))
                                      : (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0xffU 
                                                     & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opa_r 
                                                        >> 0x17U)))))))));
    bufp->fullBit(oldp+60571,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__fracta_lt_fractb));
    bufp->fullBit(oldp+60572,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__fracta_eq_fractb));
    bufp->fullBit(oldp+60573,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__fracta_eq_fractb)
                                ? ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__signa_r) 
                                   & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__signb_r))
                                : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__fracta_lt_fractb)
                                    ? (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__signb_r)
                                    : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__signa_r)))));
    bufp->fullCData(oldp+60574,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__exp_large) 
                                          - ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__expa_lt_expb)
                                              ? (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opb_r 
                                                 >> 0x17U)
                                              : (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opa_r 
                                                 >> 0x17U))))),8);
    bufp->fullCData(oldp+60575,((0xffU & (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__exp_large) 
                                           - ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__expa_lt_expb)
                                               ? (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opb_r 
                                                  >> 0x17U)
                                               : (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opa_r 
                                                  >> 0x17U))) 
                                          - (IData)(1U)))),8);
    bufp->fullCData(oldp+60576,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__exp_diff2),8);
    bufp->fullBit(oldp+60577,((1U & (~ ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__expa_lt_expb)
                                         ? (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (0xffU 
                                                        & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opb_r 
                                                           >> 0x17U)))))
                                         : (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (0xffU 
                                                        & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opa_r 
                                                           >> 0x17U))))))))));
    bufp->fullIData(oldp+60578,((0x7fffffU & (IData)(
                                                     (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_21 
                                                      >> 0x19U)))),23);
    bufp->fullCData(oldp+60579,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__exp_out),8);
    bufp->fullBit(oldp+60580,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_23) 
                                     >> 8U))));
    bufp->fullIData(oldp+60581,((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__inf_out) 
                                  | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__ovf0))
                                  ? 0U : (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__max_num) 
                                           | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_46))
                                           ? 0x7fffffU
                                           : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__fract_out_rnd))),23);
    bufp->fullIData(oldp+60582,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__fract_out_rnd),23);
    bufp->fullSData(oldp+60583,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__exp_next_mi),9);
    bufp->fullBit(oldp+60584,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__dn));
    bufp->fullCData(oldp+60585,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__exp_out_final),8);
    bufp->fullCData(oldp+60586,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__exp_out_rnd),8);
    bufp->fullBit(oldp+60587,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__op_dn));
    bufp->fullBit(oldp+60588,((2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__fpu_op_r3))));
    bufp->fullBit(oldp+60589,((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__fpu_op_r3))));
    bufp->fullBit(oldp+60590,((4U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__fpu_op_r3))));
    bufp->fullBit(oldp+60591,((5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__fpu_op_r3))));
    bufp->fullCData(oldp+60592,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__u6__DOT__fi_ldz_r0),6);
    bufp->fullBit(oldp+60593,((1U & (IData)((vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_21 
                                             >> 0x19U)))));
    bufp->fullBit(oldp+60594,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__r));
    bufp->fullBit(oldp+60595,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__s));
    bufp->fullBit(oldp+60596,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_27) 
                               | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__r) 
                                  & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__s)))));
    bufp->fullBit(oldp+60597,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_37)
                                ? ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__sign)) 
                                   & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_30) 
                                      | (3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__fpu_op_r3))))
                                : ((5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__fpu_op_r3))
                                    ? ((2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__rmode_r3)) 
                                       & (((0U != (0xfU 
                                                   & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__fract_out_q)) 
                                           & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__opas_r2)) 
                                              & (0x80U 
                                                 > (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__exp_r)))) 
                                          | (0U != 
                                             (0x1ffffffU 
                                              & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_21)))))
                                    : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_30) 
                                       & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__sign)) 
                                          & ((~ ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__exp_out) 
                                                 >> 7U)) 
                                             | (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__exp_out) 
                                                 >> 7U) 
                                                & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__exp_out_fe)) 
                                                   | ((~ (IData)(
                                                                 (0x7fffffU 
                                                                  == 
                                                                  (0x7fffffU 
                                                                   & (IData)(
                                                                             (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_21 
                                                                              >> 0x19U)))))) 
                                                      | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__exp_out_fe) 
                                                         & (0xfffffe000000ULL 
                                                            == 
                                                            (0xfffffe000000ULL 
                                                             & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_21)))))))))))));
    bufp->fullBit(oldp+60598,((1U & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__exp_out_fe)) 
                                     | ((~ (IData)(
                                                   (0x7fffffU 
                                                    == 
                                                    (0x7fffffU 
                                                     & (IData)(
                                                               (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_21 
                                                                >> 0x19U)))))) 
                                        | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__exp_out_fe) 
                                           & (0xfffffe000000ULL 
                                              == (0xfffffe000000ULL 
                                                  & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_21))))))));
    bufp->fullBit(oldp+60599,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_30) 
                               & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__sign)) 
                                  & ((~ ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__exp_out) 
                                         >> 7U)) | 
                                     (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__exp_out) 
                                       >> 7U) & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__exp_out_fe)) 
                                                 | ((~ (IData)(
                                                               (0x7fffffU 
                                                                == 
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_21 
                                                                            >> 0x19U)))))) 
                                                    | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__exp_out_fe) 
                                                       & (0xfffffe000000ULL 
                                                          == 
                                                          (0xfffffe000000ULL 
                                                           & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_21)))))))))));
    bufp->fullBit(oldp+60600,(((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__sign)) 
                               & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_30) 
                                  | (3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__fpu_op_r3))))));
    bufp->fullCData(oldp+60601,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__exp_out) 
                                          + (1U & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_55 
                                                   >> 0x17U))))),8);
    bufp->fullCData(oldp+60602,((0xffU & (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_27) 
                                           & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__s) 
                                              & (0xffU 
                                                 == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__exp_r))))
                                           ? ((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__fpu_op_r3))
                                               ? ((0x16U 
                                                   < (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__u6__DOT__fi_ldz_r0))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__exp_r) 
                                                   - 
                                                   (0x3fU 
                                                    & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                                       - (IData)(0x16U))))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__exp_r) 
                                                   - 
                                                   (0x3fU 
                                                    & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                                       - (IData)(1U)))))
                                               : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__exp_next_mi))
                                           : (((5U 
                                                != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__fpu_op_r3)) 
                                               & (0xffU 
                                                  == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__exp_out)))
                                               ? (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__exp_r)
                                               : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__exp_out))))),8);
    bufp->fullCData(oldp+60603,((((5U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__fpu_op_r3)) 
                                  & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_38))
                                  ? 0xfeU : (0xffU 
                                             & ((0x800000U 
                                                 & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_54)
                                                 ? 
                                                ((IData)(1U) 
                                                 + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__exp_out))
                                                 : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__exp_out))))),8);
    bufp->fullCData(oldp+60604,((0xffU & ((0x800000U 
                                           & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_54)
                                           ? ((IData)(1U) 
                                              + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__exp_out))
                                           : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__exp_out)))),8);
    bufp->fullIData(oldp+60605,((0x7fffffU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_55)),23);
    bufp->fullIData(oldp+60606,((((3U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__fpu_op_r3)) 
                                  & ((0xffU == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__exp_out)) 
                                     & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_53)))
                                  ? 0x7fffffU : (0x7fffffU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_21 
                                                            >> 0x19U))))),23);
    bufp->fullIData(oldp+60607,((((3U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__fpu_op_r3)) 
                                  & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_38) 
                                     & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_53)))
                                  ? 0x7fffffU : (0x7fffffU 
                                                 & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_54))),23);
    bufp->fullIData(oldp+60608,((0x7fffffU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_54)),23);
    bufp->fullBit(oldp+60609,((1U & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_55 
                                     >> 0x17U))));
    bufp->fullBit(oldp+60610,((1U & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_54 
                                     >> 0x17U))));
    bufp->fullBit(oldp+60611,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__ovf0));
    bufp->fullBit(oldp+60612,(((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__dn)) 
                               & (0xffU == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__exp_out)))));
    bufp->fullIData(oldp+60613,((0xffffffU & ((IData)(1U) 
                                              + (0x7fffffU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_21 
                                                            >> 0x19U)))))),24);
    bufp->fullCData(oldp+60614,((0xffU & ((IData)(1U) 
                                          + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__exp_out)))),8);
    bufp->fullCData(oldp+60615,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__exp_out) 
                                          - (IData)(1U)))),8);
    bufp->fullBit(oldp+60616,((1U & (~ (IData)((0U 
                                                != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__exp_out)))))));
    bufp->fullBit(oldp+60617,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__exp_out_fe));
    bufp->fullBit(oldp+60618,((0xffU == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__exp_out))));
    bufp->fullBit(oldp+60619,((1U & (~ (IData)((0U 
                                                != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__exp_r)))))));
    bufp->fullBit(oldp+60620,((0xffU == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__exp_r))));
    bufp->fullBit(oldp+60621,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_51) 
                               | ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__max_num)) 
                                  & (0xffU == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__exp_out_rnd))))));
    bufp->fullBit(oldp+60622,((0x7fffffU == (0x7fffffU 
                                             & (IData)(
                                                       (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_21 
                                                        >> 0x19U))))));
    bufp->fullIData(oldp+60623,((0x1ffffffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_21))),25);
    bufp->fullCData(oldp+60624,((0xffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_23))),8);
    bufp->fullBit(oldp+60625,((1U & (~ (IData)((0U 
                                                != 
                                                (0x7fffffU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_21 
                                                            >> 0x19U)))))))));
    bufp->fullBit(oldp+60626,((1U & (~ (IData)((0U 
                                                != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__fract_out_q))))));
    bufp->fullBit(oldp+60627,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_14) 
                                     >> 8U))));
    bufp->fullSData(oldp+60628,((0x1ffU & ((IData)(1U) 
                                           + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__exp_r)))),9);
    bufp->fullSData(oldp+60629,((0x1ffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__exp_r) 
                                           - (IData)(1U)))),9);
    bufp->fullQData(oldp+60630,(((0U != (3U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__shift_right) 
                                               >> 6U)))
                                  ? 0ULL : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__fract_in_shftr_1)),48);
    bufp->fullQData(oldp+60632,((((0U != (3U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__shift_left) 
                                                >> 6U))) 
                                  | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__f2i_zero) 
                                     & (5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__fpu_op_r3))))
                                  ? 0ULL : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__fract_in_shftl_1)),48);
    bufp->fullQData(oldp+60634,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__fract_in_shftr_1),48);
    bufp->fullQData(oldp+60636,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__fract_in_shftl_1),48);
    bufp->fullCData(oldp+60638,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__exp_div),8);
    bufp->fullCData(oldp+60639,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_23) 
                                          - (IData)(1U)))),8);
    bufp->fullBit(oldp+60640,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__div_dn));
    bufp->fullBit(oldp+60641,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__grs_sel_div));
    bufp->fullBit(oldp+60642,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__div_inf));
    bufp->fullCData(oldp+60643,((0x7fU & ((IData)(0x17U) 
                                          - (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__u6__DOT__fi_ldz_r0)))),7);
    bufp->fullCData(oldp+60644,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__fi_ldz_2),8);
    bufp->fullCData(oldp+60645,((0xffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_70))),8);
    bufp->fullCData(oldp+60646,((0xffU & ((IData)(2U) 
                                          + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__exp_r)))),8);
    bufp->fullCData(oldp+60647,((0xffU & (- (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__exp_r)))),8);
    bufp->fullBit(oldp+60648,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_70) 
                                     >> 8U))));
    bufp->fullSData(oldp+60649,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__div_exp1),9);
    bufp->fullCData(oldp+60650,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__div_exp2),8);
    bufp->fullCData(oldp+60651,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__exp_r) 
                                          + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__fi_ldz_2)))),8);
    bufp->fullBit(oldp+60652,((1U & ((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__fpu_op_r3))
                                      ? (~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__div_dn))
                                      : ((2U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__fpu_op_r3)) 
                                         | ((0U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__exp_r)) 
                                            | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_62)))))));
    bufp->fullBit(oldp+60653,(((0U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__exp_r)) 
                               | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_62))));
    bufp->fullBit(oldp+60654,((1U & (~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__div_dn)))));
    bufp->fullCData(oldp+60655,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__shift_right),8);
    bufp->fullCData(oldp+60656,((0xffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_14))),8);
    bufp->fullCData(oldp+60657,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__div_dn)
                                           ? (- (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__exp_r))
                                           : ((IData)(2U) 
                                              + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__exp_r))))),8);
    bufp->fullCData(oldp+60658,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__shift_left),8);
    bufp->fullCData(oldp+60659,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_62)
                                           ? ((IData)(1U) 
                                              + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__exp_r))
                                           : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__u6__DOT__fi_ldz_r0)))),8);
    bufp->fullCData(oldp+60660,((0xffU & (((~ (IData)(
                                                      (0U 
                                                       != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__exp_out)))) 
                                           & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__op_dn))
                                           ? (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_70)
                                           : ((1U & 
                                               ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__op_dn)) 
                                                & (~ (IData)(
                                                             (0U 
                                                              != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__exp_out))))))
                                               ? (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__exp_r)
                                               : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__u6__DOT__fi_ldz_r0))))),8);
    bufp->fullCData(oldp+60661,((0xffU & ((1U & ((~ (IData)(
                                                            (0U 
                                                             != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__exp_out)))) 
                                                 | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__dn)))
                                           ? ((0U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__exp_r))
                                               ? ((IData)(1U) 
                                                  + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__exp_r))
                                               : 2U)
                                           : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__u6__DOT__fi_ldz_r0)))),8);
    bufp->fullCData(oldp+60662,((0xffU & ((0x16U < (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__u6__DOT__fi_ldz_r0))
                                           ? ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__exp_r) 
                                              - (0x3fU 
                                                 & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                                    - (IData)(0x16U))))
                                           : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__exp_r) 
                                              - (0x3fU 
                                                 & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                                    - (IData)(1U))))))),8);
    bufp->fullCData(oldp+60663,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__exp_r) 
                                          - (0x3fU 
                                             & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                                - (IData)(0x16U)))))),8);
    bufp->fullCData(oldp+60664,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__exp_r) 
                                          - (0x3fU 
                                             & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                                - (IData)(1U)))))),8);
    bufp->fullCData(oldp+60665,((0x3fU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                          - (IData)(1U)))),6);
    bufp->fullCData(oldp+60666,((0x3fU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                          - (IData)(0x16U)))),6);
    bufp->fullBit(oldp+60667,(((2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__fpu_op_r3)) 
                               & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_23) 
                                  >> 8U))));
    bufp->fullCData(oldp+60668,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__u6__DOT__fi_ldz_r0),7);
    bufp->fullSData(oldp+60669,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__exp_r),9);
    bufp->fullCData(oldp+60670,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__exp_r) 
                                          - (IData)(0x7dU)))),8);
    bufp->fullQData(oldp+60671,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__Vcellout__u3__shift_out),56);
    bufp->fullBit(oldp+60673,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__f2i_zero));
    bufp->fullBit(oldp+60674,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__f2i_max));
    bufp->fullCData(oldp+60675,(((0U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__rmode_r3))
                                  ? 0x7eU : 0x7fU)),8);
    bufp->fullCData(oldp+60676,((0xffU & ((5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__fpu_op_r3))
                                           ? ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__exp_r) 
                                              - (IData)(0x7dU))
                                           : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__u6__DOT__fi_ldz_r0)))),8);
    bufp->fullCData(oldp+60677,((0xffU & ((0U != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__fract_out_q)
                                           ? ((IData)(0x9eU) 
                                              - (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__u6__DOT__fi_ldz_r0))
                                           : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__opas_r2)
                                               ? 0x9eU
                                               : 0U)))),8);
    bufp->fullCData(oldp+60678,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__f2i_zero)
                                  ? 0U : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__f2i_max)
                                           ? 0xffU : 0U))),8);
    bufp->fullCData(oldp+60679,((0xffU & ((5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__fpu_op_r3))
                                           ? ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__f2i_zero)
                                               ? 0U
                                               : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__f2i_max)
                                                   ? 0xffU
                                                   : 0U))
                                           : ((0U != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__fract_out_q)
                                               ? ((IData)(0x9eU) 
                                                  - (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__u6__DOT__fi_ldz_r0))
                                               : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__opas_r2)
                                                   ? 0x9eU
                                                   : 0U))))),8);
    bufp->fullBit(oldp+60680,(((2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__rmode_r3)) 
                               & (((0U != (0xfU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__fract_out_q)) 
                                   & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__opas_r2)) 
                                      & (0x80U > (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__exp_r)))) 
                                  | (0U != (0x1ffffffU 
                                            & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_21)))))));
    bufp->fullBit(oldp+60681,((IData)((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__exp_r) 
                                        >> 7U) & (~ (IData)(
                                                            (0U 
                                                             != 
                                                             (0x7fU 
                                                              & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__exp_r)))))))));
    bufp->fullBit(oldp+60682,((0U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__rmode_r3))));
    bufp->fullBit(oldp+60683,((1U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__rmode_r3))));
    bufp->fullBit(oldp+60684,((2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__rmode_r3))));
    bufp->fullBit(oldp+60685,((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__rmode_r3))));
    bufp->fullBit(oldp+60686,((0U != (0xfU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__fract_out_q))));
    bufp->fullBit(oldp+60687,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__max_num));
    bufp->fullBit(oldp+60688,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__inf_out));
    bufp->fullBit(oldp+60689,(((0U != (0x1ffffffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_21))) 
                               & ((~ (IData)((0xffU 
                                              == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__exp_r)))) 
                                  & (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_14) 
                                      >> 8U) | ((~ (IData)(
                                                           (0U 
                                                            != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__exp_r)))) 
                                                | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_63)))))));
    bufp->fullBit(oldp+60690,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__inf_out) 
                               | (((0U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__rmode_r3)) 
                                   & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__max_num)) 
                                  | (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__exp_r) 
                                      >> 7U) & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__op_dn) 
                                                & (0xffU 
                                                   == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__exp_out))))))));
    bufp->fullBit(oldp+60691,(((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__inf_out)) 
                               & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__max_num)) 
                                  & ((0xffU != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__exp_out_final)) 
                                     & (((0U != (0x1ffffffU 
                                                 & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_21))) 
                                         & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__opb_dn)) 
                                            & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__div_dn) 
                                               | (~ (IData)(
                                                            (0U 
                                                             != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__exp_out))))))) 
                                        | (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__op_dn) 
                                            & ((~ (IData)(
                                                          (0U 
                                                           != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__exp_out)))) 
                                               & (0x17U 
                                                  > (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__u6__DOT__fi_ldz_r0)))) 
                                           | ((~ (IData)(
                                                         (0U 
                                                          != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__exp_r)))) 
                                              | ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__op_dn)) 
                                                 & ((0x17U 
                                                     > (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__u6__DOT__fi_ldz_r0)) 
                                                    & ((1U 
                                                        == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__exp_r)) 
                                                       & (~ (IData)(
                                                                    (0U 
                                                                     != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__exp_out)))))))))))))));
    bufp->fullBit(oldp+60692,((1U & (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_14) 
                                      >> 8U) | ((~ (IData)(
                                                           (0U 
                                                            != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__exp_r)))) 
                                                | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_63))))));
    bufp->fullBit(oldp+60693,((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__f2i_zero) 
                                & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__opas_r2)) 
                                   & (0U != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__fract_out_q))) 
                               | ((0U != (0x1ffffffU 
                                          & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_21))) 
                                  | (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__f2i_zero) 
                                      & ((0x80U > (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__exp_r)) 
                                         & ((0U != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__fract_out_q) 
                                            & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__opas_r2)))) 
                                     | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__f2i_max) 
                                        & ((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__rmode_r3)) 
                                           & (0x80U 
                                              > (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__exp_r)))))))));
    bufp->fullCData(oldp+60694,((0x3fU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__shift_right))),6);
    bufp->fullCData(oldp+60695,((0x3fU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__exp_r) 
                                          - (IData)(0x3dU)))),6);
    bufp->fullQData(oldp+60696,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__Vcellout__u3__shift_out),48);
    bufp->fullCData(oldp+60698,((0x3fU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__shift_left))),6);
    bufp->fullIData(oldp+60699,((0x7fffffU & (IData)(
                                                     (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_21 
                                                      >> 0x19U)))),23);
    bufp->fullCData(oldp+60700,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__exp_out),8);
    bufp->fullBit(oldp+60701,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_23) 
                                     >> 8U))));
    bufp->fullIData(oldp+60702,((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__inf_out) 
                                  | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__ovf0) 
                                     | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__or_result)))
                                  ? 0U : (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__max_num) 
                                           | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_46))
                                           ? 0x7fffffU
                                           : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__fract_out_rnd))),23);
    bufp->fullIData(oldp+60703,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__fract_out_rnd),23);
    bufp->fullSData(oldp+60704,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__exp_next_mi),9);
    bufp->fullBit(oldp+60705,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__dn));
    bufp->fullCData(oldp+60706,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__exp_out_final),8);
    bufp->fullCData(oldp+60707,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__exp_out_rnd),8);
    bufp->fullBit(oldp+60708,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__op_dn));
    bufp->fullBit(oldp+60709,((2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__fpu_op_r3))));
    bufp->fullBit(oldp+60710,((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__fpu_op_r3))));
    bufp->fullBit(oldp+60711,((4U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__fpu_op_r3))));
    bufp->fullBit(oldp+60712,((5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__fpu_op_r3))));
    bufp->fullCData(oldp+60713,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__u6__DOT__fi_ldz_r0),6);
    bufp->fullBit(oldp+60714,((1U & (IData)((vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_21 
                                             >> 0x19U)))));
    bufp->fullBit(oldp+60715,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__r));
    bufp->fullBit(oldp+60716,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__s));
    bufp->fullBit(oldp+60717,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_27) 
                               | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__r) 
                                  & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__s)))));
    bufp->fullBit(oldp+60718,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_37)
                                ? ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__sign)) 
                                   & ((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__exp_ovf_r) 
                                        >> 1U) & ((0U 
                                                   != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__fract_denorm) 
                                                  & ((((~ 
                                                        ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_23) 
                                                         >> 8U)) 
                                                       | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__op_dn)) 
                                                      & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_35)) 
                                                     | ((~ (IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0x7fffffU 
                                                                     & (IData)(
                                                                               (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_21 
                                                                                >> 0x19U)))))) 
                                                        | ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__op_dn)) 
                                                           & (3U 
                                                              != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__fpu_op_r3))))))) 
                                      | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_35) 
                                         & (((~ ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__exp_ovf_r) 
                                                 >> 1U)) 
                                             & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__exp_ovf_r)) 
                                                | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__exp_in_80))) 
                                            | ((3U 
                                                == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__fpu_op_r3)) 
                                               | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_59) 
                                                  & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_23) 
                                                     >> 8U)))))))
                                : ((5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__fpu_op_r3))
                                    ? ((2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__rmode_r3)) 
                                       & (((0U != (0xffffffU 
                                                   & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__fract_denorm))) 
                                           & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__opas_r2)) 
                                              & (0x80U 
                                                 > (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__exp_r)))) 
                                          | (0U != 
                                             (0x1ffffffU 
                                              & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_21)))))
                                    : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_30) 
                                       & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__sign)) 
                                          & ((~ ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__exp_out) 
                                                 >> 7U)) 
                                             | (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__exp_out) 
                                                 >> 7U) 
                                                & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__exp_out_fe)) 
                                                   | ((~ (IData)(
                                                                 (0x7fffffU 
                                                                  == 
                                                                  (0x7fffffU 
                                                                   & (IData)(
                                                                             (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_21 
                                                                              >> 0x19U)))))) 
                                                      | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__exp_out_fe) 
                                                         & (0xfffffe000000ULL 
                                                            == 
                                                            (0xfffffe000000ULL 
                                                             & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_21)))))))))))));
    bufp->fullBit(oldp+60719,((1U & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__exp_out_fe)) 
                                     | ((~ (IData)(
                                                   (0x7fffffU 
                                                    == 
                                                    (0x7fffffU 
                                                     & (IData)(
                                                               (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_21 
                                                                >> 0x19U)))))) 
                                        | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__exp_out_fe) 
                                           & (0xfffffe000000ULL 
                                              == (0xfffffe000000ULL 
                                                  & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_21))))))));
    bufp->fullBit(oldp+60720,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_30) 
                               & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__sign)) 
                                  & ((~ ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__exp_out) 
                                         >> 7U)) | 
                                     (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__exp_out) 
                                       >> 7U) & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__exp_out_fe)) 
                                                 | ((~ (IData)(
                                                               (0x7fffffU 
                                                                == 
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_21 
                                                                            >> 0x19U)))))) 
                                                    | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__exp_out_fe) 
                                                       & (0xfffffe000000ULL 
                                                          == 
                                                          (0xfffffe000000ULL 
                                                           & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_21)))))))))));
    bufp->fullBit(oldp+60721,(((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__sign)) 
                               & ((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__exp_ovf_r) 
                                    >> 1U) & ((0U != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__fract_denorm) 
                                              & ((((~ 
                                                    ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_23) 
                                                     >> 8U)) 
                                                   | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__op_dn)) 
                                                  & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_35)) 
                                                 | ((~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_21 
                                                                            >> 0x19U)))))) 
                                                    | ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__op_dn)) 
                                                       & (3U 
                                                          != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__fpu_op_r3))))))) 
                                  | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_35) 
                                     & (((~ ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__exp_ovf_r) 
                                             >> 1U)) 
                                         & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__exp_ovf_r)) 
                                            | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__exp_in_80))) 
                                        | ((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__fpu_op_r3)) 
                                           | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_59) 
                                              & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_23) 
                                                 >> 8U)))))))));
    bufp->fullCData(oldp+60722,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__exp_out) 
                                          + (1U & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_55 
                                                   >> 0x17U))))),8);
    bufp->fullCData(oldp+60723,((0xffU & (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_27) 
                                           & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__s) 
                                              & (0xffU 
                                                 == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__exp_r))))
                                           ? ((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__fpu_op_r3))
                                               ? ((0x16U 
                                                   < (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__u6__DOT__fi_ldz_r0))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__exp_r) 
                                                   - 
                                                   (0x3fU 
                                                    & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                                       - (IData)(0x16U))))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__exp_r) 
                                                   - 
                                                   (0x3fU 
                                                    & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                                       - (IData)(1U)))))
                                               : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__exp_next_mi))
                                           : (((5U 
                                                != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__fpu_op_r3)) 
                                               & (0xffU 
                                                  == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__exp_out)))
                                               ? (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__exp_r)
                                               : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__exp_out))))),8);
    bufp->fullCData(oldp+60724,((((5U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__fpu_op_r3)) 
                                  & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_38))
                                  ? 0xfeU : (0xffU 
                                             & ((0x800000U 
                                                 & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_54)
                                                 ? 
                                                ((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__exp_ovf_r) 
                                                   >> 1U) 
                                                  & (2U 
                                                     == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__fpu_op_r3)))
                                                  ? 
                                                 ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__exp_out) 
                                                  - (IData)(1U))
                                                  : 
                                                 ((IData)(1U) 
                                                  + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__exp_out)))
                                                 : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__exp_out))))),8);
    bufp->fullCData(oldp+60725,((0xffU & ((0x800000U 
                                           & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_54)
                                           ? ((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__exp_ovf_r) 
                                                >> 1U) 
                                               & (2U 
                                                  == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__fpu_op_r3)))
                                               ? ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__exp_out) 
                                                  - (IData)(1U))
                                               : ((IData)(1U) 
                                                  + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__exp_out)))
                                           : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__exp_out)))),8);
    bufp->fullIData(oldp+60726,((0x7fffffU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_55)),23);
    bufp->fullIData(oldp+60727,((((3U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__fpu_op_r3)) 
                                  & ((0xffU == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__exp_out)) 
                                     & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_53)))
                                  ? 0x7fffffU : (0x7fffffU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_21 
                                                            >> 0x19U))))),23);
    bufp->fullIData(oldp+60728,((((3U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__fpu_op_r3)) 
                                  & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_38) 
                                     & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_53)))
                                  ? 0x7fffffU : (0x7fffffU 
                                                 & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_54))),23);
    bufp->fullIData(oldp+60729,((0x7fffffU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_54)),23);
    bufp->fullBit(oldp+60730,((1U & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_55 
                                     >> 0x17U))));
    bufp->fullBit(oldp+60731,((1U & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_54 
                                     >> 0x17U))));
    bufp->fullBit(oldp+60732,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__ovf0));
    bufp->fullBit(oldp+60733,(((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__dn)) 
                               & (0xffU == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__exp_out)))));
    bufp->fullIData(oldp+60734,((0xffffffU & ((IData)(1U) 
                                              + (0x7fffffU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_21 
                                                            >> 0x19U)))))),24);
    bufp->fullCData(oldp+60735,((0xffU & ((IData)(1U) 
                                          + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__exp_out)))),8);
    bufp->fullCData(oldp+60736,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__exp_out) 
                                          - (IData)(1U)))),8);
    bufp->fullBit(oldp+60737,((1U & (~ (IData)((0U 
                                                != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__exp_out)))))));
    bufp->fullBit(oldp+60738,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__exp_out_fe));
    bufp->fullBit(oldp+60739,((0xffU == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__exp_out))));
    bufp->fullBit(oldp+60740,((1U & (~ (IData)((0U 
                                                != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__exp_r)))))));
    bufp->fullBit(oldp+60741,((0xffU == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__exp_r))));
    bufp->fullBit(oldp+60742,(((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_48)) 
                               & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_51) 
                                  | ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__max_num)) 
                                     & (0xffU == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__exp_out_rnd)))))));
    bufp->fullBit(oldp+60743,((0x7fffffU == (0x7fffffU 
                                             & (IData)(
                                                       (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_21 
                                                        >> 0x19U))))));
    bufp->fullIData(oldp+60744,((0x1ffffffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_21))),25);
    bufp->fullCData(oldp+60745,((0xffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_23))),8);
    bufp->fullBit(oldp+60746,((1U & (~ (IData)((0U 
                                                != 
                                                (0x7fffffU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_21 
                                                            >> 0x19U)))))))));
    bufp->fullBit(oldp+60747,((1U & (~ (IData)((0U 
                                                != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__fract_denorm))))));
    bufp->fullBit(oldp+60748,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_14) 
                                     >> 8U))));
    bufp->fullSData(oldp+60749,((0x1ffU & ((IData)(1U) 
                                           + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__exp_r)))),9);
    bufp->fullSData(oldp+60750,((0x1ffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__exp_r) 
                                           - (IData)(1U)))),9);
    bufp->fullQData(oldp+60751,(((0U != (3U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__shift_right) 
                                               >> 6U)))
                                  ? 0ULL : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__fract_in_shftr_1)),48);
    bufp->fullQData(oldp+60753,((((0U != (3U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__shift_left) 
                                                >> 6U))) 
                                  | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__f2i_zero) 
                                     & (5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__fpu_op_r3))))
                                  ? 0ULL : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__fract_in_shftl_1)),48);
    bufp->fullQData(oldp+60755,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__fract_in_shftr_1),48);
    bufp->fullQData(oldp+60757,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__fract_in_shftl_1),48);
    bufp->fullCData(oldp+60759,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__exp_div),8);
    bufp->fullCData(oldp+60760,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_23) 
                                          - (IData)(1U)))),8);
    bufp->fullBit(oldp+60761,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__div_dn));
    bufp->fullBit(oldp+60762,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_15) 
                               & ((~ (IData)((0U != 
                                              (0xffffffU 
                                               & (IData)(
                                                         (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__fract_denorm 
                                                          >> 0x17U)))))) 
                                  & (0x16U < (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__exp_r))))));
    bufp->fullBit(oldp+60763,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__grs_sel_div));
    bufp->fullBit(oldp+60764,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__div_inf));
    bufp->fullCData(oldp+60765,((0x7fU & ((IData)(0x17U) 
                                          - (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__u6__DOT__fi_ldz_r0)))),7);
    bufp->fullCData(oldp+60766,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__fi_ldz_2),8);
    bufp->fullCData(oldp+60767,((0xffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_70))),8);
    bufp->fullCData(oldp+60768,((0xffU & ((IData)(2U) 
                                          + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__exp_r)))),8);
    bufp->fullCData(oldp+60769,((0xffU & (- (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__exp_r)))),8);
    bufp->fullBit(oldp+60770,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_70) 
                                     >> 8U))));
    bufp->fullSData(oldp+60771,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__div_exp1),9);
    bufp->fullCData(oldp+60772,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__div_exp2),8);
    bufp->fullCData(oldp+60773,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__exp_r) 
                                          + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__fi_ldz_2)))),8);
    bufp->fullBit(oldp+60774,((1U & ((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__fpu_op_r3))
                                      ? ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_67) 
                                         | ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_15)) 
                                            & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__div_dn)) 
                                               & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_66) 
                                                  | ((~ 
                                                      ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__exp_ovf_r) 
                                                       >> 1U)) 
                                                     | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_65))))))
                                      : ((2U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__fpu_op_r3)) 
                                         | ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_61)) 
                                            | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_62)))))));
    bufp->fullBit(oldp+60775,((1U & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_61)) 
                                     | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_62)))));
    bufp->fullBit(oldp+60776,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_67) 
                                     | ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_15)) 
                                        & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__div_dn)) 
                                           & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_66) 
                                              | ((~ 
                                                  ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__exp_ovf_r) 
                                                   >> 1U)) 
                                                 | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_65)))))))));
    bufp->fullCData(oldp+60777,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__shift_right),8);
    bufp->fullCData(oldp+60778,((0xffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_14))),8);
    bufp->fullCData(oldp+60779,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_15)
                                           ? (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__exp_r)
                                           : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__div_dn)
                                               ? (- (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__exp_r))
                                               : ((IData)(2U) 
                                                  + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__exp_r)))))),8);
    bufp->fullCData(oldp+60780,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__shift_left),8);
    bufp->fullCData(oldp+60781,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_62)
                                           ? ((IData)(1U) 
                                              + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__exp_r))
                                           : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__u6__DOT__fi_ldz_r0)))),8);
    bufp->fullCData(oldp+60782,((0xffU & (((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_20)) 
                                           & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_66))
                                           ? (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_70)
                                           : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_65)
                                               ? (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__exp_r)
                                               : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__u6__DOT__fi_ldz_r0))))),8);
    bufp->fullCData(oldp+60783,((0xffU & ((1U & ((~ (IData)(
                                                            (0U 
                                                             != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__exp_out)))) 
                                                 | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__dn)))
                                           ? ((0U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__exp_r))
                                               ? ((IData)(1U) 
                                                  + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__exp_r))
                                               : 2U)
                                           : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__u6__DOT__fi_ldz_r0)))),8);
    bufp->fullCData(oldp+60784,((0xffU & ((0x16U < (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__u6__DOT__fi_ldz_r0))
                                           ? ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__exp_r) 
                                              - (0x3fU 
                                                 & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                                    - (IData)(0x16U))))
                                           : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__exp_r) 
                                              - (0x3fU 
                                                 & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                                    - (IData)(1U))))))),8);
    bufp->fullCData(oldp+60785,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__exp_r) 
                                          - (0x3fU 
                                             & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                                - (IData)(0x16U)))))),8);
    bufp->fullCData(oldp+60786,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__exp_r) 
                                          - (0x3fU 
                                             & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                                - (IData)(1U)))))),8);
    bufp->fullCData(oldp+60787,((0x3fU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                          - (IData)(1U)))),6);
    bufp->fullCData(oldp+60788,((0x3fU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                          - (IData)(0x16U)))),6);
    bufp->fullBit(oldp+60789,((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_59) 
                                & (2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__fpu_op_r3))) 
                               | ((2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__fpu_op_r3)) 
                                  & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_23) 
                                     >> 8U)))));
    bufp->fullCData(oldp+60790,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__u6__DOT__fi_ldz_r0),7);
    bufp->fullSData(oldp+60791,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__exp_r),9);
    bufp->fullCData(oldp+60792,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__exp_r) 
                                          - (IData)(0x7dU)))),8);
    bufp->fullQData(oldp+60793,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__Vcellout__u3__shift_out),56);
    bufp->fullBit(oldp+60795,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__f2i_zero));
    bufp->fullBit(oldp+60796,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__f2i_max));
    bufp->fullCData(oldp+60797,(((0U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__rmode_r3))
                                  ? 0x7eU : 0x7fU)),8);
    bufp->fullCData(oldp+60798,((0xffU & ((5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__fpu_op_r3))
                                           ? ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__exp_r) 
                                              - (IData)(0x7dU))
                                           : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__u6__DOT__fi_ldz_r0)))),8);
    bufp->fullCData(oldp+60799,((0xffU & ((0U != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__fract_denorm)
                                           ? ((IData)(0x9eU) 
                                              - (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__u6__DOT__fi_ldz_r0))
                                           : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__opas_r2)
                                               ? 0x9eU
                                               : 0U)))),8);
    bufp->fullCData(oldp+60800,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__f2i_zero)
                                  ? 0U : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__f2i_max)
                                           ? 0xffU : 0U))),8);
    bufp->fullCData(oldp+60801,((0xffU & ((5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__fpu_op_r3))
                                           ? ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__f2i_zero)
                                               ? 0U
                                               : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__f2i_max)
                                                   ? 0xffU
                                                   : 0U))
                                           : ((0U != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__fract_denorm)
                                               ? ((IData)(0x9eU) 
                                                  - (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__u6__DOT__fi_ldz_r0))
                                               : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__opas_r2)
                                                   ? 0x9eU
                                                   : 0U))))),8);
    bufp->fullBit(oldp+60802,(((2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__rmode_r3)) 
                               & (((0U != (0xffffffU 
                                           & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__fract_denorm))) 
                                   & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__opas_r2)) 
                                      & (0x80U > (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__exp_r)))) 
                                  | (0U != (0x1ffffffU 
                                            & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_21)))))));
    bufp->fullBit(oldp+60803,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__exp_in_80));
    bufp->fullBit(oldp+60804,((0U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__rmode_r3))));
    bufp->fullBit(oldp+60805,((1U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__rmode_r3))));
    bufp->fullBit(oldp+60806,((2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__rmode_r3))));
    bufp->fullBit(oldp+60807,((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__rmode_r3))));
    bufp->fullBit(oldp+60808,((0U != (0xffffffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__fract_denorm)))));
    bufp->fullBit(oldp+60809,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__max_num));
    bufp->fullBit(oldp+60810,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__inf_out));
    bufp->fullBit(oldp+60811,((((0U != (0x1ffffffU 
                                        & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_21))) 
                                & ((~ (IData)((0xffU 
                                               == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__exp_r)))) 
                                   & (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_14) 
                                       >> 8U) | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_61) 
                                                 | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_63))))) 
                               | ((~ (IData)((0U != 
                                              (0x7fffffU 
                                               & (IData)(
                                                         (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_21 
                                                          >> 0x19U)))))) 
                                  & ((0U != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__fract_denorm) 
                                     & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__exp_ovf_r) 
                                        >> 1U))))));
    bufp->fullBit(oldp+60812,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__inf_out) 
                                     | (((0U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__rmode_r3)) 
                                         & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__max_num)) 
                                        | ((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__exp_r) 
                                             >> 7U) 
                                            & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__op_dn) 
                                               & (0xffU 
                                                  == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__exp_out)))) 
                                           | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__exp_ovf_r) 
                                              & (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__exp_ovf_r) 
                                                  >> 1U) 
                                                 | (0xffU 
                                                    == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__exp_out))))))))));
    bufp->fullBit(oldp+60813,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__undeflow_div));
    bufp->fullBit(oldp+60814,((IData)(((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_14) 
                                         >> 8U) | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_61)) 
                                       | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_63)))));
    bufp->fullBit(oldp+60815,((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__f2i_zero) 
                                & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__opas_r2)) 
                                   & (0U != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__fract_denorm))) 
                               | ((0U != (0x1ffffffU 
                                          & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_21))) 
                                  | (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__f2i_zero) 
                                      & ((0x80U > (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__exp_r)) 
                                         & ((0U != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__fract_denorm) 
                                            & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__opas_r2)))) 
                                     | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__f2i_max) 
                                        & ((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__rmode_r3)) 
                                           & (0x80U 
                                              > (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__exp_r)))))))));
    bufp->fullCData(oldp+60816,((0x3fU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__shift_right))),6);
    bufp->fullCData(oldp+60817,((0x3fU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__exp_r) 
                                          - (IData)(0x3dU)))),6);
    bufp->fullQData(oldp+60818,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__Vcellout__u3__shift_out),48);
    bufp->fullCData(oldp+60820,((0x3fU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__shift_left))),6);
    bufp->fullIData(oldp+60821,((0x7fffffU & (IData)(
                                                     (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_21 
                                                      >> 0x19U)))),23);
    bufp->fullCData(oldp+60822,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__exp_out),8);
    bufp->fullBit(oldp+60823,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_23) 
                                     >> 8U))));
    bufp->fullIData(oldp+60824,((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__inf_out) 
                                  | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__ovf0))
                                  ? 0U : (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__max_num) 
                                           | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_46))
                                           ? 0x7fffffU
                                           : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__fract_out_rnd))),23);
    bufp->fullIData(oldp+60825,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__fract_out_rnd),23);
    bufp->fullSData(oldp+60826,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__exp_next_mi),9);
    bufp->fullBit(oldp+60827,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__dn));
    bufp->fullCData(oldp+60828,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__exp_out_final),8);
    bufp->fullCData(oldp+60829,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__exp_out_rnd),8);
    bufp->fullBit(oldp+60830,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__op_dn));
    bufp->fullBit(oldp+60831,((2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__fpu_op_r3))));
    bufp->fullBit(oldp+60832,((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__fpu_op_r3))));
    bufp->fullBit(oldp+60833,((4U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__fpu_op_r3))));
    bufp->fullBit(oldp+60834,((5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__fpu_op_r3))));
    bufp->fullCData(oldp+60835,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__u6__DOT__fi_ldz_r0),6);
    bufp->fullBit(oldp+60836,((1U & (IData)((vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_21 
                                             >> 0x19U)))));
    bufp->fullBit(oldp+60837,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__r));
    bufp->fullBit(oldp+60838,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__s));
    bufp->fullBit(oldp+60839,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_27) 
                               | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__r) 
                                  & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__s)))));
    bufp->fullBit(oldp+60840,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_37)
                                ? ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__sign)) 
                                   & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_30) 
                                      | (3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__fpu_op_r3))))
                                : ((5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__fpu_op_r3))
                                    ? ((2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__rmode_r3)) 
                                       & (((0U != (0xfU 
                                                   & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__fract_out_q)) 
                                           & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__opas_r2)) 
                                              & (0x80U 
                                                 > (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__exp_r)))) 
                                          | (0U != 
                                             (0x1ffffffU 
                                              & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_21)))))
                                    : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_30) 
                                       & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__sign)) 
                                          & ((~ ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__exp_out) 
                                                 >> 7U)) 
                                             | (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__exp_out) 
                                                 >> 7U) 
                                                & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__exp_out_fe)) 
                                                   | ((~ (IData)(
                                                                 (0x7fffffU 
                                                                  == 
                                                                  (0x7fffffU 
                                                                   & (IData)(
                                                                             (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_21 
                                                                              >> 0x19U)))))) 
                                                      | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__exp_out_fe) 
                                                         & (0xfffffe000000ULL 
                                                            == 
                                                            (0xfffffe000000ULL 
                                                             & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_21)))))))))))));
    bufp->fullBit(oldp+60841,((1U & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__exp_out_fe)) 
                                     | ((~ (IData)(
                                                   (0x7fffffU 
                                                    == 
                                                    (0x7fffffU 
                                                     & (IData)(
                                                               (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_21 
                                                                >> 0x19U)))))) 
                                        | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__exp_out_fe) 
                                           & (0xfffffe000000ULL 
                                              == (0xfffffe000000ULL 
                                                  & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_21))))))));
    bufp->fullBit(oldp+60842,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_30) 
                               & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__sign)) 
                                  & ((~ ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__exp_out) 
                                         >> 7U)) | 
                                     (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__exp_out) 
                                       >> 7U) & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__exp_out_fe)) 
                                                 | ((~ (IData)(
                                                               (0x7fffffU 
                                                                == 
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_21 
                                                                            >> 0x19U)))))) 
                                                    | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__exp_out_fe) 
                                                       & (0xfffffe000000ULL 
                                                          == 
                                                          (0xfffffe000000ULL 
                                                           & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_21)))))))))));
    bufp->fullBit(oldp+60843,(((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__sign)) 
                               & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_30) 
                                  | (3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__fpu_op_r3))))));
    bufp->fullCData(oldp+60844,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__exp_out) 
                                          + (1U & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_55 
                                                   >> 0x17U))))),8);
    bufp->fullCData(oldp+60845,((0xffU & (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_27) 
                                           & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__s) 
                                              & (0xffU 
                                                 == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__exp_r))))
                                           ? ((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__fpu_op_r3))
                                               ? ((0x16U 
                                                   < (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__u6__DOT__fi_ldz_r0))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__exp_r) 
                                                   - 
                                                   (0x3fU 
                                                    & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                                       - (IData)(0x16U))))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__exp_r) 
                                                   - 
                                                   (0x3fU 
                                                    & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                                       - (IData)(1U)))))
                                               : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__exp_next_mi))
                                           : (((5U 
                                                != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__fpu_op_r3)) 
                                               & (0xffU 
                                                  == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__exp_out)))
                                               ? (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__exp_r)
                                               : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__exp_out))))),8);
    bufp->fullCData(oldp+60846,((((5U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__fpu_op_r3)) 
                                  & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_38))
                                  ? 0xfeU : (0xffU 
                                             & ((0x800000U 
                                                 & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_54)
                                                 ? 
                                                ((IData)(1U) 
                                                 + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__exp_out))
                                                 : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__exp_out))))),8);
    bufp->fullCData(oldp+60847,((0xffU & ((0x800000U 
                                           & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_54)
                                           ? ((IData)(1U) 
                                              + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__exp_out))
                                           : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__exp_out)))),8);
    bufp->fullIData(oldp+60848,((0x7fffffU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_55)),23);
    bufp->fullIData(oldp+60849,((((3U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__fpu_op_r3)) 
                                  & ((0xffU == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__exp_out)) 
                                     & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_53)))
                                  ? 0x7fffffU : (0x7fffffU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_21 
                                                            >> 0x19U))))),23);
    bufp->fullIData(oldp+60850,((((3U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__fpu_op_r3)) 
                                  & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_38) 
                                     & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_53)))
                                  ? 0x7fffffU : (0x7fffffU 
                                                 & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_54))),23);
    bufp->fullIData(oldp+60851,((0x7fffffU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_54)),23);
    bufp->fullBit(oldp+60852,((1U & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_55 
                                     >> 0x17U))));
    bufp->fullBit(oldp+60853,((1U & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_54 
                                     >> 0x17U))));
    bufp->fullBit(oldp+60854,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__ovf0));
    bufp->fullBit(oldp+60855,(((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__dn)) 
                               & (0xffU == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__exp_out)))));
    bufp->fullIData(oldp+60856,((0xffffffU & ((IData)(1U) 
                                              + (0x7fffffU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_21 
                                                            >> 0x19U)))))),24);
    bufp->fullCData(oldp+60857,((0xffU & ((IData)(1U) 
                                          + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__exp_out)))),8);
    bufp->fullCData(oldp+60858,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__exp_out) 
                                          - (IData)(1U)))),8);
    bufp->fullBit(oldp+60859,((1U & (~ (IData)((0U 
                                                != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__exp_out)))))));
    bufp->fullBit(oldp+60860,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__exp_out_fe));
    bufp->fullBit(oldp+60861,((0xffU == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__exp_out))));
    bufp->fullBit(oldp+60862,((1U & (~ (IData)((0U 
                                                != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__exp_r)))))));
    bufp->fullBit(oldp+60863,((0xffU == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__exp_r))));
    bufp->fullBit(oldp+60864,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_51) 
                               | ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__max_num)) 
                                  & (0xffU == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__exp_out_rnd))))));
    bufp->fullBit(oldp+60865,((0x7fffffU == (0x7fffffU 
                                             & (IData)(
                                                       (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_21 
                                                        >> 0x19U))))));
    bufp->fullIData(oldp+60866,((0x1ffffffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_21))),25);
    bufp->fullCData(oldp+60867,((0xffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_23))),8);
    bufp->fullBit(oldp+60868,((1U & (~ (IData)((0U 
                                                != 
                                                (0x7fffffU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_21 
                                                            >> 0x19U)))))))));
    bufp->fullBit(oldp+60869,((1U & (~ (IData)((0U 
                                                != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__fract_out_q))))));
    bufp->fullBit(oldp+60870,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_14) 
                                     >> 8U))));
    bufp->fullSData(oldp+60871,((0x1ffU & ((IData)(1U) 
                                           + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__exp_r)))),9);
    bufp->fullSData(oldp+60872,((0x1ffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__exp_r) 
                                           - (IData)(1U)))),9);
    bufp->fullQData(oldp+60873,(((0U != (3U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__shift_right) 
                                               >> 6U)))
                                  ? 0ULL : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__fract_in_shftr_1)),48);
    bufp->fullQData(oldp+60875,((((0U != (3U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__shift_left) 
                                                >> 6U))) 
                                  | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__f2i_zero) 
                                     & (5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__fpu_op_r3))))
                                  ? 0ULL : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__fract_in_shftl_1)),48);
    bufp->fullQData(oldp+60877,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__fract_in_shftr_1),48);
    bufp->fullQData(oldp+60879,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__fract_in_shftl_1),48);
    bufp->fullCData(oldp+60881,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__exp_div),8);
    bufp->fullCData(oldp+60882,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_23) 
                                          - (IData)(1U)))),8);
    bufp->fullBit(oldp+60883,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__div_dn));
    bufp->fullBit(oldp+60884,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__grs_sel_div));
    bufp->fullBit(oldp+60885,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__div_inf));
    bufp->fullCData(oldp+60886,((0x7fU & ((IData)(0x17U) 
                                          - (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__u6__DOT__fi_ldz_r0)))),7);
    bufp->fullCData(oldp+60887,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__fi_ldz_2),8);
    bufp->fullCData(oldp+60888,((0xffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_70))),8);
    bufp->fullCData(oldp+60889,((0xffU & ((IData)(2U) 
                                          + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__exp_r)))),8);
    bufp->fullCData(oldp+60890,((0xffU & (- (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__exp_r)))),8);
    bufp->fullBit(oldp+60891,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_70) 
                                     >> 8U))));
    bufp->fullSData(oldp+60892,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__div_exp1),9);
    bufp->fullCData(oldp+60893,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__div_exp2),8);
    bufp->fullCData(oldp+60894,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__exp_r) 
                                          + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__fi_ldz_2)))),8);
    bufp->fullBit(oldp+60895,((1U & ((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__fpu_op_r3))
                                      ? (~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__div_dn))
                                      : ((2U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__fpu_op_r3)) 
                                         | ((0U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__exp_r)) 
                                            | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_62)))))));
    bufp->fullBit(oldp+60896,(((0U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__exp_r)) 
                               | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_62))));
    bufp->fullBit(oldp+60897,((1U & (~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__div_dn)))));
    bufp->fullCData(oldp+60898,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__shift_right),8);
    bufp->fullCData(oldp+60899,((0xffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_14))),8);
    bufp->fullCData(oldp+60900,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__div_dn)
                                           ? (- (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__exp_r))
                                           : ((IData)(2U) 
                                              + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__exp_r))))),8);
    bufp->fullCData(oldp+60901,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__shift_left),8);
    bufp->fullCData(oldp+60902,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_62)
                                           ? ((IData)(1U) 
                                              + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__exp_r))
                                           : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__u6__DOT__fi_ldz_r0)))),8);
    bufp->fullCData(oldp+60903,((0xffU & (((~ (IData)(
                                                      (0U 
                                                       != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__exp_out)))) 
                                           & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__op_dn))
                                           ? (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_70)
                                           : ((1U & 
                                               ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__op_dn)) 
                                                & (~ (IData)(
                                                             (0U 
                                                              != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__exp_out))))))
                                               ? (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__exp_r)
                                               : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__u6__DOT__fi_ldz_r0))))),8);
    bufp->fullCData(oldp+60904,((0xffU & ((1U & ((~ (IData)(
                                                            (0U 
                                                             != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__exp_out)))) 
                                                 | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__dn)))
                                           ? ((0U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__exp_r))
                                               ? ((IData)(1U) 
                                                  + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__exp_r))
                                               : 2U)
                                           : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__u6__DOT__fi_ldz_r0)))),8);
    bufp->fullCData(oldp+60905,((0xffU & ((0x16U < (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__u6__DOT__fi_ldz_r0))
                                           ? ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__exp_r) 
                                              - (0x3fU 
                                                 & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                                    - (IData)(0x16U))))
                                           : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__exp_r) 
                                              - (0x3fU 
                                                 & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                                    - (IData)(1U))))))),8);
    bufp->fullCData(oldp+60906,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__exp_r) 
                                          - (0x3fU 
                                             & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                                - (IData)(0x16U)))))),8);
    bufp->fullCData(oldp+60907,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__exp_r) 
                                          - (0x3fU 
                                             & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                                - (IData)(1U)))))),8);
    bufp->fullCData(oldp+60908,((0x3fU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                          - (IData)(1U)))),6);
    bufp->fullCData(oldp+60909,((0x3fU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                          - (IData)(0x16U)))),6);
    bufp->fullBit(oldp+60910,(((2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__fpu_op_r3)) 
                               & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_23) 
                                  >> 8U))));
    bufp->fullCData(oldp+60911,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__u6__DOT__fi_ldz_r0),7);
    bufp->fullSData(oldp+60912,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__exp_r),9);
    bufp->fullCData(oldp+60913,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__exp_r) 
                                          - (IData)(0x7dU)))),8);
    bufp->fullQData(oldp+60914,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__Vcellout__u3__shift_out),56);
    bufp->fullBit(oldp+60916,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__f2i_zero));
    bufp->fullBit(oldp+60917,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__f2i_max));
    bufp->fullCData(oldp+60918,(((0U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__rmode_r3))
                                  ? 0x7eU : 0x7fU)),8);
    bufp->fullCData(oldp+60919,((0xffU & ((5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__fpu_op_r3))
                                           ? ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__exp_r) 
                                              - (IData)(0x7dU))
                                           : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__u6__DOT__fi_ldz_r0)))),8);
    bufp->fullCData(oldp+60920,((0xffU & ((0U != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__fract_out_q)
                                           ? ((IData)(0x9eU) 
                                              - (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__u6__DOT__fi_ldz_r0))
                                           : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__opas_r2)
                                               ? 0x9eU
                                               : 0U)))),8);
    bufp->fullCData(oldp+60921,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__f2i_zero)
                                  ? 0U : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__f2i_max)
                                           ? 0xffU : 0U))),8);
    bufp->fullCData(oldp+60922,((0xffU & ((5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__fpu_op_r3))
                                           ? ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__f2i_zero)
                                               ? 0U
                                               : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__f2i_max)
                                                   ? 0xffU
                                                   : 0U))
                                           : ((0U != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__fract_out_q)
                                               ? ((IData)(0x9eU) 
                                                  - (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__u6__DOT__fi_ldz_r0))
                                               : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__opas_r2)
                                                   ? 0x9eU
                                                   : 0U))))),8);
    bufp->fullBit(oldp+60923,(((2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__rmode_r3)) 
                               & (((0U != (0xfU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__fract_out_q)) 
                                   & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__opas_r2)) 
                                      & (0x80U > (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__exp_r)))) 
                                  | (0U != (0x1ffffffU 
                                            & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_21)))))));
    bufp->fullBit(oldp+60924,((IData)((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__exp_r) 
                                        >> 7U) & (~ (IData)(
                                                            (0U 
                                                             != 
                                                             (0x7fU 
                                                              & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__exp_r)))))))));
    bufp->fullBit(oldp+60925,((0U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__rmode_r3))));
    bufp->fullBit(oldp+60926,((1U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__rmode_r3))));
    bufp->fullBit(oldp+60927,((2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__rmode_r3))));
    bufp->fullBit(oldp+60928,((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__rmode_r3))));
    bufp->fullBit(oldp+60929,((0U != (0xfU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__fract_out_q))));
    bufp->fullBit(oldp+60930,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__max_num));
    bufp->fullBit(oldp+60931,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__inf_out));
    bufp->fullBit(oldp+60932,(((0U != (0x1ffffffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_21))) 
                               & ((~ (IData)((0xffU 
                                              == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__exp_r)))) 
                                  & (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_14) 
                                      >> 8U) | ((~ (IData)(
                                                           (0U 
                                                            != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__exp_r)))) 
                                                | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_63)))))));
    bufp->fullBit(oldp+60933,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__inf_out) 
                               | (((0U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__rmode_r3)) 
                                   & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__max_num)) 
                                  | (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__exp_r) 
                                      >> 7U) & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__op_dn) 
                                                & (0xffU 
                                                   == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__exp_out))))))));
    bufp->fullBit(oldp+60934,(((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__inf_out)) 
                               & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__max_num)) 
                                  & ((0xffU != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__exp_out_final)) 
                                     & (((0U != (0x1ffffffU 
                                                 & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_21))) 
                                         & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__opb_dn)) 
                                            & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__div_dn) 
                                               | (~ (IData)(
                                                            (0U 
                                                             != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__exp_out))))))) 
                                        | (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__op_dn) 
                                            & ((~ (IData)(
                                                          (0U 
                                                           != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__exp_out)))) 
                                               & (0x17U 
                                                  > (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__u6__DOT__fi_ldz_r0)))) 
                                           | ((~ (IData)(
                                                         (0U 
                                                          != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__exp_r)))) 
                                              | ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__op_dn)) 
                                                 & ((0x17U 
                                                     > (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__u6__DOT__fi_ldz_r0)) 
                                                    & ((1U 
                                                        == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__exp_r)) 
                                                       & (~ (IData)(
                                                                    (0U 
                                                                     != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__exp_out)))))))))))))));
    bufp->fullBit(oldp+60935,((1U & (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_14) 
                                      >> 8U) | ((~ (IData)(
                                                           (0U 
                                                            != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__exp_r)))) 
                                                | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_63))))));
    bufp->fullBit(oldp+60936,((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__f2i_zero) 
                                & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__opas_r2)) 
                                   & (0U != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__fract_out_q))) 
                               | ((0U != (0x1ffffffU 
                                          & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_21))) 
                                  | (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__f2i_zero) 
                                      & ((0x80U > (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__exp_r)) 
                                         & ((0U != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__fract_out_q) 
                                            & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__opas_r2)))) 
                                     | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__f2i_max) 
                                        & ((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__rmode_r3)) 
                                           & (0x80U 
                                              > (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__exp_r)))))))));
    bufp->fullCData(oldp+60937,((0x3fU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__shift_right))),6);
    bufp->fullCData(oldp+60938,((0x3fU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__exp_r) 
                                          - (IData)(0x3dU)))),6);
    bufp->fullQData(oldp+60939,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__Vcellout__u3__shift_out),48);
    bufp->fullCData(oldp+60941,((0x3fU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__shift_left))),6);
    bufp->fullIData(oldp+60942,((0x7fffffU & (IData)(
                                                     (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_21 
                                                      >> 0x19U)))),23);
    bufp->fullCData(oldp+60943,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__exp_out),8);
    bufp->fullBit(oldp+60944,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_23) 
                                     >> 8U))));
    bufp->fullIData(oldp+60945,((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__inf_out) 
                                  | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__ovf0) 
                                     | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__or_result)))
                                  ? 0U : (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__max_num) 
                                           | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_46))
                                           ? 0x7fffffU
                                           : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__fract_out_rnd))),23);
    bufp->fullIData(oldp+60946,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__fract_out_rnd),23);
    bufp->fullSData(oldp+60947,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__exp_next_mi),9);
    bufp->fullBit(oldp+60948,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__dn));
    bufp->fullCData(oldp+60949,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__exp_out_final),8);
    bufp->fullCData(oldp+60950,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__exp_out_rnd),8);
    bufp->fullBit(oldp+60951,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__op_dn));
    bufp->fullBit(oldp+60952,((2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__fpu_op_r3))));
    bufp->fullBit(oldp+60953,((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__fpu_op_r3))));
    bufp->fullBit(oldp+60954,((4U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__fpu_op_r3))));
    bufp->fullBit(oldp+60955,((5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__fpu_op_r3))));
    bufp->fullCData(oldp+60956,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__u6__DOT__fi_ldz_r0),6);
    bufp->fullBit(oldp+60957,((1U & (IData)((vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_21 
                                             >> 0x19U)))));
    bufp->fullBit(oldp+60958,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__r));
    bufp->fullBit(oldp+60959,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__s));
    bufp->fullBit(oldp+60960,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_27) 
                               | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__r) 
                                  & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__s)))));
    bufp->fullBit(oldp+60961,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_37)
                                ? ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__sign)) 
                                   & ((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__exp_ovf_r) 
                                        >> 1U) & ((0U 
                                                   != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__fract_denorm) 
                                                  & ((((~ 
                                                        ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_23) 
                                                         >> 8U)) 
                                                       | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__op_dn)) 
                                                      & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_35)) 
                                                     | ((~ (IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0x7fffffU 
                                                                     & (IData)(
                                                                               (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_21 
                                                                                >> 0x19U)))))) 
                                                        | ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__op_dn)) 
                                                           & (3U 
                                                              != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__fpu_op_r3))))))) 
                                      | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_35) 
                                         & (((~ ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__exp_ovf_r) 
                                                 >> 1U)) 
                                             & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__exp_ovf_r)) 
                                                | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__exp_in_80))) 
                                            | ((3U 
                                                == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__fpu_op_r3)) 
                                               | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_59) 
                                                  & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_23) 
                                                     >> 8U)))))))
                                : ((5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__fpu_op_r3))
                                    ? ((2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__rmode_r3)) 
                                       & (((0U != (0xffffffU 
                                                   & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__fract_denorm))) 
                                           & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__opas_r2)) 
                                              & (0x80U 
                                                 > (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__exp_r)))) 
                                          | (0U != 
                                             (0x1ffffffU 
                                              & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_21)))))
                                    : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_30) 
                                       & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__sign)) 
                                          & ((~ ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__exp_out) 
                                                 >> 7U)) 
                                             | (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__exp_out) 
                                                 >> 7U) 
                                                & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__exp_out_fe)) 
                                                   | ((~ (IData)(
                                                                 (0x7fffffU 
                                                                  == 
                                                                  (0x7fffffU 
                                                                   & (IData)(
                                                                             (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_21 
                                                                              >> 0x19U)))))) 
                                                      | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__exp_out_fe) 
                                                         & (0xfffffe000000ULL 
                                                            == 
                                                            (0xfffffe000000ULL 
                                                             & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_21)))))))))))));
    bufp->fullBit(oldp+60962,((1U & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__exp_out_fe)) 
                                     | ((~ (IData)(
                                                   (0x7fffffU 
                                                    == 
                                                    (0x7fffffU 
                                                     & (IData)(
                                                               (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_21 
                                                                >> 0x19U)))))) 
                                        | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__exp_out_fe) 
                                           & (0xfffffe000000ULL 
                                              == (0xfffffe000000ULL 
                                                  & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_21))))))));
    bufp->fullBit(oldp+60963,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_30) 
                               & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__sign)) 
                                  & ((~ ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__exp_out) 
                                         >> 7U)) | 
                                     (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__exp_out) 
                                       >> 7U) & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__exp_out_fe)) 
                                                 | ((~ (IData)(
                                                               (0x7fffffU 
                                                                == 
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_21 
                                                                            >> 0x19U)))))) 
                                                    | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__exp_out_fe) 
                                                       & (0xfffffe000000ULL 
                                                          == 
                                                          (0xfffffe000000ULL 
                                                           & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_21)))))))))));
    bufp->fullBit(oldp+60964,(((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__sign)) 
                               & ((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__exp_ovf_r) 
                                    >> 1U) & ((0U != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__fract_denorm) 
                                              & ((((~ 
                                                    ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_23) 
                                                     >> 8U)) 
                                                   | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__op_dn)) 
                                                  & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_35)) 
                                                 | ((~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_21 
                                                                            >> 0x19U)))))) 
                                                    | ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__op_dn)) 
                                                       & (3U 
                                                          != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__fpu_op_r3))))))) 
                                  | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_35) 
                                     & (((~ ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__exp_ovf_r) 
                                             >> 1U)) 
                                         & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__exp_ovf_r)) 
                                            | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__exp_in_80))) 
                                        | ((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__fpu_op_r3)) 
                                           | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_59) 
                                              & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_23) 
                                                 >> 8U)))))))));
    bufp->fullCData(oldp+60965,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__exp_out) 
                                          + (1U & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_55 
                                                   >> 0x17U))))),8);
    bufp->fullCData(oldp+60966,((0xffU & (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_27) 
                                           & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__s) 
                                              & (0xffU 
                                                 == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__exp_r))))
                                           ? ((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__fpu_op_r3))
                                               ? ((0x16U 
                                                   < (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__u6__DOT__fi_ldz_r0))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__exp_r) 
                                                   - 
                                                   (0x3fU 
                                                    & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                                       - (IData)(0x16U))))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__exp_r) 
                                                   - 
                                                   (0x3fU 
                                                    & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                                       - (IData)(1U)))))
                                               : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__exp_next_mi))
                                           : (((5U 
                                                != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__fpu_op_r3)) 
                                               & (0xffU 
                                                  == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__exp_out)))
                                               ? (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__exp_r)
                                               : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__exp_out))))),8);
    bufp->fullCData(oldp+60967,((((5U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__fpu_op_r3)) 
                                  & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_38))
                                  ? 0xfeU : (0xffU 
                                             & ((0x800000U 
                                                 & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_54)
                                                 ? 
                                                ((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__exp_ovf_r) 
                                                   >> 1U) 
                                                  & (2U 
                                                     == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__fpu_op_r3)))
                                                  ? 
                                                 ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__exp_out) 
                                                  - (IData)(1U))
                                                  : 
                                                 ((IData)(1U) 
                                                  + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__exp_out)))
                                                 : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__exp_out))))),8);
    bufp->fullCData(oldp+60968,((0xffU & ((0x800000U 
                                           & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_54)
                                           ? ((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__exp_ovf_r) 
                                                >> 1U) 
                                               & (2U 
                                                  == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__fpu_op_r3)))
                                               ? ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__exp_out) 
                                                  - (IData)(1U))
                                               : ((IData)(1U) 
                                                  + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__exp_out)))
                                           : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__exp_out)))),8);
    bufp->fullIData(oldp+60969,((0x7fffffU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_55)),23);
    bufp->fullIData(oldp+60970,((((3U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__fpu_op_r3)) 
                                  & ((0xffU == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__exp_out)) 
                                     & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_53)))
                                  ? 0x7fffffU : (0x7fffffU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_21 
                                                            >> 0x19U))))),23);
    bufp->fullIData(oldp+60971,((((3U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__fpu_op_r3)) 
                                  & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_38) 
                                     & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_53)))
                                  ? 0x7fffffU : (0x7fffffU 
                                                 & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_54))),23);
    bufp->fullIData(oldp+60972,((0x7fffffU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_54)),23);
    bufp->fullBit(oldp+60973,((1U & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_55 
                                     >> 0x17U))));
    bufp->fullBit(oldp+60974,((1U & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_54 
                                     >> 0x17U))));
    bufp->fullBit(oldp+60975,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__ovf0));
    bufp->fullBit(oldp+60976,(((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__dn)) 
                               & (0xffU == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__exp_out)))));
    bufp->fullIData(oldp+60977,((0xffffffU & ((IData)(1U) 
                                              + (0x7fffffU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_21 
                                                            >> 0x19U)))))),24);
    bufp->fullCData(oldp+60978,((0xffU & ((IData)(1U) 
                                          + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__exp_out)))),8);
    bufp->fullCData(oldp+60979,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__exp_out) 
                                          - (IData)(1U)))),8);
    bufp->fullBit(oldp+60980,((1U & (~ (IData)((0U 
                                                != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__exp_out)))))));
    bufp->fullBit(oldp+60981,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__exp_out_fe));
    bufp->fullBit(oldp+60982,((0xffU == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__exp_out))));
    bufp->fullBit(oldp+60983,((1U & (~ (IData)((0U 
                                                != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__exp_r)))))));
    bufp->fullBit(oldp+60984,((0xffU == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__exp_r))));
    bufp->fullBit(oldp+60985,(((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_48)) 
                               & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_51) 
                                  | ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__max_num)) 
                                     & (0xffU == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__exp_out_rnd)))))));
    bufp->fullBit(oldp+60986,((0x7fffffU == (0x7fffffU 
                                             & (IData)(
                                                       (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_21 
                                                        >> 0x19U))))));
    bufp->fullIData(oldp+60987,((0x1ffffffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_21))),25);
    bufp->fullCData(oldp+60988,((0xffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_23))),8);
    bufp->fullBit(oldp+60989,((1U & (~ (IData)((0U 
                                                != 
                                                (0x7fffffU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_21 
                                                            >> 0x19U)))))))));
    bufp->fullBit(oldp+60990,((1U & (~ (IData)((0U 
                                                != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__fract_denorm))))));
    bufp->fullBit(oldp+60991,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_14) 
                                     >> 8U))));
    bufp->fullSData(oldp+60992,((0x1ffU & ((IData)(1U) 
                                           + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__exp_r)))),9);
    bufp->fullSData(oldp+60993,((0x1ffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__exp_r) 
                                           - (IData)(1U)))),9);
    bufp->fullQData(oldp+60994,(((0U != (3U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__shift_right) 
                                               >> 6U)))
                                  ? 0ULL : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__fract_in_shftr_1)),48);
    bufp->fullQData(oldp+60996,((((0U != (3U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__shift_left) 
                                                >> 6U))) 
                                  | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__f2i_zero) 
                                     & (5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__fpu_op_r3))))
                                  ? 0ULL : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__fract_in_shftl_1)),48);
    bufp->fullQData(oldp+60998,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__fract_in_shftr_1),48);
    bufp->fullQData(oldp+61000,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__fract_in_shftl_1),48);
    bufp->fullCData(oldp+61002,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__exp_div),8);
    bufp->fullCData(oldp+61003,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_23) 
                                          - (IData)(1U)))),8);
    bufp->fullBit(oldp+61004,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__div_dn));
    bufp->fullBit(oldp+61005,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_15) 
                               & ((~ (IData)((0U != 
                                              (0xffffffU 
                                               & (IData)(
                                                         (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__fract_denorm 
                                                          >> 0x17U)))))) 
                                  & (0x16U < (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__exp_r))))));
    bufp->fullBit(oldp+61006,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__grs_sel_div));
    bufp->fullBit(oldp+61007,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__div_inf));
    bufp->fullCData(oldp+61008,((0x7fU & ((IData)(0x17U) 
                                          - (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__u6__DOT__fi_ldz_r0)))),7);
    bufp->fullCData(oldp+61009,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__fi_ldz_2),8);
    bufp->fullCData(oldp+61010,((0xffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_70))),8);
    bufp->fullCData(oldp+61011,((0xffU & ((IData)(2U) 
                                          + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__exp_r)))),8);
    bufp->fullCData(oldp+61012,((0xffU & (- (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__exp_r)))),8);
    bufp->fullBit(oldp+61013,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_70) 
                                     >> 8U))));
    bufp->fullSData(oldp+61014,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__div_exp1),9);
    bufp->fullCData(oldp+61015,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__div_exp2),8);
    bufp->fullCData(oldp+61016,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__exp_r) 
                                          + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__fi_ldz_2)))),8);
    bufp->fullBit(oldp+61017,((1U & ((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__fpu_op_r3))
                                      ? ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_67) 
                                         | ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_15)) 
                                            & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__div_dn)) 
                                               & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_66) 
                                                  | ((~ 
                                                      ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__exp_ovf_r) 
                                                       >> 1U)) 
                                                     | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_65))))))
                                      : ((2U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__fpu_op_r3)) 
                                         | ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_61)) 
                                            | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_62)))))));
    bufp->fullBit(oldp+61018,((1U & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_61)) 
                                     | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_62)))));
    bufp->fullBit(oldp+61019,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_67) 
                                     | ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_15)) 
                                        & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__div_dn)) 
                                           & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_66) 
                                              | ((~ 
                                                  ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__exp_ovf_r) 
                                                   >> 1U)) 
                                                 | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_65)))))))));
    bufp->fullCData(oldp+61020,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__shift_right),8);
    bufp->fullCData(oldp+61021,((0xffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_14))),8);
    bufp->fullCData(oldp+61022,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_15)
                                           ? (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__exp_r)
                                           : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__div_dn)
                                               ? (- (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__exp_r))
                                               : ((IData)(2U) 
                                                  + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__exp_r)))))),8);
    bufp->fullCData(oldp+61023,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__shift_left),8);
    bufp->fullCData(oldp+61024,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_62)
                                           ? ((IData)(1U) 
                                              + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__exp_r))
                                           : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__u6__DOT__fi_ldz_r0)))),8);
    bufp->fullCData(oldp+61025,((0xffU & (((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_20)) 
                                           & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_66))
                                           ? (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_70)
                                           : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_65)
                                               ? (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__exp_r)
                                               : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__u6__DOT__fi_ldz_r0))))),8);
    bufp->fullCData(oldp+61026,((0xffU & ((1U & ((~ (IData)(
                                                            (0U 
                                                             != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__exp_out)))) 
                                                 | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__dn)))
                                           ? ((0U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__exp_r))
                                               ? ((IData)(1U) 
                                                  + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__exp_r))
                                               : 2U)
                                           : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__u6__DOT__fi_ldz_r0)))),8);
    bufp->fullCData(oldp+61027,((0xffU & ((0x16U < (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__u6__DOT__fi_ldz_r0))
                                           ? ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__exp_r) 
                                              - (0x3fU 
                                                 & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                                    - (IData)(0x16U))))
                                           : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__exp_r) 
                                              - (0x3fU 
                                                 & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                                    - (IData)(1U))))))),8);
    bufp->fullCData(oldp+61028,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__exp_r) 
                                          - (0x3fU 
                                             & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                                - (IData)(0x16U)))))),8);
    bufp->fullCData(oldp+61029,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__exp_r) 
                                          - (0x3fU 
                                             & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                                - (IData)(1U)))))),8);
    bufp->fullCData(oldp+61030,((0x3fU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                          - (IData)(1U)))),6);
    bufp->fullCData(oldp+61031,((0x3fU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                          - (IData)(0x16U)))),6);
    bufp->fullBit(oldp+61032,((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_59) 
                                & (2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__fpu_op_r3))) 
                               | ((2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__fpu_op_r3)) 
                                  & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_23) 
                                     >> 8U)))));
    bufp->fullCData(oldp+61033,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__u6__DOT__fi_ldz_r0),7);
    bufp->fullSData(oldp+61034,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__exp_r),9);
    bufp->fullCData(oldp+61035,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__exp_r) 
                                          - (IData)(0x7dU)))),8);
    bufp->fullQData(oldp+61036,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__Vcellout__u3__shift_out),56);
    bufp->fullBit(oldp+61038,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__f2i_zero));
    bufp->fullBit(oldp+61039,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__f2i_max));
    bufp->fullCData(oldp+61040,(((0U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__rmode_r3))
                                  ? 0x7eU : 0x7fU)),8);
    bufp->fullCData(oldp+61041,((0xffU & ((5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__fpu_op_r3))
                                           ? ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__exp_r) 
                                              - (IData)(0x7dU))
                                           : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__u6__DOT__fi_ldz_r0)))),8);
    bufp->fullCData(oldp+61042,((0xffU & ((0U != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__fract_denorm)
                                           ? ((IData)(0x9eU) 
                                              - (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__u6__DOT__fi_ldz_r0))
                                           : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__opas_r2)
                                               ? 0x9eU
                                               : 0U)))),8);
    bufp->fullCData(oldp+61043,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__f2i_zero)
                                  ? 0U : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__f2i_max)
                                           ? 0xffU : 0U))),8);
    bufp->fullCData(oldp+61044,((0xffU & ((5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__fpu_op_r3))
                                           ? ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__f2i_zero)
                                               ? 0U
                                               : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__f2i_max)
                                                   ? 0xffU
                                                   : 0U))
                                           : ((0U != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__fract_denorm)
                                               ? ((IData)(0x9eU) 
                                                  - (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__u6__DOT__fi_ldz_r0))
                                               : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__opas_r2)
                                                   ? 0x9eU
                                                   : 0U))))),8);
    bufp->fullBit(oldp+61045,(((2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__rmode_r3)) 
                               & (((0U != (0xffffffU 
                                           & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__fract_denorm))) 
                                   & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__opas_r2)) 
                                      & (0x80U > (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__exp_r)))) 
                                  | (0U != (0x1ffffffU 
                                            & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_21)))))));
    bufp->fullBit(oldp+61046,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__exp_in_80));
    bufp->fullBit(oldp+61047,((0U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__rmode_r3))));
    bufp->fullBit(oldp+61048,((1U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__rmode_r3))));
    bufp->fullBit(oldp+61049,((2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__rmode_r3))));
    bufp->fullBit(oldp+61050,((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__rmode_r3))));
    bufp->fullBit(oldp+61051,((0U != (0xffffffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__fract_denorm)))));
    bufp->fullBit(oldp+61052,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__max_num));
    bufp->fullBit(oldp+61053,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__inf_out));
    bufp->fullBit(oldp+61054,((((0U != (0x1ffffffU 
                                        & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_21))) 
                                & ((~ (IData)((0xffU 
                                               == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__exp_r)))) 
                                   & (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_14) 
                                       >> 8U) | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_61) 
                                                 | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_63))))) 
                               | ((~ (IData)((0U != 
                                              (0x7fffffU 
                                               & (IData)(
                                                         (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_21 
                                                          >> 0x19U)))))) 
                                  & ((0U != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__fract_denorm) 
                                     & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__exp_ovf_r) 
                                        >> 1U))))));
    bufp->fullBit(oldp+61055,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__inf_out) 
                                     | (((0U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__rmode_r3)) 
                                         & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__max_num)) 
                                        | ((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__exp_r) 
                                             >> 7U) 
                                            & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__op_dn) 
                                               & (0xffU 
                                                  == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__exp_out)))) 
                                           | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__exp_ovf_r) 
                                              & (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__exp_ovf_r) 
                                                  >> 1U) 
                                                 | (0xffU 
                                                    == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__exp_out))))))))));
    bufp->fullBit(oldp+61056,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__undeflow_div));
    bufp->fullBit(oldp+61057,((IData)(((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_14) 
                                         >> 8U) | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_61)) 
                                       | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_63)))));
    bufp->fullBit(oldp+61058,((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__f2i_zero) 
                                & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__opas_r2)) 
                                   & (0U != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__fract_denorm))) 
                               | ((0U != (0x1ffffffU 
                                          & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_21))) 
                                  | (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__f2i_zero) 
                                      & ((0x80U > (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__exp_r)) 
                                         & ((0U != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__fract_denorm) 
                                            & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__opas_r2)))) 
                                     | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__f2i_max) 
                                        & ((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__rmode_r3)) 
                                           & (0x80U 
                                              > (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__exp_r)))))))));
    bufp->fullCData(oldp+61059,((0x3fU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__shift_right))),6);
    bufp->fullCData(oldp+61060,((0x3fU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__exp_r) 
                                          - (IData)(0x3dU)))),6);
    bufp->fullQData(oldp+61061,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__Vcellout__u3__shift_out),48);
    bufp->fullCData(oldp+61063,((0x3fU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__shift_left))),6);
    bufp->fullIData(oldp+61064,((0x7fffffU & (IData)(
                                                     (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_21 
                                                      >> 0x19U)))),23);
    bufp->fullCData(oldp+61065,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__exp_out),8);
    bufp->fullBit(oldp+61066,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_23) 
                                     >> 8U))));
    bufp->fullIData(oldp+61067,((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__inf_out) 
                                  | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__ovf0))
                                  ? 0U : (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__max_num) 
                                           | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_46))
                                           ? 0x7fffffU
                                           : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__fract_out_rnd))),23);
    bufp->fullIData(oldp+61068,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__fract_out_rnd),23);
    bufp->fullSData(oldp+61069,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__exp_next_mi),9);
    bufp->fullBit(oldp+61070,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__dn));
    bufp->fullCData(oldp+61071,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__exp_out_final),8);
    bufp->fullCData(oldp+61072,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__exp_out_rnd),8);
    bufp->fullBit(oldp+61073,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__op_dn));
    bufp->fullBit(oldp+61074,((2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__fpu_op_r3))));
    bufp->fullBit(oldp+61075,((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__fpu_op_r3))));
    bufp->fullBit(oldp+61076,((4U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__fpu_op_r3))));
    bufp->fullBit(oldp+61077,((5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__fpu_op_r3))));
    bufp->fullCData(oldp+61078,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__u6__DOT__fi_ldz_r0),6);
    bufp->fullBit(oldp+61079,((1U & (IData)((vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_21 
                                             >> 0x19U)))));
    bufp->fullBit(oldp+61080,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__r));
    bufp->fullBit(oldp+61081,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__s));
    bufp->fullBit(oldp+61082,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_27) 
                               | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__r) 
                                  & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__s)))));
    bufp->fullBit(oldp+61083,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_37)
                                ? ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__sign)) 
                                   & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_30) 
                                      | (3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__fpu_op_r3))))
                                : ((5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__fpu_op_r3))
                                    ? ((2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__rmode_r3)) 
                                       & (((0U != (0xfU 
                                                   & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__fract_out_q)) 
                                           & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__opas_r2)) 
                                              & (0x80U 
                                                 > (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__exp_r)))) 
                                          | (0U != 
                                             (0x1ffffffU 
                                              & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_21)))))
                                    : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_30) 
                                       & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__sign)) 
                                          & ((~ ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__exp_out) 
                                                 >> 7U)) 
                                             | (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__exp_out) 
                                                 >> 7U) 
                                                & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__exp_out_fe)) 
                                                   | ((~ (IData)(
                                                                 (0x7fffffU 
                                                                  == 
                                                                  (0x7fffffU 
                                                                   & (IData)(
                                                                             (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_21 
                                                                              >> 0x19U)))))) 
                                                      | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__exp_out_fe) 
                                                         & (0xfffffe000000ULL 
                                                            == 
                                                            (0xfffffe000000ULL 
                                                             & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_21)))))))))))));
    bufp->fullBit(oldp+61084,((1U & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__exp_out_fe)) 
                                     | ((~ (IData)(
                                                   (0x7fffffU 
                                                    == 
                                                    (0x7fffffU 
                                                     & (IData)(
                                                               (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_21 
                                                                >> 0x19U)))))) 
                                        | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__exp_out_fe) 
                                           & (0xfffffe000000ULL 
                                              == (0xfffffe000000ULL 
                                                  & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_21))))))));
    bufp->fullBit(oldp+61085,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_30) 
                               & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__sign)) 
                                  & ((~ ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__exp_out) 
                                         >> 7U)) | 
                                     (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__exp_out) 
                                       >> 7U) & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__exp_out_fe)) 
                                                 | ((~ (IData)(
                                                               (0x7fffffU 
                                                                == 
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_21 
                                                                            >> 0x19U)))))) 
                                                    | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__exp_out_fe) 
                                                       & (0xfffffe000000ULL 
                                                          == 
                                                          (0xfffffe000000ULL 
                                                           & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_21)))))))))));
    bufp->fullBit(oldp+61086,(((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__sign)) 
                               & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_30) 
                                  | (3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__fpu_op_r3))))));
    bufp->fullCData(oldp+61087,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__exp_out) 
                                          + (1U & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_55 
                                                   >> 0x17U))))),8);
    bufp->fullCData(oldp+61088,((0xffU & (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_27) 
                                           & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__s) 
                                              & (0xffU 
                                                 == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__exp_r))))
                                           ? ((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__fpu_op_r3))
                                               ? ((0x16U 
                                                   < (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__u6__DOT__fi_ldz_r0))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__exp_r) 
                                                   - 
                                                   (0x3fU 
                                                    & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                                       - (IData)(0x16U))))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__exp_r) 
                                                   - 
                                                   (0x3fU 
                                                    & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                                       - (IData)(1U)))))
                                               : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__exp_next_mi))
                                           : (((5U 
                                                != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__fpu_op_r3)) 
                                               & (0xffU 
                                                  == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__exp_out)))
                                               ? (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__exp_r)
                                               : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__exp_out))))),8);
    bufp->fullCData(oldp+61089,((((5U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__fpu_op_r3)) 
                                  & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_38))
                                  ? 0xfeU : (0xffU 
                                             & ((0x800000U 
                                                 & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_54)
                                                 ? 
                                                ((IData)(1U) 
                                                 + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__exp_out))
                                                 : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__exp_out))))),8);
    bufp->fullCData(oldp+61090,((0xffU & ((0x800000U 
                                           & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_54)
                                           ? ((IData)(1U) 
                                              + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__exp_out))
                                           : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__exp_out)))),8);
    bufp->fullIData(oldp+61091,((0x7fffffU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_55)),23);
    bufp->fullIData(oldp+61092,((((3U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__fpu_op_r3)) 
                                  & ((0xffU == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__exp_out)) 
                                     & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_53)))
                                  ? 0x7fffffU : (0x7fffffU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_21 
                                                            >> 0x19U))))),23);
    bufp->fullIData(oldp+61093,((((3U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__fpu_op_r3)) 
                                  & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_38) 
                                     & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_53)))
                                  ? 0x7fffffU : (0x7fffffU 
                                                 & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_54))),23);
    bufp->fullIData(oldp+61094,((0x7fffffU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_54)),23);
    bufp->fullBit(oldp+61095,((1U & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_55 
                                     >> 0x17U))));
    bufp->fullBit(oldp+61096,((1U & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_54 
                                     >> 0x17U))));
    bufp->fullBit(oldp+61097,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__ovf0));
    bufp->fullBit(oldp+61098,(((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__dn)) 
                               & (0xffU == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__exp_out)))));
    bufp->fullIData(oldp+61099,((0xffffffU & ((IData)(1U) 
                                              + (0x7fffffU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_21 
                                                            >> 0x19U)))))),24);
    bufp->fullCData(oldp+61100,((0xffU & ((IData)(1U) 
                                          + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__exp_out)))),8);
    bufp->fullCData(oldp+61101,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__exp_out) 
                                          - (IData)(1U)))),8);
    bufp->fullBit(oldp+61102,((1U & (~ (IData)((0U 
                                                != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__exp_out)))))));
    bufp->fullBit(oldp+61103,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__exp_out_fe));
    bufp->fullBit(oldp+61104,((0xffU == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__exp_out))));
    bufp->fullBit(oldp+61105,((1U & (~ (IData)((0U 
                                                != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__exp_r)))))));
    bufp->fullBit(oldp+61106,((0xffU == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__exp_r))));
    bufp->fullBit(oldp+61107,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_51) 
                               | ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__max_num)) 
                                  & (0xffU == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__exp_out_rnd))))));
    bufp->fullBit(oldp+61108,((0x7fffffU == (0x7fffffU 
                                             & (IData)(
                                                       (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_21 
                                                        >> 0x19U))))));
    bufp->fullIData(oldp+61109,((0x1ffffffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_21))),25);
    bufp->fullCData(oldp+61110,((0xffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_23))),8);
    bufp->fullBit(oldp+61111,((1U & (~ (IData)((0U 
                                                != 
                                                (0x7fffffU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_21 
                                                            >> 0x19U)))))))));
    bufp->fullBit(oldp+61112,((1U & (~ (IData)((0U 
                                                != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__fract_out_q))))));
    bufp->fullBit(oldp+61113,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_14) 
                                     >> 8U))));
    bufp->fullSData(oldp+61114,((0x1ffU & ((IData)(1U) 
                                           + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__exp_r)))),9);
    bufp->fullSData(oldp+61115,((0x1ffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__exp_r) 
                                           - (IData)(1U)))),9);
    bufp->fullQData(oldp+61116,(((0U != (3U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__shift_right) 
                                               >> 6U)))
                                  ? 0ULL : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__fract_in_shftr_1)),48);
    bufp->fullQData(oldp+61118,((((0U != (3U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__shift_left) 
                                                >> 6U))) 
                                  | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__f2i_zero) 
                                     & (5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__fpu_op_r3))))
                                  ? 0ULL : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__fract_in_shftl_1)),48);
    bufp->fullQData(oldp+61120,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__fract_in_shftr_1),48);
    bufp->fullQData(oldp+61122,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__fract_in_shftl_1),48);
    bufp->fullCData(oldp+61124,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__exp_div),8);
    bufp->fullCData(oldp+61125,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_23) 
                                          - (IData)(1U)))),8);
    bufp->fullBit(oldp+61126,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__div_dn));
    bufp->fullBit(oldp+61127,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__grs_sel_div));
    bufp->fullBit(oldp+61128,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__div_inf));
    bufp->fullCData(oldp+61129,((0x7fU & ((IData)(0x17U) 
                                          - (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__u6__DOT__fi_ldz_r0)))),7);
    bufp->fullCData(oldp+61130,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__fi_ldz_2),8);
    bufp->fullCData(oldp+61131,((0xffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_70))),8);
    bufp->fullCData(oldp+61132,((0xffU & ((IData)(2U) 
                                          + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__exp_r)))),8);
    bufp->fullCData(oldp+61133,((0xffU & (- (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__exp_r)))),8);
    bufp->fullBit(oldp+61134,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_70) 
                                     >> 8U))));
    bufp->fullSData(oldp+61135,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__div_exp1),9);
    bufp->fullCData(oldp+61136,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__div_exp2),8);
    bufp->fullCData(oldp+61137,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__exp_r) 
                                          + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__fi_ldz_2)))),8);
    bufp->fullBit(oldp+61138,((1U & ((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__fpu_op_r3))
                                      ? (~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__div_dn))
                                      : ((2U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__fpu_op_r3)) 
                                         | ((0U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__exp_r)) 
                                            | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_62)))))));
    bufp->fullBit(oldp+61139,(((0U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__exp_r)) 
                               | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_62))));
    bufp->fullBit(oldp+61140,((1U & (~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__div_dn)))));
    bufp->fullCData(oldp+61141,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__shift_right),8);
    bufp->fullCData(oldp+61142,((0xffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_14))),8);
    bufp->fullCData(oldp+61143,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__div_dn)
                                           ? (- (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__exp_r))
                                           : ((IData)(2U) 
                                              + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__exp_r))))),8);
    bufp->fullCData(oldp+61144,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__shift_left),8);
    bufp->fullCData(oldp+61145,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_62)
                                           ? ((IData)(1U) 
                                              + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__exp_r))
                                           : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__u6__DOT__fi_ldz_r0)))),8);
    bufp->fullCData(oldp+61146,((0xffU & (((~ (IData)(
                                                      (0U 
                                                       != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__exp_out)))) 
                                           & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__op_dn))
                                           ? (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_70)
                                           : ((1U & 
                                               ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__op_dn)) 
                                                & (~ (IData)(
                                                             (0U 
                                                              != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__exp_out))))))
                                               ? (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__exp_r)
                                               : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__u6__DOT__fi_ldz_r0))))),8);
    bufp->fullCData(oldp+61147,((0xffU & ((1U & ((~ (IData)(
                                                            (0U 
                                                             != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__exp_out)))) 
                                                 | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__dn)))
                                           ? ((0U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__exp_r))
                                               ? ((IData)(1U) 
                                                  + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__exp_r))
                                               : 2U)
                                           : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__u6__DOT__fi_ldz_r0)))),8);
    bufp->fullCData(oldp+61148,((0xffU & ((0x16U < (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__u6__DOT__fi_ldz_r0))
                                           ? ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__exp_r) 
                                              - (0x3fU 
                                                 & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                                    - (IData)(0x16U))))
                                           : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__exp_r) 
                                              - (0x3fU 
                                                 & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                                    - (IData)(1U))))))),8);
    bufp->fullCData(oldp+61149,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__exp_r) 
                                          - (0x3fU 
                                             & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                                - (IData)(0x16U)))))),8);
    bufp->fullCData(oldp+61150,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__exp_r) 
                                          - (0x3fU 
                                             & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                                - (IData)(1U)))))),8);
    bufp->fullCData(oldp+61151,((0x3fU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                          - (IData)(1U)))),6);
    bufp->fullCData(oldp+61152,((0x3fU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                          - (IData)(0x16U)))),6);
    bufp->fullBit(oldp+61153,(((2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__fpu_op_r3)) 
                               & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_23) 
                                  >> 8U))));
    bufp->fullCData(oldp+61154,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__u6__DOT__fi_ldz_r0),7);
    bufp->fullSData(oldp+61155,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__exp_r),9);
    bufp->fullCData(oldp+61156,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__exp_r) 
                                          - (IData)(0x7dU)))),8);
    bufp->fullQData(oldp+61157,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__Vcellout__u3__shift_out),56);
    bufp->fullBit(oldp+61159,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__f2i_zero));
    bufp->fullBit(oldp+61160,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__f2i_max));
    bufp->fullCData(oldp+61161,(((0U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__rmode_r3))
                                  ? 0x7eU : 0x7fU)),8);
    bufp->fullCData(oldp+61162,((0xffU & ((5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__fpu_op_r3))
                                           ? ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__exp_r) 
                                              - (IData)(0x7dU))
                                           : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__u6__DOT__fi_ldz_r0)))),8);
    bufp->fullCData(oldp+61163,((0xffU & ((0U != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__fract_out_q)
                                           ? ((IData)(0x9eU) 
                                              - (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__u6__DOT__fi_ldz_r0))
                                           : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__opas_r2)
                                               ? 0x9eU
                                               : 0U)))),8);
    bufp->fullCData(oldp+61164,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__f2i_zero)
                                  ? 0U : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__f2i_max)
                                           ? 0xffU : 0U))),8);
    bufp->fullCData(oldp+61165,((0xffU & ((5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__fpu_op_r3))
                                           ? ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__f2i_zero)
                                               ? 0U
                                               : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__f2i_max)
                                                   ? 0xffU
                                                   : 0U))
                                           : ((0U != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__fract_out_q)
                                               ? ((IData)(0x9eU) 
                                                  - (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__u6__DOT__fi_ldz_r0))
                                               : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__opas_r2)
                                                   ? 0x9eU
                                                   : 0U))))),8);
    bufp->fullBit(oldp+61166,(((2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__rmode_r3)) 
                               & (((0U != (0xfU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__fract_out_q)) 
                                   & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__opas_r2)) 
                                      & (0x80U > (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__exp_r)))) 
                                  | (0U != (0x1ffffffU 
                                            & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_21)))))));
    bufp->fullBit(oldp+61167,((IData)((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__exp_r) 
                                        >> 7U) & (~ (IData)(
                                                            (0U 
                                                             != 
                                                             (0x7fU 
                                                              & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__exp_r)))))))));
    bufp->fullBit(oldp+61168,((0U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__rmode_r3))));
    bufp->fullBit(oldp+61169,((1U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__rmode_r3))));
    bufp->fullBit(oldp+61170,((2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__rmode_r3))));
    bufp->fullBit(oldp+61171,((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__rmode_r3))));
    bufp->fullBit(oldp+61172,((0U != (0xfU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__fract_out_q))));
    bufp->fullBit(oldp+61173,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__max_num));
    bufp->fullBit(oldp+61174,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__inf_out));
    bufp->fullBit(oldp+61175,(((0U != (0x1ffffffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_21))) 
                               & ((~ (IData)((0xffU 
                                              == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__exp_r)))) 
                                  & (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_14) 
                                      >> 8U) | ((~ (IData)(
                                                           (0U 
                                                            != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__exp_r)))) 
                                                | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_63)))))));
    bufp->fullBit(oldp+61176,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__inf_out) 
                               | (((0U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__rmode_r3)) 
                                   & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__max_num)) 
                                  | (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__exp_r) 
                                      >> 7U) & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__op_dn) 
                                                & (0xffU 
                                                   == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__exp_out))))))));
    bufp->fullBit(oldp+61177,(((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__inf_out)) 
                               & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__max_num)) 
                                  & ((0xffU != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__exp_out_final)) 
                                     & (((0U != (0x1ffffffU 
                                                 & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_21))) 
                                         & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__opb_dn)) 
                                            & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__div_dn) 
                                               | (~ (IData)(
                                                            (0U 
                                                             != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__exp_out))))))) 
                                        | (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__op_dn) 
                                            & ((~ (IData)(
                                                          (0U 
                                                           != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__exp_out)))) 
                                               & (0x17U 
                                                  > (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__u6__DOT__fi_ldz_r0)))) 
                                           | ((~ (IData)(
                                                         (0U 
                                                          != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__exp_r)))) 
                                              | ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__op_dn)) 
                                                 & ((0x17U 
                                                     > (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__u6__DOT__fi_ldz_r0)) 
                                                    & ((1U 
                                                        == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__exp_r)) 
                                                       & (~ (IData)(
                                                                    (0U 
                                                                     != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__exp_out)))))))))))))));
    bufp->fullBit(oldp+61178,((1U & (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_14) 
                                      >> 8U) | ((~ (IData)(
                                                           (0U 
                                                            != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__exp_r)))) 
                                                | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_63))))));
    bufp->fullBit(oldp+61179,((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__f2i_zero) 
                                & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__opas_r2)) 
                                   & (0U != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__fract_out_q))) 
                               | ((0U != (0x1ffffffU 
                                          & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_21))) 
                                  | (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__f2i_zero) 
                                      & ((0x80U > (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__exp_r)) 
                                         & ((0U != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__fract_out_q) 
                                            & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__opas_r2)))) 
                                     | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__f2i_max) 
                                        & ((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__rmode_r3)) 
                                           & (0x80U 
                                              > (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__exp_r)))))))));
    bufp->fullCData(oldp+61180,((0x3fU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__shift_right))),6);
    bufp->fullCData(oldp+61181,((0x3fU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__exp_r) 
                                          - (IData)(0x3dU)))),6);
    bufp->fullQData(oldp+61182,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__Vcellout__u3__shift_out),48);
    bufp->fullCData(oldp+61184,((0x3fU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__shift_left))),6);
    bufp->fullIData(oldp+61185,((0x7fffffU & (IData)(
                                                     (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_21 
                                                      >> 0x19U)))),23);
    bufp->fullCData(oldp+61186,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__exp_out),8);
    bufp->fullBit(oldp+61187,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_23) 
                                     >> 8U))));
    bufp->fullIData(oldp+61188,((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__inf_out) 
                                  | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__ovf0) 
                                     | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__or_result)))
                                  ? 0U : (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__max_num) 
                                           | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_46))
                                           ? 0x7fffffU
                                           : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__fract_out_rnd))),23);
    bufp->fullIData(oldp+61189,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__fract_out_rnd),23);
    bufp->fullSData(oldp+61190,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__exp_next_mi),9);
    bufp->fullBit(oldp+61191,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__dn));
    bufp->fullCData(oldp+61192,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__exp_out_final),8);
    bufp->fullCData(oldp+61193,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__exp_out_rnd),8);
    bufp->fullBit(oldp+61194,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__op_dn));
    bufp->fullBit(oldp+61195,((2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__fpu_op_r3))));
    bufp->fullBit(oldp+61196,((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__fpu_op_r3))));
    bufp->fullBit(oldp+61197,((4U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__fpu_op_r3))));
    bufp->fullBit(oldp+61198,((5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__fpu_op_r3))));
    bufp->fullCData(oldp+61199,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__u6__DOT__fi_ldz_r0),6);
    bufp->fullBit(oldp+61200,((1U & (IData)((vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_21 
                                             >> 0x19U)))));
    bufp->fullBit(oldp+61201,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__r));
    bufp->fullBit(oldp+61202,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__s));
    bufp->fullBit(oldp+61203,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_27) 
                               | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__r) 
                                  & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__s)))));
    bufp->fullBit(oldp+61204,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_37)
                                ? ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__sign)) 
                                   & ((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__exp_ovf_r) 
                                        >> 1U) & ((0U 
                                                   != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__fract_denorm) 
                                                  & ((((~ 
                                                        ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_23) 
                                                         >> 8U)) 
                                                       | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__op_dn)) 
                                                      & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_35)) 
                                                     | ((~ (IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0x7fffffU 
                                                                     & (IData)(
                                                                               (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_21 
                                                                                >> 0x19U)))))) 
                                                        | ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__op_dn)) 
                                                           & (3U 
                                                              != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__fpu_op_r3))))))) 
                                      | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_35) 
                                         & (((~ ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__exp_ovf_r) 
                                                 >> 1U)) 
                                             & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__exp_ovf_r)) 
                                                | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__exp_in_80))) 
                                            | ((3U 
                                                == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__fpu_op_r3)) 
                                               | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_59) 
                                                  & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_23) 
                                                     >> 8U)))))))
                                : ((5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__fpu_op_r3))
                                    ? ((2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__rmode_r3)) 
                                       & (((0U != (0xffffffU 
                                                   & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__fract_denorm))) 
                                           & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__opas_r2)) 
                                              & (0x80U 
                                                 > (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__exp_r)))) 
                                          | (0U != 
                                             (0x1ffffffU 
                                              & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_21)))))
                                    : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_30) 
                                       & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__sign)) 
                                          & ((~ ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__exp_out) 
                                                 >> 7U)) 
                                             | (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__exp_out) 
                                                 >> 7U) 
                                                & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__exp_out_fe)) 
                                                   | ((~ (IData)(
                                                                 (0x7fffffU 
                                                                  == 
                                                                  (0x7fffffU 
                                                                   & (IData)(
                                                                             (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_21 
                                                                              >> 0x19U)))))) 
                                                      | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__exp_out_fe) 
                                                         & (0xfffffe000000ULL 
                                                            == 
                                                            (0xfffffe000000ULL 
                                                             & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_21)))))))))))));
    bufp->fullBit(oldp+61205,((1U & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__exp_out_fe)) 
                                     | ((~ (IData)(
                                                   (0x7fffffU 
                                                    == 
                                                    (0x7fffffU 
                                                     & (IData)(
                                                               (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_21 
                                                                >> 0x19U)))))) 
                                        | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__exp_out_fe) 
                                           & (0xfffffe000000ULL 
                                              == (0xfffffe000000ULL 
                                                  & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_21))))))));
    bufp->fullBit(oldp+61206,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_30) 
                               & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__sign)) 
                                  & ((~ ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__exp_out) 
                                         >> 7U)) | 
                                     (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__exp_out) 
                                       >> 7U) & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__exp_out_fe)) 
                                                 | ((~ (IData)(
                                                               (0x7fffffU 
                                                                == 
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_21 
                                                                            >> 0x19U)))))) 
                                                    | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__exp_out_fe) 
                                                       & (0xfffffe000000ULL 
                                                          == 
                                                          (0xfffffe000000ULL 
                                                           & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_21)))))))))));
    bufp->fullBit(oldp+61207,(((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__sign)) 
                               & ((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__exp_ovf_r) 
                                    >> 1U) & ((0U != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__fract_denorm) 
                                              & ((((~ 
                                                    ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_23) 
                                                     >> 8U)) 
                                                   | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__op_dn)) 
                                                  & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_35)) 
                                                 | ((~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_21 
                                                                            >> 0x19U)))))) 
                                                    | ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__op_dn)) 
                                                       & (3U 
                                                          != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__fpu_op_r3))))))) 
                                  | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_35) 
                                     & (((~ ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__exp_ovf_r) 
                                             >> 1U)) 
                                         & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__exp_ovf_r)) 
                                            | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__exp_in_80))) 
                                        | ((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__fpu_op_r3)) 
                                           | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_59) 
                                              & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_23) 
                                                 >> 8U)))))))));
    bufp->fullCData(oldp+61208,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__exp_out) 
                                          + (1U & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_55 
                                                   >> 0x17U))))),8);
    bufp->fullCData(oldp+61209,((0xffU & (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_27) 
                                           & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__s) 
                                              & (0xffU 
                                                 == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__exp_r))))
                                           ? ((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__fpu_op_r3))
                                               ? ((0x16U 
                                                   < (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__u6__DOT__fi_ldz_r0))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__exp_r) 
                                                   - 
                                                   (0x3fU 
                                                    & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                                       - (IData)(0x16U))))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__exp_r) 
                                                   - 
                                                   (0x3fU 
                                                    & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                                       - (IData)(1U)))))
                                               : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__exp_next_mi))
                                           : (((5U 
                                                != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__fpu_op_r3)) 
                                               & (0xffU 
                                                  == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__exp_out)))
                                               ? (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__exp_r)
                                               : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__exp_out))))),8);
    bufp->fullCData(oldp+61210,((((5U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__fpu_op_r3)) 
                                  & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_38))
                                  ? 0xfeU : (0xffU 
                                             & ((0x800000U 
                                                 & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_54)
                                                 ? 
                                                ((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__exp_ovf_r) 
                                                   >> 1U) 
                                                  & (2U 
                                                     == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__fpu_op_r3)))
                                                  ? 
                                                 ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__exp_out) 
                                                  - (IData)(1U))
                                                  : 
                                                 ((IData)(1U) 
                                                  + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__exp_out)))
                                                 : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__exp_out))))),8);
    bufp->fullCData(oldp+61211,((0xffU & ((0x800000U 
                                           & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_54)
                                           ? ((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__exp_ovf_r) 
                                                >> 1U) 
                                               & (2U 
                                                  == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__fpu_op_r3)))
                                               ? ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__exp_out) 
                                                  - (IData)(1U))
                                               : ((IData)(1U) 
                                                  + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__exp_out)))
                                           : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__exp_out)))),8);
    bufp->fullIData(oldp+61212,((0x7fffffU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_55)),23);
    bufp->fullIData(oldp+61213,((((3U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__fpu_op_r3)) 
                                  & ((0xffU == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__exp_out)) 
                                     & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_53)))
                                  ? 0x7fffffU : (0x7fffffU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_21 
                                                            >> 0x19U))))),23);
    bufp->fullIData(oldp+61214,((((3U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__fpu_op_r3)) 
                                  & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_38) 
                                     & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_53)))
                                  ? 0x7fffffU : (0x7fffffU 
                                                 & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_54))),23);
    bufp->fullIData(oldp+61215,((0x7fffffU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_54)),23);
    bufp->fullBit(oldp+61216,((1U & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_55 
                                     >> 0x17U))));
    bufp->fullBit(oldp+61217,((1U & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_54 
                                     >> 0x17U))));
    bufp->fullBit(oldp+61218,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__ovf0));
    bufp->fullBit(oldp+61219,(((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__dn)) 
                               & (0xffU == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__exp_out)))));
    bufp->fullIData(oldp+61220,((0xffffffU & ((IData)(1U) 
                                              + (0x7fffffU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_21 
                                                            >> 0x19U)))))),24);
    bufp->fullCData(oldp+61221,((0xffU & ((IData)(1U) 
                                          + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__exp_out)))),8);
    bufp->fullCData(oldp+61222,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__exp_out) 
                                          - (IData)(1U)))),8);
    bufp->fullBit(oldp+61223,((1U & (~ (IData)((0U 
                                                != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__exp_out)))))));
    bufp->fullBit(oldp+61224,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__exp_out_fe));
    bufp->fullBit(oldp+61225,((0xffU == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__exp_out))));
    bufp->fullBit(oldp+61226,((1U & (~ (IData)((0U 
                                                != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__exp_r)))))));
    bufp->fullBit(oldp+61227,((0xffU == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__exp_r))));
    bufp->fullBit(oldp+61228,(((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_48)) 
                               & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_51) 
                                  | ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__max_num)) 
                                     & (0xffU == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__exp_out_rnd)))))));
    bufp->fullBit(oldp+61229,((0x7fffffU == (0x7fffffU 
                                             & (IData)(
                                                       (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_21 
                                                        >> 0x19U))))));
    bufp->fullIData(oldp+61230,((0x1ffffffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_21))),25);
    bufp->fullCData(oldp+61231,((0xffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_23))),8);
    bufp->fullBit(oldp+61232,((1U & (~ (IData)((0U 
                                                != 
                                                (0x7fffffU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_21 
                                                            >> 0x19U)))))))));
    bufp->fullBit(oldp+61233,((1U & (~ (IData)((0U 
                                                != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__fract_denorm))))));
    bufp->fullBit(oldp+61234,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_14) 
                                     >> 8U))));
    bufp->fullSData(oldp+61235,((0x1ffU & ((IData)(1U) 
                                           + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__exp_r)))),9);
    bufp->fullSData(oldp+61236,((0x1ffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__exp_r) 
                                           - (IData)(1U)))),9);
    bufp->fullQData(oldp+61237,(((0U != (3U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__shift_right) 
                                               >> 6U)))
                                  ? 0ULL : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__fract_in_shftr_1)),48);
    bufp->fullQData(oldp+61239,((((0U != (3U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__shift_left) 
                                                >> 6U))) 
                                  | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__f2i_zero) 
                                     & (5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__fpu_op_r3))))
                                  ? 0ULL : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__fract_in_shftl_1)),48);
    bufp->fullQData(oldp+61241,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__fract_in_shftr_1),48);
    bufp->fullQData(oldp+61243,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__fract_in_shftl_1),48);
    bufp->fullCData(oldp+61245,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__exp_div),8);
    bufp->fullCData(oldp+61246,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_23) 
                                          - (IData)(1U)))),8);
    bufp->fullBit(oldp+61247,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__div_dn));
    bufp->fullBit(oldp+61248,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_15) 
                               & ((~ (IData)((0U != 
                                              (0xffffffU 
                                               & (IData)(
                                                         (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__fract_denorm 
                                                          >> 0x17U)))))) 
                                  & (0x16U < (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__exp_r))))));
    bufp->fullBit(oldp+61249,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__grs_sel_div));
    bufp->fullBit(oldp+61250,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__div_inf));
    bufp->fullCData(oldp+61251,((0x7fU & ((IData)(0x17U) 
                                          - (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__u6__DOT__fi_ldz_r0)))),7);
    bufp->fullCData(oldp+61252,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__fi_ldz_2),8);
    bufp->fullCData(oldp+61253,((0xffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_70))),8);
    bufp->fullCData(oldp+61254,((0xffU & ((IData)(2U) 
                                          + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__exp_r)))),8);
    bufp->fullCData(oldp+61255,((0xffU & (- (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__exp_r)))),8);
    bufp->fullBit(oldp+61256,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_70) 
                                     >> 8U))));
    bufp->fullSData(oldp+61257,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__div_exp1),9);
    bufp->fullCData(oldp+61258,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__div_exp2),8);
    bufp->fullCData(oldp+61259,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__exp_r) 
                                          + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__fi_ldz_2)))),8);
    bufp->fullBit(oldp+61260,((1U & ((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__fpu_op_r3))
                                      ? ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_67) 
                                         | ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_15)) 
                                            & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__div_dn)) 
                                               & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_66) 
                                                  | ((~ 
                                                      ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__exp_ovf_r) 
                                                       >> 1U)) 
                                                     | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_65))))))
                                      : ((2U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__fpu_op_r3)) 
                                         | ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_61)) 
                                            | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_62)))))));
    bufp->fullBit(oldp+61261,((1U & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_61)) 
                                     | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_62)))));
    bufp->fullBit(oldp+61262,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_67) 
                                     | ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_15)) 
                                        & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__div_dn)) 
                                           & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_66) 
                                              | ((~ 
                                                  ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__exp_ovf_r) 
                                                   >> 1U)) 
                                                 | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_65)))))))));
    bufp->fullCData(oldp+61263,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__shift_right),8);
    bufp->fullCData(oldp+61264,((0xffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_14))),8);
    bufp->fullCData(oldp+61265,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_15)
                                           ? (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__exp_r)
                                           : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__div_dn)
                                               ? (- (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__exp_r))
                                               : ((IData)(2U) 
                                                  + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__exp_r)))))),8);
    bufp->fullCData(oldp+61266,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__shift_left),8);
    bufp->fullCData(oldp+61267,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_62)
                                           ? ((IData)(1U) 
                                              + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__exp_r))
                                           : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__u6__DOT__fi_ldz_r0)))),8);
    bufp->fullCData(oldp+61268,((0xffU & (((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_20)) 
                                           & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_66))
                                           ? (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_70)
                                           : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_65)
                                               ? (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__exp_r)
                                               : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__u6__DOT__fi_ldz_r0))))),8);
    bufp->fullCData(oldp+61269,((0xffU & ((1U & ((~ (IData)(
                                                            (0U 
                                                             != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__exp_out)))) 
                                                 | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__dn)))
                                           ? ((0U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__exp_r))
                                               ? ((IData)(1U) 
                                                  + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__exp_r))
                                               : 2U)
                                           : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__u6__DOT__fi_ldz_r0)))),8);
    bufp->fullCData(oldp+61270,((0xffU & ((0x16U < (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__u6__DOT__fi_ldz_r0))
                                           ? ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__exp_r) 
                                              - (0x3fU 
                                                 & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                                    - (IData)(0x16U))))
                                           : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__exp_r) 
                                              - (0x3fU 
                                                 & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                                    - (IData)(1U))))))),8);
    bufp->fullCData(oldp+61271,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__exp_r) 
                                          - (0x3fU 
                                             & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                                - (IData)(0x16U)))))),8);
    bufp->fullCData(oldp+61272,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__exp_r) 
                                          - (0x3fU 
                                             & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                                - (IData)(1U)))))),8);
    bufp->fullCData(oldp+61273,((0x3fU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                          - (IData)(1U)))),6);
    bufp->fullCData(oldp+61274,((0x3fU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                          - (IData)(0x16U)))),6);
    bufp->fullBit(oldp+61275,((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_59) 
                                & (2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__fpu_op_r3))) 
                               | ((2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__fpu_op_r3)) 
                                  & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_23) 
                                     >> 8U)))));
    bufp->fullCData(oldp+61276,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__u6__DOT__fi_ldz_r0),7);
    bufp->fullSData(oldp+61277,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__exp_r),9);
    bufp->fullCData(oldp+61278,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__exp_r) 
                                          - (IData)(0x7dU)))),8);
    bufp->fullQData(oldp+61279,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__Vcellout__u3__shift_out),56);
    bufp->fullBit(oldp+61281,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__f2i_zero));
    bufp->fullBit(oldp+61282,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__f2i_max));
    bufp->fullCData(oldp+61283,(((0U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__rmode_r3))
                                  ? 0x7eU : 0x7fU)),8);
    bufp->fullCData(oldp+61284,((0xffU & ((5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__fpu_op_r3))
                                           ? ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__exp_r) 
                                              - (IData)(0x7dU))
                                           : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__u6__DOT__fi_ldz_r0)))),8);
    bufp->fullCData(oldp+61285,((0xffU & ((0U != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__fract_denorm)
                                           ? ((IData)(0x9eU) 
                                              - (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__u6__DOT__fi_ldz_r0))
                                           : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__opas_r2)
                                               ? 0x9eU
                                               : 0U)))),8);
    bufp->fullCData(oldp+61286,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__f2i_zero)
                                  ? 0U : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__f2i_max)
                                           ? 0xffU : 0U))),8);
    bufp->fullCData(oldp+61287,((0xffU & ((5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__fpu_op_r3))
                                           ? ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__f2i_zero)
                                               ? 0U
                                               : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__f2i_max)
                                                   ? 0xffU
                                                   : 0U))
                                           : ((0U != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__fract_denorm)
                                               ? ((IData)(0x9eU) 
                                                  - (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__u6__DOT__fi_ldz_r0))
                                               : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__opas_r2)
                                                   ? 0x9eU
                                                   : 0U))))),8);
    bufp->fullBit(oldp+61288,(((2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__rmode_r3)) 
                               & (((0U != (0xffffffU 
                                           & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__fract_denorm))) 
                                   & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__opas_r2)) 
                                      & (0x80U > (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__exp_r)))) 
                                  | (0U != (0x1ffffffU 
                                            & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_21)))))));
    bufp->fullBit(oldp+61289,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__exp_in_80));
    bufp->fullBit(oldp+61290,((0U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__rmode_r3))));
    bufp->fullBit(oldp+61291,((1U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__rmode_r3))));
    bufp->fullBit(oldp+61292,((2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__rmode_r3))));
    bufp->fullBit(oldp+61293,((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__rmode_r3))));
    bufp->fullBit(oldp+61294,((0U != (0xffffffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__fract_denorm)))));
    bufp->fullBit(oldp+61295,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__max_num));
    bufp->fullBit(oldp+61296,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__inf_out));
    bufp->fullBit(oldp+61297,((((0U != (0x1ffffffU 
                                        & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_21))) 
                                & ((~ (IData)((0xffU 
                                               == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__exp_r)))) 
                                   & (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_14) 
                                       >> 8U) | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_61) 
                                                 | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_63))))) 
                               | ((~ (IData)((0U != 
                                              (0x7fffffU 
                                               & (IData)(
                                                         (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_21 
                                                          >> 0x19U)))))) 
                                  & ((0U != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__fract_denorm) 
                                     & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__exp_ovf_r) 
                                        >> 1U))))));
    bufp->fullBit(oldp+61298,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__inf_out) 
                                     | (((0U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__rmode_r3)) 
                                         & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__max_num)) 
                                        | ((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__exp_r) 
                                             >> 7U) 
                                            & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__op_dn) 
                                               & (0xffU 
                                                  == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__exp_out)))) 
                                           | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__exp_ovf_r) 
                                              & (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__exp_ovf_r) 
                                                  >> 1U) 
                                                 | (0xffU 
                                                    == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__exp_out))))))))));
    bufp->fullBit(oldp+61299,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__undeflow_div));
    bufp->fullBit(oldp+61300,((IData)(((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_14) 
                                         >> 8U) | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_61)) 
                                       | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_63)))));
    bufp->fullBit(oldp+61301,((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__f2i_zero) 
                                & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__opas_r2)) 
                                   & (0U != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__fract_denorm))) 
                               | ((0U != (0x1ffffffU 
                                          & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_21))) 
                                  | (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__f2i_zero) 
                                      & ((0x80U > (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__exp_r)) 
                                         & ((0U != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__fract_denorm) 
                                            & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__opas_r2)))) 
                                     | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__f2i_max) 
                                        & ((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__rmode_r3)) 
                                           & (0x80U 
                                              > (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__exp_r)))))))));
    bufp->fullCData(oldp+61302,((0x3fU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__shift_right))),6);
    bufp->fullCData(oldp+61303,((0x3fU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__exp_r) 
                                          - (IData)(0x3dU)))),6);
    bufp->fullQData(oldp+61304,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__Vcellout__u3__shift_out),48);
    bufp->fullCData(oldp+61306,((0x3fU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__shift_left))),6);
    bufp->fullIData(oldp+61307,((0x7fffffU & (IData)(
                                                     (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_21 
                                                      >> 0x19U)))),23);
    bufp->fullCData(oldp+61308,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__exp_out),8);
    bufp->fullBit(oldp+61309,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_23) 
                                     >> 8U))));
    bufp->fullIData(oldp+61310,((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__inf_out) 
                                  | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__ovf0))
                                  ? 0U : (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__max_num) 
                                           | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_46))
                                           ? 0x7fffffU
                                           : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__fract_out_rnd))),23);
    bufp->fullIData(oldp+61311,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__fract_out_rnd),23);
    bufp->fullSData(oldp+61312,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__exp_next_mi),9);
    bufp->fullBit(oldp+61313,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__dn));
    bufp->fullCData(oldp+61314,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__exp_out_final),8);
    bufp->fullCData(oldp+61315,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__exp_out_rnd),8);
    bufp->fullBit(oldp+61316,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__op_dn));
    bufp->fullBit(oldp+61317,((2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fpu_op_r3))));
    bufp->fullBit(oldp+61318,((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fpu_op_r3))));
    bufp->fullBit(oldp+61319,((4U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fpu_op_r3))));
    bufp->fullBit(oldp+61320,((5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fpu_op_r3))));
    bufp->fullCData(oldp+61321,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__u6__DOT__fi_ldz_r0),6);
    bufp->fullBit(oldp+61322,((1U & (IData)((vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_21 
                                             >> 0x19U)))));
    bufp->fullBit(oldp+61323,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__r));
    bufp->fullBit(oldp+61324,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__s));
    bufp->fullBit(oldp+61325,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_27) 
                               | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__r) 
                                  & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__s)))));
    bufp->fullBit(oldp+61326,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_37)
                                ? ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__sign)) 
                                   & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_30) 
                                      | (3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fpu_op_r3))))
                                : ((5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fpu_op_r3))
                                    ? ((2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__rmode_r3)) 
                                       & (((0U != (0xfU 
                                                   & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                           & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opas_r2)) 
                                              & (0x80U 
                                                 > (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r)))) 
                                          | (0U != 
                                             (0x1ffffffU 
                                              & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_21)))))
                                    : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_30) 
                                       & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__sign)) 
                                          & ((~ ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__exp_out) 
                                                 >> 7U)) 
                                             | (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__exp_out) 
                                                 >> 7U) 
                                                & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__exp_out_fe)) 
                                                   | ((~ (IData)(
                                                                 (0x7fffffU 
                                                                  == 
                                                                  (0x7fffffU 
                                                                   & (IData)(
                                                                             (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_21 
                                                                              >> 0x19U)))))) 
                                                      | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__exp_out_fe) 
                                                         & (0xfffffe000000ULL 
                                                            == 
                                                            (0xfffffe000000ULL 
                                                             & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_21)))))))))))));
    bufp->fullBit(oldp+61327,((1U & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__exp_out_fe)) 
                                     | ((~ (IData)(
                                                   (0x7fffffU 
                                                    == 
                                                    (0x7fffffU 
                                                     & (IData)(
                                                               (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_21 
                                                                >> 0x19U)))))) 
                                        | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__exp_out_fe) 
                                           & (0xfffffe000000ULL 
                                              == (0xfffffe000000ULL 
                                                  & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_21))))))));
    bufp->fullBit(oldp+61328,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_30) 
                               & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__sign)) 
                                  & ((~ ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__exp_out) 
                                         >> 7U)) | 
                                     (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__exp_out) 
                                       >> 7U) & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__exp_out_fe)) 
                                                 | ((~ (IData)(
                                                               (0x7fffffU 
                                                                == 
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_21 
                                                                            >> 0x19U)))))) 
                                                    | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__exp_out_fe) 
                                                       & (0xfffffe000000ULL 
                                                          == 
                                                          (0xfffffe000000ULL 
                                                           & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_21)))))))))));
    bufp->fullBit(oldp+61329,(((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__sign)) 
                               & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_30) 
                                  | (3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fpu_op_r3))))));
    bufp->fullCData(oldp+61330,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__exp_out) 
                                          + (1U & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_55 
                                                   >> 0x17U))))),8);
    bufp->fullCData(oldp+61331,((0xffU & (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_27) 
                                           & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__s) 
                                              & (0xffU 
                                                 == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r))))
                                           ? ((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fpu_op_r3))
                                               ? ((0x16U 
                                                   < (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__u6__DOT__fi_ldz_r0))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r) 
                                                   - 
                                                   (0x3fU 
                                                    & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                                       - (IData)(0x16U))))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r) 
                                                   - 
                                                   (0x3fU 
                                                    & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                                       - (IData)(1U)))))
                                               : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__exp_next_mi))
                                           : (((5U 
                                                != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fpu_op_r3)) 
                                               & (0xffU 
                                                  == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__exp_out)))
                                               ? (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r)
                                               : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__exp_out))))),8);
    bufp->fullCData(oldp+61332,((((5U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fpu_op_r3)) 
                                  & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_38))
                                  ? 0xfeU : (0xffU 
                                             & ((0x800000U 
                                                 & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_54)
                                                 ? 
                                                ((IData)(1U) 
                                                 + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__exp_out))
                                                 : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__exp_out))))),8);
    bufp->fullCData(oldp+61333,((0xffU & ((0x800000U 
                                           & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_54)
                                           ? ((IData)(1U) 
                                              + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__exp_out))
                                           : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__exp_out)))),8);
    bufp->fullIData(oldp+61334,((0x7fffffU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_55)),23);
    bufp->fullIData(oldp+61335,((((3U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fpu_op_r3)) 
                                  & ((0xffU == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__exp_out)) 
                                     & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_53)))
                                  ? 0x7fffffU : (0x7fffffU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_21 
                                                            >> 0x19U))))),23);
    bufp->fullIData(oldp+61336,((((3U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fpu_op_r3)) 
                                  & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_38) 
                                     & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_53)))
                                  ? 0x7fffffU : (0x7fffffU 
                                                 & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_54))),23);
    bufp->fullIData(oldp+61337,((0x7fffffU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_54)),23);
    bufp->fullBit(oldp+61338,((1U & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_55 
                                     >> 0x17U))));
    bufp->fullBit(oldp+61339,((1U & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_54 
                                     >> 0x17U))));
    bufp->fullBit(oldp+61340,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__ovf0));
    bufp->fullBit(oldp+61341,(((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__dn)) 
                               & (0xffU == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__exp_out)))));
    bufp->fullIData(oldp+61342,((0xffffffU & ((IData)(1U) 
                                              + (0x7fffffU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_21 
                                                            >> 0x19U)))))),24);
    bufp->fullCData(oldp+61343,((0xffU & ((IData)(1U) 
                                          + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__exp_out)))),8);
    bufp->fullCData(oldp+61344,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__exp_out) 
                                          - (IData)(1U)))),8);
    bufp->fullBit(oldp+61345,((1U & (~ (IData)((0U 
                                                != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__exp_out)))))));
    bufp->fullBit(oldp+61346,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__exp_out_fe));
    bufp->fullBit(oldp+61347,((0xffU == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__exp_out))));
    bufp->fullBit(oldp+61348,((1U & (~ (IData)((0U 
                                                != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r)))))));
    bufp->fullBit(oldp+61349,((0xffU == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r))));
    bufp->fullBit(oldp+61350,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_51) 
                               | ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__max_num)) 
                                  & (0xffU == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__exp_out_rnd))))));
    bufp->fullBit(oldp+61351,((0x7fffffU == (0x7fffffU 
                                             & (IData)(
                                                       (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_21 
                                                        >> 0x19U))))));
    bufp->fullIData(oldp+61352,((0x1ffffffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_21))),25);
    bufp->fullCData(oldp+61353,((0xffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_23))),8);
    bufp->fullBit(oldp+61354,((1U & (~ (IData)((0U 
                                                != 
                                                (0x7fffffU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_21 
                                                            >> 0x19U)))))))));
    bufp->fullBit(oldp+61355,((1U & (~ (IData)((0U 
                                                != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q))))));
    bufp->fullBit(oldp+61356,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_14) 
                                     >> 8U))));
    bufp->fullSData(oldp+61357,((0x1ffU & ((IData)(1U) 
                                           + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r)))),9);
    bufp->fullSData(oldp+61358,((0x1ffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r) 
                                           - (IData)(1U)))),9);
    bufp->fullQData(oldp+61359,(((0U != (3U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__shift_right) 
                                               >> 6U)))
                                  ? 0ULL : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__fract_in_shftr_1)),48);
    bufp->fullQData(oldp+61361,((((0U != (3U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__shift_left) 
                                                >> 6U))) 
                                  | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__f2i_zero) 
                                     & (5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fpu_op_r3))))
                                  ? 0ULL : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__fract_in_shftl_1)),48);
    bufp->fullQData(oldp+61363,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__fract_in_shftr_1),48);
    bufp->fullQData(oldp+61365,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__fract_in_shftl_1),48);
    bufp->fullCData(oldp+61367,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__exp_div),8);
    bufp->fullCData(oldp+61368,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_23) 
                                          - (IData)(1U)))),8);
    bufp->fullBit(oldp+61369,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__div_dn));
    bufp->fullBit(oldp+61370,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__grs_sel_div));
    bufp->fullBit(oldp+61371,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__div_inf));
    bufp->fullCData(oldp+61372,((0x7fU & ((IData)(0x17U) 
                                          - (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__u6__DOT__fi_ldz_r0)))),7);
    bufp->fullCData(oldp+61373,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__fi_ldz_2),8);
    bufp->fullCData(oldp+61374,((0xffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_70))),8);
    bufp->fullCData(oldp+61375,((0xffU & ((IData)(2U) 
                                          + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r)))),8);
    bufp->fullCData(oldp+61376,((0xffU & (- (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r)))),8);
    bufp->fullBit(oldp+61377,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_70) 
                                     >> 8U))));
    bufp->fullSData(oldp+61378,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__div_exp1),9);
    bufp->fullCData(oldp+61379,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__div_exp2),8);
    bufp->fullCData(oldp+61380,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r) 
                                          + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__fi_ldz_2)))),8);
    bufp->fullBit(oldp+61381,((1U & ((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fpu_op_r3))
                                      ? (~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__div_dn))
                                      : ((2U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fpu_op_r3)) 
                                         | ((0U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r)) 
                                            | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_62)))))));
    bufp->fullBit(oldp+61382,(((0U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r)) 
                               | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_62))));
    bufp->fullBit(oldp+61383,((1U & (~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__div_dn)))));
    bufp->fullCData(oldp+61384,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__shift_right),8);
    bufp->fullCData(oldp+61385,((0xffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_14))),8);
    bufp->fullCData(oldp+61386,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__div_dn)
                                           ? (- (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r))
                                           : ((IData)(2U) 
                                              + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r))))),8);
    bufp->fullCData(oldp+61387,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__shift_left),8);
    bufp->fullCData(oldp+61388,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_62)
                                           ? ((IData)(1U) 
                                              + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r))
                                           : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__u6__DOT__fi_ldz_r0)))),8);
    bufp->fullCData(oldp+61389,((0xffU & (((~ (IData)(
                                                      (0U 
                                                       != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__exp_out)))) 
                                           & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__op_dn))
                                           ? (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_70)
                                           : ((1U & 
                                               ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__op_dn)) 
                                                & (~ (IData)(
                                                             (0U 
                                                              != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__exp_out))))))
                                               ? (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r)
                                               : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__u6__DOT__fi_ldz_r0))))),8);
    bufp->fullCData(oldp+61390,((0xffU & ((1U & ((~ (IData)(
                                                            (0U 
                                                             != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__exp_out)))) 
                                                 | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__dn)))
                                           ? ((0U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r))
                                               ? ((IData)(1U) 
                                                  + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r))
                                               : 2U)
                                           : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__u6__DOT__fi_ldz_r0)))),8);
    bufp->fullCData(oldp+61391,((0xffU & ((0x16U < (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__u6__DOT__fi_ldz_r0))
                                           ? ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r) 
                                              - (0x3fU 
                                                 & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                                    - (IData)(0x16U))))
                                           : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r) 
                                              - (0x3fU 
                                                 & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                                    - (IData)(1U))))))),8);
    bufp->fullCData(oldp+61392,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r) 
                                          - (0x3fU 
                                             & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                                - (IData)(0x16U)))))),8);
    bufp->fullCData(oldp+61393,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r) 
                                          - (0x3fU 
                                             & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                                - (IData)(1U)))))),8);
    bufp->fullCData(oldp+61394,((0x3fU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                          - (IData)(1U)))),6);
    bufp->fullCData(oldp+61395,((0x3fU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                          - (IData)(0x16U)))),6);
    bufp->fullBit(oldp+61396,(((2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fpu_op_r3)) 
                               & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_23) 
                                  >> 8U))));
    bufp->fullCData(oldp+61397,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__u6__DOT__fi_ldz_r0),7);
    bufp->fullSData(oldp+61398,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r),9);
    bufp->fullCData(oldp+61399,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r) 
                                          - (IData)(0x7dU)))),8);
    bufp->fullQData(oldp+61400,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__Vcellout__u3__shift_out),56);
    bufp->fullBit(oldp+61402,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__f2i_zero));
    bufp->fullBit(oldp+61403,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__f2i_max));
    bufp->fullCData(oldp+61404,(((0U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__rmode_r3))
                                  ? 0x7eU : 0x7fU)),8);
    bufp->fullCData(oldp+61405,((0xffU & ((5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fpu_op_r3))
                                           ? ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r) 
                                              - (IData)(0x7dU))
                                           : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__u6__DOT__fi_ldz_r0)))),8);
    bufp->fullCData(oldp+61406,((0xffU & ((0U != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)
                                           ? ((IData)(0x9eU) 
                                              - (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__u6__DOT__fi_ldz_r0))
                                           : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opas_r2)
                                               ? 0x9eU
                                               : 0U)))),8);
    bufp->fullCData(oldp+61407,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__f2i_zero)
                                  ? 0U : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__f2i_max)
                                           ? 0xffU : 0U))),8);
    bufp->fullCData(oldp+61408,((0xffU & ((5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fpu_op_r3))
                                           ? ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__f2i_zero)
                                               ? 0U
                                               : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__f2i_max)
                                                   ? 0xffU
                                                   : 0U))
                                           : ((0U != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)
                                               ? ((IData)(0x9eU) 
                                                  - (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__u6__DOT__fi_ldz_r0))
                                               : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opas_r2)
                                                   ? 0x9eU
                                                   : 0U))))),8);
    bufp->fullBit(oldp+61409,(((2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__rmode_r3)) 
                               & (((0U != (0xfU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                   & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opas_r2)) 
                                      & (0x80U > (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r)))) 
                                  | (0U != (0x1ffffffU 
                                            & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_21)))))));
    bufp->fullBit(oldp+61410,((IData)((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r) 
                                        >> 7U) & (~ (IData)(
                                                            (0U 
                                                             != 
                                                             (0x7fU 
                                                              & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r)))))))));
    bufp->fullBit(oldp+61411,((0U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__rmode_r3))));
    bufp->fullBit(oldp+61412,((1U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__rmode_r3))));
    bufp->fullBit(oldp+61413,((2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__rmode_r3))));
    bufp->fullBit(oldp+61414,((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__rmode_r3))));
    bufp->fullBit(oldp+61415,((0U != (0xfU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q))));
    bufp->fullBit(oldp+61416,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__max_num));
    bufp->fullBit(oldp+61417,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__inf_out));
    bufp->fullBit(oldp+61418,(((0U != (0x1ffffffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_21))) 
                               & ((~ (IData)((0xffU 
                                              == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r)))) 
                                  & (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_14) 
                                      >> 8U) | ((~ (IData)(
                                                           (0U 
                                                            != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r)))) 
                                                | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_63)))))));
    bufp->fullBit(oldp+61419,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__inf_out) 
                               | (((0U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__rmode_r3)) 
                                   & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__max_num)) 
                                  | (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r) 
                                      >> 7U) & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__op_dn) 
                                                & (0xffU 
                                                   == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__exp_out))))))));
    bufp->fullBit(oldp+61420,(((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__inf_out)) 
                               & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__max_num)) 
                                  & ((0xffU != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__exp_out_final)) 
                                     & (((0U != (0x1ffffffU 
                                                 & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_21))) 
                                         & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opb_dn)) 
                                            & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__div_dn) 
                                               | (~ (IData)(
                                                            (0U 
                                                             != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__exp_out))))))) 
                                        | (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__op_dn) 
                                            & ((~ (IData)(
                                                          (0U 
                                                           != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__exp_out)))) 
                                               & (0x17U 
                                                  > (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__u6__DOT__fi_ldz_r0)))) 
                                           | ((~ (IData)(
                                                         (0U 
                                                          != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r)))) 
                                              | ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__op_dn)) 
                                                 & ((0x17U 
                                                     > (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__u6__DOT__fi_ldz_r0)) 
                                                    & ((1U 
                                                        == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r)) 
                                                       & (~ (IData)(
                                                                    (0U 
                                                                     != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__exp_out)))))))))))))));
    bufp->fullBit(oldp+61421,((1U & (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_14) 
                                      >> 8U) | ((~ (IData)(
                                                           (0U 
                                                            != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r)))) 
                                                | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_63))))));
    bufp->fullBit(oldp+61422,((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__f2i_zero) 
                                & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opas_r2)) 
                                   & (0U != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q))) 
                               | ((0U != (0x1ffffffU 
                                          & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_21))) 
                                  | (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__f2i_zero) 
                                      & ((0x80U > (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r)) 
                                         & ((0U != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q) 
                                            & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opas_r2)))) 
                                     | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__f2i_max) 
                                        & ((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__rmode_r3)) 
                                           & (0x80U 
                                              > (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r)))))))));
    bufp->fullCData(oldp+61423,((0x3fU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__shift_right))),6);
    bufp->fullCData(oldp+61424,((0x3fU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r) 
                                          - (IData)(0x3dU)))),6);
    bufp->fullQData(oldp+61425,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__Vcellout__u3__shift_out),48);
    bufp->fullCData(oldp+61427,((0x3fU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__shift_left))),6);
    bufp->fullIData(oldp+61428,((0x7fffffU & (IData)(
                                                     (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_21 
                                                      >> 0x19U)))),23);
    bufp->fullCData(oldp+61429,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__exp_out),8);
    bufp->fullBit(oldp+61430,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_23) 
                                     >> 8U))));
    bufp->fullIData(oldp+61431,((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__inf_out) 
                                  | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__ovf0) 
                                     | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__or_result)))
                                  ? 0U : (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__max_num) 
                                           | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_46))
                                           ? 0x7fffffU
                                           : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__fract_out_rnd))),23);
    bufp->fullIData(oldp+61432,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__fract_out_rnd),23);
    bufp->fullSData(oldp+61433,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__exp_next_mi),9);
    bufp->fullBit(oldp+61434,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__dn));
    bufp->fullCData(oldp+61435,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__exp_out_final),8);
    bufp->fullCData(oldp+61436,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__exp_out_rnd),8);
    bufp->fullBit(oldp+61437,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__op_dn));
    bufp->fullBit(oldp+61438,((2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fpu_op_r3))));
    bufp->fullBit(oldp+61439,((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fpu_op_r3))));
    bufp->fullBit(oldp+61440,((4U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fpu_op_r3))));
    bufp->fullBit(oldp+61441,((5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fpu_op_r3))));
    bufp->fullCData(oldp+61442,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__u6__DOT__fi_ldz_r0),6);
    bufp->fullBit(oldp+61443,((1U & (IData)((vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_21 
                                             >> 0x19U)))));
    bufp->fullBit(oldp+61444,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__r));
    bufp->fullBit(oldp+61445,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__s));
    bufp->fullBit(oldp+61446,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_27) 
                               | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__r) 
                                  & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__s)))));
    bufp->fullBit(oldp+61447,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_37)
                                ? ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__sign)) 
                                   & ((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_ovf_r) 
                                        >> 1U) & ((0U 
                                                   != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm) 
                                                  & ((((~ 
                                                        ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_23) 
                                                         >> 8U)) 
                                                       | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__op_dn)) 
                                                      & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_35)) 
                                                     | ((~ (IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0x7fffffU 
                                                                     & (IData)(
                                                                               (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_21 
                                                                                >> 0x19U)))))) 
                                                        | ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__op_dn)) 
                                                           & (3U 
                                                              != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fpu_op_r3))))))) 
                                      | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_35) 
                                         & (((~ ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_ovf_r) 
                                                 >> 1U)) 
                                             & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_ovf_r)) 
                                                | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__exp_in_80))) 
                                            | ((3U 
                                                == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fpu_op_r3)) 
                                               | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_59) 
                                                  & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_23) 
                                                     >> 8U)))))))
                                : ((5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fpu_op_r3))
                                    ? ((2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__rmode_r3)) 
                                       & (((0U != (0xffffffU 
                                                   & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm))) 
                                           & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__opas_r2)) 
                                              & (0x80U 
                                                 > (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r)))) 
                                          | (0U != 
                                             (0x1ffffffU 
                                              & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_21)))))
                                    : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_30) 
                                       & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__sign)) 
                                          & ((~ ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__exp_out) 
                                                 >> 7U)) 
                                             | (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__exp_out) 
                                                 >> 7U) 
                                                & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__exp_out_fe)) 
                                                   | ((~ (IData)(
                                                                 (0x7fffffU 
                                                                  == 
                                                                  (0x7fffffU 
                                                                   & (IData)(
                                                                             (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_21 
                                                                              >> 0x19U)))))) 
                                                      | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__exp_out_fe) 
                                                         & (0xfffffe000000ULL 
                                                            == 
                                                            (0xfffffe000000ULL 
                                                             & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_21)))))))))))));
    bufp->fullBit(oldp+61448,((1U & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__exp_out_fe)) 
                                     | ((~ (IData)(
                                                   (0x7fffffU 
                                                    == 
                                                    (0x7fffffU 
                                                     & (IData)(
                                                               (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_21 
                                                                >> 0x19U)))))) 
                                        | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__exp_out_fe) 
                                           & (0xfffffe000000ULL 
                                              == (0xfffffe000000ULL 
                                                  & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_21))))))));
    bufp->fullBit(oldp+61449,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_30) 
                               & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__sign)) 
                                  & ((~ ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__exp_out) 
                                         >> 7U)) | 
                                     (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__exp_out) 
                                       >> 7U) & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__exp_out_fe)) 
                                                 | ((~ (IData)(
                                                               (0x7fffffU 
                                                                == 
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_21 
                                                                            >> 0x19U)))))) 
                                                    | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__exp_out_fe) 
                                                       & (0xfffffe000000ULL 
                                                          == 
                                                          (0xfffffe000000ULL 
                                                           & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_21)))))))))));
    bufp->fullBit(oldp+61450,(((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__sign)) 
                               & ((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_ovf_r) 
                                    >> 1U) & ((0U != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm) 
                                              & ((((~ 
                                                    ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_23) 
                                                     >> 8U)) 
                                                   | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__op_dn)) 
                                                  & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_35)) 
                                                 | ((~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_21 
                                                                            >> 0x19U)))))) 
                                                    | ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__op_dn)) 
                                                       & (3U 
                                                          != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fpu_op_r3))))))) 
                                  | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_35) 
                                     & (((~ ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_ovf_r) 
                                             >> 1U)) 
                                         & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_ovf_r)) 
                                            | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__exp_in_80))) 
                                        | ((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fpu_op_r3)) 
                                           | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_59) 
                                              & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_23) 
                                                 >> 8U)))))))));
    bufp->fullCData(oldp+61451,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__exp_out) 
                                          + (1U & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_55 
                                                   >> 0x17U))))),8);
    bufp->fullCData(oldp+61452,((0xffU & (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_27) 
                                           & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__s) 
                                              & (0xffU 
                                                 == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r))))
                                           ? ((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fpu_op_r3))
                                               ? ((0x16U 
                                                   < (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__u6__DOT__fi_ldz_r0))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r) 
                                                   - 
                                                   (0x3fU 
                                                    & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                                       - (IData)(0x16U))))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r) 
                                                   - 
                                                   (0x3fU 
                                                    & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                                       - (IData)(1U)))))
                                               : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__exp_next_mi))
                                           : (((5U 
                                                != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fpu_op_r3)) 
                                               & (0xffU 
                                                  == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__exp_out)))
                                               ? (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r)
                                               : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__exp_out))))),8);
    bufp->fullCData(oldp+61453,((((5U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fpu_op_r3)) 
                                  & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_38))
                                  ? 0xfeU : (0xffU 
                                             & ((0x800000U 
                                                 & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_54)
                                                 ? 
                                                ((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_ovf_r) 
                                                   >> 1U) 
                                                  & (2U 
                                                     == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fpu_op_r3)))
                                                  ? 
                                                 ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__exp_out) 
                                                  - (IData)(1U))
                                                  : 
                                                 ((IData)(1U) 
                                                  + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__exp_out)))
                                                 : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__exp_out))))),8);
    bufp->fullCData(oldp+61454,((0xffU & ((0x800000U 
                                           & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_54)
                                           ? ((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_ovf_r) 
                                                >> 1U) 
                                               & (2U 
                                                  == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fpu_op_r3)))
                                               ? ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__exp_out) 
                                                  - (IData)(1U))
                                               : ((IData)(1U) 
                                                  + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__exp_out)))
                                           : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__exp_out)))),8);
    bufp->fullIData(oldp+61455,((0x7fffffU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_55)),23);
    bufp->fullIData(oldp+61456,((((3U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fpu_op_r3)) 
                                  & ((0xffU == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__exp_out)) 
                                     & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_53)))
                                  ? 0x7fffffU : (0x7fffffU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_21 
                                                            >> 0x19U))))),23);
    bufp->fullIData(oldp+61457,((((3U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fpu_op_r3)) 
                                  & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_38) 
                                     & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_53)))
                                  ? 0x7fffffU : (0x7fffffU 
                                                 & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_54))),23);
    bufp->fullIData(oldp+61458,((0x7fffffU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_54)),23);
    bufp->fullBit(oldp+61459,((1U & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_55 
                                     >> 0x17U))));
    bufp->fullBit(oldp+61460,((1U & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_54 
                                     >> 0x17U))));
    bufp->fullBit(oldp+61461,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__ovf0));
    bufp->fullBit(oldp+61462,(((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__dn)) 
                               & (0xffU == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__exp_out)))));
    bufp->fullIData(oldp+61463,((0xffffffU & ((IData)(1U) 
                                              + (0x7fffffU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_21 
                                                            >> 0x19U)))))),24);
    bufp->fullCData(oldp+61464,((0xffU & ((IData)(1U) 
                                          + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__exp_out)))),8);
    bufp->fullCData(oldp+61465,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__exp_out) 
                                          - (IData)(1U)))),8);
    bufp->fullBit(oldp+61466,((1U & (~ (IData)((0U 
                                                != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__exp_out)))))));
    bufp->fullBit(oldp+61467,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__exp_out_fe));
    bufp->fullBit(oldp+61468,((0xffU == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__exp_out))));
    bufp->fullBit(oldp+61469,((1U & (~ (IData)((0U 
                                                != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r)))))));
    bufp->fullBit(oldp+61470,((0xffU == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r))));
    bufp->fullBit(oldp+61471,(((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_48)) 
                               & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_51) 
                                  | ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__max_num)) 
                                     & (0xffU == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__exp_out_rnd)))))));
    bufp->fullBit(oldp+61472,((0x7fffffU == (0x7fffffU 
                                             & (IData)(
                                                       (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_21 
                                                        >> 0x19U))))));
    bufp->fullIData(oldp+61473,((0x1ffffffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_21))),25);
    bufp->fullCData(oldp+61474,((0xffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_23))),8);
    bufp->fullBit(oldp+61475,((1U & (~ (IData)((0U 
                                                != 
                                                (0x7fffffU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_21 
                                                            >> 0x19U)))))))));
    bufp->fullBit(oldp+61476,((1U & (~ (IData)((0U 
                                                != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm))))));
    bufp->fullBit(oldp+61477,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_14) 
                                     >> 8U))));
    bufp->fullSData(oldp+61478,((0x1ffU & ((IData)(1U) 
                                           + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r)))),9);
    bufp->fullSData(oldp+61479,((0x1ffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r) 
                                           - (IData)(1U)))),9);
    bufp->fullQData(oldp+61480,(((0U != (3U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__shift_right) 
                                               >> 6U)))
                                  ? 0ULL : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__fract_in_shftr_1)),48);
    bufp->fullQData(oldp+61482,((((0U != (3U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__shift_left) 
                                                >> 6U))) 
                                  | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__f2i_zero) 
                                     & (5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fpu_op_r3))))
                                  ? 0ULL : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__fract_in_shftl_1)),48);
    bufp->fullQData(oldp+61484,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__fract_in_shftr_1),48);
    bufp->fullQData(oldp+61486,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__fract_in_shftl_1),48);
    bufp->fullCData(oldp+61488,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__exp_div),8);
    bufp->fullCData(oldp+61489,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_23) 
                                          - (IData)(1U)))),8);
    bufp->fullBit(oldp+61490,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__div_dn));
    bufp->fullBit(oldp+61491,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_15) 
                               & ((~ (IData)((0U != 
                                              (0xffffffU 
                                               & (IData)(
                                                         (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm 
                                                          >> 0x17U)))))) 
                                  & (0x16U < (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r))))));
    bufp->fullBit(oldp+61492,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__grs_sel_div));
    bufp->fullBit(oldp+61493,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__div_inf));
    bufp->fullCData(oldp+61494,((0x7fU & ((IData)(0x17U) 
                                          - (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__u6__DOT__fi_ldz_r0)))),7);
    bufp->fullCData(oldp+61495,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__fi_ldz_2),8);
    bufp->fullCData(oldp+61496,((0xffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_70))),8);
    bufp->fullCData(oldp+61497,((0xffU & ((IData)(2U) 
                                          + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r)))),8);
    bufp->fullCData(oldp+61498,((0xffU & (- (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r)))),8);
    bufp->fullBit(oldp+61499,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_70) 
                                     >> 8U))));
    bufp->fullSData(oldp+61500,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__div_exp1),9);
    bufp->fullCData(oldp+61501,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__div_exp2),8);
    bufp->fullCData(oldp+61502,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r) 
                                          + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__fi_ldz_2)))),8);
    bufp->fullBit(oldp+61503,((1U & ((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fpu_op_r3))
                                      ? ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_67) 
                                         | ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_15)) 
                                            & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__div_dn)) 
                                               & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_66) 
                                                  | ((~ 
                                                      ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_ovf_r) 
                                                       >> 1U)) 
                                                     | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_65))))))
                                      : ((2U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fpu_op_r3)) 
                                         | ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_61)) 
                                            | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_62)))))));
    bufp->fullBit(oldp+61504,((1U & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_61)) 
                                     | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_62)))));
    bufp->fullBit(oldp+61505,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_67) 
                                     | ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_15)) 
                                        & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__div_dn)) 
                                           & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_66) 
                                              | ((~ 
                                                  ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_ovf_r) 
                                                   >> 1U)) 
                                                 | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_65)))))))));
    bufp->fullCData(oldp+61506,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__shift_right),8);
    bufp->fullCData(oldp+61507,((0xffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_14))),8);
    bufp->fullCData(oldp+61508,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_15)
                                           ? (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r)
                                           : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__div_dn)
                                               ? (- (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r))
                                               : ((IData)(2U) 
                                                  + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r)))))),8);
    bufp->fullCData(oldp+61509,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__shift_left),8);
    bufp->fullCData(oldp+61510,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_62)
                                           ? ((IData)(1U) 
                                              + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r))
                                           : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__u6__DOT__fi_ldz_r0)))),8);
    bufp->fullCData(oldp+61511,((0xffU & (((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_20)) 
                                           & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_66))
                                           ? (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_70)
                                           : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_65)
                                               ? (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r)
                                               : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__u6__DOT__fi_ldz_r0))))),8);
    bufp->fullCData(oldp+61512,((0xffU & ((1U & ((~ (IData)(
                                                            (0U 
                                                             != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__exp_out)))) 
                                                 | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__dn)))
                                           ? ((0U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r))
                                               ? ((IData)(1U) 
                                                  + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r))
                                               : 2U)
                                           : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__u6__DOT__fi_ldz_r0)))),8);
    bufp->fullCData(oldp+61513,((0xffU & ((0x16U < (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__u6__DOT__fi_ldz_r0))
                                           ? ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r) 
                                              - (0x3fU 
                                                 & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                                    - (IData)(0x16U))))
                                           : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r) 
                                              - (0x3fU 
                                                 & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                                    - (IData)(1U))))))),8);
    bufp->fullCData(oldp+61514,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r) 
                                          - (0x3fU 
                                             & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                                - (IData)(0x16U)))))),8);
    bufp->fullCData(oldp+61515,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r) 
                                          - (0x3fU 
                                             & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                                - (IData)(1U)))))),8);
    bufp->fullCData(oldp+61516,((0x3fU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                          - (IData)(1U)))),6);
    bufp->fullCData(oldp+61517,((0x3fU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                          - (IData)(0x16U)))),6);
    bufp->fullBit(oldp+61518,((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_59) 
                                & (2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fpu_op_r3))) 
                               | ((2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fpu_op_r3)) 
                                  & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_23) 
                                     >> 8U)))));
    bufp->fullCData(oldp+61519,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__u6__DOT__fi_ldz_r0),7);
    bufp->fullSData(oldp+61520,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r),9);
    bufp->fullCData(oldp+61521,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r) 
                                          - (IData)(0x7dU)))),8);
    bufp->fullQData(oldp+61522,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__Vcellout__u3__shift_out),56);
    bufp->fullBit(oldp+61524,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__f2i_zero));
    bufp->fullBit(oldp+61525,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__f2i_max));
    bufp->fullCData(oldp+61526,(((0U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__rmode_r3))
                                  ? 0x7eU : 0x7fU)),8);
    bufp->fullCData(oldp+61527,((0xffU & ((5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fpu_op_r3))
                                           ? ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r) 
                                              - (IData)(0x7dU))
                                           : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__u6__DOT__fi_ldz_r0)))),8);
    bufp->fullCData(oldp+61528,((0xffU & ((0U != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm)
                                           ? ((IData)(0x9eU) 
                                              - (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__u6__DOT__fi_ldz_r0))
                                           : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__opas_r2)
                                               ? 0x9eU
                                               : 0U)))),8);
    bufp->fullCData(oldp+61529,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__f2i_zero)
                                  ? 0U : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__f2i_max)
                                           ? 0xffU : 0U))),8);
    bufp->fullCData(oldp+61530,((0xffU & ((5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fpu_op_r3))
                                           ? ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__f2i_zero)
                                               ? 0U
                                               : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__f2i_max)
                                                   ? 0xffU
                                                   : 0U))
                                           : ((0U != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm)
                                               ? ((IData)(0x9eU) 
                                                  - (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__u6__DOT__fi_ldz_r0))
                                               : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__opas_r2)
                                                   ? 0x9eU
                                                   : 0U))))),8);
    bufp->fullBit(oldp+61531,(((2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__rmode_r3)) 
                               & (((0U != (0xffffffU 
                                           & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm))) 
                                   & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__opas_r2)) 
                                      & (0x80U > (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r)))) 
                                  | (0U != (0x1ffffffU 
                                            & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_21)))))));
    bufp->fullBit(oldp+61532,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__exp_in_80));
    bufp->fullBit(oldp+61533,((0U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__rmode_r3))));
    bufp->fullBit(oldp+61534,((1U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__rmode_r3))));
    bufp->fullBit(oldp+61535,((2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__rmode_r3))));
    bufp->fullBit(oldp+61536,((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__rmode_r3))));
    bufp->fullBit(oldp+61537,((0U != (0xffffffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm)))));
    bufp->fullBit(oldp+61538,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__max_num));
    bufp->fullBit(oldp+61539,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__inf_out));
    bufp->fullBit(oldp+61540,((((0U != (0x1ffffffU 
                                        & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_21))) 
                                & ((~ (IData)((0xffU 
                                               == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r)))) 
                                   & (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_14) 
                                       >> 8U) | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_61) 
                                                 | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_63))))) 
                               | ((~ (IData)((0U != 
                                              (0x7fffffU 
                                               & (IData)(
                                                         (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_21 
                                                          >> 0x19U)))))) 
                                  & ((0U != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm) 
                                     & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_ovf_r) 
                                        >> 1U))))));
    bufp->fullBit(oldp+61541,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__inf_out) 
                                     | (((0U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__rmode_r3)) 
                                         & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__max_num)) 
                                        | ((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r) 
                                             >> 7U) 
                                            & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__op_dn) 
                                               & (0xffU 
                                                  == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__exp_out)))) 
                                           | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_ovf_r) 
                                              & (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_ovf_r) 
                                                  >> 1U) 
                                                 | (0xffU 
                                                    == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__exp_out))))))))));
    bufp->fullBit(oldp+61542,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__undeflow_div));
    bufp->fullBit(oldp+61543,((IData)(((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_14) 
                                         >> 8U) | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_61)) 
                                       | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_63)))));
    bufp->fullBit(oldp+61544,((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__f2i_zero) 
                                & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__opas_r2)) 
                                   & (0U != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm))) 
                               | ((0U != (0x1ffffffU 
                                          & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_21))) 
                                  | (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__f2i_zero) 
                                      & ((0x80U > (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r)) 
                                         & ((0U != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm) 
                                            & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__opas_r2)))) 
                                     | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__f2i_max) 
                                        & ((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__rmode_r3)) 
                                           & (0x80U 
                                              > (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r)))))))));
    bufp->fullCData(oldp+61545,((0x3fU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__shift_right))),6);
    bufp->fullCData(oldp+61546,((0x3fU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r) 
                                          - (IData)(0x3dU)))),6);
    bufp->fullQData(oldp+61547,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__Vcellout__u3__shift_out),48);
    bufp->fullCData(oldp+61549,((0x3fU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__shift_left))),6);
    bufp->fullIData(oldp+61550,((0x7fffffU & (IData)(
                                                     (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_21 
                                                      >> 0x19U)))),23);
    bufp->fullCData(oldp+61551,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__exp_out),8);
    bufp->fullBit(oldp+61552,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_23) 
                                     >> 8U))));
    bufp->fullIData(oldp+61553,((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__inf_out) 
                                  | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__ovf0))
                                  ? 0U : (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__max_num) 
                                           | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_46))
                                           ? 0x7fffffU
                                           : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__fract_out_rnd))),23);
    bufp->fullIData(oldp+61554,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__fract_out_rnd),23);
    bufp->fullSData(oldp+61555,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__exp_next_mi),9);
    bufp->fullBit(oldp+61556,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__dn));
    bufp->fullCData(oldp+61557,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__exp_out_final),8);
    bufp->fullCData(oldp+61558,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__exp_out_rnd),8);
    bufp->fullBit(oldp+61559,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__op_dn));
    bufp->fullBit(oldp+61560,((2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fpu_op_r3))));
    bufp->fullBit(oldp+61561,((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fpu_op_r3))));
    bufp->fullBit(oldp+61562,((4U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fpu_op_r3))));
    bufp->fullBit(oldp+61563,((5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fpu_op_r3))));
    bufp->fullCData(oldp+61564,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__u6__DOT__fi_ldz_r0),6);
    bufp->fullBit(oldp+61565,((1U & (IData)((vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_21 
                                             >> 0x19U)))));
    bufp->fullBit(oldp+61566,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__r));
    bufp->fullBit(oldp+61567,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__s));
    bufp->fullBit(oldp+61568,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_27) 
                               | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__r) 
                                  & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__s)))));
    bufp->fullBit(oldp+61569,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_37)
                                ? ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__sign)) 
                                   & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_30) 
                                      | (3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fpu_op_r3))))
                                : ((5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fpu_op_r3))
                                    ? ((2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__rmode_r3)) 
                                       & (((0U != (0xfU 
                                                   & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                           & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opas_r2)) 
                                              & (0x80U 
                                                 > (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r)))) 
                                          | (0U != 
                                             (0x1ffffffU 
                                              & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_21)))))
                                    : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_30) 
                                       & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__sign)) 
                                          & ((~ ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__exp_out) 
                                                 >> 7U)) 
                                             | (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__exp_out) 
                                                 >> 7U) 
                                                & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__exp_out_fe)) 
                                                   | ((~ (IData)(
                                                                 (0x7fffffU 
                                                                  == 
                                                                  (0x7fffffU 
                                                                   & (IData)(
                                                                             (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_21 
                                                                              >> 0x19U)))))) 
                                                      | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__exp_out_fe) 
                                                         & (0xfffffe000000ULL 
                                                            == 
                                                            (0xfffffe000000ULL 
                                                             & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_21)))))))))))));
    bufp->fullBit(oldp+61570,((1U & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__exp_out_fe)) 
                                     | ((~ (IData)(
                                                   (0x7fffffU 
                                                    == 
                                                    (0x7fffffU 
                                                     & (IData)(
                                                               (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_21 
                                                                >> 0x19U)))))) 
                                        | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__exp_out_fe) 
                                           & (0xfffffe000000ULL 
                                              == (0xfffffe000000ULL 
                                                  & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_21))))))));
    bufp->fullBit(oldp+61571,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_30) 
                               & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__sign)) 
                                  & ((~ ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__exp_out) 
                                         >> 7U)) | 
                                     (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__exp_out) 
                                       >> 7U) & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__exp_out_fe)) 
                                                 | ((~ (IData)(
                                                               (0x7fffffU 
                                                                == 
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_21 
                                                                            >> 0x19U)))))) 
                                                    | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__exp_out_fe) 
                                                       & (0xfffffe000000ULL 
                                                          == 
                                                          (0xfffffe000000ULL 
                                                           & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_21)))))))))));
    bufp->fullBit(oldp+61572,(((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__sign)) 
                               & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_30) 
                                  | (3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fpu_op_r3))))));
    bufp->fullCData(oldp+61573,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__exp_out) 
                                          + (1U & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_55 
                                                   >> 0x17U))))),8);
    bufp->fullCData(oldp+61574,((0xffU & (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_27) 
                                           & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__s) 
                                              & (0xffU 
                                                 == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r))))
                                           ? ((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fpu_op_r3))
                                               ? ((0x16U 
                                                   < (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__u6__DOT__fi_ldz_r0))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r) 
                                                   - 
                                                   (0x3fU 
                                                    & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                                       - (IData)(0x16U))))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r) 
                                                   - 
                                                   (0x3fU 
                                                    & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                                       - (IData)(1U)))))
                                               : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__exp_next_mi))
                                           : (((5U 
                                                != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fpu_op_r3)) 
                                               & (0xffU 
                                                  == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__exp_out)))
                                               ? (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r)
                                               : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__exp_out))))),8);
    bufp->fullCData(oldp+61575,((((5U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fpu_op_r3)) 
                                  & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_38))
                                  ? 0xfeU : (0xffU 
                                             & ((0x800000U 
                                                 & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_54)
                                                 ? 
                                                ((IData)(1U) 
                                                 + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__exp_out))
                                                 : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__exp_out))))),8);
    bufp->fullCData(oldp+61576,((0xffU & ((0x800000U 
                                           & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_54)
                                           ? ((IData)(1U) 
                                              + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__exp_out))
                                           : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__exp_out)))),8);
    bufp->fullIData(oldp+61577,((0x7fffffU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_55)),23);
    bufp->fullIData(oldp+61578,((((3U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fpu_op_r3)) 
                                  & ((0xffU == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__exp_out)) 
                                     & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_53)))
                                  ? 0x7fffffU : (0x7fffffU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_21 
                                                            >> 0x19U))))),23);
    bufp->fullIData(oldp+61579,((((3U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fpu_op_r3)) 
                                  & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_38) 
                                     & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_53)))
                                  ? 0x7fffffU : (0x7fffffU 
                                                 & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_54))),23);
    bufp->fullIData(oldp+61580,((0x7fffffU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_54)),23);
    bufp->fullBit(oldp+61581,((1U & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_55 
                                     >> 0x17U))));
    bufp->fullBit(oldp+61582,((1U & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_54 
                                     >> 0x17U))));
    bufp->fullBit(oldp+61583,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__ovf0));
    bufp->fullBit(oldp+61584,(((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__dn)) 
                               & (0xffU == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__exp_out)))));
    bufp->fullIData(oldp+61585,((0xffffffU & ((IData)(1U) 
                                              + (0x7fffffU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_21 
                                                            >> 0x19U)))))),24);
    bufp->fullCData(oldp+61586,((0xffU & ((IData)(1U) 
                                          + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__exp_out)))),8);
    bufp->fullCData(oldp+61587,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__exp_out) 
                                          - (IData)(1U)))),8);
    bufp->fullBit(oldp+61588,((1U & (~ (IData)((0U 
                                                != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__exp_out)))))));
    bufp->fullBit(oldp+61589,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__exp_out_fe));
    bufp->fullBit(oldp+61590,((0xffU == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__exp_out))));
    bufp->fullBit(oldp+61591,((1U & (~ (IData)((0U 
                                                != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r)))))));
    bufp->fullBit(oldp+61592,((0xffU == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r))));
    bufp->fullBit(oldp+61593,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_51) 
                               | ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__max_num)) 
                                  & (0xffU == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__exp_out_rnd))))));
    bufp->fullBit(oldp+61594,((0x7fffffU == (0x7fffffU 
                                             & (IData)(
                                                       (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_21 
                                                        >> 0x19U))))));
    bufp->fullIData(oldp+61595,((0x1ffffffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_21))),25);
    bufp->fullCData(oldp+61596,((0xffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_23))),8);
    bufp->fullBit(oldp+61597,((1U & (~ (IData)((0U 
                                                != 
                                                (0x7fffffU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_21 
                                                            >> 0x19U)))))))));
    bufp->fullBit(oldp+61598,((1U & (~ (IData)((0U 
                                                != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q))))));
    bufp->fullBit(oldp+61599,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_14) 
                                     >> 8U))));
    bufp->fullSData(oldp+61600,((0x1ffU & ((IData)(1U) 
                                           + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r)))),9);
    bufp->fullSData(oldp+61601,((0x1ffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r) 
                                           - (IData)(1U)))),9);
    bufp->fullQData(oldp+61602,(((0U != (3U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__shift_right) 
                                               >> 6U)))
                                  ? 0ULL : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__fract_in_shftr_1)),48);
    bufp->fullQData(oldp+61604,((((0U != (3U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__shift_left) 
                                                >> 6U))) 
                                  | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__f2i_zero) 
                                     & (5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fpu_op_r3))))
                                  ? 0ULL : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__fract_in_shftl_1)),48);
    bufp->fullQData(oldp+61606,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__fract_in_shftr_1),48);
    bufp->fullQData(oldp+61608,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__fract_in_shftl_1),48);
    bufp->fullCData(oldp+61610,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__exp_div),8);
    bufp->fullCData(oldp+61611,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_23) 
                                          - (IData)(1U)))),8);
    bufp->fullBit(oldp+61612,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__div_dn));
    bufp->fullBit(oldp+61613,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__grs_sel_div));
    bufp->fullBit(oldp+61614,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__div_inf));
    bufp->fullCData(oldp+61615,((0x7fU & ((IData)(0x17U) 
                                          - (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__u6__DOT__fi_ldz_r0)))),7);
    bufp->fullCData(oldp+61616,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__fi_ldz_2),8);
    bufp->fullCData(oldp+61617,((0xffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_70))),8);
    bufp->fullCData(oldp+61618,((0xffU & ((IData)(2U) 
                                          + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r)))),8);
    bufp->fullCData(oldp+61619,((0xffU & (- (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r)))),8);
    bufp->fullBit(oldp+61620,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_70) 
                                     >> 8U))));
    bufp->fullSData(oldp+61621,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__div_exp1),9);
    bufp->fullCData(oldp+61622,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__div_exp2),8);
    bufp->fullCData(oldp+61623,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r) 
                                          + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__fi_ldz_2)))),8);
    bufp->fullBit(oldp+61624,((1U & ((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fpu_op_r3))
                                      ? (~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__div_dn))
                                      : ((2U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fpu_op_r3)) 
                                         | ((0U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r)) 
                                            | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_62)))))));
    bufp->fullBit(oldp+61625,(((0U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r)) 
                               | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_62))));
    bufp->fullBit(oldp+61626,((1U & (~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__div_dn)))));
    bufp->fullCData(oldp+61627,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__shift_right),8);
    bufp->fullCData(oldp+61628,((0xffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_14))),8);
    bufp->fullCData(oldp+61629,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__div_dn)
                                           ? (- (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r))
                                           : ((IData)(2U) 
                                              + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r))))),8);
    bufp->fullCData(oldp+61630,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__shift_left),8);
    bufp->fullCData(oldp+61631,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_62)
                                           ? ((IData)(1U) 
                                              + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r))
                                           : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__u6__DOT__fi_ldz_r0)))),8);
    bufp->fullCData(oldp+61632,((0xffU & (((~ (IData)(
                                                      (0U 
                                                       != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__exp_out)))) 
                                           & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__op_dn))
                                           ? (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_70)
                                           : ((1U & 
                                               ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__op_dn)) 
                                                & (~ (IData)(
                                                             (0U 
                                                              != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__exp_out))))))
                                               ? (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r)
                                               : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__u6__DOT__fi_ldz_r0))))),8);
    bufp->fullCData(oldp+61633,((0xffU & ((1U & ((~ (IData)(
                                                            (0U 
                                                             != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__exp_out)))) 
                                                 | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__dn)))
                                           ? ((0U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r))
                                               ? ((IData)(1U) 
                                                  + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r))
                                               : 2U)
                                           : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__u6__DOT__fi_ldz_r0)))),8);
    bufp->fullCData(oldp+61634,((0xffU & ((0x16U < (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__u6__DOT__fi_ldz_r0))
                                           ? ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r) 
                                              - (0x3fU 
                                                 & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                                    - (IData)(0x16U))))
                                           : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r) 
                                              - (0x3fU 
                                                 & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                                    - (IData)(1U))))))),8);
    bufp->fullCData(oldp+61635,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r) 
                                          - (0x3fU 
                                             & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                                - (IData)(0x16U)))))),8);
    bufp->fullCData(oldp+61636,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r) 
                                          - (0x3fU 
                                             & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                                - (IData)(1U)))))),8);
    bufp->fullCData(oldp+61637,((0x3fU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                          - (IData)(1U)))),6);
    bufp->fullCData(oldp+61638,((0x3fU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                          - (IData)(0x16U)))),6);
    bufp->fullBit(oldp+61639,(((2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fpu_op_r3)) 
                               & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_23) 
                                  >> 8U))));
    bufp->fullCData(oldp+61640,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__u6__DOT__fi_ldz_r0),7);
    bufp->fullSData(oldp+61641,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r),9);
    bufp->fullCData(oldp+61642,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r) 
                                          - (IData)(0x7dU)))),8);
    bufp->fullQData(oldp+61643,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__Vcellout__u3__shift_out),56);
    bufp->fullBit(oldp+61645,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__f2i_zero));
    bufp->fullBit(oldp+61646,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__f2i_max));
    bufp->fullCData(oldp+61647,(((0U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__rmode_r3))
                                  ? 0x7eU : 0x7fU)),8);
    bufp->fullCData(oldp+61648,((0xffU & ((5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fpu_op_r3))
                                           ? ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r) 
                                              - (IData)(0x7dU))
                                           : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__u6__DOT__fi_ldz_r0)))),8);
    bufp->fullCData(oldp+61649,((0xffU & ((0U != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)
                                           ? ((IData)(0x9eU) 
                                              - (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__u6__DOT__fi_ldz_r0))
                                           : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opas_r2)
                                               ? 0x9eU
                                               : 0U)))),8);
    bufp->fullCData(oldp+61650,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__f2i_zero)
                                  ? 0U : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__f2i_max)
                                           ? 0xffU : 0U))),8);
    bufp->fullCData(oldp+61651,((0xffU & ((5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fpu_op_r3))
                                           ? ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__f2i_zero)
                                               ? 0U
                                               : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__f2i_max)
                                                   ? 0xffU
                                                   : 0U))
                                           : ((0U != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)
                                               ? ((IData)(0x9eU) 
                                                  - (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__u6__DOT__fi_ldz_r0))
                                               : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opas_r2)
                                                   ? 0x9eU
                                                   : 0U))))),8);
    bufp->fullBit(oldp+61652,(((2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__rmode_r3)) 
                               & (((0U != (0xfU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                   & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opas_r2)) 
                                      & (0x80U > (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r)))) 
                                  | (0U != (0x1ffffffU 
                                            & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_21)))))));
    bufp->fullBit(oldp+61653,((IData)((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r) 
                                        >> 7U) & (~ (IData)(
                                                            (0U 
                                                             != 
                                                             (0x7fU 
                                                              & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r)))))))));
    bufp->fullBit(oldp+61654,((0U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__rmode_r3))));
    bufp->fullBit(oldp+61655,((1U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__rmode_r3))));
    bufp->fullBit(oldp+61656,((2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__rmode_r3))));
    bufp->fullBit(oldp+61657,((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__rmode_r3))));
    bufp->fullBit(oldp+61658,((0U != (0xfU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q))));
    bufp->fullBit(oldp+61659,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__max_num));
    bufp->fullBit(oldp+61660,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__inf_out));
    bufp->fullBit(oldp+61661,(((0U != (0x1ffffffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_21))) 
                               & ((~ (IData)((0xffU 
                                              == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r)))) 
                                  & (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_14) 
                                      >> 8U) | ((~ (IData)(
                                                           (0U 
                                                            != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r)))) 
                                                | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_63)))))));
    bufp->fullBit(oldp+61662,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__inf_out) 
                               | (((0U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__rmode_r3)) 
                                   & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__max_num)) 
                                  | (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r) 
                                      >> 7U) & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__op_dn) 
                                                & (0xffU 
                                                   == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__exp_out))))))));
    bufp->fullBit(oldp+61663,(((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__inf_out)) 
                               & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__max_num)) 
                                  & ((0xffU != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__exp_out_final)) 
                                     & (((0U != (0x1ffffffU 
                                                 & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_21))) 
                                         & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opb_dn)) 
                                            & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__div_dn) 
                                               | (~ (IData)(
                                                            (0U 
                                                             != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__exp_out))))))) 
                                        | (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__op_dn) 
                                            & ((~ (IData)(
                                                          (0U 
                                                           != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__exp_out)))) 
                                               & (0x17U 
                                                  > (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__u6__DOT__fi_ldz_r0)))) 
                                           | ((~ (IData)(
                                                         (0U 
                                                          != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r)))) 
                                              | ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__op_dn)) 
                                                 & ((0x17U 
                                                     > (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__u6__DOT__fi_ldz_r0)) 
                                                    & ((1U 
                                                        == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r)) 
                                                       & (~ (IData)(
                                                                    (0U 
                                                                     != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__exp_out)))))))))))))));
    bufp->fullBit(oldp+61664,((1U & (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_14) 
                                      >> 8U) | ((~ (IData)(
                                                           (0U 
                                                            != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r)))) 
                                                | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_63))))));
    bufp->fullBit(oldp+61665,((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__f2i_zero) 
                                & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opas_r2)) 
                                   & (0U != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q))) 
                               | ((0U != (0x1ffffffU 
                                          & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_21))) 
                                  | (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__f2i_zero) 
                                      & ((0x80U > (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r)) 
                                         & ((0U != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q) 
                                            & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opas_r2)))) 
                                     | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__f2i_max) 
                                        & ((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__rmode_r3)) 
                                           & (0x80U 
                                              > (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r)))))))));
    bufp->fullCData(oldp+61666,((0x3fU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__shift_right))),6);
    bufp->fullCData(oldp+61667,((0x3fU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r) 
                                          - (IData)(0x3dU)))),6);
    bufp->fullQData(oldp+61668,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__Vcellout__u3__shift_out),48);
    bufp->fullCData(oldp+61670,((0x3fU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__shift_left))),6);
    bufp->fullIData(oldp+61671,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__adj_op_tmp),27);
    bufp->fullCData(oldp+61672,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__exp_diff_sft),5);
    bufp->fullIData(oldp+61673,((0x7ffffffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.u1__DOT____Vcellout__u7__shift_out))),27);
    bufp->fullQData(oldp+61674,((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__adj_op_tmp))),48);
    bufp->fullCData(oldp+61676,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__exp_diff_sft),6);
    bufp->fullQData(oldp+61677,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.u1__DOT____Vcellout__u7__shift_out),48);
    bufp->fullIData(oldp+61679,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__adj_op_tmp),27);
    bufp->fullCData(oldp+61680,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__exp_diff_sft),5);
    bufp->fullIData(oldp+61681,((0x7ffffffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.u1__DOT____Vcellout__u7__shift_out))),27);
    bufp->fullQData(oldp+61682,((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__adj_op_tmp))),48);
    bufp->fullCData(oldp+61684,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__exp_diff_sft),6);
    bufp->fullQData(oldp+61685,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.u1__DOT____Vcellout__u7__shift_out),48);
    bufp->fullIData(oldp+61687,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__adj_op_tmp),27);
    bufp->fullCData(oldp+61688,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__exp_diff_sft),5);
    bufp->fullIData(oldp+61689,((0x7ffffffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.u1__DOT____Vcellout__u7__shift_out))),27);
    bufp->fullQData(oldp+61690,((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__adj_op_tmp))),48);
    bufp->fullCData(oldp+61692,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__exp_diff_sft),6);
    bufp->fullQData(oldp+61693,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.u1__DOT____Vcellout__u7__shift_out),48);
    bufp->fullIData(oldp+61695,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__adj_op_tmp),27);
    bufp->fullCData(oldp+61696,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__exp_diff_sft),5);
    bufp->fullIData(oldp+61697,((0x7ffffffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.u1__DOT____Vcellout__u7__shift_out))),27);
    bufp->fullQData(oldp+61698,((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__adj_op_tmp))),48);
    bufp->fullCData(oldp+61700,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__exp_diff_sft),6);
    bufp->fullQData(oldp+61701,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.u1__DOT____Vcellout__u7__shift_out),48);
    bufp->fullIData(oldp+61703,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__adj_op_tmp),27);
    bufp->fullCData(oldp+61704,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__exp_diff_sft),5);
    bufp->fullIData(oldp+61705,((0x7ffffffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.u1__DOT____Vcellout__u7__shift_out))),27);
    bufp->fullQData(oldp+61706,((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__adj_op_tmp))),48);
    bufp->fullCData(oldp+61708,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__exp_diff_sft),6);
    bufp->fullQData(oldp+61709,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.u1__DOT____Vcellout__u7__shift_out),48);
    bufp->fullBit(oldp+61711,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__fractb_lt_fracta));
    bufp->fullIData(oldp+61712,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__adj_op_out),27);
    bufp->fullIData(oldp+61713,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__fracta_n),27);
    bufp->fullIData(oldp+61714,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__fractb_n),27);
    bufp->fullIData(oldp+61715,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__fractb_lt_fracta)
                                  ? vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__fractb_n
                                  : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__fracta_n)),27);
    bufp->fullIData(oldp+61716,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__fractb_lt_fracta)
                                  ? vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__fracta_n
                                  : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__fractb_n)),27);
    bufp->fullBit(oldp+61717,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__sign_d));
    bufp->fullBit(oldp+61718,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__fractb_lt_fracta));
    bufp->fullIData(oldp+61719,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__adj_op_out),27);
    bufp->fullIData(oldp+61720,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__fracta_n),27);
    bufp->fullIData(oldp+61721,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__fractb_n),27);
    bufp->fullIData(oldp+61722,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__fractb_lt_fracta)
                                  ? vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__fractb_n
                                  : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__fracta_n)),27);
    bufp->fullIData(oldp+61723,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__fractb_lt_fracta)
                                  ? vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__fracta_n
                                  : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__fractb_n)),27);
    bufp->fullBit(oldp+61724,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__sign_d));
    bufp->fullBit(oldp+61725,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__fractb_lt_fracta));
    bufp->fullIData(oldp+61726,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__adj_op_out),27);
    bufp->fullIData(oldp+61727,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__fracta_n),27);
    bufp->fullIData(oldp+61728,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__fractb_n),27);
    bufp->fullIData(oldp+61729,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__fractb_lt_fracta)
                                  ? vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__fractb_n
                                  : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__fracta_n)),27);
    bufp->fullIData(oldp+61730,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__fractb_lt_fracta)
                                  ? vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__fracta_n
                                  : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__fractb_n)),27);
    bufp->fullBit(oldp+61731,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__sign_d));
    bufp->fullBit(oldp+61732,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__fractb_lt_fracta));
    bufp->fullIData(oldp+61733,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__adj_op_out),27);
    bufp->fullIData(oldp+61734,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__fracta_n),27);
    bufp->fullIData(oldp+61735,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__fractb_n),27);
    bufp->fullIData(oldp+61736,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__fractb_lt_fracta)
                                  ? vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__fractb_n
                                  : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__fracta_n)),27);
    bufp->fullIData(oldp+61737,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__fractb_lt_fracta)
                                  ? vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__fracta_n
                                  : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__fractb_n)),27);
    bufp->fullBit(oldp+61738,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__sign_d));
    bufp->fullBit(oldp+61739,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__fractb_lt_fracta));
    bufp->fullIData(oldp+61740,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__adj_op_out),27);
    bufp->fullIData(oldp+61741,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__fracta_n),27);
    bufp->fullIData(oldp+61742,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__fractb_n),27);
    bufp->fullIData(oldp+61743,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__fractb_lt_fracta)
                                  ? vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__fractb_n
                                  : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__fracta_n)),27);
    bufp->fullIData(oldp+61744,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__fractb_lt_fracta)
                                  ? vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__fracta_n
                                  : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__fractb_n)),27);
    bufp->fullBit(oldp+61745,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__sign_d));
    bufp->fullBit(oldp+61746,(vlSelf->co_sim_syn2__DOT__clock));
    bufp->fullBit(oldp+61747,(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0232_li0232));
    bufp->fullBit(oldp+61748,(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0735_li0735));
    bufp->fullBit(oldp+61749,(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1101_li1101));
    bufp->fullBit(oldp+61750,(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1352_li1352));
    bufp->fullBit(oldp+61751,(((IData)(vlSelf->co_sim_syn2__DOT__clock) 
                               & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0232_li0232))));
    bufp->fullBit(oldp+61752,(((~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0232_li0232)) 
                               & (IData)(vlSelf->co_sim_syn2__DOT__clock))));
    bufp->fullBit(oldp+61753,(((~ (IData)(vlSelf->co_sim_syn2__DOT__clock)) 
                               & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0232_li0232))));
    bufp->fullBit(oldp+61754,((1U & ((~ (IData)(vlSelf->co_sim_syn2__DOT__clock)) 
                                     & (~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0232_li0232))))));
    bufp->fullBit(oldp+61755,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0232_li0232)))));
    bufp->fullBit(oldp+61756,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__clock)))));
    bufp->fullBit(oldp+61757,(((IData)(vlSelf->co_sim_syn2__DOT__clock) 
                               & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0735_li0735))));
    bufp->fullBit(oldp+61758,(((~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0735_li0735)) 
                               & (IData)(vlSelf->co_sim_syn2__DOT__clock))));
    bufp->fullBit(oldp+61759,(((~ (IData)(vlSelf->co_sim_syn2__DOT__clock)) 
                               & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0735_li0735))));
    bufp->fullBit(oldp+61760,((1U & ((~ (IData)(vlSelf->co_sim_syn2__DOT__clock)) 
                                     & (~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0735_li0735))))));
    bufp->fullBit(oldp+61761,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0735_li0735)))));
    bufp->fullBit(oldp+61762,(((IData)(vlSelf->co_sim_syn2__DOT__clock) 
                               & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1101_li1101))));
    bufp->fullBit(oldp+61763,(((~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1101_li1101)) 
                               & (IData)(vlSelf->co_sim_syn2__DOT__clock))));
    bufp->fullBit(oldp+61764,(((~ (IData)(vlSelf->co_sim_syn2__DOT__clock)) 
                               & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1101_li1101))));
    bufp->fullBit(oldp+61765,((1U & ((~ (IData)(vlSelf->co_sim_syn2__DOT__clock)) 
                                     & (~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1101_li1101))))));
    bufp->fullBit(oldp+61766,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1101_li1101)))));
    bufp->fullBit(oldp+61767,(((IData)(vlSelf->co_sim_syn2__DOT__clock) 
                               & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1352_li1352))));
    bufp->fullBit(oldp+61768,(((~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1352_li1352)) 
                               & (IData)(vlSelf->co_sim_syn2__DOT__clock))));
    bufp->fullBit(oldp+61769,(((~ (IData)(vlSelf->co_sim_syn2__DOT__clock)) 
                               & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1352_li1352))));
    bufp->fullBit(oldp+61770,((1U & ((~ (IData)(vlSelf->co_sim_syn2__DOT__clock)) 
                                     & (~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1352_li1352))))));
    bufp->fullBit(oldp+61771,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1352_li1352)))));
    bufp->fullCData(oldp+61772,(((2U & (vlSelf->co_sim_syn2__DOT__in1 
                                        >> 0x1eU)) 
                                 | (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eopa__05b31__05d))),2);
    bufp->fullCData(oldp+61773,((((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eopa__05b31__05d) 
                                  << 1U) | (vlSelf->co_sim_syn2__DOT__in4 
                                            >> 0x1fU))),2);
    bufp->fullBit(oldp+61774,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__sticky));
    bufp->fullBit(oldp+61775,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.u1__DOT____Vcellout__u7__shift_out) 
                                     | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__sticky)))));
    bufp->fullBit(oldp+61776,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__sticky));
    bufp->fullBit(oldp+61777,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.u1__DOT____Vcellout__u7__shift_out) 
                                     | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__sticky)))));
    bufp->fullBit(oldp+61778,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__sticky));
    bufp->fullBit(oldp+61779,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.u1__DOT____Vcellout__u7__shift_out) 
                                     | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__sticky)))));
    bufp->fullBit(oldp+61780,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__sticky));
    bufp->fullBit(oldp+61781,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.u1__DOT____Vcellout__u7__shift_out) 
                                     | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__sticky)))));
    bufp->fullBit(oldp+61782,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__sticky));
    bufp->fullBit(oldp+61783,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.u1__DOT____Vcellout__u7__shift_out) 
                                     | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__sticky)))));
}
