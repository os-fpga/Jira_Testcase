// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive.h for the primary calling header

#include "verilated.h"

#include "Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive__Syms.h"
#include "Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive__Syms.h"
#include "Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive___024root___dump_triggers__act(Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive___024root* vlSelf);
#endif  // VL_DEBUG

void Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive___024root___eval_triggers__act(Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive__DOT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive__DOT__clk__0))) 
                                     | ((IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive__DOT__reset) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive__DOT__reset__0)))));
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive__DOT__acc_fir) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive__DOT__acc_fir__0)));
    vlSelf->__VactTriggered.set(2U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__VactTriggered.set(3U, ((~ (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive__DOT__clk)) 
                                     & (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive__DOT__clk__0)));
    vlSelf->__Vtrigprevexpr___TOP__co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive__DOT__clk__0 
        = vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive__DOT__reset__0 
        = vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive__DOT__reset;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive__DOT__acc_fir__0 
        = vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive__DOT__acc_fir;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.set(1U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive___024root___nba_sequent__TOP__0(Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (VL_UNLIKELY((0x2bU < (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive__DOT__acc_fir)))) {
        VL_WRITEF("WARNING: DSP38 instance %Nco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive.golden.DSP_inst ACC_FIR input is %2# which is greater than 43 which serves no function\n",
                  vlSymsp->name(),6,vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive__DOT__acc_fir);
    }
}
