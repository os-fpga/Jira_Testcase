// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vco_sim_syn2__Syms.h"


void Vco_sim_syn2___024root__trace_chg_0_sub_12(Vco_sim_syn2___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_syn2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_syn2___024root__trace_chg_0_sub_12\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 60122);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+0,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__add_r));
        bufp->chgBit(oldp+1,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__signa_r));
        bufp->chgBit(oldp+2,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__signb_r));
        bufp->chgBit(oldp+3,((0x1bU < ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.u1__DOT____VdfgRegularize_h05e998eb_0_2)
                                        ? 0U : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__exp_diff2)))));
        bufp->chgBit(oldp+4,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__expa_lt_expb)
                                     ? (~ (IData)((0U 
                                                   != 
                                                   (0xffU 
                                                    & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__opb_r 
                                                       >> 0x17U)))))
                                     : (~ (IData)((0U 
                                                   != 
                                                   (0xffU 
                                                    & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__opa_r 
                                                       >> 0x17U)))))))));
        bufp->chgBit(oldp+5,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__fracta_lt_fractb));
        bufp->chgBit(oldp+6,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__fracta_eq_fractb));
        bufp->chgBit(oldp+7,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__fracta_eq_fractb)
                               ? ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__signa_r) 
                                  & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__signb_r))
                               : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__fracta_lt_fractb)
                                   ? (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__signb_r)
                                   : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__signa_r)))));
        bufp->chgCData(oldp+8,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__exp_large) 
                                         - ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__expa_lt_expb)
                                             ? (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__opb_r 
                                                >> 0x17U)
                                             : (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__opa_r 
                                                >> 0x17U))))),8);
        bufp->chgCData(oldp+9,((0xffU & (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__exp_large) 
                                          - ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__expa_lt_expb)
                                              ? (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__opb_r 
                                                 >> 0x17U)
                                              : (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__opa_r 
                                                 >> 0x17U))) 
                                         - (IData)(1U)))),8);
        bufp->chgCData(oldp+10,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__exp_diff2),8);
        bufp->chgBit(oldp+11,((1U & (~ ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__expa_lt_expb)
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
        bufp->chgCData(oldp+12,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__fpu_op),3);
        bufp->chgBit(oldp+13,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__zero));
        bufp->chgIData(oldp+14,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__opa_r),32);
        bufp->chgIData(oldp+15,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__opb_r),32);
        bufp->chgBit(oldp+16,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__div_by_zero));
        bufp->chgBit(oldp+17,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__sign_fasu));
        bufp->chgIData(oldp+18,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__fracta),27);
        bufp->chgIData(oldp+19,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__fractb),27);
        bufp->chgCData(oldp+20,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__exp_fasu),8);
        bufp->chgCData(oldp+21,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__exp_r),8);
        bufp->chgIData(oldp+22,((0x7ffffffU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.u3__DOT____VdfgRegularize_h60e48f75_0_0)),27);
        bufp->chgIData(oldp+23,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__fract_out_q),28);
        bufp->chgIData(oldp+24,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__out),31);
        bufp->chgBit(oldp+25,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__overflow));
        bufp->chgBit(oldp+26,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__underflow));
        bufp->chgBit(oldp+27,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__overflow));
        bufp->chgBit(oldp+28,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__underflow));
        bufp->chgBit(oldp+29,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__inf));
        bufp->chgBit(oldp+30,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__snan));
        bufp->chgBit(oldp+31,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__qnan));
        bufp->chgBit(oldp+32,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__ine));
        bufp->chgCData(oldp+33,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__rmode_r1),2);
        bufp->chgCData(oldp+34,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__rmode_r2),2);
        bufp->chgCData(oldp+35,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__rmode_r3),2);
        bufp->chgCData(oldp+36,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__fpu_op_r1),3);
        bufp->chgCData(oldp+37,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__fpu_op_r2),3);
        bufp->chgCData(oldp+38,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__fpu_op_r3),3);
        bufp->chgIData(oldp+39,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__out_o1),32);
        bufp->chgBit(oldp+40,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__inf_o1));
        bufp->chgBit(oldp+41,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__snan_o1));
        bufp->chgBit(oldp+42,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__qnan_o1));
        bufp->chgBit(oldp+43,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__ine_o1));
        bufp->chgBit(oldp+44,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__overflow_o1));
        bufp->chgBit(oldp+45,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__underflow_o1));
        bufp->chgBit(oldp+46,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__zero_o1));
        bufp->chgBit(oldp+47,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__div_by_zero_o1));
        bufp->chgBit(oldp+48,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__inf_d));
        bufp->chgBit(oldp+49,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__ind_d));
        bufp->chgBit(oldp+50,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__qnan_d));
        bufp->chgBit(oldp+51,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__snan_d));
        bufp->chgBit(oldp+52,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__opa_nan));
        bufp->chgBit(oldp+53,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__opb_nan));
        bufp->chgBit(oldp+54,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__opa_00));
        bufp->chgBit(oldp+55,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__opb_00));
        bufp->chgBit(oldp+56,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__opa_inf));
        bufp->chgBit(oldp+57,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__opb_inf));
        bufp->chgBit(oldp+58,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__opa_dn));
        bufp->chgBit(oldp+59,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__opb_dn));
        bufp->chgBit(oldp+60,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__nan_sign_d));
        bufp->chgBit(oldp+61,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__result_zero_sign_d));
        bufp->chgBit(oldp+62,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__sign_fasu_r));
        bufp->chgBit(oldp+63,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__fasu_op));
        bufp->chgBit(oldp+64,((1U & (~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__fpu_op_r1)))));
        bufp->chgBit(oldp+65,((1U & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.u3__DOT____VdfgRegularize_h60e48f75_0_0 
                                     >> 0x1bU))));
        bufp->chgBit(oldp+66,(((5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__fpu_op_r3))
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
        bufp->chgQData(oldp+67,(((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__fract_out_q)) 
                                 << 0x14U)),48);
        bufp->chgBit(oldp+69,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__sign));
        bufp->chgIData(oldp+70,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__opa_r1),31);
        bufp->chgBit(oldp+71,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__opas_r1));
        bufp->chgBit(oldp+72,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__opas_r2));
        bufp->chgBit(oldp+73,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__opas_r2)
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
        bufp->chgBit(oldp+74,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__fasu_op_r1));
        bufp->chgBit(oldp+75,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__fasu_op_r2));
        bufp->chgIData(oldp+76,((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__VdfgRegularize_h16e0ae4d_5_0) 
                                  | ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__fasu_op_r2)) 
                                     & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__ind_d)))
                                  ? 0x7fc00001U : 0x7f800000U)),31);
        bufp->chgBit(oldp+77,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__output_zero_fasu));
        bufp->chgBit(oldp+78,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__VdfgRegularize_h16e0ae4d_5_1) 
                               & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__overflow))));
        bufp->chgBit(oldp+79,((1U & (~ (IData)((0U 
                                                != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__out))))));
        bufp->chgBit(oldp+80,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__VdfgRegularize_h16e0ae4d_5_1) 
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
        bufp->chgBit(oldp+81,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__VdfgRegularize_h16e0ae4d_5_2) 
                               & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__underflow))));
        bufp->chgBit(oldp+82,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__opa_nan_r));
        bufp->chgIData(oldp+83,((0x7fffffffU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__opa_r)),31);
        bufp->chgIData(oldp+84,((0x7fffffffU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__opb_r)),31);
        bufp->chgCData(oldp+85,((0xffU & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__opa_r 
                                          >> 0x17U))),8);
        bufp->chgCData(oldp+86,((0xffU & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__opb_r 
                                          >> 0x17U))),8);
        bufp->chgIData(oldp+87,((0x7fffffU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__opa_r)),23);
        bufp->chgIData(oldp+88,((0x7fffffU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__opb_r)),23);
        bufp->chgBit(oldp+89,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u0__DOT__expa_ff));
        bufp->chgBit(oldp+90,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u0__DOT__infa_f_r));
        bufp->chgBit(oldp+91,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u0__DOT__qnan_r_a));
        bufp->chgBit(oldp+92,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u0__DOT__snan_r_a));
        bufp->chgBit(oldp+93,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u0__DOT__expb_ff));
        bufp->chgBit(oldp+94,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u0__DOT__infb_f_r));
        bufp->chgBit(oldp+95,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u0__DOT__qnan_r_b));
        bufp->chgBit(oldp+96,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u0__DOT__snan_r_b));
        bufp->chgBit(oldp+97,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u0__DOT__expa_00));
        bufp->chgBit(oldp+98,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u0__DOT__expb_00));
        bufp->chgBit(oldp+99,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u0__DOT__fracta_00));
        bufp->chgBit(oldp+100,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u0__DOT__fractb_00));
        bufp->chgBit(oldp+101,((vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__opa_r 
                                >> 0x1fU)));
        bufp->chgBit(oldp+102,((vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__opb_r 
                                >> 0x1fU)));
        bufp->chgBit(oldp+103,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__expa_lt_expb));
        bufp->chgCData(oldp+104,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__expa_lt_expb)
                                            ? (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__opb_r 
                                               >> 0x17U)
                                            : (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__opa_r 
                                               >> 0x17U)))),8);
        bufp->chgCData(oldp+105,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__exp_large),8);
        bufp->chgCData(oldp+106,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.u1__DOT____VdfgRegularize_h05e998eb_0_2)
                                   ? 0U : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__exp_diff2))),8);
        bufp->chgIData(oldp+107,((0x7fffffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__expa_lt_expb)
                                                ? vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__opb_r
                                                : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__opa_r))),23);
        bufp->chgBit(oldp+108,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__add_d));
        bufp->chgBit(oldp+109,((1U & (~ (IData)((0U 
                                                 != 
                                                 (0xffU 
                                                  & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__opa_r 
                                                     >> 0x17U))))))));
        bufp->chgBit(oldp+110,((1U & (~ (IData)((0U 
                                                 != 
                                                 (0xffU 
                                                  & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__opb_r 
                                                     >> 0x17U))))))));
        bufp->chgBit(oldp+111,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__add_r));
        bufp->chgBit(oldp+112,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__signa_r));
        bufp->chgBit(oldp+113,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__signb_r));
        bufp->chgBit(oldp+114,((0x1bU < ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.u1__DOT____VdfgRegularize_h05e998eb_0_2)
                                          ? 0U : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__exp_diff2)))));
        bufp->chgBit(oldp+115,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__expa_lt_expb)
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
        bufp->chgBit(oldp+116,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__fracta_lt_fractb));
        bufp->chgBit(oldp+117,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__fracta_eq_fractb));
        bufp->chgBit(oldp+118,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__fracta_eq_fractb)
                                 ? ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__signa_r) 
                                    & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__signb_r))
                                 : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__fracta_lt_fractb)
                                     ? (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__signb_r)
                                     : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__signa_r)))));
        bufp->chgCData(oldp+119,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__exp_large) 
                                           - ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__expa_lt_expb)
                                               ? (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__opb_r 
                                                  >> 0x17U)
                                               : (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__opa_r 
                                                  >> 0x17U))))),8);
        bufp->chgCData(oldp+120,((0xffU & (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__exp_large) 
                                            - ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__expa_lt_expb)
                                                ? (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__opb_r 
                                                   >> 0x17U)
                                                : (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__opa_r 
                                                   >> 0x17U))) 
                                           - (IData)(1U)))),8);
        bufp->chgCData(oldp+121,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__exp_diff2),8);
        bufp->chgBit(oldp+122,((1U & (~ ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__expa_lt_expb)
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
        bufp->chgCData(oldp+123,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__fpu_op),3);
        bufp->chgBit(oldp+124,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__zero));
        bufp->chgIData(oldp+125,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__opa_r),32);
        bufp->chgIData(oldp+126,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__opb_r),32);
        bufp->chgBit(oldp+127,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__div_by_zero));
        bufp->chgBit(oldp+128,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__sign_fasu));
        bufp->chgIData(oldp+129,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__fracta),27);
        bufp->chgIData(oldp+130,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__fractb),27);
        bufp->chgCData(oldp+131,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__exp_fasu),8);
        bufp->chgCData(oldp+132,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__exp_r),8);
        bufp->chgIData(oldp+133,((0x7ffffffU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.u3__DOT____VdfgRegularize_h60e48f75_0_0)),27);
        bufp->chgIData(oldp+134,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__fract_out_q),28);
        bufp->chgIData(oldp+135,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__out),31);
        bufp->chgBit(oldp+136,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__overflow));
        bufp->chgBit(oldp+137,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__underflow));
        bufp->chgBit(oldp+138,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__overflow));
        bufp->chgBit(oldp+139,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__underflow));
        bufp->chgBit(oldp+140,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__inf));
        bufp->chgBit(oldp+141,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__snan));
        bufp->chgBit(oldp+142,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__qnan));
        bufp->chgBit(oldp+143,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__ine));
        bufp->chgCData(oldp+144,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__rmode_r1),2);
        bufp->chgCData(oldp+145,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__rmode_r2),2);
        bufp->chgCData(oldp+146,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__rmode_r3),2);
        bufp->chgCData(oldp+147,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__fpu_op_r1),3);
        bufp->chgCData(oldp+148,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__fpu_op_r2),3);
        bufp->chgCData(oldp+149,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__fpu_op_r3),3);
        bufp->chgIData(oldp+150,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__out_o1),32);
        bufp->chgBit(oldp+151,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__inf_o1));
        bufp->chgBit(oldp+152,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__snan_o1));
        bufp->chgBit(oldp+153,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__qnan_o1));
        bufp->chgBit(oldp+154,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__ine_o1));
        bufp->chgBit(oldp+155,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__overflow_o1));
        bufp->chgBit(oldp+156,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__underflow_o1));
        bufp->chgBit(oldp+157,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__zero_o1));
        bufp->chgBit(oldp+158,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__div_by_zero_o1));
        bufp->chgBit(oldp+159,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__inf_d));
        bufp->chgBit(oldp+160,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__ind_d));
        bufp->chgBit(oldp+161,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__qnan_d));
        bufp->chgBit(oldp+162,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__snan_d));
        bufp->chgBit(oldp+163,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__opa_nan));
        bufp->chgBit(oldp+164,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__opb_nan));
        bufp->chgBit(oldp+165,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__opa_00));
        bufp->chgBit(oldp+166,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__opb_00));
        bufp->chgBit(oldp+167,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__opa_inf));
        bufp->chgBit(oldp+168,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__opb_inf));
        bufp->chgBit(oldp+169,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__opa_dn));
        bufp->chgBit(oldp+170,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__opb_dn));
        bufp->chgBit(oldp+171,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__nan_sign_d));
        bufp->chgBit(oldp+172,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__result_zero_sign_d));
        bufp->chgBit(oldp+173,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__sign_fasu_r));
        bufp->chgBit(oldp+174,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__fasu_op));
        bufp->chgBit(oldp+175,((1U & (~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__fpu_op_r1)))));
        bufp->chgBit(oldp+176,((1U & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.u3__DOT____VdfgRegularize_h60e48f75_0_0 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+177,(((5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__fpu_op_r3))
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
        bufp->chgQData(oldp+178,(((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__fract_out_q)) 
                                  << 0x14U)),48);
        bufp->chgBit(oldp+180,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__sign));
        bufp->chgIData(oldp+181,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__opa_r1),31);
        bufp->chgBit(oldp+182,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__opas_r1));
        bufp->chgBit(oldp+183,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__opas_r2));
        bufp->chgBit(oldp+184,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__opas_r2)
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
        bufp->chgBit(oldp+185,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__fasu_op_r1));
        bufp->chgBit(oldp+186,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__fasu_op_r2));
        bufp->chgIData(oldp+187,((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__VdfgRegularize_h16e0ae4d_5_0) 
                                   | ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__fasu_op_r2)) 
                                      & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__ind_d)))
                                   ? 0x7fc00001U : 0x7f800000U)),31);
        bufp->chgBit(oldp+188,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__output_zero_fasu));
        bufp->chgBit(oldp+189,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__VdfgRegularize_h16e0ae4d_5_1) 
                                & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__overflow))));
        bufp->chgBit(oldp+190,((1U & (~ (IData)((0U 
                                                 != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__out))))));
        bufp->chgBit(oldp+191,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__VdfgRegularize_h16e0ae4d_5_1) 
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
        bufp->chgBit(oldp+192,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__VdfgRegularize_h16e0ae4d_5_2) 
                                & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__underflow))));
        bufp->chgBit(oldp+193,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__opa_nan_r));
        bufp->chgIData(oldp+194,((0x7fffffffU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__opa_r)),31);
        bufp->chgIData(oldp+195,((0x7fffffffU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__opb_r)),31);
        bufp->chgCData(oldp+196,((0xffU & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__opa_r 
                                           >> 0x17U))),8);
        bufp->chgCData(oldp+197,((0xffU & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__opb_r 
                                           >> 0x17U))),8);
        bufp->chgIData(oldp+198,((0x7fffffU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__opa_r)),23);
        bufp->chgIData(oldp+199,((0x7fffffU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__opb_r)),23);
        bufp->chgBit(oldp+200,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u0__DOT__expa_ff));
        bufp->chgBit(oldp+201,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u0__DOT__infa_f_r));
        bufp->chgBit(oldp+202,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u0__DOT__qnan_r_a));
        bufp->chgBit(oldp+203,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u0__DOT__snan_r_a));
        bufp->chgBit(oldp+204,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u0__DOT__expb_ff));
        bufp->chgBit(oldp+205,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u0__DOT__infb_f_r));
        bufp->chgBit(oldp+206,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u0__DOT__qnan_r_b));
        bufp->chgBit(oldp+207,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u0__DOT__snan_r_b));
        bufp->chgBit(oldp+208,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u0__DOT__expa_00));
        bufp->chgBit(oldp+209,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u0__DOT__expb_00));
        bufp->chgBit(oldp+210,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u0__DOT__fracta_00));
        bufp->chgBit(oldp+211,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u0__DOT__fractb_00));
        bufp->chgBit(oldp+212,((vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__opa_r 
                                >> 0x1fU)));
        bufp->chgBit(oldp+213,((vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__opb_r 
                                >> 0x1fU)));
        bufp->chgBit(oldp+214,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__expa_lt_expb));
        bufp->chgCData(oldp+215,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__expa_lt_expb)
                                            ? (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__opb_r 
                                               >> 0x17U)
                                            : (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__opa_r 
                                               >> 0x17U)))),8);
        bufp->chgCData(oldp+216,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__exp_large),8);
        bufp->chgCData(oldp+217,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.u1__DOT____VdfgRegularize_h05e998eb_0_2)
                                   ? 0U : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__exp_diff2))),8);
        bufp->chgIData(oldp+218,((0x7fffffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__expa_lt_expb)
                                                ? vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__opb_r
                                                : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__opa_r))),23);
        bufp->chgBit(oldp+219,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__add_d));
        bufp->chgBit(oldp+220,((1U & (~ (IData)((0U 
                                                 != 
                                                 (0xffU 
                                                  & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__opa_r 
                                                     >> 0x17U))))))));
        bufp->chgBit(oldp+221,((1U & (~ (IData)((0U 
                                                 != 
                                                 (0xffU 
                                                  & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__opb_r 
                                                     >> 0x17U))))))));
        bufp->chgBit(oldp+222,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__add_r));
        bufp->chgBit(oldp+223,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__signa_r));
        bufp->chgBit(oldp+224,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__signb_r));
        bufp->chgBit(oldp+225,((0x1bU < ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.u1__DOT____VdfgRegularize_h05e998eb_0_2)
                                          ? 0U : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__exp_diff2)))));
        bufp->chgBit(oldp+226,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__expa_lt_expb)
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
        bufp->chgBit(oldp+227,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__fracta_lt_fractb));
        bufp->chgBit(oldp+228,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__fracta_eq_fractb));
        bufp->chgBit(oldp+229,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__fracta_eq_fractb)
                                 ? ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__signa_r) 
                                    & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__signb_r))
                                 : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__fracta_lt_fractb)
                                     ? (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__signb_r)
                                     : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__signa_r)))));
        bufp->chgCData(oldp+230,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__exp_large) 
                                           - ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__expa_lt_expb)
                                               ? (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__opb_r 
                                                  >> 0x17U)
                                               : (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__opa_r 
                                                  >> 0x17U))))),8);
        bufp->chgCData(oldp+231,((0xffU & (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__exp_large) 
                                            - ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__expa_lt_expb)
                                                ? (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__opb_r 
                                                   >> 0x17U)
                                                : (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__opa_r 
                                                   >> 0x17U))) 
                                           - (IData)(1U)))),8);
        bufp->chgCData(oldp+232,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__exp_diff2),8);
        bufp->chgBit(oldp+233,((1U & (~ ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__expa_lt_expb)
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
        bufp->chgCData(oldp+234,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fpu_op),3);
        bufp->chgBit(oldp+235,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__zero));
        bufp->chgIData(oldp+236,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opa_r),32);
        bufp->chgIData(oldp+237,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opb_r),32);
        bufp->chgBit(oldp+238,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__div_by_zero));
        bufp->chgBit(oldp+239,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__sign_fasu));
        bufp->chgIData(oldp+240,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fracta),27);
        bufp->chgIData(oldp+241,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fractb),27);
        bufp->chgCData(oldp+242,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_fasu),8);
        bufp->chgCData(oldp+243,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r),8);
        bufp->chgIData(oldp+244,((0x7ffffffU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.u3__DOT____VdfgRegularize_h60e48f75_0_0)),27);
        bufp->chgIData(oldp+245,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q),28);
        bufp->chgIData(oldp+246,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__out),31);
        bufp->chgBit(oldp+247,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__overflow));
        bufp->chgBit(oldp+248,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__underflow));
        bufp->chgBit(oldp+249,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__overflow));
        bufp->chgBit(oldp+250,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__underflow));
        bufp->chgBit(oldp+251,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__inf));
        bufp->chgBit(oldp+252,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__snan));
        bufp->chgBit(oldp+253,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__qnan));
        bufp->chgBit(oldp+254,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__ine));
        bufp->chgCData(oldp+255,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__rmode_r1),2);
        bufp->chgCData(oldp+256,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__rmode_r2),2);
        bufp->chgCData(oldp+257,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__rmode_r3),2);
        bufp->chgCData(oldp+258,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fpu_op_r1),3);
        bufp->chgCData(oldp+259,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fpu_op_r2),3);
        bufp->chgCData(oldp+260,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fpu_op_r3),3);
        bufp->chgIData(oldp+261,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__out_o1),32);
        bufp->chgBit(oldp+262,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__inf_o1));
        bufp->chgBit(oldp+263,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__snan_o1));
        bufp->chgBit(oldp+264,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__qnan_o1));
        bufp->chgBit(oldp+265,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__ine_o1));
        bufp->chgBit(oldp+266,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__overflow_o1));
        bufp->chgBit(oldp+267,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__underflow_o1));
        bufp->chgBit(oldp+268,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__zero_o1));
        bufp->chgBit(oldp+269,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__div_by_zero_o1));
        bufp->chgBit(oldp+270,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__inf_d));
        bufp->chgBit(oldp+271,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__ind_d));
        bufp->chgBit(oldp+272,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__qnan_d));
        bufp->chgBit(oldp+273,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__snan_d));
        bufp->chgBit(oldp+274,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opa_nan));
        bufp->chgBit(oldp+275,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opb_nan));
        bufp->chgBit(oldp+276,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opa_00));
        bufp->chgBit(oldp+277,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opb_00));
        bufp->chgBit(oldp+278,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opa_inf));
        bufp->chgBit(oldp+279,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opb_inf));
        bufp->chgBit(oldp+280,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opa_dn));
        bufp->chgBit(oldp+281,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opb_dn));
        bufp->chgBit(oldp+282,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__nan_sign_d));
        bufp->chgBit(oldp+283,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__result_zero_sign_d));
        bufp->chgBit(oldp+284,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__sign_fasu_r));
        bufp->chgBit(oldp+285,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fasu_op));
        bufp->chgBit(oldp+286,((1U & (~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fpu_op_r1)))));
        bufp->chgBit(oldp+287,((1U & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.u3__DOT____VdfgRegularize_h60e48f75_0_0 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+288,(((5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fpu_op_r3))
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
        bufp->chgQData(oldp+289,(((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                  << 0x14U)),48);
        bufp->chgBit(oldp+291,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__sign));
        bufp->chgIData(oldp+292,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opa_r1),31);
        bufp->chgBit(oldp+293,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opas_r1));
        bufp->chgBit(oldp+294,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opas_r2));
        bufp->chgBit(oldp+295,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opas_r2)
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
        bufp->chgBit(oldp+296,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fasu_op_r1));
        bufp->chgBit(oldp+297,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fasu_op_r2));
        bufp->chgIData(oldp+298,((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__VdfgRegularize_h16e0ae4d_5_0) 
                                   | ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fasu_op_r2)) 
                                      & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__ind_d)))
                                   ? 0x7fc00001U : 0x7f800000U)),31);
        bufp->chgBit(oldp+299,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__output_zero_fasu));
        bufp->chgBit(oldp+300,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__VdfgRegularize_h16e0ae4d_5_1) 
                                & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__overflow))));
        bufp->chgBit(oldp+301,((1U & (~ (IData)((0U 
                                                 != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__out))))));
        bufp->chgBit(oldp+302,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__VdfgRegularize_h16e0ae4d_5_1) 
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
        bufp->chgBit(oldp+303,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__VdfgRegularize_h16e0ae4d_5_2) 
                                & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__underflow))));
        bufp->chgBit(oldp+304,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opa_nan_r));
        bufp->chgIData(oldp+305,((0x7fffffffU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opa_r)),31);
        bufp->chgIData(oldp+306,((0x7fffffffU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opb_r)),31);
        bufp->chgCData(oldp+307,((0xffU & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opa_r 
                                           >> 0x17U))),8);
        bufp->chgCData(oldp+308,((0xffU & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opb_r 
                                           >> 0x17U))),8);
        bufp->chgIData(oldp+309,((0x7fffffU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opa_r)),23);
        bufp->chgIData(oldp+310,((0x7fffffU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opb_r)),23);
        bufp->chgBit(oldp+311,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u0__DOT__expa_ff));
        bufp->chgBit(oldp+312,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u0__DOT__infa_f_r));
        bufp->chgBit(oldp+313,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u0__DOT__qnan_r_a));
        bufp->chgBit(oldp+314,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u0__DOT__snan_r_a));
        bufp->chgBit(oldp+315,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u0__DOT__expb_ff));
        bufp->chgBit(oldp+316,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u0__DOT__infb_f_r));
        bufp->chgBit(oldp+317,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u0__DOT__qnan_r_b));
        bufp->chgBit(oldp+318,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u0__DOT__snan_r_b));
        bufp->chgBit(oldp+319,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u0__DOT__expa_00));
        bufp->chgBit(oldp+320,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u0__DOT__expb_00));
        bufp->chgBit(oldp+321,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u0__DOT__fracta_00));
        bufp->chgBit(oldp+322,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u0__DOT__fractb_00));
        bufp->chgBit(oldp+323,((vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opa_r 
                                >> 0x1fU)));
        bufp->chgBit(oldp+324,((vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opb_r 
                                >> 0x1fU)));
        bufp->chgBit(oldp+325,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__expa_lt_expb));
        bufp->chgCData(oldp+326,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__expa_lt_expb)
                                            ? (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opb_r 
                                               >> 0x17U)
                                            : (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opa_r 
                                               >> 0x17U)))),8);
        bufp->chgCData(oldp+327,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__exp_large),8);
        bufp->chgCData(oldp+328,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.u1__DOT____VdfgRegularize_h05e998eb_0_2)
                                   ? 0U : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__exp_diff2))),8);
        bufp->chgIData(oldp+329,((0x7fffffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__expa_lt_expb)
                                                ? vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opb_r
                                                : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opa_r))),23);
        bufp->chgBit(oldp+330,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__add_d));
        bufp->chgBit(oldp+331,((1U & (~ (IData)((0U 
                                                 != 
                                                 (0xffU 
                                                  & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opa_r 
                                                     >> 0x17U))))))));
        bufp->chgBit(oldp+332,((1U & (~ (IData)((0U 
                                                 != 
                                                 (0xffU 
                                                  & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opb_r 
                                                     >> 0x17U))))))));
        bufp->chgBit(oldp+333,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__add_r));
        bufp->chgBit(oldp+334,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__signa_r));
        bufp->chgBit(oldp+335,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__signb_r));
        bufp->chgBit(oldp+336,((0x1bU < ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.u1__DOT____VdfgRegularize_h05e998eb_0_2)
                                          ? 0U : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__exp_diff2)))));
        bufp->chgBit(oldp+337,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__expa_lt_expb)
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
        bufp->chgBit(oldp+338,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__fracta_lt_fractb));
        bufp->chgBit(oldp+339,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__fracta_eq_fractb));
        bufp->chgBit(oldp+340,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__fracta_eq_fractb)
                                 ? ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__signa_r) 
                                    & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__signb_r))
                                 : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__fracta_lt_fractb)
                                     ? (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__signb_r)
                                     : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__signa_r)))));
        bufp->chgCData(oldp+341,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__exp_large) 
                                           - ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__expa_lt_expb)
                                               ? (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opb_r 
                                                  >> 0x17U)
                                               : (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opa_r 
                                                  >> 0x17U))))),8);
        bufp->chgCData(oldp+342,((0xffU & (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__exp_large) 
                                            - ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__expa_lt_expb)
                                                ? (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opb_r 
                                                   >> 0x17U)
                                                : (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opa_r 
                                                   >> 0x17U))) 
                                           - (IData)(1U)))),8);
        bufp->chgCData(oldp+343,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__exp_diff2),8);
        bufp->chgBit(oldp+344,((1U & (~ ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__expa_lt_expb)
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
        bufp->chgCData(oldp+345,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fpu_op),3);
        bufp->chgBit(oldp+346,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__zero));
        bufp->chgIData(oldp+347,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opa_r),32);
        bufp->chgIData(oldp+348,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opb_r),32);
        bufp->chgBit(oldp+349,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__div_by_zero));
        bufp->chgBit(oldp+350,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__sign_fasu));
        bufp->chgIData(oldp+351,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fracta),27);
        bufp->chgIData(oldp+352,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fractb),27);
        bufp->chgCData(oldp+353,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_fasu),8);
        bufp->chgCData(oldp+354,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r),8);
        bufp->chgIData(oldp+355,((0x7ffffffU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.u3__DOT____VdfgRegularize_h60e48f75_0_0)),27);
        bufp->chgIData(oldp+356,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q),28);
        bufp->chgIData(oldp+357,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__out),31);
        bufp->chgBit(oldp+358,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__overflow));
        bufp->chgBit(oldp+359,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__underflow));
        bufp->chgBit(oldp+360,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__overflow));
        bufp->chgBit(oldp+361,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__underflow));
        bufp->chgBit(oldp+362,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__inf));
        bufp->chgBit(oldp+363,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__snan));
        bufp->chgBit(oldp+364,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__qnan));
        bufp->chgBit(oldp+365,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__ine));
        bufp->chgCData(oldp+366,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__rmode_r1),2);
        bufp->chgCData(oldp+367,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__rmode_r2),2);
        bufp->chgCData(oldp+368,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__rmode_r3),2);
        bufp->chgCData(oldp+369,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fpu_op_r1),3);
        bufp->chgCData(oldp+370,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fpu_op_r2),3);
        bufp->chgCData(oldp+371,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fpu_op_r3),3);
        bufp->chgIData(oldp+372,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__out_o1),32);
        bufp->chgBit(oldp+373,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__inf_o1));
        bufp->chgBit(oldp+374,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__snan_o1));
        bufp->chgBit(oldp+375,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__qnan_o1));
        bufp->chgBit(oldp+376,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__ine_o1));
        bufp->chgBit(oldp+377,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__overflow_o1));
        bufp->chgBit(oldp+378,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__underflow_o1));
        bufp->chgBit(oldp+379,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__zero_o1));
        bufp->chgBit(oldp+380,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__div_by_zero_o1));
        bufp->chgBit(oldp+381,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__inf_d));
        bufp->chgBit(oldp+382,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__ind_d));
        bufp->chgBit(oldp+383,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__qnan_d));
        bufp->chgBit(oldp+384,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__snan_d));
        bufp->chgBit(oldp+385,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opa_nan));
        bufp->chgBit(oldp+386,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opb_nan));
        bufp->chgBit(oldp+387,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opa_00));
        bufp->chgBit(oldp+388,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opb_00));
        bufp->chgBit(oldp+389,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opa_inf));
        bufp->chgBit(oldp+390,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opb_inf));
        bufp->chgBit(oldp+391,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opa_dn));
        bufp->chgBit(oldp+392,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opb_dn));
        bufp->chgBit(oldp+393,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__nan_sign_d));
        bufp->chgBit(oldp+394,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__result_zero_sign_d));
        bufp->chgBit(oldp+395,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__sign_fasu_r));
        bufp->chgBit(oldp+396,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fasu_op));
        bufp->chgBit(oldp+397,((1U & (~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fpu_op_r1)))));
        bufp->chgBit(oldp+398,((1U & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.u3__DOT____VdfgRegularize_h60e48f75_0_0 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+399,(((5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fpu_op_r3))
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
        bufp->chgQData(oldp+400,(((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                  << 0x14U)),48);
        bufp->chgBit(oldp+402,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__sign));
        bufp->chgIData(oldp+403,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opa_r1),31);
        bufp->chgBit(oldp+404,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opas_r1));
        bufp->chgBit(oldp+405,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opas_r2));
        bufp->chgBit(oldp+406,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opas_r2)
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
        bufp->chgBit(oldp+407,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fasu_op_r1));
        bufp->chgBit(oldp+408,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fasu_op_r2));
        bufp->chgIData(oldp+409,((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__VdfgRegularize_h16e0ae4d_5_0) 
                                   | ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fasu_op_r2)) 
                                      & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__ind_d)))
                                   ? 0x7fc00001U : 0x7f800000U)),31);
        bufp->chgBit(oldp+410,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__output_zero_fasu));
        bufp->chgBit(oldp+411,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__VdfgRegularize_h16e0ae4d_5_1) 
                                & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__overflow))));
        bufp->chgBit(oldp+412,((1U & (~ (IData)((0U 
                                                 != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__out))))));
        bufp->chgBit(oldp+413,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__VdfgRegularize_h16e0ae4d_5_1) 
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
        bufp->chgBit(oldp+414,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__VdfgRegularize_h16e0ae4d_5_2) 
                                & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__underflow))));
        bufp->chgBit(oldp+415,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opa_nan_r));
        bufp->chgIData(oldp+416,((0x7fffffffU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opa_r)),31);
        bufp->chgIData(oldp+417,((0x7fffffffU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opb_r)),31);
        bufp->chgCData(oldp+418,((0xffU & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opa_r 
                                           >> 0x17U))),8);
        bufp->chgCData(oldp+419,((0xffU & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opb_r 
                                           >> 0x17U))),8);
        bufp->chgIData(oldp+420,((0x7fffffU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opa_r)),23);
        bufp->chgIData(oldp+421,((0x7fffffU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opb_r)),23);
        bufp->chgBit(oldp+422,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u0__DOT__expa_ff));
        bufp->chgBit(oldp+423,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u0__DOT__infa_f_r));
        bufp->chgBit(oldp+424,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u0__DOT__qnan_r_a));
        bufp->chgBit(oldp+425,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u0__DOT__snan_r_a));
        bufp->chgBit(oldp+426,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u0__DOT__expb_ff));
        bufp->chgBit(oldp+427,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u0__DOT__infb_f_r));
        bufp->chgBit(oldp+428,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u0__DOT__qnan_r_b));
        bufp->chgBit(oldp+429,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u0__DOT__snan_r_b));
        bufp->chgBit(oldp+430,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u0__DOT__expa_00));
        bufp->chgBit(oldp+431,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u0__DOT__expb_00));
        bufp->chgBit(oldp+432,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u0__DOT__fracta_00));
        bufp->chgBit(oldp+433,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u0__DOT__fractb_00));
        bufp->chgBit(oldp+434,((vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opa_r 
                                >> 0x1fU)));
        bufp->chgBit(oldp+435,((vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opb_r 
                                >> 0x1fU)));
        bufp->chgBit(oldp+436,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__expa_lt_expb));
        bufp->chgCData(oldp+437,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__expa_lt_expb)
                                            ? (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opb_r 
                                               >> 0x17U)
                                            : (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opa_r 
                                               >> 0x17U)))),8);
        bufp->chgCData(oldp+438,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__exp_large),8);
        bufp->chgCData(oldp+439,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.u1__DOT____VdfgRegularize_h05e998eb_0_2)
                                   ? 0U : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__exp_diff2))),8);
        bufp->chgIData(oldp+440,((0x7fffffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__expa_lt_expb)
                                                ? vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opb_r
                                                : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opa_r))),23);
        bufp->chgBit(oldp+441,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__add_d));
        bufp->chgBit(oldp+442,((1U & (~ (IData)((0U 
                                                 != 
                                                 (0xffU 
                                                  & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opa_r 
                                                     >> 0x17U))))))));
        bufp->chgBit(oldp+443,((1U & (~ (IData)((0U 
                                                 != 
                                                 (0xffU 
                                                  & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opb_r 
                                                     >> 0x17U))))))));
        bufp->chgBit(oldp+444,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__add_r));
        bufp->chgBit(oldp+445,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__signa_r));
        bufp->chgBit(oldp+446,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__signb_r));
        bufp->chgBit(oldp+447,((0x1bU < ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.u1__DOT____VdfgRegularize_h05e998eb_0_2)
                                          ? 0U : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__exp_diff2)))));
        bufp->chgBit(oldp+448,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__expa_lt_expb)
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
        bufp->chgBit(oldp+449,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__fracta_lt_fractb));
        bufp->chgBit(oldp+450,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__fracta_eq_fractb));
        bufp->chgBit(oldp+451,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__fracta_eq_fractb)
                                 ? ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__signa_r) 
                                    & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__signb_r))
                                 : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__fracta_lt_fractb)
                                     ? (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__signb_r)
                                     : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__signa_r)))));
        bufp->chgCData(oldp+452,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__exp_large) 
                                           - ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__expa_lt_expb)
                                               ? (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opb_r 
                                                  >> 0x17U)
                                               : (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opa_r 
                                                  >> 0x17U))))),8);
        bufp->chgCData(oldp+453,((0xffU & (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__exp_large) 
                                            - ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__expa_lt_expb)
                                                ? (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opb_r 
                                                   >> 0x17U)
                                                : (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opa_r 
                                                   >> 0x17U))) 
                                           - (IData)(1U)))),8);
        bufp->chgCData(oldp+454,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__exp_diff2),8);
        bufp->chgBit(oldp+455,((1U & (~ ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__expa_lt_expb)
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
        bufp->chgIData(oldp+456,((0x7fffffU & (IData)(
                                                      (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_21 
                                                       >> 0x19U)))),23);
        bufp->chgCData(oldp+457,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__exp_out),8);
        bufp->chgBit(oldp+458,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_23) 
                                      >> 8U))));
        bufp->chgIData(oldp+459,((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__inf_out) 
                                   | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__ovf0))
                                   ? 0U : (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__max_num) 
                                            | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_46))
                                            ? 0x7fffffU
                                            : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__fract_out_rnd))),23);
        bufp->chgIData(oldp+460,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__fract_out_rnd),23);
        bufp->chgSData(oldp+461,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__exp_next_mi),9);
        bufp->chgBit(oldp+462,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__dn));
        bufp->chgCData(oldp+463,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__exp_out_final),8);
        bufp->chgCData(oldp+464,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__exp_out_rnd),8);
        bufp->chgBit(oldp+465,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__op_dn));
        bufp->chgBit(oldp+466,((2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__fpu_op_r3))));
        bufp->chgBit(oldp+467,((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__fpu_op_r3))));
        bufp->chgBit(oldp+468,((4U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__fpu_op_r3))));
        bufp->chgBit(oldp+469,((5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__fpu_op_r3))));
        bufp->chgCData(oldp+470,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__u6__DOT__fi_ldz_r0),6);
        bufp->chgBit(oldp+471,((1U & (IData)((vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_21 
                                              >> 0x19U)))));
        bufp->chgBit(oldp+472,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__r));
        bufp->chgBit(oldp+473,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__s));
        bufp->chgBit(oldp+474,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_27) 
                                | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__r) 
                                   & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__s)))));
        bufp->chgBit(oldp+475,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_37)
                                 ? ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__sign)) 
                                    & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_30) 
                                       | (3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__fpu_op_r3))))
                                 : ((5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__fpu_op_r3))
                                     ? ((2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__rmode_r3)) 
                                        & (((0U != 
                                             (0xfU 
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
        bufp->chgBit(oldp+476,((1U & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__exp_out_fe)) 
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
        bufp->chgBit(oldp+477,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_30) 
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
        bufp->chgBit(oldp+478,(((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__sign)) 
                                & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_30) 
                                   | (3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__fpu_op_r3))))));
        bufp->chgCData(oldp+479,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__exp_out) 
                                           + (1U & 
                                              (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_55 
                                               >> 0x17U))))),8);
        bufp->chgCData(oldp+480,((0xffU & (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_27) 
                                            & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__s) 
                                               & (0xffU 
                                                  == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__exp_r))))
                                            ? ((3U 
                                                == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__fpu_op_r3))
                                                ? (
                                                   (0x16U 
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
        bufp->chgCData(oldp+481,((((5U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__fpu_op_r3)) 
                                   & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_38))
                                   ? 0xfeU : (0xffU 
                                              & ((0x800000U 
                                                  & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_54)
                                                  ? 
                                                 ((IData)(1U) 
                                                  + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__exp_out))
                                                  : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__exp_out))))),8);
        bufp->chgCData(oldp+482,((0xffU & ((0x800000U 
                                            & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_54)
                                            ? ((IData)(1U) 
                                               + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__exp_out))
                                            : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__exp_out)))),8);
        bufp->chgIData(oldp+483,((0x7fffffU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_55)),23);
        bufp->chgIData(oldp+484,((((3U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__fpu_op_r3)) 
                                   & ((0xffU == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__exp_out)) 
                                      & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_53)))
                                   ? 0x7fffffU : (0x7fffffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_21 
                                                             >> 0x19U))))),23);
        bufp->chgIData(oldp+485,((((3U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__fpu_op_r3)) 
                                   & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_38) 
                                      & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_53)))
                                   ? 0x7fffffU : (0x7fffffU 
                                                  & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_54))),23);
        bufp->chgIData(oldp+486,((0x7fffffU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_54)),23);
        bufp->chgBit(oldp+487,((1U & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_55 
                                      >> 0x17U))));
        bufp->chgBit(oldp+488,((1U & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_54 
                                      >> 0x17U))));
        bufp->chgBit(oldp+489,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__ovf0));
        bufp->chgBit(oldp+490,(((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__dn)) 
                                & (0xffU == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__exp_out)))));
        bufp->chgIData(oldp+491,((0xffffffU & ((IData)(1U) 
                                               + (0x7fffffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_21 
                                                             >> 0x19U)))))),24);
        bufp->chgCData(oldp+492,((0xffU & ((IData)(1U) 
                                           + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__exp_out)))),8);
        bufp->chgCData(oldp+493,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__exp_out) 
                                           - (IData)(1U)))),8);
        bufp->chgBit(oldp+494,((1U & (~ (IData)((0U 
                                                 != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__exp_out)))))));
        bufp->chgBit(oldp+495,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__exp_out_fe));
        bufp->chgBit(oldp+496,((0xffU == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__exp_out))));
        bufp->chgBit(oldp+497,((1U & (~ (IData)((0U 
                                                 != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__exp_r)))))));
        bufp->chgBit(oldp+498,((0xffU == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__exp_r))));
        bufp->chgBit(oldp+499,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_51) 
                                | ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__max_num)) 
                                   & (0xffU == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__exp_out_rnd))))));
        bufp->chgBit(oldp+500,((0x7fffffU == (0x7fffffU 
                                              & (IData)(
                                                        (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_21 
                                                         >> 0x19U))))));
        bufp->chgIData(oldp+501,((0x1ffffffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_21))),25);
        bufp->chgCData(oldp+502,((0xffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_23))),8);
        bufp->chgBit(oldp+503,((1U & (~ (IData)((0U 
                                                 != 
                                                 (0x7fffffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_21 
                                                             >> 0x19U)))))))));
        bufp->chgBit(oldp+504,((1U & (~ (IData)((0U 
                                                 != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__fract_out_q))))));
        bufp->chgBit(oldp+505,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_14) 
                                      >> 8U))));
        bufp->chgSData(oldp+506,((0x1ffU & ((IData)(1U) 
                                            + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__exp_r)))),9);
        bufp->chgSData(oldp+507,((0x1ffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__exp_r) 
                                            - (IData)(1U)))),9);
        bufp->chgQData(oldp+508,(((0U != (3U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__shift_right) 
                                                >> 6U)))
                                   ? 0ULL : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__fract_in_shftr_1)),48);
        bufp->chgQData(oldp+510,((((0U != (3U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__shift_left) 
                                                 >> 6U))) 
                                   | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__f2i_zero) 
                                      & (5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__fpu_op_r3))))
                                   ? 0ULL : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__fract_in_shftl_1)),48);
        bufp->chgQData(oldp+512,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__fract_in_shftr_1),48);
        bufp->chgQData(oldp+514,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__fract_in_shftl_1),48);
        bufp->chgCData(oldp+516,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__exp_div),8);
        bufp->chgCData(oldp+517,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_23) 
                                           - (IData)(1U)))),8);
        bufp->chgBit(oldp+518,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__div_dn));
        bufp->chgBit(oldp+519,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__grs_sel_div));
        bufp->chgBit(oldp+520,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__div_inf));
        bufp->chgCData(oldp+521,((0x7fU & ((IData)(0x17U) 
                                           - (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__u6__DOT__fi_ldz_r0)))),7);
        bufp->chgCData(oldp+522,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__fi_ldz_2),8);
        bufp->chgCData(oldp+523,((0xffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_70))),8);
        bufp->chgCData(oldp+524,((0xffU & ((IData)(2U) 
                                           + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__exp_r)))),8);
        bufp->chgCData(oldp+525,((0xffU & (- (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__exp_r)))),8);
        bufp->chgBit(oldp+526,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_70) 
                                      >> 8U))));
        bufp->chgSData(oldp+527,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__div_exp1),9);
        bufp->chgCData(oldp+528,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__div_exp2),8);
        bufp->chgCData(oldp+529,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__exp_r) 
                                           + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__fi_ldz_2)))),8);
        bufp->chgBit(oldp+530,((1U & ((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__fpu_op_r3))
                                       ? (~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__div_dn))
                                       : ((2U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__fpu_op_r3)) 
                                          | ((0U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__exp_r)) 
                                             | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_62)))))));
        bufp->chgBit(oldp+531,(((0U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__exp_r)) 
                                | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_62))));
        bufp->chgBit(oldp+532,((1U & (~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__div_dn)))));
        bufp->chgCData(oldp+533,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__shift_right),8);
        bufp->chgCData(oldp+534,((0xffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_14))),8);
        bufp->chgCData(oldp+535,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__div_dn)
                                            ? (- (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__exp_r))
                                            : ((IData)(2U) 
                                               + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__exp_r))))),8);
        bufp->chgCData(oldp+536,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__shift_left),8);
        bufp->chgCData(oldp+537,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_62)
                                            ? ((IData)(1U) 
                                               + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__exp_r))
                                            : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__u6__DOT__fi_ldz_r0)))),8);
        bufp->chgCData(oldp+538,((0xffU & (((~ (IData)(
                                                       (0U 
                                                        != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__exp_out)))) 
                                            & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__op_dn))
                                            ? (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_70)
                                            : ((1U 
                                                & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__op_dn)) 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__exp_out))))))
                                                ? (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__exp_r)
                                                : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__u6__DOT__fi_ldz_r0))))),8);
        bufp->chgCData(oldp+539,((0xffU & ((1U & ((~ (IData)(
                                                             (0U 
                                                              != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__exp_out)))) 
                                                  | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__dn)))
                                            ? ((0U 
                                                != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__exp_r))
                                                ? ((IData)(1U) 
                                                   + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__exp_r))
                                                : 2U)
                                            : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__u6__DOT__fi_ldz_r0)))),8);
        bufp->chgCData(oldp+540,((0xffU & ((0x16U < (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__u6__DOT__fi_ldz_r0))
                                            ? ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__exp_r) 
                                               - (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                                     - (IData)(0x16U))))
                                            : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__exp_r) 
                                               - (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                                     - (IData)(1U))))))),8);
        bufp->chgCData(oldp+541,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__exp_r) 
                                           - (0x3fU 
                                              & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                                 - (IData)(0x16U)))))),8);
        bufp->chgCData(oldp+542,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__exp_r) 
                                           - (0x3fU 
                                              & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                                 - (IData)(1U)))))),8);
        bufp->chgCData(oldp+543,((0x3fU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                           - (IData)(1U)))),6);
        bufp->chgCData(oldp+544,((0x3fU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                           - (IData)(0x16U)))),6);
        bufp->chgBit(oldp+545,(((2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__fpu_op_r3)) 
                                & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_23) 
                                   >> 8U))));
        bufp->chgCData(oldp+546,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__u6__DOT__fi_ldz_r0),7);
        bufp->chgSData(oldp+547,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__exp_r),9);
        bufp->chgCData(oldp+548,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__exp_r) 
                                           - (IData)(0x7dU)))),8);
        bufp->chgQData(oldp+549,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__Vcellout__u3__shift_out),56);
        bufp->chgBit(oldp+551,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__f2i_zero));
        bufp->chgBit(oldp+552,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__f2i_max));
        bufp->chgCData(oldp+553,(((0U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__rmode_r3))
                                   ? 0x7eU : 0x7fU)),8);
        bufp->chgCData(oldp+554,((0xffU & ((5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__fpu_op_r3))
                                            ? ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__exp_r) 
                                               - (IData)(0x7dU))
                                            : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__u6__DOT__fi_ldz_r0)))),8);
        bufp->chgCData(oldp+555,((0xffU & ((0U != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__fract_out_q)
                                            ? ((IData)(0x9eU) 
                                               - (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__u6__DOT__fi_ldz_r0))
                                            : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__opas_r2)
                                                ? 0x9eU
                                                : 0U)))),8);
        bufp->chgCData(oldp+556,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__f2i_zero)
                                   ? 0U : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__f2i_max)
                                            ? 0xffU
                                            : 0U))),8);
        bufp->chgCData(oldp+557,((0xffU & ((5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__fpu_op_r3))
                                            ? ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__f2i_zero)
                                                ? 0U
                                                : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__f2i_max)
                                                    ? 0xffU
                                                    : 0U))
                                            : ((0U 
                                                != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__fract_out_q)
                                                ? ((IData)(0x9eU) 
                                                   - (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__u6__DOT__fi_ldz_r0))
                                                : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__opas_r2)
                                                    ? 0x9eU
                                                    : 0U))))),8);
        bufp->chgBit(oldp+558,(((2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__rmode_r3)) 
                                & (((0U != (0xfU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__fract_out_q)) 
                                    & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__opas_r2)) 
                                       & (0x80U > (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__exp_r)))) 
                                   | (0U != (0x1ffffffU 
                                             & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_21)))))));
        bufp->chgBit(oldp+559,((IData)((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__exp_r) 
                                         >> 7U) & (~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x7fU 
                                                               & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__exp_r)))))))));
        bufp->chgBit(oldp+560,((0U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__rmode_r3))));
        bufp->chgBit(oldp+561,((1U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__rmode_r3))));
        bufp->chgBit(oldp+562,((2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__rmode_r3))));
        bufp->chgBit(oldp+563,((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__rmode_r3))));
        bufp->chgBit(oldp+564,((0U != (0xfU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__fract_out_q))));
        bufp->chgBit(oldp+565,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__max_num));
        bufp->chgBit(oldp+566,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__inf_out));
        bufp->chgBit(oldp+567,(((0U != (0x1ffffffU 
                                        & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_21))) 
                                & ((~ (IData)((0xffU 
                                               == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__exp_r)))) 
                                   & (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_14) 
                                       >> 8U) | ((~ (IData)(
                                                            (0U 
                                                             != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__exp_r)))) 
                                                 | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_63)))))));
        bufp->chgBit(oldp+568,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__inf_out) 
                                | (((0U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__rmode_r3)) 
                                    & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__max_num)) 
                                   | (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__exp_r) 
                                       >> 7U) & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__op_dn) 
                                                 & (0xffU 
                                                    == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__exp_out))))))));
        bufp->chgBit(oldp+569,(((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__inf_out)) 
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
        bufp->chgBit(oldp+570,((1U & (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_14) 
                                       >> 8U) | ((~ (IData)(
                                                            (0U 
                                                             != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__exp_r)))) 
                                                 | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__VdfgRegularize_he8d392c1_0_63))))));
        bufp->chgBit(oldp+571,((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__f2i_zero) 
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
        bufp->chgCData(oldp+572,((0x3fU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__shift_right))),6);
        bufp->chgCData(oldp+573,((0x3fU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__exp_r) 
                                           - (IData)(0x3dU)))),6);
        bufp->chgQData(oldp+574,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__Vcellout__u3__shift_out),48);
        bufp->chgCData(oldp+576,((0x3fU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__PVT__shift_left))),6);
        bufp->chgIData(oldp+577,((0x7fffffU & (IData)(
                                                      (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_21 
                                                       >> 0x19U)))),23);
        bufp->chgCData(oldp+578,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__exp_out),8);
        bufp->chgBit(oldp+579,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_23) 
                                      >> 8U))));
        bufp->chgIData(oldp+580,((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__inf_out) 
                                   | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__ovf0) 
                                      | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__or_result)))
                                   ? 0U : (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__max_num) 
                                            | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_46))
                                            ? 0x7fffffU
                                            : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__fract_out_rnd))),23);
        bufp->chgIData(oldp+581,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__fract_out_rnd),23);
        bufp->chgSData(oldp+582,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__exp_next_mi),9);
        bufp->chgBit(oldp+583,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__dn));
        bufp->chgCData(oldp+584,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__exp_out_final),8);
        bufp->chgCData(oldp+585,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__exp_out_rnd),8);
        bufp->chgBit(oldp+586,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__op_dn));
        bufp->chgBit(oldp+587,((2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__fpu_op_r3))));
        bufp->chgBit(oldp+588,((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__fpu_op_r3))));
        bufp->chgBit(oldp+589,((4U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__fpu_op_r3))));
        bufp->chgBit(oldp+590,((5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__fpu_op_r3))));
        bufp->chgCData(oldp+591,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__u6__DOT__fi_ldz_r0),6);
        bufp->chgBit(oldp+592,((1U & (IData)((vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_21 
                                              >> 0x19U)))));
        bufp->chgBit(oldp+593,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__r));
        bufp->chgBit(oldp+594,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__s));
        bufp->chgBit(oldp+595,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_27) 
                                | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__r) 
                                   & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__s)))));
        bufp->chgBit(oldp+596,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_37)
                                 ? ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__sign)) 
                                    & ((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__exp_ovf_r) 
                                         >> 1U) & (
                                                   (0U 
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
                                        & (((0U != 
                                             (0xffffffU 
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
        bufp->chgBit(oldp+597,((1U & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__exp_out_fe)) 
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
        bufp->chgBit(oldp+598,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_30) 
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
        bufp->chgBit(oldp+599,(((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__sign)) 
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
                                         | ((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__fpu_op_r3)) 
                                            | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_59) 
                                               & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_23) 
                                                  >> 8U)))))))));
        bufp->chgCData(oldp+600,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__exp_out) 
                                           + (1U & 
                                              (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_55 
                                               >> 0x17U))))),8);
        bufp->chgCData(oldp+601,((0xffU & (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_27) 
                                            & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__s) 
                                               & (0xffU 
                                                  == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__exp_r))))
                                            ? ((3U 
                                                == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__fpu_op_r3))
                                                ? (
                                                   (0x16U 
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
        bufp->chgCData(oldp+602,((((5U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__fpu_op_r3)) 
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
        bufp->chgCData(oldp+603,((0xffU & ((0x800000U 
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
        bufp->chgIData(oldp+604,((0x7fffffU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_55)),23);
        bufp->chgIData(oldp+605,((((3U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__fpu_op_r3)) 
                                   & ((0xffU == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__exp_out)) 
                                      & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_53)))
                                   ? 0x7fffffU : (0x7fffffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_21 
                                                             >> 0x19U))))),23);
        bufp->chgIData(oldp+606,((((3U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__fpu_op_r3)) 
                                   & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_38) 
                                      & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_53)))
                                   ? 0x7fffffU : (0x7fffffU 
                                                  & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_54))),23);
        bufp->chgIData(oldp+607,((0x7fffffU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_54)),23);
        bufp->chgBit(oldp+608,((1U & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_55 
                                      >> 0x17U))));
        bufp->chgBit(oldp+609,((1U & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_54 
                                      >> 0x17U))));
        bufp->chgBit(oldp+610,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__ovf0));
        bufp->chgBit(oldp+611,(((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__dn)) 
                                & (0xffU == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__exp_out)))));
        bufp->chgIData(oldp+612,((0xffffffU & ((IData)(1U) 
                                               + (0x7fffffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_21 
                                                             >> 0x19U)))))),24);
        bufp->chgCData(oldp+613,((0xffU & ((IData)(1U) 
                                           + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__exp_out)))),8);
        bufp->chgCData(oldp+614,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__exp_out) 
                                           - (IData)(1U)))),8);
        bufp->chgBit(oldp+615,((1U & (~ (IData)((0U 
                                                 != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__exp_out)))))));
        bufp->chgBit(oldp+616,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__exp_out_fe));
        bufp->chgBit(oldp+617,((0xffU == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__exp_out))));
        bufp->chgBit(oldp+618,((1U & (~ (IData)((0U 
                                                 != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__exp_r)))))));
        bufp->chgBit(oldp+619,((0xffU == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__exp_r))));
        bufp->chgBit(oldp+620,(((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_48)) 
                                & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_51) 
                                   | ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__max_num)) 
                                      & (0xffU == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__exp_out_rnd)))))));
        bufp->chgBit(oldp+621,((0x7fffffU == (0x7fffffU 
                                              & (IData)(
                                                        (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_21 
                                                         >> 0x19U))))));
        bufp->chgIData(oldp+622,((0x1ffffffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_21))),25);
        bufp->chgCData(oldp+623,((0xffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_23))),8);
        bufp->chgBit(oldp+624,((1U & (~ (IData)((0U 
                                                 != 
                                                 (0x7fffffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_21 
                                                             >> 0x19U)))))))));
        bufp->chgBit(oldp+625,((1U & (~ (IData)((0U 
                                                 != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__fract_denorm))))));
        bufp->chgBit(oldp+626,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_14) 
                                      >> 8U))));
        bufp->chgSData(oldp+627,((0x1ffU & ((IData)(1U) 
                                            + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__exp_r)))),9);
        bufp->chgSData(oldp+628,((0x1ffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__exp_r) 
                                            - (IData)(1U)))),9);
        bufp->chgQData(oldp+629,(((0U != (3U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__shift_right) 
                                                >> 6U)))
                                   ? 0ULL : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__fract_in_shftr_1)),48);
        bufp->chgQData(oldp+631,((((0U != (3U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__shift_left) 
                                                 >> 6U))) 
                                   | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__f2i_zero) 
                                      & (5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__fpu_op_r3))))
                                   ? 0ULL : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__fract_in_shftl_1)),48);
        bufp->chgQData(oldp+633,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__fract_in_shftr_1),48);
        bufp->chgQData(oldp+635,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__fract_in_shftl_1),48);
        bufp->chgCData(oldp+637,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__exp_div),8);
        bufp->chgCData(oldp+638,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_23) 
                                           - (IData)(1U)))),8);
        bufp->chgBit(oldp+639,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__div_dn));
        bufp->chgBit(oldp+640,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_15) 
                                & ((~ (IData)((0U != 
                                               (0xffffffU 
                                                & (IData)(
                                                          (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__fract_denorm 
                                                           >> 0x17U)))))) 
                                   & (0x16U < (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__exp_r))))));
        bufp->chgBit(oldp+641,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__grs_sel_div));
        bufp->chgBit(oldp+642,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__div_inf));
        bufp->chgCData(oldp+643,((0x7fU & ((IData)(0x17U) 
                                           - (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__u6__DOT__fi_ldz_r0)))),7);
        bufp->chgCData(oldp+644,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__fi_ldz_2),8);
        bufp->chgCData(oldp+645,((0xffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_70))),8);
        bufp->chgCData(oldp+646,((0xffU & ((IData)(2U) 
                                           + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__exp_r)))),8);
        bufp->chgCData(oldp+647,((0xffU & (- (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__exp_r)))),8);
        bufp->chgBit(oldp+648,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_70) 
                                      >> 8U))));
        bufp->chgSData(oldp+649,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__div_exp1),9);
        bufp->chgCData(oldp+650,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__div_exp2),8);
        bufp->chgCData(oldp+651,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__exp_r) 
                                           + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__fi_ldz_2)))),8);
        bufp->chgBit(oldp+652,((1U & ((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__fpu_op_r3))
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
        bufp->chgBit(oldp+653,((1U & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_61)) 
                                      | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_62)))));
        bufp->chgBit(oldp+654,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_67) 
                                      | ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_15)) 
                                         & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__div_dn)) 
                                            & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_66) 
                                               | ((~ 
                                                   ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__exp_ovf_r) 
                                                    >> 1U)) 
                                                  | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_65)))))))));
        bufp->chgCData(oldp+655,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__shift_right),8);
        bufp->chgCData(oldp+656,((0xffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_14))),8);
        bufp->chgCData(oldp+657,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_15)
                                            ? (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__exp_r)
                                            : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__div_dn)
                                                ? (- (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__exp_r))
                                                : ((IData)(2U) 
                                                   + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__exp_r)))))),8);
        bufp->chgCData(oldp+658,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__shift_left),8);
        bufp->chgCData(oldp+659,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_62)
                                            ? ((IData)(1U) 
                                               + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__exp_r))
                                            : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__u6__DOT__fi_ldz_r0)))),8);
        bufp->chgCData(oldp+660,((0xffU & (((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_20)) 
                                            & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_66))
                                            ? (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_70)
                                            : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_65)
                                                ? (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__exp_r)
                                                : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__u6__DOT__fi_ldz_r0))))),8);
        bufp->chgCData(oldp+661,((0xffU & ((1U & ((~ (IData)(
                                                             (0U 
                                                              != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__exp_out)))) 
                                                  | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__dn)))
                                            ? ((0U 
                                                != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__exp_r))
                                                ? ((IData)(1U) 
                                                   + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__exp_r))
                                                : 2U)
                                            : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__u6__DOT__fi_ldz_r0)))),8);
        bufp->chgCData(oldp+662,((0xffU & ((0x16U < (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__u6__DOT__fi_ldz_r0))
                                            ? ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__exp_r) 
                                               - (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                                     - (IData)(0x16U))))
                                            : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__exp_r) 
                                               - (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                                     - (IData)(1U))))))),8);
        bufp->chgCData(oldp+663,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__exp_r) 
                                           - (0x3fU 
                                              & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                                 - (IData)(0x16U)))))),8);
        bufp->chgCData(oldp+664,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__exp_r) 
                                           - (0x3fU 
                                              & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                                 - (IData)(1U)))))),8);
        bufp->chgCData(oldp+665,((0x3fU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                           - (IData)(1U)))),6);
        bufp->chgCData(oldp+666,((0x3fU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                           - (IData)(0x16U)))),6);
        bufp->chgBit(oldp+667,((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_59) 
                                 & (2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__fpu_op_r3))) 
                                | ((2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__fpu_op_r3)) 
                                   & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_23) 
                                      >> 8U)))));
        bufp->chgCData(oldp+668,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__u6__DOT__fi_ldz_r0),7);
        bufp->chgSData(oldp+669,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__exp_r),9);
        bufp->chgCData(oldp+670,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__exp_r) 
                                           - (IData)(0x7dU)))),8);
        bufp->chgQData(oldp+671,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__Vcellout__u3__shift_out),56);
        bufp->chgBit(oldp+673,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__f2i_zero));
        bufp->chgBit(oldp+674,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__f2i_max));
        bufp->chgCData(oldp+675,(((0U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__rmode_r3))
                                   ? 0x7eU : 0x7fU)),8);
        bufp->chgCData(oldp+676,((0xffU & ((5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__fpu_op_r3))
                                            ? ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__exp_r) 
                                               - (IData)(0x7dU))
                                            : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__u6__DOT__fi_ldz_r0)))),8);
        bufp->chgCData(oldp+677,((0xffU & ((0U != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__fract_denorm)
                                            ? ((IData)(0x9eU) 
                                               - (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__u6__DOT__fi_ldz_r0))
                                            : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__opas_r2)
                                                ? 0x9eU
                                                : 0U)))),8);
        bufp->chgCData(oldp+678,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__f2i_zero)
                                   ? 0U : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__f2i_max)
                                            ? 0xffU
                                            : 0U))),8);
        bufp->chgCData(oldp+679,((0xffU & ((5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__fpu_op_r3))
                                            ? ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__f2i_zero)
                                                ? 0U
                                                : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__f2i_max)
                                                    ? 0xffU
                                                    : 0U))
                                            : ((0U 
                                                != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__fract_denorm)
                                                ? ((IData)(0x9eU) 
                                                   - (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__u6__DOT__fi_ldz_r0))
                                                : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__opas_r2)
                                                    ? 0x9eU
                                                    : 0U))))),8);
        bufp->chgBit(oldp+680,(((2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__rmode_r3)) 
                                & (((0U != (0xffffffU 
                                            & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__fract_denorm))) 
                                    & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__opas_r2)) 
                                       & (0x80U > (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__exp_r)))) 
                                   | (0U != (0x1ffffffU 
                                             & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_21)))))));
        bufp->chgBit(oldp+681,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__exp_in_80));
        bufp->chgBit(oldp+682,((0U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__rmode_r3))));
        bufp->chgBit(oldp+683,((1U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__rmode_r3))));
        bufp->chgBit(oldp+684,((2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__rmode_r3))));
        bufp->chgBit(oldp+685,((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__rmode_r3))));
        bufp->chgBit(oldp+686,((0U != (0xffffffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__fract_denorm)))));
        bufp->chgBit(oldp+687,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__max_num));
        bufp->chgBit(oldp+688,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__inf_out));
        bufp->chgBit(oldp+689,((((0U != (0x1ffffffU 
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
        bufp->chgBit(oldp+690,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__inf_out) 
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
        bufp->chgBit(oldp+691,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__undeflow_div));
        bufp->chgBit(oldp+692,((IData)(((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_14) 
                                          >> 8U) | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_61)) 
                                        | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__VdfgRegularize_he8d392c1_0_63)))));
        bufp->chgBit(oldp+693,((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__f2i_zero) 
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
        bufp->chgCData(oldp+694,((0x3fU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__shift_right))),6);
        bufp->chgCData(oldp+695,((0x3fU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__exp_r) 
                                           - (IData)(0x3dU)))),6);
        bufp->chgQData(oldp+696,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__Vcellout__u3__shift_out),48);
        bufp->chgCData(oldp+698,((0x3fU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__PVT__shift_left))),6);
        bufp->chgIData(oldp+699,((0x7fffffU & (IData)(
                                                      (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_21 
                                                       >> 0x19U)))),23);
        bufp->chgCData(oldp+700,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__exp_out),8);
        bufp->chgBit(oldp+701,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_23) 
                                      >> 8U))));
        bufp->chgIData(oldp+702,((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__inf_out) 
                                   | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__ovf0))
                                   ? 0U : (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__max_num) 
                                            | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_46))
                                            ? 0x7fffffU
                                            : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__fract_out_rnd))),23);
        bufp->chgIData(oldp+703,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__fract_out_rnd),23);
        bufp->chgSData(oldp+704,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__exp_next_mi),9);
        bufp->chgBit(oldp+705,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__dn));
        bufp->chgCData(oldp+706,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__exp_out_final),8);
        bufp->chgCData(oldp+707,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__exp_out_rnd),8);
        bufp->chgBit(oldp+708,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__op_dn));
        bufp->chgBit(oldp+709,((2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__fpu_op_r3))));
        bufp->chgBit(oldp+710,((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__fpu_op_r3))));
        bufp->chgBit(oldp+711,((4U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__fpu_op_r3))));
        bufp->chgBit(oldp+712,((5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__fpu_op_r3))));
        bufp->chgCData(oldp+713,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__u6__DOT__fi_ldz_r0),6);
        bufp->chgBit(oldp+714,((1U & (IData)((vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_21 
                                              >> 0x19U)))));
        bufp->chgBit(oldp+715,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__r));
        bufp->chgBit(oldp+716,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__s));
        bufp->chgBit(oldp+717,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_27) 
                                | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__r) 
                                   & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__s)))));
        bufp->chgBit(oldp+718,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_37)
                                 ? ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__sign)) 
                                    & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_30) 
                                       | (3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__fpu_op_r3))))
                                 : ((5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__fpu_op_r3))
                                     ? ((2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__rmode_r3)) 
                                        & (((0U != 
                                             (0xfU 
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
        bufp->chgBit(oldp+719,((1U & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__exp_out_fe)) 
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
        bufp->chgBit(oldp+720,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_30) 
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
        bufp->chgBit(oldp+721,(((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__sign)) 
                                & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_30) 
                                   | (3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__fpu_op_r3))))));
        bufp->chgCData(oldp+722,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__exp_out) 
                                           + (1U & 
                                              (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_55 
                                               >> 0x17U))))),8);
        bufp->chgCData(oldp+723,((0xffU & (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_27) 
                                            & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__s) 
                                               & (0xffU 
                                                  == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__exp_r))))
                                            ? ((3U 
                                                == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__fpu_op_r3))
                                                ? (
                                                   (0x16U 
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
        bufp->chgCData(oldp+724,((((5U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__fpu_op_r3)) 
                                   & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_38))
                                   ? 0xfeU : (0xffU 
                                              & ((0x800000U 
                                                  & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_54)
                                                  ? 
                                                 ((IData)(1U) 
                                                  + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__exp_out))
                                                  : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__exp_out))))),8);
        bufp->chgCData(oldp+725,((0xffU & ((0x800000U 
                                            & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_54)
                                            ? ((IData)(1U) 
                                               + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__exp_out))
                                            : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__exp_out)))),8);
        bufp->chgIData(oldp+726,((0x7fffffU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_55)),23);
        bufp->chgIData(oldp+727,((((3U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__fpu_op_r3)) 
                                   & ((0xffU == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__exp_out)) 
                                      & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_53)))
                                   ? 0x7fffffU : (0x7fffffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_21 
                                                             >> 0x19U))))),23);
        bufp->chgIData(oldp+728,((((3U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__fpu_op_r3)) 
                                   & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_38) 
                                      & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_53)))
                                   ? 0x7fffffU : (0x7fffffU 
                                                  & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_54))),23);
        bufp->chgIData(oldp+729,((0x7fffffU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_54)),23);
        bufp->chgBit(oldp+730,((1U & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_55 
                                      >> 0x17U))));
        bufp->chgBit(oldp+731,((1U & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_54 
                                      >> 0x17U))));
        bufp->chgBit(oldp+732,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__ovf0));
        bufp->chgBit(oldp+733,(((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__dn)) 
                                & (0xffU == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__exp_out)))));
        bufp->chgIData(oldp+734,((0xffffffU & ((IData)(1U) 
                                               + (0x7fffffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_21 
                                                             >> 0x19U)))))),24);
        bufp->chgCData(oldp+735,((0xffU & ((IData)(1U) 
                                           + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__exp_out)))),8);
        bufp->chgCData(oldp+736,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__exp_out) 
                                           - (IData)(1U)))),8);
        bufp->chgBit(oldp+737,((1U & (~ (IData)((0U 
                                                 != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__exp_out)))))));
        bufp->chgBit(oldp+738,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__exp_out_fe));
        bufp->chgBit(oldp+739,((0xffU == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__exp_out))));
        bufp->chgBit(oldp+740,((1U & (~ (IData)((0U 
                                                 != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__exp_r)))))));
        bufp->chgBit(oldp+741,((0xffU == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__exp_r))));
        bufp->chgBit(oldp+742,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_51) 
                                | ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__max_num)) 
                                   & (0xffU == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__exp_out_rnd))))));
        bufp->chgBit(oldp+743,((0x7fffffU == (0x7fffffU 
                                              & (IData)(
                                                        (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_21 
                                                         >> 0x19U))))));
        bufp->chgIData(oldp+744,((0x1ffffffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_21))),25);
        bufp->chgCData(oldp+745,((0xffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_23))),8);
        bufp->chgBit(oldp+746,((1U & (~ (IData)((0U 
                                                 != 
                                                 (0x7fffffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_21 
                                                             >> 0x19U)))))))));
        bufp->chgBit(oldp+747,((1U & (~ (IData)((0U 
                                                 != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__fract_out_q))))));
        bufp->chgBit(oldp+748,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_14) 
                                      >> 8U))));
        bufp->chgSData(oldp+749,((0x1ffU & ((IData)(1U) 
                                            + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__exp_r)))),9);
        bufp->chgSData(oldp+750,((0x1ffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__exp_r) 
                                            - (IData)(1U)))),9);
        bufp->chgQData(oldp+751,(((0U != (3U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__shift_right) 
                                                >> 6U)))
                                   ? 0ULL : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__fract_in_shftr_1)),48);
        bufp->chgQData(oldp+753,((((0U != (3U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__shift_left) 
                                                 >> 6U))) 
                                   | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__f2i_zero) 
                                      & (5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__fpu_op_r3))))
                                   ? 0ULL : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__fract_in_shftl_1)),48);
        bufp->chgQData(oldp+755,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__fract_in_shftr_1),48);
        bufp->chgQData(oldp+757,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__fract_in_shftl_1),48);
        bufp->chgCData(oldp+759,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__exp_div),8);
        bufp->chgCData(oldp+760,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_23) 
                                           - (IData)(1U)))),8);
        bufp->chgBit(oldp+761,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__div_dn));
        bufp->chgBit(oldp+762,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__grs_sel_div));
        bufp->chgBit(oldp+763,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__div_inf));
        bufp->chgCData(oldp+764,((0x7fU & ((IData)(0x17U) 
                                           - (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__u6__DOT__fi_ldz_r0)))),7);
        bufp->chgCData(oldp+765,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__fi_ldz_2),8);
        bufp->chgCData(oldp+766,((0xffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_70))),8);
        bufp->chgCData(oldp+767,((0xffU & ((IData)(2U) 
                                           + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__exp_r)))),8);
        bufp->chgCData(oldp+768,((0xffU & (- (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__exp_r)))),8);
        bufp->chgBit(oldp+769,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_70) 
                                      >> 8U))));
        bufp->chgSData(oldp+770,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__div_exp1),9);
        bufp->chgCData(oldp+771,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__div_exp2),8);
        bufp->chgCData(oldp+772,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__exp_r) 
                                           + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__fi_ldz_2)))),8);
        bufp->chgBit(oldp+773,((1U & ((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__fpu_op_r3))
                                       ? (~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__div_dn))
                                       : ((2U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__fpu_op_r3)) 
                                          | ((0U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__exp_r)) 
                                             | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_62)))))));
        bufp->chgBit(oldp+774,(((0U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__exp_r)) 
                                | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_62))));
        bufp->chgBit(oldp+775,((1U & (~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__div_dn)))));
        bufp->chgCData(oldp+776,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__shift_right),8);
        bufp->chgCData(oldp+777,((0xffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_14))),8);
        bufp->chgCData(oldp+778,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__div_dn)
                                            ? (- (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__exp_r))
                                            : ((IData)(2U) 
                                               + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__exp_r))))),8);
        bufp->chgCData(oldp+779,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__shift_left),8);
        bufp->chgCData(oldp+780,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_62)
                                            ? ((IData)(1U) 
                                               + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__exp_r))
                                            : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__u6__DOT__fi_ldz_r0)))),8);
        bufp->chgCData(oldp+781,((0xffU & (((~ (IData)(
                                                       (0U 
                                                        != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__exp_out)))) 
                                            & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__op_dn))
                                            ? (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_70)
                                            : ((1U 
                                                & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__op_dn)) 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__exp_out))))))
                                                ? (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__exp_r)
                                                : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__u6__DOT__fi_ldz_r0))))),8);
        bufp->chgCData(oldp+782,((0xffU & ((1U & ((~ (IData)(
                                                             (0U 
                                                              != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__exp_out)))) 
                                                  | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__dn)))
                                            ? ((0U 
                                                != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__exp_r))
                                                ? ((IData)(1U) 
                                                   + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__exp_r))
                                                : 2U)
                                            : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__u6__DOT__fi_ldz_r0)))),8);
        bufp->chgCData(oldp+783,((0xffU & ((0x16U < (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__u6__DOT__fi_ldz_r0))
                                            ? ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__exp_r) 
                                               - (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                                     - (IData)(0x16U))))
                                            : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__exp_r) 
                                               - (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                                     - (IData)(1U))))))),8);
        bufp->chgCData(oldp+784,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__exp_r) 
                                           - (0x3fU 
                                              & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                                 - (IData)(0x16U)))))),8);
        bufp->chgCData(oldp+785,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__exp_r) 
                                           - (0x3fU 
                                              & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                                 - (IData)(1U)))))),8);
        bufp->chgCData(oldp+786,((0x3fU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                           - (IData)(1U)))),6);
        bufp->chgCData(oldp+787,((0x3fU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                           - (IData)(0x16U)))),6);
        bufp->chgBit(oldp+788,(((2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__fpu_op_r3)) 
                                & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_23) 
                                   >> 8U))));
        bufp->chgCData(oldp+789,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__u6__DOT__fi_ldz_r0),7);
        bufp->chgSData(oldp+790,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__exp_r),9);
        bufp->chgCData(oldp+791,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__exp_r) 
                                           - (IData)(0x7dU)))),8);
        bufp->chgQData(oldp+792,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__Vcellout__u3__shift_out),56);
        bufp->chgBit(oldp+794,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__f2i_zero));
        bufp->chgBit(oldp+795,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__f2i_max));
        bufp->chgCData(oldp+796,(((0U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__rmode_r3))
                                   ? 0x7eU : 0x7fU)),8);
        bufp->chgCData(oldp+797,((0xffU & ((5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__fpu_op_r3))
                                            ? ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__exp_r) 
                                               - (IData)(0x7dU))
                                            : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__u6__DOT__fi_ldz_r0)))),8);
        bufp->chgCData(oldp+798,((0xffU & ((0U != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__fract_out_q)
                                            ? ((IData)(0x9eU) 
                                               - (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__u6__DOT__fi_ldz_r0))
                                            : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__opas_r2)
                                                ? 0x9eU
                                                : 0U)))),8);
        bufp->chgCData(oldp+799,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__f2i_zero)
                                   ? 0U : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__f2i_max)
                                            ? 0xffU
                                            : 0U))),8);
        bufp->chgCData(oldp+800,((0xffU & ((5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__fpu_op_r3))
                                            ? ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__f2i_zero)
                                                ? 0U
                                                : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__f2i_max)
                                                    ? 0xffU
                                                    : 0U))
                                            : ((0U 
                                                != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__fract_out_q)
                                                ? ((IData)(0x9eU) 
                                                   - (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__u6__DOT__fi_ldz_r0))
                                                : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__opas_r2)
                                                    ? 0x9eU
                                                    : 0U))))),8);
        bufp->chgBit(oldp+801,(((2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__rmode_r3)) 
                                & (((0U != (0xfU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__fract_out_q)) 
                                    & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__opas_r2)) 
                                       & (0x80U > (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__exp_r)))) 
                                   | (0U != (0x1ffffffU 
                                             & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_21)))))));
        bufp->chgBit(oldp+802,((IData)((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__exp_r) 
                                         >> 7U) & (~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x7fU 
                                                               & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__exp_r)))))))));
        bufp->chgBit(oldp+803,((0U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__rmode_r3))));
        bufp->chgBit(oldp+804,((1U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__rmode_r3))));
        bufp->chgBit(oldp+805,((2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__rmode_r3))));
        bufp->chgBit(oldp+806,((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__rmode_r3))));
        bufp->chgBit(oldp+807,((0U != (0xfU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__fract_out_q))));
        bufp->chgBit(oldp+808,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__max_num));
        bufp->chgBit(oldp+809,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__inf_out));
        bufp->chgBit(oldp+810,(((0U != (0x1ffffffU 
                                        & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_21))) 
                                & ((~ (IData)((0xffU 
                                               == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__exp_r)))) 
                                   & (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_14) 
                                       >> 8U) | ((~ (IData)(
                                                            (0U 
                                                             != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__exp_r)))) 
                                                 | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_63)))))));
        bufp->chgBit(oldp+811,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__inf_out) 
                                | (((0U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__rmode_r3)) 
                                    & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__max_num)) 
                                   | (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__exp_r) 
                                       >> 7U) & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__op_dn) 
                                                 & (0xffU 
                                                    == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__exp_out))))))));
        bufp->chgBit(oldp+812,(((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__inf_out)) 
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
        bufp->chgBit(oldp+813,((1U & (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_14) 
                                       >> 8U) | ((~ (IData)(
                                                            (0U 
                                                             != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__exp_r)))) 
                                                 | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__VdfgRegularize_he8d392c1_0_63))))));
        bufp->chgBit(oldp+814,((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__f2i_zero) 
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
        bufp->chgCData(oldp+815,((0x3fU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__shift_right))),6);
        bufp->chgCData(oldp+816,((0x3fU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__exp_r) 
                                           - (IData)(0x3dU)))),6);
        bufp->chgQData(oldp+817,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__Vcellout__u3__shift_out),48);
        bufp->chgCData(oldp+819,((0x3fU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__PVT__shift_left))),6);
        bufp->chgIData(oldp+820,((0x7fffffU & (IData)(
                                                      (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_21 
                                                       >> 0x19U)))),23);
        bufp->chgCData(oldp+821,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__exp_out),8);
        bufp->chgBit(oldp+822,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_23) 
                                      >> 8U))));
        bufp->chgIData(oldp+823,((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__inf_out) 
                                   | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__ovf0) 
                                      | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__or_result)))
                                   ? 0U : (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__max_num) 
                                            | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_46))
                                            ? 0x7fffffU
                                            : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__fract_out_rnd))),23);
        bufp->chgIData(oldp+824,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__fract_out_rnd),23);
        bufp->chgSData(oldp+825,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__exp_next_mi),9);
        bufp->chgBit(oldp+826,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__dn));
        bufp->chgCData(oldp+827,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__exp_out_final),8);
        bufp->chgCData(oldp+828,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__exp_out_rnd),8);
        bufp->chgBit(oldp+829,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__op_dn));
        bufp->chgBit(oldp+830,((2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__fpu_op_r3))));
        bufp->chgBit(oldp+831,((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__fpu_op_r3))));
        bufp->chgBit(oldp+832,((4U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__fpu_op_r3))));
        bufp->chgBit(oldp+833,((5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__fpu_op_r3))));
        bufp->chgCData(oldp+834,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__u6__DOT__fi_ldz_r0),6);
        bufp->chgBit(oldp+835,((1U & (IData)((vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_21 
                                              >> 0x19U)))));
        bufp->chgBit(oldp+836,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__r));
        bufp->chgBit(oldp+837,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__s));
        bufp->chgBit(oldp+838,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_27) 
                                | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__r) 
                                   & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__s)))));
        bufp->chgBit(oldp+839,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_37)
                                 ? ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__sign)) 
                                    & ((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__exp_ovf_r) 
                                         >> 1U) & (
                                                   (0U 
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
                                        & (((0U != 
                                             (0xffffffU 
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
        bufp->chgBit(oldp+840,((1U & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__exp_out_fe)) 
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
        bufp->chgBit(oldp+841,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_30) 
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
        bufp->chgBit(oldp+842,(((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__sign)) 
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
                                         | ((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__fpu_op_r3)) 
                                            | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_59) 
                                               & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_23) 
                                                  >> 8U)))))))));
        bufp->chgCData(oldp+843,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__exp_out) 
                                           + (1U & 
                                              (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_55 
                                               >> 0x17U))))),8);
        bufp->chgCData(oldp+844,((0xffU & (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_27) 
                                            & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__s) 
                                               & (0xffU 
                                                  == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__exp_r))))
                                            ? ((3U 
                                                == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__fpu_op_r3))
                                                ? (
                                                   (0x16U 
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
        bufp->chgCData(oldp+845,((((5U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__fpu_op_r3)) 
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
        bufp->chgCData(oldp+846,((0xffU & ((0x800000U 
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
        bufp->chgIData(oldp+847,((0x7fffffU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_55)),23);
        bufp->chgIData(oldp+848,((((3U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__fpu_op_r3)) 
                                   & ((0xffU == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__exp_out)) 
                                      & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_53)))
                                   ? 0x7fffffU : (0x7fffffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_21 
                                                             >> 0x19U))))),23);
        bufp->chgIData(oldp+849,((((3U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__fpu_op_r3)) 
                                   & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_38) 
                                      & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_53)))
                                   ? 0x7fffffU : (0x7fffffU 
                                                  & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_54))),23);
        bufp->chgIData(oldp+850,((0x7fffffU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_54)),23);
        bufp->chgBit(oldp+851,((1U & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_55 
                                      >> 0x17U))));
        bufp->chgBit(oldp+852,((1U & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_54 
                                      >> 0x17U))));
        bufp->chgBit(oldp+853,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__ovf0));
        bufp->chgBit(oldp+854,(((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__dn)) 
                                & (0xffU == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__exp_out)))));
        bufp->chgIData(oldp+855,((0xffffffU & ((IData)(1U) 
                                               + (0x7fffffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_21 
                                                             >> 0x19U)))))),24);
        bufp->chgCData(oldp+856,((0xffU & ((IData)(1U) 
                                           + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__exp_out)))),8);
        bufp->chgCData(oldp+857,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__exp_out) 
                                           - (IData)(1U)))),8);
        bufp->chgBit(oldp+858,((1U & (~ (IData)((0U 
                                                 != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__exp_out)))))));
        bufp->chgBit(oldp+859,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__exp_out_fe));
        bufp->chgBit(oldp+860,((0xffU == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__exp_out))));
        bufp->chgBit(oldp+861,((1U & (~ (IData)((0U 
                                                 != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__exp_r)))))));
        bufp->chgBit(oldp+862,((0xffU == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__exp_r))));
        bufp->chgBit(oldp+863,(((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_48)) 
                                & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_51) 
                                   | ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__max_num)) 
                                      & (0xffU == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__exp_out_rnd)))))));
        bufp->chgBit(oldp+864,((0x7fffffU == (0x7fffffU 
                                              & (IData)(
                                                        (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_21 
                                                         >> 0x19U))))));
        bufp->chgIData(oldp+865,((0x1ffffffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_21))),25);
        bufp->chgCData(oldp+866,((0xffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_23))),8);
        bufp->chgBit(oldp+867,((1U & (~ (IData)((0U 
                                                 != 
                                                 (0x7fffffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_21 
                                                             >> 0x19U)))))))));
        bufp->chgBit(oldp+868,((1U & (~ (IData)((0U 
                                                 != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__fract_denorm))))));
        bufp->chgBit(oldp+869,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_14) 
                                      >> 8U))));
        bufp->chgSData(oldp+870,((0x1ffU & ((IData)(1U) 
                                            + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__exp_r)))),9);
        bufp->chgSData(oldp+871,((0x1ffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__exp_r) 
                                            - (IData)(1U)))),9);
        bufp->chgQData(oldp+872,(((0U != (3U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__shift_right) 
                                                >> 6U)))
                                   ? 0ULL : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__fract_in_shftr_1)),48);
        bufp->chgQData(oldp+874,((((0U != (3U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__shift_left) 
                                                 >> 6U))) 
                                   | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__f2i_zero) 
                                      & (5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__fpu_op_r3))))
                                   ? 0ULL : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__fract_in_shftl_1)),48);
        bufp->chgQData(oldp+876,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__fract_in_shftr_1),48);
        bufp->chgQData(oldp+878,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__fract_in_shftl_1),48);
        bufp->chgCData(oldp+880,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__exp_div),8);
        bufp->chgCData(oldp+881,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_23) 
                                           - (IData)(1U)))),8);
        bufp->chgBit(oldp+882,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__div_dn));
        bufp->chgBit(oldp+883,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_15) 
                                & ((~ (IData)((0U != 
                                               (0xffffffU 
                                                & (IData)(
                                                          (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__fract_denorm 
                                                           >> 0x17U)))))) 
                                   & (0x16U < (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__exp_r))))));
        bufp->chgBit(oldp+884,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__grs_sel_div));
        bufp->chgBit(oldp+885,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__div_inf));
        bufp->chgCData(oldp+886,((0x7fU & ((IData)(0x17U) 
                                           - (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__u6__DOT__fi_ldz_r0)))),7);
        bufp->chgCData(oldp+887,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__fi_ldz_2),8);
        bufp->chgCData(oldp+888,((0xffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_70))),8);
        bufp->chgCData(oldp+889,((0xffU & ((IData)(2U) 
                                           + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__exp_r)))),8);
        bufp->chgCData(oldp+890,((0xffU & (- (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__exp_r)))),8);
        bufp->chgBit(oldp+891,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_70) 
                                      >> 8U))));
        bufp->chgSData(oldp+892,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__div_exp1),9);
        bufp->chgCData(oldp+893,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__div_exp2),8);
        bufp->chgCData(oldp+894,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__exp_r) 
                                           + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__fi_ldz_2)))),8);
        bufp->chgBit(oldp+895,((1U & ((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__fpu_op_r3))
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
        bufp->chgBit(oldp+896,((1U & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_61)) 
                                      | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_62)))));
        bufp->chgBit(oldp+897,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_67) 
                                      | ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_15)) 
                                         & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__div_dn)) 
                                            & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_66) 
                                               | ((~ 
                                                   ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__exp_ovf_r) 
                                                    >> 1U)) 
                                                  | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_65)))))))));
        bufp->chgCData(oldp+898,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__shift_right),8);
        bufp->chgCData(oldp+899,((0xffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_14))),8);
        bufp->chgCData(oldp+900,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_15)
                                            ? (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__exp_r)
                                            : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__div_dn)
                                                ? (- (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__exp_r))
                                                : ((IData)(2U) 
                                                   + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__exp_r)))))),8);
        bufp->chgCData(oldp+901,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__shift_left),8);
        bufp->chgCData(oldp+902,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_62)
                                            ? ((IData)(1U) 
                                               + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__exp_r))
                                            : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__u6__DOT__fi_ldz_r0)))),8);
        bufp->chgCData(oldp+903,((0xffU & (((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_20)) 
                                            & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_66))
                                            ? (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_70)
                                            : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_65)
                                                ? (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__exp_r)
                                                : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__u6__DOT__fi_ldz_r0))))),8);
        bufp->chgCData(oldp+904,((0xffU & ((1U & ((~ (IData)(
                                                             (0U 
                                                              != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__exp_out)))) 
                                                  | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__dn)))
                                            ? ((0U 
                                                != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__exp_r))
                                                ? ((IData)(1U) 
                                                   + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__exp_r))
                                                : 2U)
                                            : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__u6__DOT__fi_ldz_r0)))),8);
        bufp->chgCData(oldp+905,((0xffU & ((0x16U < (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__u6__DOT__fi_ldz_r0))
                                            ? ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__exp_r) 
                                               - (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                                     - (IData)(0x16U))))
                                            : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__exp_r) 
                                               - (0x3fU 
                                                  & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                                     - (IData)(1U))))))),8);
        bufp->chgCData(oldp+906,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__exp_r) 
                                           - (0x3fU 
                                              & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                                 - (IData)(0x16U)))))),8);
        bufp->chgCData(oldp+907,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__exp_r) 
                                           - (0x3fU 
                                              & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                                 - (IData)(1U)))))),8);
        bufp->chgCData(oldp+908,((0x3fU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                           - (IData)(1U)))),6);
        bufp->chgCData(oldp+909,((0x3fU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                           - (IData)(0x16U)))),6);
        bufp->chgBit(oldp+910,((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_59) 
                                 & (2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__fpu_op_r3))) 
                                | ((2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__fpu_op_r3)) 
                                   & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_23) 
                                      >> 8U)))));
        bufp->chgCData(oldp+911,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__u6__DOT__fi_ldz_r0),7);
        bufp->chgSData(oldp+912,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__exp_r),9);
        bufp->chgCData(oldp+913,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__exp_r) 
                                           - (IData)(0x7dU)))),8);
        bufp->chgQData(oldp+914,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__Vcellout__u3__shift_out),56);
        bufp->chgBit(oldp+916,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__f2i_zero));
        bufp->chgBit(oldp+917,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__f2i_max));
        bufp->chgCData(oldp+918,(((0U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__rmode_r3))
                                   ? 0x7eU : 0x7fU)),8);
        bufp->chgCData(oldp+919,((0xffU & ((5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__fpu_op_r3))
                                            ? ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__exp_r) 
                                               - (IData)(0x7dU))
                                            : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__u6__DOT__fi_ldz_r0)))),8);
        bufp->chgCData(oldp+920,((0xffU & ((0U != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__fract_denorm)
                                            ? ((IData)(0x9eU) 
                                               - (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__u6__DOT__fi_ldz_r0))
                                            : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__opas_r2)
                                                ? 0x9eU
                                                : 0U)))),8);
        bufp->chgCData(oldp+921,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__f2i_zero)
                                   ? 0U : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__f2i_max)
                                            ? 0xffU
                                            : 0U))),8);
        bufp->chgCData(oldp+922,((0xffU & ((5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__fpu_op_r3))
                                            ? ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__f2i_zero)
                                                ? 0U
                                                : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__f2i_max)
                                                    ? 0xffU
                                                    : 0U))
                                            : ((0U 
                                                != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__fract_denorm)
                                                ? ((IData)(0x9eU) 
                                                   - (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__u6__DOT__fi_ldz_r0))
                                                : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__opas_r2)
                                                    ? 0x9eU
                                                    : 0U))))),8);
        bufp->chgBit(oldp+923,(((2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__rmode_r3)) 
                                & (((0U != (0xffffffU 
                                            & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__fract_denorm))) 
                                    & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__opas_r2)) 
                                       & (0x80U > (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__exp_r)))) 
                                   | (0U != (0x1ffffffU 
                                             & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_21)))))));
        bufp->chgBit(oldp+924,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__exp_in_80));
        bufp->chgBit(oldp+925,((0U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__rmode_r3))));
        bufp->chgBit(oldp+926,((1U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__rmode_r3))));
        bufp->chgBit(oldp+927,((2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__rmode_r3))));
        bufp->chgBit(oldp+928,((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__rmode_r3))));
        bufp->chgBit(oldp+929,((0U != (0xffffffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__fract_denorm)))));
        bufp->chgBit(oldp+930,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__max_num));
        bufp->chgBit(oldp+931,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__inf_out));
        bufp->chgBit(oldp+932,((((0U != (0x1ffffffU 
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
        bufp->chgBit(oldp+933,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__inf_out) 
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
        bufp->chgBit(oldp+934,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__undeflow_div));
        bufp->chgBit(oldp+935,((IData)(((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_14) 
                                          >> 8U) | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_61)) 
                                        | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__VdfgRegularize_he8d392c1_0_63)))));
        bufp->chgBit(oldp+936,((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__f2i_zero) 
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
        bufp->chgCData(oldp+937,((0x3fU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__shift_right))),6);
        bufp->chgCData(oldp+938,((0x3fU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__exp_r) 
                                           - (IData)(0x3dU)))),6);
        bufp->chgQData(oldp+939,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__Vcellout__u3__shift_out),48);
        bufp->chgCData(oldp+941,((0x3fU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__PVT__shift_left))),6);
        bufp->chgIData(oldp+942,((0x7fffffU & (IData)(
                                                      (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_21 
                                                       >> 0x19U)))),23);
        bufp->chgCData(oldp+943,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__exp_out),8);
        bufp->chgBit(oldp+944,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_23) 
                                      >> 8U))));
        bufp->chgIData(oldp+945,((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__inf_out) 
                                   | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__ovf0))
                                   ? 0U : (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__max_num) 
                                            | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_46))
                                            ? 0x7fffffU
                                            : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__fract_out_rnd))),23);
        bufp->chgIData(oldp+946,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__fract_out_rnd),23);
        bufp->chgSData(oldp+947,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__exp_next_mi),9);
        bufp->chgBit(oldp+948,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__dn));
        bufp->chgCData(oldp+949,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__exp_out_final),8);
        bufp->chgCData(oldp+950,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__exp_out_rnd),8);
        bufp->chgBit(oldp+951,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__op_dn));
        bufp->chgBit(oldp+952,((2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__fpu_op_r3))));
        bufp->chgBit(oldp+953,((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__fpu_op_r3))));
        bufp->chgBit(oldp+954,((4U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__fpu_op_r3))));
        bufp->chgBit(oldp+955,((5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__fpu_op_r3))));
        bufp->chgCData(oldp+956,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__u6__DOT__fi_ldz_r0),6);
        bufp->chgBit(oldp+957,((1U & (IData)((vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_21 
                                              >> 0x19U)))));
        bufp->chgBit(oldp+958,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__r));
        bufp->chgBit(oldp+959,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__s));
        bufp->chgBit(oldp+960,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_27) 
                                | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__r) 
                                   & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__s)))));
        bufp->chgBit(oldp+961,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_37)
                                 ? ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__sign)) 
                                    & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_30) 
                                       | (3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__fpu_op_r3))))
                                 : ((5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__fpu_op_r3))
                                     ? ((2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__rmode_r3)) 
                                        & (((0U != 
                                             (0xfU 
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
        bufp->chgBit(oldp+962,((1U & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__exp_out_fe)) 
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
        bufp->chgBit(oldp+963,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_30) 
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
        bufp->chgBit(oldp+964,(((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__sign)) 
                                & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_30) 
                                   | (3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__fpu_op_r3))))));
        bufp->chgCData(oldp+965,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__exp_out) 
                                           + (1U & 
                                              (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_55 
                                               >> 0x17U))))),8);
        bufp->chgCData(oldp+966,((0xffU & (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_27) 
                                            & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__s) 
                                               & (0xffU 
                                                  == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__exp_r))))
                                            ? ((3U 
                                                == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__fpu_op_r3))
                                                ? (
                                                   (0x16U 
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
        bufp->chgCData(oldp+967,((((5U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__fpu_op_r3)) 
                                   & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_38))
                                   ? 0xfeU : (0xffU 
                                              & ((0x800000U 
                                                  & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_54)
                                                  ? 
                                                 ((IData)(1U) 
                                                  + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__exp_out))
                                                  : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__exp_out))))),8);
        bufp->chgCData(oldp+968,((0xffU & ((0x800000U 
                                            & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_54)
                                            ? ((IData)(1U) 
                                               + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__exp_out))
                                            : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__exp_out)))),8);
        bufp->chgIData(oldp+969,((0x7fffffU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_55)),23);
        bufp->chgIData(oldp+970,((((3U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__fpu_op_r3)) 
                                   & ((0xffU == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__exp_out)) 
                                      & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_53)))
                                   ? 0x7fffffU : (0x7fffffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_21 
                                                             >> 0x19U))))),23);
        bufp->chgIData(oldp+971,((((3U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__fpu_op_r3)) 
                                   & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_38) 
                                      & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_53)))
                                   ? 0x7fffffU : (0x7fffffU 
                                                  & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_54))),23);
        bufp->chgIData(oldp+972,((0x7fffffU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_54)),23);
        bufp->chgBit(oldp+973,((1U & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_55 
                                      >> 0x17U))));
        bufp->chgBit(oldp+974,((1U & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_54 
                                      >> 0x17U))));
        bufp->chgBit(oldp+975,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__ovf0));
        bufp->chgBit(oldp+976,(((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__dn)) 
                                & (0xffU == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__exp_out)))));
        bufp->chgIData(oldp+977,((0xffffffU & ((IData)(1U) 
                                               + (0x7fffffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_21 
                                                             >> 0x19U)))))),24);
        bufp->chgCData(oldp+978,((0xffU & ((IData)(1U) 
                                           + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__exp_out)))),8);
        bufp->chgCData(oldp+979,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__exp_out) 
                                           - (IData)(1U)))),8);
        bufp->chgBit(oldp+980,((1U & (~ (IData)((0U 
                                                 != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__exp_out)))))));
        bufp->chgBit(oldp+981,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__exp_out_fe));
        bufp->chgBit(oldp+982,((0xffU == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__exp_out))));
        bufp->chgBit(oldp+983,((1U & (~ (IData)((0U 
                                                 != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__exp_r)))))));
        bufp->chgBit(oldp+984,((0xffU == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__exp_r))));
        bufp->chgBit(oldp+985,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_51) 
                                | ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__max_num)) 
                                   & (0xffU == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__exp_out_rnd))))));
        bufp->chgBit(oldp+986,((0x7fffffU == (0x7fffffU 
                                              & (IData)(
                                                        (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_21 
                                                         >> 0x19U))))));
        bufp->chgIData(oldp+987,((0x1ffffffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_21))),25);
        bufp->chgCData(oldp+988,((0xffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_23))),8);
        bufp->chgBit(oldp+989,((1U & (~ (IData)((0U 
                                                 != 
                                                 (0x7fffffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_21 
                                                             >> 0x19U)))))))));
        bufp->chgBit(oldp+990,((1U & (~ (IData)((0U 
                                                 != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__fract_out_q))))));
        bufp->chgBit(oldp+991,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_14) 
                                      >> 8U))));
        bufp->chgSData(oldp+992,((0x1ffU & ((IData)(1U) 
                                            + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__exp_r)))),9);
        bufp->chgSData(oldp+993,((0x1ffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__exp_r) 
                                            - (IData)(1U)))),9);
        bufp->chgQData(oldp+994,(((0U != (3U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__shift_right) 
                                                >> 6U)))
                                   ? 0ULL : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__fract_in_shftr_1)),48);
        bufp->chgQData(oldp+996,((((0U != (3U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__shift_left) 
                                                 >> 6U))) 
                                   | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__f2i_zero) 
                                      & (5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__fpu_op_r3))))
                                   ? 0ULL : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__fract_in_shftl_1)),48);
        bufp->chgQData(oldp+998,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__fract_in_shftr_1),48);
        bufp->chgQData(oldp+1000,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__fract_in_shftl_1),48);
        bufp->chgCData(oldp+1002,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__exp_div),8);
        bufp->chgCData(oldp+1003,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_23) 
                                            - (IData)(1U)))),8);
        bufp->chgBit(oldp+1004,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__div_dn));
        bufp->chgBit(oldp+1005,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__grs_sel_div));
        bufp->chgBit(oldp+1006,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__div_inf));
        bufp->chgCData(oldp+1007,((0x7fU & ((IData)(0x17U) 
                                            - (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__u6__DOT__fi_ldz_r0)))),7);
        bufp->chgCData(oldp+1008,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__fi_ldz_2),8);
        bufp->chgCData(oldp+1009,((0xffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_70))),8);
        bufp->chgCData(oldp+1010,((0xffU & ((IData)(2U) 
                                            + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__exp_r)))),8);
        bufp->chgCData(oldp+1011,((0xffU & (- (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__exp_r)))),8);
        bufp->chgBit(oldp+1012,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_70) 
                                       >> 8U))));
        bufp->chgSData(oldp+1013,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__div_exp1),9);
        bufp->chgCData(oldp+1014,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__div_exp2),8);
        bufp->chgCData(oldp+1015,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__exp_r) 
                                            + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__fi_ldz_2)))),8);
        bufp->chgBit(oldp+1016,((1U & ((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__fpu_op_r3))
                                        ? (~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__div_dn))
                                        : ((2U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__fpu_op_r3)) 
                                           | ((0U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__exp_r)) 
                                              | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_62)))))));
        bufp->chgBit(oldp+1017,(((0U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__exp_r)) 
                                 | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_62))));
        bufp->chgBit(oldp+1018,((1U & (~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__div_dn)))));
        bufp->chgCData(oldp+1019,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__shift_right),8);
        bufp->chgCData(oldp+1020,((0xffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_14))),8);
        bufp->chgCData(oldp+1021,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__div_dn)
                                             ? (- (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__exp_r))
                                             : ((IData)(2U) 
                                                + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__exp_r))))),8);
        bufp->chgCData(oldp+1022,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__shift_left),8);
        bufp->chgCData(oldp+1023,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_62)
                                             ? ((IData)(1U) 
                                                + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__exp_r))
                                             : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__u6__DOT__fi_ldz_r0)))),8);
        bufp->chgCData(oldp+1024,((0xffU & (((~ (IData)(
                                                        (0U 
                                                         != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__exp_out)))) 
                                             & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__op_dn))
                                             ? (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_70)
                                             : ((1U 
                                                 & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__op_dn)) 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__exp_out))))))
                                                 ? (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__exp_r)
                                                 : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__u6__DOT__fi_ldz_r0))))),8);
        bufp->chgCData(oldp+1025,((0xffU & ((1U & (
                                                   (~ (IData)(
                                                              (0U 
                                                               != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__exp_out)))) 
                                                   | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__dn)))
                                             ? ((0U 
                                                 != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__exp_r))
                                                 ? 
                                                ((IData)(1U) 
                                                 + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__exp_r))
                                                 : 2U)
                                             : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__u6__DOT__fi_ldz_r0)))),8);
        bufp->chgCData(oldp+1026,((0xffU & ((0x16U 
                                             < (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__u6__DOT__fi_ldz_r0))
                                             ? ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__exp_r) 
                                                - (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                                      - (IData)(0x16U))))
                                             : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__exp_r) 
                                                - (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                                      - (IData)(1U))))))),8);
        bufp->chgCData(oldp+1027,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__exp_r) 
                                            - (0x3fU 
                                               & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                                  - (IData)(0x16U)))))),8);
        bufp->chgCData(oldp+1028,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__exp_r) 
                                            - (0x3fU 
                                               & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                                  - (IData)(1U)))))),8);
        bufp->chgCData(oldp+1029,((0x3fU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                            - (IData)(1U)))),6);
        bufp->chgCData(oldp+1030,((0x3fU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                            - (IData)(0x16U)))),6);
        bufp->chgBit(oldp+1031,(((2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__fpu_op_r3)) 
                                 & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_23) 
                                    >> 8U))));
        bufp->chgCData(oldp+1032,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__u6__DOT__fi_ldz_r0),7);
        bufp->chgSData(oldp+1033,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__exp_r),9);
        bufp->chgCData(oldp+1034,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__exp_r) 
                                            - (IData)(0x7dU)))),8);
        bufp->chgQData(oldp+1035,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__Vcellout__u3__shift_out),56);
        bufp->chgBit(oldp+1037,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__f2i_zero));
        bufp->chgBit(oldp+1038,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__f2i_max));
        bufp->chgCData(oldp+1039,(((0U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__rmode_r3))
                                    ? 0x7eU : 0x7fU)),8);
        bufp->chgCData(oldp+1040,((0xffU & ((5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__fpu_op_r3))
                                             ? ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__exp_r) 
                                                - (IData)(0x7dU))
                                             : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__u6__DOT__fi_ldz_r0)))),8);
        bufp->chgCData(oldp+1041,((0xffU & ((0U != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__fract_out_q)
                                             ? ((IData)(0x9eU) 
                                                - (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__u6__DOT__fi_ldz_r0))
                                             : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__opas_r2)
                                                 ? 0x9eU
                                                 : 0U)))),8);
        bufp->chgCData(oldp+1042,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__f2i_zero)
                                    ? 0U : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__f2i_max)
                                             ? 0xffU
                                             : 0U))),8);
        bufp->chgCData(oldp+1043,((0xffU & ((5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__fpu_op_r3))
                                             ? ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__f2i_zero)
                                                 ? 0U
                                                 : 
                                                ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__f2i_max)
                                                  ? 0xffU
                                                  : 0U))
                                             : ((0U 
                                                 != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__fract_out_q)
                                                 ? 
                                                ((IData)(0x9eU) 
                                                 - (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__u6__DOT__fi_ldz_r0))
                                                 : 
                                                ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__opas_r2)
                                                  ? 0x9eU
                                                  : 0U))))),8);
        bufp->chgBit(oldp+1044,(((2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__rmode_r3)) 
                                 & (((0U != (0xfU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__fract_out_q)) 
                                     & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__opas_r2)) 
                                        & (0x80U > (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__exp_r)))) 
                                    | (0U != (0x1ffffffU 
                                              & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_21)))))));
        bufp->chgBit(oldp+1045,((IData)((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__exp_r) 
                                          >> 7U) & 
                                         (~ (IData)(
                                                    (0U 
                                                     != 
                                                     (0x7fU 
                                                      & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__exp_r)))))))));
        bufp->chgBit(oldp+1046,((0U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__rmode_r3))));
        bufp->chgBit(oldp+1047,((1U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__rmode_r3))));
        bufp->chgBit(oldp+1048,((2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__rmode_r3))));
        bufp->chgBit(oldp+1049,((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__rmode_r3))));
        bufp->chgBit(oldp+1050,((0U != (0xfU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__fract_out_q))));
        bufp->chgBit(oldp+1051,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__max_num));
        bufp->chgBit(oldp+1052,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__inf_out));
        bufp->chgBit(oldp+1053,(((0U != (0x1ffffffU 
                                         & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_21))) 
                                 & ((~ (IData)((0xffU 
                                                == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__exp_r)))) 
                                    & (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_14) 
                                        >> 8U) | ((~ (IData)(
                                                             (0U 
                                                              != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__exp_r)))) 
                                                  | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_63)))))));
        bufp->chgBit(oldp+1054,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__inf_out) 
                                 | (((0U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__rmode_r3)) 
                                     & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__max_num)) 
                                    | (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__exp_r) 
                                        >> 7U) & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__op_dn) 
                                                  & (0xffU 
                                                     == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__exp_out))))))));
        bufp->chgBit(oldp+1055,(((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__inf_out)) 
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
        bufp->chgBit(oldp+1056,((1U & (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_14) 
                                        >> 8U) | ((~ (IData)(
                                                             (0U 
                                                              != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__exp_r)))) 
                                                  | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__VdfgRegularize_he8d392c1_0_63))))));
        bufp->chgBit(oldp+1057,((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__f2i_zero) 
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
        bufp->chgCData(oldp+1058,((0x3fU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__shift_right))),6);
        bufp->chgCData(oldp+1059,((0x3fU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__exp_r) 
                                            - (IData)(0x3dU)))),6);
        bufp->chgQData(oldp+1060,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__Vcellout__u3__shift_out),48);
        bufp->chgCData(oldp+1062,((0x3fU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__PVT__shift_left))),6);
        bufp->chgIData(oldp+1063,((0x7fffffU & (IData)(
                                                       (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_21 
                                                        >> 0x19U)))),23);
        bufp->chgCData(oldp+1064,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__exp_out),8);
        bufp->chgBit(oldp+1065,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_23) 
                                       >> 8U))));
        bufp->chgIData(oldp+1066,((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__inf_out) 
                                    | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__ovf0) 
                                       | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__or_result)))
                                    ? 0U : (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__max_num) 
                                             | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_46))
                                             ? 0x7fffffU
                                             : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__fract_out_rnd))),23);
        bufp->chgIData(oldp+1067,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__fract_out_rnd),23);
        bufp->chgSData(oldp+1068,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__exp_next_mi),9);
        bufp->chgBit(oldp+1069,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__dn));
        bufp->chgCData(oldp+1070,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__exp_out_final),8);
        bufp->chgCData(oldp+1071,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__exp_out_rnd),8);
        bufp->chgBit(oldp+1072,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__op_dn));
        bufp->chgBit(oldp+1073,((2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__fpu_op_r3))));
        bufp->chgBit(oldp+1074,((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__fpu_op_r3))));
        bufp->chgBit(oldp+1075,((4U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__fpu_op_r3))));
        bufp->chgBit(oldp+1076,((5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__fpu_op_r3))));
        bufp->chgCData(oldp+1077,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__u6__DOT__fi_ldz_r0),6);
        bufp->chgBit(oldp+1078,((1U & (IData)((vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_21 
                                               >> 0x19U)))));
        bufp->chgBit(oldp+1079,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__r));
        bufp->chgBit(oldp+1080,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__s));
        bufp->chgBit(oldp+1081,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_27) 
                                 | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__r) 
                                    & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__s)))));
        bufp->chgBit(oldp+1082,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_37)
                                  ? ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__sign)) 
                                     & ((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__exp_ovf_r) 
                                          >> 1U) & 
                                         ((0U != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__fract_denorm) 
                                          & ((((~ ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_23) 
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
                                         & (((0U != 
                                              (0xffffffU 
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
        bufp->chgBit(oldp+1083,((1U & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__exp_out_fe)) 
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
                                                 & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_21))))))));
        bufp->chgBit(oldp+1084,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_30) 
                                 & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__sign)) 
                                    & ((~ ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__exp_out) 
                                           >> 7U)) 
                                       | (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__exp_out) 
                                           >> 7U) & 
                                          ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__exp_out_fe)) 
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
        bufp->chgBit(oldp+1085,(((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__sign)) 
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
                                          | ((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__fpu_op_r3)) 
                                             | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_59) 
                                                & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_23) 
                                                   >> 8U)))))))));
        bufp->chgCData(oldp+1086,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__exp_out) 
                                            + (1U & 
                                               (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_55 
                                                >> 0x17U))))),8);
        bufp->chgCData(oldp+1087,((0xffU & (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_27) 
                                             & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__s) 
                                                & (0xffU 
                                                   == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__exp_r))))
                                             ? ((3U 
                                                 == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__fpu_op_r3))
                                                 ? 
                                                ((0x16U 
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
        bufp->chgCData(oldp+1088,((((5U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__fpu_op_r3)) 
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
        bufp->chgCData(oldp+1089,((0xffU & ((0x800000U 
                                             & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_54)
                                             ? ((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__exp_ovf_r) 
                                                  >> 1U) 
                                                 & (2U 
                                                    == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__fpu_op_r3)))
                                                 ? 
                                                ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__exp_out) 
                                                 - (IData)(1U))
                                                 : 
                                                ((IData)(1U) 
                                                 + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__exp_out)))
                                             : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__exp_out)))),8);
        bufp->chgIData(oldp+1090,((0x7fffffU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_55)),23);
        bufp->chgIData(oldp+1091,((((3U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__fpu_op_r3)) 
                                    & ((0xffU == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__exp_out)) 
                                       & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_53)))
                                    ? 0x7fffffU : (0x7fffffU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_21 
                                                              >> 0x19U))))),23);
        bufp->chgIData(oldp+1092,((((3U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__fpu_op_r3)) 
                                    & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_38) 
                                       & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_53)))
                                    ? 0x7fffffU : (0x7fffffU 
                                                   & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_54))),23);
        bufp->chgIData(oldp+1093,((0x7fffffU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_54)),23);
        bufp->chgBit(oldp+1094,((1U & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_55 
                                       >> 0x17U))));
        bufp->chgBit(oldp+1095,((1U & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_54 
                                       >> 0x17U))));
        bufp->chgBit(oldp+1096,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__ovf0));
        bufp->chgBit(oldp+1097,(((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__dn)) 
                                 & (0xffU == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__exp_out)))));
        bufp->chgIData(oldp+1098,((0xffffffU & ((IData)(1U) 
                                                + (0x7fffffU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_21 
                                                              >> 0x19U)))))),24);
        bufp->chgCData(oldp+1099,((0xffU & ((IData)(1U) 
                                            + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__exp_out)))),8);
        bufp->chgCData(oldp+1100,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__exp_out) 
                                            - (IData)(1U)))),8);
        bufp->chgBit(oldp+1101,((1U & (~ (IData)((0U 
                                                  != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__exp_out)))))));
        bufp->chgBit(oldp+1102,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__exp_out_fe));
        bufp->chgBit(oldp+1103,((0xffU == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__exp_out))));
        bufp->chgBit(oldp+1104,((1U & (~ (IData)((0U 
                                                  != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__exp_r)))))));
        bufp->chgBit(oldp+1105,((0xffU == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__exp_r))));
        bufp->chgBit(oldp+1106,(((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_48)) 
                                 & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_51) 
                                    | ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__max_num)) 
                                       & (0xffU == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__exp_out_rnd)))))));
        bufp->chgBit(oldp+1107,((0x7fffffU == (0x7fffffU 
                                               & (IData)(
                                                         (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_21 
                                                          >> 0x19U))))));
        bufp->chgIData(oldp+1108,((0x1ffffffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_21))),25);
        bufp->chgCData(oldp+1109,((0xffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_23))),8);
        bufp->chgBit(oldp+1110,((1U & (~ (IData)((0U 
                                                  != 
                                                  (0x7fffffU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_21 
                                                              >> 0x19U)))))))));
        bufp->chgBit(oldp+1111,((1U & (~ (IData)((0U 
                                                  != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__fract_denorm))))));
        bufp->chgBit(oldp+1112,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_14) 
                                       >> 8U))));
        bufp->chgSData(oldp+1113,((0x1ffU & ((IData)(1U) 
                                             + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__exp_r)))),9);
        bufp->chgSData(oldp+1114,((0x1ffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__exp_r) 
                                             - (IData)(1U)))),9);
        bufp->chgQData(oldp+1115,(((0U != (3U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__shift_right) 
                                                 >> 6U)))
                                    ? 0ULL : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__fract_in_shftr_1)),48);
        bufp->chgQData(oldp+1117,((((0U != (3U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__shift_left) 
                                                  >> 6U))) 
                                    | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__f2i_zero) 
                                       & (5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__fpu_op_r3))))
                                    ? 0ULL : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__fract_in_shftl_1)),48);
        bufp->chgQData(oldp+1119,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__fract_in_shftr_1),48);
        bufp->chgQData(oldp+1121,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__fract_in_shftl_1),48);
        bufp->chgCData(oldp+1123,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__exp_div),8);
        bufp->chgCData(oldp+1124,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_23) 
                                            - (IData)(1U)))),8);
        bufp->chgBit(oldp+1125,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__div_dn));
        bufp->chgBit(oldp+1126,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_15) 
                                 & ((~ (IData)((0U 
                                                != 
                                                (0xffffffU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__fract_denorm 
                                                            >> 0x17U)))))) 
                                    & (0x16U < (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__exp_r))))));
        bufp->chgBit(oldp+1127,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__grs_sel_div));
        bufp->chgBit(oldp+1128,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__div_inf));
        bufp->chgCData(oldp+1129,((0x7fU & ((IData)(0x17U) 
                                            - (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__u6__DOT__fi_ldz_r0)))),7);
        bufp->chgCData(oldp+1130,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__fi_ldz_2),8);
        bufp->chgCData(oldp+1131,((0xffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_70))),8);
        bufp->chgCData(oldp+1132,((0xffU & ((IData)(2U) 
                                            + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__exp_r)))),8);
        bufp->chgCData(oldp+1133,((0xffU & (- (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__exp_r)))),8);
        bufp->chgBit(oldp+1134,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_70) 
                                       >> 8U))));
        bufp->chgSData(oldp+1135,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__div_exp1),9);
        bufp->chgCData(oldp+1136,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__div_exp2),8);
        bufp->chgCData(oldp+1137,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__exp_r) 
                                            + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__fi_ldz_2)))),8);
        bufp->chgBit(oldp+1138,((1U & ((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__fpu_op_r3))
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
        bufp->chgBit(oldp+1139,((1U & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_61)) 
                                       | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_62)))));
        bufp->chgBit(oldp+1140,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_67) 
                                       | ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_15)) 
                                          & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__div_dn)) 
                                             & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_66) 
                                                | ((~ 
                                                    ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__exp_ovf_r) 
                                                     >> 1U)) 
                                                   | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_65)))))))));
        bufp->chgCData(oldp+1141,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__shift_right),8);
        bufp->chgCData(oldp+1142,((0xffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_14))),8);
        bufp->chgCData(oldp+1143,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_15)
                                             ? (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__exp_r)
                                             : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__div_dn)
                                                 ? 
                                                (- (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__exp_r))
                                                 : 
                                                ((IData)(2U) 
                                                 + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__exp_r)))))),8);
        bufp->chgCData(oldp+1144,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__shift_left),8);
        bufp->chgCData(oldp+1145,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_62)
                                             ? ((IData)(1U) 
                                                + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__exp_r))
                                             : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__u6__DOT__fi_ldz_r0)))),8);
        bufp->chgCData(oldp+1146,((0xffU & (((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_20)) 
                                             & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_66))
                                             ? (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_70)
                                             : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_65)
                                                 ? (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__exp_r)
                                                 : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__u6__DOT__fi_ldz_r0))))),8);
        bufp->chgCData(oldp+1147,((0xffU & ((1U & (
                                                   (~ (IData)(
                                                              (0U 
                                                               != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__exp_out)))) 
                                                   | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__dn)))
                                             ? ((0U 
                                                 != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__exp_r))
                                                 ? 
                                                ((IData)(1U) 
                                                 + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__exp_r))
                                                 : 2U)
                                             : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__u6__DOT__fi_ldz_r0)))),8);
        bufp->chgCData(oldp+1148,((0xffU & ((0x16U 
                                             < (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__u6__DOT__fi_ldz_r0))
                                             ? ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__exp_r) 
                                                - (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                                      - (IData)(0x16U))))
                                             : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__exp_r) 
                                                - (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                                      - (IData)(1U))))))),8);
        bufp->chgCData(oldp+1149,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__exp_r) 
                                            - (0x3fU 
                                               & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                                  - (IData)(0x16U)))))),8);
        bufp->chgCData(oldp+1150,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__exp_r) 
                                            - (0x3fU 
                                               & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                                  - (IData)(1U)))))),8);
        bufp->chgCData(oldp+1151,((0x3fU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                            - (IData)(1U)))),6);
        bufp->chgCData(oldp+1152,((0x3fU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                            - (IData)(0x16U)))),6);
        bufp->chgBit(oldp+1153,((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_59) 
                                  & (2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__fpu_op_r3))) 
                                 | ((2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__fpu_op_r3)) 
                                    & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_23) 
                                       >> 8U)))));
        bufp->chgCData(oldp+1154,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__u6__DOT__fi_ldz_r0),7);
        bufp->chgSData(oldp+1155,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__exp_r),9);
        bufp->chgCData(oldp+1156,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__exp_r) 
                                            - (IData)(0x7dU)))),8);
        bufp->chgQData(oldp+1157,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__Vcellout__u3__shift_out),56);
        bufp->chgBit(oldp+1159,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__f2i_zero));
        bufp->chgBit(oldp+1160,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__f2i_max));
        bufp->chgCData(oldp+1161,(((0U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__rmode_r3))
                                    ? 0x7eU : 0x7fU)),8);
        bufp->chgCData(oldp+1162,((0xffU & ((5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__fpu_op_r3))
                                             ? ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__exp_r) 
                                                - (IData)(0x7dU))
                                             : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__u6__DOT__fi_ldz_r0)))),8);
        bufp->chgCData(oldp+1163,((0xffU & ((0U != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__fract_denorm)
                                             ? ((IData)(0x9eU) 
                                                - (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__u6__DOT__fi_ldz_r0))
                                             : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__opas_r2)
                                                 ? 0x9eU
                                                 : 0U)))),8);
        bufp->chgCData(oldp+1164,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__f2i_zero)
                                    ? 0U : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__f2i_max)
                                             ? 0xffU
                                             : 0U))),8);
        bufp->chgCData(oldp+1165,((0xffU & ((5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__fpu_op_r3))
                                             ? ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__f2i_zero)
                                                 ? 0U
                                                 : 
                                                ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__f2i_max)
                                                  ? 0xffU
                                                  : 0U))
                                             : ((0U 
                                                 != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__fract_denorm)
                                                 ? 
                                                ((IData)(0x9eU) 
                                                 - (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__u6__DOT__fi_ldz_r0))
                                                 : 
                                                ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__opas_r2)
                                                  ? 0x9eU
                                                  : 0U))))),8);
        bufp->chgBit(oldp+1166,(((2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__rmode_r3)) 
                                 & (((0U != (0xffffffU 
                                             & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__fract_denorm))) 
                                     & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__opas_r2)) 
                                        & (0x80U > (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__exp_r)))) 
                                    | (0U != (0x1ffffffU 
                                              & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_21)))))));
        bufp->chgBit(oldp+1167,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__exp_in_80));
        bufp->chgBit(oldp+1168,((0U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__rmode_r3))));
        bufp->chgBit(oldp+1169,((1U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__rmode_r3))));
        bufp->chgBit(oldp+1170,((2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__rmode_r3))));
        bufp->chgBit(oldp+1171,((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__rmode_r3))));
        bufp->chgBit(oldp+1172,((0U != (0xffffffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__fract_denorm)))));
        bufp->chgBit(oldp+1173,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__max_num));
        bufp->chgBit(oldp+1174,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__inf_out));
        bufp->chgBit(oldp+1175,((((0U != (0x1ffffffU 
                                          & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_21))) 
                                  & ((~ (IData)((0xffU 
                                                 == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__exp_r)))) 
                                     & (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_14) 
                                         >> 8U) | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_61) 
                                                   | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_63))))) 
                                 | ((~ (IData)((0U 
                                                != 
                                                (0x7fffffU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_21 
                                                            >> 0x19U)))))) 
                                    & ((0U != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__fract_denorm) 
                                       & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__exp_ovf_r) 
                                          >> 1U))))));
        bufp->chgBit(oldp+1176,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__inf_out) 
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
        bufp->chgBit(oldp+1177,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__undeflow_div));
        bufp->chgBit(oldp+1178,((IData)(((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_14) 
                                           >> 8U) | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_61)) 
                                         | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__VdfgRegularize_he8d392c1_0_63)))));
        bufp->chgBit(oldp+1179,((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__f2i_zero) 
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
        bufp->chgCData(oldp+1180,((0x3fU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__shift_right))),6);
        bufp->chgCData(oldp+1181,((0x3fU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__exp_r) 
                                            - (IData)(0x3dU)))),6);
        bufp->chgQData(oldp+1182,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__Vcellout__u3__shift_out),48);
        bufp->chgCData(oldp+1184,((0x3fU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__PVT__shift_left))),6);
        bufp->chgIData(oldp+1185,((0x7fffffU & (IData)(
                                                       (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_21 
                                                        >> 0x19U)))),23);
        bufp->chgCData(oldp+1186,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__exp_out),8);
        bufp->chgBit(oldp+1187,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_23) 
                                       >> 8U))));
        bufp->chgIData(oldp+1188,((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__inf_out) 
                                    | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__ovf0))
                                    ? 0U : (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__max_num) 
                                             | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_46))
                                             ? 0x7fffffU
                                             : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__fract_out_rnd))),23);
        bufp->chgIData(oldp+1189,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__fract_out_rnd),23);
        bufp->chgSData(oldp+1190,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__exp_next_mi),9);
        bufp->chgBit(oldp+1191,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__dn));
        bufp->chgCData(oldp+1192,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__exp_out_final),8);
        bufp->chgCData(oldp+1193,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__exp_out_rnd),8);
        bufp->chgBit(oldp+1194,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__op_dn));
        bufp->chgBit(oldp+1195,((2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fpu_op_r3))));
        bufp->chgBit(oldp+1196,((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fpu_op_r3))));
        bufp->chgBit(oldp+1197,((4U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fpu_op_r3))));
        bufp->chgBit(oldp+1198,((5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fpu_op_r3))));
        bufp->chgCData(oldp+1199,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__u6__DOT__fi_ldz_r0),6);
        bufp->chgBit(oldp+1200,((1U & (IData)((vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_21 
                                               >> 0x19U)))));
        bufp->chgBit(oldp+1201,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__r));
        bufp->chgBit(oldp+1202,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__s));
        bufp->chgBit(oldp+1203,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_27) 
                                 | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__r) 
                                    & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__s)))));
        bufp->chgBit(oldp+1204,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_37)
                                  ? ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__sign)) 
                                     & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_30) 
                                        | (3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fpu_op_r3))))
                                  : ((5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fpu_op_r3))
                                      ? ((2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__rmode_r3)) 
                                         & (((0U != 
                                              (0xfU 
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
        bufp->chgBit(oldp+1205,((1U & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__exp_out_fe)) 
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
                                                 & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_21))))))));
        bufp->chgBit(oldp+1206,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_30) 
                                 & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__sign)) 
                                    & ((~ ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__exp_out) 
                                           >> 7U)) 
                                       | (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__exp_out) 
                                           >> 7U) & 
                                          ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__exp_out_fe)) 
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
        bufp->chgBit(oldp+1207,(((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__sign)) 
                                 & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_30) 
                                    | (3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fpu_op_r3))))));
        bufp->chgCData(oldp+1208,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__exp_out) 
                                            + (1U & 
                                               (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_55 
                                                >> 0x17U))))),8);
        bufp->chgCData(oldp+1209,((0xffU & (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_27) 
                                             & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__s) 
                                                & (0xffU 
                                                   == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r))))
                                             ? ((3U 
                                                 == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fpu_op_r3))
                                                 ? 
                                                ((0x16U 
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
        bufp->chgCData(oldp+1210,((((5U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fpu_op_r3)) 
                                    & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_38))
                                    ? 0xfeU : (0xffU 
                                               & ((0x800000U 
                                                   & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_54)
                                                   ? 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__exp_out))
                                                   : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__exp_out))))),8);
        bufp->chgCData(oldp+1211,((0xffU & ((0x800000U 
                                             & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_54)
                                             ? ((IData)(1U) 
                                                + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__exp_out))
                                             : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__exp_out)))),8);
        bufp->chgIData(oldp+1212,((0x7fffffU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_55)),23);
        bufp->chgIData(oldp+1213,((((3U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fpu_op_r3)) 
                                    & ((0xffU == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__exp_out)) 
                                       & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_53)))
                                    ? 0x7fffffU : (0x7fffffU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_21 
                                                              >> 0x19U))))),23);
        bufp->chgIData(oldp+1214,((((3U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fpu_op_r3)) 
                                    & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_38) 
                                       & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_53)))
                                    ? 0x7fffffU : (0x7fffffU 
                                                   & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_54))),23);
        bufp->chgIData(oldp+1215,((0x7fffffU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_54)),23);
        bufp->chgBit(oldp+1216,((1U & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_55 
                                       >> 0x17U))));
        bufp->chgBit(oldp+1217,((1U & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_54 
                                       >> 0x17U))));
        bufp->chgBit(oldp+1218,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__ovf0));
        bufp->chgBit(oldp+1219,(((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__dn)) 
                                 & (0xffU == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__exp_out)))));
        bufp->chgIData(oldp+1220,((0xffffffU & ((IData)(1U) 
                                                + (0x7fffffU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_21 
                                                              >> 0x19U)))))),24);
        bufp->chgCData(oldp+1221,((0xffU & ((IData)(1U) 
                                            + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__exp_out)))),8);
        bufp->chgCData(oldp+1222,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__exp_out) 
                                            - (IData)(1U)))),8);
        bufp->chgBit(oldp+1223,((1U & (~ (IData)((0U 
                                                  != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__exp_out)))))));
        bufp->chgBit(oldp+1224,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__exp_out_fe));
        bufp->chgBit(oldp+1225,((0xffU == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__exp_out))));
        bufp->chgBit(oldp+1226,((1U & (~ (IData)((0U 
                                                  != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r)))))));
        bufp->chgBit(oldp+1227,((0xffU == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r))));
        bufp->chgBit(oldp+1228,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_51) 
                                 | ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__max_num)) 
                                    & (0xffU == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__exp_out_rnd))))));
        bufp->chgBit(oldp+1229,((0x7fffffU == (0x7fffffU 
                                               & (IData)(
                                                         (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_21 
                                                          >> 0x19U))))));
        bufp->chgIData(oldp+1230,((0x1ffffffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_21))),25);
        bufp->chgCData(oldp+1231,((0xffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_23))),8);
        bufp->chgBit(oldp+1232,((1U & (~ (IData)((0U 
                                                  != 
                                                  (0x7fffffU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_21 
                                                              >> 0x19U)))))))));
        bufp->chgBit(oldp+1233,((1U & (~ (IData)((0U 
                                                  != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q))))));
        bufp->chgBit(oldp+1234,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_14) 
                                       >> 8U))));
        bufp->chgSData(oldp+1235,((0x1ffU & ((IData)(1U) 
                                             + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r)))),9);
        bufp->chgSData(oldp+1236,((0x1ffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r) 
                                             - (IData)(1U)))),9);
        bufp->chgQData(oldp+1237,(((0U != (3U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__shift_right) 
                                                 >> 6U)))
                                    ? 0ULL : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__fract_in_shftr_1)),48);
        bufp->chgQData(oldp+1239,((((0U != (3U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__shift_left) 
                                                  >> 6U))) 
                                    | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__f2i_zero) 
                                       & (5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fpu_op_r3))))
                                    ? 0ULL : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__fract_in_shftl_1)),48);
        bufp->chgQData(oldp+1241,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__fract_in_shftr_1),48);
        bufp->chgQData(oldp+1243,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__fract_in_shftl_1),48);
        bufp->chgCData(oldp+1245,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__exp_div),8);
        bufp->chgCData(oldp+1246,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_23) 
                                            - (IData)(1U)))),8);
        bufp->chgBit(oldp+1247,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__div_dn));
        bufp->chgBit(oldp+1248,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__grs_sel_div));
        bufp->chgBit(oldp+1249,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__div_inf));
        bufp->chgCData(oldp+1250,((0x7fU & ((IData)(0x17U) 
                                            - (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__u6__DOT__fi_ldz_r0)))),7);
        bufp->chgCData(oldp+1251,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__fi_ldz_2),8);
        bufp->chgCData(oldp+1252,((0xffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_70))),8);
        bufp->chgCData(oldp+1253,((0xffU & ((IData)(2U) 
                                            + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r)))),8);
        bufp->chgCData(oldp+1254,((0xffU & (- (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r)))),8);
        bufp->chgBit(oldp+1255,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_70) 
                                       >> 8U))));
        bufp->chgSData(oldp+1256,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__div_exp1),9);
        bufp->chgCData(oldp+1257,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__div_exp2),8);
        bufp->chgCData(oldp+1258,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r) 
                                            + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__fi_ldz_2)))),8);
        bufp->chgBit(oldp+1259,((1U & ((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fpu_op_r3))
                                        ? (~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__div_dn))
                                        : ((2U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fpu_op_r3)) 
                                           | ((0U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r)) 
                                              | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_62)))))));
        bufp->chgBit(oldp+1260,(((0U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r)) 
                                 | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_62))));
        bufp->chgBit(oldp+1261,((1U & (~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__div_dn)))));
        bufp->chgCData(oldp+1262,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__shift_right),8);
        bufp->chgCData(oldp+1263,((0xffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_14))),8);
        bufp->chgCData(oldp+1264,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__div_dn)
                                             ? (- (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r))
                                             : ((IData)(2U) 
                                                + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r))))),8);
        bufp->chgCData(oldp+1265,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__shift_left),8);
        bufp->chgCData(oldp+1266,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_62)
                                             ? ((IData)(1U) 
                                                + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r))
                                             : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__u6__DOT__fi_ldz_r0)))),8);
        bufp->chgCData(oldp+1267,((0xffU & (((~ (IData)(
                                                        (0U 
                                                         != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__exp_out)))) 
                                             & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__op_dn))
                                             ? (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_70)
                                             : ((1U 
                                                 & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__op_dn)) 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__exp_out))))))
                                                 ? (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r)
                                                 : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__u6__DOT__fi_ldz_r0))))),8);
        bufp->chgCData(oldp+1268,((0xffU & ((1U & (
                                                   (~ (IData)(
                                                              (0U 
                                                               != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__exp_out)))) 
                                                   | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__dn)))
                                             ? ((0U 
                                                 != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r))
                                                 ? 
                                                ((IData)(1U) 
                                                 + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r))
                                                 : 2U)
                                             : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__u6__DOT__fi_ldz_r0)))),8);
        bufp->chgCData(oldp+1269,((0xffU & ((0x16U 
                                             < (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__u6__DOT__fi_ldz_r0))
                                             ? ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r) 
                                                - (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                                      - (IData)(0x16U))))
                                             : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r) 
                                                - (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                                      - (IData)(1U))))))),8);
        bufp->chgCData(oldp+1270,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r) 
                                            - (0x3fU 
                                               & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                                  - (IData)(0x16U)))))),8);
        bufp->chgCData(oldp+1271,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r) 
                                            - (0x3fU 
                                               & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                                  - (IData)(1U)))))),8);
        bufp->chgCData(oldp+1272,((0x3fU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                            - (IData)(1U)))),6);
        bufp->chgCData(oldp+1273,((0x3fU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                            - (IData)(0x16U)))),6);
        bufp->chgBit(oldp+1274,(((2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fpu_op_r3)) 
                                 & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_23) 
                                    >> 8U))));
        bufp->chgCData(oldp+1275,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__u6__DOT__fi_ldz_r0),7);
        bufp->chgSData(oldp+1276,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r),9);
        bufp->chgCData(oldp+1277,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r) 
                                            - (IData)(0x7dU)))),8);
        bufp->chgQData(oldp+1278,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__Vcellout__u3__shift_out),56);
        bufp->chgBit(oldp+1280,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__f2i_zero));
        bufp->chgBit(oldp+1281,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__f2i_max));
        bufp->chgCData(oldp+1282,(((0U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__rmode_r3))
                                    ? 0x7eU : 0x7fU)),8);
        bufp->chgCData(oldp+1283,((0xffU & ((5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fpu_op_r3))
                                             ? ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r) 
                                                - (IData)(0x7dU))
                                             : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__u6__DOT__fi_ldz_r0)))),8);
        bufp->chgCData(oldp+1284,((0xffU & ((0U != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)
                                             ? ((IData)(0x9eU) 
                                                - (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__u6__DOT__fi_ldz_r0))
                                             : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opas_r2)
                                                 ? 0x9eU
                                                 : 0U)))),8);
        bufp->chgCData(oldp+1285,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__f2i_zero)
                                    ? 0U : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__f2i_max)
                                             ? 0xffU
                                             : 0U))),8);
        bufp->chgCData(oldp+1286,((0xffU & ((5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fpu_op_r3))
                                             ? ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__f2i_zero)
                                                 ? 0U
                                                 : 
                                                ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__f2i_max)
                                                  ? 0xffU
                                                  : 0U))
                                             : ((0U 
                                                 != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)
                                                 ? 
                                                ((IData)(0x9eU) 
                                                 - (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__u6__DOT__fi_ldz_r0))
                                                 : 
                                                ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opas_r2)
                                                  ? 0x9eU
                                                  : 0U))))),8);
        bufp->chgBit(oldp+1287,(((2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__rmode_r3)) 
                                 & (((0U != (0xfU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                     & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opas_r2)) 
                                        & (0x80U > (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r)))) 
                                    | (0U != (0x1ffffffU 
                                              & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_21)))))));
        bufp->chgBit(oldp+1288,((IData)((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r) 
                                          >> 7U) & 
                                         (~ (IData)(
                                                    (0U 
                                                     != 
                                                     (0x7fU 
                                                      & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r)))))))));
        bufp->chgBit(oldp+1289,((0U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__rmode_r3))));
        bufp->chgBit(oldp+1290,((1U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__rmode_r3))));
        bufp->chgBit(oldp+1291,((2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__rmode_r3))));
        bufp->chgBit(oldp+1292,((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__rmode_r3))));
        bufp->chgBit(oldp+1293,((0U != (0xfU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q))));
        bufp->chgBit(oldp+1294,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__max_num));
        bufp->chgBit(oldp+1295,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__inf_out));
        bufp->chgBit(oldp+1296,(((0U != (0x1ffffffU 
                                         & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_21))) 
                                 & ((~ (IData)((0xffU 
                                                == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r)))) 
                                    & (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_14) 
                                        >> 8U) | ((~ (IData)(
                                                             (0U 
                                                              != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r)))) 
                                                  | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_63)))))));
        bufp->chgBit(oldp+1297,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__inf_out) 
                                 | (((0U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__rmode_r3)) 
                                     & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__max_num)) 
                                    | (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r) 
                                        >> 7U) & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__op_dn) 
                                                  & (0xffU 
                                                     == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__exp_out))))))));
        bufp->chgBit(oldp+1298,(((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__inf_out)) 
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
        bufp->chgBit(oldp+1299,((1U & (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_14) 
                                        >> 8U) | ((~ (IData)(
                                                             (0U 
                                                              != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r)))) 
                                                  | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__VdfgRegularize_he8d392c1_0_63))))));
        bufp->chgBit(oldp+1300,((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__f2i_zero) 
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
        bufp->chgCData(oldp+1301,((0x3fU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__shift_right))),6);
        bufp->chgCData(oldp+1302,((0x3fU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r) 
                                            - (IData)(0x3dU)))),6);
        bufp->chgQData(oldp+1303,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__Vcellout__u3__shift_out),48);
        bufp->chgCData(oldp+1305,((0x3fU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__PVT__shift_left))),6);
        bufp->chgIData(oldp+1306,((0x7fffffU & (IData)(
                                                       (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_21 
                                                        >> 0x19U)))),23);
        bufp->chgCData(oldp+1307,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__exp_out),8);
        bufp->chgBit(oldp+1308,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_23) 
                                       >> 8U))));
        bufp->chgIData(oldp+1309,((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__inf_out) 
                                    | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__ovf0) 
                                       | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__or_result)))
                                    ? 0U : (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__max_num) 
                                             | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_46))
                                             ? 0x7fffffU
                                             : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__fract_out_rnd))),23);
        bufp->chgIData(oldp+1310,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__fract_out_rnd),23);
        bufp->chgSData(oldp+1311,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__exp_next_mi),9);
        bufp->chgBit(oldp+1312,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__dn));
        bufp->chgCData(oldp+1313,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__exp_out_final),8);
        bufp->chgCData(oldp+1314,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__exp_out_rnd),8);
        bufp->chgBit(oldp+1315,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__op_dn));
        bufp->chgBit(oldp+1316,((2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fpu_op_r3))));
        bufp->chgBit(oldp+1317,((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fpu_op_r3))));
        bufp->chgBit(oldp+1318,((4U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fpu_op_r3))));
        bufp->chgBit(oldp+1319,((5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fpu_op_r3))));
        bufp->chgCData(oldp+1320,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__u6__DOT__fi_ldz_r0),6);
        bufp->chgBit(oldp+1321,((1U & (IData)((vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_21 
                                               >> 0x19U)))));
        bufp->chgBit(oldp+1322,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__r));
        bufp->chgBit(oldp+1323,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__s));
        bufp->chgBit(oldp+1324,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_27) 
                                 | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__r) 
                                    & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__s)))));
        bufp->chgBit(oldp+1325,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_37)
                                  ? ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__sign)) 
                                     & ((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_ovf_r) 
                                          >> 1U) & 
                                         ((0U != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm) 
                                          & ((((~ ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_23) 
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
                                         & (((0U != 
                                              (0xffffffU 
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
        bufp->chgBit(oldp+1326,((1U & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__exp_out_fe)) 
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
                                                 & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_21))))))));
        bufp->chgBit(oldp+1327,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_30) 
                                 & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__sign)) 
                                    & ((~ ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__exp_out) 
                                           >> 7U)) 
                                       | (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__exp_out) 
                                           >> 7U) & 
                                          ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__exp_out_fe)) 
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
        bufp->chgBit(oldp+1328,(((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__sign)) 
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
                                          | ((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fpu_op_r3)) 
                                             | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_59) 
                                                & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_23) 
                                                   >> 8U)))))))));
        bufp->chgCData(oldp+1329,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__exp_out) 
                                            + (1U & 
                                               (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_55 
                                                >> 0x17U))))),8);
        bufp->chgCData(oldp+1330,((0xffU & (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_27) 
                                             & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__s) 
                                                & (0xffU 
                                                   == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r))))
                                             ? ((3U 
                                                 == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fpu_op_r3))
                                                 ? 
                                                ((0x16U 
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
        bufp->chgCData(oldp+1331,((((5U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fpu_op_r3)) 
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
        bufp->chgCData(oldp+1332,((0xffU & ((0x800000U 
                                             & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_54)
                                             ? ((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_ovf_r) 
                                                  >> 1U) 
                                                 & (2U 
                                                    == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fpu_op_r3)))
                                                 ? 
                                                ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__exp_out) 
                                                 - (IData)(1U))
                                                 : 
                                                ((IData)(1U) 
                                                 + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__exp_out)))
                                             : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__exp_out)))),8);
        bufp->chgIData(oldp+1333,((0x7fffffU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_55)),23);
        bufp->chgIData(oldp+1334,((((3U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fpu_op_r3)) 
                                    & ((0xffU == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__exp_out)) 
                                       & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_53)))
                                    ? 0x7fffffU : (0x7fffffU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_21 
                                                              >> 0x19U))))),23);
        bufp->chgIData(oldp+1335,((((3U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fpu_op_r3)) 
                                    & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_38) 
                                       & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_53)))
                                    ? 0x7fffffU : (0x7fffffU 
                                                   & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_54))),23);
        bufp->chgIData(oldp+1336,((0x7fffffU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_54)),23);
        bufp->chgBit(oldp+1337,((1U & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_55 
                                       >> 0x17U))));
        bufp->chgBit(oldp+1338,((1U & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_54 
                                       >> 0x17U))));
        bufp->chgBit(oldp+1339,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__ovf0));
        bufp->chgBit(oldp+1340,(((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__dn)) 
                                 & (0xffU == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__exp_out)))));
        bufp->chgIData(oldp+1341,((0xffffffU & ((IData)(1U) 
                                                + (0x7fffffU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_21 
                                                              >> 0x19U)))))),24);
        bufp->chgCData(oldp+1342,((0xffU & ((IData)(1U) 
                                            + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__exp_out)))),8);
        bufp->chgCData(oldp+1343,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__exp_out) 
                                            - (IData)(1U)))),8);
        bufp->chgBit(oldp+1344,((1U & (~ (IData)((0U 
                                                  != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__exp_out)))))));
        bufp->chgBit(oldp+1345,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__exp_out_fe));
        bufp->chgBit(oldp+1346,((0xffU == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__exp_out))));
        bufp->chgBit(oldp+1347,((1U & (~ (IData)((0U 
                                                  != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r)))))));
        bufp->chgBit(oldp+1348,((0xffU == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r))));
        bufp->chgBit(oldp+1349,(((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_48)) 
                                 & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_51) 
                                    | ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__max_num)) 
                                       & (0xffU == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__exp_out_rnd)))))));
        bufp->chgBit(oldp+1350,((0x7fffffU == (0x7fffffU 
                                               & (IData)(
                                                         (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_21 
                                                          >> 0x19U))))));
        bufp->chgIData(oldp+1351,((0x1ffffffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_21))),25);
        bufp->chgCData(oldp+1352,((0xffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_23))),8);
        bufp->chgBit(oldp+1353,((1U & (~ (IData)((0U 
                                                  != 
                                                  (0x7fffffU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_21 
                                                              >> 0x19U)))))))));
        bufp->chgBit(oldp+1354,((1U & (~ (IData)((0U 
                                                  != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm))))));
        bufp->chgBit(oldp+1355,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_14) 
                                       >> 8U))));
        bufp->chgSData(oldp+1356,((0x1ffU & ((IData)(1U) 
                                             + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r)))),9);
        bufp->chgSData(oldp+1357,((0x1ffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r) 
                                             - (IData)(1U)))),9);
        bufp->chgQData(oldp+1358,(((0U != (3U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__shift_right) 
                                                 >> 6U)))
                                    ? 0ULL : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__fract_in_shftr_1)),48);
        bufp->chgQData(oldp+1360,((((0U != (3U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__shift_left) 
                                                  >> 6U))) 
                                    | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__f2i_zero) 
                                       & (5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fpu_op_r3))))
                                    ? 0ULL : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__fract_in_shftl_1)),48);
        bufp->chgQData(oldp+1362,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__fract_in_shftr_1),48);
        bufp->chgQData(oldp+1364,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__fract_in_shftl_1),48);
        bufp->chgCData(oldp+1366,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__exp_div),8);
        bufp->chgCData(oldp+1367,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_23) 
                                            - (IData)(1U)))),8);
        bufp->chgBit(oldp+1368,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__div_dn));
        bufp->chgBit(oldp+1369,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_15) 
                                 & ((~ (IData)((0U 
                                                != 
                                                (0xffffffU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm 
                                                            >> 0x17U)))))) 
                                    & (0x16U < (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r))))));
        bufp->chgBit(oldp+1370,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__grs_sel_div));
        bufp->chgBit(oldp+1371,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__div_inf));
        bufp->chgCData(oldp+1372,((0x7fU & ((IData)(0x17U) 
                                            - (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__u6__DOT__fi_ldz_r0)))),7);
        bufp->chgCData(oldp+1373,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__fi_ldz_2),8);
        bufp->chgCData(oldp+1374,((0xffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_70))),8);
        bufp->chgCData(oldp+1375,((0xffU & ((IData)(2U) 
                                            + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r)))),8);
        bufp->chgCData(oldp+1376,((0xffU & (- (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r)))),8);
        bufp->chgBit(oldp+1377,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_70) 
                                       >> 8U))));
        bufp->chgSData(oldp+1378,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__div_exp1),9);
        bufp->chgCData(oldp+1379,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__div_exp2),8);
        bufp->chgCData(oldp+1380,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r) 
                                            + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__fi_ldz_2)))),8);
        bufp->chgBit(oldp+1381,((1U & ((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fpu_op_r3))
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
        bufp->chgBit(oldp+1382,((1U & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_61)) 
                                       | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_62)))));
        bufp->chgBit(oldp+1383,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_67) 
                                       | ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_15)) 
                                          & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__div_dn)) 
                                             & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_66) 
                                                | ((~ 
                                                    ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_ovf_r) 
                                                     >> 1U)) 
                                                   | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_65)))))))));
        bufp->chgCData(oldp+1384,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__shift_right),8);
        bufp->chgCData(oldp+1385,((0xffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_14))),8);
        bufp->chgCData(oldp+1386,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_15)
                                             ? (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r)
                                             : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__div_dn)
                                                 ? 
                                                (- (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r))
                                                 : 
                                                ((IData)(2U) 
                                                 + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r)))))),8);
        bufp->chgCData(oldp+1387,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__shift_left),8);
        bufp->chgCData(oldp+1388,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_62)
                                             ? ((IData)(1U) 
                                                + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r))
                                             : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__u6__DOT__fi_ldz_r0)))),8);
        bufp->chgCData(oldp+1389,((0xffU & (((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_20)) 
                                             & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_66))
                                             ? (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_70)
                                             : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_65)
                                                 ? (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r)
                                                 : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__u6__DOT__fi_ldz_r0))))),8);
        bufp->chgCData(oldp+1390,((0xffU & ((1U & (
                                                   (~ (IData)(
                                                              (0U 
                                                               != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__exp_out)))) 
                                                   | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__dn)))
                                             ? ((0U 
                                                 != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r))
                                                 ? 
                                                ((IData)(1U) 
                                                 + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r))
                                                 : 2U)
                                             : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__u6__DOT__fi_ldz_r0)))),8);
        bufp->chgCData(oldp+1391,((0xffU & ((0x16U 
                                             < (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__u6__DOT__fi_ldz_r0))
                                             ? ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r) 
                                                - (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                                      - (IData)(0x16U))))
                                             : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r) 
                                                - (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                                      - (IData)(1U))))))),8);
        bufp->chgCData(oldp+1392,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r) 
                                            - (0x3fU 
                                               & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                                  - (IData)(0x16U)))))),8);
        bufp->chgCData(oldp+1393,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r) 
                                            - (0x3fU 
                                               & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                                  - (IData)(1U)))))),8);
        bufp->chgCData(oldp+1394,((0x3fU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                            - (IData)(1U)))),6);
        bufp->chgCData(oldp+1395,((0x3fU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                            - (IData)(0x16U)))),6);
        bufp->chgBit(oldp+1396,((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_59) 
                                  & (2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fpu_op_r3))) 
                                 | ((2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fpu_op_r3)) 
                                    & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_23) 
                                       >> 8U)))));
        bufp->chgCData(oldp+1397,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__u6__DOT__fi_ldz_r0),7);
        bufp->chgSData(oldp+1398,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r),9);
        bufp->chgCData(oldp+1399,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r) 
                                            - (IData)(0x7dU)))),8);
        bufp->chgQData(oldp+1400,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__Vcellout__u3__shift_out),56);
        bufp->chgBit(oldp+1402,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__f2i_zero));
        bufp->chgBit(oldp+1403,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__f2i_max));
        bufp->chgCData(oldp+1404,(((0U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__rmode_r3))
                                    ? 0x7eU : 0x7fU)),8);
        bufp->chgCData(oldp+1405,((0xffU & ((5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fpu_op_r3))
                                             ? ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r) 
                                                - (IData)(0x7dU))
                                             : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__u6__DOT__fi_ldz_r0)))),8);
        bufp->chgCData(oldp+1406,((0xffU & ((0U != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm)
                                             ? ((IData)(0x9eU) 
                                                - (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__u6__DOT__fi_ldz_r0))
                                             : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__opas_r2)
                                                 ? 0x9eU
                                                 : 0U)))),8);
        bufp->chgCData(oldp+1407,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__f2i_zero)
                                    ? 0U : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__f2i_max)
                                             ? 0xffU
                                             : 0U))),8);
        bufp->chgCData(oldp+1408,((0xffU & ((5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fpu_op_r3))
                                             ? ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__f2i_zero)
                                                 ? 0U
                                                 : 
                                                ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__f2i_max)
                                                  ? 0xffU
                                                  : 0U))
                                             : ((0U 
                                                 != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm)
                                                 ? 
                                                ((IData)(0x9eU) 
                                                 - (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__u6__DOT__fi_ldz_r0))
                                                 : 
                                                ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__opas_r2)
                                                  ? 0x9eU
                                                  : 0U))))),8);
        bufp->chgBit(oldp+1409,(((2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__rmode_r3)) 
                                 & (((0U != (0xffffffU 
                                             & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm))) 
                                     & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__opas_r2)) 
                                        & (0x80U > (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r)))) 
                                    | (0U != (0x1ffffffU 
                                              & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_21)))))));
        bufp->chgBit(oldp+1410,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__exp_in_80));
        bufp->chgBit(oldp+1411,((0U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__rmode_r3))));
        bufp->chgBit(oldp+1412,((1U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__rmode_r3))));
        bufp->chgBit(oldp+1413,((2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__rmode_r3))));
        bufp->chgBit(oldp+1414,((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__rmode_r3))));
        bufp->chgBit(oldp+1415,((0U != (0xffffffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm)))));
        bufp->chgBit(oldp+1416,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__max_num));
        bufp->chgBit(oldp+1417,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__inf_out));
        bufp->chgBit(oldp+1418,((((0U != (0x1ffffffU 
                                          & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_21))) 
                                  & ((~ (IData)((0xffU 
                                                 == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r)))) 
                                     & (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_14) 
                                         >> 8U) | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_61) 
                                                   | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_63))))) 
                                 | ((~ (IData)((0U 
                                                != 
                                                (0x7fffffU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_21 
                                                            >> 0x19U)))))) 
                                    & ((0U != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm) 
                                       & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_ovf_r) 
                                          >> 1U))))));
        bufp->chgBit(oldp+1419,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__inf_out) 
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
        bufp->chgBit(oldp+1420,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__undeflow_div));
        bufp->chgBit(oldp+1421,((IData)(((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_14) 
                                           >> 8U) | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_61)) 
                                         | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__VdfgRegularize_he8d392c1_0_63)))));
        bufp->chgBit(oldp+1422,((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__f2i_zero) 
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
        bufp->chgCData(oldp+1423,((0x3fU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__shift_right))),6);
        bufp->chgCData(oldp+1424,((0x3fU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r) 
                                            - (IData)(0x3dU)))),6);
        bufp->chgQData(oldp+1425,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__Vcellout__u3__shift_out),48);
        bufp->chgCData(oldp+1427,((0x3fU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__PVT__shift_left))),6);
        bufp->chgIData(oldp+1428,((0x7fffffU & (IData)(
                                                       (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_21 
                                                        >> 0x19U)))),23);
        bufp->chgCData(oldp+1429,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__exp_out),8);
        bufp->chgBit(oldp+1430,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_23) 
                                       >> 8U))));
        bufp->chgIData(oldp+1431,((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__inf_out) 
                                    | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__ovf0))
                                    ? 0U : (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__max_num) 
                                             | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_46))
                                             ? 0x7fffffU
                                             : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__fract_out_rnd))),23);
        bufp->chgIData(oldp+1432,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__fract_out_rnd),23);
        bufp->chgSData(oldp+1433,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__exp_next_mi),9);
        bufp->chgBit(oldp+1434,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__dn));
        bufp->chgCData(oldp+1435,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__exp_out_final),8);
        bufp->chgCData(oldp+1436,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__exp_out_rnd),8);
        bufp->chgBit(oldp+1437,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__op_dn));
        bufp->chgBit(oldp+1438,((2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fpu_op_r3))));
        bufp->chgBit(oldp+1439,((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fpu_op_r3))));
        bufp->chgBit(oldp+1440,((4U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fpu_op_r3))));
        bufp->chgBit(oldp+1441,((5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fpu_op_r3))));
        bufp->chgCData(oldp+1442,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__u6__DOT__fi_ldz_r0),6);
        bufp->chgBit(oldp+1443,((1U & (IData)((vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_21 
                                               >> 0x19U)))));
        bufp->chgBit(oldp+1444,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__r));
        bufp->chgBit(oldp+1445,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__s));
        bufp->chgBit(oldp+1446,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_27) 
                                 | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__r) 
                                    & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__s)))));
        bufp->chgBit(oldp+1447,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_37)
                                  ? ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__sign)) 
                                     & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_30) 
                                        | (3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fpu_op_r3))))
                                  : ((5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fpu_op_r3))
                                      ? ((2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__rmode_r3)) 
                                         & (((0U != 
                                              (0xfU 
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
        bufp->chgBit(oldp+1448,((1U & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__exp_out_fe)) 
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
                                                 & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_21))))))));
        bufp->chgBit(oldp+1449,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_30) 
                                 & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__sign)) 
                                    & ((~ ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__exp_out) 
                                           >> 7U)) 
                                       | (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__exp_out) 
                                           >> 7U) & 
                                          ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__exp_out_fe)) 
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
        bufp->chgBit(oldp+1450,(((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__sign)) 
                                 & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_30) 
                                    | (3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fpu_op_r3))))));
        bufp->chgCData(oldp+1451,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__exp_out) 
                                            + (1U & 
                                               (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_55 
                                                >> 0x17U))))),8);
        bufp->chgCData(oldp+1452,((0xffU & (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_27) 
                                             & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__s) 
                                                & (0xffU 
                                                   == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r))))
                                             ? ((3U 
                                                 == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fpu_op_r3))
                                                 ? 
                                                ((0x16U 
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
        bufp->chgCData(oldp+1453,((((5U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fpu_op_r3)) 
                                    & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_38))
                                    ? 0xfeU : (0xffU 
                                               & ((0x800000U 
                                                   & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_54)
                                                   ? 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__exp_out))
                                                   : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__exp_out))))),8);
        bufp->chgCData(oldp+1454,((0xffU & ((0x800000U 
                                             & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_54)
                                             ? ((IData)(1U) 
                                                + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__exp_out))
                                             : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__exp_out)))),8);
        bufp->chgIData(oldp+1455,((0x7fffffU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_55)),23);
        bufp->chgIData(oldp+1456,((((3U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fpu_op_r3)) 
                                    & ((0xffU == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__exp_out)) 
                                       & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_53)))
                                    ? 0x7fffffU : (0x7fffffU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_21 
                                                              >> 0x19U))))),23);
        bufp->chgIData(oldp+1457,((((3U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fpu_op_r3)) 
                                    & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_38) 
                                       & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_53)))
                                    ? 0x7fffffU : (0x7fffffU 
                                                   & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_54))),23);
        bufp->chgIData(oldp+1458,((0x7fffffU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_54)),23);
        bufp->chgBit(oldp+1459,((1U & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_55 
                                       >> 0x17U))));
        bufp->chgBit(oldp+1460,((1U & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_54 
                                       >> 0x17U))));
        bufp->chgBit(oldp+1461,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__ovf0));
        bufp->chgBit(oldp+1462,(((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__dn)) 
                                 & (0xffU == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__exp_out)))));
        bufp->chgIData(oldp+1463,((0xffffffU & ((IData)(1U) 
                                                + (0x7fffffU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_21 
                                                              >> 0x19U)))))),24);
        bufp->chgCData(oldp+1464,((0xffU & ((IData)(1U) 
                                            + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__exp_out)))),8);
        bufp->chgCData(oldp+1465,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__exp_out) 
                                            - (IData)(1U)))),8);
        bufp->chgBit(oldp+1466,((1U & (~ (IData)((0U 
                                                  != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__exp_out)))))));
        bufp->chgBit(oldp+1467,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__exp_out_fe));
        bufp->chgBit(oldp+1468,((0xffU == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__exp_out))));
        bufp->chgBit(oldp+1469,((1U & (~ (IData)((0U 
                                                  != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r)))))));
        bufp->chgBit(oldp+1470,((0xffU == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r))));
        bufp->chgBit(oldp+1471,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_51) 
                                 | ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__max_num)) 
                                    & (0xffU == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__exp_out_rnd))))));
        bufp->chgBit(oldp+1472,((0x7fffffU == (0x7fffffU 
                                               & (IData)(
                                                         (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_21 
                                                          >> 0x19U))))));
        bufp->chgIData(oldp+1473,((0x1ffffffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_21))),25);
        bufp->chgCData(oldp+1474,((0xffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_23))),8);
        bufp->chgBit(oldp+1475,((1U & (~ (IData)((0U 
                                                  != 
                                                  (0x7fffffU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_21 
                                                              >> 0x19U)))))))));
        bufp->chgBit(oldp+1476,((1U & (~ (IData)((0U 
                                                  != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q))))));
        bufp->chgBit(oldp+1477,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_14) 
                                       >> 8U))));
        bufp->chgSData(oldp+1478,((0x1ffU & ((IData)(1U) 
                                             + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r)))),9);
        bufp->chgSData(oldp+1479,((0x1ffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r) 
                                             - (IData)(1U)))),9);
        bufp->chgQData(oldp+1480,(((0U != (3U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__shift_right) 
                                                 >> 6U)))
                                    ? 0ULL : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__fract_in_shftr_1)),48);
        bufp->chgQData(oldp+1482,((((0U != (3U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__shift_left) 
                                                  >> 6U))) 
                                    | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__f2i_zero) 
                                       & (5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fpu_op_r3))))
                                    ? 0ULL : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__fract_in_shftl_1)),48);
        bufp->chgQData(oldp+1484,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__fract_in_shftr_1),48);
        bufp->chgQData(oldp+1486,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__fract_in_shftl_1),48);
        bufp->chgCData(oldp+1488,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__exp_div),8);
        bufp->chgCData(oldp+1489,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_23) 
                                            - (IData)(1U)))),8);
        bufp->chgBit(oldp+1490,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__div_dn));
        bufp->chgBit(oldp+1491,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__grs_sel_div));
        bufp->chgBit(oldp+1492,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__div_inf));
        bufp->chgCData(oldp+1493,((0x7fU & ((IData)(0x17U) 
                                            - (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__u6__DOT__fi_ldz_r0)))),7);
        bufp->chgCData(oldp+1494,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__fi_ldz_2),8);
        bufp->chgCData(oldp+1495,((0xffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_70))),8);
        bufp->chgCData(oldp+1496,((0xffU & ((IData)(2U) 
                                            + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r)))),8);
        bufp->chgCData(oldp+1497,((0xffU & (- (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r)))),8);
        bufp->chgBit(oldp+1498,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_70) 
                                       >> 8U))));
        bufp->chgSData(oldp+1499,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__div_exp1),9);
        bufp->chgCData(oldp+1500,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__div_exp2),8);
        bufp->chgCData(oldp+1501,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r) 
                                            + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__fi_ldz_2)))),8);
        bufp->chgBit(oldp+1502,((1U & ((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fpu_op_r3))
                                        ? (~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__div_dn))
                                        : ((2U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fpu_op_r3)) 
                                           | ((0U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r)) 
                                              | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_62)))))));
        bufp->chgBit(oldp+1503,(((0U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r)) 
                                 | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_62))));
        bufp->chgBit(oldp+1504,((1U & (~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__div_dn)))));
        bufp->chgCData(oldp+1505,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__shift_right),8);
        bufp->chgCData(oldp+1506,((0xffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_14))),8);
        bufp->chgCData(oldp+1507,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__div_dn)
                                             ? (- (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r))
                                             : ((IData)(2U) 
                                                + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r))))),8);
        bufp->chgCData(oldp+1508,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__shift_left),8);
        bufp->chgCData(oldp+1509,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_62)
                                             ? ((IData)(1U) 
                                                + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r))
                                             : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__u6__DOT__fi_ldz_r0)))),8);
        bufp->chgCData(oldp+1510,((0xffU & (((~ (IData)(
                                                        (0U 
                                                         != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__exp_out)))) 
                                             & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__op_dn))
                                             ? (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_70)
                                             : ((1U 
                                                 & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__op_dn)) 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__exp_out))))))
                                                 ? (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r)
                                                 : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__u6__DOT__fi_ldz_r0))))),8);
        bufp->chgCData(oldp+1511,((0xffU & ((1U & (
                                                   (~ (IData)(
                                                              (0U 
                                                               != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__exp_out)))) 
                                                   | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__dn)))
                                             ? ((0U 
                                                 != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r))
                                                 ? 
                                                ((IData)(1U) 
                                                 + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r))
                                                 : 2U)
                                             : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__u6__DOT__fi_ldz_r0)))),8);
        bufp->chgCData(oldp+1512,((0xffU & ((0x16U 
                                             < (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__u6__DOT__fi_ldz_r0))
                                             ? ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r) 
                                                - (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                                      - (IData)(0x16U))))
                                             : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r) 
                                                - (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                                      - (IData)(1U))))))),8);
        bufp->chgCData(oldp+1513,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r) 
                                            - (0x3fU 
                                               & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                                  - (IData)(0x16U)))))),8);
        bufp->chgCData(oldp+1514,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r) 
                                            - (0x3fU 
                                               & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                                  - (IData)(1U)))))),8);
        bufp->chgCData(oldp+1515,((0x3fU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                            - (IData)(1U)))),6);
        bufp->chgCData(oldp+1516,((0x3fU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__u6__DOT__fi_ldz_r0) 
                                            - (IData)(0x16U)))),6);
        bufp->chgBit(oldp+1517,(((2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fpu_op_r3)) 
                                 & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_23) 
                                    >> 8U))));
        bufp->chgCData(oldp+1518,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__u6__DOT__fi_ldz_r0),7);
        bufp->chgSData(oldp+1519,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r),9);
        bufp->chgCData(oldp+1520,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r) 
                                            - (IData)(0x7dU)))),8);
        bufp->chgQData(oldp+1521,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__Vcellout__u3__shift_out),56);
        bufp->chgBit(oldp+1523,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__f2i_zero));
        bufp->chgBit(oldp+1524,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__f2i_max));
        bufp->chgCData(oldp+1525,(((0U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__rmode_r3))
                                    ? 0x7eU : 0x7fU)),8);
        bufp->chgCData(oldp+1526,((0xffU & ((5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fpu_op_r3))
                                             ? ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r) 
                                                - (IData)(0x7dU))
                                             : (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__u6__DOT__fi_ldz_r0)))),8);
        bufp->chgCData(oldp+1527,((0xffU & ((0U != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)
                                             ? ((IData)(0x9eU) 
                                                - (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__u6__DOT__fi_ldz_r0))
                                             : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opas_r2)
                                                 ? 0x9eU
                                                 : 0U)))),8);
        bufp->chgCData(oldp+1528,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__f2i_zero)
                                    ? 0U : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__f2i_max)
                                             ? 0xffU
                                             : 0U))),8);
        bufp->chgCData(oldp+1529,((0xffU & ((5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fpu_op_r3))
                                             ? ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__f2i_zero)
                                                 ? 0U
                                                 : 
                                                ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__f2i_max)
                                                  ? 0xffU
                                                  : 0U))
                                             : ((0U 
                                                 != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)
                                                 ? 
                                                ((IData)(0x9eU) 
                                                 - (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__u6__DOT__fi_ldz_r0))
                                                 : 
                                                ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opas_r2)
                                                  ? 0x9eU
                                                  : 0U))))),8);
        bufp->chgBit(oldp+1530,(((2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__rmode_r3)) 
                                 & (((0U != (0xfU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                     & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opas_r2)) 
                                        & (0x80U > (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r)))) 
                                    | (0U != (0x1ffffffU 
                                              & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_21)))))));
        bufp->chgBit(oldp+1531,((IData)((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r) 
                                          >> 7U) & 
                                         (~ (IData)(
                                                    (0U 
                                                     != 
                                                     (0x7fU 
                                                      & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r)))))))));
        bufp->chgBit(oldp+1532,((0U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__rmode_r3))));
        bufp->chgBit(oldp+1533,((1U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__rmode_r3))));
        bufp->chgBit(oldp+1534,((2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__rmode_r3))));
        bufp->chgBit(oldp+1535,((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__rmode_r3))));
        bufp->chgBit(oldp+1536,((0U != (0xfU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q))));
        bufp->chgBit(oldp+1537,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__max_num));
        bufp->chgBit(oldp+1538,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__inf_out));
        bufp->chgBit(oldp+1539,(((0U != (0x1ffffffU 
                                         & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_21))) 
                                 & ((~ (IData)((0xffU 
                                                == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r)))) 
                                    & (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_14) 
                                        >> 8U) | ((~ (IData)(
                                                             (0U 
                                                              != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r)))) 
                                                  | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_63)))))));
        bufp->chgBit(oldp+1540,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__inf_out) 
                                 | (((0U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__rmode_r3)) 
                                     & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__max_num)) 
                                    | (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r) 
                                        >> 7U) & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__op_dn) 
                                                  & (0xffU 
                                                     == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__exp_out))))))));
        bufp->chgBit(oldp+1541,(((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__inf_out)) 
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
        bufp->chgBit(oldp+1542,((1U & (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_14) 
                                        >> 8U) | ((~ (IData)(
                                                             (0U 
                                                              != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r)))) 
                                                  | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__VdfgRegularize_he8d392c1_0_63))))));
        bufp->chgBit(oldp+1543,((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__f2i_zero) 
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
        bufp->chgCData(oldp+1544,((0x3fU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__shift_right))),6);
        bufp->chgCData(oldp+1545,((0x3fU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r) 
                                            - (IData)(0x3dU)))),6);
        bufp->chgQData(oldp+1546,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__Vcellout__u3__shift_out),48);
        bufp->chgCData(oldp+1548,((0x3fU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__PVT__shift_left))),6);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgIData(oldp+1549,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__adj_op_tmp),27);
        bufp->chgCData(oldp+1550,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__exp_diff_sft),5);
        bufp->chgIData(oldp+1551,((0x7ffffffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.u1__DOT____Vcellout__u7__shift_out))),27);
        bufp->chgQData(oldp+1552,((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__adj_op_tmp))),48);
        bufp->chgCData(oldp+1554,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__exp_diff_sft),6);
        bufp->chgQData(oldp+1555,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.u1__DOT____Vcellout__u7__shift_out),48);
        bufp->chgIData(oldp+1557,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__adj_op_tmp),27);
        bufp->chgCData(oldp+1558,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__exp_diff_sft),5);
        bufp->chgIData(oldp+1559,((0x7ffffffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.u1__DOT____Vcellout__u7__shift_out))),27);
        bufp->chgQData(oldp+1560,((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__adj_op_tmp))),48);
        bufp->chgCData(oldp+1562,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__exp_diff_sft),6);
        bufp->chgQData(oldp+1563,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.u1__DOT____Vcellout__u7__shift_out),48);
        bufp->chgIData(oldp+1565,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__adj_op_tmp),27);
        bufp->chgCData(oldp+1566,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__exp_diff_sft),5);
        bufp->chgIData(oldp+1567,((0x7ffffffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.u1__DOT____Vcellout__u7__shift_out))),27);
        bufp->chgQData(oldp+1568,((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__adj_op_tmp))),48);
        bufp->chgCData(oldp+1570,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__exp_diff_sft),6);
        bufp->chgQData(oldp+1571,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.u1__DOT____Vcellout__u7__shift_out),48);
        bufp->chgIData(oldp+1573,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__adj_op_tmp),27);
        bufp->chgCData(oldp+1574,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__exp_diff_sft),5);
        bufp->chgIData(oldp+1575,((0x7ffffffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.u1__DOT____Vcellout__u7__shift_out))),27);
        bufp->chgQData(oldp+1576,((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__adj_op_tmp))),48);
        bufp->chgCData(oldp+1578,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__exp_diff_sft),6);
        bufp->chgQData(oldp+1579,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.u1__DOT____Vcellout__u7__shift_out),48);
        bufp->chgIData(oldp+1581,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__adj_op_tmp),27);
        bufp->chgCData(oldp+1582,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__exp_diff_sft),5);
        bufp->chgIData(oldp+1583,((0x7ffffffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.u1__DOT____Vcellout__u7__shift_out))),27);
        bufp->chgQData(oldp+1584,((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__adj_op_tmp))),48);
        bufp->chgCData(oldp+1586,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__exp_diff_sft),6);
        bufp->chgQData(oldp+1587,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.u1__DOT____Vcellout__u7__shift_out),48);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
        bufp->chgBit(oldp+1589,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__fractb_lt_fracta));
        bufp->chgIData(oldp+1590,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__adj_op_out),27);
        bufp->chgIData(oldp+1591,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__fracta_n),27);
        bufp->chgIData(oldp+1592,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__fractb_n),27);
        bufp->chgIData(oldp+1593,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__fractb_lt_fracta)
                                    ? vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__fractb_n
                                    : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__fracta_n)),27);
        bufp->chgIData(oldp+1594,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__fractb_lt_fracta)
                                    ? vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__fracta_n
                                    : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__fractb_n)),27);
        bufp->chgBit(oldp+1595,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__sign_d));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[7U])) {
        bufp->chgBit(oldp+1596,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__fractb_lt_fracta));
        bufp->chgIData(oldp+1597,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__adj_op_out),27);
        bufp->chgIData(oldp+1598,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__fracta_n),27);
        bufp->chgIData(oldp+1599,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__fractb_n),27);
        bufp->chgIData(oldp+1600,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__fractb_lt_fracta)
                                    ? vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__fractb_n
                                    : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__fracta_n)),27);
        bufp->chgIData(oldp+1601,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__fractb_lt_fracta)
                                    ? vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__fracta_n
                                    : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__fractb_n)),27);
        bufp->chgBit(oldp+1602,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__sign_d));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[8U])) {
        bufp->chgBit(oldp+1603,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__fractb_lt_fracta));
        bufp->chgIData(oldp+1604,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__adj_op_out),27);
        bufp->chgIData(oldp+1605,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__fracta_n),27);
        bufp->chgIData(oldp+1606,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__fractb_n),27);
        bufp->chgIData(oldp+1607,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__fractb_lt_fracta)
                                    ? vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__fractb_n
                                    : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__fracta_n)),27);
        bufp->chgIData(oldp+1608,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__fractb_lt_fracta)
                                    ? vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__fracta_n
                                    : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__fractb_n)),27);
        bufp->chgBit(oldp+1609,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__sign_d));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[9U])) {
        bufp->chgBit(oldp+1610,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__fractb_lt_fracta));
        bufp->chgIData(oldp+1611,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__adj_op_out),27);
        bufp->chgIData(oldp+1612,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__fracta_n),27);
        bufp->chgIData(oldp+1613,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__fractb_n),27);
        bufp->chgIData(oldp+1614,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__fractb_lt_fracta)
                                    ? vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__fractb_n
                                    : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__fracta_n)),27);
        bufp->chgIData(oldp+1615,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__fractb_lt_fracta)
                                    ? vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__fracta_n
                                    : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__fractb_n)),27);
        bufp->chgBit(oldp+1616,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__sign_d));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xaU])) {
        bufp->chgBit(oldp+1617,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__fractb_lt_fracta));
        bufp->chgIData(oldp+1618,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__adj_op_out),27);
        bufp->chgIData(oldp+1619,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__fracta_n),27);
        bufp->chgIData(oldp+1620,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__fractb_n),27);
        bufp->chgIData(oldp+1621,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__fractb_lt_fracta)
                                    ? vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__fractb_n
                                    : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__fracta_n)),27);
        bufp->chgIData(oldp+1622,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__fractb_lt_fracta)
                                    ? vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__fracta_n
                                    : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__fractb_n)),27);
        bufp->chgBit(oldp+1623,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__sign_d));
    }
    bufp->chgBit(oldp+1624,(vlSelf->co_sim_syn2__DOT__clock));
    bufp->chgBit(oldp+1625,(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0232_li0232));
    bufp->chgBit(oldp+1626,(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0735_li0735));
    bufp->chgBit(oldp+1627,(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1101_li1101));
    bufp->chgBit(oldp+1628,(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1352_li1352));
    bufp->chgBit(oldp+1629,(((IData)(vlSelf->co_sim_syn2__DOT__clock) 
                             & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0232_li0232))));
    bufp->chgBit(oldp+1630,(((~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0232_li0232)) 
                             & (IData)(vlSelf->co_sim_syn2__DOT__clock))));
    bufp->chgBit(oldp+1631,(((~ (IData)(vlSelf->co_sim_syn2__DOT__clock)) 
                             & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0232_li0232))));
    bufp->chgBit(oldp+1632,((1U & ((~ (IData)(vlSelf->co_sim_syn2__DOT__clock)) 
                                   & (~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0232_li0232))))));
    bufp->chgBit(oldp+1633,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0232_li0232)))));
    bufp->chgBit(oldp+1634,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__clock)))));
    bufp->chgBit(oldp+1635,(((IData)(vlSelf->co_sim_syn2__DOT__clock) 
                             & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0735_li0735))));
    bufp->chgBit(oldp+1636,(((~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0735_li0735)) 
                             & (IData)(vlSelf->co_sim_syn2__DOT__clock))));
    bufp->chgBit(oldp+1637,(((~ (IData)(vlSelf->co_sim_syn2__DOT__clock)) 
                             & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0735_li0735))));
    bufp->chgBit(oldp+1638,((1U & ((~ (IData)(vlSelf->co_sim_syn2__DOT__clock)) 
                                   & (~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0735_li0735))))));
    bufp->chgBit(oldp+1639,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0735_li0735)))));
    bufp->chgBit(oldp+1640,(((IData)(vlSelf->co_sim_syn2__DOT__clock) 
                             & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1101_li1101))));
    bufp->chgBit(oldp+1641,(((~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1101_li1101)) 
                             & (IData)(vlSelf->co_sim_syn2__DOT__clock))));
    bufp->chgBit(oldp+1642,(((~ (IData)(vlSelf->co_sim_syn2__DOT__clock)) 
                             & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1101_li1101))));
    bufp->chgBit(oldp+1643,((1U & ((~ (IData)(vlSelf->co_sim_syn2__DOT__clock)) 
                                   & (~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1101_li1101))))));
    bufp->chgBit(oldp+1644,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1101_li1101)))));
    bufp->chgBit(oldp+1645,(((IData)(vlSelf->co_sim_syn2__DOT__clock) 
                             & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1352_li1352))));
    bufp->chgBit(oldp+1646,(((~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1352_li1352)) 
                             & (IData)(vlSelf->co_sim_syn2__DOT__clock))));
    bufp->chgBit(oldp+1647,(((~ (IData)(vlSelf->co_sim_syn2__DOT__clock)) 
                             & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1352_li1352))));
    bufp->chgBit(oldp+1648,((1U & ((~ (IData)(vlSelf->co_sim_syn2__DOT__clock)) 
                                   & (~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1352_li1352))))));
    bufp->chgBit(oldp+1649,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1352_li1352)))));
    bufp->chgCData(oldp+1650,(((2U & (vlSelf->co_sim_syn2__DOT__in1 
                                      >> 0x1eU)) | (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eopa__05b31__05d))),2);
    bufp->chgCData(oldp+1651,((((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eopa__05b31__05d) 
                                << 1U) | (vlSelf->co_sim_syn2__DOT__in4 
                                          >> 0x1fU))),2);
    bufp->chgBit(oldp+1652,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__sticky));
    bufp->chgBit(oldp+1653,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.u1__DOT____Vcellout__u7__shift_out) 
                                   | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__sticky)))));
    bufp->chgBit(oldp+1654,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__sticky));
    bufp->chgBit(oldp+1655,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.u1__DOT____Vcellout__u7__shift_out) 
                                   | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__sticky)))));
    bufp->chgBit(oldp+1656,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__sticky));
    bufp->chgBit(oldp+1657,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.u1__DOT____Vcellout__u7__shift_out) 
                                   | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__sticky)))));
    bufp->chgBit(oldp+1658,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__sticky));
    bufp->chgBit(oldp+1659,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.u1__DOT____Vcellout__u7__shift_out) 
                                   | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__sticky)))));
    bufp->chgBit(oldp+1660,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__sticky));
    bufp->chgBit(oldp+1661,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.u1__DOT____Vcellout__u7__shift_out) 
                                   | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__sticky)))));
}

void Vco_sim_syn2___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_syn2___024root__trace_cleanup\n"); );
    // Init
    Vco_sim_syn2___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vco_sim_syn2___024root*>(voidSelf);
    Vco_sim_syn2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[9U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xaU] = 0U;
}
