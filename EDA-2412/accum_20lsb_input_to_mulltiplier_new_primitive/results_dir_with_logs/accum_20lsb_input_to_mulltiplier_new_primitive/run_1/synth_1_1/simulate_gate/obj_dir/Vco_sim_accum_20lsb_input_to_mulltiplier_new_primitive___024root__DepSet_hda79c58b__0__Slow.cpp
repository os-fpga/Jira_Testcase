// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vco_sim_accum_20lsb_input_to_mulltiplier_new_primitive.h for the primary calling header

#include "verilated.h"

#include "Vco_sim_accum_20lsb_input_to_mulltiplier_new_primitive__Syms.h"
#include "Vco_sim_accum_20lsb_input_to_mulltiplier_new_primitive__Syms.h"
#include "Vco_sim_accum_20lsb_input_to_mulltiplier_new_primitive___024root.h"

VL_ATTR_COLD void Vco_sim_accum_20lsb_input_to_mulltiplier_new_primitive___024root___eval_initial__TOP(Vco_sim_accum_20lsb_input_to_mulltiplier_new_primitive___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_accum_20lsb_input_to_mulltiplier_new_primitive__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_accum_20lsb_input_to_mulltiplier_new_primitive___024root___eval_initial__TOP\n"); );
    // Body
    vlSymsp->_vm_contextp__->dumpfile(std::string{"tb.vcd"});
    vlSymsp->_traceDumpOpen();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vco_sim_accum_20lsb_input_to_mulltiplier_new_primitive___024root___dump_triggers__stl(Vco_sim_accum_20lsb_input_to_mulltiplier_new_primitive___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vco_sim_accum_20lsb_input_to_mulltiplier_new_primitive___024root___eval_triggers__stl(Vco_sim_accum_20lsb_input_to_mulltiplier_new_primitive___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_accum_20lsb_input_to_mulltiplier_new_primitive__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_accum_20lsb_input_to_mulltiplier_new_primitive___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (0U == vlSelf->__VstlIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vco_sim_accum_20lsb_input_to_mulltiplier_new_primitive___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
