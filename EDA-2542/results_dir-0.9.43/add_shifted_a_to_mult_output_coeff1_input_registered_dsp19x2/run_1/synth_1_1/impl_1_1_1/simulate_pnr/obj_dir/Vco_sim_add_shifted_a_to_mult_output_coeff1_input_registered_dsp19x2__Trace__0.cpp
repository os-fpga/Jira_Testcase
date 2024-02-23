// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__Syms.h"


void Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root__trace_chg_sub_0(Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root__trace_chg_top_0\n"); );
    // Init
    Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root*>(voidSelf);
    Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root__trace_chg_sub_0(Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+0,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__a),20);
        bufp->chgIData(oldp+1,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__b),18);
        bufp->chgBit(oldp+2,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__reset));
        bufp->chgCData(oldp+3,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__acc_fir),5);
        bufp->chgIData(oldp+4,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__mult1),32);
        bufp->chgIData(oldp+5,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__mult2),32);
        bufp->chgQData(oldp+6,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__add_sub_in),64);
        bufp->chgQData(oldp+8,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__add_sub_out),64);
        bufp->chgQData(oldp+10,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__expected_out),38);
        bufp->chgIData(oldp+12,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__mismatch),32);
        bufp->chgBit(oldp+13,((1U & vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__a)));
        bufp->chgBit(oldp+14,((1U & (vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__a 
                                     >> 1U))));
        bufp->chgBit(oldp+15,((1U & (vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__a 
                                     >> 2U))));
        bufp->chgBit(oldp+16,((1U & (vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__a 
                                     >> 3U))));
        bufp->chgBit(oldp+17,((1U & (vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__a 
                                     >> 4U))));
        bufp->chgBit(oldp+18,((1U & (vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__a 
                                     >> 5U))));
        bufp->chgBit(oldp+19,((1U & (vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__a 
                                     >> 6U))));
        bufp->chgBit(oldp+20,((1U & (vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__a 
                                     >> 7U))));
        bufp->chgBit(oldp+21,((1U & (vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__a 
                                     >> 8U))));
        bufp->chgBit(oldp+22,((1U & (vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__a 
                                     >> 9U))));
        bufp->chgBit(oldp+23,((1U & (vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__a 
                                     >> 0xaU))));
        bufp->chgBit(oldp+24,((1U & (vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__a 
                                     >> 0xbU))));
        bufp->chgBit(oldp+25,((1U & (vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__a 
                                     >> 0xcU))));
        bufp->chgBit(oldp+26,((1U & (vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__a 
                                     >> 0xdU))));
        bufp->chgBit(oldp+27,((1U & (vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__a 
                                     >> 0xeU))));
        bufp->chgBit(oldp+28,((1U & (vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__a 
                                     >> 0xfU))));
        bufp->chgBit(oldp+29,((1U & (vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__a 
                                     >> 0x10U))));
        bufp->chgBit(oldp+30,((1U & (vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__a 
                                     >> 0x11U))));
        bufp->chgBit(oldp+31,((1U & (vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__a 
                                     >> 0x12U))));
        bufp->chgBit(oldp+32,((1U & (vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__a 
                                     >> 0x13U))));
        bufp->chgBit(oldp+33,((1U & vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__b)));
        bufp->chgBit(oldp+34,((1U & (vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__b 
                                     >> 1U))));
        bufp->chgBit(oldp+35,((1U & (vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__b 
                                     >> 2U))));
        bufp->chgBit(oldp+36,((1U & (vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__b 
                                     >> 3U))));
        bufp->chgBit(oldp+37,((1U & (vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__b 
                                     >> 4U))));
        bufp->chgBit(oldp+38,((1U & (vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__b 
                                     >> 5U))));
        bufp->chgBit(oldp+39,((1U & (vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__b 
                                     >> 6U))));
        bufp->chgBit(oldp+40,((1U & (vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__b 
                                     >> 7U))));
        bufp->chgBit(oldp+41,((1U & (vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__b 
                                     >> 8U))));
        bufp->chgBit(oldp+42,((1U & (vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__b 
                                     >> 9U))));
        bufp->chgBit(oldp+43,((1U & (vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__b 
                                     >> 0xaU))));
        bufp->chgBit(oldp+44,((1U & (vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__b 
                                     >> 0xbU))));
        bufp->chgBit(oldp+45,((1U & (vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__b 
                                     >> 0xcU))));
        bufp->chgBit(oldp+46,((1U & (vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__b 
                                     >> 0xdU))));
        bufp->chgBit(oldp+47,((1U & (vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__b 
                                     >> 0xeU))));
        bufp->chgBit(oldp+48,((1U & (vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__b 
                                     >> 0xfU))));
        bufp->chgBit(oldp+49,((1U & (vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__b 
                                     >> 0x10U))));
        bufp->chgBit(oldp+50,((1U & (vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__b 
                                     >> 0x11U))));
        bufp->chgBit(oldp+51,((1U & (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__acc_fir))));
        bufp->chgBit(oldp+52,((1U & ((IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__acc_fir) 
                                     >> 1U))));
        bufp->chgBit(oldp+53,((1U & ((IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__acc_fir) 
                                     >> 2U))));
        bufp->chgBit(oldp+54,((1U & ((IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__acc_fir) 
                                     >> 3U))));
        bufp->chgBit(oldp+55,((1U & ((IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__acc_fir) 
                                     >> 4U))));
        bufp->chgCData(oldp+56,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__acc_fir),6);
        bufp->chgSData(oldp+57,((0x3ffU & vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__a)),10);
        bufp->chgSData(oldp+58,((0x1ffU & vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__b)),9);
        bufp->chgSData(oldp+59,((0x3ffU & (vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__a 
                                           >> 0xaU))),10);
        bufp->chgSData(oldp+60,((0x1ffU & (vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__b 
                                           >> 9U))),9);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgQData(oldp+61,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b20__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__z_out),38);
        bufp->chgBit(oldp+63,((1U & (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b20__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__z_out))));
        bufp->chgBit(oldp+64,((1U & (IData)((vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b20__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__z_out 
                                             >> 1U)))));
        bufp->chgBit(oldp+65,((1U & (IData)((vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b20__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__z_out 
                                             >> 2U)))));
        bufp->chgBit(oldp+66,((1U & (IData)((vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b20__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__z_out 
                                             >> 3U)))));
        bufp->chgBit(oldp+67,((1U & (IData)((vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b20__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__z_out 
                                             >> 4U)))));
        bufp->chgBit(oldp+68,((1U & (IData)((vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b20__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__z_out 
                                             >> 5U)))));
        bufp->chgBit(oldp+69,((1U & (IData)((vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b20__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__z_out 
                                             >> 6U)))));
        bufp->chgBit(oldp+70,((1U & (IData)((vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b20__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__z_out 
                                             >> 7U)))));
        bufp->chgBit(oldp+71,((1U & (IData)((vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b20__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__z_out 
                                             >> 8U)))));
        bufp->chgBit(oldp+72,((1U & (IData)((vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b20__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__z_out 
                                             >> 9U)))));
        bufp->chgBit(oldp+73,((1U & (IData)((vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b20__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__z_out 
                                             >> 0xaU)))));
        bufp->chgBit(oldp+74,((1U & (IData)((vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b20__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__z_out 
                                             >> 0xbU)))));
        bufp->chgBit(oldp+75,((1U & (IData)((vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b20__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__z_out 
                                             >> 0xcU)))));
        bufp->chgBit(oldp+76,((1U & (IData)((vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b20__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__z_out 
                                             >> 0xdU)))));
        bufp->chgBit(oldp+77,((1U & (IData)((vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b20__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__z_out 
                                             >> 0xeU)))));
        bufp->chgBit(oldp+78,((1U & (IData)((vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b20__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__z_out 
                                             >> 0xfU)))));
        bufp->chgBit(oldp+79,((1U & (IData)((vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b20__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__z_out 
                                             >> 0x10U)))));
        bufp->chgBit(oldp+80,((1U & (IData)((vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b20__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__z_out 
                                             >> 0x11U)))));
        bufp->chgBit(oldp+81,((1U & (IData)((vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b20__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__z_out 
                                             >> 0x12U)))));
        bufp->chgBit(oldp+82,((1U & (IData)((vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b20__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__z_out 
                                             >> 0x13U)))));
        bufp->chgBit(oldp+83,((1U & (IData)((vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b20__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__z_out 
                                             >> 0x14U)))));
        bufp->chgBit(oldp+84,((1U & (IData)((vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b20__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__z_out 
                                             >> 0x15U)))));
        bufp->chgBit(oldp+85,((1U & (IData)((vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b20__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__z_out 
                                             >> 0x16U)))));
        bufp->chgBit(oldp+86,((1U & (IData)((vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b20__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__z_out 
                                             >> 0x17U)))));
        bufp->chgBit(oldp+87,((1U & (IData)((vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b20__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__z_out 
                                             >> 0x18U)))));
        bufp->chgBit(oldp+88,((1U & (IData)((vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b20__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__z_out 
                                             >> 0x19U)))));
        bufp->chgBit(oldp+89,((1U & (IData)((vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b20__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__z_out 
                                             >> 0x1aU)))));
        bufp->chgBit(oldp+90,((1U & (IData)((vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b20__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__z_out 
                                             >> 0x1bU)))));
        bufp->chgBit(oldp+91,((1U & (IData)((vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b20__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__z_out 
                                             >> 0x1cU)))));
        bufp->chgBit(oldp+92,((1U & (IData)((vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b20__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__z_out 
                                             >> 0x1dU)))));
        bufp->chgBit(oldp+93,((1U & (IData)((vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b20__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__z_out 
                                             >> 0x1eU)))));
        bufp->chgBit(oldp+94,((1U & (IData)((vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b20__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__z_out 
                                             >> 0x1fU)))));
        bufp->chgBit(oldp+95,((1U & (IData)((vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b20__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__z_out 
                                             >> 0x20U)))));
        bufp->chgBit(oldp+96,((1U & (IData)((vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b20__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__z_out 
                                             >> 0x21U)))));
        bufp->chgBit(oldp+97,((1U & (IData)((vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b20__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__z_out 
                                             >> 0x22U)))));
        bufp->chgBit(oldp+98,((1U & (IData)((vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b20__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__z_out 
                                             >> 0x23U)))));
        bufp->chgBit(oldp+99,((1U & (IData)((vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b20__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__z_out 
                                             >> 0x24U)))));
        bufp->chgBit(oldp+100,((1U & (IData)((vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b20__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__z_out 
                                              >> 0x25U)))));
        bufp->chgIData(oldp+101,((((IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b20__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__dly_b2) 
                                   << 9U) | (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b20__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__dly_b1))),18);
        bufp->chgIData(oldp+102,((0x7ffffU & (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b20__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__z_out))),19);
        bufp->chgSData(oldp+103,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b20__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__dly_b1),9);
        bufp->chgIData(oldp+104,((0x7ffffU & (IData)(
                                                     (vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b20__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__z_out 
                                                      >> 0x13U)))),19);
        bufp->chgSData(oldp+105,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b20__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__dly_b2),9);
        bufp->chgBit(oldp+106,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b20__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__subtract_reg));
        bufp->chgCData(oldp+107,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b20__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__acc_fir_reg),5);
        bufp->chgCData(oldp+108,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b20__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__feedback_reg),3);
        bufp->chgCData(oldp+109,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b20__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__shift_right_reg1),5);
        bufp->chgCData(oldp+110,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b20__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__shift_right_reg2),5);
        bufp->chgBit(oldp+111,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b20__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__round_reg1));
        bufp->chgBit(oldp+112,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b20__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__round_reg2));
        bufp->chgBit(oldp+113,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b20__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__saturate_reg1));
        bufp->chgBit(oldp+114,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b20__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__saturate_reg2));
        bufp->chgBit(oldp+115,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b20__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__load_acc_reg));
        bufp->chgSData(oldp+116,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b20__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__a1_reg),10);
        bufp->chgSData(oldp+117,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b20__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__a2_reg),10);
        bufp->chgSData(oldp+118,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b20__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__b1_reg),9);
        bufp->chgSData(oldp+119,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b20__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__b2_reg),9);
        bufp->chgBit(oldp+120,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b20__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__unsigned_a_reg));
        bufp->chgBit(oldp+121,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b20__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__unsigned_b_reg));
        bufp->chgBit(oldp+122,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b20__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__subtract_int));
        bufp->chgCData(oldp+123,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b20__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__acc_fir_int),5);
        bufp->chgCData(oldp+124,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b20__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__feedback_int),3);
        bufp->chgCData(oldp+125,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b20__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__shift_right_int),5);
        bufp->chgBit(oldp+126,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b20__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__round_int));
        bufp->chgBit(oldp+127,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b20__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__saturate_int));
        bufp->chgBit(oldp+128,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b20__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__load_acc_int));
        bufp->chgSData(oldp+129,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b20__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__a1_int),10);
        bufp->chgSData(oldp+130,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b20__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__a2_int),10);
        bufp->chgSData(oldp+131,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b20__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__b1_int),9);
        bufp->chgSData(oldp+132,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b20__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__b2_int),9);
        bufp->chgBit(oldp+133,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b20__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__unsigned_a_int));
        bufp->chgBit(oldp+134,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b20__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__unsigned_b_int));
        bufp->chgQData(oldp+135,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b20__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__accumulator),64);
        bufp->chgQData(oldp+137,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b20__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__add_sub_in),64);
        bufp->chgQData(oldp+139,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b20__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__mult_out),64);
        bufp->chgIData(oldp+141,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b20__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__mult_out1),32);
        bufp->chgIData(oldp+142,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b20__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__mult_out2),32);
        bufp->chgQData(oldp+143,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b20__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__add_sub_out),64);
        bufp->chgQData(oldp+145,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b20__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__pre_shift),64);
        bufp->chgIData(oldp+147,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b20__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__shift_right_f0),32);
        bufp->chgIData(oldp+148,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b20__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__shift_right_f1),32);
        bufp->chgIData(oldp+149,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b20__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__round_f0),32);
        bufp->chgIData(oldp+150,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b20__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__round_f1),32);
        bufp->chgIData(oldp+151,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b20__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__saturate_f0),19);
        bufp->chgIData(oldp+152,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b20__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__saturate_f1),19);
        bufp->chgQData(oldp+153,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b20__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__z_out_reg),38);
        bufp->chgSData(oldp+155,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b20__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__mult_a1),10);
        bufp->chgSData(oldp+156,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b20__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__mult_a2),10);
        bufp->chgSData(oldp+157,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b20__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__mult_b1),9);
        bufp->chgSData(oldp+158,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b20__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__mult_b2),9);
    }
    bufp->chgBit(oldp+159,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__clk));
}

void Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root__trace_cleanup\n"); );
    // Init
    Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root*>(voidSelf);
    Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
