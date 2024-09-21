// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vco_sim_syn2__Syms.h"


VL_ATTR_COLD void Vco_sim_syn2___024root__trace_full_0_sub_13(Vco_sim_syn2___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_syn2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_syn2___024root__trace_full_0_sub_13\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+64489,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.u4__DOT____VdfgRegularize_he8d392c1_0_23) 
                                          - (IData)(1U)))),8);
    bufp->fullBit(oldp+64490,(((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fpu_op_r3)) 
                               & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.u4__DOT____VdfgRegularize_he8d392c1_0_64))));
    bufp->fullBit(oldp+64491,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u4__DOT__div_inf));
    bufp->fullCData(oldp+64492,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u4__DOT__fi_ldz_2),8);
    bufp->fullCData(oldp+64493,(((0U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r))
                                  ? (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r)
                                  : 0U)),8);
    bufp->fullCData(oldp+64494,((0xffU & ((IData)(2U) 
                                          + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r)))),8);
    bufp->fullCData(oldp+64495,((0xffU & (- (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r)))),8);
    bufp->fullSData(oldp+64496,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u4__DOT__div_exp1),9);
    bufp->fullCData(oldp+64497,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u4__DOT__div_exp2),8);
    bufp->fullCData(oldp+64498,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r) 
                                          + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u4__DOT__fi_ldz_2)))),8);
    bufp->fullBit(oldp+64499,(((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fpu_op_r3)) 
                               | ((2U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fpu_op_r3)) 
                                  | ((0U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r)) 
                                     | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u4__DOT__z))))));
    bufp->fullBit(oldp+64500,(((0U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r)) 
                               | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u4__DOT__z))));
    bufp->fullCData(oldp+64501,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u4__DOT__shift_right),8);
    bufp->fullCData(oldp+64502,((0xffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.u4__DOT____VdfgRegularize_he8d392c1_0_14))),8);
    bufp->fullCData(oldp+64503,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u4__DOT__shift_left),8);
    bufp->fullBit(oldp+64504,(((2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fpu_op_r3)) 
                               & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.u4__DOT____VdfgRegularize_he8d392c1_0_23) 
                                  >> 8U))));
    bufp->fullSData(oldp+64505,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r),9);
    bufp->fullCData(oldp+64506,((0xffU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r) 
                                          - (IData)(0x7dU)))),8);
    bufp->fullQData(oldp+64507,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.u4__DOT____Vcellout__u3__shift_out),56);
    bufp->fullBit(oldp+64509,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u4__DOT__f2i_zero));
    bufp->fullBit(oldp+64510,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u4__DOT__f2i_max));
    bufp->fullCData(oldp+64511,(((0U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__rmode_r3))
                                  ? 0x7eU : 0x7fU)),8);
    bufp->fullCData(oldp+64512,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u4__DOT__f2i_zero)
                                  ? 0U : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u4__DOT__f2i_max)
                                           ? 0xffU : 0U))),8);
    bufp->fullBit(oldp+64513,(((2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__rmode_r3)) 
                               & (((0U != (0xfU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                   & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opas_r2)) 
                                      & (0x80U > (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r)))) 
                                  | (0U != (0x1ffffffU 
                                            & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.u4__DOT____VdfgRegularize_he8d392c1_0_21)))))));
    bufp->fullBit(oldp+64514,((IData)((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r) 
                                        >> 7U) & (~ (IData)(
                                                            (0U 
                                                             != 
                                                             (0x7fU 
                                                              & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r)))))))));
    bufp->fullBit(oldp+64515,((0U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__rmode_r3))));
    bufp->fullBit(oldp+64516,((1U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__rmode_r3))));
    bufp->fullBit(oldp+64517,((2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__rmode_r3))));
    bufp->fullBit(oldp+64518,((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__rmode_r3))));
    bufp->fullBit(oldp+64519,((0U != (0xfU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q))));
    bufp->fullBit(oldp+64520,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u4__DOT__max_num));
    bufp->fullBit(oldp+64521,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u4__DOT__inf_out));
    bufp->fullBit(oldp+64522,(((0U != (0x1ffffffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.u4__DOT____VdfgRegularize_he8d392c1_0_21))) 
                               & ((~ (IData)((0xffU 
                                              == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r)))) 
                                  & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u4__DOT__z)))));
    bufp->fullBit(oldp+64523,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u4__DOT__overflow_fdiv));
    bufp->fullBit(oldp+64524,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u4__DOT__z));
    bufp->fullBit(oldp+64525,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u4__DOT__f2i_ine));
    bufp->fullCData(oldp+64526,((0x3fU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u4__DOT__shift_right))),6);
    bufp->fullCData(oldp+64527,((0x3fU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r) 
                                          - (IData)(0x3dU)))),6);
    bufp->fullQData(oldp+64528,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.u4__DOT____Vcellout__u3__shift_out),48);
    bufp->fullCData(oldp+64530,((0x3fU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u4__DOT__shift_left))),6);
    bufp->fullIData(oldp+64531,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__adj_op_tmp),27);
    bufp->fullCData(oldp+64532,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__exp_diff_sft),5);
    bufp->fullIData(oldp+64533,((0x7ffffffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.u1__DOT____Vcellout__u7__shift_out))),27);
    bufp->fullQData(oldp+64534,((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__adj_op_tmp))),48);
    bufp->fullCData(oldp+64536,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__exp_diff_sft),6);
    bufp->fullQData(oldp+64537,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.u1__DOT____Vcellout__u7__shift_out),48);
    bufp->fullIData(oldp+64539,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__adj_op_tmp),27);
    bufp->fullCData(oldp+64540,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__exp_diff_sft),5);
    bufp->fullIData(oldp+64541,((0x7ffffffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.u1__DOT____Vcellout__u7__shift_out))),27);
    bufp->fullQData(oldp+64542,((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__adj_op_tmp))),48);
    bufp->fullCData(oldp+64544,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__exp_diff_sft),6);
    bufp->fullQData(oldp+64545,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.u1__DOT____Vcellout__u7__shift_out),48);
    bufp->fullIData(oldp+64547,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__adj_op_tmp),27);
    bufp->fullCData(oldp+64548,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__exp_diff_sft),5);
    bufp->fullIData(oldp+64549,((0x7ffffffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.u1__DOT____Vcellout__u7__shift_out))),27);
    bufp->fullQData(oldp+64550,((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__adj_op_tmp))),48);
    bufp->fullCData(oldp+64552,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__exp_diff_sft),6);
    bufp->fullQData(oldp+64553,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.u1__DOT____Vcellout__u7__shift_out),48);
    bufp->fullIData(oldp+64555,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__adj_op_tmp),27);
    bufp->fullCData(oldp+64556,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__exp_diff_sft),5);
    bufp->fullIData(oldp+64557,((0x7ffffffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.u1__DOT____Vcellout__u7__shift_out))),27);
    bufp->fullQData(oldp+64558,((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__adj_op_tmp))),48);
    bufp->fullCData(oldp+64560,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__exp_diff_sft),6);
    bufp->fullQData(oldp+64561,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.u1__DOT____Vcellout__u7__shift_out),48);
    bufp->fullIData(oldp+64563,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__adj_op_tmp),27);
    bufp->fullCData(oldp+64564,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__exp_diff_sft),5);
    bufp->fullIData(oldp+64565,((0x7ffffffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.u1__DOT____Vcellout__u7__shift_out))),27);
    bufp->fullQData(oldp+64566,((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__adj_op_tmp))),48);
    bufp->fullCData(oldp+64568,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__exp_diff_sft),6);
    bufp->fullQData(oldp+64569,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.u1__DOT____Vcellout__u7__shift_out),48);
    bufp->fullBit(oldp+64571,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__fractb_lt_fracta));
    bufp->fullIData(oldp+64572,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__adj_op_out),27);
    bufp->fullIData(oldp+64573,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__fracta_n),27);
    bufp->fullIData(oldp+64574,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__fractb_n),27);
    bufp->fullIData(oldp+64575,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__fractb_lt_fracta)
                                  ? vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__fractb_n
                                  : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__fracta_n)),27);
    bufp->fullIData(oldp+64576,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__fractb_lt_fracta)
                                  ? vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__fracta_n
                                  : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__fractb_n)),27);
    bufp->fullBit(oldp+64577,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__sign_d));
    bufp->fullBit(oldp+64578,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__fractb_lt_fracta));
    bufp->fullIData(oldp+64579,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__adj_op_out),27);
    bufp->fullIData(oldp+64580,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__fracta_n),27);
    bufp->fullIData(oldp+64581,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__fractb_n),27);
    bufp->fullIData(oldp+64582,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__fractb_lt_fracta)
                                  ? vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__fractb_n
                                  : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__fracta_n)),27);
    bufp->fullIData(oldp+64583,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__fractb_lt_fracta)
                                  ? vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__fracta_n
                                  : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__fractb_n)),27);
    bufp->fullBit(oldp+64584,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__sign_d));
    bufp->fullBit(oldp+64585,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__fractb_lt_fracta));
    bufp->fullIData(oldp+64586,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__adj_op_out),27);
    bufp->fullIData(oldp+64587,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__fracta_n),27);
    bufp->fullIData(oldp+64588,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__fractb_n),27);
    bufp->fullIData(oldp+64589,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__fractb_lt_fracta)
                                  ? vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__fractb_n
                                  : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__fracta_n)),27);
    bufp->fullIData(oldp+64590,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__fractb_lt_fracta)
                                  ? vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__fracta_n
                                  : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__fractb_n)),27);
    bufp->fullBit(oldp+64591,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__sign_d));
    bufp->fullBit(oldp+64592,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__fractb_lt_fracta));
    bufp->fullIData(oldp+64593,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__adj_op_out),27);
    bufp->fullIData(oldp+64594,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__fracta_n),27);
    bufp->fullIData(oldp+64595,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__fractb_n),27);
    bufp->fullIData(oldp+64596,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__fractb_lt_fracta)
                                  ? vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__fractb_n
                                  : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__fracta_n)),27);
    bufp->fullIData(oldp+64597,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__fractb_lt_fracta)
                                  ? vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__fracta_n
                                  : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__fractb_n)),27);
    bufp->fullBit(oldp+64598,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__sign_d));
    bufp->fullBit(oldp+64599,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__fractb_lt_fracta));
    bufp->fullIData(oldp+64600,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__adj_op_out),27);
    bufp->fullIData(oldp+64601,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__fracta_n),27);
    bufp->fullIData(oldp+64602,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__fractb_n),27);
    bufp->fullIData(oldp+64603,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__fractb_lt_fracta)
                                  ? vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__fractb_n
                                  : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__fracta_n)),27);
    bufp->fullIData(oldp+64604,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__fractb_lt_fracta)
                                  ? vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__fracta_n
                                  : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__fractb_n)),27);
    bufp->fullBit(oldp+64605,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__sign_d));
    bufp->fullBit(oldp+64606,(vlSelf->co_sim_syn2__DOT__clock));
    bufp->fullBit(oldp+64607,(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024273608__024li0232_li0232));
    bufp->fullBit(oldp+64608,(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024273608__024li0732_li0732));
    bufp->fullBit(oldp+64609,(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024273608__024li1106_li1106));
    bufp->fullBit(oldp+64610,(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024273608__024li1357_li1357));
    bufp->fullBit(oldp+64611,(((IData)(vlSelf->co_sim_syn2__DOT__clock) 
                               & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024273608__024li0232_li0232))));
    bufp->fullBit(oldp+64612,(((~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024273608__024li0232_li0232)) 
                               & (IData)(vlSelf->co_sim_syn2__DOT__clock))));
    bufp->fullBit(oldp+64613,(((~ (IData)(vlSelf->co_sim_syn2__DOT__clock)) 
                               & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024273608__024li0232_li0232))));
    bufp->fullBit(oldp+64614,((1U & ((~ (IData)(vlSelf->co_sim_syn2__DOT__clock)) 
                                     & (~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024273608__024li0232_li0232))))));
    bufp->fullBit(oldp+64615,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024273608__024li0232_li0232)))));
    bufp->fullBit(oldp+64616,(((IData)(vlSelf->co_sim_syn2__DOT__clock) 
                               & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024273608__024li0732_li0732))));
    bufp->fullBit(oldp+64617,(((~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024273608__024li0732_li0732)) 
                               & (IData)(vlSelf->co_sim_syn2__DOT__clock))));
    bufp->fullBit(oldp+64618,(((~ (IData)(vlSelf->co_sim_syn2__DOT__clock)) 
                               & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024273608__024li0732_li0732))));
    bufp->fullBit(oldp+64619,((1U & ((~ (IData)(vlSelf->co_sim_syn2__DOT__clock)) 
                                     & (~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024273608__024li0732_li0732))))));
    bufp->fullBit(oldp+64620,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024273608__024li0732_li0732)))));
    bufp->fullBit(oldp+64621,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__clock)))));
    bufp->fullBit(oldp+64622,(((IData)(vlSelf->co_sim_syn2__DOT__clock) 
                               & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024273608__024li1106_li1106))));
    bufp->fullBit(oldp+64623,(((~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024273608__024li1106_li1106)) 
                               & (IData)(vlSelf->co_sim_syn2__DOT__clock))));
    bufp->fullBit(oldp+64624,(((~ (IData)(vlSelf->co_sim_syn2__DOT__clock)) 
                               & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024273608__024li1106_li1106))));
    bufp->fullBit(oldp+64625,((1U & ((~ (IData)(vlSelf->co_sim_syn2__DOT__clock)) 
                                     & (~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024273608__024li1106_li1106))))));
    bufp->fullBit(oldp+64626,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024273608__024li1106_li1106)))));
    bufp->fullBit(oldp+64627,(((IData)(vlSelf->co_sim_syn2__DOT__clock) 
                               & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024273608__024li1357_li1357))));
    bufp->fullBit(oldp+64628,(((~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024273608__024li1357_li1357)) 
                               & (IData)(vlSelf->co_sim_syn2__DOT__clock))));
    bufp->fullBit(oldp+64629,(((~ (IData)(vlSelf->co_sim_syn2__DOT__clock)) 
                               & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024273608__024li1357_li1357))));
    bufp->fullBit(oldp+64630,((1U & ((~ (IData)(vlSelf->co_sim_syn2__DOT__clock)) 
                                     & (~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024273608__024li1357_li1357))))));
    bufp->fullBit(oldp+64631,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024273608__024li1357_li1357)))));
    bufp->fullCData(oldp+64632,(((2U & (vlSelf->co_sim_syn2__DOT__in1 
                                        >> 0x1eU)) 
                                 | (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eopa__05b31__05d))),2);
    bufp->fullCData(oldp+64633,((((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eopa__05b31__05d) 
                                  << 1U) | (vlSelf->co_sim_syn2__DOT__in4 
                                            >> 0x1fU))),2);
    bufp->fullBit(oldp+64634,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__sticky));
    bufp->fullBit(oldp+64635,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.u1__DOT____Vcellout__u7__shift_out) 
                                     | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__sticky)))));
    bufp->fullBit(oldp+64636,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__sticky));
    bufp->fullBit(oldp+64637,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.u1__DOT____Vcellout__u7__shift_out) 
                                     | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__sticky)))));
    bufp->fullBit(oldp+64638,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__sticky));
    bufp->fullBit(oldp+64639,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.u1__DOT____Vcellout__u7__shift_out) 
                                     | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__sticky)))));
    bufp->fullBit(oldp+64640,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__sticky));
    bufp->fullBit(oldp+64641,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.u1__DOT____Vcellout__u7__shift_out) 
                                     | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__sticky)))));
    bufp->fullBit(oldp+64642,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__sticky));
    bufp->fullBit(oldp+64643,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.u1__DOT____Vcellout__u7__shift_out) 
                                     | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__sticky)))));
}
