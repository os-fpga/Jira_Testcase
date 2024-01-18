// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vco_sim_adder_verilator.h for the primary calling header

#include "verilated.h"

#include "Vco_sim_adder_verilator__Syms.h"
#include "Vco_sim_adder_verilator___024root.h"

VL_ATTR_COLD void Vco_sim_adder_verilator___024root___eval_static(Vco_sim_adder_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_adder_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_adder_verilator___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vco_sim_adder_verilator___024root___eval_final(Vco_sim_adder_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_adder_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_adder_verilator___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vco_sim_adder_verilator___024root___eval_settle(Vco_sim_adder_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_adder_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_adder_verilator___024root___eval_settle\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vco_sim_adder_verilator___024root___dump_triggers__act(Vco_sim_adder_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_adder_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_adder_verilator___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge co_sim_adder_verilator.clock)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(negedge co_sim_adder_verilator.clock)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vco_sim_adder_verilator___024root___dump_triggers__nba(Vco_sim_adder_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_adder_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_adder_verilator___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge co_sim_adder_verilator.clock)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(negedge co_sim_adder_verilator.clock)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vco_sim_adder_verilator___024root___ctor_var_reset(Vco_sim_adder_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_adder_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_adder_verilator___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->co_sim_adder_verilator__DOT__clock = VL_RAND_RESET_I(1);
    vlSelf->co_sim_adder_verilator__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->co_sim_adder_verilator__DOT__a = VL_RAND_RESET_I(4);
    vlSelf->co_sim_adder_verilator__DOT__b = VL_RAND_RESET_I(4);
    vlSelf->co_sim_adder_verilator__DOT__sum = VL_RAND_RESET_I(5);
    vlSelf->__Vtrigprevexpr___TOP__co_sim_adder_verilator__DOT__clock__0 = VL_RAND_RESET_I(1);
}
