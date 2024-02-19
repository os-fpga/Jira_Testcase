// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive__Syms.h"


void Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive___024root__trace_chg_sub_0(Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive___024root__trace_chg_top_0\n"); );
    // Init
    Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive___024root*>(voidSelf);
    Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive___024root__trace_chg_sub_0(Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+0,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive__DOT__a),20);
        bufp->chgIData(oldp+1,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive__DOT__b),18);
        bufp->chgBit(oldp+2,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive__DOT__reset));
        bufp->chgCData(oldp+3,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive__DOT__acc_fir),6);
        bufp->chgQData(oldp+4,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive__DOT__expected_out),38);
        bufp->chgIData(oldp+6,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive__DOT__mismatch),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgQData(oldp+7,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive__DOT__golden__DOT__DSP_inst__DOT__z_out),38);
        bufp->chgBit(oldp+9,((1U & vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive__DOT__golden__DOT____Vcellout__DSP_inst__DLY_B)));
        bufp->chgIData(oldp+10,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive__DOT__golden__DOT____Vcellout__DSP_inst__DLY_B),18);
        bufp->chgBit(oldp+11,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive__DOT__golden__DOT__DSP_inst__DOT__subtract_reg));
        bufp->chgCData(oldp+12,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive__DOT__golden__DOT__DSP_inst__DOT__acc_fir_reg),6);
        bufp->chgCData(oldp+13,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive__DOT__golden__DOT__DSP_inst__DOT__feedback_reg),3);
        bufp->chgCData(oldp+14,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive__DOT__golden__DOT__DSP_inst__DOT__shift_right_reg1),6);
        bufp->chgCData(oldp+15,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive__DOT__golden__DOT__DSP_inst__DOT__shift_right_reg2),6);
        bufp->chgBit(oldp+16,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive__DOT__golden__DOT__DSP_inst__DOT__round_reg1));
        bufp->chgBit(oldp+17,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive__DOT__golden__DOT__DSP_inst__DOT__round_reg2));
        bufp->chgBit(oldp+18,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive__DOT__golden__DOT__DSP_inst__DOT__saturate_reg1));
        bufp->chgBit(oldp+19,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive__DOT__golden__DOT__DSP_inst__DOT__saturate_reg2));
        bufp->chgBit(oldp+20,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive__DOT__golden__DOT__DSP_inst__DOT__load_acc_reg));
        bufp->chgIData(oldp+21,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive__DOT__golden__DOT__DSP_inst__DOT__a_reg),20);
        bufp->chgIData(oldp+22,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive__DOT__golden__DOT__DSP_inst__DOT__b_reg),18);
        bufp->chgBit(oldp+23,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive__DOT__golden__DOT__DSP_inst__DOT__unsigned_a_reg));
        bufp->chgBit(oldp+24,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive__DOT__golden__DOT__DSP_inst__DOT__unsigned_b_reg));
        bufp->chgBit(oldp+25,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive__DOT__golden__DOT__DSP_inst__DOT__subtract_int));
        bufp->chgCData(oldp+26,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive__DOT__golden__DOT__DSP_inst__DOT__acc_fir_int),6);
        bufp->chgCData(oldp+27,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive__DOT__golden__DOT__DSP_inst__DOT__feedback_int),3);
        bufp->chgCData(oldp+28,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive__DOT__golden__DOT__DSP_inst__DOT__shift_right_int),6);
        bufp->chgBit(oldp+29,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive__DOT__golden__DOT__DSP_inst__DOT__round_int));
        bufp->chgBit(oldp+30,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive__DOT__golden__DOT__DSP_inst__DOT__saturate_int));
        bufp->chgBit(oldp+31,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive__DOT__golden__DOT__DSP_inst__DOT__load_acc_int));
        bufp->chgIData(oldp+32,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive__DOT__golden__DOT__DSP_inst__DOT__a_int),20);
        bufp->chgIData(oldp+33,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive__DOT__golden__DOT__DSP_inst__DOT__b_int),18);
        bufp->chgBit(oldp+34,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive__DOT__golden__DOT__DSP_inst__DOT__unsigned_a_int));
        bufp->chgBit(oldp+35,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive__DOT__golden__DOT__DSP_inst__DOT__unsigned_b_int));
        bufp->chgQData(oldp+36,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive__DOT__golden__DOT__DSP_inst__DOT__accumulator),64);
        bufp->chgQData(oldp+38,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive__DOT__golden__DOT__DSP_inst__DOT__add_sub_in),64);
        bufp->chgQData(oldp+40,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive__DOT__golden__DOT__DSP_inst__DOT__mult_out),64);
        bufp->chgQData(oldp+42,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive__DOT__golden__DOT__DSP_inst__DOT__add_sub_out),64);
        bufp->chgQData(oldp+44,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive__DOT__golden__DOT__DSP_inst__DOT__pre_shift),64);
        bufp->chgQData(oldp+46,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive__DOT__golden__DOT__DSP_inst__DOT__shift_right),64);
        bufp->chgQData(oldp+48,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive__DOT__golden__DOT__DSP_inst__DOT__round),64);
        bufp->chgQData(oldp+50,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive__DOT__golden__DOT__DSP_inst__DOT__saturate),38);
        bufp->chgQData(oldp+52,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive__DOT__golden__DOT__DSP_inst__DOT__z_out_reg),38);
        bufp->chgIData(oldp+54,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive__DOT__golden__DOT__DSP_inst__DOT__mult_a),20);
        bufp->chgIData(oldp+55,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive__DOT__golden__DOT__DSP_inst__DOT__mult_b),18);
    }
    bufp->chgBit(oldp+56,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive__DOT__clk));
}

void Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive___024root__trace_cleanup\n"); );
    // Init
    Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive___024root*>(voidSelf);
    Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
