// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vco_sim_syn2__Syms.h"


VL_ATTR_COLD void Vco_sim_syn2___024root__trace_full_0_sub_15(Vco_sim_syn2___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_syn2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_syn2___024root__trace_full_0_sub_15\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+67866,((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__rmode_r3))));
    bufp->fullBit(oldp+67867,((0U != (0xfU & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q))));
    bufp->fullBit(oldp+67868,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u4__DOT__max_num));
    bufp->fullBit(oldp+67869,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u4__DOT__inf_out));
    bufp->fullBit(oldp+67870,(((0U != (0x1ffffffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.u4__DOT____VdfgRegularize_he8d392c1_0_21))) 
                               & ((~ (IData)((0xffU 
                                              == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r)))) 
                                  & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u4__DOT__z)))));
    bufp->fullBit(oldp+67871,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u4__DOT__overflow_fdiv));
    bufp->fullBit(oldp+67872,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u4__DOT__z));
    bufp->fullBit(oldp+67873,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u4__DOT__f2i_ine));
    bufp->fullCData(oldp+67874,((0x3fU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u4__DOT__shift_right))),6);
    bufp->fullCData(oldp+67875,((0x3fU & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r) 
                                          - (IData)(0x3dU)))),6);
    bufp->fullQData(oldp+67876,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.u4__DOT____Vcellout__u3__shift_out),48);
    bufp->fullCData(oldp+67878,((0x3fU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u4__DOT__shift_left))),6);
    bufp->fullBit(oldp+67879,((1U & ((1U & (IData)(
                                                   (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                    >> 0x17U)))
                                      ? (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0087_output_0_0)
                                           ? 1U : 0x10U) 
                                         >> 4U) : ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0087_output_0_0)
                                                    ? 1U
                                                    : 0x10U)))));
    bufp->fullCData(oldp+67880,(((0x10U & ((IData)(
                                                   (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                    >> 0x12U)) 
                                           << 4U)) 
                                 | ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0028_output_0_0) 
                                    << 3U))),5);
    bufp->fullCData(oldp+67881,(((0x10U & ((IData)(
                                                   (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                    >> 0x12U)) 
                                           << 4U)) 
                                 | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0029_output_0_0) 
                                     << 3U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0028_output_0_0) 
                                                << 2U) 
                                               | (2U 
                                                  & ((IData)(
                                                             (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                              >> 0x13U)) 
                                                     << 1U)))))),5);
    bufp->fullCData(oldp+67882,(((8U & ((IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                 >> 0x12U)) 
                                        << 3U)) | ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0082_output_0_0) 
                                                   << 2U))),5);
    bufp->fullCData(oldp+67883,(((8U & ((IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                 >> 0x12U)) 
                                        << 3U)) | (
                                                   ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0082_output_0_0) 
                                                    << 2U) 
                                                   | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0083_output_0_0) 
                                                       << 1U) 
                                                      | (1U 
                                                         & (IData)(
                                                                   (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                                    >> 0x13U))))))),5);
    bufp->fullCData(oldp+67884,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0136_output_0_0) 
                                  << 3U) | (1U & (IData)(
                                                         (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                          >> 0x12U))))),5);
    bufp->fullCData(oldp+67885,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0136_output_0_0) 
                                  << 3U) | ((4U & ((IData)(
                                                           (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                            >> 0x13U)) 
                                                   << 2U)) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0137_output_0_0) 
                                                << 1U) 
                                               | (1U 
                                                  & (IData)(
                                                            (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                             >> 0x12U))))))),5);
    bufp->fullCData(oldp+67886,(((0x10U & ((IData)(
                                                   (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                    >> 0x12U)) 
                                           << 4U)) 
                                 | ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0190_output_0_0) 
                                    << 2U))),5);
    bufp->fullCData(oldp+67887,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0190_output_0_0) 
                                  << 4U) | ((0xcU & 
                                             ((IData)(
                                                      (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                       >> 0x12U)) 
                                              << 2U)) 
                                            | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0191_output_0_0)))),5);
    bufp->fullCData(oldp+67888,(((0x20U & ((IData)(
                                                   (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                    >> 0x18U)) 
                                           << 5U)) 
                                 | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0196_output_0_0) 
                                     << 4U) | ((8U 
                                                & ((IData)(
                                                           (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                            >> 0x19U)) 
                                                   << 3U)) 
                                               | ((4U 
                                                   & ((IData)(
                                                              (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                               >> 0x1aU)) 
                                                      << 2U)) 
                                                  | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0198_output_0_0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0197_output_0_0))))))),6);
    bufp->fullCData(oldp+67889,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0200_output_0_0) 
                                  << 4U) | (1U & (IData)(
                                                         (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                          >> 0x1cU))))),5);
    bufp->fullCData(oldp+67890,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0199_output_0_0) 
                                  << 3U) | (2U & ((IData)(
                                                          (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                           >> 0x1bU)) 
                                                  << 1U)))),5);
    bufp->fullCData(oldp+67891,(((0x20U & ((IData)(
                                                   (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                    >> 0x16U)) 
                                           << 5U)) 
                                 | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0193_output_0_0) 
                                     << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0195_output_0_0) 
                                                << 3U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0194_output_0_0) 
                                                   << 2U) 
                                                  | ((2U 
                                                      & ((IData)(
                                                                 (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                                  >> 0x15U)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (IData)(
                                                                  (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                                   >> 0x17U))))))))),6);
    bufp->fullCData(oldp+67892,(((0x20U & ((IData)(
                                                   (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                    >> 0x13U)) 
                                           << 5U)) 
                                 | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0190_output_0_0) 
                                     << 4U) | ((8U 
                                                & ((IData)(
                                                           (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                            >> 0x14U)) 
                                                   << 3U)) 
                                               | ((4U 
                                                   & ((IData)(
                                                              (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                               >> 0x12U)) 
                                                      << 2U)) 
                                                  | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0192_output_0_0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0191_output_0_0))))))),6);
    bufp->fullCData(oldp+67893,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0194_output_0_0) 
                                  << 5U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0193_output_0_0) 
                                             << 4U) 
                                            | ((8U 
                                                & ((IData)(
                                                           (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                            >> 0x15U)) 
                                                   << 3U)) 
                                               | ((4U 
                                                   & ((IData)(
                                                              (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                               >> 0x16U)) 
                                                      << 2U)) 
                                                  | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0195_output_0_0) 
                                                      << 1U) 
                                                     | (1U 
                                                        & (IData)(
                                                                  (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                                   >> 0x17U))))))))),6);
    bufp->fullCData(oldp+67894,(((0x20U & ((IData)(
                                                   (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                    >> 0x19U)) 
                                           << 5U)) 
                                 | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0196_output_0_0) 
                                     << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0198_output_0_0) 
                                                << 3U) 
                                               | ((4U 
                                                   & ((IData)(
                                                              (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                               >> 0x1aU)) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & ((IData)(
                                                                 (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                                  >> 0x18U)) 
                                                         << 1U)) 
                                                     | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0197_output_0_0))))))),6);
    bufp->fullCData(oldp+67895,(((0x10U & ((IData)(
                                                   (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                    >> 0x24U)) 
                                           << 4U)) 
                                 | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0208_output_0_0))),5);
    bufp->fullCData(oldp+67896,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0195_output_0_0) 
                                  << 3U) | (1U & (IData)(
                                                         (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                          >> 0x17U))))),5);
    bufp->fullCData(oldp+67897,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0163_output_0_0) 
                                  << 3U) | ((2U & ((IData)(
                                                           (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                            >> 0x15U)) 
                                                   << 1U)) 
                                            | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0193_output_0_0)))),5);
    bufp->fullCData(oldp+67898,(((2U & ((IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                 >> 0x19U)) 
                                        << 1U)) | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0197_output_0_0))),5);
    bufp->fullCData(oldp+67899,(((0x10U & ((IData)(
                                                   (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                    >> 0x21U)) 
                                           << 4U)) 
                                 | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0205_output_0_0))),5);
    bufp->fullCData(oldp+67900,(((8U & ((IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                 >> 0x24U)) 
                                        << 3U)) | (
                                                   ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0178_output_0_0) 
                                                    << 2U) 
                                                   | ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0208_output_0_0) 
                                                      << 1U)))),5);
    bufp->fullCData(oldp+67901,(((8U & ((IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                 >> 0x21U)) 
                                        << 3U)) | (
                                                   ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0175_output_0_0) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0205_output_0_0)))),5);
    bufp->fullCData(oldp+67902,(((8U & ((IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                 >> 0x19U)) 
                                        << 3U)) | (
                                                   ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0197_output_0_0) 
                                                    << 2U) 
                                                   | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0167_output_0_0)))),5);
    bufp->fullCData(oldp+67903,(((0x10U & ((IData)(
                                                   (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                    >> 0x12U)) 
                                           << 4U)) 
                                 | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0136_output_0_0) 
                                     << 3U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0137_output_0_0) 
                                                << 1U) 
                                               | (1U 
                                                  & (IData)(
                                                            (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                             >> 0x13U))))))),5);
    bufp->fullCData(oldp+67904,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0138_output_0_0) 
                                  << 5U) | ((0x18U 
                                             & ((IData)(
                                                        (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                         >> 0x14U)) 
                                                << 3U)) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0139_output_0_0) 
                                                << 2U) 
                                               | ((2U 
                                                   & ((IData)(
                                                              (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                               >> 0x16U)) 
                                                      << 1U)) 
                                                  | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0140_output_0_0)))))),6);
    bufp->fullCData(oldp+67905,(((0x20U & ((IData)(
                                                   (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                    >> 0x18U)) 
                                           << 5U)) 
                                 | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0141_output_0_0) 
                                     << 4U) | ((8U 
                                                & ((IData)(
                                                           (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                            >> 0x19U)) 
                                                   << 3U)) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0142_output_0_0) 
                                                   << 2U) 
                                                  | ((2U 
                                                      & ((IData)(
                                                                 (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                                  >> 0x17U)) 
                                                         << 1U)) 
                                                     | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0143_output_0_0))))))),6);
    bufp->fullCData(oldp+67906,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0138_output_0_0) 
                                  << 5U) | ((0x18U 
                                             & ((IData)(
                                                        (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                         >> 0x14U)) 
                                                << 3U)) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0140_output_0_0) 
                                                << 2U) 
                                               | ((2U 
                                                   & ((IData)(
                                                              (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                               >> 0x16U)) 
                                                      << 1U)) 
                                                  | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0139_output_0_0)))))),6);
    bufp->fullCData(oldp+67907,(((0x20U & ((IData)(
                                                   (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                    >> 0x19U)) 
                                           << 5U)) 
                                 | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0141_output_0_0) 
                                     << 4U) | ((8U 
                                                & ((IData)(
                                                           (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                            >> 0x18U)) 
                                                   << 3U)) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0142_output_0_0) 
                                                   << 2U) 
                                                  | ((2U 
                                                      & ((IData)(
                                                                 (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                                  >> 0x17U)) 
                                                         << 1U)) 
                                                     | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0143_output_0_0))))))),6);
    bufp->fullCData(oldp+67908,(((4U & ((IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                 >> 0x22U)) 
                                        << 2U)) | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0152_output_0_0))),5);
    bufp->fullCData(oldp+67909,(((8U & ((IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                 >> 0x25U)) 
                                        << 3U)) | (
                                                   ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0155_output_0_0) 
                                                    << 2U) 
                                                   | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0125_output_0_0)))),5);
    bufp->fullCData(oldp+67910,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0156_output_0_0) 
                                  << 4U) | ((8U & ((IData)(
                                                           (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                            >> 0x25U)) 
                                                   << 3U)) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0155_output_0_0) 
                                                << 2U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0126_output_0_0) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0125_output_0_0)))))),5);
    bufp->fullCData(oldp+67911,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0113_output_0_0) 
                                  << 4U) | ((8U & ((IData)(
                                                           (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                            >> 0x19U)) 
                                                   << 3U)) 
                                            | ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0143_output_0_0) 
                                               << 1U)))),5);
    bufp->fullCData(oldp+67912,(((0x10U & ((IData)(
                                                   (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                    >> 0x15U)) 
                                           << 4U)) 
                                 | ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0139_output_0_0) 
                                    << 3U))),5);
    bufp->fullCData(oldp+67913,(((0x10U & ((IData)(
                                                   (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                    >> 0x16U)) 
                                           << 4U)) 
                                 | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0110_output_0_0) 
                                     << 3U) | ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0140_output_0_0) 
                                               << 1U)))),5);
    bufp->fullCData(oldp+67914,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0142_output_0_0) 
                                  << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0112_output_0_0) 
                                             << 3U) 
                                            | (2U & 
                                               ((IData)(
                                                        (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                         >> 0x18U)) 
                                                << 1U))))),5);
    bufp->fullCData(oldp+67915,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0112_output_0_0) 
                                  << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0142_output_0_0) 
                                             << 3U) 
                                            | (2U & 
                                               ((IData)(
                                                        (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                         >> 0x18U)) 
                                                << 1U))))),5);
    bufp->fullCData(oldp+67916,(((0x10U & ((IData)(
                                                   (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                    >> 0x1dU)) 
                                           << 4U)) 
                                 | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0117_output_0_0) 
                                     << 2U) | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0147_output_0_0)))),5);
    bufp->fullCData(oldp+67917,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0119_output_0_0) 
                                  << 4U) | ((4U & ((IData)(
                                                           (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                            >> 0x1fU)) 
                                                   << 2U)) 
                                            | ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0149_output_0_0) 
                                               << 1U)))),5);
    bufp->fullCData(oldp+67918,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0156_output_0_0) 
                                  << 4U) | ((8U & ((IData)(
                                                           (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                            >> 0x25U)) 
                                                   << 3U)) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0155_output_0_0) 
                                                << 2U) 
                                               | ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0157_output_0_0) 
                                                  << 1U))))),5);
    bufp->fullCData(oldp+67919,(((4U & ((IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                 >> 0x22U)) 
                                        << 2U)) | (
                                                   ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0098_output_0_0) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0068_output_0_0)))),5);
    bufp->fullCData(oldp+67920,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0067_output_0_0) 
                                  << 5U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0098_output_0_0) 
                                             << 4U) 
                                            | ((8U 
                                                & ((IData)(
                                                           (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                            >> 0x22U)) 
                                                   << 3U)) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0068_output_0_0) 
                                                   << 2U) 
                                                  | ((2U 
                                                      & ((IData)(
                                                                 (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                                  >> 0x21U)) 
                                                         << 1U)) 
                                                     | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0097_output_0_0))))))),6);
    bufp->fullCData(oldp+67921,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0084_output_0_0) 
                                  << 5U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0083_output_0_0) 
                                             << 4U) 
                                            | ((0xcU 
                                                & ((IData)(
                                                           (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                            >> 0x12U)) 
                                                   << 2U)) 
                                               | ((2U 
                                                   & ((IData)(
                                                              (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                               >> 0x14U)) 
                                                      << 1U)) 
                                                  | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0082_output_0_0)))))),6);
    bufp->fullCData(oldp+67922,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0087_output_0_0) 
                                  << 5U) | ((0x10U 
                                             & ((IData)(
                                                        (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                         >> 0x17U)) 
                                                << 4U)) 
                                            | ((8U 
                                                & ((IData)(
                                                           (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                            >> 0x15U)) 
                                                   << 3U)) 
                                               | ((4U 
                                                   & ((IData)(
                                                              (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                               >> 0x16U)) 
                                                      << 2U)) 
                                                  | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0086_output_0_0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0085_output_0_0))))))),6);
    bufp->fullCData(oldp+67923,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0086_output_0_0) 
                                  << 5U) | ((0x10U 
                                             & ((IData)(
                                                        (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                         >> 0x17U)) 
                                                << 4U)) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0087_output_0_0) 
                                                << 3U) 
                                               | ((4U 
                                                   & ((IData)(
                                                              (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                               >> 0x15U)) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & ((IData)(
                                                                 (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                                  >> 0x16U)) 
                                                         << 1U)) 
                                                     | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0085_output_0_0))))))),6);
    bufp->fullCData(oldp+67924,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0093_output_0_0) 
                                  << 2U) | (1U & (IData)(
                                                         (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                          >> 0x1dU))))),5);
    bufp->fullCData(oldp+67925,(((0x20U & ((IData)(
                                                   (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                    >> 0x1bU)) 
                                           << 5U)) 
                                 | ((0x10U & ((IData)(
                                                      (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                       >> 0x1fU)) 
                                              << 4U)) 
                                    | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0092_output_0_0) 
                                        << 3U) | ((4U 
                                                   & ((IData)(
                                                              (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                               >> 0x1cU)) 
                                                      << 2U)) 
                                                  | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0091_output_0_0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0095_output_0_0))))))),6);
    bufp->fullCData(oldp+67926,(((0x38U & ((IData)(
                                                   (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                    >> 0x1bU)) 
                                           << 3U)) 
                                 | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0092_output_0_0) 
                                     << 2U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0091_output_0_0) 
                                                << 1U) 
                                               | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0093_output_0_0))))),6);
    bufp->fullCData(oldp+67927,(((0x18U & ((IData)(
                                                   (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                    >> 0x12U)) 
                                           << 3U)) 
                                 | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0082_output_0_0) 
                                     << 2U) | ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0083_output_0_0) 
                                               << 1U)))),5);
    bufp->fullCData(oldp+67928,(((8U & ((IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                 >> 0x15U)) 
                                        << 3U)) | ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0085_output_0_0) 
                                                   << 2U))),5);
    bufp->fullCData(oldp+67929,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0087_output_0_0) 
                                  << 3U) | (4U & ((IData)(
                                                          (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                           >> 0x17U)) 
                                                  << 2U)))),5);
    bufp->fullCData(oldp+67930,((0xfU & ((1U & (IData)(
                                                       (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                        >> 0x17U)))
                                          ? (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0087_output_0_0)
                                               ? 1U
                                               : 0x10U) 
                                             >> 4U)
                                          : ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0087_output_0_0)
                                              ? 1U : 0x10U)))),4);
    bufp->fullCData(oldp+67931,((3U & ((1U & (IData)(
                                                     (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                      >> 0x17U)))
                                        ? (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0087_output_0_0)
                                             ? 1U : 0x10U) 
                                           >> 4U) : 
                                       ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0087_output_0_0)
                                         ? 1U : 0x10U)))),2);
    bufp->fullCData(oldp+67932,(((0x10U & ((IData)(
                                                   (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                    >> 0x1bU)) 
                                           << 4U)) 
                                 | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0061_output_0_0) 
                                     << 3U) | ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0091_output_0_0) 
                                               << 1U)))),5);
    bufp->fullCData(oldp+67933,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0090_output_0_0) 
                                  << 2U) | (2U & ((IData)(
                                                          (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                           >> 0x1aU)) 
                                                  << 1U)))),5);
    bufp->fullCData(oldp+67934,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0095_output_0_0) 
                                  << 3U) | ((2U & ((IData)(
                                                           (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                            >> 0x1fU)) 
                                                   << 1U)) 
                                            | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0065_output_0_0)))),5);
    bufp->fullCData(oldp+67935,(((0x10U & ((IData)(
                                                   (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                    >> 0x1aU)) 
                                           << 4U)) 
                                 | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0060_output_0_0) 
                                     << 1U) | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0090_output_0_0)))),5);
    bufp->fullCData(oldp+67936,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0036_output_0_0) 
                                  << 5U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0037_output_0_0) 
                                             << 4U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0035_output_0_0) 
                                                << 3U) 
                                               | (7U 
                                                  & (IData)(
                                                            (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                             >> 0x19U))))))),6);
    bufp->fullCData(oldp+67937,(((0x10U & ((IData)(
                                                   (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                    >> 0x1dU)) 
                                           << 4U)) 
                                 | ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0039_output_0_0) 
                                    << 1U))),5);
    bufp->fullCData(oldp+67938,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0038_output_0_0) 
                                  << 4U) | (4U & ((IData)(
                                                          (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                           >> 0x1cU)) 
                                                  << 2U)))),5);
    bufp->fullCData(oldp+67939,(((0x20U & ((IData)(
                                                   (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                    >> 0x16U)) 
                                           << 5U)) 
                                 | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0031_output_0_0) 
                                     << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0032_output_0_0) 
                                                << 3U) 
                                               | ((4U 
                                                   & ((IData)(
                                                              (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                               >> 0x15U)) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & ((IData)(
                                                                 (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                                  >> 0x17U)) 
                                                         << 1U)) 
                                                     | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0033_output_0_0))))))),6);
    bufp->fullCData(oldp+67940,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0030_output_0_0) 
                                  << 5U) | ((0x10U 
                                             & ((IData)(
                                                        (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                         >> 0x13U)) 
                                                << 4U)) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0029_output_0_0) 
                                                << 3U) 
                                               | ((4U 
                                                   & ((IData)(
                                                              (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                               >> 0x12U)) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & ((IData)(
                                                                 (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                                  >> 0x14U)) 
                                                         << 1U)) 
                                                     | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0028_output_0_0))))))),6);
    bufp->fullCData(oldp+67941,(((0x20U & ((IData)(
                                                   (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                    >> 0x23U)) 
                                           << 5U)) 
                                 | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0015_output_0_0) 
                                     << 4U) | ((8U 
                                                & ((IData)(
                                                           (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                            >> 0x24U)) 
                                                   << 3U)) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0046_output_0_0) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0016_output_0_0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0045_output_0_0))))))),6);
    bufp->fullCData(oldp+67942,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0037_output_0_0) 
                                  << 1U) | (1U & (IData)(
                                                         (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                          >> 0x1bU))))),5);
    bufp->fullCData(oldp+67943,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0031_output_0_0) 
                                  << 4U) | (4U & ((IData)(
                                                          (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                           >> 0x15U)) 
                                                  << 2U)))),5);
    bufp->fullCData(oldp+67944,(((8U & ((IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                 >> 0x17U)) 
                                        << 3U)) | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0033_output_0_0))),5);
    bufp->fullCData(oldp+67945,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0040_output_0_0) 
                                  << 3U) | ((4U & ((IData)(
                                                           (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                            >> 0x1eU)) 
                                                   << 2U)) 
                                            | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0010_output_0_0)))),5);
    bufp->fullCData(oldp+67946,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0013_output_0_0) 
                                  << 4U) | ((4U & ((IData)(
                                                           (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                            >> 0x21U)) 
                                                   << 2U)) 
                                            | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0043_output_0_0)))),5);
    bufp->fullCData(oldp+67947,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0030_output_0_0) 
                                  << 3U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0000_output_0_0) 
                                             << 2U) 
                                            | ((2U 
                                                & ((IData)(
                                                           (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                            >> 0x14U)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5459___05F__DOT__genblk1__DOT__lut_5__DOT__s1)))))),5);
    bufp->fullCData(oldp+67948,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0030_output_0_0) 
                                  << 5U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0001_output_0_0) 
                                             << 4U) 
                                            | ((8U 
                                                & ((IData)(
                                                           (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                            >> 0x14U)) 
                                                   << 3U)) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0000_output_0_0) 
                                                   << 2U) 
                                                  | ((2U 
                                                      & ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5459___05F__DOT__genblk1__DOT__lut_5__DOT__s1) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5460___05F__DOT__genblk1__DOT__lut_5__DOT__s2)))))))),6);
    bufp->fullCData(oldp+67949,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5443___05F_output_0_0) 
                                  << 4U) | ((8U & ((IData)(
                                                           (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                            >> 0x23U)) 
                                                   << 3U)) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5502___05F_output_0_0) 
                                                << 2U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0015_output_0_0) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0045_output_0_0)))))),5);
    bufp->fullCData(oldp+67950,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0015_output_0_0) 
                                  << 5U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5443___05F_output_0_0) 
                                             << 4U) 
                                            | ((8U 
                                                & ((IData)(
                                                           (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                            >> 0x23U)) 
                                                   << 3U)) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0045_output_0_0) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5502___05F_output_0_0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5447___05F_output_0_0))))))),6);
    bufp->fullCData(oldp+67951,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5444___05F_output_0_0) 
                                  << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5481___05F_output_0_0) 
                                             << 3U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0017_output_0_0) 
                                                << 2U) 
                                               | ((2U 
                                                   & ((IData)(
                                                              (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                               >> 0x25U)) 
                                                      << 1U)) 
                                                  | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0047_output_0_0)))))),5);
    bufp->fullCData(oldp+67952,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0017_output_0_0) 
                                  << 5U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5482___05F_output_0_0) 
                                             << 4U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5481___05F_output_0_0) 
                                                << 3U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5444___05F_output_0_0) 
                                                   << 2U) 
                                                  | ((2U 
                                                      & ((IData)(
                                                                 (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                                  >> 0x25U)) 
                                                         << 1U)) 
                                                     | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0047_output_0_0))))))),6);
    bufp->fullCData(oldp+67953,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0084_output_0_0) 
                                  << 3U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0054_output_0_0) 
                                             << 2U) 
                                            | ((2U 
                                                & ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4488___05F__DOT__genblk1__DOT__lut_5__DOT__s1) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (IData)(
                                                            (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                             >> 0x14U))))))),5);
    bufp->fullCData(oldp+67954,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0084_output_0_0) 
                                  << 5U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0055_output_0_0) 
                                             << 4U) 
                                            | ((8U 
                                                & ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4488___05F__DOT__genblk1__DOT__lut_5__DOT__s1) 
                                                   << 3U)) 
                                               | ((4U 
                                                   & ((IData)(
                                                              (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                               >> 0x14U)) 
                                                      << 2U)) 
                                                  | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0054_output_0_0) 
                                                      << 1U) 
                                                     | (1U 
                                                        & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4489___05F__DOT__genblk1__DOT__lut_5__DOT__s2)))))))),6);
    bufp->fullCData(oldp+67955,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4475___05F_output_0_0) 
                                  << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0059_output_0_0) 
                                             << 3U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4543___05F_output_0_0) 
                                                << 2U) 
                                               | ((2U 
                                                   & ((IData)(
                                                              (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                               >> 0x19U)) 
                                                      << 1U)) 
                                                  | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0089_output_0_0)))))),5);
    bufp->fullCData(oldp+67956,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0059_output_0_0) 
                                  << 5U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4543___05F_output_0_0) 
                                             << 4U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4544___05F_output_0_0) 
                                                << 3U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0089_output_0_0) 
                                                   << 2U) 
                                                  | ((2U 
                                                      & ((IData)(
                                                                 (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                                  >> 0x19U)) 
                                                         << 1U)) 
                                                     | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4475___05F_output_0_0))))))),6);
    bufp->fullCData(oldp+67957,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4482___05F_output_0_0) 
                                  << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0097_output_0_0) 
                                             << 3U) 
                                            | ((4U 
                                                & ((IData)(
                                                           (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                            >> 0x21U)) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0067_output_0_0) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4534___05F_output_0_0)))))),5);
    bufp->fullCData(oldp+67958,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4471___05F_output_0_0) 
                                  << 5U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0067_output_0_0) 
                                             << 4U) 
                                            | ((8U 
                                                & ((IData)(
                                                           (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                            >> 0x21U)) 
                                                   << 3U)) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0097_output_0_0) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4534___05F_output_0_0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4482___05F_output_0_0))))))),6);
    bufp->fullCData(oldp+67959,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4470___05F_output_0_0) 
                                  << 5U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4509___05F_output_0_0) 
                                             << 4U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4510___05F_output_0_0) 
                                                << 3U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0099_output_0_0) 
                                                   << 2U) 
                                                  | ((2U 
                                                      & ((IData)(
                                                                 (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                                  >> 0x23U)) 
                                                         << 1U)) 
                                                     | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0069_output_0_0))))))),6);
    bufp->fullCData(oldp+67960,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0108_output_0_0) 
                                  << 3U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0138_output_0_0) 
                                             << 2U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4345___05F_output_0_0) 
                                                << 1U) 
                                               | (1U 
                                                  & (IData)(
                                                            (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                             >> 0x14U))))))),5);
    bufp->fullCData(oldp+67961,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0108_output_0_0) 
                                  << 5U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0109_output_0_0) 
                                             << 4U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0138_output_0_0) 
                                                << 3U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4345___05F_output_0_0) 
                                                   << 2U) 
                                                  | ((2U 
                                                      & ((IData)(
                                                                 (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                                  >> 0x14U)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4367___05F__DOT__genblk1__DOT__lut_5__DOT__s3)))))))),6);
    bufp->fullCData(oldp+67962,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0141_output_0_0) 
                                  << 5U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4368___05F_output_0_0) 
                                             << 4U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0110_output_0_0) 
                                                << 3U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4370___05F_output_0_0) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4371___05F_output_0_0) 
                                                      << 1U) 
                                                     | (1U 
                                                        & (IData)(
                                                                  (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                                   >> 0x17U))))))))),6);
    bufp->fullCData(oldp+67963,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0112_output_0_0) 
                                  << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0142_output_0_0) 
                                             << 3U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4372___05F_output_0_0) 
                                                << 2U) 
                                               | ((2U 
                                                   & ((IData)(
                                                              (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                               >> 0x18U)) 
                                                      << 1U)) 
                                                  | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4373___05F_output_0_0)))))),5);
    bufp->fullCData(oldp+67964,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0146_output_0_0) 
                                  << 5U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4351___05F_output_0_0) 
                                             << 4U) 
                                            | ((8U 
                                                & ((IData)(
                                                           (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                            >> 0x1cU)) 
                                                   << 3U)) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2069_li2069_output_0_0) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0116_output_0_0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4379___05F_output_0_0))))))),6);
    bufp->fullCData(oldp+67965,(((0x10U & ((IData)(
                                                   (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                    >> 0x1eU)) 
                                           << 4U)) 
                                 | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4384___05F_output_0_0) 
                                     << 3U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0148_output_0_0) 
                                                << 2U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4352___05F_output_0_0) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0118_output_0_0)))))),5);
    bufp->fullCData(oldp+67966,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4352___05F_output_0_0) 
                                  << 5U) | ((0x10U 
                                             & ((IData)(
                                                        (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                         >> 0x1eU)) 
                                                << 4U)) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4384___05F_output_0_0) 
                                                << 3U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0118_output_0_0) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0148_output_0_0) 
                                                      << 1U) 
                                                     | (1U 
                                                        & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4385___05F__DOT__genblk1__DOT__lut_5__DOT__s1)))))))),6);
    bufp->fullCData(oldp+67967,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4393___05F_output_0_0) 
                                  << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4356___05F_output_0_0) 
                                             << 3U) 
                                            | ((2U 
                                                & ((IData)(
                                                           (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                            >> 0x24U)) 
                                                   << 1U)) 
                                               | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4361___05F_output_0_0))))),5);
    bufp->fullCData(oldp+67968,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4356___05F_output_0_0) 
                                  << 5U) | ((0x10U 
                                             & ((IData)(
                                                        (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                         >> 0x24U)) 
                                                << 4U)) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4357___05F_output_0_0) 
                                                << 3U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0154_output_0_0) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4393___05F_output_0_0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0124_output_0_0))))))),6);
    bufp->fullCData(oldp+67969,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0192_output_0_0) 
                                  << 4U) | ((8U & ((IData)(
                                                           (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                            >> 0x14U)) 
                                                   << 3U)) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0162_output_0_0) 
                                                << 2U) 
                                               | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3453___05F_output_0_0))))),5);
    bufp->fullCData(oldp+67970,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0192_output_0_0) 
                                  << 4U) | ((8U & ((IData)(
                                                           (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                            >> 0x14U)) 
                                                   << 3U)) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0162_output_0_0) 
                                                << 2U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3454___05F_output_0_0) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3453___05F_output_0_0)))))),5);
    bufp->fullCData(oldp+67971,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3456___05F_output_0_0) 
                                  << 4U) | ((8U & ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3459___05F__DOT__genblk1__DOT__lut_5__DOT__s1) 
                                                   << 3U)) 
                                            | ((4U 
                                                & ((IData)(
                                                           (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                            >> 0x18U)) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0166_output_0_0) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0196_output_0_0)))))),5);
    bufp->fullCData(oldp+67972,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0196_output_0_0) 
                                  << 5U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0166_output_0_0) 
                                             << 4U) 
                                            | ((8U 
                                                & ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3459___05F__DOT__genblk1__DOT__lut_5__DOT__s1) 
                                                   << 3U)) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3456___05F_output_0_0) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3507___05F_output_0_0) 
                                                      << 1U) 
                                                     | (1U 
                                                        & (IData)(
                                                                  (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                                   >> 0x18U))))))))),6);
    bufp->fullCData(oldp+67973,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0204_output_0_0) 
                                  << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3440___05F_output_0_0) 
                                             << 3U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3468___05F_output_0_0) 
                                                << 2U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0174_output_0_0) 
                                                   << 1U) 
                                                  | (1U 
                                                     & (IData)(
                                                               (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                                >> 0x20U)))))))),5);
    bufp->fullCData(oldp+67974,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0174_output_0_0) 
                                  << 5U) | ((0x10U 
                                             & ((IData)(
                                                        (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                         >> 0x20U)) 
                                                << 4U)) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3440___05F_output_0_0) 
                                                << 3U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0204_output_0_0) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3468___05F_output_0_0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3497___05F_output_0_0))))))),6);
    bufp->fullCData(oldp+67975,(((0x10U & ((IData)(
                                                   (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                    >> 0x23U)) 
                                           << 4U)) 
                                 | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3473___05F_output_0_0) 
                                     << 3U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0177_output_0_0) 
                                                << 2U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3442___05F_output_0_0) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0207_output_0_0)))))),5);
    bufp->fullCData(oldp+67976,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3442___05F_output_0_0) 
                                  << 5U) | ((0x10U 
                                             & ((IData)(
                                                        (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                         >> 0x23U)) 
                                                << 4U)) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3473___05F_output_0_0) 
                                                << 3U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0177_output_0_0) 
                                                   << 2U) 
                                                  | ((2U 
                                                      & (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0208_output_0_0)
                                                           ? 
                                                          ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3494___05F__DOT__genblk1__DOT__lut_5__DOT__s2) 
                                                           >> 2U)
                                                           : (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3494___05F__DOT__genblk1__DOT__lut_5__DOT__s2)) 
                                                         << 1U)) 
                                                     | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0207_output_0_0))))))),6);
    bufp->fullCData(oldp+67977,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0209_output_0_0) 
                                  << 4U) | ((8U & ((IData)(
                                                           (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                            >> 0x25U)) 
                                                   << 3U)) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0179_output_0_0) 
                                                << 2U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3475___05F_output_0_0) 
                                                   << 1U) 
                                                  | (1U 
                                                     & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3474___05F__DOT__genblk1__DOT__lut_5__DOT__s1))))))),5);
    bufp->fullCData(oldp+67978,(((0x20U & ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3476___05F__DOT__genblk1__DOT__lut_5__DOT__s2) 
                                           << 5U)) 
                                 | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0209_output_0_0) 
                                     << 4U) | ((8U 
                                                & ((IData)(
                                                           (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                            >> 0x25U)) 
                                                   << 3U)) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0179_output_0_0) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3475___05F_output_0_0) 
                                                      << 1U) 
                                                     | (1U 
                                                        & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3474___05F__DOT__genblk1__DOT__lut_5__DOT__s1)))))))),6);
    bufp->fullCData(oldp+67979,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3430___05F_output_0_0) 
                                  << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0199_output_0_0) 
                                             << 3U) 
                                            | ((6U 
                                                & ((IData)(
                                                           (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                            >> 0x1bU)) 
                                                   << 1U)) 
                                               | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0200_output_0_0))))),5);
    bufp->fullCData(oldp+67980,(((0x20U & ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3438___05F__DOT__genblk1__DOT__lut_5__DOT__s1) 
                                           << 5U)) 
                                 | ((0x10U & ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3433___05F__DOT__genblk1__DOT__lut_5__DOT__s1) 
                                              << 4U)) 
                                    | ((8U & ((IData)(
                                                      (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                       >> 0x1dU)) 
                                              << 3U)) 
                                       | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3431___05F_output_0_0) 
                                           << 2U) | 
                                          (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3432___05F_output_0_0) 
                                            << 1U) 
                                           | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0201_output_0_0))))))),6);
    bufp->fullCData(oldp+67981,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3439___05F_output_0_0) 
                                  << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0202_output_0_0) 
                                             << 3U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0203_output_0_0) 
                                                << 2U) 
                                               | (3U 
                                                  & (IData)(
                                                            (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                             >> 0x1eU))))))),5);
    bufp->fullCData(oldp+67982,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0204_output_0_0) 
                                  << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3440___05F_output_0_0) 
                                             << 3U) 
                                            | (1U & (IData)(
                                                            (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                             >> 0x20U)))))),5);
    bufp->fullCData(oldp+67983,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3441___05F_output_0_0) 
                                  << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0205_output_0_0) 
                                             << 3U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0206_output_0_0) 
                                                << 2U) 
                                               | (3U 
                                                  & (IData)(
                                                            (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                             >> 0x21U))))))),5);
    bufp->fullCData(oldp+67984,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3443___05F_output_0_0) 
                                  << 5U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0177_output_0_0) 
                                             << 4U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3442___05F_output_0_0) 
                                                << 3U) 
                                               | ((4U 
                                                   & ((IData)(
                                                              (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                               >> 0x23U)) 
                                                      << 2U)) 
                                                  | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0178_output_0_0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0207_output_0_0))))))),6);
    bufp->fullCData(oldp+67985,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3443___05F_output_0_0) 
                                  << 5U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0207_output_0_0) 
                                             << 4U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3442___05F_output_0_0) 
                                                << 3U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0178_output_0_0) 
                                                   << 2U) 
                                                  | ((2U 
                                                      & ((IData)(
                                                                 (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                                  >> 0x23U)) 
                                                         << 1U)) 
                                                     | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0177_output_0_0))))))),6);
    bufp->fullCData(oldp+67986,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0202_output_0_0) 
                                  << 3U) | ((4U & ((IData)(
                                                           (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                            >> 0x1eU)) 
                                                   << 2U)) 
                                            | ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3439___05F_output_0_0) 
                                               << 1U)))),5);
    bufp->fullCData(oldp+67987,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0194_output_0_0) 
                                  << 5U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0193_output_0_0) 
                                             << 4U) 
                                            | ((8U 
                                                & ((IData)(
                                                           (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                            >> 0x15U)) 
                                                   << 3U)) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3435___05F_output_0_0) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3450___05F_output_0_0) 
                                                      << 1U) 
                                                     | (1U 
                                                        & (IData)(
                                                                  (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                                   >> 0x16U))))))))),6);
    bufp->fullCData(oldp+67988,(((0x10U & ((IData)(
                                                   (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                    >> 0x15U)) 
                                           << 4U)) 
                                 | ((8U & ((IData)(
                                                   (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                    >> 0x16U)) 
                                           << 3U)) 
                                    | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0194_output_0_0) 
                                        << 2U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0193_output_0_0) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3435___05F_output_0_0)))))),5);
    bufp->fullCData(oldp+67989,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3453___05F_output_0_0) 
                                  << 5U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0192_output_0_0) 
                                             << 4U) 
                                            | ((8U 
                                                & ((IData)(
                                                           (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                            >> 0x14U)) 
                                                   << 3U)) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3454___05F_output_0_0) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0163_output_0_0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0162_output_0_0))))))),6);
    bufp->fullCData(oldp+67990,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3434___05F_output_0_0) 
                                  << 5U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3436___05F_output_0_0) 
                                             << 4U) 
                                            | ((8U 
                                                & ((IData)(
                                                           (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                            >> 0x18U)) 
                                                   << 3U)) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3435___05F_output_0_0) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0196_output_0_0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3457___05F_output_0_0))))))),6);
    bufp->fullCData(oldp+67991,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0167_output_0_0) 
                                  << 5U) | ((0x10U 
                                             & ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3459___05F__DOT__genblk1__DOT__lut_5__DOT__s1) 
                                                << 4U)) 
                                            | ((8U 
                                                & ((IData)(
                                                           (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                            >> 0x18U)) 
                                                   << 3U)) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3458___05F_output_0_0) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0196_output_0_0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0166_output_0_0))))))),6);
    bufp->fullCData(oldp+67992,(((0x10U & ((IData)(
                                                   (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                    >> 0x1aU)) 
                                           << 4U)) 
                                 | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0198_output_0_0) 
                                     << 3U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3458___05F_output_0_0) 
                                                << 2U) 
                                               | ((2U 
                                                   & ((IData)(
                                                              (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                               >> 0x19U)) 
                                                      << 1U)) 
                                                  | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0197_output_0_0)))))),5);
    bufp->fullCData(oldp+67993,(((0x20U & ((IData)(
                                                   (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                    >> 0x18U)) 
                                           << 5U)) 
                                 | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0166_output_0_0) 
                                     << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0167_output_0_0) 
                                                << 3U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3458___05F_output_0_0) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0196_output_0_0) 
                                                      << 1U) 
                                                     | (1U 
                                                        & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3459___05F__DOT__genblk1__DOT__lut_5__DOT__s1)))))))),6);
    bufp->fullCData(oldp+67994,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0199_output_0_0) 
                                  << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0169_output_0_0) 
                                             << 3U) 
                                            | ((4U 
                                                & ((IData)(
                                                           (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                            >> 0x1bU)) 
                                                   << 2U)) 
                                               | ((2U 
                                                   & ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3438___05F__DOT__genblk1__DOT__lut_5__DOT__s1) 
                                                      << 1U)) 
                                                  | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3430___05F_output_0_0)))))),5);
    bufp->fullCData(oldp+67995,(((0x20U & ((IData)(
                                                   (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                    >> 0x1cU)) 
                                           << 5U)) 
                                 | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0199_output_0_0) 
                                     << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3430___05F_output_0_0) 
                                                << 3U) 
                                               | ((4U 
                                                   & ((IData)(
                                                              (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                               >> 0x1bU)) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3438___05F__DOT__genblk1__DOT__lut_5__DOT__s1) 
                                                         << 1U)) 
                                                     | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0200_output_0_0))))))),6);
    bufp->fullCData(oldp+67996,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0204_output_0_0) 
                                  << 5U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3440___05F_output_0_0) 
                                             << 4U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0174_output_0_0) 
                                                << 3U) 
                                               | ((4U 
                                                   & ((IData)(
                                                              (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                               >> 0x20U)) 
                                                      << 2U)) 
                                                  | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0175_output_0_0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3469___05F_output_0_0))))))),6);
    bufp->fullCData(oldp+67997,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3442___05F_output_0_0) 
                                  << 4U) | ((8U & ((IData)(
                                                           (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                            >> 0x24U)) 
                                                   << 3U)) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0207_output_0_0) 
                                                << 2U) 
                                               | ((2U 
                                                   & ((IData)(
                                                              (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                               >> 0x23U)) 
                                                      << 1U)) 
                                                  | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0208_output_0_0)))))),5);
    bufp->fullCData(oldp+67998,(((0x20U & ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3474___05F__DOT__genblk1__DOT__lut_5__DOT__s1) 
                                           << 5U)) 
                                 | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0179_output_0_0) 
                                     << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0209_output_0_0) 
                                                << 3U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3475___05F_output_0_0) 
                                                   << 2U) 
                                                  | ((2U 
                                                      & ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3476___05F__DOT__genblk1__DOT__lut_5__DOT__s2) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (IData)(
                                                                  (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                                   >> 0x25U))))))))),6);
    bufp->fullCData(oldp+67999,(((0x10U & ((IData)(
                                                   (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                    >> 0x25U)) 
                                           << 4U)) 
                                 | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0210_output_0_0) 
                                     << 3U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0211_output_0_0) 
                                                << 2U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3475___05F_output_0_0) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0209_output_0_0)))))),5);
    bufp->fullCData(oldp+68000,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4350___05F_output_0_0) 
                                  << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0144_output_0_0) 
                                             << 3U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0145_output_0_0) 
                                                << 2U) 
                                               | ((2U 
                                                   & ((IData)(
                                                              (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                               >> 0x1aU)) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (IData)(
                                                               (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                                >> 0x1bU)))))))),5);
    bufp->fullCData(oldp+68001,(((0x10U & ((IData)(
                                                   (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                    >> 0x1dU)) 
                                           << 4U)) 
                                 | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0147_output_0_0) 
                                     << 3U) | ((4U 
                                                & ((IData)(
                                                           (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                            >> 0x1cU)) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4351___05F_output_0_0) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0146_output_0_0)))))),5);
    bufp->fullCData(oldp+68002,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4352___05F_output_0_0) 
                                  << 4U) | ((8U & ((IData)(
                                                           (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                            >> 0x1fU)) 
                                                   << 3U)) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0149_output_0_0) 
                                                << 2U) 
                                               | ((2U 
                                                   & ((IData)(
                                                              (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                               >> 0x1eU)) 
                                                      << 1U)) 
                                                  | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0148_output_0_0)))))),5);
    bufp->fullCData(oldp+68003,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4353___05F_output_0_0) 
                                  << 5U) | ((0x10U 
                                             & ((IData)(
                                                        (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                         >> 0x21U)) 
                                                << 4U)) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0151_output_0_0) 
                                                << 3U) 
                                               | ((4U 
                                                   & ((IData)(
                                                              (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                               >> 0x20U)) 
                                                      << 2U)) 
                                                  | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0150_output_0_0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4354___05F_output_0_0))))))),6);
    bufp->fullCData(oldp+68004,(((0x10U & ((IData)(
                                                   (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                    >> 0x22U)) 
                                           << 4U)) 
                                 | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0152_output_0_0) 
                                     << 3U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4355___05F_output_0_0) 
                                                << 2U) 
                                               | ((2U 
                                                   & ((IData)(
                                                              (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                               >> 0x23U)) 
                                                      << 1U)) 
                                                  | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0153_output_0_0)))))),5);
    bufp->fullCData(oldp+68005,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4356___05F_output_0_0) 
                                  << 5U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4358___05F_output_0_0) 
                                             << 4U) 
                                            | ((8U 
                                                & ((IData)(
                                                           (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                            >> 0x24U)) 
                                                   << 3U)) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0126_output_0_0) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4357___05F_output_0_0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0156_output_0_0))))))),6);
    bufp->fullCData(oldp+68006,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0142_output_0_0) 
                                  << 5U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4362___05F_output_0_0) 
                                             << 4U) 
                                            | ((8U 
                                                & ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4363___05F__DOT__genblk1__DOT__lut_5__DOT__s1) 
                                                   << 3U)) 
                                               | ((6U 
                                                   & ((IData)(
                                                              (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                               >> 0x17U)) 
                                                      << 1U)) 
                                                  | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0141_output_0_0)))))),6);
    bufp->fullCData(oldp+68007,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4350___05F_output_0_0) 
                                  << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0144_output_0_0) 
                                             << 3U) 
                                            | (2U & 
                                               ((IData)(
                                                        (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                         >> 0x1aU)) 
                                                << 1U))))),5);
    bufp->fullCData(oldp+68008,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4345___05F_output_0_0) 
                                  << 5U) | ((0x10U 
                                             & ((IData)(
                                                        (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                         >> 0x14U)) 
                                                << 4U)) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0108_output_0_0) 
                                                << 3U) 
                                               | ((4U 
                                                   & ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4367___05F__DOT__genblk1__DOT__lut_5__DOT__s3) 
                                                      << 2U)) 
                                                  | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0109_output_0_0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0138_output_0_0))))))),6);
    bufp->fullCData(oldp+68009,(((0x20U & (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0140_output_0_0)
                                             ? ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4369___05F__DOT__genblk1__DOT__lut_5__DOT__s3) 
                                                >> 2U)
                                             : (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4369___05F__DOT__genblk1__DOT__lut_5__DOT__s3)) 
                                           << 5U)) 
                                 | ((0x10U & ((IData)(
                                                      (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                       >> 0x14U)) 
                                              << 4U)) 
                                    | ((8U & ((IData)(
                                                      (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                       >> 0x15U)) 
                                              << 3U)) 
                                       | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4345___05F_output_0_0) 
                                           << 2U) | 
                                          (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0139_output_0_0) 
                                            << 1U) 
                                           | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0138_output_0_0))))))),6);
    bufp->fullCData(oldp+68010,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0141_output_0_0) 
                                  << 5U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4370___05F_output_0_0) 
                                             << 4U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0110_output_0_0) 
                                                << 3U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4368___05F_output_0_0) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4371___05F_output_0_0) 
                                                      << 1U) 
                                                     | (1U 
                                                        & (IData)(
                                                                  (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                                   >> 0x17U))))))))),6);
    bufp->fullCData(oldp+68011,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4350___05F_output_0_0) 
                                  << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0114_output_0_0) 
                                             << 3U) 
                                            | ((2U 
                                                & ((IData)(
                                                           (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                            >> 0x1aU)) 
                                                   << 1U)) 
                                               | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0144_output_0_0))))),5);
    bufp->fullCData(oldp+68012,(((0x20U & ((IData)(
                                                   (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                    >> 0x1bU)) 
                                           << 5U)) 
                                 | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4350___05F_output_0_0) 
                                     << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0144_output_0_0) 
                                                << 3U) 
                                               | ((4U 
                                                   & ((IData)(
                                                              (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                               >> 0x1aU)) 
                                                      << 2U)) 
                                                  | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0115_output_0_0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0145_output_0_0))))))),6);
    bufp->fullCData(oldp+68013,(((0x20U & ((IData)(
                                                   (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                    >> 0x1cU)) 
                                           << 5U)) 
                                 | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4378___05F_output_0_0) 
                                     << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0116_output_0_0) 
                                                << 3U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4379___05F_output_0_0) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4351___05F_output_0_0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0146_output_0_0))))))),6);
    bufp->fullCData(oldp+68014,(((0x20U & ((IData)(
                                                   (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                    >> 0x1aU)) 
                                           << 5U)) 
                                 | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0145_output_0_0) 
                                     << 4U) | ((8U 
                                                & ((IData)(
                                                           (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                            >> 0x1bU)) 
                                                   << 3U)) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0144_output_0_0) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4350___05F_output_0_0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0115_output_0_0))))))),6);
    bufp->fullCData(oldp+68015,(((0x20U & ((IData)(
                                                   (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                    >> 0x1cU)) 
                                           << 5U)) 
                                 | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0116_output_0_0) 
                                     << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0117_output_0_0) 
                                                << 3U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4379___05F_output_0_0) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4351___05F_output_0_0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0146_output_0_0))))))),6);
    bufp->fullCData(oldp+68016,(((0x10U & ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4385___05F__DOT__genblk1__DOT__lut_5__DOT__s1) 
                                           << 4U)) 
                                 | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4352___05F_output_0_0) 
                                     << 3U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0148_output_0_0) 
                                                << 2U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0118_output_0_0) 
                                                   << 1U) 
                                                  | (1U 
                                                     & (IData)(
                                                               (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                                >> 0x1eU)))))))),5);
    bufp->fullCData(oldp+68017,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4352___05F_output_0_0) 
                                  << 5U) | ((0x10U 
                                             & ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4385___05F__DOT__genblk1__DOT__lut_5__DOT__s1) 
                                                << 4U)) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0118_output_0_0) 
                                                << 3U) 
                                               | ((4U 
                                                   & ((IData)(
                                                              (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                               >> 0x1eU)) 
                                                      << 2U)) 
                                                  | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0148_output_0_0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0119_output_0_0))))))),6);
    bufp->fullCData(oldp+68018,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0151_output_0_0) 
                                  << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0150_output_0_0) 
                                             << 3U) 
                                            | ((4U 
                                                & ((IData)(
                                                           (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                            >> 0x20U)) 
                                                   << 2U)) 
                                               | ((2U 
                                                   & ((IData)(
                                                              (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                               >> 0x21U)) 
                                                      << 1U)) 
                                                  | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4353___05F_output_0_0)))))),5);
    bufp->fullCData(oldp+68019,(((0x10U & ((IData)(
                                                   (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                    >> 0x20U)) 
                                           << 4U)) 
                                 | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0120_output_0_0) 
                                     << 3U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0150_output_0_0) 
                                                << 1U) 
                                               | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4353___05F_output_0_0))))),5);
    bufp->fullCData(oldp+68020,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0123_output_0_0) 
                                  << 5U) | ((0x10U 
                                             & ((IData)(
                                                        (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                         >> 0x22U)) 
                                                << 4U)) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4355___05F_output_0_0) 
                                                << 3U) 
                                               | ((4U 
                                                   & ((IData)(
                                                              (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                               >> 0x23U)) 
                                                      << 2U)) 
                                                  | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0153_output_0_0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0152_output_0_0))))))),6);
    bufp->fullCData(oldp+68021,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4358___05F_output_0_0) 
                                  << 5U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4393___05F_output_0_0) 
                                             << 4U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4357___05F_output_0_0) 
                                                << 3U) 
                                               | ((4U 
                                                   & ((IData)(
                                                              (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                               >> 0x24U)) 
                                                      << 2U)) 
                                                  | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4356___05F_output_0_0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4361___05F_output_0_0))))))),6);
    bufp->fullCData(oldp+68022,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4356___05F_output_0_0) 
                                  << 5U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0155_output_0_0) 
                                             << 4U) 
                                            | ((8U 
                                                & ((IData)(
                                                           (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                            >> 0x25U)) 
                                                   << 3U)) 
                                               | ((4U 
                                                   & (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0157_output_0_0)
                                                        ? 
                                                       ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4396___05F__DOT__genblk1__DOT__lut_5__DOT__s2) 
                                                        >> 2U)
                                                        : (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4396___05F__DOT__genblk1__DOT__lut_5__DOT__s2)) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & ((IData)(
                                                                 (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                                  >> 0x24U)) 
                                                         << 1U)) 
                                                     | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0154_output_0_0))))))),6);
    bufp->fullCData(oldp+68023,(((0x20U & ((IData)(
                                                   (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                    >> 0x24U)) 
                                           << 5U)) 
                                 | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4344___05F_output_0_0) 
                                     << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4356___05F_output_0_0) 
                                                << 3U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4361___05F_output_0_0) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4393___05F_output_0_0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4357___05F_output_0_0))))))),6);
    bufp->fullCData(oldp+68024,(((0x10U & ((IData)(
                                                   (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                    >> 0x1cU)) 
                                           << 4U)) 
                                 | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4351___05F_output_0_0) 
                                     << 3U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0116_output_0_0) 
                                                << 2U) 
                                               | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0146_output_0_0))))),5);
    bufp->fullCData(oldp+68025,(((0x10U & ((IData)(
                                                   (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                    >> 0x18U)) 
                                           << 4U)) 
                                 | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4473___05F_output_0_0) 
                                     << 3U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4472___05F_output_0_0) 
                                                << 2U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4474___05F_output_0_0) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0088_output_0_0)))))),5);
    bufp->fullCData(oldp+68026,(((0x10U & ((IData)(
                                                   (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                    >> 0x19U)) 
                                           << 4U)) 
                                 | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4475___05F_output_0_0) 
                                     << 3U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0090_output_0_0) 
                                                << 2U) 
                                               | ((2U 
                                                   & ((IData)(
                                                              (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                               >> 0x1aU)) 
                                                      << 1U)) 
                                                  | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0089_output_0_0)))))),5);
    bufp->fullCData(oldp+68027,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4477___05F_output_0_0) 
                                  << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0094_output_0_0) 
                                             << 3U) 
                                            | ((4U 
                                                & ((IData)(
                                                           (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                            >> 0x1eU)) 
                                                   << 2U)) 
                                               | ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4478___05F_output_0_0) 
                                                  << 1U))))),5);
    bufp->fullCData(oldp+68028,(((0x10U & ((IData)(
                                                   (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                    >> 0x1eU)) 
                                           << 4U)) 
                                 | ((8U & ((IData)(
                                                   (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                    >> 0x1fU)) 
                                           << 3U)) 
                                    | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0095_output_0_0) 
                                        << 2U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4480___05F_output_0_0) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0094_output_0_0)))))),5);
    bufp->fullCData(oldp+68029,(((0x10U & ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4479___05F__DOT__genblk1__DOT__lut_5__DOT__s1) 
                                           << 4U)) 
                                 | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4476___05F_output_0_0) 
                                     << 3U) | ((4U 
                                                & ((IData)(
                                                           (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                            >> 0x20U)) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4481___05F_output_0_0) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0096_output_0_0)))))),5);
    bufp->fullCData(oldp+68030,(((0x10U & ((IData)(
                                                   (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                    >> 0x21U)) 
                                           << 4U)) 
                                 | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4482___05F_output_0_0) 
                                     << 3U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0097_output_0_0) 
                                                << 2U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4471___05F_output_0_0) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0067_output_0_0)))))),5);
    bufp->fullCData(oldp+68031,(((0x10U & ((IData)(
                                                   (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                    >> 0x1cU)) 
                                           << 4U)) 
                                 | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4476___05F_output_0_0) 
                                     << 3U) | ((4U 
                                                & ((IData)(
                                                           (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                            >> 0x1bU)) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0092_output_0_0) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0091_output_0_0)))))),5);
    bufp->fullCData(oldp+68032,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0091_output_0_0) 
                                  << 5U) | ((0x10U 
                                             & ((IData)(
                                                        (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                         >> 0x1bU)) 
                                                << 4U)) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4476___05F_output_0_0) 
                                                << 3U) 
                                               | ((4U 
                                                   & ((IData)(
                                                              (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                               >> 0x1cU)) 
                                                      << 2U)) 
                                                  | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0092_output_0_0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4477___05F_output_0_0))))))),6);
    bufp->fullCData(oldp+68033,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0084_output_0_0) 
                                  << 5U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0054_output_0_0) 
                                             << 4U) 
                                            | ((8U 
                                                & ((IData)(
                                                           (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                            >> 0x14U)) 
                                                   << 3U)) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0055_output_0_0) 
                                                   << 2U) 
                                                  | ((2U 
                                                      & ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4488___05F__DOT__genblk1__DOT__lut_5__DOT__s1) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4489___05F__DOT__genblk1__DOT__lut_5__DOT__s2)))))))),6);
    bufp->fullCData(oldp+68034,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0086_output_0_0) 
                                  << 4U) | ((8U & ((IData)(
                                                           (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                            >> 0x15U)) 
                                                   << 3U)) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0085_output_0_0) 
                                                << 2U) 
                                               | ((2U 
                                                   & ((IData)(
                                                              (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                               >> 0x16U)) 
                                                      << 1U)) 
                                                  | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4472___05F_output_0_0)))))),5);
    bufp->fullCData(oldp+68035,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0086_output_0_0) 
                                  << 5U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0085_output_0_0) 
                                             << 4U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4472___05F_output_0_0) 
                                                << 3U) 
                                               | ((4U 
                                                   & (((1U 
                                                        & (IData)(
                                                                  (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                                   >> 0x17U)))
                                                        ? 
                                                       (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0087_output_0_0)
                                                          ? 1U
                                                          : 0x10U) 
                                                        >> 4U)
                                                        : 
                                                       ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0087_output_0_0)
                                                         ? 1U
                                                         : 0x10U)) 
                                                      << 2U)) 
                                                  | (3U 
                                                     & (IData)(
                                                               (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                                >> 0x15U)))))))),6);
    bufp->fullCData(oldp+68036,(((0x20U & ((IData)(
                                                   (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                    >> 0x19U)) 
                                           << 5U)) 
                                 | ((0x10U & ((IData)(
                                                      (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                       >> 0x1aU)) 
                                              << 4U)) 
                                    | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0090_output_0_0) 
                                        << 3U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0089_output_0_0) 
                                                   << 2U) 
                                                  | ((2U 
                                                      & (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0091_output_0_0)
                                                           ? 
                                                          ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4495___05F__DOT__genblk1__DOT__lut_5__DOT__s3) 
                                                           >> 2U)
                                                           : (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4495___05F__DOT__genblk1__DOT__lut_5__DOT__s3)) 
                                                         << 1U)) 
                                                     | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4475___05F_output_0_0))))))),6);
    bufp->fullCData(oldp+68037,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0060_output_0_0) 
                                  << 5U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0059_output_0_0) 
                                             << 4U) 
                                            | ((8U 
                                                & ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4497___05F__DOT__genblk1__DOT__lut_5__DOT__s1) 
                                                   << 3U)) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0089_output_0_0) 
                                                   << 2U) 
                                                  | ((2U 
                                                      & ((IData)(
                                                                 (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                                  >> 0x19U)) 
                                                         << 1U)) 
                                                     | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4475___05F_output_0_0))))))),6);
    bufp->fullCData(oldp+68038,(((0x20U & ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4497___05F__DOT__genblk1__DOT__lut_5__DOT__s1) 
                                           << 5U)) 
                                 | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4475___05F_output_0_0) 
                                     << 4U) | ((8U 
                                                & ((IData)(
                                                           (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                            >> 0x19U)) 
                                                   << 3U)) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0059_output_0_0) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0060_output_0_0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0089_output_0_0))))))),6);
    bufp->fullCData(oldp+68039,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0094_output_0_0) 
                                  << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4503___05F_output_0_0) 
                                             << 3U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0093_output_0_0) 
                                                << 2U) 
                                               | (3U 
                                                  & (IData)(
                                                            (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                             >> 0x1dU))))))),5);
    bufp->fullCData(oldp+68040,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0094_output_0_0) 
                                  << 5U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4477___05F_output_0_0) 
                                             << 4U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4505___05F_output_0_0) 
                                                << 3U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4503___05F_output_0_0) 
                                                   << 2U) 
                                                  | ((2U 
                                                      & ((IData)(
                                                                 (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                                  >> 0x1dU)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (IData)(
                                                                  (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                                   >> 0x1eU))))))))),6);
    bufp->fullCData(oldp+68041,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0067_output_0_0) 
                                  << 5U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4482___05F_output_0_0) 
                                             << 4U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0068_output_0_0) 
                                                << 3U) 
                                               | ((4U 
                                                   & ((IData)(
                                                              (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                               >> 0x21U)) 
                                                      << 2U)) 
                                                  | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4471___05F_output_0_0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0097_output_0_0))))))),6);
    bufp->fullCData(oldp+68042,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0098_output_0_0) 
                                  << 4U) | ((0xcU & 
                                             ((IData)(
                                                      (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                       >> 0x21U)) 
                                              << 2U)) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4482___05F_output_0_0) 
                                                << 1U) 
                                               | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0097_output_0_0))))),5);
    bufp->fullCData(oldp+68043,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0069_output_0_0) 
                                  << 5U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4509___05F_output_0_0) 
                                             << 4U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4510___05F_output_0_0) 
                                                << 3U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0099_output_0_0) 
                                                   << 2U) 
                                                  | ((2U 
                                                      & ((IData)(
                                                                 (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                                  >> 0x23U)) 
                                                         << 1U)) 
                                                     | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4470___05F_output_0_0))))))),6);
    bufp->fullCData(oldp+68044,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0100_output_0_0) 
                                  << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0099_output_0_0) 
                                             << 3U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4510___05F_output_0_0) 
                                                << 2U) 
                                               | ((2U 
                                                   & ((IData)(
                                                              (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                               >> 0x23U)) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (IData)(
                                                               (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                                >> 0x24U)))))))),5);
    bufp->fullCData(oldp+68045,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4512___05F_output_0_0) 
                                  << 5U) | ((0x10U 
                                             & ((IData)(
                                                        (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                         >> 0x24U)) 
                                                << 4U)) 
                                            | ((8U 
                                                & ((IData)(
                                                           (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                            >> 0x25U)) 
                                                   << 3U)) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0071_output_0_0) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0101_output_0_0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0100_output_0_0))))))),6);
    bufp->fullCData(oldp+68046,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0101_output_0_0) 
                                  << 4U) | ((8U & ((IData)(
                                                           (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                            >> 0x25U)) 
                                                   << 3U)) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0100_output_0_0) 
                                                << 2U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4512___05F_output_0_0) 
                                                   << 1U) 
                                                  | (1U 
                                                     & (IData)(
                                                               (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                                >> 0x24U)))))))),5);
    bufp->fullCData(oldp+68047,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0038_output_0_0) 
                                  << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5432___05F_output_0_0) 
                                             << 3U) 
                                            | ((6U 
                                                & ((IData)(
                                                           (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                            >> 0x1cU)) 
                                                   << 1U)) 
                                               | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0039_output_0_0))))),5);
    bufp->fullCData(oldp+68048,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5436___05F_output_0_0) 
                                  << 5U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5437___05F_output_0_0) 
                                             << 4U) 
                                            | ((8U 
                                                & ((IData)(
                                                           (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                            >> 0x18U)) 
                                                   << 3U)) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5439___05F_output_0_0) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0034_output_0_0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5438___05F_output_0_0))))))),6);
    bufp->fullCData(oldp+68049,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5433___05F_output_0_0) 
                                  << 5U) | ((0x10U 
                                             & ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5434___05F__DOT__genblk1__DOT__lut_5__DOT__s1) 
                                                << 4U)) 
                                            | ((8U 
                                                & ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5435___05F__DOT__genblk1__DOT__lut_5__DOT__s2) 
                                                   << 3U)) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5440___05F_output_0_0) 
                                                   << 2U) 
                                                  | ((2U 
                                                      & ((IData)(
                                                                 (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                                  >> 0x1eU)) 
                                                         << 1U)) 
                                                     | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0040_output_0_0))))))),6);
    bufp->fullCData(oldp+68050,(((0x10U & ((IData)(
                                                   (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                    >> 0x1fU)) 
                                           << 4U)) 
                                 | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0041_output_0_0) 
                                     << 3U) | ((4U 
                                                & ((IData)(
                                                           (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                            >> 0x20U)) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0042_output_0_0) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5441___05F_output_0_0)))))),5);
    bufp->fullCData(oldp+68051,(((0x10U & ((IData)(
                                                   (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                    >> 0x21U)) 
                                           << 4U)) 
                                 | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5442___05F_output_0_0) 
                                     << 3U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0044_output_0_0) 
                                                << 2U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0043_output_0_0) 
                                                   << 1U) 
                                                  | (1U 
                                                     & (IData)(
                                                               (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                                >> 0x22U)))))))),5);
    bufp->fullCData(oldp+68052,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0045_output_0_0) 
                                  << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5443___05F_output_0_0) 
                                             << 3U) 
                                            | ((4U 
                                                & ((IData)(
                                                           (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                            >> 0x23U)) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0046_output_0_0) 
                                                   << 1U) 
                                                  | (1U 
                                                     & (IData)(
                                                               (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                                >> 0x24U)))))))),5);
    bufp->fullCData(oldp+68053,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5444___05F_output_0_0) 
                                  << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0018_output_0_0) 
                                             << 3U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0047_output_0_0) 
                                                << 2U) 
                                               | (2U 
                                                  & ((IData)(
                                                             (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                              >> 0x25U)) 
                                                     << 1U)))))),5);
    bufp->fullCData(oldp+68054,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0017_output_0_0) 
                                  << 5U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0048_output_0_0) 
                                             << 4U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5444___05F_output_0_0) 
                                                << 3U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0018_output_0_0) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0047_output_0_0) 
                                                      << 1U) 
                                                     | (1U 
                                                        & (IData)(
                                                                  (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                                   >> 0x25U))))))))),6);
    bufp->fullCData(oldp+68055,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0015_output_0_0) 
                                  << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5443___05F_output_0_0) 
                                             << 3U) 
                                            | ((4U 
                                                & ((IData)(
                                                           (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                            >> 0x23U)) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5447___05F_output_0_0) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0045_output_0_0)))))),5);
    bufp->fullCData(oldp+68056,(((0x10U & ((IData)(
                                                   (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                    >> 0x1fU)) 
                                           << 4U)) 
                                 | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0041_output_0_0) 
                                     << 3U) | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5441___05F_output_0_0)))),5);
    bufp->fullCData(oldp+68057,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0034_output_0_0) 
                                  << 4U) | ((8U & ((IData)(
                                                           (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                            >> 0x18U)) 
                                                   << 3U)) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5438___05F_output_0_0) 
                                                << 2U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5436___05F_output_0_0) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5437___05F_output_0_0)))))),5);
    bufp->fullCData(oldp+68058,(((0x20U & ((IData)(
                                                   (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                    >> 0x19U)) 
                                           << 5U)) 
                                 | ((0x10U & ((IData)(
                                                      (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                       >> 0x1aU)) 
                                              << 4U)) 
                                    | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5451___05F_output_0_0) 
                                        << 3U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0035_output_0_0) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5452___05F_output_0_0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0036_output_0_0))))))),6);
    bufp->fullCData(oldp+68059,(((0x10U & ((IData)(
                                                   (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                    >> 0x1cU)) 
                                           << 4U)) 
                                 | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5440___05F_output_0_0) 
                                     << 3U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5432___05F_output_0_0) 
                                                << 1U) 
                                               | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0038_output_0_0))))),5);
    bufp->fullCData(oldp+68060,(((0x20U & ((IData)(
                                                   (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                    >> 0x1aU)) 
                                           << 5U)) 
                                 | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0036_output_0_0) 
                                     << 4U) | ((8U 
                                                & ((IData)(
                                                           (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                            >> 0x19U)) 
                                                   << 3U)) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0035_output_0_0) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5451___05F_output_0_0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0006_output_0_0))))))),6);
    bufp->fullCData(oldp+68061,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0035_output_0_0) 
                                  << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5451___05F_output_0_0) 
                                             << 3U) 
                                            | (4U & 
                                               ((IData)(
                                                        (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                         >> 0x19U)) 
                                                << 2U))))),5);
    bufp->fullCData(oldp+68062,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0030_output_0_0) 
                                  << 5U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0001_output_0_0) 
                                             << 4U) 
                                            | ((8U 
                                                & ((IData)(
                                                           (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                            >> 0x14U)) 
                                                   << 3U)) 
                                               | ((4U 
                                                   & ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5460___05F__DOT__genblk1__DOT__lut_5__DOT__s2) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5459___05F__DOT__genblk1__DOT__lut_5__DOT__s1) 
                                                         << 1U)) 
                                                     | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0000_output_0_0))))))),6);
    bufp->fullCData(oldp+68063,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0031_output_0_0) 
                                  << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5437___05F_output_0_0) 
                                             << 3U) 
                                            | ((4U 
                                                & ((IData)(
                                                           (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                            >> 0x15U)) 
                                                   << 2U)) 
                                               | ((2U 
                                                   & ((IData)(
                                                              (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                               >> 0x16U)) 
                                                      << 1U)) 
                                                  | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0032_output_0_0)))))),5);
    bufp->fullCData(oldp+68064,(((0x20U & ((IData)(
                                                   (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                    >> 0x16U)) 
                                           << 5U)) 
                                 | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0031_output_0_0) 
                                     << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0032_output_0_0) 
                                                << 3U) 
                                               | ((4U 
                                                   & ((IData)(
                                                              (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                               >> 0x15U)) 
                                                      << 2U)) 
                                                  | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5463___05F_output_0_0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5437___05F_output_0_0))))))),6);
    bufp->fullCData(oldp+68065,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0038_output_0_0) 
                                  << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5432___05F_output_0_0) 
                                             << 3U) 
                                            | (2U & 
                                               ((IData)(
                                                        (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                         >> 0x1cU)) 
                                                << 1U))))),5);
    bufp->fullCData(oldp+68066,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0039_output_0_0) 
                                  << 4U) | ((8U & ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5467___05F__DOT__genblk1__DOT__lut_5__DOT__s1) 
                                                   << 3U)) 
                                            | ((4U 
                                                & ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5435___05F__DOT__genblk1__DOT__lut_5__DOT__s2) 
                                                   << 2U)) 
                                               | ((2U 
                                                   & ((IData)(
                                                              (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                               >> 0x1dU)) 
                                                      << 1U)) 
                                                  | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5440___05F_output_0_0)))))),5);
    bufp->fullCData(oldp+68067,(((0x20U & ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5467___05F__DOT__genblk1__DOT__lut_5__DOT__s1) 
                                           << 5U)) 
                                 | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0039_output_0_0) 
                                     << 4U) | ((8U 
                                                & ((IData)(
                                                           (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                            >> 0x1dU)) 
                                                   << 3U)) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5440___05F_output_0_0) 
                                                   << 2U) 
                                                  | ((2U 
                                                      & ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5435___05F__DOT__genblk1__DOT__lut_5__DOT__s2) 
                                                         << 1U)) 
                                                     | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0009_output_0_0))))))),6);
    bufp->fullCData(oldp+68068,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0041_output_0_0) 
                                  << 5U) | ((0x10U 
                                             & ((IData)(
                                                        (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                         >> 0x20U)) 
                                                << 4U)) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5441___05F_output_0_0) 
                                                << 3U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0012_output_0_0) 
                                                   << 2U) 
                                                  | ((2U 
                                                      & ((IData)(
                                                                 (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                                  >> 0x1fU)) 
                                                         << 1U)) 
                                                     | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0042_output_0_0))))))),6);
    bufp->fullCData(oldp+68069,(((0x20U & ((IData)(
                                                   (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                    >> 0x1fU)) 
                                           << 5U)) 
                                 | ((0x10U & ((IData)(
                                                      (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                       >> 0x20U)) 
                                              << 4U)) 
                                    | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5441___05F_output_0_0) 
                                        << 3U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5477___05F_output_0_0) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0041_output_0_0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0042_output_0_0))))))),6);
    bufp->fullCData(oldp+68070,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5443___05F_output_0_0) 
                                  << 5U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0015_output_0_0) 
                                             << 4U) 
                                            | ((8U 
                                                & ((IData)(
                                                           (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                            >> 0x23U)) 
                                                   << 3U)) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0016_output_0_0) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5447___05F_output_0_0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0045_output_0_0))))))),6);
    bufp->fullCData(oldp+68071,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5482___05F_output_0_0) 
                                  << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0017_output_0_0) 
                                             << 3U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0047_output_0_0) 
                                                << 2U) 
                                               | ((2U 
                                                   & ((IData)(
                                                              (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                               >> 0x25U)) 
                                                      << 1U)) 
                                                  | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5444___05F_output_0_0)))))),5);
    bufp->fullCData(oldp+68072,(((0x10U & ((IData)(
                                                   (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                    >> 0x25U)) 
                                           << 4U)) 
                                 | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5489___05F_output_0_0) 
                                     << 2U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5444___05F_output_0_0) 
                                                << 1U) 
                                               | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0047_output_0_0))))),5);
    bufp->fullCData(oldp+68073,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5432___05F_output_0_0) 
                                  << 4U) | ((8U & ((IData)(
                                                           (vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                            >> 0x1cU)) 
                                                   << 3U)) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5440___05F_output_0_0) 
                                                << 2U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0008_output_0_0) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0038_output_0_0)))))),5);
    bufp->fullBit(oldp+68074,((1U & ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0208_output_0_0)
                                      ? ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3494___05F__DOT__genblk1__DOT__lut_5__DOT__s2) 
                                         >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3494___05F__DOT__genblk1__DOT__lut_5__DOT__s2)))));
    bufp->fullBit(oldp+68075,((1U & ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0140_output_0_0)
                                      ? ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4369___05F__DOT__genblk1__DOT__lut_5__DOT__s3) 
                                         >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4369___05F__DOT__genblk1__DOT__lut_5__DOT__s3)))));
    bufp->fullBit(oldp+68076,((1U & ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0157_output_0_0)
                                      ? ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4396___05F__DOT__genblk1__DOT__lut_5__DOT__s2) 
                                         >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4396___05F__DOT__genblk1__DOT__lut_5__DOT__s2)))));
    bufp->fullBit(oldp+68077,((1U & ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0091_output_0_0)
                                      ? ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4495___05F__DOT__genblk1__DOT__lut_5__DOT__s3) 
                                         >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4495___05F__DOT__genblk1__DOT__lut_5__DOT__s3)))));
    bufp->fullCData(oldp+68078,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5462___05F_output_0_0) 
                                  << 2U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5461___05F_output_0_0) 
                                             << 1U) 
                                            | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0002_output_0_0)))),5);
    bufp->fullCData(oldp+68079,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5462___05F_output_0_0) 
                                  << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5461___05F_output_0_0) 
                                             << 3U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5464___05F_output_0_0) 
                                                << 2U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0002_output_0_0) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0003_output_0_0)))))),5);
    bufp->fullCData(oldp+68080,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5458___05F_output_0_0) 
                                  << 2U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0004_output_0_0) 
                                             << 1U) 
                                            | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5465___05F_output_0_0)))),5);
    bufp->fullCData(oldp+68081,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5465___05F_output_0_0) 
                                  << 4U) | ((8U & ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5457___05F__DOT__genblk1__DOT__lut_5__DOT__s2) 
                                                   << 3U)) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5458___05F_output_0_0) 
                                                << 2U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0004_output_0_0) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0005_output_0_0)))))),5);
    bufp->fullCData(oldp+68082,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5458___05F_output_0_0) 
                                  << 5U) | ((0x10U 
                                             & ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5457___05F__DOT__genblk1__DOT__lut_5__DOT__s2) 
                                                << 4U)) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5455___05F_output_0_0) 
                                                << 3U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5465___05F_output_0_0) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0004_output_0_0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0005_output_0_0))))))),6);
    bufp->fullCData(oldp+68083,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0007_output_0_0) 
                                  << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5453___05F_output_0_0) 
                                             << 3U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5455___05F_output_0_0) 
                                                << 2U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5466___05F_output_0_0) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0006_output_0_0)))))),5);
    bufp->fullCData(oldp+68084,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5453___05F_output_0_0) 
                                  << 5U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5455___05F_output_0_0) 
                                             << 4U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5466___05F_output_0_0) 
                                                << 3U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0006_output_0_0) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0007_output_0_0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5510___05F_output_0_0))))))),6);
    bufp->fullCData(oldp+68085,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5468___05F_output_0_0) 
                                  << 5U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5456___05F_output_0_0) 
                                             << 4U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5466___05F_output_0_0) 
                                                << 3U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5473___05F_output_0_0) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0009_output_0_0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5470___05F_output_0_0))))))),6);
    bufp->fullCData(oldp+68086,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5474___05F_output_0_0) 
                                  << 3U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5450___05F_output_0_0) 
                                             << 1U) 
                                            | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0011_output_0_0)))),5);
    bufp->fullCData(oldp+68087,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5475___05F_output_0_0) 
                                  << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5474___05F_output_0_0) 
                                             << 3U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5450___05F_output_0_0) 
                                                << 2U) 
                                               | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0011_output_0_0))))),5);
    bufp->fullCData(oldp+68088,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5450___05F_output_0_0) 
                                  << 5U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0012_output_0_0) 
                                             << 4U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5478___05F_output_0_0) 
                                                << 3U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0011_output_0_0) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5474___05F_output_0_0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5475___05F_output_0_0))))))),6);
    bufp->fullCData(oldp+68089,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5479___05F_output_0_0) 
                                  << 3U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0014_output_0_0) 
                                             << 1U) 
                                            | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5449___05F_output_0_0)))),5);
    bufp->fullCData(oldp+68090,(((0x20U & ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5445___05F__DOT__genblk1__DOT__lut_5__DOT__s1) 
                                           << 5U)) 
                                 | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5481___05F_output_0_0) 
                                     << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5483___05F_output_0_0) 
                                                << 3U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0019_output_0_0) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0049_output_0_0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5446___05F_output_0_0))))))),6);
    bufp->fullCData(oldp+68091,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0050_output_0_0) 
                                  << 5U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0020_output_0_0) 
                                             << 4U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1784_li1784_output_0_0) 
                                                << 3U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0049_output_0_0) 
                                                   << 2U) 
                                                  | ((2U 
                                                      & ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5445___05F__DOT__genblk1__DOT__lut_5__DOT__s1) 
                                                         << 1U)) 
                                                     | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0019_output_0_0))))))),6);
    bufp->fullCData(oldp+68092,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5485___05F_output_0_0) 
                                  << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0051_output_0_0) 
                                             << 3U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5487___05F_output_0_0) 
                                                << 2U) 
                                               | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0021_output_0_0))))),5);
    bufp->fullCData(oldp+68093,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5487___05F_output_0_0) 
                                  << 5U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0052_output_0_0) 
                                             << 4U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0022_output_0_0) 
                                                << 3U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0051_output_0_0) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5485___05F_output_0_0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0021_output_0_0))))))),6);
    bufp->fullCData(oldp+68094,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0053_output_0_0) 
                                  << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5488___05F_output_0_0) 
                                             << 2U) 
                                            | ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0023_output_0_0) 
                                               << 1U)))),5);
    bufp->fullCData(oldp+68095,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0053_output_0_0) 
                                  << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5490___05F_output_0_0) 
                                             << 3U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5488___05F_output_0_0) 
                                                << 2U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0023_output_0_0) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0024_output_0_0)))))),5);
    bufp->fullCData(oldp+68096,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0023_output_0_0) 
                                  << 5U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0053_output_0_0) 
                                             << 4U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5490___05F_output_0_0) 
                                                << 3U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0024_output_0_0) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0025_output_0_0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5488___05F_output_0_0))))))),6);
    bufp->fullCData(oldp+68097,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0025_output_0_0) 
                                  << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0026_output_0_0) 
                                             << 3U) 
                                            | ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5491___05F_output_0_0) 
                                               << 1U)))),5);
    bufp->fullCData(oldp+68098,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0025_output_0_0) 
                                  << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0026_output_0_0) 
                                             << 3U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5491___05F_output_0_0) 
                                                << 1U) 
                                               | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0027_output_0_0))))),5);
    bufp->fullCData(oldp+68099,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4490___05F_output_0_0) 
                                  << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4491___05F_output_0_0) 
                                             << 3U) 
                                            | ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0056_output_0_0) 
                                               << 2U)))),5);
    bufp->fullCData(oldp+68100,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4490___05F_output_0_0) 
                                  << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4491___05F_output_0_0) 
                                             << 3U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0056_output_0_0) 
                                                << 2U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4493___05F_output_0_0) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0057_output_0_0)))))),5);
    bufp->fullCData(oldp+68101,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4487___05F_output_0_0) 
                                  << 3U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0058_output_0_0) 
                                             << 2U) 
                                            | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4494___05F_output_0_0)))),5);
    bufp->fullCData(oldp+68102,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4500___05F_output_0_0) 
                                  << 5U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4496___05F_output_0_0) 
                                             << 4U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4498___05F_output_0_0) 
                                                << 3U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0058_output_0_0) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4487___05F_output_0_0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4494___05F_output_0_0))))))),6);
    bufp->fullCData(oldp+68103,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4485___05F_output_0_0) 
                                  << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0062_output_0_0) 
                                             << 3U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4499___05F_output_0_0) 
                                                << 1U) 
                                               | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4501___05F_output_0_0))))),5);
    bufp->fullCData(oldp+68104,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4499___05F_output_0_0) 
                                  << 5U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4485___05F_output_0_0) 
                                             << 4U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4501___05F_output_0_0) 
                                                << 3U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0063_output_0_0) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0062_output_0_0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4486___05F_output_0_0))))))),6);
    bufp->fullCData(oldp+68105,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4502___05F_output_0_0) 
                                  << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4504___05F_output_0_0) 
                                             << 2U) 
                                            | ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0064_output_0_0) 
                                               << 1U)))),5);
    bufp->fullCData(oldp+68106,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4504___05F_output_0_0) 
                                  << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0064_output_0_0) 
                                             << 3U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4506___05F_output_0_0) 
                                                << 2U) 
                                               | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4502___05F_output_0_0))))),5);
    bufp->fullCData(oldp+68107,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4507___05F_output_0_0) 
                                  << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0066_output_0_0) 
                                             << 3U) 
                                            | ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4484___05F_output_0_0) 
                                               << 1U)))),5);
    bufp->fullCData(oldp+68108,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4512___05F_output_0_0) 
                                  << 3U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0070_output_0_0) 
                                             << 1U) 
                                            | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4511___05F_output_0_0)))),5);
    bufp->fullCData(oldp+68109,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0070_output_0_0) 
                                  << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4512___05F_output_0_0) 
                                             << 3U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4513___05F_output_0_0) 
                                                << 1U) 
                                               | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4511___05F_output_0_0))))),5);
    bufp->fullCData(oldp+68110,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0102_output_0_0) 
                                  << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0072_output_0_0) 
                                             << 3U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4515___05F_output_0_0) 
                                                << 2U) 
                                               | ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4514___05F_output_0_0) 
                                                  << 1U))))),5);
    bufp->fullCData(oldp+68111,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0103_output_0_0) 
                                  << 5U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0073_output_0_0) 
                                             << 4U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4514___05F_output_0_0) 
                                                << 3U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0102_output_0_0) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0072_output_0_0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4515___05F_output_0_0))))))),6);
    bufp->fullCData(oldp+68112,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4517___05F_output_0_0) 
                                  << 3U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4516___05F_output_0_0) 
                                             << 2U) 
                                            | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0074_output_0_0)))),5);
    bufp->fullCData(oldp+68113,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0105_output_0_0) 
                                  << 5U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0075_output_0_0) 
                                             << 4U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4516___05F_output_0_0) 
                                                << 3U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0104_output_0_0) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4517___05F_output_0_0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0074_output_0_0))))))),6);
    bufp->fullCData(oldp+68114,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4519___05F_output_0_0) 
                                  << 3U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0106_output_0_0) 
                                             << 2U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4518___05F_output_0_0) 
                                                << 1U) 
                                               | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0076_output_0_0))))),5);
    bufp->fullCData(oldp+68115,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0106_output_0_0) 
                                  << 5U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0077_output_0_0) 
                                             << 4U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4518___05F_output_0_0) 
                                                << 3U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0076_output_0_0) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4519___05F_output_0_0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0107_output_0_0))))))),6);
    bufp->fullCData(oldp+68116,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4520___05F_output_0_0) 
                                  << 1U) | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0078_output_0_0))),5);
    bufp->fullCData(oldp+68117,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0078_output_0_0) 
                                  << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0079_output_0_0) 
                                             << 2U) 
                                            | ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4520___05F_output_0_0) 
                                               << 1U)))),5);
    bufp->fullCData(oldp+68118,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0078_output_0_0) 
                                  << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0080_output_0_0) 
                                             << 3U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0079_output_0_0) 
                                                << 2U) 
                                               | ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4520___05F_output_0_0) 
                                                  << 1U))))),5);
    bufp->fullCData(oldp+68119,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0081_output_0_0) 
                                  << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0080_output_0_0) 
                                             << 3U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0079_output_0_0) 
                                                << 2U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4520___05F_output_0_0) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0078_output_0_0)))))),5);
    bufp->fullCData(oldp+68120,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0114_output_0_0) 
                                  << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4364___05F_output_0_0) 
                                             << 3U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0113_output_0_0) 
                                                << 2U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2066_li2066_output_0_0) 
                                                   << 1U) 
                                                  | (1U 
                                                     & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4365___05F__DOT__genblk1__DOT__lut_5__DOT__s1))))))),5);
    bufp->fullCData(oldp+68121,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0115_output_0_0) 
                                  << 5U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4382___05F_output_0_0) 
                                             << 4U) 
                                            | ((8U 
                                                & ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4366___05F__DOT__genblk1__DOT__lut_5__DOT__s1) 
                                                   << 3U)) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4381___05F_output_0_0) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4420___05F_output_0_0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4377___05F_output_0_0))))))),6);
    bufp->fullCData(oldp+68122,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0120_output_0_0) 
                                  << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4389___05F_output_0_0) 
                                             << 3U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0121_output_0_0) 
                                                << 2U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4390___05F_output_0_0) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4388___05F_output_0_0)))))),5);
    bufp->fullCData(oldp+68123,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0122_output_0_0) 
                                  << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4355___05F_output_0_0) 
                                             << 3U) 
                                            | ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4391___05F_output_0_0) 
                                               << 2U)))),5);
    bufp->fullCData(oldp+68124,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4391___05F_output_0_0) 
                                  << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4355___05F_output_0_0) 
                                             << 3U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4392___05F_output_0_0) 
                                                << 2U) 
                                               | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0122_output_0_0))))),5);
    bufp->fullCData(oldp+68125,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0157_output_0_0) 
                                  << 5U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4394___05F_output_0_0) 
                                             << 4U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4344___05F_output_0_0) 
                                                << 3U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4359___05F_output_0_0) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4360___05F_output_0_0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0127_output_0_0))))))),6);
    bufp->fullCData(oldp+68126,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0158_output_0_0) 
                                  << 3U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4395___05F_output_0_0) 
                                             << 2U) 
                                            | ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0128_output_0_0) 
                                               << 1U)))),5);
    bufp->fullCData(oldp+68127,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0158_output_0_0) 
                                  << 5U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4397___05F_output_0_0) 
                                             << 4U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0129_output_0_0) 
                                                << 3U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0159_output_0_0) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4395___05F_output_0_0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0128_output_0_0))))))),6);
    bufp->fullCData(oldp+68128,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0160_output_0_0) 
                                  << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0130_output_0_0) 
                                             << 2U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4398___05F_output_0_0) 
                                                << 1U) 
                                               | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4399___05F_output_0_0))))),5);
    bufp->fullCData(oldp+68129,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0130_output_0_0) 
                                  << 5U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0160_output_0_0) 
                                             << 4U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0161_output_0_0) 
                                                << 3U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4399___05F_output_0_0) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4398___05F_output_0_0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0131_output_0_0))))))),6);
    bufp->fullCData(oldp+68130,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4400___05F_output_0_0) 
                                  << 2U) | ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0132_output_0_0) 
                                            << 1U))),5);
    bufp->fullCData(oldp+68131,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4400___05F_output_0_0) 
                                  << 2U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0132_output_0_0) 
                                             << 1U) 
                                            | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0133_output_0_0)))),5);
    bufp->fullCData(oldp+68132,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0133_output_0_0) 
                                  << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0134_output_0_0) 
                                             << 3U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4400___05F_output_0_0) 
                                                << 2U) 
                                               | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0132_output_0_0))))),5);
    bufp->fullCData(oldp+68133,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0133_output_0_0) 
                                  << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0134_output_0_0) 
                                             << 3U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4400___05F_output_0_0) 
                                                << 2U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0135_output_0_0) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0132_output_0_0)))))),5);
    bufp->fullCData(oldp+68134,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0164_output_0_0) 
                                  << 3U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3452___05F_output_0_0) 
                                             << 1U) 
                                            | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3455___05F_output_0_0)))),5);
    bufp->fullCData(oldp+68135,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3452___05F_output_0_0) 
                                  << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0164_output_0_0) 
                                             << 3U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3451___05F_output_0_0) 
                                                << 2U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3455___05F_output_0_0) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0165_output_0_0)))))),5);
    bufp->fullCData(oldp+68136,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3462___05F_output_0_0) 
                                  << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0168_output_0_0) 
                                             << 3U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3461___05F_output_0_0) 
                                                << 2U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3460___05F_output_0_0) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3456___05F_output_0_0)))))),5);
    bufp->fullCData(oldp+68137,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3463___05F_output_0_0) 
                                  << 5U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3462___05F_output_0_0) 
                                             << 4U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0168_output_0_0) 
                                                << 3U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3461___05F_output_0_0) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3456___05F_output_0_0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3460___05F_output_0_0))))))),6);
    bufp->fullCData(oldp+68138,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3465___05F_output_0_0) 
                                  << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0170_output_0_0) 
                                             << 2U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3466___05F_output_0_0) 
                                                << 1U) 
                                               | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3464___05F_output_0_0))))),5);
    bufp->fullCData(oldp+68139,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3464___05F_output_0_0) 
                                  << 5U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3465___05F_output_0_0) 
                                             << 4U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3448___05F_output_0_0) 
                                                << 3U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0171_output_0_0) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0170_output_0_0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3466___05F_output_0_0))))))),6);
    bufp->fullCData(oldp+68140,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3467___05F_output_0_0) 
                                  << 3U) | ((4U & ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3449___05F__DOT__genblk1__DOT__lut_5__DOT__s2) 
                                                   << 2U)) 
                                            | ((2U 
                                                & ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3447___05F__DOT__genblk1__DOT__lut_5__DOT__s1) 
                                                   << 1U)) 
                                               | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0172_output_0_0))))),5);
    bufp->fullCData(oldp+68141,(((0x20U & ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3447___05F__DOT__genblk1__DOT__lut_5__DOT__s1) 
                                           << 5U)) 
                                 | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3446___05F_output_0_0) 
                                     << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3467___05F_output_0_0) 
                                                << 3U) 
                                               | ((4U 
                                                   & ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3449___05F__DOT__genblk1__DOT__lut_5__DOT__s2) 
                                                      << 2U)) 
                                                  | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0173_output_0_0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0172_output_0_0))))))),6);
    bufp->fullCData(oldp+68142,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3470___05F_output_0_0) 
                                  << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0176_output_0_0) 
                                             << 3U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3472___05F_output_0_0) 
                                                << 2U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3471___05F_output_0_0) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3468___05F_output_0_0)))))),5);
    bufp->fullCData(oldp+68143,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0210_output_0_0) 
                                  << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0181_output_0_0) 
                                             << 3U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0180_output_0_0) 
                                                << 2U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3477___05F_output_0_0) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0211_output_0_0)))))),5);
    bufp->fullCData(oldp+68144,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0182_output_0_0) 
                                  << 3U) | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3478___05F_output_0_0))),5);
    bufp->fullCData(oldp+68145,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0183_output_0_0) 
                                  << 5U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3479___05F_output_0_0) 
                                             << 4U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0212_output_0_0) 
                                                << 3U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0182_output_0_0) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3478___05F_output_0_0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0213_output_0_0))))))),6);
    bufp->fullCData(oldp+68146,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0214_output_0_0) 
                                  << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3480___05F_output_0_0) 
                                             << 3U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3481___05F_output_0_0) 
                                                << 2U) 
                                               | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0184_output_0_0))))),5);
    bufp->fullCData(oldp+68147,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0214_output_0_0) 
                                  << 5U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3481___05F_output_0_0) 
                                             << 4U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0185_output_0_0) 
                                                << 3U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0215_output_0_0) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3480___05F_output_0_0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0184_output_0_0))))))),6);
    bufp->fullCData(oldp+68148,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3482___05F_output_0_0) 
                                  << 3U) | ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0186_output_0_0) 
                                            << 2U))),5);
    bufp->fullCData(oldp+68149,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3482___05F_output_0_0) 
                                  << 3U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0186_output_0_0) 
                                             << 2U) 
                                            | ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0187_output_0_0) 
                                               << 1U)))),5);
    bufp->fullCData(oldp+68150,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0188_output_0_0) 
                                  << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3482___05F_output_0_0) 
                                             << 3U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0186_output_0_0) 
                                                << 2U) 
                                               | ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0187_output_0_0) 
                                                  << 1U))))),5);
    bufp->fullCData(oldp+68151,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0188_output_0_0) 
                                  << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3482___05F_output_0_0) 
                                             << 3U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0186_output_0_0) 
                                                << 2U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0187_output_0_0) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0189_output_0_0)))))),5);
    bufp->fullCData(oldp+68152,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3448___05F_output_0_0) 
                                  << 3U) | ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0171_output_0_0) 
                                            << 2U))),5);
    bufp->fullCData(oldp+68153,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3460___05F_output_0_0) 
                                  << 5U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3462___05F_output_0_0) 
                                             << 4U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3463___05F_output_0_0) 
                                                << 3U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0168_output_0_0) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3456___05F_output_0_0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3461___05F_output_0_0))))))),6);
    bufp->fullCData(oldp+68154,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0170_output_0_0) 
                                  << 5U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3465___05F_output_0_0) 
                                             << 4U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3448___05F_output_0_0) 
                                                << 3U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0171_output_0_0) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3464___05F_output_0_0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3466___05F_output_0_0))))))),6);
    bufp->fullCData(oldp+68155,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0212_output_0_0) 
                                  << 5U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0181_output_0_0) 
                                             << 4U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0210_output_0_0) 
                                                << 3U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3477___05F_output_0_0) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0180_output_0_0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0211_output_0_0))))))),6);
    bufp->fullCData(oldp+68156,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0212_output_0_0) 
                                  << 5U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0182_output_0_0) 
                                             << 4U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0183_output_0_0) 
                                                << 3U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0213_output_0_0) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3478___05F_output_0_0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3479___05F_output_0_0))))))),6);
    bufp->fullCData(oldp+68157,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0212_output_0_0) 
                                  << 2U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3479___05F_output_0_0) 
                                             << 1U) 
                                            | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0213_output_0_0)))),5);
    bufp->fullCData(oldp+68158,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0185_output_0_0) 
                                  << 5U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0215_output_0_0) 
                                             << 4U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0184_output_0_0) 
                                                << 3U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3481___05F_output_0_0) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0214_output_0_0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3480___05F_output_0_0))))))),6);
    bufp->fullCData(oldp+68159,((3U & ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0208_output_0_0)
                                        ? ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3494___05F__DOT__genblk1__DOT__lut_5__DOT__s2) 
                                           >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3494___05F__DOT__genblk1__DOT__lut_5__DOT__s2)))),2);
    bufp->fullCData(oldp+68160,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0114_output_0_0) 
                                  << 4U) | ((8U & ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4365___05F__DOT__genblk1__DOT__lut_5__DOT__s1) 
                                                   << 3U)) 
                                            | ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4364___05F_output_0_0) 
                                               << 1U)))),5);
    bufp->fullCData(oldp+68161,((3U & ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0140_output_0_0)
                                        ? ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4369___05F__DOT__genblk1__DOT__lut_5__DOT__s3) 
                                           >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4369___05F__DOT__genblk1__DOT__lut_5__DOT__s3)))),2);
    bufp->fullIData(oldp+68162,(((1U & ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0140_output_0_0)
                                         ? ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4369___05F__DOT__genblk1__DOT__lut_5__DOT__s3) 
                                            >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4369___05F__DOT__genblk1__DOT__lut_5__DOT__s3)))
                                  ? 0x107331f7U : 0xef8cce08U)),32);
    bufp->fullCData(oldp+68163,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0111_output_0_0) 
                                  << 3U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4345___05F_output_0_0) 
                                             << 2U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4346___05F_output_0_0) 
                                                << 1U) 
                                               | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4348___05F_output_0_0))))),5);
    bufp->fullCData(oldp+68164,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4370___05F_output_0_0) 
                                  << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0111_output_0_0) 
                                             << 3U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4362___05F_output_0_0) 
                                                << 2U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0110_output_0_0) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4368___05F_output_0_0)))))),5);
    bufp->fullCData(oldp+68165,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0114_output_0_0) 
                                  << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4364___05F_output_0_0) 
                                             << 3U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0113_output_0_0) 
                                                << 2U) 
                                               | (1U 
                                                  & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4365___05F__DOT__genblk1__DOT__lut_5__DOT__s1)))))),5);
    bufp->fullCData(oldp+68166,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4391___05F_output_0_0) 
                                  << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4355___05F_output_0_0) 
                                             << 3U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4392___05F_output_0_0) 
                                                << 2U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0123_output_0_0) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0122_output_0_0)))))),5);
    bufp->fullCData(oldp+68167,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4344___05F_output_0_0) 
                                  << 5U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4394___05F_output_0_0) 
                                             << 4U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0157_output_0_0) 
                                                << 3U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4359___05F_output_0_0) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4360___05F_output_0_0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0127_output_0_0))))))),6);
    bufp->fullCData(oldp+68168,((3U & ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0157_output_0_0)
                                        ? ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4396___05F__DOT__genblk1__DOT__lut_5__DOT__s2) 
                                           >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4396___05F__DOT__genblk1__DOT__lut_5__DOT__s2)))),2);
    bufp->fullCData(oldp+68169,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0128_output_0_0) 
                                  << 5U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4397___05F_output_0_0) 
                                             << 4U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0129_output_0_0) 
                                                << 3U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0159_output_0_0) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0158_output_0_0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4395___05F_output_0_0))))))),6);
    bufp->fullCData(oldp+68170,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0158_output_0_0) 
                                  << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0159_output_0_0) 
                                             << 1U) 
                                            | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4397___05F_output_0_0)))),5);
    bufp->fullCData(oldp+68171,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0161_output_0_0) 
                                  << 5U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0131_output_0_0) 
                                             << 4U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4399___05F_output_0_0) 
                                                << 3U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0130_output_0_0) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4398___05F_output_0_0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0160_output_0_0))))))),6);
    bufp->fullCData(oldp+68172,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4490___05F_output_0_0) 
                                  << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0056_output_0_0) 
                                             << 3U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0057_output_0_0) 
                                                << 2U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4493___05F_output_0_0) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4491___05F_output_0_0)))))),5);
    bufp->fullCData(oldp+68173,((3U & ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0091_output_0_0)
                                        ? ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4495___05F__DOT__genblk1__DOT__lut_5__DOT__s3) 
                                           >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4495___05F__DOT__genblk1__DOT__lut_5__DOT__s3)))),2);
    bufp->fullCData(oldp+68174,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4498___05F_output_0_0) 
                                  << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4496___05F_output_0_0) 
                                             << 3U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4487___05F_output_0_0) 
                                                << 2U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0058_output_0_0) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4494___05F_output_0_0)))))),5);
    bufp->fullCData(oldp+68175,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0061_output_0_0) 
                                  << 3U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4500___05F_output_0_0) 
                                             << 2U) 
                                            | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4496___05F_output_0_0)))),5);
    bufp->fullCData(oldp+68176,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4501___05F_output_0_0) 
                                  << 5U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0062_output_0_0) 
                                             << 4U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4486___05F_output_0_0) 
                                                << 3U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0063_output_0_0) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4485___05F_output_0_0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4499___05F_output_0_0))))))),6);
    bufp->fullCData(oldp+68177,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4504___05F_output_0_0) 
                                  << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0064_output_0_0) 
                                             << 3U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4506___05F_output_0_0) 
                                                << 2U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0065_output_0_0) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4502___05F_output_0_0)))))),5);
    bufp->fullCData(oldp+68178,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0066_output_0_0) 
                                  << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4483___05F_output_0_0) 
                                             << 3U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4507___05F_output_0_0) 
                                                << 2U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4508___05F_output_0_0) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4484___05F_output_0_0)))))),5);
    bufp->fullCData(oldp+68179,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0071_output_0_0) 
                                  << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4512___05F_output_0_0) 
                                             << 3U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4513___05F_output_0_0) 
                                                << 2U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0070_output_0_0) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4511___05F_output_0_0)))))),5);
    bufp->fullCData(oldp+68180,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4514___05F_output_0_0) 
                                  << 5U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0103_output_0_0) 
                                             << 4U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0072_output_0_0) 
                                                << 3U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0073_output_0_0) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0102_output_0_0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4515___05F_output_0_0))))))),6);
    bufp->fullCData(oldp+68181,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4515___05F_output_0_0) 
                                  << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0102_output_0_0) 
                                             << 3U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0104_output_0_0) 
                                                << 2U) 
                                               | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0103_output_0_0))))),5);
    bufp->fullCData(oldp+68182,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0105_output_0_0) 
                                  << 5U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0104_output_0_0) 
                                             << 4U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4516___05F_output_0_0) 
                                                << 3U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0074_output_0_0) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4517___05F_output_0_0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0075_output_0_0))))))),6);
    bufp->fullCData(oldp+68183,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4515___05F_output_0_0) 
                                  << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0102_output_0_0) 
                                             << 3U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0103_output_0_0) 
                                                << 2U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0104_output_0_0) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0105_output_0_0)))))),5);
    bufp->fullCData(oldp+68184,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0106_output_0_0) 
                                  << 5U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4519___05F_output_0_0) 
                                             << 4U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0107_output_0_0) 
                                                << 3U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0076_output_0_0) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0077_output_0_0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4518___05F_output_0_0))))))),6);
    bufp->fullCData(oldp+68185,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4484___05F_output_0_0) 
                                  << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4507___05F_output_0_0) 
                                             << 2U) 
                                            | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0066_output_0_0)))),5);
    bufp->fullCData(oldp+68186,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4487___05F_output_0_0) 
                                  << 2U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0058_output_0_0) 
                                             << 1U) 
                                            | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4494___05F_output_0_0)))),5);
    bufp->fullCData(oldp+68187,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5454___05F_output_0_0) 
                                  << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5455___05F_output_0_0) 
                                             << 3U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0008_output_0_0) 
                                                << 2U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5453___05F_output_0_0) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0007_output_0_0)))))),5);
    bufp->fullCData(oldp+68188,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0009_output_0_0) 
                                  << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5468___05F_output_0_0) 
                                             << 3U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5470___05F_output_0_0) 
                                                << 2U) 
                                               | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0010_output_0_0))))),5);
    bufp->fullCData(oldp+68189,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5455___05F_output_0_0) 
                                  << 5U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0007_output_0_0) 
                                             << 4U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5454___05F_output_0_0) 
                                                << 3U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5453___05F_output_0_0) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0008_output_0_0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0006_output_0_0))))))),6);
    bufp->fullCData(oldp+68190,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5475___05F_output_0_0) 
                                  << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5478___05F_output_0_0) 
                                             << 3U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0012_output_0_0) 
                                                << 2U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1777_li1777_output_0_0) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0013_output_0_0)))))),5);
    bufp->fullCData(oldp+68191,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0014_output_0_0) 
                                  << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5449___05F_output_0_0) 
                                             << 3U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5448___05F_output_0_0) 
                                                << 2U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5480___05F_output_0_0) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5479___05F_output_0_0)))))),5);
    bufp->fullCData(oldp+68192,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0050_output_0_0) 
                                  << 5U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0019_output_0_0) 
                                             << 4U) 
                                            | ((8U 
                                                & ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5445___05F__DOT__genblk1__DOT__lut_5__DOT__s1) 
                                                   << 3U)) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1784_li1784_output_0_0) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0020_output_0_0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0049_output_0_0))))))),6);
    bufp->fullCData(oldp+68193,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5481___05F_output_0_0) 
                                  << 4U) | ((8U & ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5445___05F__DOT__genblk1__DOT__lut_5__DOT__s1) 
                                                   << 3U)) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5446___05F_output_0_0) 
                                                << 2U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5483___05F_output_0_0) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5486___05F_output_0_0)))))),5);
    bufp->fullCData(oldp+68194,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5487___05F_output_0_0) 
                                  << 5U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0051_output_0_0) 
                                             << 4U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0022_output_0_0) 
                                                << 3U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0052_output_0_0) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5485___05F_output_0_0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0021_output_0_0))))))),6);
    bufp->fullCData(oldp+68195,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5490___05F_output_0_0) 
                                  << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5488___05F_output_0_0) 
                                             << 3U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0024_output_0_0) 
                                                << 2U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0023_output_0_0) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0053_output_0_0)))))),5);
    bufp->fullCData(oldp+68196,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre___024abc__024131530__024lo0014_output_0_0) 
                                  << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5449___05F_output_0_0) 
                                             << 3U) 
                                            | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5479___05F_output_0_0)))),5);
    bufp->fullBit(oldp+68197,((1U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg))));
    bufp->fullBit(oldp+68198,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 1U)))));
    bufp->fullBit(oldp+68199,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 2U)))));
    bufp->fullBit(oldp+68200,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 3U)))));
    bufp->fullBit(oldp+68201,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 4U)))));
    bufp->fullBit(oldp+68202,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 5U)))));
    bufp->fullBit(oldp+68203,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 6U)))));
    bufp->fullBit(oldp+68204,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 7U)))));
    bufp->fullBit(oldp+68205,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 8U)))));
    bufp->fullBit(oldp+68206,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 9U)))));
    bufp->fullBit(oldp+68207,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0xaU)))));
    bufp->fullBit(oldp+68208,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0xbU)))));
    bufp->fullBit(oldp+68209,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0xcU)))));
    bufp->fullBit(oldp+68210,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0xdU)))));
    bufp->fullBit(oldp+68211,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0xeU)))));
    bufp->fullBit(oldp+68212,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0xfU)))));
    bufp->fullBit(oldp+68213,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0x10U)))));
    bufp->fullBit(oldp+68214,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0x11U)))));
    bufp->fullBit(oldp+68215,((1U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg))));
    bufp->fullBit(oldp+68216,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 1U)))));
    bufp->fullBit(oldp+68217,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 2U)))));
    bufp->fullBit(oldp+68218,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 3U)))));
    bufp->fullBit(oldp+68219,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 4U)))));
    bufp->fullBit(oldp+68220,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 5U)))));
    bufp->fullBit(oldp+68221,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 6U)))));
    bufp->fullBit(oldp+68222,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 7U)))));
    bufp->fullBit(oldp+68223,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 8U)))));
    bufp->fullBit(oldp+68224,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 9U)))));
    bufp->fullBit(oldp+68225,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0xaU)))));
    bufp->fullBit(oldp+68226,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0xbU)))));
    bufp->fullBit(oldp+68227,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0xcU)))));
    bufp->fullBit(oldp+68228,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0xdU)))));
    bufp->fullBit(oldp+68229,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0xeU)))));
    bufp->fullBit(oldp+68230,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0xfU)))));
    bufp->fullBit(oldp+68231,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0x10U)))));
    bufp->fullBit(oldp+68232,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0x11U)))));
    bufp->fullBit(oldp+68233,((1U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg))));
    bufp->fullBit(oldp+68234,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 1U)))));
    bufp->fullBit(oldp+68235,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 2U)))));
    bufp->fullBit(oldp+68236,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 3U)))));
    bufp->fullBit(oldp+68237,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 4U)))));
    bufp->fullBit(oldp+68238,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 5U)))));
    bufp->fullBit(oldp+68239,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 6U)))));
    bufp->fullBit(oldp+68240,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 7U)))));
    bufp->fullBit(oldp+68241,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 8U)))));
    bufp->fullBit(oldp+68242,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 9U)))));
    bufp->fullBit(oldp+68243,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0xaU)))));
    bufp->fullBit(oldp+68244,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0xbU)))));
    bufp->fullBit(oldp+68245,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0xcU)))));
    bufp->fullBit(oldp+68246,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0xdU)))));
    bufp->fullBit(oldp+68247,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0xeU)))));
    bufp->fullBit(oldp+68248,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0xfU)))));
    bufp->fullBit(oldp+68249,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0x10U)))));
    bufp->fullBit(oldp+68250,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0x11U)))));
    bufp->fullBit(oldp+68251,((1U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg))));
    bufp->fullBit(oldp+68252,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 1U)))));
    bufp->fullBit(oldp+68253,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 2U)))));
    bufp->fullBit(oldp+68254,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 3U)))));
    bufp->fullBit(oldp+68255,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 4U)))));
    bufp->fullBit(oldp+68256,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 5U)))));
    bufp->fullBit(oldp+68257,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 6U)))));
    bufp->fullBit(oldp+68258,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 7U)))));
    bufp->fullBit(oldp+68259,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 8U)))));
    bufp->fullBit(oldp+68260,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 9U)))));
    bufp->fullBit(oldp+68261,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0xaU)))));
    bufp->fullBit(oldp+68262,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0xbU)))));
    bufp->fullBit(oldp+68263,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0xcU)))));
    bufp->fullBit(oldp+68264,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0xdU)))));
    bufp->fullBit(oldp+68265,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0xeU)))));
    bufp->fullBit(oldp+68266,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0xfU)))));
    bufp->fullBit(oldp+68267,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0x10U)))));
    bufp->fullBit(oldp+68268,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0x11U)))));
    bufp->fullBit(oldp+68269,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0x18U)))));
    bufp->fullBit(oldp+68270,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0x1aU)))));
    bufp->fullBit(oldp+68271,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0x19U)))));
    bufp->fullBit(oldp+68272,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0x1cU)))));
    bufp->fullBit(oldp+68273,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0x1bU)))));
    bufp->fullBit(oldp+68274,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0x16U)))));
    bufp->fullBit(oldp+68275,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0x17U)))));
    bufp->fullBit(oldp+68276,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0x15U)))));
    bufp->fullBit(oldp+68277,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0x12U)))));
    bufp->fullBit(oldp+68278,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0x13U)))));
    bufp->fullBit(oldp+68279,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0x14U)))));
    bufp->fullBit(oldp+68280,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0x1dU)))));
    bufp->fullBit(oldp+68281,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0x1eU)))));
    bufp->fullBit(oldp+68282,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0x1fU)))));
    bufp->fullBit(oldp+68283,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0x20U)))));
    bufp->fullBit(oldp+68284,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0x21U)))));
    bufp->fullBit(oldp+68285,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0x22U)))));
    bufp->fullBit(oldp+68286,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0x24U)))));
    bufp->fullBit(oldp+68287,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0x23U)))));
    bufp->fullBit(oldp+68288,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0x25U)))));
    bufp->fullBit(oldp+68289,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0x12U)))));
    bufp->fullBit(oldp+68290,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0x13U)))));
    bufp->fullBit(oldp+68291,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0x14U)))));
    bufp->fullBit(oldp+68292,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0x15U)))));
    bufp->fullBit(oldp+68293,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0x16U)))));
    bufp->fullBit(oldp+68294,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0x17U)))));
    bufp->fullBit(oldp+68295,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0x18U)))));
    bufp->fullBit(oldp+68296,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0x19U)))));
    bufp->fullBit(oldp+68297,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0x1bU)))));
    bufp->fullBit(oldp+68298,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0x1aU)))));
    bufp->fullBit(oldp+68299,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0x1cU)))));
    bufp->fullBit(oldp+68300,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0x1dU)))));
    bufp->fullBit(oldp+68301,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0x1eU)))));
    bufp->fullBit(oldp+68302,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0x1fU)))));
    bufp->fullBit(oldp+68303,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0x22U)))));
    bufp->fullBit(oldp+68304,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0x20U)))));
    bufp->fullBit(oldp+68305,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0x21U)))));
    bufp->fullBit(oldp+68306,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0x23U)))));
    bufp->fullBit(oldp+68307,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0x25U)))));
    bufp->fullBit(oldp+68308,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0x24U)))));
    bufp->fullBit(oldp+68309,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0x22U)))));
    bufp->fullBit(oldp+68310,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0x21U)))));
    bufp->fullBit(oldp+68311,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0x12U)))));
    bufp->fullBit(oldp+68312,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0x13U)))));
    bufp->fullBit(oldp+68313,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0x14U)))));
    bufp->fullBit(oldp+68314,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0x15U)))));
    bufp->fullBit(oldp+68315,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0x16U)))));
    bufp->fullBit(oldp+68316,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0x17U)))));
    bufp->fullBit(oldp+68317,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0x18U)))));
    bufp->fullBit(oldp+68318,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0x1aU)))));
    bufp->fullBit(oldp+68319,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0x19U)))));
    bufp->fullBit(oldp+68320,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0x1dU)))));
    bufp->fullBit(oldp+68321,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0x1bU)))));
    bufp->fullBit(oldp+68322,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0x1cU)))));
    bufp->fullBit(oldp+68323,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0x1fU)))));
    bufp->fullBit(oldp+68324,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0x1eU)))));
    bufp->fullBit(oldp+68325,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0x20U)))));
    bufp->fullBit(oldp+68326,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0x23U)))));
    bufp->fullBit(oldp+68327,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0x24U)))));
    bufp->fullBit(oldp+68328,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0x25U)))));
    bufp->fullBit(oldp+68329,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0x19U)))));
    bufp->fullBit(oldp+68330,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0x1aU)))));
    bufp->fullBit(oldp+68331,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0x1bU)))));
    bufp->fullBit(oldp+68332,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0x1cU)))));
    bufp->fullBit(oldp+68333,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0x1dU)))));
    bufp->fullBit(oldp+68334,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0x15U)))));
    bufp->fullBit(oldp+68335,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0x17U)))));
    bufp->fullBit(oldp+68336,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0x16U)))));
    bufp->fullBit(oldp+68337,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0x12U)))));
    bufp->fullBit(oldp+68338,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0x13U)))));
    bufp->fullBit(oldp+68339,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0x14U)))));
    bufp->fullBit(oldp+68340,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0x18U)))));
    bufp->fullBit(oldp+68341,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0x1eU)))));
    bufp->fullBit(oldp+68342,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0x1fU)))));
    bufp->fullBit(oldp+68343,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0x20U)))));
    bufp->fullBit(oldp+68344,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0x22U)))));
    bufp->fullBit(oldp+68345,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0x21U)))));
    bufp->fullBit(oldp+68346,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0x23U)))));
    bufp->fullBit(oldp+68347,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0x24U)))));
    bufp->fullBit(oldp+68348,((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                             >> 0x25U)))));
    bufp->fullQData(oldp+68349,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg),38);
    bufp->fullQData(oldp+68351,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out),38);
    bufp->fullQData(oldp+68353,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg),38);
    bufp->fullQData(oldp+68355,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out),38);
    bufp->fullQData(oldp+68357,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg),38);
    bufp->fullQData(oldp+68359,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out),38);
    bufp->fullQData(oldp+68361,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg),38);
    bufp->fullQData(oldp+68363,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out),38);
    bufp->fullBit(oldp+68365,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg)))));
    bufp->fullBit(oldp+68366,((1U & (~ (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0xaU))))));
    bufp->fullBit(oldp+68367,((1U & (~ (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0xbU))))));
    bufp->fullBit(oldp+68368,((1U & (~ (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0xcU))))));
    bufp->fullBit(oldp+68369,((1U & (~ (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0xdU))))));
    bufp->fullBit(oldp+68370,((1U & (~ (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0xeU))))));
    bufp->fullBit(oldp+68371,((1U & (~ (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0xfU))))));
    bufp->fullBit(oldp+68372,((1U & (~ (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0x10U))))));
    bufp->fullBit(oldp+68373,((1U & (~ (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0x11U))))));
    bufp->fullBit(oldp+68374,((1U & (~ (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 1U))))));
    bufp->fullBit(oldp+68375,((1U & (~ (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 2U))))));
    bufp->fullBit(oldp+68376,((1U & (~ (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 3U))))));
    bufp->fullBit(oldp+68377,((1U & (~ (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 4U))))));
    bufp->fullBit(oldp+68378,((1U & (~ (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 5U))))));
    bufp->fullBit(oldp+68379,((1U & (~ (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 6U))))));
    bufp->fullBit(oldp+68380,((1U & (~ (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 7U))))));
    bufp->fullBit(oldp+68381,((1U & (~ (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 8U))))));
    bufp->fullBit(oldp+68382,((1U & (~ (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 9U))))));
    bufp->fullBit(oldp+68383,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg)))));
    bufp->fullBit(oldp+68384,((1U & (~ (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0xaU))))));
    bufp->fullBit(oldp+68385,((1U & (~ (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0xbU))))));
    bufp->fullBit(oldp+68386,((1U & (~ (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0xcU))))));
    bufp->fullBit(oldp+68387,((1U & (~ (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0xdU))))));
    bufp->fullBit(oldp+68388,((1U & (~ (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0xeU))))));
    bufp->fullBit(oldp+68389,((1U & (~ (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0xfU))))));
    bufp->fullBit(oldp+68390,((1U & (~ (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0x10U))))));
    bufp->fullBit(oldp+68391,((1U & (~ (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0x11U))))));
    bufp->fullBit(oldp+68392,((1U & (~ (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 1U))))));
    bufp->fullBit(oldp+68393,((1U & (~ (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 2U))))));
    bufp->fullBit(oldp+68394,((1U & (~ (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 3U))))));
    bufp->fullBit(oldp+68395,((1U & (~ (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 4U))))));
    bufp->fullBit(oldp+68396,((1U & (~ (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 5U))))));
    bufp->fullBit(oldp+68397,((1U & (~ (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 6U))))));
    bufp->fullBit(oldp+68398,((1U & (~ (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 7U))))));
    bufp->fullBit(oldp+68399,((1U & (~ (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 8U))))));
    bufp->fullBit(oldp+68400,((1U & (~ (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 9U))))));
    bufp->fullBit(oldp+68401,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg)))));
    bufp->fullBit(oldp+68402,((1U & (~ (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0xaU))))));
    bufp->fullBit(oldp+68403,((1U & (~ (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0xbU))))));
    bufp->fullBit(oldp+68404,((1U & (~ (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0xcU))))));
    bufp->fullBit(oldp+68405,((1U & (~ (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0xdU))))));
    bufp->fullBit(oldp+68406,((1U & (~ (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0xeU))))));
    bufp->fullBit(oldp+68407,((1U & (~ (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0xfU))))));
    bufp->fullBit(oldp+68408,((1U & (~ (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0x10U))))));
    bufp->fullBit(oldp+68409,((1U & (~ (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0x11U))))));
    bufp->fullBit(oldp+68410,((1U & (~ (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 1U))))));
    bufp->fullBit(oldp+68411,((1U & (~ (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 2U))))));
    bufp->fullBit(oldp+68412,((1U & (~ (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 3U))))));
    bufp->fullBit(oldp+68413,((1U & (~ (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 4U))))));
    bufp->fullBit(oldp+68414,((1U & (~ (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 5U))))));
    bufp->fullBit(oldp+68415,((1U & (~ (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 6U))))));
    bufp->fullBit(oldp+68416,((1U & (~ (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 7U))))));
    bufp->fullBit(oldp+68417,((1U & (~ (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 8U))))));
    bufp->fullBit(oldp+68418,((1U & (~ (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 9U))))));
    bufp->fullBit(oldp+68419,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg)))));
    bufp->fullBit(oldp+68420,((1U & (~ (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0xaU))))));
    bufp->fullBit(oldp+68421,((1U & (~ (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0xbU))))));
    bufp->fullBit(oldp+68422,((1U & (~ (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0xcU))))));
    bufp->fullBit(oldp+68423,((1U & (~ (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0xdU))))));
    bufp->fullBit(oldp+68424,((1U & (~ (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0xeU))))));
    bufp->fullBit(oldp+68425,((1U & (~ (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0xfU))))));
    bufp->fullBit(oldp+68426,((1U & (~ (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0x10U))))));
    bufp->fullBit(oldp+68427,((1U & (~ (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0x11U))))));
    bufp->fullBit(oldp+68428,((1U & (~ (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 1U))))));
    bufp->fullBit(oldp+68429,((1U & (~ (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 2U))))));
    bufp->fullBit(oldp+68430,((1U & (~ (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 3U))))));
    bufp->fullBit(oldp+68431,((1U & (~ (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 4U))))));
    bufp->fullBit(oldp+68432,((1U & (~ (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 5U))))));
    bufp->fullBit(oldp+68433,((1U & (~ (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 6U))))));
    bufp->fullBit(oldp+68434,((1U & (~ (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 7U))))));
    bufp->fullBit(oldp+68435,((1U & (~ (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 8U))))));
    bufp->fullBit(oldp+68436,((1U & (~ (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 9U))))));
    bufp->fullSData(oldp+68437,(((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0x12U)))
                                  ? 1U : 0x100U)),16);
    bufp->fullSData(oldp+68438,(((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0x12U)))
                                  ? 0x4114U : 0x1144U)),16);
    bufp->fullCData(oldp+68439,(((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0x12U)))
                                  ? 1U : 0x10U)),8);
    bufp->fullCData(oldp+68440,(((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0x12U)))
                                  ? 0x96U : 0x66U)),8);
    bufp->fullSData(oldp+68441,(((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0x1eU)))
                                  ? 0x6996U : 0x9669U)),16);
    bufp->fullSData(oldp+68442,(((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0x12U)))
                                  ? 1U : 0x10U)),16);
    bufp->fullCData(oldp+68443,(((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0x12U)))
                                  ? 1U : 0x10U)),8);
    bufp->fullSData(oldp+68444,(((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0x23U)))
                                  ? 0x9669U : 0x6996U)),16);
    bufp->fullIData(oldp+68445,(((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0x18U)))
                                  ? 0x317173fU : 0x173f173fU)),32);
    bufp->fullIData(oldp+68446,(((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0x16U)))
                                  ? 0x103050fU : 0x113355ffU)),32);
    bufp->fullIData(oldp+68447,(((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0x13U)))
                                  ? 0x1371177U : 0x137f33ffU)),32);
    bufp->fullIData(oldp+68448,(((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0x19U)))
                                  ? 0x11104440U : 0x22208880U)),32);
    bufp->fullSData(oldp+68449,(((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0x24U)))
                                  ? 1U : 2U)),16);
    bufp->fullCData(oldp+68450,(((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0x24U)))
                                  ? 1U : 2U)),8);
    bufp->fullCData(oldp+68451,(((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0x24U)))
                                  ? 1U : 2U)),4);
    bufp->fullCData(oldp+68452,(((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0x24U)))
                                  ? 1U : 2U)),2);
    bufp->fullSData(oldp+68453,(((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0x15U)))
                                  ? 0xd22dU : 0x4bb4U)),16);
    bufp->fullCData(oldp+68454,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3452___05F__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+68455,(((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0x19U)))
                                  ? 1U : 2U)),2);
    bufp->fullSData(oldp+68456,(((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0x1aU)))
                                  ? 0x8e71U : 0x718eU)),16);
    bufp->fullIData(oldp+68457,(((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0x18U)))
                                  ? 0xfff0f990U : 0xfff0f660U)),32);
    bufp->fullIData(oldp+68458,(((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0x1cU)))
                                  ? 0xa9aa95a5U : 0x56556a5aU)),32);
    bufp->fullSData(oldp+68459,(((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0x21U)))
                                  ? 1U : 2U)),16);
    bufp->fullCData(oldp+68460,(((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0x21U)))
                                  ? 1U : 2U)),8);
    bufp->fullCData(oldp+68461,(((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0x21U)))
                                  ? 1U : 2U)),4);
    bufp->fullCData(oldp+68462,(((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0x21U)))
                                  ? 1U : 2U)),2);
    bufp->fullSData(oldp+68463,(((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0x25U)))
                                  ? 0xe000U : 0x8000U)),16);
    bufp->fullCData(oldp+68464,(((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0x24U)))
                                  ? 0x41U : 0x14U)),8);
    bufp->fullCData(oldp+68465,(((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0x21U)))
                                  ? 9U : 6U)),8);
    bufp->fullCData(oldp+68466,(((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0x21U)))
                                  ? 9U : 6U)),4);
    bufp->fullCData(oldp+68467,(((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0x19U)))
                                  ? 0x21U : 0x12U)),8);
    bufp->fullSData(oldp+68468,(((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0x12U)))
                                  ? 0x107U : 0x707U)),16);
    bufp->fullIData(oldp+68469,(((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0x18U)))
                                  ? 0x3020c08U : 0x3020c080U)),32);
    bufp->fullIData(oldp+68470,(((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0x19U)))
                                  ? 0x1150555U : 0x577f5fffU)),32);
    bufp->fullSData(oldp+68471,(((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0x1dU)))
                                  ? 0xffe8U : 0xe800U)),16);
    bufp->fullCData(oldp+68472,(((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0x22U)))
                                  ? 1U : 2U)),4);
    bufp->fullCData(oldp+68473,(((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0x22U)))
                                  ? 1U : 2U)),2);
    bufp->fullSData(oldp+68474,(((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0x22U)))
                                  ? 0xee8eU : 0x8e88U)),16);
    bufp->fullCData(oldp+68475,(((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0x25U)))
                                  ? 0x21U : 0x12U)),8);
    bufp->fullSData(oldp+68476,(((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0x15U)))
                                  ? 1U : 0x100U)),16);
    bufp->fullSData(oldp+68477,(((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0x16U)))
                                  ? 0x401U : 0x104U)),16);
    bufp->fullIData(oldp+68478,(((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0x1bU)))
                                  ? 0x12221112U : 0x21112221U)),32);
    bufp->fullSData(oldp+68479,(((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0x1dU)))
                                  ? 0x21U : 0x12U)),16);
    bufp->fullCData(oldp+68480,(((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0x1dU)))
                                  ? 0x21U : 0x12U)),8);
    bufp->fullIData(oldp+68481,(((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0x1cU)))
                                  ? 0x618U : 0x1860U)),32);
    bufp->fullIData(oldp+68482,(((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0x1aU)))
                                  ? 0x59a6a659U : 0x9a65659aU)),32);
    bufp->fullIData(oldp+68483,(((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0x1cU)))
                                  ? 0x6e71effU : 0x189f78ffU)),32);
    bufp->fullSData(oldp+68484,(((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0x20U)))
                                  ? 0x906U : 0x609U)),16);
    bufp->fullIData(oldp+68485,(((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0x24U)))
                                  ? 0xffeeeaa8U : 0xeeaaa880U)),32);
    bufp->fullSData(oldp+68486,(((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0x1cU)))
                                  ? 0x1221U : 0x2112U)),16);
    bufp->fullCData(oldp+68487,(((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0x22U)))
                                  ? 0xaU : 8U)),4);
    bufp->fullSData(oldp+68488,(((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0x18U)))
                                  ? 0xbfbbU : 0x2a22U)),16);
    bufp->fullSData(oldp+68489,(((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0x19U)))
                                  ? 0xfce8U : 0xe8c0U)),16);
    bufp->fullIData(oldp+68490,(((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0x1bU)))
                                  ? 0x1100220U : 0x4400880U)),32);
    bufp->fullSData(oldp+68491,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4478___05F__DOT__genblk1__DOT__lut_6__DOT__s4),16);
    bufp->fullIData(oldp+68492,(((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0x1dU)))
                                  ? 0x1051555U : 0x575f7fffU)),32);
    bufp->fullSData(oldp+68493,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4480___05F__DOT__genblk1__DOT__lut_6__DOT__s4),16);
    bufp->fullCData(oldp+68494,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4480___05F__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullSData(oldp+68495,(((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0x1eU)))
                                  ? 0xfbb0U : 0xf220U)),16);
    bufp->fullCData(oldp+68496,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4481___05F__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullSData(oldp+68497,(((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0x21U)))
                                  ? 0x4884U : 0x8448U)),16);
    bufp->fullSData(oldp+68498,(((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0x1cU)))
                                  ? 0xc993U : 0x366cU)),16);
    bufp->fullSData(oldp+68499,(((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0x18U)))
                                  ? 0x6a66U : 0x9599U)),16);
    bufp->fullSData(oldp+68500,(((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0x13U)))
                                  ? 0x111U : 0x1555U)),16);
    bufp->fullCData(oldp+68501,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4488___05F__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+68502,(((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0x15U)))
                                  ? 1U : 0x10U)),8);
    bufp->fullSData(oldp+68503,(((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0x1bU)))
                                  ? 0x401U : 0x104U)),16);
    bufp->fullIData(oldp+68504,(((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0x19U)))
                                  ? 0x333636ccU : 0x336c6cccU)),32);
    bufp->fullSData(oldp+68505,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4496___05F__DOT__genblk1__DOT__lut_6__DOT__s4),16);
    bufp->fullSData(oldp+68506,(((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0x1cU)))
                                  ? 0xfeecU : 0xc880U)),16);
    bufp->fullSData(oldp+68507,(((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0x1aU)))
                                  ? 9U : 6U)),16);
    bufp->fullCData(oldp+68508,(((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0x1aU)))
                                  ? 9U : 6U)),8);
    bufp->fullCData(oldp+68509,(((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0x1aU)))
                                  ? 9U : 6U)),4);
    bufp->fullSData(oldp+68510,(((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0x1dU)))
                                  ? 0U : 1U)),16);
    bufp->fullCData(oldp+68511,(((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0x1dU)))
                                  ? 0U : 1U)),8);
    bufp->fullCData(oldp+68512,(((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0x1dU)))
                                  ? 0U : 1U)),4);
    bufp->fullIData(oldp+68513,(((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0x16U)))
                                  ? 0x11171177U : 0x17777777U)),32);
    bufp->fullIData(oldp+68514,(((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0x16U)))
                                  ? 0xeeeee0e0U : 0xee00e000U)),32);
    bufp->fullSData(oldp+68515,(((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0x1fU)))
                                  ? 0xfcd4U : 0xd4c0U)),16);
    bufp->fullSData(oldp+68516,(((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0x21U)))
                                  ? 0xfae8U : 0xe8a0U)),16);
    bufp->fullIData(oldp+68517,(((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0x23U)))
                                  ? 0x3cc36996U : 0x6996c33cU)),32);
    bufp->fullSData(oldp+68518,(((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0x21U)))
                                  ? 0xa596U : 0x965aU)),16);
    bufp->fullSData(oldp+68519,(((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0x1fU)))
                                  ? 0x102U : 0x201U)),16);
    bufp->fullIData(oldp+68520,(((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0x19U)))
                                  ? 0x3336666cU : 0x36666cccU)),32);
    bufp->fullSData(oldp+68521,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5453___05F__DOT__genblk1__DOT__lut_6__DOT__s4),16);
    bufp->fullSData(oldp+68522,(((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0x1cU)))
                                  ? 0xa06U : 0x509U)),16);
    bufp->fullIData(oldp+68523,(((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0x1aU)))
                                  ? 0x566aa995U : 0xa995566aU)),32);
    bufp->fullSData(oldp+68524,(((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0x12U)))
                                  ? 0x115U : 0x1155U)),16);
    bufp->fullCData(oldp+68525,(((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0x17U)))
                                  ? 1U : 2U)),8);
    bufp->fullCData(oldp+68526,(((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0x17U)))
                                  ? 1U : 2U)),4);
    bufp->fullCData(oldp+68527,(((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0x17U)))
                                  ? 1U : 2U)),2);
    bufp->fullIData(oldp+68528,(((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0x16U)))
                                  ? 0x3339339cU : 0x39cc9cccU)),32);
    bufp->fullIData(oldp+68529,(((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0x1fU)))
                                  ? 0x1e0f785aU : 0x5a1ef078U)),32);
    bufp->fullSData(oldp+68530,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5478___05F__DOT__genblk1__DOT__lut_6__DOT__s4),16);
    bufp->fullSData(oldp+68531,(((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0x25U)))
                                  ? 0xe0U : 0x80U)),16);
    bufp->fullCData(oldp+68532,(((1U & (IData)((vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__z_out_reg 
                                                >> 0x25U)))
                                  ? 0xe0U : 0x80U)),8);
    bufp->fullIData(oldp+68533,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__adj_op_tmp),27);
    bufp->fullCData(oldp+68534,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__exp_diff_sft),5);
    bufp->fullIData(oldp+68535,((0x7ffffffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.u1__DOT____Vcellout__u7__shift_out))),27);
    bufp->fullQData(oldp+68536,((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__adj_op_tmp))),48);
    bufp->fullCData(oldp+68538,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__exp_diff_sft),6);
    bufp->fullQData(oldp+68539,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.u1__DOT____Vcellout__u7__shift_out),48);
    bufp->fullIData(oldp+68541,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__adj_op_tmp),27);
    bufp->fullCData(oldp+68542,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__exp_diff_sft),5);
    bufp->fullIData(oldp+68543,((0x7ffffffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.u1__DOT____Vcellout__u7__shift_out))),27);
    bufp->fullQData(oldp+68544,((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__adj_op_tmp))),48);
    bufp->fullCData(oldp+68546,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__exp_diff_sft),6);
    bufp->fullQData(oldp+68547,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.u1__DOT____Vcellout__u7__shift_out),48);
    bufp->fullIData(oldp+68549,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__adj_op_tmp),27);
    bufp->fullCData(oldp+68550,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__exp_diff_sft),5);
    bufp->fullIData(oldp+68551,((0x7ffffffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.u1__DOT____Vcellout__u7__shift_out))),27);
    bufp->fullQData(oldp+68552,((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__adj_op_tmp))),48);
    bufp->fullCData(oldp+68554,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__exp_diff_sft),6);
    bufp->fullQData(oldp+68555,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.u1__DOT____Vcellout__u7__shift_out),48);
    bufp->fullIData(oldp+68557,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__adj_op_tmp),27);
    bufp->fullCData(oldp+68558,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__exp_diff_sft),5);
    bufp->fullIData(oldp+68559,((0x7ffffffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.u1__DOT____Vcellout__u7__shift_out))),27);
    bufp->fullQData(oldp+68560,((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__adj_op_tmp))),48);
    bufp->fullCData(oldp+68562,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__exp_diff_sft),6);
    bufp->fullQData(oldp+68563,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.u1__DOT____Vcellout__u7__shift_out),48);
    bufp->fullIData(oldp+68565,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__adj_op_tmp),27);
    bufp->fullCData(oldp+68566,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__exp_diff_sft),5);
    bufp->fullIData(oldp+68567,((0x7ffffffU & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.u1__DOT____Vcellout__u7__shift_out))),27);
    bufp->fullQData(oldp+68568,((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__adj_op_tmp))),48);
    bufp->fullCData(oldp+68570,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__exp_diff_sft),6);
    bufp->fullQData(oldp+68571,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.u1__DOT____Vcellout__u7__shift_out),48);
    bufp->fullBit(oldp+68573,((1U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1763_li1763__DOT__genblk1__DOT__lut_5__DOT__s3))));
    bufp->fullBit(oldp+68574,((1U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1764_li1764__DOT__genblk1__DOT__lut_5__DOT__s1))));
    bufp->fullBit(oldp+68575,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1765_li1765_output_0_0));
    bufp->fullBit(oldp+68576,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1766_li1766_output_0_0));
    bufp->fullBit(oldp+68577,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1767_li1767_output_0_0));
    bufp->fullBit(oldp+68578,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1768_li1768_output_0_0));
    bufp->fullBit(oldp+68579,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1769_li1769_output_0_0));
    bufp->fullBit(oldp+68580,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1770_li1770_output_0_0));
    bufp->fullBit(oldp+68581,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1771_li1771_output_0_0));
    bufp->fullBit(oldp+68582,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1772_li1772_output_0_0));
    bufp->fullBit(oldp+68583,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1773_li1773_output_0_0));
    bufp->fullBit(oldp+68584,((1U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1774_li1774__DOT__genblk1__DOT__lut_5__DOT__s1))));
    bufp->fullBit(oldp+68585,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1775_li1775_output_0_0));
    bufp->fullBit(oldp+68586,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1776_li1776_output_0_0));
    bufp->fullBit(oldp+68587,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1777_li1777_output_0_0));
    bufp->fullBit(oldp+68588,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1778_li1778_output_0_0));
    bufp->fullBit(oldp+68589,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1779_li1779_output_0_0));
    bufp->fullBit(oldp+68590,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1780_li1780_output_0_0));
    bufp->fullBit(oldp+68591,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1781_li1781_output_0_0));
    bufp->fullBit(oldp+68592,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1782_li1782_output_0_0));
    bufp->fullBit(oldp+68593,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1783_li1783_output_0_0));
    bufp->fullBit(oldp+68594,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1784_li1784_output_0_0));
    bufp->fullBit(oldp+68595,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1785_li1785_output_0_0));
    bufp->fullBit(oldp+68596,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1786_li1786_output_0_0));
    bufp->fullBit(oldp+68597,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1787_li1787_output_0_0));
    bufp->fullBit(oldp+68598,((1U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1788_li1788__DOT__genblk1__DOT__lut_5__DOT__s1))));
    bufp->fullBit(oldp+68599,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1789_li1789_output_0_0));
    bufp->fullBit(oldp+68600,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1790_li1790_output_0_0));
    bufp->fullBit(oldp+68601,((1U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1791_li1791__DOT__genblk1__DOT__lut_5__DOT__s1))));
    bufp->fullBit(oldp+68602,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1792_li1792_output_0_0));
    bufp->fullBit(oldp+68603,((1U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1981_li1981__DOT__genblk1__DOT__lut_5__DOT__s2))));
    bufp->fullBit(oldp+68604,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1982_li1982_output_0_0));
    bufp->fullBit(oldp+68605,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1983_li1983_output_0_0));
    bufp->fullBit(oldp+68606,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1984_li1984_output_0_0));
    bufp->fullBit(oldp+68607,((1U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1985_li1985__DOT__genblk1__DOT__lut_5__DOT__s2))));
    bufp->fullBit(oldp+68608,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1986_li1986_output_0_0));
    bufp->fullBit(oldp+68609,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1987_li1987_output_0_0));
    bufp->fullBit(oldp+68610,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1988_li1988_output_0_0));
    bufp->fullBit(oldp+68611,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1989_li1989_output_0_0));
    bufp->fullBit(oldp+68612,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1990_li1990_output_0_0));
    bufp->fullBit(oldp+68613,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1991_li1991_output_0_0));
    bufp->fullBit(oldp+68614,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1992_li1992_output_0_0));
    bufp->fullBit(oldp+68615,((1U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1993_li1993__DOT__genblk1__DOT__lut_5__DOT__s1))));
    bufp->fullBit(oldp+68616,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1994_li1994_output_0_0));
    bufp->fullBit(oldp+68617,((1U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1995_li1995__DOT__genblk1__DOT__lut_5__DOT__s1))));
    bufp->fullBit(oldp+68618,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1996_li1996_output_0_0));
    bufp->fullBit(oldp+68619,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1997_li1997_output_0_0));
    bufp->fullBit(oldp+68620,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1998_li1998_output_0_0));
    bufp->fullBit(oldp+68621,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1999_li1999_output_0_0));
    bufp->fullBit(oldp+68622,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2000_li2000_output_0_0));
    bufp->fullBit(oldp+68623,((1U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2001_li2001__DOT__genblk1__DOT__lut_5__DOT__s1))));
    bufp->fullBit(oldp+68624,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2002_li2002_output_0_0));
    bufp->fullBit(oldp+68625,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2003_li2003_output_0_0));
    bufp->fullBit(oldp+68626,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2004_li2004_output_0_0));
    bufp->fullBit(oldp+68627,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2005_li2005_output_0_0));
    bufp->fullBit(oldp+68628,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2006_li2006_output_0_0));
    bufp->fullBit(oldp+68629,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2007_li2007_output_0_0));
    bufp->fullBit(oldp+68630,((1U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2008_li2008__DOT__genblk1__DOT__lut_5__DOT__s1))));
    bufp->fullBit(oldp+68631,((1U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2009_li2009__DOT__genblk1__DOT__lut_5__DOT__s1))));
    bufp->fullBit(oldp+68632,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2010_li2010_output_0_0));
    bufp->fullBit(oldp+68633,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2059_li2059_output_0_0));
    bufp->fullBit(oldp+68634,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2060_li2060_output_0_0));
    bufp->fullBit(oldp+68635,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2061_li2061_output_0_0));
    bufp->fullBit(oldp+68636,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2062_li2062_output_0_0));
    bufp->fullBit(oldp+68637,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2063_li2063_output_0_0));
    bufp->fullBit(oldp+68638,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2064_li2064_output_0_0));
    bufp->fullBit(oldp+68639,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2065_li2065_output_0_0));
    bufp->fullBit(oldp+68640,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2066_li2066_output_0_0));
    bufp->fullBit(oldp+68641,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2067_li2067_output_0_0));
    bufp->fullBit(oldp+68642,((1U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2068_li2068__DOT__genblk1__DOT__lut_5__DOT__s1))));
    bufp->fullBit(oldp+68643,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2069_li2069_output_0_0));
    bufp->fullBit(oldp+68644,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2070_li2070_output_0_0));
    bufp->fullBit(oldp+68645,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2071_li2071_output_0_0));
    bufp->fullBit(oldp+68646,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2072_li2072_output_0_0));
    bufp->fullBit(oldp+68647,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2073_li2073_output_0_0));
    bufp->fullBit(oldp+68648,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2074_li2074_output_0_0));
    bufp->fullBit(oldp+68649,((1U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2075_li2075__DOT__genblk1__DOT__lut_5__DOT__s2))));
    bufp->fullBit(oldp+68650,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2076_li2076_output_0_0));
    bufp->fullBit(oldp+68651,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2077_li2077_output_0_0));
    bufp->fullBit(oldp+68652,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2078_li2078_output_0_0));
    bufp->fullBit(oldp+68653,((1U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2079_li2079__DOT__genblk1__DOT__lut_5__DOT__s1))));
    bufp->fullBit(oldp+68654,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2080_li2080_output_0_0));
    bufp->fullBit(oldp+68655,((1U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2081_li2081__DOT__genblk1__DOT__lut_5__DOT__s1))));
    bufp->fullBit(oldp+68656,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2082_li2082_output_0_0));
    bufp->fullBit(oldp+68657,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2083_li2083_output_0_0));
    bufp->fullBit(oldp+68658,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2084_li2084_output_0_0));
    bufp->fullBit(oldp+68659,((1U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2085_li2085__DOT__genblk1__DOT__lut_5__DOT__s1))));
    bufp->fullBit(oldp+68660,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2086_li2086_output_0_0));
    bufp->fullBit(oldp+68661,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2087_li2087_output_0_0));
    bufp->fullBit(oldp+68662,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2088_li2088_output_0_0));
    bufp->fullBit(oldp+68663,((1U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2198_li2198__DOT__genblk1__DOT__lut_5__DOT__s2))));
    bufp->fullBit(oldp+68664,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2199_li2199_output_0_0));
    bufp->fullBit(oldp+68665,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2200_li2200_output_0_0));
    bufp->fullBit(oldp+68666,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2201_li2201_output_0_0));
    bufp->fullBit(oldp+68667,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2202_li2202_output_0_0));
    bufp->fullBit(oldp+68668,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2203_li2203_output_0_0));
    bufp->fullBit(oldp+68669,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2204_li2204_output_0_0));
    bufp->fullBit(oldp+68670,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2205_li2205_output_0_0));
    bufp->fullBit(oldp+68671,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2206_li2206_output_0_0));
    bufp->fullBit(oldp+68672,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2207_li2207_output_0_0));
    bufp->fullBit(oldp+68673,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2208_li2208_output_0_0));
    bufp->fullBit(oldp+68674,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2209_li2209_output_0_0));
    bufp->fullBit(oldp+68675,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2210_li2210_output_0_0));
    bufp->fullBit(oldp+68676,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2211_li2211_output_0_0));
    bufp->fullBit(oldp+68677,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2212_li2212_output_0_0));
    bufp->fullBit(oldp+68678,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2213_li2213_output_0_0));
    bufp->fullBit(oldp+68679,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2214_li2214_output_0_0));
    bufp->fullBit(oldp+68680,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2215_li2215_output_0_0));
    bufp->fullBit(oldp+68681,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2216_li2216_output_0_0));
    bufp->fullBit(oldp+68682,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2217_li2217_output_0_0));
    bufp->fullBit(oldp+68683,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2218_li2218_output_0_0));
    bufp->fullBit(oldp+68684,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2219_li2219_output_0_0));
    bufp->fullBit(oldp+68685,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2220_li2220_output_0_0));
    bufp->fullBit(oldp+68686,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2221_li2221_output_0_0));
    bufp->fullBit(oldp+68687,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2222_li2222_output_0_0));
    bufp->fullBit(oldp+68688,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2223_li2223_output_0_0));
    bufp->fullBit(oldp+68689,((1U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2224_li2224__DOT__genblk1__DOT__lut_5__DOT__s2))));
    bufp->fullBit(oldp+68690,((1U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2225_li2225__DOT__genblk1__DOT__lut_5__DOT__s1))));
    bufp->fullBit(oldp+68691,((1U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2226_li2226__DOT__genblk1__DOT__lut_5__DOT__s1))));
    bufp->fullBit(oldp+68692,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2227_li2227_output_0_0));
    bufp->fullBit(oldp+68693,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3430___05F_output_0_0));
    bufp->fullBit(oldp+68694,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3431___05F_output_0_0));
    bufp->fullBit(oldp+68695,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3432___05F_output_0_0));
    bufp->fullBit(oldp+68696,((1U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3433___05F__DOT__genblk1__DOT__lut_5__DOT__s1))));
    bufp->fullBit(oldp+68697,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3434___05F_output_0_0));
    bufp->fullBit(oldp+68698,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3435___05F_output_0_0));
    bufp->fullBit(oldp+68699,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3436___05F_output_0_0));
    bufp->fullBit(oldp+68700,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3437___05F_output_0_0));
    bufp->fullBit(oldp+68701,((1U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3438___05F__DOT__genblk1__DOT__lut_5__DOT__s1))));
    bufp->fullBit(oldp+68702,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3439___05F_output_0_0));
    bufp->fullBit(oldp+68703,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3440___05F_output_0_0));
    bufp->fullBit(oldp+68704,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3441___05F_output_0_0));
    bufp->fullBit(oldp+68705,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3442___05F_output_0_0));
    bufp->fullBit(oldp+68706,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3443___05F_output_0_0));
    bufp->fullBit(oldp+68707,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3444___05F_output_0_0));
    bufp->fullBit(oldp+68708,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3445___05F_output_0_0));
    bufp->fullBit(oldp+68709,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3446___05F_output_0_0));
    bufp->fullBit(oldp+68710,((1U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3447___05F__DOT__genblk1__DOT__lut_5__DOT__s1))));
    bufp->fullBit(oldp+68711,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3448___05F_output_0_0));
    bufp->fullBit(oldp+68712,((1U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3449___05F__DOT__genblk1__DOT__lut_5__DOT__s2))));
    bufp->fullBit(oldp+68713,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3450___05F_output_0_0));
    bufp->fullBit(oldp+68714,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3451___05F_output_0_0));
    bufp->fullBit(oldp+68715,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3452___05F_output_0_0));
    bufp->fullBit(oldp+68716,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3453___05F_output_0_0));
    bufp->fullBit(oldp+68717,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3454___05F_output_0_0));
    bufp->fullBit(oldp+68718,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3455___05F_output_0_0));
    bufp->fullBit(oldp+68719,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3456___05F_output_0_0));
    bufp->fullBit(oldp+68720,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3457___05F_output_0_0));
    bufp->fullBit(oldp+68721,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3458___05F_output_0_0));
    bufp->fullBit(oldp+68722,((1U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3459___05F__DOT__genblk1__DOT__lut_5__DOT__s1))));
    bufp->fullBit(oldp+68723,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3460___05F_output_0_0));
    bufp->fullBit(oldp+68724,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3461___05F_output_0_0));
    bufp->fullBit(oldp+68725,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3462___05F_output_0_0));
    bufp->fullBit(oldp+68726,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3463___05F_output_0_0));
    bufp->fullBit(oldp+68727,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3464___05F_output_0_0));
    bufp->fullBit(oldp+68728,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3465___05F_output_0_0));
    bufp->fullBit(oldp+68729,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3466___05F_output_0_0));
    bufp->fullBit(oldp+68730,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3467___05F_output_0_0));
    bufp->fullBit(oldp+68731,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3468___05F_output_0_0));
    bufp->fullBit(oldp+68732,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3469___05F_output_0_0));
    bufp->fullBit(oldp+68733,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3470___05F_output_0_0));
    bufp->fullBit(oldp+68734,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3471___05F_output_0_0));
    bufp->fullBit(oldp+68735,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3472___05F_output_0_0));
    bufp->fullBit(oldp+68736,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3473___05F_output_0_0));
    bufp->fullBit(oldp+68737,((1U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3474___05F__DOT__genblk1__DOT__lut_5__DOT__s1))));
    bufp->fullBit(oldp+68738,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3475___05F_output_0_0));
    bufp->fullBit(oldp+68739,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3477___05F_output_0_0));
    bufp->fullBit(oldp+68740,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3478___05F_output_0_0));
    bufp->fullBit(oldp+68741,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3479___05F_output_0_0));
    bufp->fullBit(oldp+68742,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3480___05F_output_0_0));
    bufp->fullBit(oldp+68743,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3481___05F_output_0_0));
    bufp->fullBit(oldp+68744,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3482___05F_output_0_0));
    bufp->fullBit(oldp+68745,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3497___05F_output_0_0));
    bufp->fullBit(oldp+68746,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3507___05F_output_0_0));
    bufp->fullBit(oldp+68747,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4345___05F_output_0_0));
    bufp->fullBit(oldp+68748,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4346___05F_output_0_0));
    bufp->fullBit(oldp+68749,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4347___05F_output_0_0));
    bufp->fullBit(oldp+68750,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4348___05F_output_0_0));
    bufp->fullBit(oldp+68751,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4349___05F_output_0_0));
    bufp->fullBit(oldp+68752,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4350___05F_output_0_0));
    bufp->fullBit(oldp+68753,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4351___05F_output_0_0));
    bufp->fullBit(oldp+68754,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4352___05F_output_0_0));
    bufp->fullBit(oldp+68755,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4353___05F_output_0_0));
    bufp->fullBit(oldp+68756,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4354___05F_output_0_0));
    bufp->fullBit(oldp+68757,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4355___05F_output_0_0));
    bufp->fullBit(oldp+68758,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4356___05F_output_0_0));
    bufp->fullBit(oldp+68759,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4357___05F_output_0_0));
    bufp->fullBit(oldp+68760,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4358___05F_output_0_0));
    bufp->fullBit(oldp+68761,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4359___05F_output_0_0));
    bufp->fullBit(oldp+68762,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4362___05F_output_0_0));
    bufp->fullBit(oldp+68763,((1U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4363___05F__DOT__genblk1__DOT__lut_5__DOT__s1))));
    bufp->fullBit(oldp+68764,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4364___05F_output_0_0));
    bufp->fullBit(oldp+68765,((1U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4365___05F__DOT__genblk1__DOT__lut_5__DOT__s1))));
    bufp->fullBit(oldp+68766,((1U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4366___05F__DOT__genblk1__DOT__lut_5__DOT__s1))));
    bufp->fullBit(oldp+68767,((1U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4367___05F__DOT__genblk1__DOT__lut_5__DOT__s3))));
    bufp->fullBit(oldp+68768,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4368___05F_output_0_0));
    bufp->fullBit(oldp+68769,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4370___05F_output_0_0));
    bufp->fullBit(oldp+68770,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4371___05F_output_0_0));
    bufp->fullBit(oldp+68771,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4372___05F_output_0_0));
    bufp->fullBit(oldp+68772,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4373___05F_output_0_0));
    bufp->fullBit(oldp+68773,((1U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4374___05F__DOT__genblk1__DOT__lut_5__DOT__s1))));
    bufp->fullBit(oldp+68774,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4375___05F_output_0_0));
    bufp->fullBit(oldp+68775,((1U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4376___05F__DOT__genblk1__DOT__lut_5__DOT__s1))));
    bufp->fullBit(oldp+68776,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4377___05F_output_0_0));
    bufp->fullBit(oldp+68777,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4378___05F_output_0_0));
    bufp->fullBit(oldp+68778,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4379___05F_output_0_0));
    bufp->fullBit(oldp+68779,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4380___05F_output_0_0));
    bufp->fullBit(oldp+68780,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4381___05F_output_0_0));
    bufp->fullBit(oldp+68781,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4382___05F_output_0_0));
    bufp->fullBit(oldp+68782,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4383___05F_output_0_0));
    bufp->fullBit(oldp+68783,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4384___05F_output_0_0));
    bufp->fullBit(oldp+68784,((1U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4385___05F__DOT__genblk1__DOT__lut_5__DOT__s1))));
    bufp->fullBit(oldp+68785,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4386___05F_output_0_0));
    bufp->fullBit(oldp+68786,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4387___05F_output_0_0));
    bufp->fullBit(oldp+68787,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4388___05F_output_0_0));
    bufp->fullBit(oldp+68788,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4389___05F_output_0_0));
    bufp->fullBit(oldp+68789,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4390___05F_output_0_0));
    bufp->fullBit(oldp+68790,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4391___05F_output_0_0));
    bufp->fullBit(oldp+68791,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4392___05F_output_0_0));
    bufp->fullBit(oldp+68792,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4393___05F_output_0_0));
    bufp->fullBit(oldp+68793,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4394___05F_output_0_0));
    bufp->fullBit(oldp+68794,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4395___05F_output_0_0));
    bufp->fullBit(oldp+68795,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4397___05F_output_0_0));
    bufp->fullBit(oldp+68796,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4398___05F_output_0_0));
    bufp->fullBit(oldp+68797,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4399___05F_output_0_0));
    bufp->fullBit(oldp+68798,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4400___05F_output_0_0));
    bufp->fullBit(oldp+68799,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4410___05F_output_0_0));
    bufp->fullBit(oldp+68800,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4420___05F_output_0_0));
    bufp->fullBit(oldp+68801,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4470___05F_output_0_0));
    bufp->fullBit(oldp+68802,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4471___05F_output_0_0));
    bufp->fullBit(oldp+68803,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4472___05F_output_0_0));
    bufp->fullBit(oldp+68804,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4473___05F_output_0_0));
    bufp->fullBit(oldp+68805,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4474___05F_output_0_0));
    bufp->fullBit(oldp+68806,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4475___05F_output_0_0));
    bufp->fullBit(oldp+68807,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4476___05F_output_0_0));
    bufp->fullBit(oldp+68808,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4477___05F_output_0_0));
    bufp->fullBit(oldp+68809,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4478___05F_output_0_0));
    bufp->fullBit(oldp+68810,((1U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4479___05F__DOT__genblk1__DOT__lut_5__DOT__s1))));
    bufp->fullBit(oldp+68811,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4480___05F_output_0_0));
    bufp->fullBit(oldp+68812,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4481___05F_output_0_0));
    bufp->fullBit(oldp+68813,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4482___05F_output_0_0));
    bufp->fullBit(oldp+68814,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4483___05F_output_0_0));
    bufp->fullBit(oldp+68815,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4484___05F_output_0_0));
    bufp->fullBit(oldp+68816,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4485___05F_output_0_0));
    bufp->fullBit(oldp+68817,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4486___05F_output_0_0));
    bufp->fullBit(oldp+68818,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4487___05F_output_0_0));
    bufp->fullBit(oldp+68819,((1U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4488___05F__DOT__genblk1__DOT__lut_5__DOT__s1))));
    bufp->fullBit(oldp+68820,((1U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4489___05F__DOT__genblk1__DOT__lut_5__DOT__s2))));
    bufp->fullBit(oldp+68821,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4490___05F_output_0_0));
    bufp->fullBit(oldp+68822,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4491___05F_output_0_0));
    bufp->fullBit(oldp+68823,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4493___05F_output_0_0));
    bufp->fullBit(oldp+68824,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4494___05F_output_0_0));
    bufp->fullBit(oldp+68825,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4496___05F_output_0_0));
    bufp->fullBit(oldp+68826,((1U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4497___05F__DOT__genblk1__DOT__lut_5__DOT__s1))));
    bufp->fullBit(oldp+68827,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4498___05F_output_0_0));
    bufp->fullBit(oldp+68828,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4499___05F_output_0_0));
    bufp->fullBit(oldp+68829,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4500___05F_output_0_0));
    bufp->fullBit(oldp+68830,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4501___05F_output_0_0));
    bufp->fullBit(oldp+68831,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4502___05F_output_0_0));
    bufp->fullBit(oldp+68832,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4503___05F_output_0_0));
    bufp->fullBit(oldp+68833,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4504___05F_output_0_0));
    bufp->fullBit(oldp+68834,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4505___05F_output_0_0));
    bufp->fullBit(oldp+68835,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4506___05F_output_0_0));
    bufp->fullBit(oldp+68836,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4507___05F_output_0_0));
    bufp->fullBit(oldp+68837,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4508___05F_output_0_0));
    bufp->fullBit(oldp+68838,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4509___05F_output_0_0));
    bufp->fullBit(oldp+68839,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4510___05F_output_0_0));
    bufp->fullBit(oldp+68840,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4511___05F_output_0_0));
    bufp->fullBit(oldp+68841,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4512___05F_output_0_0));
    bufp->fullBit(oldp+68842,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4513___05F_output_0_0));
    bufp->fullBit(oldp+68843,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4514___05F_output_0_0));
    bufp->fullBit(oldp+68844,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4515___05F_output_0_0));
    bufp->fullBit(oldp+68845,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4516___05F_output_0_0));
    bufp->fullBit(oldp+68846,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4517___05F_output_0_0));
    bufp->fullBit(oldp+68847,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4518___05F_output_0_0));
    bufp->fullBit(oldp+68848,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4519___05F_output_0_0));
    bufp->fullBit(oldp+68849,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4520___05F_output_0_0));
    bufp->fullBit(oldp+68850,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4534___05F_output_0_0));
    bufp->fullBit(oldp+68851,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4543___05F_output_0_0));
    bufp->fullBit(oldp+68852,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4544___05F_output_0_0));
    bufp->fullBit(oldp+68853,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5432___05F_output_0_0));
    bufp->fullBit(oldp+68854,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5433___05F_output_0_0));
    bufp->fullBit(oldp+68855,((1U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5434___05F__DOT__genblk1__DOT__lut_5__DOT__s1))));
    bufp->fullBit(oldp+68856,((1U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5435___05F__DOT__genblk1__DOT__lut_5__DOT__s2))));
    bufp->fullBit(oldp+68857,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5436___05F_output_0_0));
    bufp->fullBit(oldp+68858,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5437___05F_output_0_0));
    bufp->fullBit(oldp+68859,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5438___05F_output_0_0));
    bufp->fullBit(oldp+68860,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5439___05F_output_0_0));
    bufp->fullBit(oldp+68861,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5440___05F_output_0_0));
    bufp->fullBit(oldp+68862,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5441___05F_output_0_0));
    bufp->fullBit(oldp+68863,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5442___05F_output_0_0));
    bufp->fullBit(oldp+68864,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5443___05F_output_0_0));
    bufp->fullBit(oldp+68865,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5444___05F_output_0_0));
    bufp->fullBit(oldp+68866,((1U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5445___05F__DOT__genblk1__DOT__lut_5__DOT__s1))));
    bufp->fullBit(oldp+68867,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5446___05F_output_0_0));
    bufp->fullBit(oldp+68868,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5447___05F_output_0_0));
    bufp->fullBit(oldp+68869,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5448___05F_output_0_0));
    bufp->fullBit(oldp+68870,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5449___05F_output_0_0));
    bufp->fullBit(oldp+68871,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5450___05F_output_0_0));
    bufp->fullBit(oldp+68872,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5451___05F_output_0_0));
    bufp->fullBit(oldp+68873,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5452___05F_output_0_0));
    bufp->fullBit(oldp+68874,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5453___05F_output_0_0));
    bufp->fullBit(oldp+68875,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5454___05F_output_0_0));
    bufp->fullBit(oldp+68876,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5455___05F_output_0_0));
    bufp->fullBit(oldp+68877,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5456___05F_output_0_0));
    bufp->fullBit(oldp+68878,((1U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5457___05F__DOT__genblk1__DOT__lut_5__DOT__s2))));
    bufp->fullBit(oldp+68879,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5458___05F_output_0_0));
    bufp->fullBit(oldp+68880,((1U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5459___05F__DOT__genblk1__DOT__lut_5__DOT__s1))));
    bufp->fullBit(oldp+68881,((1U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5460___05F__DOT__genblk1__DOT__lut_5__DOT__s2))));
    bufp->fullBit(oldp+68882,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5461___05F_output_0_0));
    bufp->fullBit(oldp+68883,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5462___05F_output_0_0));
    bufp->fullBit(oldp+68884,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5463___05F_output_0_0));
    bufp->fullBit(oldp+68885,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5464___05F_output_0_0));
    bufp->fullBit(oldp+68886,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5465___05F_output_0_0));
    bufp->fullBit(oldp+68887,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5466___05F_output_0_0));
    bufp->fullBit(oldp+68888,((1U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5467___05F__DOT__genblk1__DOT__lut_5__DOT__s1))));
    bufp->fullBit(oldp+68889,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5468___05F_output_0_0));
    bufp->fullBit(oldp+68890,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5469___05F_output_0_0));
    bufp->fullBit(oldp+68891,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5470___05F_output_0_0));
    bufp->fullBit(oldp+68892,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5471___05F_output_0_0));
    bufp->fullBit(oldp+68893,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5472___05F_output_0_0));
    bufp->fullBit(oldp+68894,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5473___05F_output_0_0));
    bufp->fullBit(oldp+68895,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5474___05F_output_0_0));
    bufp->fullBit(oldp+68896,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5475___05F_output_0_0));
    bufp->fullBit(oldp+68897,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5477___05F_output_0_0));
    bufp->fullBit(oldp+68898,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5478___05F_output_0_0));
    bufp->fullBit(oldp+68899,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5479___05F_output_0_0));
    bufp->fullBit(oldp+68900,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5480___05F_output_0_0));
    bufp->fullBit(oldp+68901,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5481___05F_output_0_0));
    bufp->fullBit(oldp+68902,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5483___05F_output_0_0));
    bufp->fullBit(oldp+68903,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5485___05F_output_0_0));
    bufp->fullBit(oldp+68904,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5487___05F_output_0_0));
    bufp->fullBit(oldp+68905,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5488___05F_output_0_0));
    bufp->fullBit(oldp+68906,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5490___05F_output_0_0));
    bufp->fullBit(oldp+68907,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5491___05F_output_0_0));
    bufp->fullBit(oldp+68908,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5502___05F_output_0_0));
    bufp->fullBit(oldp+68909,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5510___05F_output_0_0));
    bufp->fullBit(oldp+68910,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1763_li1763__DOT__genblk1__DOT__lut_5__DOT__s3)))));
    bufp->fullBit(oldp+68911,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1764_li1764__DOT__genblk1__DOT__lut_5__DOT__s1)))));
    bufp->fullBit(oldp+68912,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1765_li1765_output_0_0)))));
    bufp->fullBit(oldp+68913,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1766_li1766_output_0_0)))));
    bufp->fullBit(oldp+68914,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1767_li1767_output_0_0)))));
    bufp->fullBit(oldp+68915,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1768_li1768_output_0_0)))));
    bufp->fullBit(oldp+68916,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1769_li1769_output_0_0)))));
    bufp->fullBit(oldp+68917,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1770_li1770_output_0_0)))));
    bufp->fullBit(oldp+68918,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1771_li1771_output_0_0)))));
    bufp->fullBit(oldp+68919,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1772_li1772_output_0_0)))));
    bufp->fullBit(oldp+68920,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1773_li1773_output_0_0)))));
    bufp->fullBit(oldp+68921,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1774_li1774__DOT__genblk1__DOT__lut_5__DOT__s1)))));
    bufp->fullBit(oldp+68922,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1775_li1775_output_0_0)))));
    bufp->fullBit(oldp+68923,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1776_li1776_output_0_0)))));
    bufp->fullBit(oldp+68924,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1777_li1777_output_0_0)))));
    bufp->fullBit(oldp+68925,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1778_li1778_output_0_0)))));
    bufp->fullBit(oldp+68926,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1779_li1779_output_0_0)))));
    bufp->fullBit(oldp+68927,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1780_li1780_output_0_0)))));
    bufp->fullBit(oldp+68928,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1781_li1781_output_0_0)))));
    bufp->fullBit(oldp+68929,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1782_li1782_output_0_0)))));
    bufp->fullBit(oldp+68930,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1783_li1783_output_0_0)))));
    bufp->fullBit(oldp+68931,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1784_li1784_output_0_0)))));
    bufp->fullBit(oldp+68932,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1785_li1785_output_0_0)))));
    bufp->fullBit(oldp+68933,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1786_li1786_output_0_0)))));
    bufp->fullBit(oldp+68934,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1787_li1787_output_0_0)))));
    bufp->fullBit(oldp+68935,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1788_li1788__DOT__genblk1__DOT__lut_5__DOT__s1)))));
    bufp->fullBit(oldp+68936,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1789_li1789_output_0_0)))));
    bufp->fullBit(oldp+68937,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1790_li1790_output_0_0)))));
    bufp->fullBit(oldp+68938,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1791_li1791__DOT__genblk1__DOT__lut_5__DOT__s1)))));
    bufp->fullBit(oldp+68939,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1792_li1792_output_0_0)))));
    bufp->fullBit(oldp+68940,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1981_li1981__DOT__genblk1__DOT__lut_5__DOT__s2)))));
    bufp->fullBit(oldp+68941,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1982_li1982_output_0_0)))));
    bufp->fullBit(oldp+68942,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1983_li1983_output_0_0)))));
    bufp->fullBit(oldp+68943,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1984_li1984_output_0_0)))));
    bufp->fullBit(oldp+68944,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1985_li1985__DOT__genblk1__DOT__lut_5__DOT__s2)))));
    bufp->fullBit(oldp+68945,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1986_li1986_output_0_0)))));
    bufp->fullBit(oldp+68946,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1987_li1987_output_0_0)))));
    bufp->fullBit(oldp+68947,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1988_li1988_output_0_0)))));
    bufp->fullBit(oldp+68948,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1989_li1989_output_0_0)))));
    bufp->fullBit(oldp+68949,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1990_li1990_output_0_0)))));
    bufp->fullBit(oldp+68950,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1991_li1991_output_0_0)))));
    bufp->fullBit(oldp+68951,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1992_li1992_output_0_0)))));
    bufp->fullBit(oldp+68952,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1993_li1993__DOT__genblk1__DOT__lut_5__DOT__s1)))));
    bufp->fullBit(oldp+68953,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1994_li1994_output_0_0)))));
    bufp->fullBit(oldp+68954,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1995_li1995__DOT__genblk1__DOT__lut_5__DOT__s1)))));
    bufp->fullBit(oldp+68955,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1996_li1996_output_0_0)))));
    bufp->fullBit(oldp+68956,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1997_li1997_output_0_0)))));
    bufp->fullBit(oldp+68957,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1998_li1998_output_0_0)))));
    bufp->fullBit(oldp+68958,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1999_li1999_output_0_0)))));
    bufp->fullBit(oldp+68959,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2000_li2000_output_0_0)))));
    bufp->fullBit(oldp+68960,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2001_li2001__DOT__genblk1__DOT__lut_5__DOT__s1)))));
    bufp->fullBit(oldp+68961,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2002_li2002_output_0_0)))));
    bufp->fullBit(oldp+68962,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2003_li2003_output_0_0)))));
    bufp->fullBit(oldp+68963,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2004_li2004_output_0_0)))));
    bufp->fullBit(oldp+68964,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2005_li2005_output_0_0)))));
    bufp->fullBit(oldp+68965,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2006_li2006_output_0_0)))));
    bufp->fullBit(oldp+68966,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2007_li2007_output_0_0)))));
    bufp->fullBit(oldp+68967,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2008_li2008__DOT__genblk1__DOT__lut_5__DOT__s1)))));
    bufp->fullBit(oldp+68968,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2009_li2009__DOT__genblk1__DOT__lut_5__DOT__s1)))));
    bufp->fullBit(oldp+68969,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2010_li2010_output_0_0)))));
    bufp->fullBit(oldp+68970,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2059_li2059_output_0_0)))));
    bufp->fullBit(oldp+68971,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2060_li2060_output_0_0)))));
    bufp->fullBit(oldp+68972,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2061_li2061_output_0_0)))));
    bufp->fullBit(oldp+68973,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2062_li2062_output_0_0)))));
    bufp->fullBit(oldp+68974,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2063_li2063_output_0_0)))));
    bufp->fullBit(oldp+68975,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2064_li2064_output_0_0)))));
    bufp->fullBit(oldp+68976,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2065_li2065_output_0_0)))));
    bufp->fullBit(oldp+68977,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2066_li2066_output_0_0)))));
    bufp->fullBit(oldp+68978,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2067_li2067_output_0_0)))));
    bufp->fullBit(oldp+68979,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2068_li2068__DOT__genblk1__DOT__lut_5__DOT__s1)))));
    bufp->fullBit(oldp+68980,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2069_li2069_output_0_0)))));
    bufp->fullBit(oldp+68981,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2070_li2070_output_0_0)))));
    bufp->fullBit(oldp+68982,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2071_li2071_output_0_0)))));
    bufp->fullBit(oldp+68983,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2072_li2072_output_0_0)))));
    bufp->fullBit(oldp+68984,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2073_li2073_output_0_0)))));
    bufp->fullBit(oldp+68985,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2074_li2074_output_0_0)))));
    bufp->fullBit(oldp+68986,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2075_li2075__DOT__genblk1__DOT__lut_5__DOT__s2)))));
    bufp->fullBit(oldp+68987,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2076_li2076_output_0_0)))));
    bufp->fullBit(oldp+68988,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2077_li2077_output_0_0)))));
    bufp->fullBit(oldp+68989,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2078_li2078_output_0_0)))));
    bufp->fullBit(oldp+68990,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2079_li2079__DOT__genblk1__DOT__lut_5__DOT__s1)))));
    bufp->fullBit(oldp+68991,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2080_li2080_output_0_0)))));
    bufp->fullBit(oldp+68992,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2081_li2081__DOT__genblk1__DOT__lut_5__DOT__s1)))));
    bufp->fullBit(oldp+68993,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2082_li2082_output_0_0)))));
    bufp->fullBit(oldp+68994,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2083_li2083_output_0_0)))));
    bufp->fullBit(oldp+68995,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2084_li2084_output_0_0)))));
    bufp->fullBit(oldp+68996,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2085_li2085__DOT__genblk1__DOT__lut_5__DOT__s1)))));
    bufp->fullBit(oldp+68997,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2086_li2086_output_0_0)))));
    bufp->fullBit(oldp+68998,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2087_li2087_output_0_0)))));
    bufp->fullBit(oldp+68999,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2088_li2088_output_0_0)))));
    bufp->fullBit(oldp+69000,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2198_li2198__DOT__genblk1__DOT__lut_5__DOT__s2)))));
    bufp->fullBit(oldp+69001,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2199_li2199_output_0_0)))));
    bufp->fullBit(oldp+69002,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2200_li2200_output_0_0)))));
    bufp->fullBit(oldp+69003,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2201_li2201_output_0_0)))));
    bufp->fullBit(oldp+69004,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2202_li2202_output_0_0)))));
    bufp->fullBit(oldp+69005,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2203_li2203_output_0_0)))));
    bufp->fullBit(oldp+69006,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2204_li2204_output_0_0)))));
    bufp->fullBit(oldp+69007,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2205_li2205_output_0_0)))));
    bufp->fullBit(oldp+69008,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2206_li2206_output_0_0)))));
    bufp->fullBit(oldp+69009,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2207_li2207_output_0_0)))));
    bufp->fullBit(oldp+69010,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2208_li2208_output_0_0)))));
    bufp->fullBit(oldp+69011,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2209_li2209_output_0_0)))));
    bufp->fullBit(oldp+69012,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2210_li2210_output_0_0)))));
    bufp->fullBit(oldp+69013,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2211_li2211_output_0_0)))));
    bufp->fullBit(oldp+69014,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2212_li2212_output_0_0)))));
    bufp->fullBit(oldp+69015,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2213_li2213_output_0_0)))));
    bufp->fullBit(oldp+69016,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2214_li2214_output_0_0)))));
    bufp->fullBit(oldp+69017,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2215_li2215_output_0_0)))));
    bufp->fullBit(oldp+69018,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2216_li2216_output_0_0)))));
    bufp->fullBit(oldp+69019,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2217_li2217_output_0_0)))));
    bufp->fullBit(oldp+69020,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2218_li2218_output_0_0)))));
    bufp->fullBit(oldp+69021,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2219_li2219_output_0_0)))));
    bufp->fullBit(oldp+69022,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2220_li2220_output_0_0)))));
    bufp->fullBit(oldp+69023,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2221_li2221_output_0_0)))));
    bufp->fullBit(oldp+69024,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2222_li2222_output_0_0)))));
    bufp->fullBit(oldp+69025,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2223_li2223_output_0_0)))));
    bufp->fullBit(oldp+69026,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2224_li2224__DOT__genblk1__DOT__lut_5__DOT__s2)))));
    bufp->fullBit(oldp+69027,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2225_li2225__DOT__genblk1__DOT__lut_5__DOT__s1)))));
    bufp->fullBit(oldp+69028,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2226_li2226__DOT__genblk1__DOT__lut_5__DOT__s1)))));
    bufp->fullBit(oldp+69029,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2227_li2227_output_0_0)))));
    bufp->fullCData(oldp+69030,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1763_li1763__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69031,((0xfU & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1763_li1763__DOT__genblk1__DOT__lut_5__DOT__s3))),4);
    bufp->fullCData(oldp+69032,((3U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1763_li1763__DOT__genblk1__DOT__lut_5__DOT__s3))),2);
    bufp->fullCData(oldp+69033,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1764_li1764__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69034,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1764_li1764__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69035,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1764_li1764__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullCData(oldp+69036,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1765_li1765__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullCData(oldp+69037,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1766_li1766__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69038,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1766_li1766__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69039,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1766_li1766__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullCData(oldp+69040,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5462___05F_output_0_0)
                                  ? 6U : 9U)),4);
    bufp->fullCData(oldp+69041,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1767_li1767__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullSData(oldp+69042,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5462___05F_output_0_0)
                                  ? 0x96a5U : 0x5a96U)),16);
    bufp->fullCData(oldp+69043,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1768_li1768__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69044,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1768_li1768__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69045,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1768_li1768__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullCData(oldp+69046,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5458___05F_output_0_0)
                                  ? 9U : 6U)),4);
    bufp->fullCData(oldp+69047,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1769_li1769__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullSData(oldp+69048,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5465___05F_output_0_0)
                                  ? 0x56a9U : 0x6a95U)),16);
    bufp->fullCData(oldp+69049,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1770_li1770__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69050,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1770_li1770__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69051,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1770_li1770__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullIData(oldp+69052,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5458___05F_output_0_0)
                                  ? 0x57a801feU : 0x7f8015eaU)),32);
    bufp->fullSData(oldp+69053,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1771_li1771__DOT__genblk1__DOT__lut_6__DOT__s4),16);
    bufp->fullCData(oldp+69054,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1771_li1771__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69055,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1771_li1771__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69056,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1771_li1771__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullCData(oldp+69057,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1772_li1772__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69058,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1772_li1772__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69059,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1772_li1772__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullIData(oldp+69060,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5453___05F_output_0_0)
                                  ? 0x55665656U : 0x66aa6a6aU)),32);
    bufp->fullSData(oldp+69061,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1773_li1773__DOT__genblk1__DOT__lut_6__DOT__s4),16);
    bufp->fullCData(oldp+69062,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1773_li1773__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69063,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1773_li1773__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69064,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1773_li1773__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullCData(oldp+69065,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5456___05F_output_0_0) 
                                  << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5466___05F_output_0_0) 
                                             << 3U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5473___05F_output_0_0) 
                                                << 2U) 
                                               | ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5472___05F_output_0_0) 
                                                  << 1U))))),5);
    bufp->fullSData(oldp+69066,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5456___05F_output_0_0)
                                  ? 0x1141U : 0x4141U)),16);
    bufp->fullCData(oldp+69067,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1774_li1774__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69068,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1774_li1774__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69069,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1774_li1774__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullIData(oldp+69070,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5468___05F_output_0_0)
                                  ? 0xaa9a9a9aU : 0x99595959U)),32);
    bufp->fullSData(oldp+69071,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1775_li1775__DOT__genblk1__DOT__lut_6__DOT__s4),16);
    bufp->fullCData(oldp+69072,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1775_li1775__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69073,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1775_li1775__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69074,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1775_li1775__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullCData(oldp+69075,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5474___05F_output_0_0)
                                  ? 9U : 6U)),8);
    bufp->fullCData(oldp+69076,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5474___05F_output_0_0)
                                  ? 9U : 6U)),4);
    bufp->fullCData(oldp+69077,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1776_li1776__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullSData(oldp+69078,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5475___05F_output_0_0)
                                  ? 0x113U : 0x3220U)),16);
    bufp->fullCData(oldp+69079,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1777_li1777__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69080,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1777_li1777__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69081,((3U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1777_li1777__DOT__genblk1__DOT__lut_5__DOT__s2))),2);
    bufp->fullIData(oldp+69082,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5450___05F_output_0_0)
                                  ? 0x2fd57a8U : 0x2ad57f80U)),32);
    bufp->fullSData(oldp+69083,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1778_li1778__DOT__genblk1__DOT__lut_6__DOT__s4),16);
    bufp->fullCData(oldp+69084,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1778_li1778__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69085,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1778_li1778__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69086,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1778_li1778__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullCData(oldp+69087,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5479___05F_output_0_0)
                                  ? 6U : 9U)),8);
    bufp->fullCData(oldp+69088,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5479___05F_output_0_0)
                                  ? 6U : 9U)),4);
    bufp->fullCData(oldp+69089,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1779_li1779__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullSData(oldp+69090,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5443___05F_output_0_0)
                                  ? 0x9669U : 0x6996U)),16);
    bufp->fullCData(oldp+69091,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1780_li1780__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69092,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1780_li1780__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69093,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1780_li1780__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullSData(oldp+69094,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1781_li1781__DOT__genblk1__DOT__lut_6__DOT__s4),16);
    bufp->fullCData(oldp+69095,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1781_li1781__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69096,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1781_li1781__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69097,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1781_li1781__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullSData(oldp+69098,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5444___05F_output_0_0)
                                  ? 0x9669U : 0x6996U)),16);
    bufp->fullCData(oldp+69099,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1782_li1782__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69100,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1782_li1782__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69101,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1782_li1782__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullCData(oldp+69102,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1783_li1783__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69103,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1783_li1783__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69104,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1783_li1783__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullIData(oldp+69105,(((1U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5445___05F__DOT__genblk1__DOT__lut_5__DOT__s1))
                                  ? 0x963c96c3U : 0x96c3963cU)),32);
    bufp->fullSData(oldp+69106,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1784_li1784__DOT__genblk1__DOT__lut_6__DOT__s4),16);
    bufp->fullCData(oldp+69107,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1784_li1784__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69108,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1784_li1784__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69109,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1784_li1784__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullCData(oldp+69110,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1785_li1785__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69111,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1785_li1785__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69112,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1785_li1785__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullSData(oldp+69113,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5485___05F_output_0_0)
                                  ? 0x1221U : 0x1122U)),16);
    bufp->fullCData(oldp+69114,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1786_li1786__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69115,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1786_li1786__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69116,((3U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1786_li1786__DOT__genblk1__DOT__lut_5__DOT__s2))),2);
    bufp->fullIData(oldp+69117,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5487___05F_output_0_0)
                                  ? 0x6c93936cU : 0xe81717e8U)),32);
    bufp->fullSData(oldp+69118,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1787_li1787__DOT__genblk1__DOT__lut_6__DOT__s4),16);
    bufp->fullCData(oldp+69119,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1787_li1787__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69120,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1787_li1787__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69121,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1787_li1787__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullCData(oldp+69122,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1788_li1788__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69123,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1788_li1788__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullCData(oldp+69124,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1789_li1789__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69125,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1789_li1789__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69126,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1789_li1789__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullCData(oldp+69127,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1790_li1790__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69128,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1790_li1790__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69129,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1790_li1790__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullCData(oldp+69130,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1791_li1791__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullCData(oldp+69131,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1792_li1792__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullCData(oldp+69132,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1981_li1981__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69133,((3U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1981_li1981__DOT__genblk1__DOT__lut_5__DOT__s2))),2);
    bufp->fullCData(oldp+69134,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1982_li1982__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69135,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1982_li1982__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullCData(oldp+69136,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1983_li1983__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullCData(oldp+69137,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1984_li1984__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69138,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1984_li1984__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69139,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1984_li1984__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullSData(oldp+69140,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4490___05F_output_0_0)
                                  ? 0x110U : 0x1001U)),16);
    bufp->fullCData(oldp+69141,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1985_li1985__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69142,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1985_li1985__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69143,((3U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1985_li1985__DOT__genblk1__DOT__lut_5__DOT__s2))),2);
    bufp->fullSData(oldp+69144,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4490___05F_output_0_0)
                                  ? 0x9666U : 0x9996U)),16);
    bufp->fullCData(oldp+69145,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1986_li1986__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69146,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1986_li1986__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69147,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1986_li1986__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullCData(oldp+69148,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4487___05F_output_0_0)
                                  ? 0x21U : 0x12U)),8);
    bufp->fullCData(oldp+69149,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1987_li1987__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69150,((3U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1987_li1987__DOT__genblk1__DOT__lut_5__DOT__s2))),2);
    bufp->fullSData(oldp+69151,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4475___05F_output_0_0)
                                  ? 0x9669U : 0x6996U)),16);
    bufp->fullCData(oldp+69152,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1988_li1988__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69153,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1988_li1988__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69154,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1988_li1988__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullSData(oldp+69155,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1989_li1989__DOT__genblk1__DOT__lut_6__DOT__s4),16);
    bufp->fullCData(oldp+69156,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1989_li1989__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69157,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1989_li1989__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69158,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1989_li1989__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullIData(oldp+69159,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4500___05F_output_0_0)
                                  ? 0x1700e8ffU : 0xffff0000U)),32);
    bufp->fullSData(oldp+69160,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1990_li1990__DOT__genblk1__DOT__lut_6__DOT__s4),16);
    bufp->fullCData(oldp+69161,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1990_li1990__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69162,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1990_li1990__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69163,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1990_li1990__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullSData(oldp+69164,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4485___05F_output_0_0)
                                  ? 0x20dU : 0xd02U)),16);
    bufp->fullCData(oldp+69165,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1991_li1991__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69166,((0xfU & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1991_li1991__DOT__genblk1__DOT__lut_5__DOT__s3))),4);
    bufp->fullCData(oldp+69167,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1991_li1991__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullIData(oldp+69168,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4499___05F_output_0_0)
                                  ? 0x96965a5aU : 0xa596965aU)),32);
    bufp->fullSData(oldp+69169,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1992_li1992__DOT__genblk1__DOT__lut_6__DOT__s4),16);
    bufp->fullCData(oldp+69170,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1992_li1992__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69171,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1992_li1992__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69172,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1992_li1992__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullSData(oldp+69173,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4502___05F_output_0_0)
                                  ? 0x14U : 0x41U)),16);
    bufp->fullCData(oldp+69174,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4502___05F_output_0_0)
                                  ? 0x14U : 0x41U)),8);
    bufp->fullCData(oldp+69175,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1993_li1993__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69176,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1993_li1993__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullSData(oldp+69177,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4504___05F_output_0_0)
                                  ? 0x321U : 0x2130U)),16);
    bufp->fullCData(oldp+69178,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1994_li1994__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69179,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1994_li1994__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69180,((3U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1994_li1994__DOT__genblk1__DOT__lut_5__DOT__s2))),2);
    bufp->fullSData(oldp+69181,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4507___05F_output_0_0)
                                  ? 0x401U : 0x104U)),16);
    bufp->fullCData(oldp+69182,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1995_li1995__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69183,((0xfU & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1995_li1995__DOT__genblk1__DOT__lut_5__DOT__s3))),4);
    bufp->fullCData(oldp+69184,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1995_li1995__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullSData(oldp+69185,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4482___05F_output_0_0)
                                  ? 0x6996U : 0x9669U)),16);
    bufp->fullCData(oldp+69186,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1996_li1996__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69187,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1996_li1996__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69188,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1996_li1996__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullIData(oldp+69189,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4471___05F_output_0_0)
                                  ? 0x4dd4d44dU : 0xb22b2bb2U)),32);
    bufp->fullSData(oldp+69190,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1997_li1997__DOT__genblk1__DOT__lut_6__DOT__s4),16);
    bufp->fullCData(oldp+69191,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1997_li1997__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69192,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1997_li1997__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69193,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1997_li1997__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullIData(oldp+69194,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4470___05F_output_0_0)
                                  ? 0x69699669U : 0x69969669U)),32);
    bufp->fullSData(oldp+69195,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1998_li1998__DOT__genblk1__DOT__lut_6__DOT__s4),16);
    bufp->fullCData(oldp+69196,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1998_li1998__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69197,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1998_li1998__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69198,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1998_li1998__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullCData(oldp+69199,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4512___05F_output_0_0)
                                  ? 9U : 6U)),8);
    bufp->fullCData(oldp+69200,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4512___05F_output_0_0)
                                  ? 9U : 6U)),4);
    bufp->fullCData(oldp+69201,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1999_li1999__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullCData(oldp+69202,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2000_li2000__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69203,((0xfU & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2000_li2000__DOT__genblk1__DOT__lut_5__DOT__s3))),4);
    bufp->fullCData(oldp+69204,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2000_li2000__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullCData(oldp+69205,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2001_li2001__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69206,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2001_li2001__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullCData(oldp+69207,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2002_li2002__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69208,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2002_li2002__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69209,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2002_li2002__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullCData(oldp+69210,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4517___05F_output_0_0)
                                  ? 0x12U : 0x21U)),8);
    bufp->fullCData(oldp+69211,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2003_li2003__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69212,((3U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2003_li2003__DOT__genblk1__DOT__lut_5__DOT__s2))),2);
    bufp->fullCData(oldp+69213,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2004_li2004__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69214,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2004_li2004__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69215,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2004_li2004__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullCData(oldp+69216,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4519___05F_output_0_0)
                                  ? 0x96U : 0x69U)),8);
    bufp->fullCData(oldp+69217,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2005_li2005__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69218,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2005_li2005__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullCData(oldp+69219,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2006_li2006__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69220,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2006_li2006__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69221,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2006_li2006__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullCData(oldp+69222,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4520___05F_output_0_0)
                                  ? 2U : 1U)),2);
    bufp->fullCData(oldp+69223,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2008_li2008__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullCData(oldp+69224,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2009_li2009__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullCData(oldp+69225,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2010_li2010__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullCData(oldp+69226,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2060_li2060__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69227,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2060_li2060__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullCData(oldp+69228,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2061_li2061__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullCData(oldp+69229,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2062_li2062__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69230,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2062_li2062__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullCData(oldp+69231,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4368___05F_output_0_0) 
                                  << 2U) | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4370___05F_output_0_0))),5);
    bufp->fullCData(oldp+69232,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4368___05F_output_0_0)
                                  ? 2U : 1U)),4);
    bufp->fullCData(oldp+69233,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4368___05F_output_0_0)
                                  ? 2U : 1U)),2);
    bufp->fullSData(oldp+69234,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2064_li2064__DOT__genblk1__DOT__lut_6__DOT__s4),16);
    bufp->fullCData(oldp+69235,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2064_li2064__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69236,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2064_li2064__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69237,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2064_li2064__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullCData(oldp+69238,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2065_li2065__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69239,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2065_li2065__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullCData(oldp+69240,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4372___05F_output_0_0) 
                                  << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4373___05F_output_0_0) 
                                             << 3U) 
                                            | ((4U 
                                                & ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4363___05F__DOT__genblk1__DOT__lut_5__DOT__s1) 
                                                   << 2U)) 
                                               | ((2U 
                                                   & ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4376___05F__DOT__genblk1__DOT__lut_5__DOT__s1) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4374___05F__DOT__genblk1__DOT__lut_5__DOT__s1))))))),5);
    bufp->fullSData(oldp+69241,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4372___05F_output_0_0)
                                  ? 0xc35aU : 0x5a3cU)),16);
    bufp->fullCData(oldp+69242,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2066_li2066__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69243,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2066_li2066__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69244,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2066_li2066__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullCData(oldp+69245,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2067_li2067__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69246,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2067_li2067__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69247,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2067_li2067__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullCData(oldp+69248,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4381___05F_output_0_0) 
                                  << 4U) | ((8U & ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4366___05F__DOT__genblk1__DOT__lut_5__DOT__s1) 
                                                   << 3U)) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4382___05F_output_0_0) 
                                                << 2U) 
                                               | ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4377___05F_output_0_0) 
                                                  << 1U))))),5);
    bufp->fullSData(oldp+69249,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4381___05F_output_0_0)
                                  ? 0x505U : 0x4150U)),16);
    bufp->fullCData(oldp+69250,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2068_li2068__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69251,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2068_li2068__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69252,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2068_li2068__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullSData(oldp+69253,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2069_li2069__DOT__genblk1__DOT__lut_6__DOT__s4),16);
    bufp->fullCData(oldp+69254,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2069_li2069__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69255,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2069_li2069__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69256,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2069_li2069__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullSData(oldp+69257,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2070_li2070__DOT__genblk1__DOT__lut_6__DOT__s4),16);
    bufp->fullCData(oldp+69258,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2070_li2070__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69259,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2070_li2070__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69260,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2070_li2070__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullCData(oldp+69261,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2071_li2071__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69262,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2071_li2071__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69263,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2071_li2071__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullIData(oldp+69264,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4352___05F_output_0_0)
                                  ? 0x95a95695U : 0x56956a56U)),32);
    bufp->fullSData(oldp+69265,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2072_li2072__DOT__genblk1__DOT__lut_6__DOT__s4),16);
    bufp->fullCData(oldp+69266,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2072_li2072__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69267,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2072_li2072__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69268,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2072_li2072__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullCData(oldp+69269,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4388___05F_output_0_0) 
                                  << 3U) | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4390___05F_output_0_0))),5);
    bufp->fullCData(oldp+69270,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4388___05F_output_0_0)
                                  ? 1U : 2U)),8);
    bufp->fullCData(oldp+69271,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4388___05F_output_0_0)
                                  ? 1U : 2U)),4);
    bufp->fullCData(oldp+69272,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4388___05F_output_0_0)
                                  ? 1U : 2U)),2);
    bufp->fullCData(oldp+69273,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2074_li2074__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69274,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2074_li2074__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69275,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2074_li2074__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullCData(oldp+69276,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2075_li2075__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69277,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2075_li2075__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69278,((3U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2075_li2075__DOT__genblk1__DOT__lut_5__DOT__s2))),2);
    bufp->fullSData(oldp+69279,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4391___05F_output_0_0)
                                  ? 0x312U : 0x1230U)),16);
    bufp->fullCData(oldp+69280,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2076_li2076__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69281,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2076_li2076__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69282,((3U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2076_li2076__DOT__genblk1__DOT__lut_5__DOT__s2))),2);
    bufp->fullSData(oldp+69283,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4393___05F_output_0_0)
                                  ? 0x609U : 0x906U)),16);
    bufp->fullCData(oldp+69284,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2077_li2077__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69285,((0xfU & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2077_li2077__DOT__genblk1__DOT__lut_5__DOT__s3))),4);
    bufp->fullCData(oldp+69286,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2077_li2077__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullIData(oldp+69287,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4356___05F_output_0_0)
                                  ? 0xe817817eU : 0x817e17e8U)),32);
    bufp->fullSData(oldp+69288,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2078_li2078__DOT__genblk1__DOT__lut_6__DOT__s4),16);
    bufp->fullCData(oldp+69289,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2078_li2078__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69290,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2078_li2078__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69291,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2078_li2078__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullCData(oldp+69292,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4358___05F_output_0_0) 
                                  << 4U) | ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4410___05F_output_0_0) 
                                            << 1U))),5);
    bufp->fullSData(oldp+69293,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4358___05F_output_0_0)
                                  ? 1U : 4U)),16);
    bufp->fullCData(oldp+69294,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4358___05F_output_0_0)
                                  ? 1U : 4U)),8);
    bufp->fullCData(oldp+69295,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4358___05F_output_0_0)
                                  ? 1U : 4U)),4);
    bufp->fullCData(oldp+69296,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2079_li2079__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullSData(oldp+69297,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2080_li2080__DOT__genblk1__DOT__lut_6__DOT__s4),16);
    bufp->fullCData(oldp+69298,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2080_li2080__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69299,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2080_li2080__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69300,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2080_li2080__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullCData(oldp+69301,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2081_li2081__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69302,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2081_li2081__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullSData(oldp+69303,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2082_li2082__DOT__genblk1__DOT__lut_6__DOT__s4),16);
    bufp->fullCData(oldp+69304,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2082_li2082__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69305,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2082_li2082__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69306,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2082_li2082__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullCData(oldp+69307,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2083_li2083__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullCData(oldp+69308,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2084_li2084__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69309,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2084_li2084__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullCData(oldp+69310,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4400___05F_output_0_0)
                                  ? 4U : 1U)),4);
    bufp->fullCData(oldp+69311,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2085_li2085__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullCData(oldp+69312,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4400___05F_output_0_0)
                                  ? 0xaU : 6U)),4);
    bufp->fullCData(oldp+69313,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2086_li2086__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullCData(oldp+69314,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2087_li2087__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69315,((3U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2087_li2087__DOT__genblk1__DOT__lut_5__DOT__s2))),2);
    bufp->fullCData(oldp+69316,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2088_li2088__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69317,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2088_li2088__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullCData(oldp+69318,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2198_li2198__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69319,((3U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2198_li2198__DOT__genblk1__DOT__lut_5__DOT__s2))),2);
    bufp->fullCData(oldp+69320,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2199_li2199__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69321,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2199_li2199__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69322,((3U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2199_li2199__DOT__genblk1__DOT__lut_5__DOT__s2))),2);
    bufp->fullCData(oldp+69323,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2200_li2200__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69324,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2200_li2200__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69325,((3U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2200_li2200__DOT__genblk1__DOT__lut_5__DOT__s2))),2);
    bufp->fullCData(oldp+69326,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2201_li2201__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69327,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2201_li2201__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69328,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2201_li2201__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullCData(oldp+69329,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2202_li2202__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullSData(oldp+69330,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3452___05F_output_0_0)
                                  ? 0xa569U : 0x695aU)),16);
    bufp->fullCData(oldp+69331,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2203_li2203__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69332,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2203_li2203__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69333,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2203_li2203__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullSData(oldp+69334,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3456___05F_output_0_0)
                                  ? 0x6996U : 0x9669U)),16);
    bufp->fullCData(oldp+69335,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2204_li2204__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69336,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2204_li2204__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69337,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2204_li2204__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullCData(oldp+69338,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2205_li2205__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69339,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2205_li2205__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69340,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2205_li2205__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullSData(oldp+69341,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3462___05F_output_0_0)
                                  ? 0x7887U : 0xff0U)),16);
    bufp->fullCData(oldp+69342,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2206_li2206__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69343,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2206_li2206__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69344,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2206_li2206__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullIData(oldp+69345,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3463___05F_output_0_0)
                                  ? 0x88f0fffU : 0xf770f000U)),32);
    bufp->fullSData(oldp+69346,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2207_li2207__DOT__genblk1__DOT__lut_6__DOT__s4),16);
    bufp->fullCData(oldp+69347,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2207_li2207__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69348,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2207_li2207__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69349,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2207_li2207__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullSData(oldp+69350,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3465___05F_output_0_0)
                                  ? 0xc3U : 0x96U)),16);
    bufp->fullCData(oldp+69351,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3465___05F_output_0_0)
                                  ? 0xc3U : 0x96U)),8);
    bufp->fullCData(oldp+69352,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2208_li2208__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69353,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2208_li2208__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullIData(oldp+69354,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3464___05F_output_0_0)
                                  ? 0xe11ee11eU : 0xe11e8778U)),32);
    bufp->fullSData(oldp+69355,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2209_li2209__DOT__genblk1__DOT__lut_6__DOT__s4),16);
    bufp->fullCData(oldp+69356,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2209_li2209__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69357,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2209_li2209__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69358,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2209_li2209__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullCData(oldp+69359,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3467___05F_output_0_0)
                                  ? 0x66U : 0x69U)),8);
    bufp->fullCData(oldp+69360,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2210_li2210__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69361,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2210_li2210__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullIData(oldp+69362,(((1U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3447___05F__DOT__genblk1__DOT__lut_5__DOT__s1))
                                  ? 0x999c6663U : 0x3339ccc6U)),32);
    bufp->fullSData(oldp+69363,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2211_li2211__DOT__genblk1__DOT__lut_6__DOT__s4),16);
    bufp->fullCData(oldp+69364,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2211_li2211__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69365,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2211_li2211__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69366,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2211_li2211__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullCData(oldp+69367,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2212_li2212__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69368,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2212_li2212__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69369,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2212_li2212__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullSData(oldp+69370,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2213_li2213__DOT__genblk1__DOT__lut_6__DOT__s4),16);
    bufp->fullCData(oldp+69371,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2213_li2213__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69372,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2213_li2213__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69373,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2213_li2213__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullSData(oldp+69374,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3470___05F_output_0_0)
                                  ? 0x6c93U : 0x3cc3U)),16);
    bufp->fullCData(oldp+69375,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2214_li2214__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69376,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2214_li2214__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69377,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2214_li2214__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullCData(oldp+69378,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2215_li2215__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69379,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2215_li2215__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69380,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2215_li2215__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullIData(oldp+69381,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3442___05F_output_0_0)
                                  ? 0xc9939336U : 0x9336366cU)),32);
    bufp->fullSData(oldp+69382,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2216_li2216__DOT__genblk1__DOT__lut_6__DOT__s4),16);
    bufp->fullCData(oldp+69383,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2216_li2216__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69384,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2216_li2216__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69385,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2216_li2216__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullCData(oldp+69386,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2217_li2217__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69387,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2217_li2217__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69388,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2217_li2217__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullCData(oldp+69389,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2218_li2218__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69390,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2218_li2218__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69391,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2218_li2218__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullCData(oldp+69392,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2219_li2219__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullSData(oldp+69393,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2221_li2221__DOT__genblk1__DOT__lut_6__DOT__s4),16);
    bufp->fullCData(oldp+69394,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2221_li2221__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69395,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2221_li2221__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69396,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2221_li2221__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullCData(oldp+69397,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2222_li2222__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69398,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2222_li2222__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69399,((3U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2222_li2222__DOT__genblk1__DOT__lut_5__DOT__s2))),2);
    bufp->fullSData(oldp+69400,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2223_li2223__DOT__genblk1__DOT__lut_6__DOT__s4),16);
    bufp->fullCData(oldp+69401,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2223_li2223__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69402,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2223_li2223__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69403,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2223_li2223__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullCData(oldp+69404,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3482___05F_output_0_0)
                                  ? 0x10U : 1U)),8);
    bufp->fullCData(oldp+69405,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2224_li2224__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69406,((3U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2224_li2224__DOT__genblk1__DOT__lut_5__DOT__s2))),2);
    bufp->fullCData(oldp+69407,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3482___05F_output_0_0)
                                  ? 0x44U : 0x14U)),8);
    bufp->fullCData(oldp+69408,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2225_li2225__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69409,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2225_li2225__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullCData(oldp+69410,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2226_li2226__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69411,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2226_li2226__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69412,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2226_li2226__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullCData(oldp+69413,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2227_li2227__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69414,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2227_li2227__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69415,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li2227_li2227__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullSData(oldp+69416,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3430___05F__DOT__genblk1__DOT__lut_6__DOT__s4),16);
    bufp->fullCData(oldp+69417,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3430___05F__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69418,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3430___05F__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69419,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3430___05F__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullSData(oldp+69420,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3430___05F_output_0_0)
                                  ? 0xe8a0U : 0xfae8U)),16);
    bufp->fullCData(oldp+69421,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3431___05F__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69422,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3431___05F__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69423,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3431___05F__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullCData(oldp+69424,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3433___05F__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullSData(oldp+69425,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3434___05F__DOT__genblk1__DOT__lut_6__DOT__s4),16);
    bufp->fullCData(oldp+69426,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3434___05F__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69427,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3434___05F__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69428,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3434___05F__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullSData(oldp+69429,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3435___05F__DOT__genblk1__DOT__lut_6__DOT__s4),16);
    bufp->fullCData(oldp+69430,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3435___05F__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69431,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3435___05F__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69432,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3435___05F__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullCData(oldp+69433,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3436___05F__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69434,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3436___05F__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69435,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3436___05F__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullSData(oldp+69436,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3437___05F__DOT__genblk1__DOT__lut_6__DOT__s4),16);
    bufp->fullCData(oldp+69437,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3437___05F__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69438,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3437___05F__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69439,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3437___05F__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullCData(oldp+69440,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3435___05F_output_0_0) 
                                  << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3437___05F_output_0_0) 
                                             << 3U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3434___05F_output_0_0) 
                                                << 2U) 
                                               | ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3436___05F_output_0_0) 
                                                  << 1U))))),5);
    bufp->fullSData(oldp+69441,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3435___05F_output_0_0)
                                  ? 0x400U : 0x4400U)),16);
    bufp->fullCData(oldp+69442,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3438___05F__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69443,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3438___05F__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69444,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3438___05F__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullIData(oldp+69445,(((1U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3438___05F__DOT__genblk1__DOT__lut_5__DOT__s1))
                                  ? 0x55f045dU : 0x55f055fU)),32);
    bufp->fullSData(oldp+69446,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3439___05F__DOT__genblk1__DOT__lut_6__DOT__s4),16);
    bufp->fullCData(oldp+69447,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3439___05F__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69448,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3439___05F__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69449,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3439___05F__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullSData(oldp+69450,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3439___05F_output_0_0)
                                  ? 0xe8c0U : 0xfce8U)),16);
    bufp->fullCData(oldp+69451,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3440___05F__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69452,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3440___05F__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69453,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3440___05F__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullCData(oldp+69454,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3441___05F__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69455,((0xfU & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3441___05F__DOT__genblk1__DOT__lut_5__DOT__s3))),4);
    bufp->fullCData(oldp+69456,((3U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3441___05F__DOT__genblk1__DOT__lut_5__DOT__s3))),2);
    bufp->fullSData(oldp+69457,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3441___05F_output_0_0)
                                  ? 0xfce8U : 0xe8c0U)),16);
    bufp->fullCData(oldp+69458,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3442___05F__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69459,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3442___05F__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69460,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3442___05F__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullIData(oldp+69461,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3443___05F_output_0_0)
                                  ? 0xcddf855eU : 0xfeececc8U)),32);
    bufp->fullSData(oldp+69462,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3444___05F__DOT__genblk1__DOT__lut_6__DOT__s4),16);
    bufp->fullCData(oldp+69463,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3444___05F__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69464,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3444___05F__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69465,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3444___05F__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullIData(oldp+69466,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3443___05F_output_0_0)
                                  ? 0x7fcdcd07U : 0x71f1f7fU)),32);
    bufp->fullSData(oldp+69467,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3445___05F__DOT__genblk1__DOT__lut_6__DOT__s4),16);
    bufp->fullCData(oldp+69468,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3445___05F__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69469,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3445___05F__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69470,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3445___05F__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullSData(oldp+69471,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3439___05F_output_0_0)
                                  ? 0x963cU : 0xc396U)),16);
    bufp->fullCData(oldp+69472,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3446___05F__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69473,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3446___05F__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69474,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3446___05F__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullCData(oldp+69475,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3447___05F__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69476,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3447___05F__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullIData(oldp+69477,(((1U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3438___05F__DOT__genblk1__DOT__lut_5__DOT__s1))
                                  ? 0xa55aa659U : 0xa55aa55aU)),32);
    bufp->fullSData(oldp+69478,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3448___05F__DOT__genblk1__DOT__lut_6__DOT__s4),16);
    bufp->fullCData(oldp+69479,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3448___05F__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69480,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3448___05F__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69481,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3448___05F__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullCData(oldp+69482,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3448___05F_output_0_0)
                                  ? 0U : 1U)),8);
    bufp->fullCData(oldp+69483,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3449___05F__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69484,((3U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3449___05F__DOT__genblk1__DOT__lut_5__DOT__s2))),2);
    bufp->fullCData(oldp+69485,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3451___05F__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69486,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3451___05F__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69487,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3451___05F__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullCData(oldp+69488,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3452___05F__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69489,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3452___05F__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullCData(oldp+69490,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3453___05F__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69491,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3453___05F__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69492,((3U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3453___05F__DOT__genblk1__DOT__lut_5__DOT__s2))),2);
    bufp->fullCData(oldp+69493,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3454___05F__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullIData(oldp+69494,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3453___05F_output_0_0)
                                  ? 0x3f5353f3U : 0x353f3f53U)),32);
    bufp->fullSData(oldp+69495,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3455___05F__DOT__genblk1__DOT__lut_6__DOT__s4),16);
    bufp->fullCData(oldp+69496,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3455___05F__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69497,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3455___05F__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69498,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3455___05F__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullSData(oldp+69499,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3452___05F_output_0_0)
                                  ? 0x54dU : 0x4d5fU)),16);
    bufp->fullCData(oldp+69500,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3456___05F__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69501,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3456___05F__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69502,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3456___05F__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullIData(oldp+69503,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3434___05F_output_0_0)
                                  ? 0x65a666aaU : 0x556666aaU)),32);
    bufp->fullSData(oldp+69504,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3458___05F__DOT__genblk1__DOT__lut_6__DOT__s4),16);
    bufp->fullCData(oldp+69505,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3458___05F__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69506,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3458___05F__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69507,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3458___05F__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullCData(oldp+69508,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3435___05F_output_0_0) 
                                  << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3434___05F_output_0_0) 
                                             << 2U) 
                                            | ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3436___05F_output_0_0) 
                                               << 1U)))),5);
    bufp->fullSData(oldp+69509,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3435___05F_output_0_0)
                                  ? 4U : 0x44U)),16);
    bufp->fullCData(oldp+69510,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3435___05F_output_0_0)
                                  ? 4U : 0x44U)),8);
    bufp->fullCData(oldp+69511,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3459___05F__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69512,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3459___05F__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullSData(oldp+69513,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3460___05F__DOT__genblk1__DOT__lut_6__DOT__s4),16);
    bufp->fullCData(oldp+69514,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3460___05F__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69515,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3460___05F__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69516,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3460___05F__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullCData(oldp+69517,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3461___05F__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69518,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3461___05F__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69519,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3461___05F__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullSData(oldp+69520,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3462___05F__DOT__genblk1__DOT__lut_6__DOT__s4),16);
    bufp->fullCData(oldp+69521,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3462___05F__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69522,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3462___05F__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69523,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3462___05F__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullCData(oldp+69524,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3463___05F__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69525,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3463___05F__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullIData(oldp+69526,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3460___05F_output_0_0)
                                  ? 0xb200a000U : 0xfa00a000U)),32);
    bufp->fullSData(oldp+69527,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3464___05F__DOT__genblk1__DOT__lut_6__DOT__s4),16);
    bufp->fullCData(oldp+69528,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3464___05F__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69529,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3464___05F__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69530,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3464___05F__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullCData(oldp+69531,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3465___05F__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69532,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3465___05F__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullSData(oldp+69533,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3466___05F__DOT__genblk1__DOT__lut_6__DOT__s4),16);
    bufp->fullCData(oldp+69534,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3466___05F__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69535,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3466___05F__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69536,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3466___05F__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullSData(oldp+69537,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3467___05F__DOT__genblk1__DOT__lut_6__DOT__s4),16);
    bufp->fullCData(oldp+69538,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3467___05F__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69539,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3467___05F__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69540,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3467___05F__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullIData(oldp+69541,(((1U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3447___05F__DOT__genblk1__DOT__lut_5__DOT__s1))
                                  ? 0x11107773U : 0x3331fff7U)),32);
    bufp->fullSData(oldp+69542,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3468___05F__DOT__genblk1__DOT__lut_6__DOT__s4),16);
    bufp->fullCData(oldp+69543,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3468___05F__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69544,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3468___05F__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69545,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3468___05F__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullSData(oldp+69546,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3470___05F__DOT__genblk1__DOT__lut_6__DOT__s4),16);
    bufp->fullCData(oldp+69547,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3470___05F__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69548,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3470___05F__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69549,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3470___05F__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullSData(oldp+69550,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3441___05F_output_0_0)
                                  ? 0xc396U : 0x963cU)),16);
    bufp->fullCData(oldp+69551,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3471___05F__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69552,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3471___05F__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69553,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3471___05F__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullSData(oldp+69554,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3472___05F__DOT__genblk1__DOT__lut_6__DOT__s4),16);
    bufp->fullCData(oldp+69555,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3472___05F__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69556,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3472___05F__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69557,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3472___05F__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullSData(oldp+69558,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3470___05F_output_0_0)
                                  ? 0xdf4cU : 0xcf0cU)),16);
    bufp->fullCData(oldp+69559,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3473___05F__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69560,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3473___05F__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69561,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3473___05F__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullCData(oldp+69562,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3445___05F_output_0_0) 
                                  << 3U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3444___05F_output_0_0) 
                                             << 2U) 
                                            | ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3473___05F_output_0_0) 
                                               << 1U)))),5);
    bufp->fullCData(oldp+69563,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3445___05F_output_0_0)
                                  ? 0x40U : 0x51U)),8);
    bufp->fullCData(oldp+69564,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3474___05F__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69565,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3474___05F__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullSData(oldp+69566,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3442___05F_output_0_0)
                                  ? 0xfea8U : 0xea80U)),16);
    bufp->fullCData(oldp+69567,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3475___05F__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69568,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3475___05F__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69569,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3475___05F__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullIData(oldp+69570,(((1U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3474___05F__DOT__genblk1__DOT__lut_5__DOT__s1))
                                  ? 0xfeececc8U : 0xecc8c880U)),32);
    bufp->fullSData(oldp+69571,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3477___05F__DOT__genblk1__DOT__lut_6__DOT__s4),16);
    bufp->fullCData(oldp+69572,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3477___05F__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69573,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3477___05F__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69574,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3477___05F__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullCData(oldp+69575,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3478___05F__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69576,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3478___05F__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullCData(oldp+69577,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3479___05F__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69578,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3479___05F__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69579,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3479___05F__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullCData(oldp+69580,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3480___05F__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullCData(oldp+69581,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3481___05F__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullCData(oldp+69582,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3482___05F__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69583,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3482___05F__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullCData(oldp+69584,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3494___05F__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69585,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3497___05F__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullCData(oldp+69586,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3507___05F__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69587,((3U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n3507___05F__DOT__genblk1__DOT__lut_5__DOT__s2))),2);
    bufp->fullCData(oldp+69588,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4345___05F__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69589,((0xfU & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4345___05F__DOT__genblk1__DOT__lut_5__DOT__s3))),4);
    bufp->fullCData(oldp+69590,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4345___05F__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullSData(oldp+69591,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4346___05F__DOT__genblk1__DOT__lut_6__DOT__s4),16);
    bufp->fullCData(oldp+69592,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4346___05F__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69593,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4346___05F__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69594,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4346___05F__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullSData(oldp+69595,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4347___05F__DOT__genblk1__DOT__lut_6__DOT__s4),16);
    bufp->fullCData(oldp+69596,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4347___05F__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69597,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4347___05F__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69598,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4347___05F__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullSData(oldp+69599,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4348___05F__DOT__genblk1__DOT__lut_6__DOT__s4),16);
    bufp->fullCData(oldp+69600,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4348___05F__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69601,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4348___05F__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69602,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4348___05F__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullSData(oldp+69603,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4349___05F__DOT__genblk1__DOT__lut_6__DOT__s4),16);
    bufp->fullCData(oldp+69604,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4349___05F__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69605,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4349___05F__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69606,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4349___05F__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullCData(oldp+69607,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4348___05F_output_0_0) 
                                  << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4346___05F_output_0_0) 
                                             << 3U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4349___05F_output_0_0) 
                                                << 2U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4347___05F_output_0_0) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4345___05F_output_0_0)))))),5);
    bufp->fullSData(oldp+69608,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4348___05F_output_0_0)
                                  ? 0xb030U : 0xf0f0U)),16);
    bufp->fullCData(oldp+69609,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4350___05F__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69610,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4350___05F__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69611,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4350___05F__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullSData(oldp+69612,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4350___05F_output_0_0)
                                  ? 0xe8a0U : 0xfae8U)),16);
    bufp->fullCData(oldp+69613,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4351___05F__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69614,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4351___05F__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69615,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4351___05F__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullCData(oldp+69616,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4352___05F__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69617,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4352___05F__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69618,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4352___05F__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullSData(oldp+69619,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4352___05F_output_0_0)
                                  ? 0xfee0U : 0xf880U)),16);
    bufp->fullCData(oldp+69620,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4353___05F__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69621,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4353___05F__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69622,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4353___05F__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullIData(oldp+69623,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4353___05F_output_0_0)
                                  ? 0x555656aaU : 0x556a6aaaU)),32);
    bufp->fullSData(oldp+69624,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4355___05F__DOT__genblk1__DOT__lut_6__DOT__s4),16);
    bufp->fullCData(oldp+69625,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4355___05F__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69626,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4355___05F__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69627,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4355___05F__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullCData(oldp+69628,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4356___05F__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69629,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4356___05F__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69630,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4356___05F__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullCData(oldp+69631,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4357___05F__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69632,((3U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4357___05F__DOT__genblk1__DOT__lut_5__DOT__s2))),2);
    bufp->fullCData(oldp+69633,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4358___05F__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69634,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4358___05F__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69635,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4358___05F__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullIData(oldp+69636,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4356___05F_output_0_0)
                                  ? 0x5f6cfafaU : 0x6c6cfafaU)),32);
    bufp->fullSData(oldp+69637,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4359___05F__DOT__genblk1__DOT__lut_6__DOT__s4),16);
    bufp->fullCData(oldp+69638,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4359___05F__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69639,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4359___05F__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69640,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4359___05F__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullCData(oldp+69641,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4348___05F_output_0_0) 
                                  << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4346___05F_output_0_0) 
                                             << 3U) 
                                            | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4345___05F_output_0_0)))),5);
    bufp->fullSData(oldp+69642,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4348___05F_output_0_0)
                                  ? 0x103U : 0U)),16);
    bufp->fullCData(oldp+69643,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4362___05F__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69644,((0xfU & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4362___05F__DOT__genblk1__DOT__lut_5__DOT__s3))),4);
    bufp->fullCData(oldp+69645,((3U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4362___05F__DOT__genblk1__DOT__lut_5__DOT__s3))),2);
    bufp->fullCData(oldp+69646,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4363___05F__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69647,((0xfU & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4363___05F__DOT__genblk1__DOT__lut_5__DOT__s3))),4);
    bufp->fullCData(oldp+69648,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4363___05F__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullSData(oldp+69649,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4364___05F__DOT__genblk1__DOT__lut_6__DOT__s4),16);
    bufp->fullCData(oldp+69650,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4364___05F__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69651,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4364___05F__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69652,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4364___05F__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullSData(oldp+69653,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4350___05F_output_0_0)
                                  ? 0x104U : 0x401U)),16);
    bufp->fullCData(oldp+69654,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4365___05F__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69655,((0xfU & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4365___05F__DOT__genblk1__DOT__lut_5__DOT__s3))),4);
    bufp->fullCData(oldp+69656,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4365___05F__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullCData(oldp+69657,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4366___05F__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69658,((0xfU & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4366___05F__DOT__genblk1__DOT__lut_5__DOT__s3))),4);
    bufp->fullCData(oldp+69659,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4366___05F__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullCData(oldp+69660,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4367___05F__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69661,((0xfU & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4367___05F__DOT__genblk1__DOT__lut_5__DOT__s3))),4);
    bufp->fullCData(oldp+69662,((3U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4367___05F__DOT__genblk1__DOT__lut_5__DOT__s3))),2);
    bufp->fullIData(oldp+69663,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4345___05F_output_0_0)
                                  ? 0xa3b7173fU : 0x71f3a3b7U)),32);
    bufp->fullSData(oldp+69664,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4368___05F__DOT__genblk1__DOT__lut_6__DOT__s4),16);
    bufp->fullCData(oldp+69665,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4368___05F__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69666,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4368___05F__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69667,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4368___05F__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullCData(oldp+69668,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4369___05F__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69669,((0xfU & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4369___05F__DOT__genblk1__DOT__lut_5__DOT__s3))),4);
    bufp->fullSData(oldp+69670,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4370___05F__DOT__genblk1__DOT__lut_6__DOT__s4),16);
    bufp->fullCData(oldp+69671,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4370___05F__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69672,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4370___05F__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69673,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4370___05F__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullCData(oldp+69674,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4371___05F__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69675,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4371___05F__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullSData(oldp+69676,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4372___05F__DOT__genblk1__DOT__lut_6__DOT__s4),16);
    bufp->fullCData(oldp+69677,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4372___05F__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69678,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4372___05F__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69679,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4372___05F__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullSData(oldp+69680,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4370___05F_output_0_0)
                                  ? 0xf550U : 0xfcc0U)),16);
    bufp->fullCData(oldp+69681,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4373___05F__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69682,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4373___05F__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69683,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4373___05F__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullCData(oldp+69684,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4374___05F__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullSData(oldp+69685,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4350___05F_output_0_0)
                                  ? 0x600U : 0x900U)),16);
    bufp->fullCData(oldp+69686,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4375___05F__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69687,((0xfU & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4375___05F__DOT__genblk1__DOT__lut_5__DOT__s3))),4);
    bufp->fullCData(oldp+69688,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4375___05F__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullCData(oldp+69689,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4376___05F__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullCData(oldp+69690,(((0x20U & ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4376___05F__DOT__genblk1__DOT__lut_5__DOT__s1) 
                                           << 5U)) 
                                 | ((0x10U & ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4374___05F__DOT__genblk1__DOT__lut_5__DOT__s1) 
                                              << 4U)) 
                                    | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4373___05F_output_0_0) 
                                        << 3U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4375___05F_output_0_0) 
                                                   << 2U) 
                                                  | ((2U 
                                                      & ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4363___05F__DOT__genblk1__DOT__lut_5__DOT__s1) 
                                                         << 1U)) 
                                                     | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4372___05F_output_0_0))))))),6);
    bufp->fullIData(oldp+69691,(((1U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4376___05F__DOT__genblk1__DOT__lut_5__DOT__s1))
                                  ? 0x9030c09U : 0x306060cU)),32);
    bufp->fullSData(oldp+69692,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4377___05F__DOT__genblk1__DOT__lut_6__DOT__s4),16);
    bufp->fullCData(oldp+69693,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4377___05F__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69694,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4377___05F__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69695,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4377___05F__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullSData(oldp+69696,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4378___05F__DOT__genblk1__DOT__lut_6__DOT__s4),16);
    bufp->fullCData(oldp+69697,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4378___05F__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69698,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4378___05F__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69699,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4378___05F__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullCData(oldp+69700,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4379___05F__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69701,((3U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4379___05F__DOT__genblk1__DOT__lut_5__DOT__s2))),2);
    bufp->fullSData(oldp+69702,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4380___05F__DOT__genblk1__DOT__lut_6__DOT__s4),16);
    bufp->fullCData(oldp+69703,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4380___05F__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69704,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4380___05F__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69705,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4380___05F__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullCData(oldp+69706,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4381___05F__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69707,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4381___05F__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69708,((3U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4381___05F__DOT__genblk1__DOT__lut_5__DOT__s2))),2);
    bufp->fullSData(oldp+69709,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4382___05F__DOT__genblk1__DOT__lut_6__DOT__s4),16);
    bufp->fullCData(oldp+69710,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4382___05F__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69711,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4382___05F__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69712,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4382___05F__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullSData(oldp+69713,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4383___05F__DOT__genblk1__DOT__lut_6__DOT__s4),16);
    bufp->fullCData(oldp+69714,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4383___05F__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69715,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4383___05F__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69716,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4383___05F__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullCData(oldp+69717,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4383___05F_output_0_0) 
                                  << 5U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4377___05F_output_0_0) 
                                             << 4U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4380___05F_output_0_0) 
                                                << 3U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4381___05F_output_0_0) 
                                                   << 2U) 
                                                  | ((2U 
                                                      & ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4366___05F__DOT__genblk1__DOT__lut_5__DOT__s1) 
                                                         << 1U)) 
                                                     | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4382___05F_output_0_0))))))),6);
    bufp->fullIData(oldp+69718,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4383___05F_output_0_0)
                                  ? 0xaff02ffU : 0U)),32);
    bufp->fullSData(oldp+69719,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4384___05F__DOT__genblk1__DOT__lut_6__DOT__s4),16);
    bufp->fullCData(oldp+69720,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4384___05F__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69721,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4384___05F__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69722,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4384___05F__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullCData(oldp+69723,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4385___05F__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69724,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4385___05F__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullSData(oldp+69725,(((1U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4385___05F__DOT__genblk1__DOT__lut_5__DOT__s1))
                                  ? 0xfee9U : 0x977fU)),16);
    bufp->fullCData(oldp+69726,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4386___05F__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69727,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4386___05F__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69728,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4386___05F__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullIData(oldp+69729,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4352___05F_output_0_0)
                                  ? 0x54573dfdU : 0x437fd5d5U)),32);
    bufp->fullSData(oldp+69730,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4387___05F__DOT__genblk1__DOT__lut_6__DOT__s4),16);
    bufp->fullCData(oldp+69731,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4387___05F__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69732,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4387___05F__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69733,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4387___05F__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullCData(oldp+69734,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4384___05F_output_0_0) 
                                  << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4386___05F_output_0_0) 
                                             << 3U) 
                                            | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4387___05F_output_0_0)))),5);
    bufp->fullSData(oldp+69735,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4384___05F_output_0_0)
                                  ? 0x202U : 0x200U)),16);
    bufp->fullCData(oldp+69736,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4388___05F__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69737,((0xfU & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4388___05F__DOT__genblk1__DOT__lut_5__DOT__s3))),4);
    bufp->fullCData(oldp+69738,((3U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4388___05F__DOT__genblk1__DOT__lut_5__DOT__s3))),2);
    bufp->fullCData(oldp+69739,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4389___05F__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69740,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4389___05F__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullCData(oldp+69741,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4390___05F__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69742,((0xfU & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4390___05F__DOT__genblk1__DOT__lut_5__DOT__s3))),4);
    bufp->fullCData(oldp+69743,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4390___05F__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullCData(oldp+69744,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4391___05F__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69745,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4391___05F__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69746,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4391___05F__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullSData(oldp+69747,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4392___05F__DOT__genblk1__DOT__lut_6__DOT__s4),16);
    bufp->fullCData(oldp+69748,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4392___05F__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69749,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4392___05F__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69750,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4392___05F__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullSData(oldp+69751,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4391___05F_output_0_0)
                                  ? 0xfcacU : 0xac0cU)),16);
    bufp->fullCData(oldp+69752,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4393___05F__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69753,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4393___05F__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69754,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4393___05F__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullIData(oldp+69755,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4358___05F_output_0_0)
                                  ? 0x17c17c0U : 0U)),32);
    bufp->fullSData(oldp+69756,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4394___05F__DOT__genblk1__DOT__lut_6__DOT__s4),16);
    bufp->fullCData(oldp+69757,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4394___05F__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69758,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4394___05F__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69759,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4394___05F__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullSData(oldp+69760,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4395___05F__DOT__genblk1__DOT__lut_6__DOT__s4),16);
    bufp->fullCData(oldp+69761,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4395___05F__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69762,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4395___05F__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69763,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4395___05F__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullCData(oldp+69764,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4396___05F__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69765,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4396___05F__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullIData(oldp+69766,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4356___05F_output_0_0)
                                  ? 0xf0e0e0e0U : 0xf0808080U)),32);
    bufp->fullSData(oldp+69767,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4397___05F__DOT__genblk1__DOT__lut_6__DOT__s4),16);
    bufp->fullCData(oldp+69768,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4397___05F__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69769,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4397___05F__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69770,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4397___05F__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullSData(oldp+69771,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4398___05F__DOT__genblk1__DOT__lut_6__DOT__s4),16);
    bufp->fullCData(oldp+69772,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4398___05F__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69773,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4398___05F__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69774,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4398___05F__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullCData(oldp+69775,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4400___05F__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69776,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4400___05F__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69777,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4400___05F__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullSData(oldp+69778,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4410___05F__DOT__genblk1__DOT__lut_6__DOT__s4),16);
    bufp->fullCData(oldp+69779,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4410___05F__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69780,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4410___05F__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69781,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4410___05F__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullCData(oldp+69782,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4420___05F__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69783,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4420___05F__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69784,((3U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4420___05F__DOT__genblk1__DOT__lut_5__DOT__s2))),2);
    bufp->fullCData(oldp+69785,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4470___05F__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullCData(oldp+69786,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4471___05F__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69787,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4471___05F__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69788,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4471___05F__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullCData(oldp+69789,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4472___05F__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69790,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4472___05F__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69791,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4472___05F__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullSData(oldp+69792,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4473___05F__DOT__genblk1__DOT__lut_6__DOT__s4),16);
    bufp->fullCData(oldp+69793,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4473___05F__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69794,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4473___05F__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69795,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4473___05F__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullSData(oldp+69796,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4474___05F__DOT__genblk1__DOT__lut_6__DOT__s4),16);
    bufp->fullCData(oldp+69797,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4474___05F__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69798,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4474___05F__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69799,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4474___05F__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullCData(oldp+69800,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4475___05F__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69801,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4475___05F__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69802,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4475___05F__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullCData(oldp+69803,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4476___05F__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69804,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4476___05F__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69805,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4476___05F__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullCData(oldp+69806,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4478___05F__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69807,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4478___05F__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69808,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4478___05F__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullSData(oldp+69809,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4477___05F_output_0_0)
                                  ? 0x440U : 0U)),16);
    bufp->fullCData(oldp+69810,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4479___05F__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69811,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4479___05F__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69812,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4479___05F__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullCData(oldp+69813,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4480___05F__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69814,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4480___05F__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullCData(oldp+69815,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4481___05F__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69816,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4481___05F__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullSData(oldp+69817,(((1U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4479___05F__DOT__genblk1__DOT__lut_5__DOT__s1))
                                  ? 0xfae8U : 0xe8e8U)),16);
    bufp->fullCData(oldp+69818,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4482___05F__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69819,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4482___05F__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69820,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4482___05F__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullCData(oldp+69821,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4483___05F__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69822,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4483___05F__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69823,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4483___05F__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullSData(oldp+69824,(((1U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4479___05F__DOT__genblk1__DOT__lut_5__DOT__s1))
                                  ? 0xa55aU : 0x9696U)),16);
    bufp->fullCData(oldp+69825,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4484___05F__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69826,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4484___05F__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69827,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4484___05F__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullCData(oldp+69828,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4485___05F__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69829,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4485___05F__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69830,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4485___05F__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullSData(oldp+69831,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4486___05F__DOT__genblk1__DOT__lut_6__DOT__s4),16);
    bufp->fullCData(oldp+69832,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4486___05F__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69833,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4486___05F__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69834,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4486___05F__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullCData(oldp+69835,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4487___05F__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69836,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4487___05F__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69837,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4487___05F__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullCData(oldp+69838,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4488___05F__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69839,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4488___05F__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullCData(oldp+69840,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4489___05F__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69841,((3U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4489___05F__DOT__genblk1__DOT__lut_5__DOT__s2))),2);
    bufp->fullCData(oldp+69842,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4490___05F__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69843,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4490___05F__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69844,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4490___05F__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullCData(oldp+69845,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4491___05F__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69846,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4491___05F__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69847,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4491___05F__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullCData(oldp+69848,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4493___05F__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69849,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4493___05F__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69850,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4493___05F__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullSData(oldp+69851,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4490___05F_output_0_0)
                                  ? 0xe8c0U : 0xfce8U)),16);
    bufp->fullCData(oldp+69852,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4494___05F__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69853,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4494___05F__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69854,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4494___05F__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullCData(oldp+69855,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4495___05F__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69856,((0xfU & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4495___05F__DOT__genblk1__DOT__lut_5__DOT__s3))),4);
    bufp->fullCData(oldp+69857,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4496___05F__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69858,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4496___05F__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69859,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4496___05F__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullCData(oldp+69860,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4497___05F__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullCData(oldp+69861,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4498___05F__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69862,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4498___05F__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69863,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4498___05F__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullSData(oldp+69864,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4498___05F_output_0_0)
                                  ? 0x1700U : 0U)),16);
    bufp->fullCData(oldp+69865,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4499___05F__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69866,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4499___05F__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69867,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4499___05F__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullIData(oldp+69868,(((1U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4497___05F__DOT__genblk1__DOT__lut_5__DOT__s1))
                                  ? 0xc8d5d5feU : 0xfeececc8U)),32);
    bufp->fullSData(oldp+69869,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4500___05F__DOT__genblk1__DOT__lut_6__DOT__s4),16);
    bufp->fullCData(oldp+69870,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4500___05F__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69871,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4500___05F__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69872,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4500___05F__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullCData(oldp+69873,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4501___05F__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69874,((3U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4501___05F__DOT__genblk1__DOT__lut_5__DOT__s2))),2);
    bufp->fullIData(oldp+69875,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4501___05F_output_0_0)
                                  ? 0x22f0bbfU : 0x33f0fffU)),32);
    bufp->fullSData(oldp+69876,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4502___05F__DOT__genblk1__DOT__lut_6__DOT__s4),16);
    bufp->fullCData(oldp+69877,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4502___05F__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69878,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4502___05F__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69879,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4502___05F__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullCData(oldp+69880,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4503___05F__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69881,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4503___05F__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69882,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4503___05F__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullCData(oldp+69883,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4504___05F__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69884,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4504___05F__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69885,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4504___05F__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullCData(oldp+69886,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4505___05F__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullSData(oldp+69887,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4506___05F__DOT__genblk1__DOT__lut_6__DOT__s4),16);
    bufp->fullCData(oldp+69888,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4506___05F__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69889,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4506___05F__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69890,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4506___05F__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullSData(oldp+69891,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4504___05F_output_0_0)
                                  ? 0xfc5cU : 0x5c0cU)),16);
    bufp->fullCData(oldp+69892,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4507___05F__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69893,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4507___05F__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69894,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4507___05F__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullSData(oldp+69895,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4508___05F__DOT__genblk1__DOT__lut_6__DOT__s4),16);
    bufp->fullCData(oldp+69896,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4508___05F__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69897,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4508___05F__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69898,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4508___05F__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullCData(oldp+69899,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4509___05F__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69900,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4509___05F__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69901,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4509___05F__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullCData(oldp+69902,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4510___05F__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69903,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4510___05F__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69904,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4510___05F__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullSData(oldp+69905,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4511___05F__DOT__genblk1__DOT__lut_6__DOT__s4),16);
    bufp->fullCData(oldp+69906,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4511___05F__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69907,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4511___05F__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69908,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4511___05F__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullCData(oldp+69909,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4512___05F__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69910,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4512___05F__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullIData(oldp+69911,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4512___05F_output_0_0)
                                  ? 0x6996c33cU : 0x3cc36996U)),32);
    bufp->fullSData(oldp+69912,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4513___05F__DOT__genblk1__DOT__lut_6__DOT__s4),16);
    bufp->fullCData(oldp+69913,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4513___05F__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69914,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4513___05F__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69915,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4513___05F__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullCData(oldp+69916,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4514___05F__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69917,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4514___05F__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69918,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4514___05F__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullCData(oldp+69919,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4515___05F__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69920,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4515___05F__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69921,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4515___05F__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullIData(oldp+69922,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4514___05F_output_0_0)
                                  ? 0x889071fU : 0x898f1f7fU)),32);
    bufp->fullSData(oldp+69923,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4516___05F__DOT__genblk1__DOT__lut_6__DOT__s4),16);
    bufp->fullCData(oldp+69924,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4516___05F__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69925,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4516___05F__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69926,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4516___05F__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullSData(oldp+69927,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4515___05F_output_0_0)
                                  ? 0x1230U : 0x3030U)),16);
    bufp->fullCData(oldp+69928,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4517___05F__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69929,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4517___05F__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69930,((3U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4517___05F__DOT__genblk1__DOT__lut_5__DOT__s2))),2);
    bufp->fullCData(oldp+69931,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4518___05F__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69932,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4518___05F__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69933,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4518___05F__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullSData(oldp+69934,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4515___05F_output_0_0)
                                  ? 0x8000U : 0U)),16);
    bufp->fullCData(oldp+69935,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4519___05F__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69936,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4519___05F__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69937,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4519___05F__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullSData(oldp+69938,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4520___05F__DOT__genblk1__DOT__lut_6__DOT__s4),16);
    bufp->fullCData(oldp+69939,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4520___05F__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69940,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4520___05F__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69941,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4520___05F__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullSData(oldp+69942,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4484___05F_output_0_0)
                                  ? 1U : 0x13U)),16);
    bufp->fullCData(oldp+69943,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4484___05F_output_0_0)
                                  ? 1U : 0x13U)),8);
    bufp->fullCData(oldp+69944,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4534___05F__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69945,((3U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4534___05F__DOT__genblk1__DOT__lut_5__DOT__s2))),2);
    bufp->fullCData(oldp+69946,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4487___05F_output_0_0)
                                  ? 0xeU : 8U)),4);
    bufp->fullCData(oldp+69947,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4543___05F__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullCData(oldp+69948,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n4544___05F__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullCData(oldp+69949,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5432___05F__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69950,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5432___05F__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullCData(oldp+69951,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5433___05F__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69952,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5433___05F__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69953,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5433___05F__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullCData(oldp+69954,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5434___05F__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullCData(oldp+69955,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5435___05F__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69956,((3U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5435___05F__DOT__genblk1__DOT__lut_5__DOT__s2))),2);
    bufp->fullSData(oldp+69957,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5436___05F__DOT__genblk1__DOT__lut_6__DOT__s4),16);
    bufp->fullCData(oldp+69958,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5436___05F__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69959,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5436___05F__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69960,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5436___05F__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullSData(oldp+69961,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5437___05F__DOT__genblk1__DOT__lut_6__DOT__s4),16);
    bufp->fullCData(oldp+69962,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5437___05F__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69963,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5437___05F__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69964,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5437___05F__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullSData(oldp+69965,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5438___05F__DOT__genblk1__DOT__lut_6__DOT__s4),16);
    bufp->fullCData(oldp+69966,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5438___05F__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69967,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5438___05F__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69968,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5438___05F__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullCData(oldp+69969,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5439___05F__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69970,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5439___05F__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullIData(oldp+69971,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5436___05F_output_0_0)
                                  ? 0xc000e080U : 0xf0c0f0c0U)),32);
    bufp->fullSData(oldp+69972,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5440___05F__DOT__genblk1__DOT__lut_6__DOT__s4),16);
    bufp->fullCData(oldp+69973,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5440___05F__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69974,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5440___05F__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69975,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5440___05F__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullIData(oldp+69976,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5433___05F_output_0_0)
                                  ? 0x11111111U : 0x77777717U)),32);
    bufp->fullSData(oldp+69977,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5441___05F__DOT__genblk1__DOT__lut_6__DOT__s4),16);
    bufp->fullCData(oldp+69978,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5441___05F__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69979,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5441___05F__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69980,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5441___05F__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullCData(oldp+69981,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5442___05F__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69982,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5442___05F__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69983,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5442___05F__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullCData(oldp+69984,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5443___05F__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69985,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5443___05F__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69986,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5443___05F__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullCData(oldp+69987,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5444___05F__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69988,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5444___05F__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69989,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5444___05F__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullSData(oldp+69990,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5444___05F_output_0_0)
                                  ? 0x5400U : 0x4000U)),16);
    bufp->fullCData(oldp+69991,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5445___05F__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+69992,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5445___05F__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+69993,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5445___05F__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullCData(oldp+69994,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5446___05F__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69995,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5446___05F__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+69996,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5446___05F__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullSData(oldp+69997,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5447___05F__DOT__genblk1__DOT__lut_6__DOT__s4),16);
    bufp->fullCData(oldp+69998,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5447___05F__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+69999,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5447___05F__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+70000,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5447___05F__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullCData(oldp+70001,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5448___05F__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+70002,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5448___05F__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+70003,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5448___05F__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullCData(oldp+70004,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5449___05F__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+70005,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5449___05F__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+70006,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5449___05F__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullCData(oldp+70007,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5450___05F__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+70008,((0xfU & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5450___05F__DOT__genblk1__DOT__lut_5__DOT__s3))),4);
    bufp->fullCData(oldp+70009,((3U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5450___05F__DOT__genblk1__DOT__lut_5__DOT__s3))),2);
    bufp->fullCData(oldp+70010,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5451___05F__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+70011,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5451___05F__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+70012,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5451___05F__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullCData(oldp+70013,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5453___05F__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+70014,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5453___05F__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+70015,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5453___05F__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullCData(oldp+70016,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5454___05F__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+70017,((0xfU & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5454___05F__DOT__genblk1__DOT__lut_5__DOT__s3))),4);
    bufp->fullCData(oldp+70018,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5454___05F__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullSData(oldp+70019,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5455___05F__DOT__genblk1__DOT__lut_6__DOT__s4),16);
    bufp->fullCData(oldp+70020,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5455___05F__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+70021,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5455___05F__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+70022,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5455___05F__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullSData(oldp+70023,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5454___05F_output_0_0)
                                  ? 0xee00U : 0xe000U)),16);
    bufp->fullCData(oldp+70024,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5456___05F__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+70025,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5456___05F__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+70026,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5456___05F__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullCData(oldp+70027,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5457___05F__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+70028,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5457___05F__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+70029,((3U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5457___05F__DOT__genblk1__DOT__lut_5__DOT__s2))),2);
    bufp->fullCData(oldp+70030,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5458___05F__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+70031,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5458___05F__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+70032,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5458___05F__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullCData(oldp+70033,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5459___05F__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+70034,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5459___05F__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+70035,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5459___05F__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullCData(oldp+70036,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5460___05F__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+70037,((3U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5460___05F__DOT__genblk1__DOT__lut_5__DOT__s2))),2);
    bufp->fullCData(oldp+70038,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5461___05F__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+70039,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5461___05F__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+70040,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5461___05F__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullCData(oldp+70041,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5462___05F__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+70042,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5462___05F__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+70043,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5462___05F__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullSData(oldp+70044,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5464___05F__DOT__genblk1__DOT__lut_6__DOT__s4),16);
    bufp->fullCData(oldp+70045,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5464___05F__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+70046,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5464___05F__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+70047,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5464___05F__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullSData(oldp+70048,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5462___05F_output_0_0)
                                  ? 0xe8faU : 0xa0e8U)),16);
    bufp->fullCData(oldp+70049,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5465___05F__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+70050,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5465___05F__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+70051,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5465___05F__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullSData(oldp+70052,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5465___05F_output_0_0)
                                  ? 0xa8feU : 0x80eaU)),16);
    bufp->fullCData(oldp+70053,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5466___05F__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+70054,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5466___05F__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+70055,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5466___05F__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullCData(oldp+70056,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5467___05F__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+70057,((0xfU & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5467___05F__DOT__genblk1__DOT__lut_5__DOT__s3))),4);
    bufp->fullCData(oldp+70058,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5467___05F__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullCData(oldp+70059,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5468___05F__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+70060,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5468___05F__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+70061,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5468___05F__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullCData(oldp+70062,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5469___05F__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+70063,((3U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5469___05F__DOT__genblk1__DOT__lut_5__DOT__s2))),2);
    bufp->fullCData(oldp+70064,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5440___05F_output_0_0) 
                                  << 4U) | ((8U & ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5435___05F__DOT__genblk1__DOT__lut_5__DOT__s2) 
                                                   << 3U)) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5433___05F_output_0_0) 
                                                << 2U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5469___05F_output_0_0) 
                                                   << 1U) 
                                                  | (1U 
                                                     & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5434___05F__DOT__genblk1__DOT__lut_5__DOT__s1))))))),5);
    bufp->fullSData(oldp+70065,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5440___05F_output_0_0)
                                  ? 0xc3c6U : 0xc3c3U)),16);
    bufp->fullCData(oldp+70066,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5470___05F__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+70067,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5470___05F__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+70068,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5470___05F__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullCData(oldp+70069,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5471___05F__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+70070,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5471___05F__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+70071,((3U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5471___05F__DOT__genblk1__DOT__lut_5__DOT__s2))),2);
    bufp->fullIData(oldp+70072,(((1U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5467___05F__DOT__genblk1__DOT__lut_5__DOT__s1))
                                  ? 0x55aaaa55U : 0x9a65659aU)),32);
    bufp->fullSData(oldp+70073,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5472___05F__DOT__genblk1__DOT__lut_6__DOT__s4),16);
    bufp->fullCData(oldp+70074,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5472___05F__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+70075,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5472___05F__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+70076,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5472___05F__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullIData(oldp+70077,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5455___05F_output_0_0)
                                  ? 0x33f33ffU : 0x137137fU)),32);
    bufp->fullSData(oldp+70078,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5473___05F__DOT__genblk1__DOT__lut_6__DOT__s4),16);
    bufp->fullCData(oldp+70079,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5473___05F__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+70080,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5473___05F__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+70081,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5473___05F__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullCData(oldp+70082,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5473___05F_output_0_0) 
                                  << 5U) | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5472___05F_output_0_0) 
                                             << 4U) 
                                            | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5466___05F_output_0_0) 
                                                << 3U) 
                                               | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5470___05F_output_0_0) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5471___05F_output_0_0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5456___05F_output_0_0))))))),6);
    bufp->fullIData(oldp+70083,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5473___05F_output_0_0)
                                  ? 0xc8c0ccccU : 0xccccccccU)),32);
    bufp->fullSData(oldp+70084,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5474___05F__DOT__genblk1__DOT__lut_6__DOT__s4),16);
    bufp->fullCData(oldp+70085,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5474___05F__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+70086,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5474___05F__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+70087,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5474___05F__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullSData(oldp+70088,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5475___05F__DOT__genblk1__DOT__lut_6__DOT__s4),16);
    bufp->fullCData(oldp+70089,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5475___05F__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+70090,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5475___05F__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+70091,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5475___05F__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullCData(oldp+70092,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5477___05F__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+70093,((3U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5477___05F__DOT__genblk1__DOT__lut_5__DOT__s2))),2);
    bufp->fullCData(oldp+70094,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5478___05F__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+70095,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5478___05F__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+70096,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5478___05F__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullSData(oldp+70097,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5475___05F_output_0_0)
                                  ? 0xcc55U : 0xf55U)),16);
    bufp->fullCData(oldp+70098,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5479___05F__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+70099,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5479___05F__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+70100,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5479___05F__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullIData(oldp+70101,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5443___05F_output_0_0)
                                  ? 0xfcfce8d4U : 0xf9f674b8U)),32);
    bufp->fullSData(oldp+70102,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5480___05F__DOT__genblk1__DOT__lut_6__DOT__s4),16);
    bufp->fullCData(oldp+70103,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5480___05F__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+70104,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5480___05F__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+70105,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5480___05F__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullCData(oldp+70106,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5481___05F__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+70107,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5481___05F__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+70108,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5481___05F__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullCData(oldp+70109,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5483___05F__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullCData(oldp+70110,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5485___05F__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+70111,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5485___05F__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+70112,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5485___05F__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullSData(oldp+70113,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5481___05F_output_0_0)
                                  ? 0xa00U : 0x800U)),16);
    bufp->fullCData(oldp+70114,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5487___05F__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+70115,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5487___05F__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+70116,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5487___05F__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullIData(oldp+70117,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5487___05F_output_0_0)
                                  ? 0x7ff8fdd0U : 0xfee0f880U)),32);
    bufp->fullSData(oldp+70118,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5488___05F__DOT__genblk1__DOT__lut_6__DOT__s4),16);
    bufp->fullCData(oldp+70119,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5488___05F__DOT__genblk1__DOT__lut_6__DOT__s3),8);
    bufp->fullCData(oldp+70120,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5488___05F__DOT__genblk1__DOT__lut_6__DOT__s2),4);
    bufp->fullCData(oldp+70121,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5488___05F__DOT__genblk1__DOT__lut_6__DOT__s1),2);
    bufp->fullCData(oldp+70122,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5490___05F__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+70123,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5490___05F__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullSData(oldp+70124,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5490___05F_output_0_0)
                                  ? 0x40d0U : 0xe080U)),16);
    bufp->fullCData(oldp+70125,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5491___05F__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+70126,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5491___05F__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+70127,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5491___05F__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullCData(oldp+70128,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5502___05F__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+70129,((0xfU & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5502___05F__DOT__genblk1__DOT__lut_5__DOT__s3))),4);
    bufp->fullCData(oldp+70130,((3U & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5502___05F__DOT__genblk1__DOT__lut_5__DOT__s3))),2);
    bufp->fullSData(oldp+70131,(((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5432___05F_output_0_0)
                                  ? 0x6996U : 0x6699U)),16);
    bufp->fullCData(oldp+70132,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5510___05F__DOT__genblk1__DOT__lut_5__DOT__s3),8);
    bufp->fullCData(oldp+70133,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5510___05F__DOT__genblk1__DOT__lut_5__DOT__s2),4);
    bufp->fullCData(oldp+70134,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024672735__024new_new_n5510___05F__DOT__genblk1__DOT__lut_5__DOT__s1),2);
    bufp->fullBit(oldp+70135,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__fractb_lt_fracta));
    bufp->fullIData(oldp+70136,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__adj_op_out),27);
    bufp->fullIData(oldp+70137,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__fracta_n),27);
    bufp->fullIData(oldp+70138,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__fractb_n),27);
    bufp->fullIData(oldp+70139,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__fractb_lt_fracta)
                                  ? vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__fractb_n
                                  : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__fracta_n)),27);
    bufp->fullIData(oldp+70140,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__fractb_lt_fracta)
                                  ? vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__fracta_n
                                  : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__fractb_n)),27);
    bufp->fullBit(oldp+70141,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__sign_d));
    bufp->fullBit(oldp+70142,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__fractb_lt_fracta));
    bufp->fullIData(oldp+70143,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__adj_op_out),27);
    bufp->fullIData(oldp+70144,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__fracta_n),27);
    bufp->fullIData(oldp+70145,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__fractb_n),27);
    bufp->fullIData(oldp+70146,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__fractb_lt_fracta)
                                  ? vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__fractb_n
                                  : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__fracta_n)),27);
    bufp->fullIData(oldp+70147,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__fractb_lt_fracta)
                                  ? vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__fracta_n
                                  : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__fractb_n)),27);
    bufp->fullBit(oldp+70148,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__sign_d));
    bufp->fullBit(oldp+70149,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__fractb_lt_fracta));
    bufp->fullIData(oldp+70150,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__adj_op_out),27);
    bufp->fullIData(oldp+70151,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__fracta_n),27);
    bufp->fullIData(oldp+70152,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__fractb_n),27);
    bufp->fullIData(oldp+70153,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__fractb_lt_fracta)
                                  ? vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__fractb_n
                                  : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__fracta_n)),27);
    bufp->fullIData(oldp+70154,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__fractb_lt_fracta)
                                  ? vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__fracta_n
                                  : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__fractb_n)),27);
    bufp->fullBit(oldp+70155,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__sign_d));
    bufp->fullBit(oldp+70156,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__fractb_lt_fracta));
    bufp->fullIData(oldp+70157,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__adj_op_out),27);
    bufp->fullIData(oldp+70158,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__fracta_n),27);
    bufp->fullIData(oldp+70159,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__fractb_n),27);
    bufp->fullIData(oldp+70160,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__fractb_lt_fracta)
                                  ? vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__fractb_n
                                  : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__fracta_n)),27);
    bufp->fullIData(oldp+70161,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__fractb_lt_fracta)
                                  ? vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__fracta_n
                                  : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__fractb_n)),27);
    bufp->fullBit(oldp+70162,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__sign_d));
    bufp->fullBit(oldp+70163,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__fractb_lt_fracta));
    bufp->fullIData(oldp+70164,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__adj_op_out),27);
    bufp->fullIData(oldp+70165,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__fracta_n),27);
    bufp->fullIData(oldp+70166,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__fractb_n),27);
    bufp->fullIData(oldp+70167,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__fractb_lt_fracta)
                                  ? vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__fractb_n
                                  : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__fracta_n)),27);
    bufp->fullIData(oldp+70168,(((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__fractb_lt_fracta)
                                  ? vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__fracta_n
                                  : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__fractb_n)),27);
    bufp->fullBit(oldp+70169,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__sign_d));
    bufp->fullBit(oldp+70170,(vlSelf->co_sim_syn2__DOT__clock));
    bufp->fullBit(oldp+70171,(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d_input_5_0));
    bufp->fullBit(oldp+70172,(((IData)(vlSelf->co_sim_syn2__DOT__clock) 
                               & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li0232_li0232__DOT__genblk1__DOT__lut_5__DOT__s2))));
    bufp->fullBit(oldp+70173,(((~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li0232_li0232__DOT__genblk1__DOT__lut_5__DOT__s2)) 
                               & (IData)(vlSelf->co_sim_syn2__DOT__clock))));
    bufp->fullBit(oldp+70174,((1U & ((~ (IData)(vlSelf->co_sim_syn2__DOT__clock)) 
                                     & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li0232_li0232__DOT__genblk1__DOT__lut_5__DOT__s2)))));
    bufp->fullBit(oldp+70175,((1U & ((~ (IData)(vlSelf->co_sim_syn2__DOT__clock)) 
                                     & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li0232_li0232__DOT__genblk1__DOT__lut_5__DOT__s2))))));
    bufp->fullBit(oldp+70176,(((IData)(vlSelf->co_sim_syn2__DOT__clock) 
                               & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li0732_li0732__DOT__genblk1__DOT__lut_5__DOT__s2))));
    bufp->fullBit(oldp+70177,(((~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li0732_li0732__DOT__genblk1__DOT__lut_5__DOT__s2)) 
                               & (IData)(vlSelf->co_sim_syn2__DOT__clock))));
    bufp->fullBit(oldp+70178,((1U & ((~ (IData)(vlSelf->co_sim_syn2__DOT__clock)) 
                                     & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li0732_li0732__DOT__genblk1__DOT__lut_5__DOT__s2)))));
    bufp->fullBit(oldp+70179,((1U & ((~ (IData)(vlSelf->co_sim_syn2__DOT__clock)) 
                                     & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li0732_li0732__DOT__genblk1__DOT__lut_5__DOT__s2))))));
    bufp->fullBit(oldp+70180,((1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__clock)))));
    bufp->fullBit(oldp+70181,(((IData)(vlSelf->co_sim_syn2__DOT__clock) 
                               & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1106_li1106__DOT__genblk1__DOT__lut_5__DOT__s1))));
    bufp->fullBit(oldp+70182,(((~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1106_li1106__DOT__genblk1__DOT__lut_5__DOT__s1)) 
                               & (IData)(vlSelf->co_sim_syn2__DOT__clock))));
    bufp->fullBit(oldp+70183,((1U & ((~ (IData)(vlSelf->co_sim_syn2__DOT__clock)) 
                                     & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1106_li1106__DOT__genblk1__DOT__lut_5__DOT__s1)))));
    bufp->fullBit(oldp+70184,((1U & ((~ (IData)(vlSelf->co_sim_syn2__DOT__clock)) 
                                     & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1106_li1106__DOT__genblk1__DOT__lut_5__DOT__s1))))));
    bufp->fullBit(oldp+70185,(((IData)(vlSelf->co_sim_syn2__DOT__clock) 
                               & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1357_li1357_output_0_0))));
    bufp->fullBit(oldp+70186,(((~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1357_li1357_output_0_0)) 
                               & (IData)(vlSelf->co_sim_syn2__DOT__clock))));
    bufp->fullBit(oldp+70187,(((~ (IData)(vlSelf->co_sim_syn2__DOT__clock)) 
                               & (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1357_li1357_output_0_0))));
    bufp->fullBit(oldp+70188,((1U & ((~ (IData)(vlSelf->co_sim_syn2__DOT__clock)) 
                                     & (~ (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__lut___024abc__024273608__024li1357_li1357_output_0_0))))));
    bufp->fullCData(oldp+70189,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre_add1_add__02eopa__05b31__05d_output_0_0) 
                                  << 3U) | (4U & (vlSelf->co_sim_syn2__DOT__in4 
                                                  >> 0x1dU)))),5);
    bufp->fullCData(oldp+70190,((((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__dffre_add1_add__02eopa__05b31__05d_output_0_0) 
                                  << 3U) | (4U & (vlSelf->co_sim_syn2__DOT__in1 
                                                  >> 0x1dU)))),5);
    bufp->fullBit(oldp+70191,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__sticky));
    bufp->fullBit(oldp+70192,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.u1__DOT____Vcellout__u7__shift_out) 
                                     | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__sticky)))));
    bufp->fullBit(oldp+70193,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__sticky));
    bufp->fullBit(oldp+70194,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.u1__DOT____Vcellout__u7__shift_out) 
                                     | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__sticky)))));
    bufp->fullBit(oldp+70195,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__sticky));
    bufp->fullBit(oldp+70196,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.u1__DOT____Vcellout__u7__shift_out) 
                                     | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__sticky)))));
    bufp->fullBit(oldp+70197,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__sticky));
    bufp->fullBit(oldp+70198,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.u1__DOT____Vcellout__u7__shift_out) 
                                     | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__sticky)))));
    bufp->fullBit(oldp+70199,(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__sticky));
    bufp->fullBit(oldp+70200,((1U & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.u1__DOT____Vcellout__u7__shift_out) 
                                     | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__sticky)))));
}
