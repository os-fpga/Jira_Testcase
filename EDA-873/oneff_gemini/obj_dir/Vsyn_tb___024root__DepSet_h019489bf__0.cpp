// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsyn_tb.h for the primary calling header

#include "verilated.h"

#include "Vsyn_tb__Syms.h"
#include "Vsyn_tb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsyn_tb___024root___dump_triggers__ico(Vsyn_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vsyn_tb___024root___eval_triggers__ico(Vsyn_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsyn_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsyn_tb___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.at(0U) = (0U == vlSelf->__VicoIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsyn_tb___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsyn_tb___024root___dump_triggers__act(Vsyn_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vsyn_tb___024root___eval_triggers__act(Vsyn_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsyn_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsyn_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk)));
    vlSelf->__VactTriggered.at(1U) = (((IData)(vlSelf->clk) 
                                       & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk))) 
                                      | ((IData)(vlSelf->syn_tb__DOT__rtl_model__DOT__lut___024abc__024379__024techmap__VhsheuR8keZROz9PaIm4SC3xs5hR2ngL9uw2TXWToki1) 
                                         & (~ (IData)(vlSelf->__Vtrigrprev__TOP__syn_tb__DOT__rtl_model__DOT__lut___024abc__024379__024techmap__VhsheuR8keZROz9PaIm4SC3xs5hR2ngL9uw2TXWToki1))));
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__syn_tb__DOT__rtl_model__DOT__lut___024abc__024379__024techmap__VhsheuR8keZROz9PaIm4SC3xs5hR2ngL9uw2TXWToki1 
        = vlSelf->syn_tb__DOT__rtl_model__DOT__lut___024abc__024379__024techmap__VhsheuR8keZROz9PaIm4SC3xs5hR2ngL9uw2TXWToki1;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsyn_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
