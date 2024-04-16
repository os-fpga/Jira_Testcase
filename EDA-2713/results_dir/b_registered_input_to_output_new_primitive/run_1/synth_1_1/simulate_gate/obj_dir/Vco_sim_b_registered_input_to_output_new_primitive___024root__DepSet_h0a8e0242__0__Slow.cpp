// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vco_sim_b_registered_input_to_output_new_primitive.h for the primary calling header

#include "Vco_sim_b_registered_input_to_output_new_primitive__pch.h"
#include "Vco_sim_b_registered_input_to_output_new_primitive___024root.h"

VL_ATTR_COLD void Vco_sim_b_registered_input_to_output_new_primitive___024root___eval_static__TOP(Vco_sim_b_registered_input_to_output_new_primitive___024root* vlSelf);

VL_ATTR_COLD void Vco_sim_b_registered_input_to_output_new_primitive___024root___eval_static(Vco_sim_b_registered_input_to_output_new_primitive___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_b_registered_input_to_output_new_primitive__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_b_registered_input_to_output_new_primitive___024root___eval_static\n"); );
    // Body
    Vco_sim_b_registered_input_to_output_new_primitive___024root___eval_static__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vco_sim_b_registered_input_to_output_new_primitive___024root___eval_static__TOP(Vco_sim_b_registered_input_to_output_new_primitive___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_b_registered_input_to_output_new_primitive__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_b_registered_input_to_output_new_primitive___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__mismatch = 0U;
    vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT____024iopadmap__024dly_b = 0U;
    vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__subtract_reg = 0U;
    vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__acc_fir_reg = 0U;
    vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__feedback_reg = 0U;
    vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__shift_right_reg1 = 0U;
    vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__shift_right_reg2 = 0U;
    vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__round_reg1 = 0U;
    vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__round_reg2 = 0U;
    vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__saturate_reg1 = 0U;
    vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__saturate_reg2 = 0U;
    vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__load_acc_reg = 0U;
    vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__a_reg = 0U;
    vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__b_reg = 0U;
    vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__unsigned_a_reg = 1U;
    vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__unsigned_b_reg = 1U;
    vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__subtract_int = 0U;
    vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__acc_fir_int = 0U;
    vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__feedback_int = 0U;
    vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__shift_right_int = 0U;
    vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__round_int = 0U;
    vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__saturate_int = 0U;
    vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__load_acc_int = 0U;
    vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__a_int = 0U;
    vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__b_int = 0U;
    vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__unsigned_a_int = 1U;
    vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__unsigned_b_int = 1U;
    vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__accumulator = 0ULL;
    vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__add_sub_in = 0ULL;
    vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__mult_out = 0ULL;
    vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__add_sub_out = 0ULL;
    vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__pre_shift = 0ULL;
    vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__shift_right = 0ULL;
    vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__round = 0ULL;
    vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__saturate = 0ULL;
    vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__z_out = 0ULL;
    vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__z_out_reg = 0ULL;
    vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__mult_a = 0U;
    vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__mult_b = 0U;
}

VL_ATTR_COLD void Vco_sim_b_registered_input_to_output_new_primitive___024root___eval_final(Vco_sim_b_registered_input_to_output_new_primitive___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_b_registered_input_to_output_new_primitive__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_b_registered_input_to_output_new_primitive___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vco_sim_b_registered_input_to_output_new_primitive___024root___dump_triggers__stl(Vco_sim_b_registered_input_to_output_new_primitive___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vco_sim_b_registered_input_to_output_new_primitive___024root___eval_phase__stl(Vco_sim_b_registered_input_to_output_new_primitive___024root* vlSelf);

VL_ATTR_COLD void Vco_sim_b_registered_input_to_output_new_primitive___024root___eval_settle(Vco_sim_b_registered_input_to_output_new_primitive___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_b_registered_input_to_output_new_primitive__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_b_registered_input_to_output_new_primitive___024root___eval_settle\n"); );
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
            Vco_sim_b_registered_input_to_output_new_primitive___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/nfs_scratch/scratch/CompilerValidation/abdul_hameed/16apr/EDA-2713/b_registered_input_to_output_new_primitive/results_dir/.././sim/co_sim_tb/co_sim_b_registered_input_to_output_new_primitive.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vco_sim_b_registered_input_to_output_new_primitive___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vco_sim_b_registered_input_to_output_new_primitive___024root___dump_triggers__stl(Vco_sim_b_registered_input_to_output_new_primitive___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_b_registered_input_to_output_new_primitive__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_b_registered_input_to_output_new_primitive___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vco_sim_b_registered_input_to_output_new_primitive___024root___act_sequent__TOP__0(Vco_sim_b_registered_input_to_output_new_primitive___024root* vlSelf);

VL_ATTR_COLD void Vco_sim_b_registered_input_to_output_new_primitive___024root___eval_stl(Vco_sim_b_registered_input_to_output_new_primitive___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_b_registered_input_to_output_new_primitive__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_b_registered_input_to_output_new_primitive___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vco_sim_b_registered_input_to_output_new_primitive___024root___act_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void Vco_sim_b_registered_input_to_output_new_primitive___024root___eval_triggers__stl(Vco_sim_b_registered_input_to_output_new_primitive___024root* vlSelf);

VL_ATTR_COLD bool Vco_sim_b_registered_input_to_output_new_primitive___024root___eval_phase__stl(Vco_sim_b_registered_input_to_output_new_primitive___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_b_registered_input_to_output_new_primitive__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_b_registered_input_to_output_new_primitive___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vco_sim_b_registered_input_to_output_new_primitive___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vco_sim_b_registered_input_to_output_new_primitive___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vco_sim_b_registered_input_to_output_new_primitive___024root___dump_triggers__act(Vco_sim_b_registered_input_to_output_new_primitive___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_b_registered_input_to_output_new_primitive__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_b_registered_input_to_output_new_primitive___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge co_sim_b_registered_input_to_output_new_primitive.clk or posedge co_sim_b_registered_input_to_output_new_primitive.reset)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(negedge co_sim_b_registered_input_to_output_new_primitive.clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vco_sim_b_registered_input_to_output_new_primitive___024root___dump_triggers__nba(Vco_sim_b_registered_input_to_output_new_primitive___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_b_registered_input_to_output_new_primitive__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_b_registered_input_to_output_new_primitive___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge co_sim_b_registered_input_to_output_new_primitive.clk or posedge co_sim_b_registered_input_to_output_new_primitive.reset)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(negedge co_sim_b_registered_input_to_output_new_primitive.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vco_sim_b_registered_input_to_output_new_primitive___024root___ctor_var_reset(Vco_sim_b_registered_input_to_output_new_primitive___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_b_registered_input_to_output_new_primitive__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_b_registered_input_to_output_new_primitive___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__a = VL_RAND_RESET_I(20);
    vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__b = VL_RAND_RESET_I(18);
    vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__dly_b_netlist = VL_RAND_RESET_I(18);
    vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__expected_out = VL_RAND_RESET_Q(38);
    vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__mismatch = VL_RAND_RESET_I(32);
    vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT____024iopadmap__024dly_b = VL_RAND_RESET_I(18);
    vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__subtract_reg = VL_RAND_RESET_I(1);
    vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__acc_fir_reg = VL_RAND_RESET_I(6);
    vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__feedback_reg = VL_RAND_RESET_I(3);
    vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__shift_right_reg1 = VL_RAND_RESET_I(6);
    vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__shift_right_reg2 = VL_RAND_RESET_I(6);
    vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__round_reg1 = VL_RAND_RESET_I(1);
    vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__round_reg2 = VL_RAND_RESET_I(1);
    vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__saturate_reg1 = VL_RAND_RESET_I(1);
    vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__saturate_reg2 = VL_RAND_RESET_I(1);
    vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__load_acc_reg = VL_RAND_RESET_I(1);
    vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__a_reg = VL_RAND_RESET_I(20);
    vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__b_reg = VL_RAND_RESET_I(18);
    vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__unsigned_a_reg = VL_RAND_RESET_I(1);
    vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__unsigned_b_reg = VL_RAND_RESET_I(1);
    vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__subtract_int = VL_RAND_RESET_I(1);
    vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__acc_fir_int = VL_RAND_RESET_I(6);
    vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__feedback_int = VL_RAND_RESET_I(3);
    vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__shift_right_int = VL_RAND_RESET_I(6);
    vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__round_int = VL_RAND_RESET_I(1);
    vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__saturate_int = VL_RAND_RESET_I(1);
    vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__load_acc_int = VL_RAND_RESET_I(1);
    vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__a_int = VL_RAND_RESET_I(20);
    vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__b_int = VL_RAND_RESET_I(18);
    vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__unsigned_a_int = VL_RAND_RESET_I(1);
    vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__unsigned_b_int = VL_RAND_RESET_I(1);
    vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__accumulator = VL_RAND_RESET_Q(64);
    vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__add_sub_in = VL_RAND_RESET_Q(64);
    vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__mult_out = VL_RAND_RESET_Q(64);
    vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__add_sub_out = VL_RAND_RESET_Q(64);
    vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__pre_shift = VL_RAND_RESET_Q(64);
    vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__shift_right = VL_RAND_RESET_Q(64);
    vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__round = VL_RAND_RESET_Q(64);
    vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__saturate = VL_RAND_RESET_Q(38);
    vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__z_out = VL_RAND_RESET_Q(38);
    vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__z_out_reg = VL_RAND_RESET_Q(38);
    vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__mult_a = VL_RAND_RESET_I(20);
    vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__mult_b = VL_RAND_RESET_I(18);
    vlSelf->__Vtrigprevexpr___TOP__co_sim_b_registered_input_to_output_new_primitive__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__co_sim_b_registered_input_to_output_new_primitive__DOT__reset__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
