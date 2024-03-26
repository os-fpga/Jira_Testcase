// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vco_sim_mac_32.h for the primary calling header

#include "Vco_sim_mac_32__pch.h"
#include "Vco_sim_mac_32__Syms.h"
#include "Vco_sim_mac_32___024root.h"

VL_ATTR_COLD void Vco_sim_mac_32___024root___eval_initial__TOP(Vco_sim_mac_32___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_mac_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_mac_32___024root___eval_initial__TOP\n"); );
    // Body
    vlSymsp->_vm_contextp__->dumpfile(std::string{"tb.vcd"});
    vlSymsp->_traceDumpOpen();
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__unsigned_b_int = 0U;
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__feedback_int = 0U;
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__unsigned_a_int = 0U;
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__unsigned_b_int = 0U;
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__feedback_int = 0U;
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__unsigned_a_int = 0U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vco_sim_mac_32___024root___dump_triggers__stl(Vco_sim_mac_32___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vco_sim_mac_32___024root___eval_triggers__stl(Vco_sim_mac_32___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_mac_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_mac_32___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
    vlSelf->__VstlTriggered.set(1U, (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                                     != vlSelf->__Vtrigprevexpr___TOP__co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC__0));
    vlSelf->__VstlTriggered.set(2U, (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                                     != vlSelf->__Vtrigprevexpr___TOP__co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC__0));
    vlSelf->__Vtrigprevexpr___TOP__co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC__0 
        = vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC__0 
        = vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VstlDidInit))))) {
        vlSelf->__VstlDidInit = 1U;
        vlSelf->__VstlTriggered.set(1U, 1U);
        vlSelf->__VstlTriggered.set(2U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vco_sim_mac_32___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
