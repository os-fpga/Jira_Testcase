// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vco_sim_GJC8__Syms.h"


void Vco_sim_GJC8___024root__trace_chg_0_sub_0(Vco_sim_GJC8___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vco_sim_GJC8___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC8___024root__trace_chg_0\n"); );
    // Init
    Vco_sim_GJC8___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vco_sim_GJC8___024root*>(voidSelf);
    Vco_sim_GJC8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vco_sim_GJC8___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vco_sim_GJC8___024root__trace_chg_0_sub_0(Vco_sim_GJC8___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC8___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgBit(oldp+0,(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__subtract_int));
        bufp->chgCData(oldp+1,(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__acc_fir_int),6);
        bufp->chgCData(oldp+2,(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__shift_right_int),6);
        bufp->chgBit(oldp+3,(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__round_int));
        bufp->chgBit(oldp+4,(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__saturate_int));
        bufp->chgBit(oldp+5,(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__load_acc_int));
        bufp->chgBit(oldp+6,(vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__subtract_int));
        bufp->chgCData(oldp+7,(vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__acc_fir_int),6);
        bufp->chgCData(oldp+8,(vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__shift_right_int),6);
        bufp->chgBit(oldp+9,(vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__round_int));
        bufp->chgBit(oldp+10,(vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__saturate_int));
        bufp->chgBit(oldp+11,(vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__load_acc_int));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+12,(vlSelf->co_sim_GJC8__DOT__a),20);
        bufp->chgCData(oldp+13,(vlSelf->co_sim_GJC8__DOT__feedback),3);
        bufp->chgIData(oldp+14,(vlSelf->co_sim_GJC8__DOT__b),18);
        bufp->chgBit(oldp+15,(vlSelf->co_sim_GJC8__DOT__unsigned_a));
        bufp->chgBit(oldp+16,(vlSelf->co_sim_GJC8__DOT__unsigned_b));
        bufp->chgIData(oldp+17,(vlSelf->co_sim_GJC8__DOT__mismatch),32);
        bufp->chgBit(oldp+18,((1U & vlSelf->co_sim_GJC8__DOT__a)));
        bufp->chgBit(oldp+19,((1U & (vlSelf->co_sim_GJC8__DOT__a 
                                     >> 0xaU))));
        bufp->chgBit(oldp+20,((1U & (vlSelf->co_sim_GJC8__DOT__a 
                                     >> 0xbU))));
        bufp->chgBit(oldp+21,((1U & (vlSelf->co_sim_GJC8__DOT__a 
                                     >> 0xcU))));
        bufp->chgBit(oldp+22,((1U & (vlSelf->co_sim_GJC8__DOT__a 
                                     >> 0xdU))));
        bufp->chgBit(oldp+23,((1U & (vlSelf->co_sim_GJC8__DOT__a 
                                     >> 0xeU))));
        bufp->chgBit(oldp+24,((1U & (vlSelf->co_sim_GJC8__DOT__a 
                                     >> 0xfU))));
        bufp->chgBit(oldp+25,((1U & (vlSelf->co_sim_GJC8__DOT__a 
                                     >> 0x10U))));
        bufp->chgBit(oldp+26,((1U & (vlSelf->co_sim_GJC8__DOT__a 
                                     >> 0x11U))));
        bufp->chgBit(oldp+27,((1U & (vlSelf->co_sim_GJC8__DOT__a 
                                     >> 0x12U))));
        bufp->chgBit(oldp+28,((1U & (vlSelf->co_sim_GJC8__DOT__a 
                                     >> 0x13U))));
        bufp->chgBit(oldp+29,((1U & (vlSelf->co_sim_GJC8__DOT__a 
                                     >> 1U))));
        bufp->chgBit(oldp+30,((1U & (vlSelf->co_sim_GJC8__DOT__a 
                                     >> 2U))));
        bufp->chgBit(oldp+31,((1U & (vlSelf->co_sim_GJC8__DOT__a 
                                     >> 3U))));
        bufp->chgBit(oldp+32,((1U & (vlSelf->co_sim_GJC8__DOT__a 
                                     >> 4U))));
        bufp->chgBit(oldp+33,((1U & (vlSelf->co_sim_GJC8__DOT__a 
                                     >> 5U))));
        bufp->chgBit(oldp+34,((1U & (vlSelf->co_sim_GJC8__DOT__a 
                                     >> 6U))));
        bufp->chgBit(oldp+35,((1U & (vlSelf->co_sim_GJC8__DOT__a 
                                     >> 7U))));
        bufp->chgBit(oldp+36,((1U & (vlSelf->co_sim_GJC8__DOT__a 
                                     >> 8U))));
        bufp->chgBit(oldp+37,((1U & (vlSelf->co_sim_GJC8__DOT__a 
                                     >> 9U))));
        bufp->chgBit(oldp+38,((1U & vlSelf->co_sim_GJC8__DOT__b)));
        bufp->chgBit(oldp+39,((1U & (vlSelf->co_sim_GJC8__DOT__b 
                                     >> 0xaU))));
        bufp->chgBit(oldp+40,((1U & (vlSelf->co_sim_GJC8__DOT__b 
                                     >> 0xbU))));
        bufp->chgBit(oldp+41,((1U & (vlSelf->co_sim_GJC8__DOT__b 
                                     >> 0xcU))));
        bufp->chgBit(oldp+42,((1U & (vlSelf->co_sim_GJC8__DOT__b 
                                     >> 0xdU))));
        bufp->chgBit(oldp+43,((1U & (vlSelf->co_sim_GJC8__DOT__b 
                                     >> 0xeU))));
        bufp->chgBit(oldp+44,((1U & (vlSelf->co_sim_GJC8__DOT__b 
                                     >> 0xfU))));
        bufp->chgBit(oldp+45,((1U & (vlSelf->co_sim_GJC8__DOT__b 
                                     >> 0x10U))));
        bufp->chgBit(oldp+46,((1U & (vlSelf->co_sim_GJC8__DOT__b 
                                     >> 0x11U))));
        bufp->chgBit(oldp+47,((1U & (vlSelf->co_sim_GJC8__DOT__b 
                                     >> 1U))));
        bufp->chgBit(oldp+48,((1U & (vlSelf->co_sim_GJC8__DOT__b 
                                     >> 2U))));
        bufp->chgBit(oldp+49,((1U & (vlSelf->co_sim_GJC8__DOT__b 
                                     >> 3U))));
        bufp->chgBit(oldp+50,((1U & (vlSelf->co_sim_GJC8__DOT__b 
                                     >> 4U))));
        bufp->chgBit(oldp+51,((1U & (vlSelf->co_sim_GJC8__DOT__b 
                                     >> 5U))));
        bufp->chgBit(oldp+52,((1U & (vlSelf->co_sim_GJC8__DOT__b 
                                     >> 6U))));
        bufp->chgBit(oldp+53,((1U & (vlSelf->co_sim_GJC8__DOT__b 
                                     >> 7U))));
        bufp->chgBit(oldp+54,((1U & (vlSelf->co_sim_GJC8__DOT__b 
                                     >> 8U))));
        bufp->chgBit(oldp+55,((1U & (vlSelf->co_sim_GJC8__DOT__b 
                                     >> 9U))));
        bufp->chgBit(oldp+56,((1U & (IData)(vlSelf->co_sim_GJC8__DOT__feedback))));
        bufp->chgBit(oldp+57,((1U & ((IData)(vlSelf->co_sim_GJC8__DOT__feedback) 
                                     >> 1U))));
        bufp->chgBit(oldp+58,((1U & ((IData)(vlSelf->co_sim_GJC8__DOT__feedback) 
                                     >> 2U))));
        bufp->chgIData(oldp+59,(vlSelf->co_sim_GJC8__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[6U]))) {
        bufp->chgCData(oldp+60,(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__feedback_int),3);
        bufp->chgIData(oldp+61,(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__a_int),20);
        bufp->chgIData(oldp+62,(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__b_int),18);
        bufp->chgBit(oldp+63,(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__unsigned_a_int));
        bufp->chgBit(oldp+64,(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__unsigned_b_int));
        bufp->chgIData(oldp+65,(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__mult_b),18);
        bufp->chgCData(oldp+66,(vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__feedback_int),3);
        bufp->chgIData(oldp+67,(vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__a_int),20);
        bufp->chgIData(oldp+68,(vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__b_int),18);
        bufp->chgBit(oldp+69,(vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__unsigned_a_int));
        bufp->chgBit(oldp+70,(vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__unsigned_b_int));
        bufp->chgIData(oldp+71,(vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__mult_b),18);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[7U]))) {
        bufp->chgQData(oldp+72,(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__z_out),38);
        bufp->chgQData(oldp+74,(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__add_sub_in),64);
        bufp->chgQData(oldp+76,(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__mult_out),64);
        bufp->chgQData(oldp+78,(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__add_sub_out),64);
        bufp->chgQData(oldp+80,(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__pre_shift),64);
        bufp->chgQData(oldp+82,(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__shift_right),64);
        bufp->chgQData(oldp+84,(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__round),64);
        bufp->chgQData(oldp+86,(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__saturate),38);
        bufp->chgIData(oldp+88,(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__mult_a),20);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[8U]))) {
        bufp->chgQData(oldp+89,(vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__z_out),38);
        bufp->chgBit(oldp+91,((1U & (IData)(vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__z_out))));
        bufp->chgBit(oldp+92,((1U & (IData)((vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__z_out 
                                             >> 0xaU)))));
        bufp->chgBit(oldp+93,((1U & (IData)((vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__z_out 
                                             >> 0xbU)))));
        bufp->chgBit(oldp+94,((1U & (IData)((vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__z_out 
                                             >> 0xcU)))));
        bufp->chgBit(oldp+95,((1U & (IData)((vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__z_out 
                                             >> 0xdU)))));
        bufp->chgBit(oldp+96,((1U & (IData)((vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__z_out 
                                             >> 0xeU)))));
        bufp->chgBit(oldp+97,((1U & (IData)((vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__z_out 
                                             >> 0xfU)))));
        bufp->chgBit(oldp+98,((1U & (IData)((vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__z_out 
                                             >> 0x10U)))));
        bufp->chgBit(oldp+99,((1U & (IData)((vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__z_out 
                                             >> 0x11U)))));
        bufp->chgBit(oldp+100,((1U & (IData)((vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__z_out 
                                              >> 0x12U)))));
        bufp->chgBit(oldp+101,((1U & (IData)((vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__z_out 
                                              >> 0x13U)))));
        bufp->chgBit(oldp+102,((1U & (IData)((vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__z_out 
                                              >> 1U)))));
        bufp->chgBit(oldp+103,((1U & (IData)((vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__z_out 
                                              >> 0x14U)))));
        bufp->chgBit(oldp+104,((1U & (IData)((vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__z_out 
                                              >> 0x15U)))));
        bufp->chgBit(oldp+105,((1U & (IData)((vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__z_out 
                                              >> 0x16U)))));
        bufp->chgBit(oldp+106,((1U & (IData)((vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__z_out 
                                              >> 0x17U)))));
        bufp->chgBit(oldp+107,((1U & (IData)((vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__z_out 
                                              >> 0x18U)))));
        bufp->chgBit(oldp+108,((1U & (IData)((vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__z_out 
                                              >> 0x19U)))));
        bufp->chgBit(oldp+109,((1U & (IData)((vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__z_out 
                                              >> 0x1aU)))));
        bufp->chgBit(oldp+110,((1U & (IData)((vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__z_out 
                                              >> 0x1bU)))));
        bufp->chgBit(oldp+111,((1U & (IData)((vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__z_out 
                                              >> 0x1cU)))));
        bufp->chgBit(oldp+112,((1U & (IData)((vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__z_out 
                                              >> 0x1dU)))));
        bufp->chgBit(oldp+113,((1U & (IData)((vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__z_out 
                                              >> 2U)))));
        bufp->chgBit(oldp+114,((1U & (IData)((vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__z_out 
                                              >> 0x1eU)))));
        bufp->chgBit(oldp+115,((1U & (IData)((vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__z_out 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+116,((1U & (IData)((vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__z_out 
                                              >> 0x20U)))));
        bufp->chgBit(oldp+117,((1U & (IData)((vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__z_out 
                                              >> 0x21U)))));
        bufp->chgBit(oldp+118,((1U & (IData)((vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__z_out 
                                              >> 0x22U)))));
        bufp->chgBit(oldp+119,((1U & (IData)((vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__z_out 
                                              >> 0x23U)))));
        bufp->chgBit(oldp+120,((1U & (IData)((vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__z_out 
                                              >> 0x24U)))));
        bufp->chgBit(oldp+121,((1U & (IData)((vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__z_out 
                                              >> 0x25U)))));
        bufp->chgBit(oldp+122,((1U & (IData)((vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__z_out 
                                              >> 3U)))));
        bufp->chgBit(oldp+123,((1U & (IData)((vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__z_out 
                                              >> 4U)))));
        bufp->chgBit(oldp+124,((1U & (IData)((vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__z_out 
                                              >> 5U)))));
        bufp->chgBit(oldp+125,((1U & (IData)((vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__z_out 
                                              >> 6U)))));
        bufp->chgBit(oldp+126,((1U & (IData)((vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__z_out 
                                              >> 7U)))));
        bufp->chgBit(oldp+127,((1U & (IData)((vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__z_out 
                                              >> 8U)))));
        bufp->chgBit(oldp+128,((1U & (IData)((vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__z_out 
                                              >> 9U)))));
        bufp->chgQData(oldp+129,(vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__add_sub_in),64);
        bufp->chgQData(oldp+131,(vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__mult_out),64);
        bufp->chgQData(oldp+133,(vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__add_sub_out),64);
        bufp->chgQData(oldp+135,(vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__pre_shift),64);
        bufp->chgQData(oldp+137,(vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__shift_right),64);
        bufp->chgQData(oldp+139,(vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__round),64);
        bufp->chgQData(oldp+141,(vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__saturate),38);
        bufp->chgIData(oldp+143,(vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__mult_a),20);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgIData(oldp+144,(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__DLY_B),18);
        bufp->chgBit(oldp+145,(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__subtract_reg));
        bufp->chgCData(oldp+146,(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__acc_fir_reg),6);
        bufp->chgCData(oldp+147,(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__feedback_reg),3);
        bufp->chgCData(oldp+148,(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__shift_right_reg1),6);
        bufp->chgCData(oldp+149,(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__shift_right_reg2),6);
        bufp->chgBit(oldp+150,(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__round_reg1));
        bufp->chgBit(oldp+151,(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__round_reg2));
        bufp->chgBit(oldp+152,(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__saturate_reg1));
        bufp->chgBit(oldp+153,(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__saturate_reg2));
        bufp->chgBit(oldp+154,(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__load_acc_reg));
        bufp->chgIData(oldp+155,(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__a_reg),20);
        bufp->chgIData(oldp+156,(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__b_reg),18);
        bufp->chgBit(oldp+157,(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__unsigned_a_reg));
        bufp->chgBit(oldp+158,(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__unsigned_b_reg));
        bufp->chgQData(oldp+159,(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__accumulator),64);
        bufp->chgQData(oldp+161,(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__z_out_reg),38);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgIData(oldp+163,(vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__DLY_B),18);
        bufp->chgBit(oldp+164,(vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__subtract_reg));
        bufp->chgCData(oldp+165,(vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__acc_fir_reg),6);
        bufp->chgCData(oldp+166,(vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__feedback_reg),3);
        bufp->chgCData(oldp+167,(vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__shift_right_reg1),6);
        bufp->chgCData(oldp+168,(vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__shift_right_reg2),6);
        bufp->chgBit(oldp+169,(vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__round_reg1));
        bufp->chgBit(oldp+170,(vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__round_reg2));
        bufp->chgBit(oldp+171,(vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__saturate_reg1));
        bufp->chgBit(oldp+172,(vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__saturate_reg2));
        bufp->chgBit(oldp+173,(vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__load_acc_reg));
        bufp->chgIData(oldp+174,(vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__a_reg),20);
        bufp->chgIData(oldp+175,(vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__b_reg),18);
        bufp->chgBit(oldp+176,(vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__unsigned_a_reg));
        bufp->chgBit(oldp+177,(vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__unsigned_b_reg));
        bufp->chgQData(oldp+178,(vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__accumulator),64);
        bufp->chgQData(oldp+180,(vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__z_out_reg),38);
    }
}

void Vco_sim_GJC8___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC8___024root__trace_cleanup\n"); );
    // Init
    Vco_sim_GJC8___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vco_sim_GJC8___024root*>(voidSelf);
    Vco_sim_GJC8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
}
