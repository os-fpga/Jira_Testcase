// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vco_sim_DSP_MULTACC_TEST__Syms.h"


void Vco_sim_DSP_MULTACC_TEST___024root__trace_chg_0_sub_0(Vco_sim_DSP_MULTACC_TEST___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vco_sim_DSP_MULTACC_TEST___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_DSP_MULTACC_TEST___024root__trace_chg_0\n"); );
    // Init
    Vco_sim_DSP_MULTACC_TEST___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vco_sim_DSP_MULTACC_TEST___024root*>(voidSelf);
    Vco_sim_DSP_MULTACC_TEST__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vco_sim_DSP_MULTACC_TEST___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vco_sim_DSP_MULTACC_TEST___024root__trace_chg_0_sub_0(Vco_sim_DSP_MULTACC_TEST___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_DSP_MULTACC_TEST__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_DSP_MULTACC_TEST___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgCData(oldp+0,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTACC___024iopadmap__024z_multacc__05b37__05d__DOT__genblk1__DOT__DSP38_MULTACC__DOT__acc_fir_int),6);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+1,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__reset));
        bufp->chgCData(oldp+2,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__feedback),3);
        bufp->chgCData(oldp+3,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__acc_fir),6);
        bufp->chgCData(oldp+4,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__shift_right),6);
        bufp->chgIData(oldp+5,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__a),20);
        bufp->chgIData(oldp+6,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__b),18);
        bufp->chgBit(oldp+7,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__load_acc));
        bufp->chgBit(oldp+8,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__round));
        bufp->chgBit(oldp+9,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__saturate_enable));
        bufp->chgBit(oldp+10,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__subtract));
        bufp->chgBit(oldp+11,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__unsigned_a));
        bufp->chgBit(oldp+12,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__unsigned_b));
        bufp->chgIData(oldp+13,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__mismatch),32);
        bufp->chgBit(oldp+14,((1U & vlSelf->co_sim_DSP_MULTACC_TEST__DOT__a)));
        bufp->chgBit(oldp+15,((1U & (vlSelf->co_sim_DSP_MULTACC_TEST__DOT__a 
                                     >> 0xaU))));
        bufp->chgBit(oldp+16,((1U & (vlSelf->co_sim_DSP_MULTACC_TEST__DOT__a 
                                     >> 0xbU))));
        bufp->chgBit(oldp+17,((1U & (vlSelf->co_sim_DSP_MULTACC_TEST__DOT__a 
                                     >> 0xcU))));
        bufp->chgBit(oldp+18,((1U & (vlSelf->co_sim_DSP_MULTACC_TEST__DOT__a 
                                     >> 0xdU))));
        bufp->chgBit(oldp+19,((1U & (vlSelf->co_sim_DSP_MULTACC_TEST__DOT__a 
                                     >> 0xeU))));
        bufp->chgBit(oldp+20,((1U & (vlSelf->co_sim_DSP_MULTACC_TEST__DOT__a 
                                     >> 0xfU))));
        bufp->chgBit(oldp+21,((1U & (vlSelf->co_sim_DSP_MULTACC_TEST__DOT__a 
                                     >> 0x10U))));
        bufp->chgBit(oldp+22,((1U & (vlSelf->co_sim_DSP_MULTACC_TEST__DOT__a 
                                     >> 0x11U))));
        bufp->chgBit(oldp+23,((1U & (vlSelf->co_sim_DSP_MULTACC_TEST__DOT__a 
                                     >> 0x12U))));
        bufp->chgBit(oldp+24,((1U & (vlSelf->co_sim_DSP_MULTACC_TEST__DOT__a 
                                     >> 0x13U))));
        bufp->chgBit(oldp+25,((1U & (vlSelf->co_sim_DSP_MULTACC_TEST__DOT__a 
                                     >> 1U))));
        bufp->chgBit(oldp+26,((1U & (vlSelf->co_sim_DSP_MULTACC_TEST__DOT__a 
                                     >> 2U))));
        bufp->chgBit(oldp+27,((1U & (vlSelf->co_sim_DSP_MULTACC_TEST__DOT__a 
                                     >> 3U))));
        bufp->chgBit(oldp+28,((1U & (vlSelf->co_sim_DSP_MULTACC_TEST__DOT__a 
                                     >> 4U))));
        bufp->chgBit(oldp+29,((1U & (vlSelf->co_sim_DSP_MULTACC_TEST__DOT__a 
                                     >> 5U))));
        bufp->chgBit(oldp+30,((1U & (vlSelf->co_sim_DSP_MULTACC_TEST__DOT__a 
                                     >> 6U))));
        bufp->chgBit(oldp+31,((1U & (vlSelf->co_sim_DSP_MULTACC_TEST__DOT__a 
                                     >> 7U))));
        bufp->chgBit(oldp+32,((1U & (vlSelf->co_sim_DSP_MULTACC_TEST__DOT__a 
                                     >> 8U))));
        bufp->chgBit(oldp+33,((1U & (vlSelf->co_sim_DSP_MULTACC_TEST__DOT__a 
                                     >> 9U))));
        bufp->chgBit(oldp+34,((1U & (IData)(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__acc_fir))));
        bufp->chgBit(oldp+35,((1U & ((IData)(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__acc_fir) 
                                     >> 1U))));
        bufp->chgBit(oldp+36,((1U & ((IData)(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__acc_fir) 
                                     >> 2U))));
        bufp->chgBit(oldp+37,((1U & ((IData)(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__acc_fir) 
                                     >> 3U))));
        bufp->chgBit(oldp+38,((1U & ((IData)(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__acc_fir) 
                                     >> 4U))));
        bufp->chgBit(oldp+39,((1U & ((IData)(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__acc_fir) 
                                     >> 5U))));
        bufp->chgBit(oldp+40,((1U & vlSelf->co_sim_DSP_MULTACC_TEST__DOT__b)));
        bufp->chgBit(oldp+41,((1U & (vlSelf->co_sim_DSP_MULTACC_TEST__DOT__b 
                                     >> 0xaU))));
        bufp->chgBit(oldp+42,((1U & (vlSelf->co_sim_DSP_MULTACC_TEST__DOT__b 
                                     >> 0xbU))));
        bufp->chgBit(oldp+43,((1U & (vlSelf->co_sim_DSP_MULTACC_TEST__DOT__b 
                                     >> 0xcU))));
        bufp->chgBit(oldp+44,((1U & (vlSelf->co_sim_DSP_MULTACC_TEST__DOT__b 
                                     >> 0xdU))));
        bufp->chgBit(oldp+45,((1U & (vlSelf->co_sim_DSP_MULTACC_TEST__DOT__b 
                                     >> 0xeU))));
        bufp->chgBit(oldp+46,((1U & (vlSelf->co_sim_DSP_MULTACC_TEST__DOT__b 
                                     >> 0xfU))));
        bufp->chgBit(oldp+47,((1U & (vlSelf->co_sim_DSP_MULTACC_TEST__DOT__b 
                                     >> 0x10U))));
        bufp->chgBit(oldp+48,((1U & (vlSelf->co_sim_DSP_MULTACC_TEST__DOT__b 
                                     >> 0x11U))));
        bufp->chgBit(oldp+49,((1U & (vlSelf->co_sim_DSP_MULTACC_TEST__DOT__b 
                                     >> 1U))));
        bufp->chgBit(oldp+50,((1U & (vlSelf->co_sim_DSP_MULTACC_TEST__DOT__b 
                                     >> 2U))));
        bufp->chgBit(oldp+51,((1U & (vlSelf->co_sim_DSP_MULTACC_TEST__DOT__b 
                                     >> 3U))));
        bufp->chgBit(oldp+52,((1U & (vlSelf->co_sim_DSP_MULTACC_TEST__DOT__b 
                                     >> 4U))));
        bufp->chgBit(oldp+53,((1U & (vlSelf->co_sim_DSP_MULTACC_TEST__DOT__b 
                                     >> 5U))));
        bufp->chgBit(oldp+54,((1U & (vlSelf->co_sim_DSP_MULTACC_TEST__DOT__b 
                                     >> 6U))));
        bufp->chgBit(oldp+55,((1U & (vlSelf->co_sim_DSP_MULTACC_TEST__DOT__b 
                                     >> 7U))));
        bufp->chgBit(oldp+56,((1U & (vlSelf->co_sim_DSP_MULTACC_TEST__DOT__b 
                                     >> 8U))));
        bufp->chgBit(oldp+57,((1U & (vlSelf->co_sim_DSP_MULTACC_TEST__DOT__b 
                                     >> 9U))));
        bufp->chgBit(oldp+58,((1U & (IData)(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__feedback))));
        bufp->chgBit(oldp+59,((1U & ((IData)(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__feedback) 
                                     >> 1U))));
        bufp->chgBit(oldp+60,((1U & ((IData)(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__feedback) 
                                     >> 2U))));
        bufp->chgBit(oldp+61,((1U & (IData)(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__shift_right))));
        bufp->chgBit(oldp+62,((1U & ((IData)(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__shift_right) 
                                     >> 1U))));
        bufp->chgBit(oldp+63,((1U & ((IData)(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__shift_right) 
                                     >> 2U))));
        bufp->chgBit(oldp+64,((1U & ((IData)(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__shift_right) 
                                     >> 3U))));
        bufp->chgBit(oldp+65,((1U & ((IData)(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__shift_right) 
                                     >> 4U))));
        bufp->chgBit(oldp+66,((1U & ((IData)(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__shift_right) 
                                     >> 5U))));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[5U]))) {
        bufp->chgBit(oldp+67,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multacc__DOT__subtract_int));
        bufp->chgCData(oldp+68,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multacc__DOT__acc_fir_int),6);
        bufp->chgCData(oldp+69,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multacc__DOT__feedback_int),3);
        bufp->chgBit(oldp+70,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multacc__DOT__load_acc_int));
        bufp->chgIData(oldp+71,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multacc__DOT__a_int),20);
        bufp->chgIData(oldp+72,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multacc__DOT__b_int),18);
        bufp->chgBit(oldp+73,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multacc__DOT__unsigned_a_int));
        bufp->chgBit(oldp+74,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multacc__DOT__unsigned_b_int));
        bufp->chgIData(oldp+75,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multacc__DOT__mult_b),18);
        bufp->chgBit(oldp+76,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multadd__DOT__subtract_int));
        bufp->chgCData(oldp+77,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multadd__DOT__acc_fir_int),6);
        bufp->chgCData(oldp+78,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multadd__DOT__feedback_int),3);
        bufp->chgCData(oldp+79,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multadd__DOT__shift_right_int),6);
        bufp->chgBit(oldp+80,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multadd__DOT__round_int));
        bufp->chgBit(oldp+81,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multadd__DOT__saturate_int));
        bufp->chgBit(oldp+82,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multadd__DOT__load_acc_int));
        bufp->chgIData(oldp+83,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multadd__DOT__a_int),20);
        bufp->chgIData(oldp+84,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multadd__DOT__b_int),18);
        bufp->chgBit(oldp+85,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multadd__DOT__unsigned_a_int));
        bufp->chgBit(oldp+86,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multadd__DOT__unsigned_b_int));
        bufp->chgIData(oldp+87,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multadd__DOT__mult_b),18);
        bufp->chgBit(oldp+88,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTACC___024iopadmap__024z_multacc__05b37__05d__DOT__genblk1__DOT__DSP38_MULTACC__DOT__subtract_int));
        bufp->chgCData(oldp+89,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTACC___024iopadmap__024z_multacc__05b37__05d__DOT__genblk1__DOT__DSP38_MULTACC__DOT__feedback_int),3);
        bufp->chgBit(oldp+90,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTACC___024iopadmap__024z_multacc__05b37__05d__DOT__genblk1__DOT__DSP38_MULTACC__DOT__load_acc_int));
        bufp->chgIData(oldp+91,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTACC___024iopadmap__024z_multacc__05b37__05d__DOT__genblk1__DOT__DSP38_MULTACC__DOT__a_int),20);
        bufp->chgIData(oldp+92,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTACC___024iopadmap__024z_multacc__05b37__05d__DOT__genblk1__DOT__DSP38_MULTACC__DOT__b_int),18);
        bufp->chgBit(oldp+93,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTACC___024iopadmap__024z_multacc__05b37__05d__DOT__genblk1__DOT__DSP38_MULTACC__DOT__unsigned_a_int));
        bufp->chgBit(oldp+94,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTACC___024iopadmap__024z_multacc__05b37__05d__DOT__genblk1__DOT__DSP38_MULTACC__DOT__unsigned_b_int));
        bufp->chgIData(oldp+95,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTACC___024iopadmap__024z_multacc__05b37__05d__DOT__genblk1__DOT__DSP38_MULTACC__DOT__mult_b),18);
        bufp->chgBit(oldp+96,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTADD___024iopadmap__024z_multadd__05b37__05d__DOT__genblk1__DOT__DSP38_MULTADD__DOT__subtract_int));
        bufp->chgCData(oldp+97,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTADD___024iopadmap__024z_multadd__05b37__05d__DOT__genblk1__DOT__DSP38_MULTADD__DOT__acc_fir_int),6);
        bufp->chgCData(oldp+98,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTADD___024iopadmap__024z_multadd__05b37__05d__DOT__genblk1__DOT__DSP38_MULTADD__DOT__feedback_int),3);
        bufp->chgCData(oldp+99,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTADD___024iopadmap__024z_multadd__05b37__05d__DOT__genblk1__DOT__DSP38_MULTADD__DOT__shift_right_int),6);
        bufp->chgBit(oldp+100,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTADD___024iopadmap__024z_multadd__05b37__05d__DOT__genblk1__DOT__DSP38_MULTADD__DOT__round_int));
        bufp->chgBit(oldp+101,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTADD___024iopadmap__024z_multadd__05b37__05d__DOT__genblk1__DOT__DSP38_MULTADD__DOT__saturate_int));
        bufp->chgBit(oldp+102,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTADD___024iopadmap__024z_multadd__05b37__05d__DOT__genblk1__DOT__DSP38_MULTADD__DOT__load_acc_int));
        bufp->chgIData(oldp+103,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTADD___024iopadmap__024z_multadd__05b37__05d__DOT__genblk1__DOT__DSP38_MULTADD__DOT__a_int),20);
        bufp->chgIData(oldp+104,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTADD___024iopadmap__024z_multadd__05b37__05d__DOT__genblk1__DOT__DSP38_MULTADD__DOT__b_int),18);
        bufp->chgBit(oldp+105,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTADD___024iopadmap__024z_multadd__05b37__05d__DOT__genblk1__DOT__DSP38_MULTADD__DOT__unsigned_a_int));
        bufp->chgBit(oldp+106,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTADD___024iopadmap__024z_multadd__05b37__05d__DOT__genblk1__DOT__DSP38_MULTADD__DOT__unsigned_b_int));
        bufp->chgIData(oldp+107,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTADD___024iopadmap__024z_multadd__05b37__05d__DOT__genblk1__DOT__DSP38_MULTADD__DOT__mult_b),18);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[6U]))) {
        bufp->chgQData(oldp+108,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multacc__DOT__z_out),38);
        bufp->chgQData(oldp+110,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTACC___024iopadmap__024z_multacc__05b37__05d__DOT__genblk1__DOT__DSP38_MULTACC__DOT__z_out),38);
        bufp->chgQData(oldp+112,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multadd__DOT__z_out),38);
        bufp->chgQData(oldp+114,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTADD___024iopadmap__024z_multadd__05b37__05d__DOT__genblk1__DOT__DSP38_MULTADD__DOT__z_out),38);
        bufp->chgQData(oldp+116,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multacc__DOT__add_sub_in),64);
        bufp->chgQData(oldp+118,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multacc__DOT__mult_out),64);
        bufp->chgQData(oldp+120,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multacc__DOT__add_sub_out),64);
        bufp->chgQData(oldp+122,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multacc__DOT__pre_shift),64);
        bufp->chgQData(oldp+124,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multacc__DOT__shift_right),64);
        bufp->chgQData(oldp+126,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multacc__DOT__round),64);
        bufp->chgQData(oldp+128,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multacc__DOT__saturate),38);
        bufp->chgIData(oldp+130,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multacc__DOT__mult_a),20);
        bufp->chgQData(oldp+131,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multadd__DOT__add_sub_in),64);
        bufp->chgQData(oldp+133,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multadd__DOT__mult_out),64);
        bufp->chgQData(oldp+135,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multadd__DOT__add_sub_out),64);
        bufp->chgQData(oldp+137,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multadd__DOT__pre_shift),64);
        bufp->chgQData(oldp+139,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multadd__DOT__shift_right),64);
        bufp->chgQData(oldp+141,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multadd__DOT__round),64);
        bufp->chgQData(oldp+143,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multadd__DOT__saturate),38);
        bufp->chgIData(oldp+145,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multadd__DOT__mult_a),20);
        bufp->chgBit(oldp+146,((1U & (IData)(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTACC___024iopadmap__024z_multacc__05b37__05d__DOT__genblk1__DOT__DSP38_MULTACC__DOT__z_out))));
        bufp->chgBit(oldp+147,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTACC___024iopadmap__024z_multacc__05b37__05d__DOT__genblk1__DOT__DSP38_MULTACC__DOT__z_out 
                                              >> 0xaU)))));
        bufp->chgBit(oldp+148,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTACC___024iopadmap__024z_multacc__05b37__05d__DOT__genblk1__DOT__DSP38_MULTACC__DOT__z_out 
                                              >> 0xbU)))));
        bufp->chgBit(oldp+149,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTACC___024iopadmap__024z_multacc__05b37__05d__DOT__genblk1__DOT__DSP38_MULTACC__DOT__z_out 
                                              >> 0xcU)))));
        bufp->chgBit(oldp+150,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTACC___024iopadmap__024z_multacc__05b37__05d__DOT__genblk1__DOT__DSP38_MULTACC__DOT__z_out 
                                              >> 0xdU)))));
        bufp->chgBit(oldp+151,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTACC___024iopadmap__024z_multacc__05b37__05d__DOT__genblk1__DOT__DSP38_MULTACC__DOT__z_out 
                                              >> 0xeU)))));
        bufp->chgBit(oldp+152,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTACC___024iopadmap__024z_multacc__05b37__05d__DOT__genblk1__DOT__DSP38_MULTACC__DOT__z_out 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+153,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTACC___024iopadmap__024z_multacc__05b37__05d__DOT__genblk1__DOT__DSP38_MULTACC__DOT__z_out 
                                              >> 0x10U)))));
        bufp->chgBit(oldp+154,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTACC___024iopadmap__024z_multacc__05b37__05d__DOT__genblk1__DOT__DSP38_MULTACC__DOT__z_out 
                                              >> 0x11U)))));
        bufp->chgBit(oldp+155,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTACC___024iopadmap__024z_multacc__05b37__05d__DOT__genblk1__DOT__DSP38_MULTACC__DOT__z_out 
                                              >> 0x12U)))));
        bufp->chgBit(oldp+156,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTACC___024iopadmap__024z_multacc__05b37__05d__DOT__genblk1__DOT__DSP38_MULTACC__DOT__z_out 
                                              >> 0x13U)))));
        bufp->chgBit(oldp+157,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTACC___024iopadmap__024z_multacc__05b37__05d__DOT__genblk1__DOT__DSP38_MULTACC__DOT__z_out 
                                              >> 1U)))));
        bufp->chgBit(oldp+158,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTACC___024iopadmap__024z_multacc__05b37__05d__DOT__genblk1__DOT__DSP38_MULTACC__DOT__z_out 
                                              >> 0x14U)))));
        bufp->chgBit(oldp+159,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTACC___024iopadmap__024z_multacc__05b37__05d__DOT__genblk1__DOT__DSP38_MULTACC__DOT__z_out 
                                              >> 0x15U)))));
        bufp->chgBit(oldp+160,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTACC___024iopadmap__024z_multacc__05b37__05d__DOT__genblk1__DOT__DSP38_MULTACC__DOT__z_out 
                                              >> 0x16U)))));
        bufp->chgBit(oldp+161,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTACC___024iopadmap__024z_multacc__05b37__05d__DOT__genblk1__DOT__DSP38_MULTACC__DOT__z_out 
                                              >> 0x17U)))));
        bufp->chgBit(oldp+162,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTACC___024iopadmap__024z_multacc__05b37__05d__DOT__genblk1__DOT__DSP38_MULTACC__DOT__z_out 
                                              >> 0x18U)))));
        bufp->chgBit(oldp+163,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTACC___024iopadmap__024z_multacc__05b37__05d__DOT__genblk1__DOT__DSP38_MULTACC__DOT__z_out 
                                              >> 0x19U)))));
        bufp->chgBit(oldp+164,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTACC___024iopadmap__024z_multacc__05b37__05d__DOT__genblk1__DOT__DSP38_MULTACC__DOT__z_out 
                                              >> 0x1aU)))));
        bufp->chgBit(oldp+165,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTACC___024iopadmap__024z_multacc__05b37__05d__DOT__genblk1__DOT__DSP38_MULTACC__DOT__z_out 
                                              >> 0x1bU)))));
        bufp->chgBit(oldp+166,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTACC___024iopadmap__024z_multacc__05b37__05d__DOT__genblk1__DOT__DSP38_MULTACC__DOT__z_out 
                                              >> 0x1cU)))));
        bufp->chgBit(oldp+167,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTACC___024iopadmap__024z_multacc__05b37__05d__DOT__genblk1__DOT__DSP38_MULTACC__DOT__z_out 
                                              >> 0x1dU)))));
        bufp->chgBit(oldp+168,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTACC___024iopadmap__024z_multacc__05b37__05d__DOT__genblk1__DOT__DSP38_MULTACC__DOT__z_out 
                                              >> 2U)))));
        bufp->chgBit(oldp+169,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTACC___024iopadmap__024z_multacc__05b37__05d__DOT__genblk1__DOT__DSP38_MULTACC__DOT__z_out 
                                              >> 0x1eU)))));
        bufp->chgBit(oldp+170,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTACC___024iopadmap__024z_multacc__05b37__05d__DOT__genblk1__DOT__DSP38_MULTACC__DOT__z_out 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+171,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTACC___024iopadmap__024z_multacc__05b37__05d__DOT__genblk1__DOT__DSP38_MULTACC__DOT__z_out 
                                              >> 0x20U)))));
        bufp->chgBit(oldp+172,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTACC___024iopadmap__024z_multacc__05b37__05d__DOT__genblk1__DOT__DSP38_MULTACC__DOT__z_out 
                                              >> 0x21U)))));
        bufp->chgBit(oldp+173,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTACC___024iopadmap__024z_multacc__05b37__05d__DOT__genblk1__DOT__DSP38_MULTACC__DOT__z_out 
                                              >> 0x22U)))));
        bufp->chgBit(oldp+174,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTACC___024iopadmap__024z_multacc__05b37__05d__DOT__genblk1__DOT__DSP38_MULTACC__DOT__z_out 
                                              >> 0x23U)))));
        bufp->chgBit(oldp+175,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTACC___024iopadmap__024z_multacc__05b37__05d__DOT__genblk1__DOT__DSP38_MULTACC__DOT__z_out 
                                              >> 0x24U)))));
        bufp->chgBit(oldp+176,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTACC___024iopadmap__024z_multacc__05b37__05d__DOT__genblk1__DOT__DSP38_MULTACC__DOT__z_out 
                                              >> 0x25U)))));
        bufp->chgBit(oldp+177,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTACC___024iopadmap__024z_multacc__05b37__05d__DOT__genblk1__DOT__DSP38_MULTACC__DOT__z_out 
                                              >> 3U)))));
        bufp->chgBit(oldp+178,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTACC___024iopadmap__024z_multacc__05b37__05d__DOT__genblk1__DOT__DSP38_MULTACC__DOT__z_out 
                                              >> 4U)))));
        bufp->chgBit(oldp+179,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTACC___024iopadmap__024z_multacc__05b37__05d__DOT__genblk1__DOT__DSP38_MULTACC__DOT__z_out 
                                              >> 5U)))));
        bufp->chgBit(oldp+180,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTACC___024iopadmap__024z_multacc__05b37__05d__DOT__genblk1__DOT__DSP38_MULTACC__DOT__z_out 
                                              >> 6U)))));
        bufp->chgBit(oldp+181,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTACC___024iopadmap__024z_multacc__05b37__05d__DOT__genblk1__DOT__DSP38_MULTACC__DOT__z_out 
                                              >> 7U)))));
        bufp->chgBit(oldp+182,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTACC___024iopadmap__024z_multacc__05b37__05d__DOT__genblk1__DOT__DSP38_MULTACC__DOT__z_out 
                                              >> 8U)))));
        bufp->chgBit(oldp+183,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTACC___024iopadmap__024z_multacc__05b37__05d__DOT__genblk1__DOT__DSP38_MULTACC__DOT__z_out 
                                              >> 9U)))));
        bufp->chgBit(oldp+184,((1U & (IData)(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTADD___024iopadmap__024z_multadd__05b37__05d__DOT__genblk1__DOT__DSP38_MULTADD__DOT__z_out))));
        bufp->chgBit(oldp+185,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTADD___024iopadmap__024z_multadd__05b37__05d__DOT__genblk1__DOT__DSP38_MULTADD__DOT__z_out 
                                              >> 0xaU)))));
        bufp->chgBit(oldp+186,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTADD___024iopadmap__024z_multadd__05b37__05d__DOT__genblk1__DOT__DSP38_MULTADD__DOT__z_out 
                                              >> 0xbU)))));
        bufp->chgBit(oldp+187,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTADD___024iopadmap__024z_multadd__05b37__05d__DOT__genblk1__DOT__DSP38_MULTADD__DOT__z_out 
                                              >> 0xcU)))));
        bufp->chgBit(oldp+188,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTADD___024iopadmap__024z_multadd__05b37__05d__DOT__genblk1__DOT__DSP38_MULTADD__DOT__z_out 
                                              >> 0xdU)))));
        bufp->chgBit(oldp+189,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTADD___024iopadmap__024z_multadd__05b37__05d__DOT__genblk1__DOT__DSP38_MULTADD__DOT__z_out 
                                              >> 0xeU)))));
        bufp->chgBit(oldp+190,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTADD___024iopadmap__024z_multadd__05b37__05d__DOT__genblk1__DOT__DSP38_MULTADD__DOT__z_out 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+191,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTADD___024iopadmap__024z_multadd__05b37__05d__DOT__genblk1__DOT__DSP38_MULTADD__DOT__z_out 
                                              >> 0x10U)))));
        bufp->chgBit(oldp+192,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTADD___024iopadmap__024z_multadd__05b37__05d__DOT__genblk1__DOT__DSP38_MULTADD__DOT__z_out 
                                              >> 0x11U)))));
        bufp->chgBit(oldp+193,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTADD___024iopadmap__024z_multadd__05b37__05d__DOT__genblk1__DOT__DSP38_MULTADD__DOT__z_out 
                                              >> 0x12U)))));
        bufp->chgBit(oldp+194,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTADD___024iopadmap__024z_multadd__05b37__05d__DOT__genblk1__DOT__DSP38_MULTADD__DOT__z_out 
                                              >> 0x13U)))));
        bufp->chgBit(oldp+195,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTADD___024iopadmap__024z_multadd__05b37__05d__DOT__genblk1__DOT__DSP38_MULTADD__DOT__z_out 
                                              >> 1U)))));
        bufp->chgBit(oldp+196,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTADD___024iopadmap__024z_multadd__05b37__05d__DOT__genblk1__DOT__DSP38_MULTADD__DOT__z_out 
                                              >> 0x14U)))));
        bufp->chgBit(oldp+197,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTADD___024iopadmap__024z_multadd__05b37__05d__DOT__genblk1__DOT__DSP38_MULTADD__DOT__z_out 
                                              >> 0x15U)))));
        bufp->chgBit(oldp+198,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTADD___024iopadmap__024z_multadd__05b37__05d__DOT__genblk1__DOT__DSP38_MULTADD__DOT__z_out 
                                              >> 0x16U)))));
        bufp->chgBit(oldp+199,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTADD___024iopadmap__024z_multadd__05b37__05d__DOT__genblk1__DOT__DSP38_MULTADD__DOT__z_out 
                                              >> 0x17U)))));
        bufp->chgBit(oldp+200,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTADD___024iopadmap__024z_multadd__05b37__05d__DOT__genblk1__DOT__DSP38_MULTADD__DOT__z_out 
                                              >> 0x18U)))));
        bufp->chgBit(oldp+201,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTADD___024iopadmap__024z_multadd__05b37__05d__DOT__genblk1__DOT__DSP38_MULTADD__DOT__z_out 
                                              >> 0x19U)))));
        bufp->chgBit(oldp+202,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTADD___024iopadmap__024z_multadd__05b37__05d__DOT__genblk1__DOT__DSP38_MULTADD__DOT__z_out 
                                              >> 0x1aU)))));
        bufp->chgBit(oldp+203,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTADD___024iopadmap__024z_multadd__05b37__05d__DOT__genblk1__DOT__DSP38_MULTADD__DOT__z_out 
                                              >> 0x1bU)))));
        bufp->chgBit(oldp+204,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTADD___024iopadmap__024z_multadd__05b37__05d__DOT__genblk1__DOT__DSP38_MULTADD__DOT__z_out 
                                              >> 0x1cU)))));
        bufp->chgBit(oldp+205,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTADD___024iopadmap__024z_multadd__05b37__05d__DOT__genblk1__DOT__DSP38_MULTADD__DOT__z_out 
                                              >> 0x1dU)))));
        bufp->chgBit(oldp+206,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTADD___024iopadmap__024z_multadd__05b37__05d__DOT__genblk1__DOT__DSP38_MULTADD__DOT__z_out 
                                              >> 2U)))));
        bufp->chgBit(oldp+207,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTADD___024iopadmap__024z_multadd__05b37__05d__DOT__genblk1__DOT__DSP38_MULTADD__DOT__z_out 
                                              >> 0x1eU)))));
        bufp->chgBit(oldp+208,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTADD___024iopadmap__024z_multadd__05b37__05d__DOT__genblk1__DOT__DSP38_MULTADD__DOT__z_out 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+209,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTADD___024iopadmap__024z_multadd__05b37__05d__DOT__genblk1__DOT__DSP38_MULTADD__DOT__z_out 
                                              >> 0x20U)))));
        bufp->chgBit(oldp+210,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTADD___024iopadmap__024z_multadd__05b37__05d__DOT__genblk1__DOT__DSP38_MULTADD__DOT__z_out 
                                              >> 0x21U)))));
        bufp->chgBit(oldp+211,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTADD___024iopadmap__024z_multadd__05b37__05d__DOT__genblk1__DOT__DSP38_MULTADD__DOT__z_out 
                                              >> 0x22U)))));
        bufp->chgBit(oldp+212,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTADD___024iopadmap__024z_multadd__05b37__05d__DOT__genblk1__DOT__DSP38_MULTADD__DOT__z_out 
                                              >> 0x23U)))));
        bufp->chgBit(oldp+213,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTADD___024iopadmap__024z_multadd__05b37__05d__DOT__genblk1__DOT__DSP38_MULTADD__DOT__z_out 
                                              >> 0x24U)))));
        bufp->chgBit(oldp+214,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTADD___024iopadmap__024z_multadd__05b37__05d__DOT__genblk1__DOT__DSP38_MULTADD__DOT__z_out 
                                              >> 0x25U)))));
        bufp->chgBit(oldp+215,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTADD___024iopadmap__024z_multadd__05b37__05d__DOT__genblk1__DOT__DSP38_MULTADD__DOT__z_out 
                                              >> 3U)))));
        bufp->chgBit(oldp+216,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTADD___024iopadmap__024z_multadd__05b37__05d__DOT__genblk1__DOT__DSP38_MULTADD__DOT__z_out 
                                              >> 4U)))));
        bufp->chgBit(oldp+217,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTADD___024iopadmap__024z_multadd__05b37__05d__DOT__genblk1__DOT__DSP38_MULTADD__DOT__z_out 
                                              >> 5U)))));
        bufp->chgBit(oldp+218,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTADD___024iopadmap__024z_multadd__05b37__05d__DOT__genblk1__DOT__DSP38_MULTADD__DOT__z_out 
                                              >> 6U)))));
        bufp->chgBit(oldp+219,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTADD___024iopadmap__024z_multadd__05b37__05d__DOT__genblk1__DOT__DSP38_MULTADD__DOT__z_out 
                                              >> 7U)))));
        bufp->chgBit(oldp+220,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTADD___024iopadmap__024z_multadd__05b37__05d__DOT__genblk1__DOT__DSP38_MULTADD__DOT__z_out 
                                              >> 8U)))));
        bufp->chgBit(oldp+221,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTADD___024iopadmap__024z_multadd__05b37__05d__DOT__genblk1__DOT__DSP38_MULTADD__DOT__z_out 
                                              >> 9U)))));
        bufp->chgQData(oldp+222,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTACC___024iopadmap__024z_multacc__05b37__05d__DOT__genblk1__DOT__DSP38_MULTACC__DOT__add_sub_in),64);
        bufp->chgQData(oldp+224,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTACC___024iopadmap__024z_multacc__05b37__05d__DOT__genblk1__DOT__DSP38_MULTACC__DOT__mult_out),64);
        bufp->chgQData(oldp+226,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTACC___024iopadmap__024z_multacc__05b37__05d__DOT__genblk1__DOT__DSP38_MULTACC__DOT__add_sub_out),64);
        bufp->chgQData(oldp+228,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTACC___024iopadmap__024z_multacc__05b37__05d__DOT__genblk1__DOT__DSP38_MULTACC__DOT__pre_shift),64);
        bufp->chgQData(oldp+230,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTACC___024iopadmap__024z_multacc__05b37__05d__DOT__genblk1__DOT__DSP38_MULTACC__DOT__shift_right),64);
        bufp->chgQData(oldp+232,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTACC___024iopadmap__024z_multacc__05b37__05d__DOT__genblk1__DOT__DSP38_MULTACC__DOT__round),64);
        bufp->chgQData(oldp+234,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTACC___024iopadmap__024z_multacc__05b37__05d__DOT__genblk1__DOT__DSP38_MULTACC__DOT__saturate),38);
        bufp->chgIData(oldp+236,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTACC___024iopadmap__024z_multacc__05b37__05d__DOT__genblk1__DOT__DSP38_MULTACC__DOT__mult_a),20);
        bufp->chgQData(oldp+237,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTADD___024iopadmap__024z_multadd__05b37__05d__DOT__genblk1__DOT__DSP38_MULTADD__DOT__add_sub_in),64);
        bufp->chgQData(oldp+239,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTADD___024iopadmap__024z_multadd__05b37__05d__DOT__genblk1__DOT__DSP38_MULTADD__DOT__mult_out),64);
        bufp->chgQData(oldp+241,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTADD___024iopadmap__024z_multadd__05b37__05d__DOT__genblk1__DOT__DSP38_MULTADD__DOT__add_sub_out),64);
        bufp->chgQData(oldp+243,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTADD___024iopadmap__024z_multadd__05b37__05d__DOT__genblk1__DOT__DSP38_MULTADD__DOT__pre_shift),64);
        bufp->chgQData(oldp+245,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTADD___024iopadmap__024z_multadd__05b37__05d__DOT__genblk1__DOT__DSP38_MULTADD__DOT__shift_right),64);
        bufp->chgQData(oldp+247,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTADD___024iopadmap__024z_multadd__05b37__05d__DOT__genblk1__DOT__DSP38_MULTADD__DOT__round),64);
        bufp->chgQData(oldp+249,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTADD___024iopadmap__024z_multadd__05b37__05d__DOT__genblk1__DOT__DSP38_MULTADD__DOT__saturate),38);
        bufp->chgIData(oldp+251,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTADD___024iopadmap__024z_multadd__05b37__05d__DOT__genblk1__DOT__DSP38_MULTADD__DOT__mult_a),20);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgIData(oldp+252,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multacc__DOT__DLY_B),18);
        bufp->chgBit(oldp+253,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multacc__DOT__subtract_reg));
        bufp->chgCData(oldp+254,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multacc__DOT__acc_fir_reg),6);
        bufp->chgCData(oldp+255,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multacc__DOT__feedback_reg),3);
        bufp->chgCData(oldp+256,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multacc__DOT__shift_right_reg1),6);
        bufp->chgCData(oldp+257,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multacc__DOT__shift_right_reg2),6);
        bufp->chgBit(oldp+258,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multacc__DOT__round_reg1));
        bufp->chgBit(oldp+259,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multacc__DOT__round_reg2));
        bufp->chgBit(oldp+260,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multacc__DOT__saturate_reg1));
        bufp->chgBit(oldp+261,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multacc__DOT__saturate_reg2));
        bufp->chgBit(oldp+262,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multacc__DOT__load_acc_reg));
        bufp->chgIData(oldp+263,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multacc__DOT__a_reg),20);
        bufp->chgIData(oldp+264,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multacc__DOT__b_reg),18);
        bufp->chgBit(oldp+265,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multacc__DOT__unsigned_a_reg));
        bufp->chgBit(oldp+266,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multacc__DOT__unsigned_b_reg));
        bufp->chgCData(oldp+267,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multacc__DOT__shift_right_int),6);
        bufp->chgBit(oldp+268,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multacc__DOT__round_int));
        bufp->chgBit(oldp+269,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multacc__DOT__saturate_int));
        bufp->chgQData(oldp+270,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multacc__DOT__accumulator),64);
        bufp->chgQData(oldp+272,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multacc__DOT__z_out_reg),38);
        bufp->chgIData(oldp+274,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multadd__DOT__DLY_B),18);
        bufp->chgBit(oldp+275,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multadd__DOT__subtract_reg));
        bufp->chgCData(oldp+276,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multadd__DOT__acc_fir_reg),6);
        bufp->chgCData(oldp+277,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multadd__DOT__feedback_reg),3);
        bufp->chgCData(oldp+278,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multadd__DOT__shift_right_reg1),6);
        bufp->chgCData(oldp+279,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multadd__DOT__shift_right_reg2),6);
        bufp->chgBit(oldp+280,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multadd__DOT__round_reg1));
        bufp->chgBit(oldp+281,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multadd__DOT__round_reg2));
        bufp->chgBit(oldp+282,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multadd__DOT__saturate_reg1));
        bufp->chgBit(oldp+283,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multadd__DOT__saturate_reg2));
        bufp->chgBit(oldp+284,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multadd__DOT__load_acc_reg));
        bufp->chgIData(oldp+285,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multadd__DOT__a_reg),20);
        bufp->chgIData(oldp+286,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multadd__DOT__b_reg),18);
        bufp->chgBit(oldp+287,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multadd__DOT__unsigned_a_reg));
        bufp->chgBit(oldp+288,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multadd__DOT__unsigned_b_reg));
        bufp->chgQData(oldp+289,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multadd__DOT__accumulator),64);
        bufp->chgQData(oldp+291,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multadd__DOT__z_out_reg),38);
        bufp->chgIData(oldp+293,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTACC___024iopadmap__024z_multacc__05b37__05d__DOT__genblk1__DOT__DSP38_MULTACC__DOT__DLY_B),18);
        bufp->chgBit(oldp+294,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTACC___024iopadmap__024z_multacc__05b37__05d__DOT__genblk1__DOT__DSP38_MULTACC__DOT__subtract_reg));
        bufp->chgCData(oldp+295,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTACC___024iopadmap__024z_multacc__05b37__05d__DOT__genblk1__DOT__DSP38_MULTACC__DOT__acc_fir_reg),6);
        bufp->chgCData(oldp+296,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTACC___024iopadmap__024z_multacc__05b37__05d__DOT__genblk1__DOT__DSP38_MULTACC__DOT__feedback_reg),3);
        bufp->chgCData(oldp+297,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTACC___024iopadmap__024z_multacc__05b37__05d__DOT__genblk1__DOT__DSP38_MULTACC__DOT__shift_right_reg1),6);
        bufp->chgCData(oldp+298,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTACC___024iopadmap__024z_multacc__05b37__05d__DOT__genblk1__DOT__DSP38_MULTACC__DOT__shift_right_reg2),6);
        bufp->chgBit(oldp+299,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTACC___024iopadmap__024z_multacc__05b37__05d__DOT__genblk1__DOT__DSP38_MULTACC__DOT__round_reg1));
        bufp->chgBit(oldp+300,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTACC___024iopadmap__024z_multacc__05b37__05d__DOT__genblk1__DOT__DSP38_MULTACC__DOT__round_reg2));
        bufp->chgBit(oldp+301,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTACC___024iopadmap__024z_multacc__05b37__05d__DOT__genblk1__DOT__DSP38_MULTACC__DOT__saturate_reg1));
        bufp->chgBit(oldp+302,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTACC___024iopadmap__024z_multacc__05b37__05d__DOT__genblk1__DOT__DSP38_MULTACC__DOT__saturate_reg2));
        bufp->chgBit(oldp+303,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTACC___024iopadmap__024z_multacc__05b37__05d__DOT__genblk1__DOT__DSP38_MULTACC__DOT__load_acc_reg));
        bufp->chgIData(oldp+304,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTACC___024iopadmap__024z_multacc__05b37__05d__DOT__genblk1__DOT__DSP38_MULTACC__DOT__a_reg),20);
        bufp->chgIData(oldp+305,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTACC___024iopadmap__024z_multacc__05b37__05d__DOT__genblk1__DOT__DSP38_MULTACC__DOT__b_reg),18);
        bufp->chgBit(oldp+306,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTACC___024iopadmap__024z_multacc__05b37__05d__DOT__genblk1__DOT__DSP38_MULTACC__DOT__unsigned_a_reg));
        bufp->chgBit(oldp+307,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTACC___024iopadmap__024z_multacc__05b37__05d__DOT__genblk1__DOT__DSP38_MULTACC__DOT__unsigned_b_reg));
        bufp->chgCData(oldp+308,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTACC___024iopadmap__024z_multacc__05b37__05d__DOT__genblk1__DOT__DSP38_MULTACC__DOT__shift_right_int),6);
        bufp->chgBit(oldp+309,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTACC___024iopadmap__024z_multacc__05b37__05d__DOT__genblk1__DOT__DSP38_MULTACC__DOT__round_int));
        bufp->chgBit(oldp+310,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTACC___024iopadmap__024z_multacc__05b37__05d__DOT__genblk1__DOT__DSP38_MULTACC__DOT__saturate_int));
        bufp->chgQData(oldp+311,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTACC___024iopadmap__024z_multacc__05b37__05d__DOT__genblk1__DOT__DSP38_MULTACC__DOT__accumulator),64);
        bufp->chgQData(oldp+313,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTACC___024iopadmap__024z_multacc__05b37__05d__DOT__genblk1__DOT__DSP38_MULTACC__DOT__z_out_reg),38);
        bufp->chgIData(oldp+315,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTADD___024iopadmap__024z_multadd__05b37__05d__DOT__dly_b),18);
        bufp->chgBit(oldp+316,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTADD___024iopadmap__024z_multadd__05b37__05d__DOT__genblk1__DOT__DSP38_MULTADD__DOT__subtract_reg));
        bufp->chgCData(oldp+317,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTADD___024iopadmap__024z_multadd__05b37__05d__DOT__genblk1__DOT__DSP38_MULTADD__DOT__acc_fir_reg),6);
        bufp->chgCData(oldp+318,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTADD___024iopadmap__024z_multadd__05b37__05d__DOT__genblk1__DOT__DSP38_MULTADD__DOT__feedback_reg),3);
        bufp->chgCData(oldp+319,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTADD___024iopadmap__024z_multadd__05b37__05d__DOT__genblk1__DOT__DSP38_MULTADD__DOT__shift_right_reg1),6);
        bufp->chgCData(oldp+320,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTADD___024iopadmap__024z_multadd__05b37__05d__DOT__genblk1__DOT__DSP38_MULTADD__DOT__shift_right_reg2),6);
        bufp->chgBit(oldp+321,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTADD___024iopadmap__024z_multadd__05b37__05d__DOT__genblk1__DOT__DSP38_MULTADD__DOT__round_reg1));
        bufp->chgBit(oldp+322,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTADD___024iopadmap__024z_multadd__05b37__05d__DOT__genblk1__DOT__DSP38_MULTADD__DOT__round_reg2));
        bufp->chgBit(oldp+323,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTADD___024iopadmap__024z_multadd__05b37__05d__DOT__genblk1__DOT__DSP38_MULTADD__DOT__saturate_reg1));
        bufp->chgBit(oldp+324,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTADD___024iopadmap__024z_multadd__05b37__05d__DOT__genblk1__DOT__DSP38_MULTADD__DOT__saturate_reg2));
        bufp->chgBit(oldp+325,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTADD___024iopadmap__024z_multadd__05b37__05d__DOT__genblk1__DOT__DSP38_MULTADD__DOT__load_acc_reg));
        bufp->chgIData(oldp+326,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTADD___024iopadmap__024z_multadd__05b37__05d__DOT__genblk1__DOT__DSP38_MULTADD__DOT__a_reg),20);
        bufp->chgIData(oldp+327,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTADD___024iopadmap__024z_multadd__05b37__05d__DOT__genblk1__DOT__DSP38_MULTADD__DOT__b_reg),18);
        bufp->chgBit(oldp+328,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTADD___024iopadmap__024z_multadd__05b37__05d__DOT__genblk1__DOT__DSP38_MULTADD__DOT__unsigned_a_reg));
        bufp->chgBit(oldp+329,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTADD___024iopadmap__024z_multadd__05b37__05d__DOT__genblk1__DOT__DSP38_MULTADD__DOT__unsigned_b_reg));
        bufp->chgQData(oldp+330,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTADD___024iopadmap__024z_multadd__05b37__05d__DOT__genblk1__DOT__DSP38_MULTADD__DOT__accumulator),64);
        bufp->chgQData(oldp+332,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTADD___024iopadmap__024z_multadd__05b37__05d__DOT__genblk1__DOT__DSP38_MULTADD__DOT__z_out_reg),38);
    }
    bufp->chgBit(oldp+334,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__clk));
}

void Vco_sim_DSP_MULTACC_TEST___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_DSP_MULTACC_TEST___024root__trace_cleanup\n"); );
    // Init
    Vco_sim_DSP_MULTACC_TEST___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vco_sim_DSP_MULTACC_TEST___024root*>(voidSelf);
    Vco_sim_DSP_MULTACC_TEST__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
}
