// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpost_pnr_wrapper_lut_ff_mux_post_synth.h for the primary calling header

#include "Vpost_pnr_wrapper_lut_ff_mux_post_synth__pch.h"
#include "Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root.h"

void Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root___eval_act(Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpost_pnr_wrapper_lut_ff_mux_post_synth__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root___eval_act\n"); );
}

void Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root___nba_sequent__TOP__0(Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root* vlSelf);

void Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root___eval_nba(Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpost_pnr_wrapper_lut_ff_mux_post_synth__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root___nba_sequent__TOP__0(Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpost_pnr_wrapper_lut_ff_mux_post_synth__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->lut_ff_mux_post_route__DOT____024auto__024rs_design_edit__02ecc__03a656__03aexecute__024649__DOT__dffre___024iopadmap__024Q_output_0_0 
        = (1U & (IData)((0x3030c0e0c0c0301ULL >> (((IData)(vlSelf->mux_sel) 
                                                   << 5U) 
                                                  | ((0x10U 
                                                      & ((IData)(vlSelf->in) 
                                                         << 4U)) 
                                                     | ((8U 
                                                         & (IData)(vlSelf->in)) 
                                                        | (((IData)(vlSelf->rst) 
                                                            << 2U) 
                                                           | ((2U 
                                                               & (IData)(vlSelf->in)) 
                                                              | (1U 
                                                                 & ((IData)(vlSelf->in) 
                                                                    >> 2U))))))))));
    vlSelf->Q = vlSelf->lut_ff_mux_post_route__DOT____024auto__024rs_design_edit__02ecc__03a656__03aexecute__024649__DOT__dffre___024iopadmap__024Q_output_0_0;
}

void Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root___eval_triggers__act(Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root* vlSelf);

bool Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root___eval_phase__act(Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpost_pnr_wrapper_lut_ff_mux_post_synth__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root___eval_phase__nba(Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpost_pnr_wrapper_lut_ff_mux_post_synth__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root___dump_triggers__nba(Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root___dump_triggers__act(Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root* vlSelf);
#endif  // VL_DEBUG

void Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root___eval(Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpost_pnr_wrapper_lut_ff_mux_post_synth__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/nfs_scratch/scratch/CompilerValidation/zaheer_ahmad/Jira/lut_ff_mux/run_1/synth_1_1/synthesis/post_pnr_wrapper_lut_ff_mux_post_synth.v", 124, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/nfs_scratch/scratch/CompilerValidation/zaheer_ahmad/Jira/lut_ff_mux/run_1/synth_1_1/synthesis/post_pnr_wrapper_lut_ff_mux_post_synth.v", 124, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root___eval_debug_assertions(Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpost_pnr_wrapper_lut_ff_mux_post_synth__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->in & 0xf0U))) {
        Verilated::overWidthError("in");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->mux_sel & 0xfeU))) {
        Verilated::overWidthError("mux_sel");}
}
#endif  // VL_DEBUG
