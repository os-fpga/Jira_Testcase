// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vco_sim_GJC8.h for the primary calling header

#include "Vco_sim_GJC8__pch.h"
#include "Vco_sim_GJC8___024root.h"

VL_ATTR_COLD void Vco_sim_GJC8___024root___eval_initial__TOP(Vco_sim_GJC8___024root* vlSelf);
VlCoroutine Vco_sim_GJC8___024root___eval_initial__TOP__Vtiming__0(Vco_sim_GJC8___024root* vlSelf);

void Vco_sim_GJC8___024root___eval_initial(Vco_sim_GJC8___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC8___024root___eval_initial\n"); );
    // Body
    Vco_sim_GJC8___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vco_sim_GJC8___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC8__DOT__golden__DOT__dut__DOT__CLK__0 
        = vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__CLK;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC8__DOT__golden__DOT__dut__DOT__RESET__0 
        = vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__RESET;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC8__DOT__golden__DOT__dut__DOT__ACC_FIR__0 
        = vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__ACC_FIR;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__CLK__0 
        = vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__CLK;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__RESET__0 
        = vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__RESET;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__ACC_FIR__0 
        = vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__ACC_FIR;
}

VL_INLINE_OPT VlCoroutine Vco_sim_GJC8___024root___eval_initial__TOP__Vtiming__0(Vco_sim_GJC8___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC8___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->co_sim_GJC8__DOT__a = 0U;
    vlSelf->co_sim_GJC8__DOT__feedback = 0U;
    vlSelf->co_sim_GJC8__DOT__b = 0U;
    vlSelf->co_sim_GJC8__DOT__unsigned_a = 0U;
    vlSelf->co_sim_GJC8__DOT__unsigned_b = 0U;
    co_await vlSelf->__VdlySched.delay(0x989680ULL, 
                                       nullptr, "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/13may/Validation/RTL_testcases/GJC-IO-Testcases/GJC8/results_dir/.././sim/co_sim_tb/co_sim_GJC8.v", 
                                       22);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if ((vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__z_out 
         != vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__z_out)) {
        VL_WRITEF_NX("Data Mismatch: Actual output: %0#, Netlist Output %0#, Time: %0t \n",0,
                     38,vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__z_out,
                     38,vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__z_out,
                     64,VL_TIME_UNITED_Q(1e+06),-9);
        vlSelf->co_sim_GJC8__DOT__mismatch = ((IData)(1U) 
                                              + vlSelf->co_sim_GJC8__DOT__mismatch);
    } else {
        VL_WRITEF_NX("Data Matched: Actual output: %0#, Netlist Output %0#, Time: %0t \n",0,
                     38,vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__z_out,
                     38,vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__z_out,
                     64,VL_TIME_UNITED_Q(1e+06),-9);
    }
    vlSelf->co_sim_GJC8__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x64U, vlSelf->co_sim_GJC8__DOT__unnamedblk1__DOT__i)) {
        vlSelf->co_sim_GJC8__DOT__a = (0xfffffU & VL_RANDOM_I());
        vlSelf->co_sim_GJC8__DOT__feedback = (7U & 
                                              VL_RANDOM_I());
        vlSelf->co_sim_GJC8__DOT__b = (0x3ffffU & VL_RANDOM_I());
        vlSelf->co_sim_GJC8__DOT__unsigned_a = (1U 
                                                & VL_RANDOM_I());
        vlSelf->co_sim_GJC8__DOT__unsigned_b = (1U 
                                                & VL_RANDOM_I());
        co_await vlSelf->__VdlySched.delay(0x989680ULL, 
                                           nullptr, 
                                           "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/13may/Validation/RTL_testcases/GJC-IO-Testcases/GJC8/results_dir/.././sim/co_sim_tb/co_sim_GJC8.v", 
                                           31);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        if ((vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__z_out 
             != vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__z_out)) {
            VL_WRITEF_NX("Data Mismatch: Actual output: %0#, Netlist Output %0#, Time: %0t \n",0,
                         38,vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__z_out,
                         38,vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__z_out,
                         64,VL_TIME_UNITED_Q(1e+06),
                         -9);
            vlSelf->co_sim_GJC8__DOT__mismatch = ((IData)(1U) 
                                                  + vlSelf->co_sim_GJC8__DOT__mismatch);
        } else {
            VL_WRITEF_NX("Data Matched: Actual output: %0#, Netlist Output %0#, Time: %0t \n",0,
                         38,vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__z_out,
                         38,vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__z_out,
                         64,VL_TIME_UNITED_Q(1e+06),
                         -9);
        }
        vlSelf->co_sim_GJC8__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelf->co_sim_GJC8__DOT__unnamedblk1__DOT__i);
    }
    vlSelf->co_sim_GJC8__DOT__a = 0xfffffU;
    vlSelf->co_sim_GJC8__DOT__feedback = 7U;
    vlSelf->co_sim_GJC8__DOT__b = 0x3ffffU;
    vlSelf->co_sim_GJC8__DOT__unsigned_a = 1U;
    vlSelf->co_sim_GJC8__DOT__unsigned_b = 1U;
    if ((vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__z_out 
         != vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__z_out)) {
        VL_WRITEF_NX("Data Mismatch: Actual output: %0#, Netlist Output %0#, Time: %0t \n",0,
                     38,vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__z_out,
                     38,vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__z_out,
                     64,VL_TIME_UNITED_Q(1e+06),-9);
        vlSelf->co_sim_GJC8__DOT__mismatch = ((IData)(1U) 
                                              + vlSelf->co_sim_GJC8__DOT__mismatch);
    } else {
        VL_WRITEF_NX("Data Matched: Actual output: %0#, Netlist Output %0#, Time: %0t \n",0,
                     38,vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__z_out,
                     38,vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__z_out,
                     64,VL_TIME_UNITED_Q(1e+06),-9);
    }
    co_await vlSelf->__VdlySched.delay(0x989680ULL, 
                                       nullptr, "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/13may/Validation/RTL_testcases/GJC-IO-Testcases/GJC8/results_dir/.././sim/co_sim_tb/co_sim_GJC8.v", 
                                       42);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if ((0U == vlSelf->co_sim_GJC8__DOT__mismatch)) {
        VL_WRITEF_NX("**** All Comparison Matched *** \n\t\tSimulation Passed\n\n",0);
    } else {
        VL_WRITEF_NX("%0d comparison(s) mismatched\nERROR: SIM: Simulation Failed\n",0,
                     32,vlSelf->co_sim_GJC8__DOT__mismatch);
    }
    co_await vlSelf->__VdlySched.delay(0xbebc200ULL, 
                                       nullptr, "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/13may/Validation/RTL_testcases/GJC-IO-Testcases/GJC8/results_dir/.././sim/co_sim_tb/co_sim_GJC8.v", 
                                       47);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("/nfs_scratch/scratch/CompilerValidation/abdul_hameed/13may/Validation/RTL_testcases/GJC-IO-Testcases/GJC8/results_dir/.././sim/co_sim_tb/co_sim_GJC8.v", 48, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

void Vco_sim_GJC8___024root___act_sequent__TOP__0(Vco_sim_GJC8___024root* vlSelf);

void Vco_sim_GJC8___024root___eval_act(Vco_sim_GJC8___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC8___024root___eval_act\n"); );
    // Body
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        Vco_sim_GJC8___024root___act_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
}

VL_INLINE_OPT void Vco_sim_GJC8___024root___act_sequent__TOP__0(Vco_sim_GJC8___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC8___024root___act_sequent__TOP__0\n"); );
    // Body
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__b_int 
        = vlSelf->co_sim_GJC8__DOT__b;
    vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__b_int 
        = vlSelf->co_sim_GJC8__DOT__b;
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__unsigned_b_int 
        = vlSelf->co_sim_GJC8__DOT__unsigned_b;
    vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__unsigned_b_int 
        = vlSelf->co_sim_GJC8__DOT__unsigned_b;
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__a_int 
        = vlSelf->co_sim_GJC8__DOT__a;
    vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__a_int 
        = vlSelf->co_sim_GJC8__DOT__a;
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__unsigned_a_int 
        = vlSelf->co_sim_GJC8__DOT__unsigned_a;
    vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__unsigned_a_int 
        = vlSelf->co_sim_GJC8__DOT__unsigned_a;
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__feedback_int 
        = vlSelf->co_sim_GJC8__DOT__feedback;
    vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__feedback_int 
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
    if ((4U & (IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__feedback_int))) {
        vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__add_sub_in 
            = ((2U & (IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__feedback_int))
                ? ((1U & (IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__feedback_int))
                    ? ((IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__unsigned_a_int)
                        ? ((QData)((IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__a_int)) 
                           << (IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__acc_fir_int))
                        : ((((- (QData)((IData)((1U 
                                                 & (vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__a_int 
                                                    >> 0x13U))))) 
                             << 0x14U) | (QData)((IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__a_int))) 
                           << (IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__acc_fir_int)))
                    : ((IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__unsigned_a_int)
                        ? ((QData)((IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__a_int)) 
                           << (IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__acc_fir_int))
                        : ((((- (QData)((IData)((1U 
                                                 & (vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__a_int 
                                                    >> 0x13U))))) 
                             << 0x14U) | (QData)((IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__a_int))) 
                           << (IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__acc_fir_int))))
                : ((1U & (IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__feedback_int))
                    ? ((IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__unsigned_a_int)
                        ? ((QData)((IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__a_int)) 
                           << (IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__acc_fir_int))
                        : ((((- (QData)((IData)((1U 
                                                 & (vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__a_int 
                                                    >> 0x13U))))) 
                             << 0x14U) | (QData)((IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__a_int))) 
                           << (IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__acc_fir_int)))
                    : ((IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__unsigned_a_int)
                        ? ((QData)((IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__a_int)) 
                           << (IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__acc_fir_int))
                        : ((((- (QData)((IData)((1U 
                                                 & (vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__a_int 
                                                    >> 0x13U))))) 
                             << 0x14U) | (QData)((IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__a_int))) 
                           << (IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__acc_fir_int)))));
        vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__mult_b 
            = vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__b_int;
        vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__mult_a = 0U;
    } else if ((2U & (IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__feedback_int))) {
        if ((1U & (IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__feedback_int))) {
            vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__add_sub_in 
                = ((IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__unsigned_a_int)
                    ? ((QData)((IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__a_int)) 
                       << (IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__acc_fir_int))
                    : ((((- (QData)((IData)((1U & (vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__a_int 
                                                   >> 0x13U))))) 
                         << 0x14U) | (QData)((IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__a_int))) 
                       << (IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__acc_fir_int)));
            vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__mult_b 
                = vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__b_int;
            vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__mult_a 
                = (0xfffffU & (IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__accumulator));
        } else {
            vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__add_sub_in 
                = ((IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__unsigned_a_int)
                    ? ((QData)((IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__a_int)) 
                       << (IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__acc_fir_int))
                    : ((((- (QData)((IData)((1U & (vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__a_int 
                                                   >> 0x13U))))) 
                         << 0x14U) | (QData)((IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__a_int))) 
                       << (IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__acc_fir_int)));
            vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__mult_b = 0U;
            vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__mult_a 
                = (0xfffffU & vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__a_int);
        }
    } else {
        vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__add_sub_in 
            = ((1U & (IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__feedback_int))
                ? 0ULL : vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__accumulator);
        vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__mult_b 
            = vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__b_int;
        vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__mult_a 
            = (0xfffffU & vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__a_int);
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
    vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__mult_out 
        = ((IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__unsigned_a_int)
            ? ((IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__unsigned_b_int)
                ? ((QData)((IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__mult_a)) 
                   * (QData)((IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__mult_b)))
                : VL_MULS_QQQ(64, VL_EXTENDS_QI(64,21, vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__mult_a), 
                              VL_EXTENDS_QI(64,18, vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__mult_b)))
            : ((IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__unsigned_b_int)
                ? VL_MULS_QQQ(64, VL_EXTENDS_QI(64,20, vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__mult_a), 
                              VL_EXTENDS_QI(64,19, vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__mult_b))
                : VL_MULS_QQQ(64, VL_EXTENDS_QI(64,20, vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__mult_a), 
                              VL_EXTENDS_QI(64,18, vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__mult_b))));
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__z_out 
        = (0x3fffffffffULL & vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__mult_out);
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__add_sub_out 
        = ((IData)(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__subtract_int)
            ? (vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__add_sub_in 
               - vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__mult_out)
            : (vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__add_sub_in 
               + vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__mult_out));
    vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__z_out 
        = (0x3fffffffffULL & vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__mult_out);
    vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__add_sub_out 
        = ((IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__subtract_int)
            ? (vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__add_sub_in 
               - vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__mult_out)
            : (vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__add_sub_in 
               + vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__mult_out));
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
    vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__pre_shift 
        = vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__add_sub_out;
    vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__shift_right 
        = VL_SHIFTRS_QQI(64,64,6, vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__pre_shift, (IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__shift_right_int));
    vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__round 
        = (((IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__round_int) 
            & (0U < (IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__shift_right_int)))
            ? ((1U & (IData)((vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__pre_shift 
                              >> (0x3fU & ((IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__shift_right_int) 
                                           - (IData)(1U))))))
                ? (1ULL + vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__shift_right)
                : vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__shift_right)
            : vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__shift_right);
    vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__saturate 
        = (0x3fffffffffULL & ((IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__saturate_int)
                               ? (((IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__unsigned_a_int) 
                                   & (IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__unsigned_b_int))
                                   ? (VL_GTS_IQQ(64, 0ULL, vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__round)
                                       ? 0ULL : ((0x3fffffffffULL 
                                                  < vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__round)
                                                  ? 0x3fffffffffULL
                                                  : vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__round))
                                   : (VL_LTS_IQQ(64, 0x1fffffffffULL, vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__round)
                                       ? 0x1fffffffffULL
                                       : (VL_GTS_IQQ(64, 0xffffffe000000000ULL, vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__round)
                                           ? 0x2000000000ULL
                                           : vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__round)))
                               : vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__round));
}

void Vco_sim_GJC8___024root___nba_sequent__TOP__0(Vco_sim_GJC8___024root* vlSelf);
void Vco_sim_GJC8___024root___nba_sequent__TOP__1(Vco_sim_GJC8___024root* vlSelf);
void Vco_sim_GJC8___024root___nba_sequent__TOP__2(Vco_sim_GJC8___024root* vlSelf);
void Vco_sim_GJC8___024root___nba_sequent__TOP__3(Vco_sim_GJC8___024root* vlSelf);
void Vco_sim_GJC8___024root___nba_sequent__TOP__4(Vco_sim_GJC8___024root* vlSelf);
void Vco_sim_GJC8___024root___nba_comb__TOP__0(Vco_sim_GJC8___024root* vlSelf);
void Vco_sim_GJC8___024root___nba_comb__TOP__1(Vco_sim_GJC8___024root* vlSelf);

void Vco_sim_GJC8___024root___eval_nba(Vco_sim_GJC8___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC8___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_GJC8___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_GJC8___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_GJC8___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_GJC8___024root___nba_sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_GJC8___024root___nba_sequent__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
    if ((0x11ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_GJC8___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[7U] = 1U;
    }
    if ((0x14ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_GJC8___024root___nba_comb__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[8U] = 1U;
    }
}

VL_INLINE_OPT void Vco_sim_GJC8___024root___nba_sequent__TOP__2(Vco_sim_GJC8___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC8___024root___nba_sequent__TOP__2\n"); );
    // Body
    if (vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__RESET) {
        vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__accumulator = 0ULL;
        vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__acc_fir_reg = 0U;
        vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__feedback_reg = 0U;
        vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__a_reg = 0U;
        vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__z_out_reg = 0ULL;
        vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__DLY_B = 0U;
        vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__b_reg = 0U;
        vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__shift_right_reg2 = 0U;
        vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__shift_right_reg1 = 0U;
    } else {
        vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__accumulator 
            = ((IData)(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__load_acc_int)
                ? vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__add_sub_out
                : vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__accumulator);
        vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__acc_fir_reg 
            = vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__ACC_FIR;
        vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__feedback_reg 
            = vlSelf->co_sim_GJC8__DOT__feedback;
        vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__a_reg 
            = vlSelf->co_sim_GJC8__DOT__a;
        vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__z_out_reg 
            = vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__z_out;
        vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__DLY_B 
            = vlSelf->co_sim_GJC8__DOT__b;
        vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__b_reg 
            = vlSelf->co_sim_GJC8__DOT__b;
        vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__shift_right_reg2 
            = vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__shift_right_reg1;
        vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__shift_right_reg1 
            = vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__SHIFT_RIGHT;
    }
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__subtract_reg 
        = ((1U & (~ (IData)(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__RESET))) 
           && (IData)(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__SUBTRACT));
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__load_acc_reg 
        = ((1U & (~ (IData)(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__RESET))) 
           && (IData)(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__LOAD_ACC));
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__unsigned_a_reg 
        = ((IData)(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__RESET) 
           || (IData)(vlSelf->co_sim_GJC8__DOT__unsigned_a));
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__unsigned_b_reg 
        = ((IData)(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__RESET) 
           || (IData)(vlSelf->co_sim_GJC8__DOT__unsigned_b));
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__round_reg2 
        = ((1U & (~ (IData)(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__RESET))) 
           && (IData)(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__round_reg1));
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__saturate_reg2 
        = ((1U & (~ (IData)(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__RESET))) 
           && (IData)(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__saturate_reg1));
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__round_reg1 
        = ((1U & (~ (IData)(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__RESET))) 
           && (IData)(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__ROUND));
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__saturate_reg1 
        = ((1U & (~ (IData)(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__RESET))) 
           && (IData)(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__SATURATE));
}

VL_INLINE_OPT void Vco_sim_GJC8___024root___nba_sequent__TOP__3(Vco_sim_GJC8___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC8___024root___nba_sequent__TOP__3\n"); );
    // Body
    if (vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__RESET) {
        vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__accumulator = 0ULL;
        vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__acc_fir_reg = 0U;
        vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__feedback_reg = 0U;
        vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__a_reg = 0U;
        vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__z_out_reg = 0ULL;
        vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__DLY_B = 0U;
        vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__b_reg = 0U;
        vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__shift_right_reg2 = 0U;
        vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__shift_right_reg1 = 0U;
    } else {
        vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__accumulator 
            = ((IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__load_acc_int)
                ? vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__add_sub_out
                : vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__accumulator);
        vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__acc_fir_reg 
            = vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__ACC_FIR;
        vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__feedback_reg 
            = vlSelf->co_sim_GJC8__DOT__feedback;
        vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__a_reg 
            = vlSelf->co_sim_GJC8__DOT__a;
        vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__z_out_reg 
            = vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__z_out;
        vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__DLY_B 
            = vlSelf->co_sim_GJC8__DOT__b;
        vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__b_reg 
            = vlSelf->co_sim_GJC8__DOT__b;
        vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__shift_right_reg2 
            = vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__shift_right_reg1;
        vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__shift_right_reg1 
            = vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__SHIFT_RIGHT;
    }
    vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__subtract_reg 
        = ((1U & (~ (IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__RESET))) 
           && (IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__SUBTRACT));
    vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__load_acc_reg 
        = ((1U & (~ (IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__RESET))) 
           && (IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__LOAD_ACC));
    vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__unsigned_a_reg 
        = ((IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__RESET) 
           || (IData)(vlSelf->co_sim_GJC8__DOT__unsigned_a));
    vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__unsigned_b_reg 
        = ((IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__RESET) 
           || (IData)(vlSelf->co_sim_GJC8__DOT__unsigned_b));
    vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__round_reg2 
        = ((1U & (~ (IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__RESET))) 
           && (IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__round_reg1));
    vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__saturate_reg2 
        = ((1U & (~ (IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__RESET))) 
           && (IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__saturate_reg1));
    vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__round_reg1 
        = ((1U & (~ (IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__RESET))) 
           && (IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__ROUND));
    vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__saturate_reg1 
        = ((1U & (~ (IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__RESET))) 
           && (IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__SATURATE));
}

VL_INLINE_OPT void Vco_sim_GJC8___024root___nba_sequent__TOP__4(Vco_sim_GJC8___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC8___024root___nba_sequent__TOP__4\n"); );
    // Body
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__b_int 
        = vlSelf->co_sim_GJC8__DOT__b;
    vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__b_int 
        = vlSelf->co_sim_GJC8__DOT__b;
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__unsigned_b_int 
        = vlSelf->co_sim_GJC8__DOT__unsigned_b;
    vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__unsigned_b_int 
        = vlSelf->co_sim_GJC8__DOT__unsigned_b;
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__a_int 
        = vlSelf->co_sim_GJC8__DOT__a;
    vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__a_int 
        = vlSelf->co_sim_GJC8__DOT__a;
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__unsigned_a_int 
        = vlSelf->co_sim_GJC8__DOT__unsigned_a;
    vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__unsigned_a_int 
        = vlSelf->co_sim_GJC8__DOT__unsigned_a;
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__feedback_int 
        = vlSelf->co_sim_GJC8__DOT__feedback;
    vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__feedback_int 
        = vlSelf->co_sim_GJC8__DOT__feedback;
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__mult_b 
        = ((4U & (IData)(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__feedback_int))
            ? vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__b_int
            : ((2U & (IData)(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__feedback_int))
                ? ((1U & (IData)(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__feedback_int))
                    ? vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__b_int
                    : 0U) : vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__b_int));
    vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__mult_b 
        = ((4U & (IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__feedback_int))
            ? vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__b_int
            : ((2U & (IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__feedback_int))
                ? ((1U & (IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__feedback_int))
                    ? vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__b_int
                    : 0U) : vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__b_int));
}

VL_INLINE_OPT void Vco_sim_GJC8___024root___nba_comb__TOP__0(Vco_sim_GJC8___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC8___024root___nba_comb__TOP__0\n"); );
    // Body
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
            vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__mult_a 
                = (0xfffffU & vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__a_int);
        }
    } else {
        vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__add_sub_in 
            = ((1U & (IData)(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__feedback_int))
                ? 0ULL : vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__accumulator);
        vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__mult_a 
            = (0xfffffU & vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__a_int);
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
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__z_out 
        = (0x3fffffffffULL & vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__mult_out);
    vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__add_sub_out 
        = ((IData)(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__subtract_int)
            ? (vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__add_sub_in 
               - vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__mult_out)
            : (vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__add_sub_in 
               + vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__mult_out));
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
}

VL_INLINE_OPT void Vco_sim_GJC8___024root___nba_comb__TOP__1(Vco_sim_GJC8___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC8___024root___nba_comb__TOP__1\n"); );
    // Body
    if ((4U & (IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__feedback_int))) {
        vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__add_sub_in 
            = ((2U & (IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__feedback_int))
                ? ((1U & (IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__feedback_int))
                    ? ((IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__unsigned_a_int)
                        ? ((QData)((IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__a_int)) 
                           << (IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__acc_fir_int))
                        : ((((- (QData)((IData)((1U 
                                                 & (vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__a_int 
                                                    >> 0x13U))))) 
                             << 0x14U) | (QData)((IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__a_int))) 
                           << (IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__acc_fir_int)))
                    : ((IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__unsigned_a_int)
                        ? ((QData)((IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__a_int)) 
                           << (IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__acc_fir_int))
                        : ((((- (QData)((IData)((1U 
                                                 & (vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__a_int 
                                                    >> 0x13U))))) 
                             << 0x14U) | (QData)((IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__a_int))) 
                           << (IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__acc_fir_int))))
                : ((1U & (IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__feedback_int))
                    ? ((IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__unsigned_a_int)
                        ? ((QData)((IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__a_int)) 
                           << (IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__acc_fir_int))
                        : ((((- (QData)((IData)((1U 
                                                 & (vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__a_int 
                                                    >> 0x13U))))) 
                             << 0x14U) | (QData)((IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__a_int))) 
                           << (IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__acc_fir_int)))
                    : ((IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__unsigned_a_int)
                        ? ((QData)((IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__a_int)) 
                           << (IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__acc_fir_int))
                        : ((((- (QData)((IData)((1U 
                                                 & (vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__a_int 
                                                    >> 0x13U))))) 
                             << 0x14U) | (QData)((IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__a_int))) 
                           << (IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__acc_fir_int)))));
        vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__mult_a = 0U;
    } else if ((2U & (IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__feedback_int))) {
        if ((1U & (IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__feedback_int))) {
            vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__add_sub_in 
                = ((IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__unsigned_a_int)
                    ? ((QData)((IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__a_int)) 
                       << (IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__acc_fir_int))
                    : ((((- (QData)((IData)((1U & (vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__a_int 
                                                   >> 0x13U))))) 
                         << 0x14U) | (QData)((IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__a_int))) 
                       << (IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__acc_fir_int)));
            vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__mult_a 
                = (0xfffffU & (IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__accumulator));
        } else {
            vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__add_sub_in 
                = ((IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__unsigned_a_int)
                    ? ((QData)((IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__a_int)) 
                       << (IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__acc_fir_int))
                    : ((((- (QData)((IData)((1U & (vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__a_int 
                                                   >> 0x13U))))) 
                         << 0x14U) | (QData)((IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__a_int))) 
                       << (IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__acc_fir_int)));
            vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__mult_a 
                = (0xfffffU & vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__a_int);
        }
    } else {
        vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__add_sub_in 
            = ((1U & (IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__feedback_int))
                ? 0ULL : vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__accumulator);
        vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__mult_a 
            = (0xfffffU & vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__a_int);
    }
    vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__mult_out 
        = ((IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__unsigned_a_int)
            ? ((IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__unsigned_b_int)
                ? ((QData)((IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__mult_a)) 
                   * (QData)((IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__mult_b)))
                : VL_MULS_QQQ(64, VL_EXTENDS_QI(64,21, vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__mult_a), 
                              VL_EXTENDS_QI(64,18, vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__mult_b)))
            : ((IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__unsigned_b_int)
                ? VL_MULS_QQQ(64, VL_EXTENDS_QI(64,20, vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__mult_a), 
                              VL_EXTENDS_QI(64,19, vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__mult_b))
                : VL_MULS_QQQ(64, VL_EXTENDS_QI(64,20, vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__mult_a), 
                              VL_EXTENDS_QI(64,18, vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__mult_b))));
    vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__z_out 
        = (0x3fffffffffULL & vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__mult_out);
    vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__add_sub_out 
        = ((IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__subtract_int)
            ? (vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__add_sub_in 
               - vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__mult_out)
            : (vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__add_sub_in 
               + vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__mult_out));
    vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__pre_shift 
        = vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__add_sub_out;
    vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__shift_right 
        = VL_SHIFTRS_QQI(64,64,6, vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__pre_shift, (IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__shift_right_int));
    vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__round 
        = (((IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__round_int) 
            & (0U < (IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__shift_right_int)))
            ? ((1U & (IData)((vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__pre_shift 
                              >> (0x3fU & ((IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__shift_right_int) 
                                           - (IData)(1U))))))
                ? (1ULL + vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__shift_right)
                : vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__shift_right)
            : vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__shift_right);
    vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__saturate 
        = (0x3fffffffffULL & ((IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__saturate_int)
                               ? (((IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__unsigned_a_int) 
                                   & (IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__unsigned_b_int))
                                   ? (VL_GTS_IQQ(64, 0ULL, vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__round)
                                       ? 0ULL : ((0x3fffffffffULL 
                                                  < vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__round)
                                                  ? 0x3fffffffffULL
                                                  : vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__round))
                                   : (VL_LTS_IQQ(64, 0x1fffffffffULL, vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__round)
                                       ? 0x1fffffffffULL
                                       : (VL_GTS_IQQ(64, 0xffffffe000000000ULL, vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__round)
                                           ? 0x2000000000ULL
                                           : vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__round)))
                               : vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__round));
}

void Vco_sim_GJC8___024root___timing_resume(Vco_sim_GJC8___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC8___024root___timing_resume\n"); );
    // Body
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vco_sim_GJC8___024root___eval_triggers__act(Vco_sim_GJC8___024root* vlSelf);

bool Vco_sim_GJC8___024root___eval_phase__act(Vco_sim_GJC8___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC8___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<5> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vco_sim_GJC8___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vco_sim_GJC8___024root___timing_resume(vlSelf);
        Vco_sim_GJC8___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vco_sim_GJC8___024root___eval_phase__nba(Vco_sim_GJC8___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC8___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vco_sim_GJC8___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vco_sim_GJC8___024root___dump_triggers__nba(Vco_sim_GJC8___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vco_sim_GJC8___024root___dump_triggers__act(Vco_sim_GJC8___024root* vlSelf);
#endif  // VL_DEBUG

void Vco_sim_GJC8___024root___eval(Vco_sim_GJC8___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC8___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vco_sim_GJC8___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/nfs_scratch/scratch/CompilerValidation/abdul_hameed/13may/Validation/RTL_testcases/GJC-IO-Testcases/GJC8/results_dir/.././sim/co_sim_tb/co_sim_GJC8.v", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vco_sim_GJC8___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/nfs_scratch/scratch/CompilerValidation/abdul_hameed/13may/Validation/RTL_testcases/GJC-IO-Testcases/GJC8/results_dir/.././sim/co_sim_tb/co_sim_GJC8.v", 2, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vco_sim_GJC8___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vco_sim_GJC8___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vco_sim_GJC8___024root___eval_debug_assertions(Vco_sim_GJC8___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC8___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
