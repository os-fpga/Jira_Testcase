// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vco_sim_syn2__Syms.h"


void Vco_sim_syn2___024root__trace_chg_0_sub_13(Vco_sim_syn2___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_syn2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_syn2___024root__trace_chg_0_sub_13\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 64489);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgCData(oldp+0,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.u4__DOT____VdfgRegularize_he8d392c1_0_23) 
                                         - (IData)(1U)))),8);
        bufp->chgBit(oldp+1,(((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fpu_op_r3)) 
                              & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.u4__DOT____VdfgRegularize_he8d392c1_0_64))));
        bufp->chgBit(oldp+2,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u4__DOT__div_inf));
        bufp->chgCData(oldp+3,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u4__DOT__fi_ldz_2),8);
        bufp->chgCData(oldp+4,(((0U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r))
                                 ? (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r)
                                 : 0U)),8);
        bufp->chgCData(oldp+5,((0xffU & ((IData)(2U) 
                                         + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r)))),8);
        bufp->chgCData(oldp+6,((0xffU & (- (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r)))),8);
        bufp->chgSData(oldp+7,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u4__DOT__div_exp1),9);
        bufp->chgCData(oldp+8,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u4__DOT__div_exp2),8);
        bufp->chgCData(oldp+9,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r) 
                                         + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u4__DOT__fi_ldz_2)))),8);
        bufp->chgBit(oldp+10,(((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fpu_op_r3)) 
                               | ((2U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fpu_op_r3)) 
                                  | ((0U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r)) 
                                     | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u4__DOT__z))))));
        bufp->chgBit(oldp+11,(((0U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r)) 
                               | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u4__DOT__z))));
        bufp->chgCData(oldp+12,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u4__DOT__shift_right),8);
        bufp->chgCData(oldp+13,((0xffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.u4__DOT____VdfgRegularize_he8d392c1_0_14))),8);
        bufp->chgCData(oldp+14,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u4__DOT__shift_left),8);
        bufp->chgBit(oldp+15,(((2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fpu_op_r3)) 
                               & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.u4__DOT____VdfgRegularize_he8d392c1_0_23) 
                                  >> 8U))));
        bufp->chgSData(oldp+16,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r),9);
        bufp->chgCData(oldp+17,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r) 
                                          - (IData)(0x7dU)))),8);
        bufp->chgQData(oldp+18,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.u4__DOT____Vcellout__u3__shift_out),56);
        bufp->chgBit(oldp+20,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u4__DOT__f2i_zero));
        bufp->chgBit(oldp+21,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u4__DOT__f2i_max));
        bufp->chgCData(oldp+22,(((0U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__rmode_r3))
                                  ? 0x7eU : 0x7fU)),8);
        bufp->chgCData(oldp+23,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u4__DOT__f2i_zero)
                                  ? 0U : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u4__DOT__f2i_max)
                                           ? 0xffU : 0U))),8);
        bufp->chgBit(oldp+24,(((2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__rmode_r3)) 
                               & (((0U != (0xfU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                   & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opas_r2)) 
                                      & (0x80U > (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r)))) 
                                  | (0U != (0x1ffffffU 
                                            & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.u4__DOT____VdfgRegularize_he8d392c1_0_21)))))));
        bufp->chgBit(oldp+25,((IData)((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r) 
                                        >> 7U) & (~ (IData)(
                                                            (0U 
                                                             != 
                                                             (0x7fU 
                                                              & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r)))))))));
        bufp->chgBit(oldp+26,((0U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__rmode_r3))));
        bufp->chgBit(oldp+27,((1U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__rmode_r3))));
        bufp->chgBit(oldp+28,((2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__rmode_r3))));
        bufp->chgBit(oldp+29,((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__rmode_r3))));
        bufp->chgBit(oldp+30,((0U != (0xfU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q))));
        bufp->chgBit(oldp+31,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u4__DOT__max_num));
        bufp->chgBit(oldp+32,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u4__DOT__inf_out));
        bufp->chgBit(oldp+33,(((0U != (0x1ffffffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.u4__DOT____VdfgRegularize_he8d392c1_0_21))) 
                               & ((~ (IData)((0xffU 
                                              == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r)))) 
                                  & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u4__DOT__z)))));
        bufp->chgBit(oldp+34,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u4__DOT__overflow_fdiv));
        bufp->chgBit(oldp+35,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u4__DOT__z));
        bufp->chgBit(oldp+36,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u4__DOT__f2i_ine));
        bufp->chgCData(oldp+37,((0x3fU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u4__DOT__shift_right))),6);
        bufp->chgCData(oldp+38,((0x3fU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r) 
                                          - (IData)(0x3dU)))),6);
        bufp->chgQData(oldp+39,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.u4__DOT____Vcellout__u3__shift_out),48);
        bufp->chgCData(oldp+41,((0x3fU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u4__DOT__shift_left))),6);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgIData(oldp+42,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__adj_op_tmp),27);
        bufp->chgCData(oldp+43,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__exp_diff_sft),5);
        bufp->chgIData(oldp+44,((0x7ffffffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.u1__DOT____Vcellout__u7__shift_out))),27);
        bufp->chgQData(oldp+45,((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__adj_op_tmp))),48);
        bufp->chgCData(oldp+47,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__exp_diff_sft),6);
        bufp->chgQData(oldp+48,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.u1__DOT____Vcellout__u7__shift_out),48);
        bufp->chgIData(oldp+50,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__adj_op_tmp),27);
        bufp->chgCData(oldp+51,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__exp_diff_sft),5);
        bufp->chgIData(oldp+52,((0x7ffffffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.u1__DOT____Vcellout__u7__shift_out))),27);
        bufp->chgQData(oldp+53,((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__adj_op_tmp))),48);
        bufp->chgCData(oldp+55,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__exp_diff_sft),6);
        bufp->chgQData(oldp+56,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.u1__DOT____Vcellout__u7__shift_out),48);
        bufp->chgIData(oldp+58,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__adj_op_tmp),27);
        bufp->chgCData(oldp+59,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__exp_diff_sft),5);
        bufp->chgIData(oldp+60,((0x7ffffffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.u1__DOT____Vcellout__u7__shift_out))),27);
        bufp->chgQData(oldp+61,((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__adj_op_tmp))),48);
        bufp->chgCData(oldp+63,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__exp_diff_sft),6);
        bufp->chgQData(oldp+64,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.u1__DOT____Vcellout__u7__shift_out),48);
        bufp->chgIData(oldp+66,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__adj_op_tmp),27);
        bufp->chgCData(oldp+67,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__exp_diff_sft),5);
        bufp->chgIData(oldp+68,((0x7ffffffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.u1__DOT____Vcellout__u7__shift_out))),27);
        bufp->chgQData(oldp+69,((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__adj_op_tmp))),48);
        bufp->chgCData(oldp+71,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__exp_diff_sft),6);
        bufp->chgQData(oldp+72,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.u1__DOT____Vcellout__u7__shift_out),48);
        bufp->chgIData(oldp+74,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__adj_op_tmp),27);
        bufp->chgCData(oldp+75,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__exp_diff_sft),5);
        bufp->chgIData(oldp+76,((0x7ffffffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.u1__DOT____Vcellout__u7__shift_out))),27);
        bufp->chgQData(oldp+77,((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__adj_op_tmp))),48);
        bufp->chgCData(oldp+79,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__exp_diff_sft),6);
        bufp->chgQData(oldp+80,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.u1__DOT____Vcellout__u7__shift_out),48);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
        bufp->chgBit(oldp+82,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__fractb_lt_fracta));
        bufp->chgIData(oldp+83,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__adj_op_out),27);
        bufp->chgIData(oldp+84,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__fracta_n),27);
        bufp->chgIData(oldp+85,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__fractb_n),27);
        bufp->chgIData(oldp+86,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__fractb_lt_fracta)
                                  ? vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__fractb_n
                                  : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__fracta_n)),27);
        bufp->chgIData(oldp+87,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__fractb_lt_fracta)
                                  ? vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__fracta_n
                                  : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__fractb_n)),27);
        bufp->chgBit(oldp+88,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__sign_d));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[7U])) {
        bufp->chgBit(oldp+89,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__fractb_lt_fracta));
        bufp->chgIData(oldp+90,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__adj_op_out),27);
        bufp->chgIData(oldp+91,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__fracta_n),27);
        bufp->chgIData(oldp+92,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__fractb_n),27);
        bufp->chgIData(oldp+93,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__fractb_lt_fracta)
                                  ? vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__fractb_n
                                  : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__fracta_n)),27);
        bufp->chgIData(oldp+94,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__fractb_lt_fracta)
                                  ? vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__fracta_n
                                  : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__fractb_n)),27);
        bufp->chgBit(oldp+95,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__sign_d));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[8U])) {
        bufp->chgBit(oldp+96,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__fractb_lt_fracta));
        bufp->chgIData(oldp+97,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__adj_op_out),27);
        bufp->chgIData(oldp+98,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__fracta_n),27);
        bufp->chgIData(oldp+99,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__fractb_n),27);
        bufp->chgIData(oldp+100,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__fractb_lt_fracta)
                                   ? vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__fractb_n
                                   : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__fracta_n)),27);
        bufp->chgIData(oldp+101,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__fractb_lt_fracta)
                                   ? vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__fracta_n
                                   : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__fractb_n)),27);
        bufp->chgBit(oldp+102,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__sign_d));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[9U])) {
        bufp->chgBit(oldp+103,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__fractb_lt_fracta));
        bufp->chgIData(oldp+104,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__adj_op_out),27);
        bufp->chgIData(oldp+105,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__fracta_n),27);
        bufp->chgIData(oldp+106,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__fractb_n),27);
        bufp->chgIData(oldp+107,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__fractb_lt_fracta)
                                   ? vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__fractb_n
                                   : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__fracta_n)),27);
        bufp->chgIData(oldp+108,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__fractb_lt_fracta)
                                   ? vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__fracta_n
                                   : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__fractb_n)),27);
        bufp->chgBit(oldp+109,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__sign_d));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xaU])) {
        bufp->chgBit(oldp+110,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__fractb_lt_fracta));
        bufp->chgIData(oldp+111,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__adj_op_out),27);
        bufp->chgIData(oldp+112,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__fracta_n),27);
        bufp->chgIData(oldp+113,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__fractb_n),27);
        bufp->chgIData(oldp+114,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__fractb_lt_fracta)
                                   ? vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__fractb_n
                                   : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__fracta_n)),27);
        bufp->chgIData(oldp+115,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__fractb_lt_fracta)
                                   ? vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__fracta_n
                                   : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__fractb_n)),27);
        bufp->chgBit(oldp+116,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__sign_d));
    }
    bufp->chgBit(oldp+117,(vlSelf->co_sim_syn2__DOT__clock));
    bufp->chgBit(oldp+118,(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024273608__024li0232_li0232));
    bufp->chgBit(oldp+119,(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024273608__024li0732_li0732));
    bufp->chgBit(oldp+120,(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024273608__024li1106_li1106));
    bufp->chgBit(oldp+121,(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024273608__024li1357_li1357));
    bufp->chgBit(oldp+122,(((IData)(vlSelf->co_sim_syn2__DOT__clock) 
                            & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024273608__024li0232_li0232))));
    bufp->chgBit(oldp+123,(((~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024273608__024li0232_li0232)) 
                            & (IData)(vlSelf->co_sim_syn2__DOT__clock))));
    bufp->chgBit(oldp+124,(((~ (IData)(vlSelf->co_sim_syn2__DOT__clock)) 
                            & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024273608__024li0232_li0232))));
    bufp->chgBit(oldp+125,((1U & ((~ (IData)(vlSelf->co_sim_syn2__DOT__clock)) 
                                  & (~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024273608__024li0232_li0232))))));
    bufp->chgBit(oldp+126,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024273608__024li0232_li0232)))));
    bufp->chgBit(oldp+127,(((IData)(vlSelf->co_sim_syn2__DOT__clock) 
                            & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024273608__024li0732_li0732))));
    bufp->chgBit(oldp+128,(((~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024273608__024li0732_li0732)) 
                            & (IData)(vlSelf->co_sim_syn2__DOT__clock))));
    bufp->chgBit(oldp+129,(((~ (IData)(vlSelf->co_sim_syn2__DOT__clock)) 
                            & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024273608__024li0732_li0732))));
    bufp->chgBit(oldp+130,((1U & ((~ (IData)(vlSelf->co_sim_syn2__DOT__clock)) 
                                  & (~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024273608__024li0732_li0732))))));
    bufp->chgBit(oldp+131,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024273608__024li0732_li0732)))));
    bufp->chgBit(oldp+132,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__clock)))));
    bufp->chgBit(oldp+133,(((IData)(vlSelf->co_sim_syn2__DOT__clock) 
                            & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024273608__024li1106_li1106))));
    bufp->chgBit(oldp+134,(((~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024273608__024li1106_li1106)) 
                            & (IData)(vlSelf->co_sim_syn2__DOT__clock))));
    bufp->chgBit(oldp+135,(((~ (IData)(vlSelf->co_sim_syn2__DOT__clock)) 
                            & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024273608__024li1106_li1106))));
    bufp->chgBit(oldp+136,((1U & ((~ (IData)(vlSelf->co_sim_syn2__DOT__clock)) 
                                  & (~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024273608__024li1106_li1106))))));
    bufp->chgBit(oldp+137,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024273608__024li1106_li1106)))));
    bufp->chgBit(oldp+138,(((IData)(vlSelf->co_sim_syn2__DOT__clock) 
                            & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024273608__024li1357_li1357))));
    bufp->chgBit(oldp+139,(((~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024273608__024li1357_li1357)) 
                            & (IData)(vlSelf->co_sim_syn2__DOT__clock))));
    bufp->chgBit(oldp+140,(((~ (IData)(vlSelf->co_sim_syn2__DOT__clock)) 
                            & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024273608__024li1357_li1357))));
    bufp->chgBit(oldp+141,((1U & ((~ (IData)(vlSelf->co_sim_syn2__DOT__clock)) 
                                  & (~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024273608__024li1357_li1357))))));
    bufp->chgBit(oldp+142,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024273608__024li1357_li1357)))));
    bufp->chgCData(oldp+143,(((2U & (vlSelf->co_sim_syn2__DOT__in1 
                                     >> 0x1eU)) | (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eopa__05b31__05d))),2);
    bufp->chgCData(oldp+144,((((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eopa__05b31__05d) 
                               << 1U) | (vlSelf->co_sim_syn2__DOT__in4 
                                         >> 0x1fU))),2);
    bufp->chgBit(oldp+145,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__sticky));
    bufp->chgBit(oldp+146,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.u1__DOT____Vcellout__u7__shift_out) 
                                  | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__sticky)))));
    bufp->chgBit(oldp+147,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__sticky));
    bufp->chgBit(oldp+148,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.u1__DOT____Vcellout__u7__shift_out) 
                                  | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__sticky)))));
    bufp->chgBit(oldp+149,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__sticky));
    bufp->chgBit(oldp+150,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.u1__DOT____Vcellout__u7__shift_out) 
                                  | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__sticky)))));
    bufp->chgBit(oldp+151,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__sticky));
    bufp->chgBit(oldp+152,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.u1__DOT____Vcellout__u7__shift_out) 
                                  | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__sticky)))));
    bufp->chgBit(oldp+153,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__sticky));
    bufp->chgBit(oldp+154,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.u1__DOT____Vcellout__u7__shift_out) 
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
