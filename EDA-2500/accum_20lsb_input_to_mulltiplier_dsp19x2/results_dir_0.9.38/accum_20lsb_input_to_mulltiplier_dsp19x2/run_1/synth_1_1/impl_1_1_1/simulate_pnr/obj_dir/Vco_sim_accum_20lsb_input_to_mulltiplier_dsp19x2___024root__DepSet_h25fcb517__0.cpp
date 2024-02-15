// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2.h for the primary calling header

#include "verilated.h"

#include "Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__Syms.h"
#include "Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__Syms.h"
#include "Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2___024root___dump_triggers__act(Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2___024root* vlSelf);
#endif  // VL_DEBUG

void Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2___024root___eval_triggers__act(Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__clk__0))) 
                                     | ((IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__reset) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__reset__0)))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__VactTriggered.set(2U, ((~ (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__clk)) 
                                     & (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__clk__0)));
    vlSelf->__VactTriggered.set(3U, ((IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__clk__0))));
    vlSelf->__Vtrigprevexpr___TOP__co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__clk__0 
        = vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__reset__0 
        = vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__reset;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2___024root___dump_triggers__act(vlSelf);
    }
#endif
}
