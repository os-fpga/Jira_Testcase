// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vco_sim_GJC8.h for the primary calling header

#include "Vco_sim_GJC8__pch.h"
#include "Vco_sim_GJC8___024root.h"

VL_ATTR_COLD void Vco_sim_GJC8___024root___eval_static__TOP(Vco_sim_GJC8___024root* vlSelf);

VL_ATTR_COLD void Vco_sim_GJC8___024root___eval_static(Vco_sim_GJC8___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC8___024root___eval_static\n"); );
    // Body
    Vco_sim_GJC8___024root___eval_static__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[8U] = 1U;
    vlSelf->__Vm_traceActivity[7U] = 1U;
    vlSelf->__Vm_traceActivity[6U] = 1U;
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vco_sim_GJC8___024root___eval_static__TOP(Vco_sim_GJC8___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC8___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->co_sim_GJC8__DOT__mismatch = 0U;
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__DLY_B = 0U;
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__subtract_reg = 0U;
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__acc_fir_reg = 0U;
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__feedback_reg = 0U;
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__shift_right_reg1 = 0U;
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__shift_right_reg2 = 0U;
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__round_reg1 = 0U;
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__round_reg2 = 0U;
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__saturate_reg1 = 0U;
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__saturate_reg2 = 0U;
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__load_acc_reg = 0U;
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__a_reg = 0U;
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__b_reg = 0U;
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__unsigned_a_reg = 1U;
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__unsigned_b_reg = 1U;
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__subtract_int = 0U;
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__acc_fir_int = 0U;
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__feedback_int = 0U;
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__shift_right_int = 0U;
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__round_int = 0U;
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__saturate_int = 0U;
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__load_acc_int = 0U;
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__a_int = 0U;
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__b_int = 0U;
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__unsigned_a_int = 1U;
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__unsigned_b_int = 1U;
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__accumulator = 0ULL;
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__add_sub_in = 0ULL;
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__mult_out = 0ULL;
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__add_sub_out = 0ULL;
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__pre_shift = 0ULL;
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__shift_right = 0ULL;
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__round = 0ULL;
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__saturate = 0ULL;
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__z_out = 0ULL;
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__z_out_reg = 0ULL;
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__mult_a = 0U;
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__mult_b = 0U;
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__DLY_B = 0U;
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__subtract_reg = 0U;
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__acc_fir_reg = 0U;
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__feedback_reg = 0U;
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__shift_right_reg1 = 0U;
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__shift_right_reg2 = 0U;
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__round_reg1 = 0U;
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__round_reg2 = 0U;
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__saturate_reg1 = 0U;
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__saturate_reg2 = 0U;
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__load_acc_reg = 0U;
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__a_reg = 0U;
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__b_reg = 0U;
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__unsigned_a_reg = 1U;
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__unsigned_b_reg = 1U;
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__subtract_int = 0U;
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__acc_fir_int = 0U;
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__feedback_int = 0U;
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__shift_right_int = 0U;
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__round_int = 0U;
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__saturate_int = 0U;
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__load_acc_int = 0U;
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__a_int = 0U;
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__b_int = 0U;
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__unsigned_a_int = 1U;
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__unsigned_b_int = 1U;
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__accumulator = 0ULL;
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__add_sub_in = 0ULL;
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__mult_out = 0ULL;
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__add_sub_out = 0ULL;
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__pre_shift = 0ULL;
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__shift_right = 0ULL;
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__round = 0ULL;
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__saturate = 0ULL;
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__z_out = 0ULL;
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__z_out_reg = 0ULL;
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__mult_a = 0U;
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__mult_b = 0U;
}

VL_ATTR_COLD void Vco_sim_GJC8___024root___eval_final(Vco_sim_GJC8___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC8___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vco_sim_GJC8___024root___dump_triggers__stl(Vco_sim_GJC8___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vco_sim_GJC8___024root___eval_phase__stl(Vco_sim_GJC8___024root* vlSelf);

VL_ATTR_COLD void Vco_sim_GJC8___024root___eval_settle(Vco_sim_GJC8___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC8___024root___eval_settle\n"); );
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
            Vco_sim_GJC8___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/nfs_scratch/scratch/CompilerValidation/abdul_hameed/13may/Validation/RTL_testcases/GJC-IO-Testcases/GJC8/results_dir/.././sim/co_sim_tb/co_sim_GJC8.v", 2, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vco_sim_GJC8___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vco_sim_GJC8___024root___dump_triggers__stl(Vco_sim_GJC8___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC8___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vco_sim_GJC8___024root___stl_sequent__TOP__0(Vco_sim_GJC8___024root* vlSelf);

VL_ATTR_COLD void Vco_sim_GJC8___024root___eval_stl(Vco_sim_GJC8___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC8___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vco_sim_GJC8___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[8U] = 1U;
        vlSelf->__Vm_traceActivity[7U] = 1U;
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void Vco_sim_GJC8___024root___stl_sequent__TOP__0(Vco_sim_GJC8___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC8___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__load_acc_int 
        = vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__LOAD_ACC;
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__load_acc_int 
        = vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__LOAD_ACC;
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__shift_right_int 
        = vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__SHIFT_RIGHT;
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__round_int 
        = vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__ROUND;
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__saturate_int 
        = vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__SATURATE;
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__shift_right_int 
        = vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__SHIFT_RIGHT;
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__round_int 
        = vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__ROUND;
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__saturate_int 
        = vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__SATURATE;
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__subtract_int 
        = vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__SUBTRACT;
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__subtract_int 
        = vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__SUBTRACT;
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__acc_fir_int 
        = vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__ACC_FIR;
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__acc_fir_int 
        = vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__ACC_FIR;
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__b_int 
        = vlSelf->co_sim_GJC8__DOT__b;
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__b_int 
        = vlSelf->co_sim_GJC8__DOT__b;
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__unsigned_b_int 
        = vlSelf->co_sim_GJC8__DOT__unsigned_b;
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__unsigned_b_int 
        = vlSelf->co_sim_GJC8__DOT__unsigned_b;
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__a_int 
        = vlSelf->co_sim_GJC8__DOT__a;
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__a_int 
        = vlSelf->co_sim_GJC8__DOT__a;
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__unsigned_a_int 
        = vlSelf->co_sim_GJC8__DOT__unsigned_a;
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__unsigned_a_int 
        = vlSelf->co_sim_GJC8__DOT__unsigned_a;
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__feedback_int 
        = vlSelf->co_sim_GJC8__DOT__feedback;
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__feedback_int 
        = vlSelf->co_sim_GJC8__DOT__feedback;
    if ((4U & (IData)(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__feedback_int))) {
        vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__add_sub_in 
            = ((2U & (IData)(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__feedback_int))
                ? ((1U & (IData)(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__feedback_int))
                    ? ((IData)(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__unsigned_a_int)
                        ? ((QData)((IData)(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__a_int)) 
                           << (IData)(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__acc_fir_int))
                        : ((((- (QData)((IData)((1U 
                                                 & (vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__a_int 
                                                    >> 0x13U))))) 
                             << 0x14U) | (QData)((IData)(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__a_int))) 
                           << (IData)(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__acc_fir_int)))
                    : ((IData)(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__unsigned_a_int)
                        ? ((QData)((IData)(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__a_int)) 
                           << (IData)(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__acc_fir_int))
                        : ((((- (QData)((IData)((1U 
                                                 & (vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__a_int 
                                                    >> 0x13U))))) 
                             << 0x14U) | (QData)((IData)(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__a_int))) 
                           << (IData)(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__acc_fir_int))))
                : ((1U & (IData)(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__feedback_int))
                    ? ((IData)(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__unsigned_a_int)
                        ? ((QData)((IData)(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__a_int)) 
                           << (IData)(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__acc_fir_int))
                        : ((((- (QData)((IData)((1U 
                                                 & (vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__a_int 
                                                    >> 0x13U))))) 
                             << 0x14U) | (QData)((IData)(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__a_int))) 
                           << (IData)(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__acc_fir_int)))
                    : ((IData)(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__unsigned_a_int)
                        ? ((QData)((IData)(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__a_int)) 
                           << (IData)(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__acc_fir_int))
                        : ((((- (QData)((IData)((1U 
                                                 & (vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__a_int 
                                                    >> 0x13U))))) 
                             << 0x14U) | (QData)((IData)(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__a_int))) 
                           << (IData)(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__acc_fir_int)))));
        vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__mult_b 
            = vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__b_int;
        vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__mult_a = 0U;
    } else if ((2U & (IData)(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__feedback_int))) {
        if ((1U & (IData)(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__feedback_int))) {
            vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__add_sub_in 
                = ((IData)(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__unsigned_a_int)
                    ? ((QData)((IData)(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__a_int)) 
                       << (IData)(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__acc_fir_int))
                    : ((((- (QData)((IData)((1U & (vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__a_int 
                                                   >> 0x13U))))) 
                         << 0x14U) | (QData)((IData)(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__a_int))) 
                       << (IData)(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__acc_fir_int)));
            vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__mult_b 
                = vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__b_int;
            vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__mult_a 
                = (0xfffffU & (IData)(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__accumulator));
        } else {
            vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__add_sub_in 
                = ((IData)(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__unsigned_a_int)
                    ? ((QData)((IData)(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__a_int)) 
                       << (IData)(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__acc_fir_int))
                    : ((((- (QData)((IData)((1U & (vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__a_int 
                                                   >> 0x13U))))) 
                         << 0x14U) | (QData)((IData)(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__a_int))) 
                       << (IData)(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__acc_fir_int)));
            vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__mult_b = 0U;
            vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__mult_a 
                = (0xfffffU & vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__a_int);
        }
    } else {
        vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__add_sub_in 
            = ((1U & (IData)(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__feedback_int))
                ? 0ULL : vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__accumulator);
        vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__mult_b 
            = vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__b_int;
        vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__mult_a 
            = (0xfffffU & vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__a_int);
    }
    if ((4U & (IData)(vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__feedback_int))) {
        vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__add_sub_in 
            = ((2U & (IData)(vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__feedback_int))
                ? ((1U & (IData)(vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__feedback_int))
                    ? ((IData)(vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__unsigned_a_int)
                        ? ((QData)((IData)(vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__a_int)) 
                           << (IData)(vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__acc_fir_int))
                        : ((((- (QData)((IData)((1U 
                                                 & (vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__a_int 
                                                    >> 0x13U))))) 
                             << 0x14U) | (QData)((IData)(vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__a_int))) 
                           << (IData)(vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__acc_fir_int)))
                    : ((IData)(vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__unsigned_a_int)
                        ? ((QData)((IData)(vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__a_int)) 
                           << (IData)(vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__acc_fir_int))
                        : ((((- (QData)((IData)((1U 
                                                 & (vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__a_int 
                                                    >> 0x13U))))) 
                             << 0x14U) | (QData)((IData)(vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__a_int))) 
                           << (IData)(vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__acc_fir_int))))
                : ((1U & (IData)(vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__feedback_int))
                    ? ((IData)(vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__unsigned_a_int)
                        ? ((QData)((IData)(vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__a_int)) 
                           << (IData)(vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__acc_fir_int))
                        : ((((- (QData)((IData)((1U 
                                                 & (vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__a_int 
                                                    >> 0x13U))))) 
                             << 0x14U) | (QData)((IData)(vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__a_int))) 
                           << (IData)(vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__acc_fir_int)))
                    : ((IData)(vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__unsigned_a_int)
                        ? ((QData)((IData)(vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__a_int)) 
                           << (IData)(vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__acc_fir_int))
                        : ((((- (QData)((IData)((1U 
                                                 & (vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__a_int 
                                                    >> 0x13U))))) 
                             << 0x14U) | (QData)((IData)(vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__a_int))) 
                           << (IData)(vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__acc_fir_int)))));
        vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__mult_b 
            = vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__b_int;
        vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__mult_a = 0U;
    } else if ((2U & (IData)(vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__feedback_int))) {
        if ((1U & (IData)(vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__feedback_int))) {
            vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__add_sub_in 
                = ((IData)(vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__unsigned_a_int)
                    ? ((QData)((IData)(vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__a_int)) 
                       << (IData)(vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__acc_fir_int))
                    : ((((- (QData)((IData)((1U & (vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__a_int 
                                                   >> 0x13U))))) 
                         << 0x14U) | (QData)((IData)(vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__a_int))) 
                       << (IData)(vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__acc_fir_int)));
            vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__mult_b 
                = vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__b_int;
            vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__mult_a 
                = (0xfffffU & (IData)(vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__accumulator));
        } else {
            vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__add_sub_in 
                = ((IData)(vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__unsigned_a_int)
                    ? ((QData)((IData)(vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__a_int)) 
                       << (IData)(vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__acc_fir_int))
                    : ((((- (QData)((IData)((1U & (vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__a_int 
                                                   >> 0x13U))))) 
                         << 0x14U) | (QData)((IData)(vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__a_int))) 
                       << (IData)(vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__acc_fir_int)));
            vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__mult_b = 0U;
            vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__mult_a 
                = (0xfffffU & vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__a_int);
        }
    } else {
        vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__add_sub_in 
            = ((1U & (IData)(vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__feedback_int))
                ? 0ULL : vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__accumulator);
        vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__mult_b 
            = vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__b_int;
        vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__mult_a 
            = (0xfffffU & vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__a_int);
    }
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__mult_out 
        = ((IData)(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__unsigned_a_int)
            ? ((IData)(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__unsigned_b_int)
                ? ((QData)((IData)(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__mult_a)) 
                   * (QData)((IData)(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__mult_b)))
                : VL_MULS_QQQ(64, VL_EXTENDS_QI(64,21, vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__mult_a), 
                              VL_EXTENDS_QI(64,18, vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__mult_b)))
            : ((IData)(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__unsigned_b_int)
                ? VL_MULS_QQQ(64, VL_EXTENDS_QI(64,20, vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__mult_a), 
                              VL_EXTENDS_QI(64,19, vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__mult_b))
                : VL_MULS_QQQ(64, VL_EXTENDS_QI(64,20, vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__mult_a), 
                              VL_EXTENDS_QI(64,18, vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__mult_b))));
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__mult_out 
        = ((IData)(vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__unsigned_a_int)
            ? ((IData)(vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__unsigned_b_int)
                ? ((QData)((IData)(vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__mult_a)) 
                   * (QData)((IData)(vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__mult_b)))
                : VL_MULS_QQQ(64, VL_EXTENDS_QI(64,21, vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__mult_a), 
                              VL_EXTENDS_QI(64,18, vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__mult_b)))
            : ((IData)(vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__unsigned_b_int)
                ? VL_MULS_QQQ(64, VL_EXTENDS_QI(64,20, vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__mult_a), 
                              VL_EXTENDS_QI(64,19, vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__mult_b))
                : VL_MULS_QQQ(64, VL_EXTENDS_QI(64,20, vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__mult_a), 
                              VL_EXTENDS_QI(64,18, vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__mult_b))));
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__z_out 
        = (0x3fffffffffULL & vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__mult_out);
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__add_sub_out 
        = ((IData)(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__subtract_int)
            ? (vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__add_sub_in 
               - vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__mult_out)
            : (vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__add_sub_in 
               + vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__mult_out));
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__z_out 
        = (0x3fffffffffULL & vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__mult_out);
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__add_sub_out 
        = ((IData)(vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__subtract_int)
            ? (vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__add_sub_in 
               - vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__mult_out)
            : (vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__add_sub_in 
               + vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__mult_out));
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__pre_shift 
        = vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__add_sub_out;
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__shift_right 
        = VL_SHIFTRS_QQI(64,64,6, vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__pre_shift, (IData)(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__shift_right_int));
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__round 
        = (((IData)(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__round_int) 
            & (0U < (IData)(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__shift_right_int)))
            ? ((1U & (IData)((vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__pre_shift 
                              >> (0x3fU & ((IData)(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__shift_right_int) 
                                           - (IData)(1U))))))
                ? (1ULL + vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__shift_right)
                : vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__shift_right)
            : vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__shift_right);
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__saturate 
        = (0x3fffffffffULL & ((IData)(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__saturate_int)
                               ? (((IData)(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__unsigned_a_int) 
                                   & (IData)(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__unsigned_b_int))
                                   ? (VL_GTS_IQQ(64, 0ULL, vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__round)
                                       ? 0ULL : ((0x3fffffffffULL 
                                                  < vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__round)
                                                  ? 0x3fffffffffULL
                                                  : vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__round))
                                   : (VL_LTS_IQQ(64, 0x1fffffffffULL, vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__round)
                                       ? 0x1fffffffffULL
                                       : (VL_GTS_IQQ(64, 0xffffffe000000000ULL, vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__round)
                                           ? 0x2000000000ULL
                                           : vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__round)))
                               : vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__round));
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__pre_shift 
        = vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__add_sub_out;
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__shift_right 
        = VL_SHIFTRS_QQI(64,64,6, vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__pre_shift, (IData)(vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__shift_right_int));
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__round 
        = (((IData)(vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__round_int) 
            & (0U < (IData)(vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__shift_right_int)))
            ? ((1U & (IData)((vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__pre_shift 
                              >> (0x3fU & ((IData)(vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__shift_right_int) 
                                           - (IData)(1U))))))
                ? (1ULL + vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__shift_right)
                : vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__shift_right)
            : vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__shift_right);
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__saturate 
        = (0x3fffffffffULL & ((IData)(vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__saturate_int)
                               ? (((IData)(vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__unsigned_a_int) 
                                   & (IData)(vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__unsigned_b_int))
                                   ? (VL_GTS_IQQ(64, 0ULL, vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__round)
                                       ? 0ULL : ((0x3fffffffffULL 
                                                  < vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__round)
                                                  ? 0x3fffffffffULL
                                                  : vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__round))
                                   : (VL_LTS_IQQ(64, 0x1fffffffffULL, vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__round)
                                       ? 0x1fffffffffULL
                                       : (VL_GTS_IQQ(64, 0xffffffe000000000ULL, vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__round)
                                           ? 0x2000000000ULL
                                           : vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__round)))
                               : vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__round));
}

VL_ATTR_COLD void Vco_sim_GJC8___024root___eval_triggers__stl(Vco_sim_GJC8___024root* vlSelf);

VL_ATTR_COLD bool Vco_sim_GJC8___024root___eval_phase__stl(Vco_sim_GJC8___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC8___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vco_sim_GJC8___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vco_sim_GJC8___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vco_sim_GJC8___024root___dump_triggers__act(Vco_sim_GJC8___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC8___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge co_sim_GJC8.golden.dut.CLK or posedge co_sim_GJC8.golden.dut.RESET)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([changed] co_sim_GJC8.golden.dut.ACC_FIR)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge co_sim_GJC8.route_net.$auto$rs_design_edit.cc:1120:execute$520.RS_DSP_MULT_$iopadmap$z[37].genblk1.DSP38_MULT.CLK or posedge co_sim_GJC8.route_net.$auto$rs_design_edit.cc:1120:execute$520.RS_DSP_MULT_$iopadmap$z[37].genblk1.DSP38_MULT.RESET)\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([changed] co_sim_GJC8.route_net.$auto$rs_design_edit.cc:1120:execute$520.RS_DSP_MULT_$iopadmap$z[37].genblk1.DSP38_MULT.ACC_FIR)\n");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vco_sim_GJC8___024root___dump_triggers__nba(Vco_sim_GJC8___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC8___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge co_sim_GJC8.golden.dut.CLK or posedge co_sim_GJC8.golden.dut.RESET)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([changed] co_sim_GJC8.golden.dut.ACC_FIR)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge co_sim_GJC8.route_net.$auto$rs_design_edit.cc:1120:execute$520.RS_DSP_MULT_$iopadmap$z[37].genblk1.DSP38_MULT.CLK or posedge co_sim_GJC8.route_net.$auto$rs_design_edit.cc:1120:execute$520.RS_DSP_MULT_$iopadmap$z[37].genblk1.DSP38_MULT.RESET)\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([changed] co_sim_GJC8.route_net.$auto$rs_design_edit.cc:1120:execute$520.RS_DSP_MULT_$iopadmap$z[37].genblk1.DSP38_MULT.ACC_FIR)\n");
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vco_sim_GJC8___024root___ctor_var_reset(Vco_sim_GJC8___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC8___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->co_sim_GJC8__DOT__a = VL_RAND_RESET_I(20);
    vlSelf->co_sim_GJC8__DOT__feedback = VL_RAND_RESET_I(3);
    vlSelf->co_sim_GJC8__DOT__b = VL_RAND_RESET_I(18);
    vlSelf->co_sim_GJC8__DOT__unsigned_a = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC8__DOT__unsigned_b = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC8__DOT__mismatch = VL_RAND_RESET_I(32);
    vlSelf->co_sim_GJC8__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__ACC_FIR = VL_RAND_RESET_I(6);
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__DLY_B = VL_RAND_RESET_I(18);
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__CLK = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__RESET = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__LOAD_ACC = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__SATURATE = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__SHIFT_RIGHT = VL_RAND_RESET_I(6);
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__ROUND = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__SUBTRACT = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__subtract_reg = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__acc_fir_reg = VL_RAND_RESET_I(6);
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__feedback_reg = VL_RAND_RESET_I(3);
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__shift_right_reg1 = VL_RAND_RESET_I(6);
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__shift_right_reg2 = VL_RAND_RESET_I(6);
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__round_reg1 = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__round_reg2 = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__saturate_reg1 = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__saturate_reg2 = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__load_acc_reg = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__a_reg = VL_RAND_RESET_I(20);
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__b_reg = VL_RAND_RESET_I(18);
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__unsigned_a_reg = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__unsigned_b_reg = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__subtract_int = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__acc_fir_int = VL_RAND_RESET_I(6);
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__feedback_int = VL_RAND_RESET_I(3);
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__shift_right_int = VL_RAND_RESET_I(6);
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__round_int = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__saturate_int = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__load_acc_int = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__a_int = VL_RAND_RESET_I(20);
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__b_int = VL_RAND_RESET_I(18);
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__unsigned_a_int = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__unsigned_b_int = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__accumulator = VL_RAND_RESET_Q(64);
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__add_sub_in = VL_RAND_RESET_Q(64);
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__mult_out = VL_RAND_RESET_Q(64);
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__add_sub_out = VL_RAND_RESET_Q(64);
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__pre_shift = VL_RAND_RESET_Q(64);
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__shift_right = VL_RAND_RESET_Q(64);
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__round = VL_RAND_RESET_Q(64);
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__saturate = VL_RAND_RESET_Q(38);
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__z_out = VL_RAND_RESET_Q(38);
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__z_out_reg = VL_RAND_RESET_Q(38);
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__mult_a = VL_RAND_RESET_I(20);
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__mult_b = VL_RAND_RESET_I(18);
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__ACC_FIR = VL_RAND_RESET_I(6);
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__DLY_B = VL_RAND_RESET_I(18);
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__CLK = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__RESET = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__LOAD_ACC = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__SATURATE = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__SHIFT_RIGHT = VL_RAND_RESET_I(6);
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__ROUND = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__SUBTRACT = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__subtract_reg = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__acc_fir_reg = VL_RAND_RESET_I(6);
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__feedback_reg = VL_RAND_RESET_I(3);
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__shift_right_reg1 = VL_RAND_RESET_I(6);
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__shift_right_reg2 = VL_RAND_RESET_I(6);
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__round_reg1 = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__round_reg2 = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__saturate_reg1 = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__saturate_reg2 = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__load_acc_reg = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__a_reg = VL_RAND_RESET_I(20);
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__b_reg = VL_RAND_RESET_I(18);
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__unsigned_a_reg = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__unsigned_b_reg = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__subtract_int = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__acc_fir_int = VL_RAND_RESET_I(6);
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__feedback_int = VL_RAND_RESET_I(3);
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__shift_right_int = VL_RAND_RESET_I(6);
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__round_int = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__saturate_int = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__load_acc_int = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__a_int = VL_RAND_RESET_I(20);
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__b_int = VL_RAND_RESET_I(18);
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__unsigned_a_int = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__unsigned_b_int = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__accumulator = VL_RAND_RESET_Q(64);
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__add_sub_in = VL_RAND_RESET_Q(64);
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__mult_out = VL_RAND_RESET_Q(64);
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__add_sub_out = VL_RAND_RESET_Q(64);
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__pre_shift = VL_RAND_RESET_Q(64);
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__shift_right = VL_RAND_RESET_Q(64);
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__round = VL_RAND_RESET_Q(64);
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__saturate = VL_RAND_RESET_Q(38);
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__z_out = VL_RAND_RESET_Q(38);
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__z_out_reg = VL_RAND_RESET_Q(38);
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__mult_a = VL_RAND_RESET_I(20);
    vlSelf->co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__mult_b = VL_RAND_RESET_I(18);
    vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC8__DOT__golden__DOT__dut__DOT__CLK__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC8__DOT__golden__DOT__dut__DOT__RESET__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC8__DOT__golden__DOT__dut__DOT__ACC_FIR__0 = VL_RAND_RESET_I(6);
    vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__CLK__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__RESET__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC8__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__DOT__RS_DSP_MULT___024iopadmap__024z__05b37__05d__DOT__genblk1__DOT__DSP38_MULT__DOT__ACC_FIR__0 = VL_RAND_RESET_I(6);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
