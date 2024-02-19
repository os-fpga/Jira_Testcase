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
        bufp->chgSData(oldp+13,((0x3ffU & vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__a)),10);
        bufp->chgSData(oldp+14,((0x1ffU & vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__b)),9);
        bufp->chgSData(oldp+15,((0x3ffU & (vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__a 
                                           >> 0xaU))),10);
        bufp->chgSData(oldp+16,((0x1ffU & (vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__b 
                                           >> 9U))),9);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgQData(oldp+17,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__z_out),38);
        bufp->chgIData(oldp+19,((((IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__dly_b2) 
                                  << 9U) | (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__dly_b1))),18);
        bufp->chgIData(oldp+20,((0x7ffffU & (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__z_out))),19);
        bufp->chgSData(oldp+21,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__dly_b1),9);
        bufp->chgIData(oldp+22,((0x7ffffU & (IData)(
                                                    (vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__z_out 
                                                     >> 0x13U)))),19);
        bufp->chgSData(oldp+23,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__dly_b2),9);
        bufp->chgBit(oldp+24,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__subtract_reg));
        bufp->chgCData(oldp+25,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__acc_fir_reg),5);
        bufp->chgCData(oldp+26,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__feedback_reg),3);
        bufp->chgCData(oldp+27,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__shift_right_reg1),5);
        bufp->chgCData(oldp+28,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__shift_right_reg2),5);
        bufp->chgBit(oldp+29,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__round_reg1));
        bufp->chgBit(oldp+30,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__round_reg2));
        bufp->chgBit(oldp+31,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__saturate_reg1));
        bufp->chgBit(oldp+32,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__saturate_reg2));
        bufp->chgBit(oldp+33,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__load_acc_reg));
        bufp->chgSData(oldp+34,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__a1_reg),10);
        bufp->chgSData(oldp+35,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__a2_reg),10);
        bufp->chgSData(oldp+36,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__b1_reg),9);
        bufp->chgSData(oldp+37,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__b2_reg),9);
        bufp->chgBit(oldp+38,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__unsigned_a_reg));
        bufp->chgBit(oldp+39,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__unsigned_b_reg));
        bufp->chgBit(oldp+40,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__subtract_int));
        bufp->chgCData(oldp+41,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__acc_fir_int),5);
        bufp->chgCData(oldp+42,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__feedback_int),3);
        bufp->chgCData(oldp+43,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__shift_right_int),5);
        bufp->chgBit(oldp+44,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__round_int));
        bufp->chgBit(oldp+45,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__saturate_int));
        bufp->chgBit(oldp+46,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__load_acc_int));
        bufp->chgSData(oldp+47,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__a1_int),10);
        bufp->chgSData(oldp+48,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__a2_int),10);
        bufp->chgSData(oldp+49,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__b1_int),9);
        bufp->chgSData(oldp+50,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__b2_int),9);
        bufp->chgBit(oldp+51,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__unsigned_a_int));
        bufp->chgBit(oldp+52,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__unsigned_b_int));
        bufp->chgQData(oldp+53,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__accumulator),64);
        bufp->chgQData(oldp+55,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__add_sub_in),64);
        bufp->chgQData(oldp+57,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__mult_out),64);
        bufp->chgIData(oldp+59,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__mult_out1),32);
        bufp->chgIData(oldp+60,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__mult_out2),32);
        bufp->chgQData(oldp+61,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__add_sub_out),64);
        bufp->chgQData(oldp+63,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__pre_shift),64);
        bufp->chgIData(oldp+65,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__shift_right_f0),32);
        bufp->chgIData(oldp+66,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__shift_right_f1),32);
        bufp->chgIData(oldp+67,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__round_f0),32);
        bufp->chgIData(oldp+68,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__round_f1),32);
        bufp->chgIData(oldp+69,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__saturate_f0),19);
        bufp->chgIData(oldp+70,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__saturate_f1),19);
        bufp->chgQData(oldp+71,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__z_out_reg),38);
        bufp->chgSData(oldp+73,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__mult_a1),10);
        bufp->chgSData(oldp+74,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__mult_a2),10);
        bufp->chgSData(oldp+75,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__mult_b1),9);
        bufp->chgSData(oldp+76,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__mult_b2),9);
    }
    bufp->chgBit(oldp+77,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__clk));
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
