// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vco_sim_b_registered_input_to_output_new_primitive.h for the primary calling header

#include "Vco_sim_b_registered_input_to_output_new_primitive__pch.h"
#include "Vco_sim_b_registered_input_to_output_new_primitive__Syms.h"
#include "Vco_sim_b_registered_input_to_output_new_primitive___024root.h"

VL_ATTR_COLD void Vco_sim_b_registered_input_to_output_new_primitive___024root___eval_initial__TOP(Vco_sim_b_registered_input_to_output_new_primitive___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_b_registered_input_to_output_new_primitive__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_b_registered_input_to_output_new_primitive___024root___eval_initial__TOP\n"); );
    // Body
    vlSymsp->_vm_contextp__->dumpfile(std::string{"tb.vcd"});
    vlSymsp->_traceDumpOpen();
    vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__unsigned_b_int = 1U;
    vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__subtract_int = 0U;
    vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__acc_fir_int = 0U;
    vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__feedback_int = 1U;
    vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__load_acc_int = 0U;
    vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__unsigned_a_int = 1U;
    vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__shift_right_int = 0U;
    vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__round_int = 0U;
    vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__saturate_int = 0U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vco_sim_b_registered_input_to_output_new_primitive___024root___dump_triggers__stl(Vco_sim_b_registered_input_to_output_new_primitive___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vco_sim_b_registered_input_to_output_new_primitive___024root___eval_triggers__stl(Vco_sim_b_registered_input_to_output_new_primitive___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_b_registered_input_to_output_new_primitive__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_b_registered_input_to_output_new_primitive___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vco_sim_b_registered_input_to_output_new_primitive___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
