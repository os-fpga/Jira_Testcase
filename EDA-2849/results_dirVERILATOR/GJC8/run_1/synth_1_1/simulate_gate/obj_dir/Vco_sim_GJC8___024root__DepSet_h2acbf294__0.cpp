// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vco_sim_GJC8.h for the primary calling header

#include "Vco_sim_GJC8__pch.h"
#include "Vco_sim_GJC8__Syms.h"
#include "Vco_sim_GJC8___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vco_sim_GJC8___024root___dump_triggers__act(Vco_sim_GJC8___024root* vlSelf);
#endif  // VL_DEBUG

void Vco_sim_GJC8___024root___eval_triggers__act(Vco_sim_GJC8___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC8___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__CLK) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC8__DOT__golden__DOT__dut__DOT__CLK__0))) 
                                     | ((IData)(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__RESET) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC8__DOT__golden__DOT__dut__DOT__RESET__0)))));
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__ACC_FIR) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC8__DOT__golden__DOT__dut__DOT__ACC_FIR__0)));
    vlSelf->__VactTriggered.set(2U, (((IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__CLK) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__CLK__0))) 
                                     | ((IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__RESET) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__RESET__0)))));
    vlSelf->__VactTriggered.set(3U, ((IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__ACC_FIR) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__ACC_FIR__0)));
    vlSelf->__VactTriggered.set(4U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC8__DOT__golden__DOT__dut__DOT__CLK__0 
        = vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__CLK;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC8__DOT__golden__DOT__dut__DOT__RESET__0 
        = vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__RESET;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC8__DOT__golden__DOT__dut__DOT__ACC_FIR__0 
        = vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__ACC_FIR;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__CLK__0 
        = vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__CLK;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__RESET__0 
        = vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__RESET;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__ACC_FIR__0 
        = vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__ACC_FIR;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.set(1U, 1U);
        vlSelf->__VactTriggered.set(3U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vco_sim_GJC8___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vco_sim_GJC8___024root___nba_sequent__TOP__0(Vco_sim_GJC8___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC8___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (VL_UNLIKELY((0x2bU < (IData)(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__ACC_FIR)))) {
        VL_WRITEF_NX("WARNING: DSP38 instance %Nco_sim_GJC8.golden.dut ACC_FIR input is %2# which is greater than 43 which serves no function\n",0,
                     vlSymsp->name(),6,vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__ACC_FIR);
    }
}

VL_INLINE_OPT void Vco_sim_GJC8___024root___nba_sequent__TOP__1(Vco_sim_GJC8___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC8___024root___nba_sequent__TOP__1\n"); );
    // Body
    if (VL_UNLIKELY((0x2bU < (IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__ACC_FIR)))) {
        VL_WRITEF_NX("WARNING: DSP38 instance %Nco_sim_GJC8.synth_net.dut ACC_FIR input is %2# which is greater than 43 which serves no function\n",0,
                     vlSymsp->name(),6,vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__ACC_FIR);
    }
}
