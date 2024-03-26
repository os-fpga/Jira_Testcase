// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vco_sim_mac_32.h for the primary calling header

#include "Vco_sim_mac_32__pch.h"
#include "Vco_sim_mac_32__Syms.h"
#include "Vco_sim_mac_32___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vco_sim_mac_32___024root___dump_triggers__act(Vco_sim_mac_32___024root* vlSelf);
#endif  // VL_DEBUG

void Vco_sim_mac_32___024root___eval_triggers__act(Vco_sim_mac_32___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_mac_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_mac_32___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                                     != vlSelf->__Vtrigprevexpr___TOP__co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC__1));
    vlSelf->__VactTriggered.set(1U, (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                                     != vlSelf->__Vtrigprevexpr___TOP__co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC__1));
    vlSelf->__VactTriggered.set(2U, ((IData)(vlSelf->co_sim_mac_32__DOT__clock0) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_mac_32__DOT__clock0__0))));
    vlSelf->__VactTriggered.set(3U, (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__CLK) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__CLK__0))) 
                                     | ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__RESET) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__RESET__0)))));
    vlSelf->__VactTriggered.set(4U, ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__ACC_FIR) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__ACC_FIR__0)));
    vlSelf->__VactTriggered.set(5U, (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__CLK) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__CLK__0))) 
                                     | ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__RESET) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__RESET__0)))));
    vlSelf->__VactTriggered.set(6U, ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__ACC_FIR) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__ACC_FIR__0)));
    vlSelf->__VactTriggered.set(7U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__VactTriggered.set(8U, ((~ (IData)(vlSelf->co_sim_mac_32__DOT__clock0)) 
                                     & (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_mac_32__DOT__clock0__0)));
    vlSelf->__Vtrigprevexpr___TOP__co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC__1 
        = vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC__1 
        = vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_mac_32__DOT__clock0__0 
        = vlSelf->co_sim_mac_32__DOT__clock0;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__CLK__0 
        = vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__CLK;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__RESET__0 
        = vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__RESET;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__ACC_FIR__0 
        = vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__ACC_FIR;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__CLK__0 
        = vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__CLK;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__RESET__0 
        = vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__RESET;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__ACC_FIR__0 
        = vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__ACC_FIR;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.set(0U, 1U);
        vlSelf->__VactTriggered.set(1U, 1U);
        vlSelf->__VactTriggered.set(4U, 1U);
        vlSelf->__VactTriggered.set(6U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vco_sim_mac_32___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vco_sim_mac_32___024root___nba_sequent__TOP__0(Vco_sim_mac_32___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_mac_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_mac_32___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (VL_UNLIKELY((0x2bU < (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__ACC_FIR)))) {
        VL_WRITEF_NX("WARNING: DSP38 instance %Nco_sim_mac_32.netlist.$flatten\\genblk1[0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5 ACC_FIR input is %2# which is greater than 43 which serves no function\n",0,
                     vlSymsp->name(),6,vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__ACC_FIR);
    }
}

VL_INLINE_OPT void Vco_sim_mac_32___024root___nba_sequent__TOP__1(Vco_sim_mac_32___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_mac_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_mac_32___024root___nba_sequent__TOP__1\n"); );
    // Body
    if (VL_UNLIKELY((0x2bU < (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__ACC_FIR)))) {
        VL_WRITEF_NX("WARNING: DSP38 instance %Nco_sim_mac_32.netlist.$flatten\\genblk1[1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE ACC_FIR input is %2# which is greater than 43 which serves no function\n",0,
                     vlSymsp->name(),6,vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__ACC_FIR);
    }
}
