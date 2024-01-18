// Verilated -*- SystemC -*-
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

VL_ATTR_COLD void Vco_sim_adder_verilator___024root___eval_triggers__stl(Vco_sim_adder_verilator___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vco_sim_adder_verilator___024root___dump_triggers__stl(Vco_sim_adder_verilator___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vco_sim_adder_verilator___024root___eval_stl(Vco_sim_adder_verilator___024root* vlSelf);

VL_ATTR_COLD void Vco_sim_adder_verilator___024root___eval_settle(Vco_sim_adder_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_adder_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_adder_verilator___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vco_sim_adder_verilator___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vco_sim_adder_verilator___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/nfs_home/iparapid/fahmad/Downloads/Compiler_validation_26_oct/Compiler_Validation/RTL_testcases/verilator_tests/adder_verilator/results_dir/.././sim/co_sim_tb/co_sim_adder_verilator.v", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vco_sim_adder_verilator___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vco_sim_adder_verilator___024root___dump_triggers__stl(Vco_sim_adder_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_adder_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_adder_verilator___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vco_sim_adder_verilator___024root___act_sequent__TOP__0(Vco_sim_adder_verilator___024root* vlSelf);

VL_ATTR_COLD void Vco_sim_adder_verilator___024root___eval_stl(Vco_sim_adder_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_adder_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_adder_verilator___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vco_sim_adder_verilator___024root___act_sequent__TOP__0(vlSelf);
    }
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
    vlSelf->co_sim_adder_verilator__DOT__inst__DOT__dffre_sum__05b0__05d_output_0_0 = VL_RAND_RESET_I(1);
    vlSelf->co_sim_adder_verilator__DOT__inst__DOT__dffre_sum__05b1__05d_output_0_0 = VL_RAND_RESET_I(1);
    vlSelf->co_sim_adder_verilator__DOT__inst__DOT__dffre_sum__05b2__05d_output_0_0 = VL_RAND_RESET_I(1);
    vlSelf->co_sim_adder_verilator__DOT__inst__DOT__dffre_sum__05b3__05d_output_0_0 = VL_RAND_RESET_I(1);
    vlSelf->co_sim_adder_verilator__DOT__inst__DOT__dffre_sum__05b4__05d_output_0_0 = VL_RAND_RESET_I(1);
    vlSelf->co_sim_adder_verilator__DOT__inst__DOT____Vcellinp__lut___024abc__0241007__024new_new_n18___05F__in = VL_RAND_RESET_I(5);
    vlSelf->__VdfgTmp_hcfa82f7a__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_adder_verilator__DOT__clock__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
