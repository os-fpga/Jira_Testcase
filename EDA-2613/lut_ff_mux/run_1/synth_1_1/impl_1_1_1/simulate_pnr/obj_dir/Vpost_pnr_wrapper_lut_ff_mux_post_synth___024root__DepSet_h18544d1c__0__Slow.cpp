// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpost_pnr_wrapper_lut_ff_mux_post_synth.h for the primary calling header

#include "Vpost_pnr_wrapper_lut_ff_mux_post_synth__pch.h"
#include "Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root.h"

VL_ATTR_COLD void Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root___eval_static__TOP(Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root* vlSelf);

VL_ATTR_COLD void Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root___eval_static(Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpost_pnr_wrapper_lut_ff_mux_post_synth__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root___eval_static\n"); );
    // Body
    Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root___eval_static__TOP(Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpost_pnr_wrapper_lut_ff_mux_post_synth__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->lut_ff_mux_post_route__DOT____024auto__024rs_design_edit__02ecc__03a656__03aexecute__024649__DOT__dffre___024iopadmap__024Q_output_0_0 = 0U;
}

VL_ATTR_COLD void Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root___eval_initial(Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpost_pnr_wrapper_lut_ff_mux_post_synth__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
}

VL_ATTR_COLD void Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root___eval_final(Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpost_pnr_wrapper_lut_ff_mux_post_synth__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root___dump_triggers__stl(Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root___eval_phase__stl(Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root* vlSelf);

VL_ATTR_COLD void Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root___eval_settle(Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpost_pnr_wrapper_lut_ff_mux_post_synth__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/nfs_scratch/scratch/CompilerValidation/zaheer_ahmad/Jira/lut_ff_mux/run_1/synth_1_1/synthesis/post_pnr_wrapper_lut_ff_mux_post_synth.v", 124, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root___dump_triggers__stl(Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpost_pnr_wrapper_lut_ff_mux_post_synth__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root___stl_sequent__TOP__0(Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root* vlSelf);

VL_ATTR_COLD void Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root___eval_stl(Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpost_pnr_wrapper_lut_ff_mux_post_synth__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root___stl_sequent__TOP__0(Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpost_pnr_wrapper_lut_ff_mux_post_synth__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->Q = vlSelf->lut_ff_mux_post_route__DOT____024auto__024rs_design_edit__02ecc__03a656__03aexecute__024649__DOT__dffre___024iopadmap__024Q_output_0_0;
}

VL_ATTR_COLD void Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root___eval_triggers__stl(Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root* vlSelf);

VL_ATTR_COLD bool Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root___eval_phase__stl(Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpost_pnr_wrapper_lut_ff_mux_post_synth__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root___dump_triggers__act(Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpost_pnr_wrapper_lut_ff_mux_post_synth__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root___dump_triggers__nba(Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpost_pnr_wrapper_lut_ff_mux_post_synth__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root___ctor_var_reset(Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpost_pnr_wrapper_lut_ff_mux_post_synth__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->in = VL_RAND_RESET_I(4);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->Q = VL_RAND_RESET_I(1);
    vlSelf->mux_sel = VL_RAND_RESET_I(1);
    vlSelf->lut_ff_mux_post_route__DOT____024auto__024rs_design_edit__02ecc__03a656__03aexecute__024649__DOT__dffre___024iopadmap__024Q_output_0_0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
}
