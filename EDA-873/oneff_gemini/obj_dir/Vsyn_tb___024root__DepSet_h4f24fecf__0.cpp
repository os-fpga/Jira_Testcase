// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsyn_tb.h for the primary calling header

#include "verilated.h"

#include "Vsyn_tb___024root.h"

VL_INLINE_OPT void Vsyn_tb___024root___ico_sequent__TOP__0(Vsyn_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsyn_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsyn_tb___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->syn_tb__DOT__rtl_model__DOT__lut___024abc__024379__024techmap__VhsheuR8keZROz9PaIm4SC3xs5hR2ngL9uw2TXWToki1 
        = (1U & (IData)((1ULL >> ((IData)(vlSelf->rstn) 
                                  << 2U))));
}

void Vsyn_tb___024root___eval_ico(Vsyn_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsyn_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsyn_tb___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vsyn_tb___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vsyn_tb___024root___eval_act(Vsyn_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsyn_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsyn_tb___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vsyn_tb___024root___nba_sequent__TOP__0(Vsyn_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsyn_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsyn_tb___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->__Vdly__syn_tb__DOT__state = vlSelf->syn_tb__DOT__state;
    VL_WRITEF("d = %0#, q = %0#\n",1,vlSelf->syn_tb__DOT__d,
              1,(IData)(vlSelf->rtl_q));
}

VL_INLINE_OPT void Vsyn_tb___024root___nba_sequent__TOP__1(Vsyn_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsyn_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsyn_tb___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->syn_tb__DOT__rtl_model__DOT__dffr_q_output_0_0 
        = ((~ (IData)(vlSelf->syn_tb__DOT__rtl_model__DOT__lut___024abc__024379__024techmap__VhsheuR8keZROz9PaIm4SC3xs5hR2ngL9uw2TXWToki1)) 
           & (IData)(vlSelf->syn_tb__DOT__d));
    vlSelf->rtl_q = vlSelf->syn_tb__DOT__rtl_model__DOT__dffr_q_output_0_0;
}

VL_INLINE_OPT void Vsyn_tb___024root___nba_sequent__TOP__2(Vsyn_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsyn_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsyn_tb___024root___nba_sequent__TOP__2\n"); );
    // Body
    if ((0U == vlSelf->syn_tb__DOT__state)) {
        vlSelf->__Vdly__syn_tb__DOT__state = ((IData)(1U) 
                                              + vlSelf->syn_tb__DOT__state);
        vlSelf->syn_tb__DOT__d = 0U;
    } else if ((1U == vlSelf->syn_tb__DOT__state)) {
        vlSelf->__Vdly__syn_tb__DOT__state = ((IData)(1U) 
                                              + vlSelf->syn_tb__DOT__state);
        vlSelf->syn_tb__DOT__d = 1U;
    } else if ((2U == vlSelf->syn_tb__DOT__state)) {
        vlSelf->__Vdly__syn_tb__DOT__state = ((IData)(1U) 
                                              + vlSelf->syn_tb__DOT__state);
        vlSelf->syn_tb__DOT__d = 1U;
    } else if ((3U == vlSelf->syn_tb__DOT__state)) {
        vlSelf->__Vdly__syn_tb__DOT__state = ((IData)(1U) 
                                              + vlSelf->syn_tb__DOT__state);
        vlSelf->syn_tb__DOT__d = 0U;
    } else if ((4U == vlSelf->syn_tb__DOT__state)) {
        vlSelf->__Vdly__syn_tb__DOT__state = ((IData)(1U) 
                                              + vlSelf->syn_tb__DOT__state);
        vlSelf->syn_tb__DOT__d = 0U;
    } else if ((5U == vlSelf->syn_tb__DOT__state)) {
        vlSelf->__Vdly__syn_tb__DOT__state = ((IData)(1U) 
                                              + vlSelf->syn_tb__DOT__state);
        vlSelf->syn_tb__DOT__d = 1U;
    } else if ((6U == vlSelf->syn_tb__DOT__state)) {
        vlSelf->__Vdly__syn_tb__DOT__state = ((IData)(1U) 
                                              + vlSelf->syn_tb__DOT__state);
        vlSelf->syn_tb__DOT__d = 0U;
    } else if ((7U == vlSelf->syn_tb__DOT__state)) {
        vlSelf->__Vdly__syn_tb__DOT__state = ((IData)(1U) 
                                              + vlSelf->syn_tb__DOT__state);
        vlSelf->syn_tb__DOT__d = 0U;
    } else if ((8U == vlSelf->syn_tb__DOT__state)) {
        vlSelf->__Vdly__syn_tb__DOT__state = ((IData)(1U) 
                                              + vlSelf->syn_tb__DOT__state);
        vlSelf->syn_tb__DOT__d = 0U;
    }
    vlSelf->syn_tb__DOT__state = vlSelf->__Vdly__syn_tb__DOT__state;
}

void Vsyn_tb___024root___eval_nba(Vsyn_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsyn_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsyn_tb___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vsyn_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vsyn_tb___024root___nba_sequent__TOP__1(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vsyn_tb___024root___nba_sequent__TOP__2(vlSelf);
    }
}

void Vsyn_tb___024root___eval_triggers__ico(Vsyn_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsyn_tb___024root___dump_triggers__ico(Vsyn_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vsyn_tb___024root___eval_triggers__act(Vsyn_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsyn_tb___024root___dump_triggers__act(Vsyn_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsyn_tb___024root___dump_triggers__nba(Vsyn_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vsyn_tb___024root___eval(Vsyn_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsyn_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsyn_tb___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<2> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vsyn_tb___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if ((0x64U < vlSelf->__VicoIterCount)) {
#ifdef VL_DEBUG
                Vsyn_tb___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("/nfs_scratch/scratch/CompilerValidation/abdul_hameed/oneff/syn_tb.v", 1, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vsyn_tb___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vsyn_tb___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if ((0x64U < vlSelf->__VactIterCount)) {
#ifdef VL_DEBUG
                    Vsyn_tb___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/nfs_scratch/scratch/CompilerValidation/abdul_hameed/oneff/syn_tb.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vsyn_tb___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if ((0x64U < __VnbaIterCount)) {
#ifdef VL_DEBUG
                Vsyn_tb___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/nfs_scratch/scratch/CompilerValidation/abdul_hameed/oneff/syn_tb.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vsyn_tb___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vsyn_tb___024root___eval_debug_assertions(Vsyn_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsyn_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsyn_tb___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->rstn & 0xfeU))) {
        Verilated::overWidthError("rstn");}
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
}
#endif  // VL_DEBUG
