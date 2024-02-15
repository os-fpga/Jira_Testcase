// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2.h for the primary calling header

#include "verilated.h"

#include "Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__Syms.h"
#include "Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2___024root.h"

VL_ATTR_COLD void Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2___024root___eval_initial__TOP(Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2___024root* vlSelf);
VlCoroutine Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2___024root___eval_initial__TOP__0(Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2___024root* vlSelf);
VlCoroutine Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2___024root___eval_initial__TOP__1(Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2___024root* vlSelf);

void Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2___024root___eval_initial(Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2___024root___eval_initial\n"); );
    // Body
    Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2___024root___eval_initial__TOP__0(vlSelf);
    Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2___024root___eval_initial__TOP__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__clk__0 
        = vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__reset__0 
        = vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__reset;
}

VL_INLINE_OPT VlCoroutine Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2___024root___eval_initial__TOP__0(Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2___024root___eval_initial__TOP__0\n"); );
    // Body
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__clk = 0U;
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Jira_Testcase/EDA-2500/accum_20lsb_input_to_mulltiplier_dsp19x2/results_dir/.././sim/co_sim_tb/co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2.v", 
                                           99);
        vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__clk 
            = (1U & (~ (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__clk)));
    }
}

VL_INLINE_OPT VlCoroutine Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2___024root___eval_initial__TOP__1(Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2___024root___eval_initial__TOP__1\n"); );
    // Body
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__reset = 1U;
    co_await vlSelf->__VtrigSched_h697651cc__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2.clk)", 
                                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Jira_Testcase/EDA-2500/accum_20lsb_input_to_mulltiplier_dsp19x2/results_dir/.././sim/co_sim_tb/co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2.v", 
                                                       103);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__reset = 0U;
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__a = 0U;
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__b = 0U;
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_out = 0ULL;
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__expected_out = 0ULL;
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mult = 0ULL;
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_in = 0ULL;
    VL_WRITEF("\n\n***Reset Test is applied***\n\n\n");
    co_await vlSelf->__VtrigSched_h697651cc__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2.clk)", 
                                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Jira_Testcase/EDA-2500/accum_20lsb_input_to_mulltiplier_dsp19x2/results_dir/.././sim/co_sim_tb/co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2.v", 
                                                       107);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h697651cc__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2.clk)", 
                                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Jira_Testcase/EDA-2500/accum_20lsb_input_to_mulltiplier_dsp19x2/results_dir/.././sim/co_sim_tb/co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2.v", 
                                                       108);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF("%20#  Test stimulus is: a=%0#, b=%0#\n",
              64,VL_TIME_UNITED_Q(1000),20,vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__a,
              18,vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__b);
    co_await vlSelf->__VdlySched.delay(0x7d0ULL, nullptr, 
                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Jira_Testcase/EDA-2500/accum_20lsb_input_to_mulltiplier_dsp19x2/results_dir/.././sim/co_sim_tb/co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2.v", 
                                       110);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((((QData)((IData)((0x7ffffU & (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out)))) 
           << 0x13U) | (QData)((IData)((0x7ffffU & (IData)(
                                                           (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out 
                                                            >> 0x13U)))))) 
         != vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__expected_out)) {
        VL_WRITEF("Data Mismatch, Netlist: %0#, Expected output: %0#, Time: %0t\n",
                  38,(((QData)((IData)((0x7ffffU & (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out)))) 
                       << 0x13U) | (QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(
                                                              (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out 
                                                               >> 0x13U)))))),
                  38,vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__expected_out,
                  64,VL_TIME_UNITED_Q(1000),-9);
        vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mismatch 
            = ((IData)(1U) + vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mismatch);
    } else {
        VL_WRITEF("Data Matched: Netlist: %0#,  Expected output: %0#, Time: %0t\n",
                  38,(((QData)((IData)((0x7ffffU & (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out)))) 
                       << 0x13U) | (QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(
                                                              (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out 
                                                               >> 0x13U)))))),
                  38,vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__expected_out,
                  64,VL_TIME_UNITED_Q(1000),-9);
    }
    VL_WRITEF("\n\n***Reset Test is ended***\n\n\n");
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__reset = 0U;
    co_await vlSelf->__VtrigSched_h697651cc__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2.clk)", 
                                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Jira_Testcase/EDA-2500/accum_20lsb_input_to_mulltiplier_dsp19x2/results_dir/.././sim/co_sim_tb/co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2.v", 
                                                       115);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF("\n\n***Directed Functionality Test is applied***\n\n\n");
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__a = 7U;
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__b = 3U;
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mult 
        = ((0xffffffff00000000ULL & vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mult) 
           | (IData)((IData)(((0x3ffU & (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_out)) 
                              * (0x1ffU & vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__b)))));
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mult 
        = ((0xffffffffULL & vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mult) 
           | ((QData)((IData)(((0x1ffU & (IData)((vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_out 
                                                  >> 0x20U))) 
                               * (0x1ffU & (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__b 
                                            >> 9U))))) 
              << 0x20U));
    co_await vlSelf->__VtrigSched_h6976570b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2.clk)", 
                                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Jira_Testcase/EDA-2500/accum_20lsb_input_to_mulltiplier_dsp19x2/results_dir/.././sim/co_sim_tb/co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2.v", 
                                                       122);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_in 
        = (((QData)((IData)((0xffcU & (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__a 
                                       >> 8U)))) << 0x20U) 
           | (QData)((IData)((0xffcU & (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__a 
                                        << 2U)))));
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_out 
        = (((QData)((IData)(((IData)((vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_in 
                                      >> 0x20U)) - (IData)(
                                                           (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mult 
                                                            >> 0x20U))))) 
            << 0x20U) | (QData)((IData)(((IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_in) 
                                         - (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mult)))));
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__expected_out 
        = (((QData)((IData)((0x7ffffU & (IData)((vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_out 
                                                 >> 0x20U))))) 
            << 0x13U) | (QData)((IData)((0x7ffffU & (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_out)))));
    VL_WRITEF("%20#  Test stimulus is: a=%0#, b=%0#\n",
              64,VL_TIME_UNITED_Q(1000),20,vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__a,
              18,vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__b);
    co_await vlSelf->__VdlySched.delay(0xbb8ULL, nullptr, 
                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Jira_Testcase/EDA-2500/accum_20lsb_input_to_mulltiplier_dsp19x2/results_dir/.././sim/co_sim_tb/co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2.v", 
                                       127);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((((QData)((IData)((0x7ffffU & (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out)))) 
           << 0x13U) | (QData)((IData)((0x7ffffU & (IData)(
                                                           (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out 
                                                            >> 0x13U)))))) 
         != vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__expected_out)) {
        VL_WRITEF("Data Mismatch, Netlist: %0#, Expected output: %0#, Time: %0t\n",
                  38,(((QData)((IData)((0x7ffffU & (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out)))) 
                       << 0x13U) | (QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(
                                                              (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out 
                                                               >> 0x13U)))))),
                  38,vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__expected_out,
                  64,VL_TIME_UNITED_Q(1000),-9);
        vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mismatch 
            = ((IData)(1U) + vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mismatch);
    } else {
        VL_WRITEF("Data Matched: Netlist: %0#,  Expected output: %0#, Time: %0t\n",
                  38,(((QData)((IData)((0x7ffffU & (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out)))) 
                       << 0x13U) | (QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(
                                                              (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out 
                                                               >> 0x13U)))))),
                  38,vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__expected_out,
                  64,VL_TIME_UNITED_Q(1000),-9);
    }
    co_await vlSelf->__VtrigSched_h697651cc__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2.clk)", 
                                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Jira_Testcase/EDA-2500/accum_20lsb_input_to_mulltiplier_dsp19x2/results_dir/.././sim/co_sim_tb/co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2.v", 
                                                       129);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF("\n\n***Directed Functionality Test is ended***\n\n\n\n\n***Directed Functionality Test is applied***\n\n\n");
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__a = 0x7ffffU;
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__b = 0x1ffffU;
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mult 
        = ((0xffffffff00000000ULL & vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mult) 
           | (IData)((IData)(((0x3ffU & (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_out)) 
                              * (0x1ffU & vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__b)))));
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mult 
        = ((0xffffffffULL & vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mult) 
           | ((QData)((IData)(((0x3ffU & (IData)((vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_out 
                                                  >> 0x20U))) 
                               * (0x1ffU & (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__b 
                                            >> 9U))))) 
              << 0x20U));
    co_await vlSelf->__VtrigSched_h6976570b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2.clk)", 
                                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Jira_Testcase/EDA-2500/accum_20lsb_input_to_mulltiplier_dsp19x2/results_dir/.././sim/co_sim_tb/co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2.v", 
                                                       137);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_in 
        = (((QData)((IData)((0xffcU & (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__a 
                                       >> 8U)))) << 0x20U) 
           | (QData)((IData)((0xffcU & (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__a 
                                        << 2U)))));
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_out 
        = (((QData)((IData)(((IData)((vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_in 
                                      >> 0x20U)) - (IData)(
                                                           (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mult 
                                                            >> 0x20U))))) 
            << 0x20U) | (QData)((IData)(((IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_in) 
                                         - (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mult)))));
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__expected_out 
        = (((QData)((IData)((0x7ffffU & (IData)((vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_out 
                                                 >> 0x20U))))) 
            << 0x13U) | (QData)((IData)((0x7ffffU & (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_out)))));
    VL_WRITEF("%20#  Test stimulus is: a=%0#, b=%0#\n",
              64,VL_TIME_UNITED_Q(1000),20,vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__a,
              18,vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__b);
    co_await vlSelf->__VdlySched.delay(0xbb8ULL, nullptr, 
                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Jira_Testcase/EDA-2500/accum_20lsb_input_to_mulltiplier_dsp19x2/results_dir/.././sim/co_sim_tb/co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2.v", 
                                       142);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((((QData)((IData)((0x7ffffU & (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out)))) 
           << 0x13U) | (QData)((IData)((0x7ffffU & (IData)(
                                                           (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out 
                                                            >> 0x13U)))))) 
         != vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__expected_out)) {
        VL_WRITEF("Data Mismatch, Netlist: %0#, Expected output: %0#, Time: %0t\n",
                  38,(((QData)((IData)((0x7ffffU & (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out)))) 
                       << 0x13U) | (QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(
                                                              (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out 
                                                               >> 0x13U)))))),
                  38,vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__expected_out,
                  64,VL_TIME_UNITED_Q(1000),-9);
        vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mismatch 
            = ((IData)(1U) + vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mismatch);
    } else {
        VL_WRITEF("Data Matched: Netlist: %0#,  Expected output: %0#, Time: %0t\n",
                  38,(((QData)((IData)((0x7ffffU & (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out)))) 
                       << 0x13U) | (QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(
                                                              (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out 
                                                               >> 0x13U)))))),
                  38,vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__expected_out,
                  64,VL_TIME_UNITED_Q(1000),-9);
    }
    co_await vlSelf->__VtrigSched_h697651cc__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2.clk)", 
                                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Jira_Testcase/EDA-2500/accum_20lsb_input_to_mulltiplier_dsp19x2/results_dir/.././sim/co_sim_tb/co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2.v", 
                                                       144);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF("\n\n***Directed Functionality Test is ended***\n\n\n\n\n***Directed Functionality Test is applied***\n\n\n");
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__a = 0x80000U;
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__b = 0x20000U;
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mult 
        = ((0xffffffff00000000ULL & vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mult) 
           | (IData)((IData)(((0x3ffU & (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_out)) 
                              * (0x1ffU & vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__b)))));
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mult 
        = ((0xffffffffULL & vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mult) 
           | ((QData)((IData)(((0x3ffU & (IData)((vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_out 
                                                  >> 0x20U))) 
                               * (0x1ffU & (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__b 
                                            >> 9U))))) 
              << 0x20U));
    co_await vlSelf->__VtrigSched_h6976570b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2.clk)", 
                                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Jira_Testcase/EDA-2500/accum_20lsb_input_to_mulltiplier_dsp19x2/results_dir/.././sim/co_sim_tb/co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2.v", 
                                                       152);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_in 
        = (((QData)((IData)((0xffcU & (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__a 
                                       >> 8U)))) << 0x20U) 
           | (QData)((IData)((0xffcU & (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__a 
                                        << 2U)))));
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_out 
        = (((QData)((IData)(((IData)((vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_in 
                                      >> 0x20U)) - (IData)(
                                                           (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mult 
                                                            >> 0x20U))))) 
            << 0x20U) | (QData)((IData)(((IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_in) 
                                         - (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mult)))));
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__expected_out 
        = (((QData)((IData)((0x7ffffU & (IData)((vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_out 
                                                 >> 0x20U))))) 
            << 0x13U) | (QData)((IData)((0x7ffffU & (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_out)))));
    VL_WRITEF("%20#  Test stimulus is: a=%0#, b=%0#\n",
              64,VL_TIME_UNITED_Q(1000),20,vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__a,
              18,vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__b);
    co_await vlSelf->__VdlySched.delay(0xbb8ULL, nullptr, 
                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Jira_Testcase/EDA-2500/accum_20lsb_input_to_mulltiplier_dsp19x2/results_dir/.././sim/co_sim_tb/co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2.v", 
                                       157);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((((QData)((IData)((0x7ffffU & (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out)))) 
           << 0x13U) | (QData)((IData)((0x7ffffU & (IData)(
                                                           (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out 
                                                            >> 0x13U)))))) 
         != vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__expected_out)) {
        VL_WRITEF("Data Mismatch, Netlist: %0#, Expected output: %0#, Time: %0t\n",
                  38,(((QData)((IData)((0x7ffffU & (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out)))) 
                       << 0x13U) | (QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(
                                                              (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out 
                                                               >> 0x13U)))))),
                  38,vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__expected_out,
                  64,VL_TIME_UNITED_Q(1000),-9);
        vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mismatch 
            = ((IData)(1U) + vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mismatch);
    } else {
        VL_WRITEF("Data Matched: Netlist: %0#,  Expected output: %0#, Time: %0t\n",
                  38,(((QData)((IData)((0x7ffffU & (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out)))) 
                       << 0x13U) | (QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(
                                                              (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out 
                                                               >> 0x13U)))))),
                  38,vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__expected_out,
                  64,VL_TIME_UNITED_Q(1000),-9);
    }
    co_await vlSelf->__VtrigSched_h697651cc__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2.clk)", 
                                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Jira_Testcase/EDA-2500/accum_20lsb_input_to_mulltiplier_dsp19x2/results_dir/.././sim/co_sim_tb/co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2.v", 
                                                       159);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF("\n\n***Directed Functionality Test is ended***\n\n\n\n\n***Directed Functionality Test is applied***\n\n\n");
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__a = 0x65e71U;
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__b = 0x1a9f8U;
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mult 
        = ((0xffffffff00000000ULL & vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mult) 
           | (IData)((IData)(((0x3ffU & (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_out)) 
                              * (0x1ffU & vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__b)))));
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mult 
        = ((0xffffffffULL & vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mult) 
           | ((QData)((IData)(((0x3ffU & (IData)((vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_out 
                                                  >> 0x20U))) 
                               * (0x1ffU & (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__b 
                                            >> 9U))))) 
              << 0x20U));
    co_await vlSelf->__VtrigSched_h6976570b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2.clk)", 
                                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Jira_Testcase/EDA-2500/accum_20lsb_input_to_mulltiplier_dsp19x2/results_dir/.././sim/co_sim_tb/co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2.v", 
                                                       167);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_in 
        = (((QData)((IData)((0xffcU & (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__a 
                                       >> 8U)))) << 0x20U) 
           | (QData)((IData)((0xffcU & (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__a 
                                        << 2U)))));
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_out 
        = (((QData)((IData)(((IData)((vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_in 
                                      >> 0x20U)) - (IData)(
                                                           (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mult 
                                                            >> 0x20U))))) 
            << 0x20U) | (QData)((IData)(((IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_in) 
                                         - (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mult)))));
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__expected_out 
        = (((QData)((IData)((0x7ffffU & (IData)((vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_out 
                                                 >> 0x20U))))) 
            << 0x13U) | (QData)((IData)((0x7ffffU & (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_out)))));
    VL_WRITEF("%20#  Test stimulus is: a=%0#, b=%0#\n",
              64,VL_TIME_UNITED_Q(1000),20,vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__a,
              18,vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__b);
    co_await vlSelf->__VdlySched.delay(0xbb8ULL, nullptr, 
                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Jira_Testcase/EDA-2500/accum_20lsb_input_to_mulltiplier_dsp19x2/results_dir/.././sim/co_sim_tb/co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2.v", 
                                       172);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((((QData)((IData)((0x7ffffU & (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out)))) 
           << 0x13U) | (QData)((IData)((0x7ffffU & (IData)(
                                                           (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out 
                                                            >> 0x13U)))))) 
         != vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__expected_out)) {
        VL_WRITEF("Data Mismatch, Netlist: %0#, Expected output: %0#, Time: %0t\n",
                  38,(((QData)((IData)((0x7ffffU & (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out)))) 
                       << 0x13U) | (QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(
                                                              (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out 
                                                               >> 0x13U)))))),
                  38,vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__expected_out,
                  64,VL_TIME_UNITED_Q(1000),-9);
        vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mismatch 
            = ((IData)(1U) + vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mismatch);
    } else {
        VL_WRITEF("Data Matched: Netlist: %0#,  Expected output: %0#, Time: %0t\n",
                  38,(((QData)((IData)((0x7ffffU & (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out)))) 
                       << 0x13U) | (QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(
                                                              (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out 
                                                               >> 0x13U)))))),
                  38,vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__expected_out,
                  64,VL_TIME_UNITED_Q(1000),-9);
    }
    co_await vlSelf->__VtrigSched_h697651cc__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2.clk)", 
                                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Jira_Testcase/EDA-2500/accum_20lsb_input_to_mulltiplier_dsp19x2/results_dir/.././sim/co_sim_tb/co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2.v", 
                                                       174);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF("\n\n***Directed Functionality Test is ended***\n\n\n\n\n*** Random Functionality Tests with random inputs are applied***\n\n\n");
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__a 
        = (0xfffffU & VL_RANDOM_I());
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__b 
        = (0x3ffffU & VL_RANDOM_I());
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mult 
        = ((0xffffffff00000000ULL & vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mult) 
           | (IData)((IData)(((0x3ffU & (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_out)) 
                              * (0x1ffU & vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__b)))));
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mult 
        = ((0xffffffffULL & vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mult) 
           | ((QData)((IData)(((0x3ffU & (IData)((vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_out 
                                                  >> 0x20U))) 
                               * (0x1ffU & (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__b 
                                            >> 9U))))) 
              << 0x20U));
    co_await vlSelf->__VtrigSched_h6976570b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2.clk)", 
                                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Jira_Testcase/EDA-2500/accum_20lsb_input_to_mulltiplier_dsp19x2/results_dir/.././sim/co_sim_tb/co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2.v", 
                                                       184);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_in 
        = (((QData)((IData)((0xffcU & (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__a 
                                       >> 8U)))) << 0x20U) 
           | (QData)((IData)((0xffcU & (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__a 
                                        << 2U)))));
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_out 
        = (((QData)((IData)(((IData)((vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_in 
                                      >> 0x20U)) - (IData)(
                                                           (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mult 
                                                            >> 0x20U))))) 
            << 0x20U) | (QData)((IData)(((IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_in) 
                                         - (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mult)))));
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__expected_out 
        = (((QData)((IData)((0x7ffffU & (IData)((vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_out 
                                                 >> 0x20U))))) 
            << 0x13U) | (QData)((IData)((0x7ffffU & (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_out)))));
    VL_WRITEF("%20#  Test stimulus is: a=%0#, b=%0#\n",
              64,VL_TIME_UNITED_Q(1000),20,vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__a,
              18,vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__b);
    co_await vlSelf->__VdlySched.delay(0xbb8ULL, nullptr, 
                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Jira_Testcase/EDA-2500/accum_20lsb_input_to_mulltiplier_dsp19x2/results_dir/.././sim/co_sim_tb/co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2.v", 
                                       189);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((((QData)((IData)((0x7ffffU & (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out)))) 
           << 0x13U) | (QData)((IData)((0x7ffffU & (IData)(
                                                           (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out 
                                                            >> 0x13U)))))) 
         != vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__expected_out)) {
        VL_WRITEF("Data Mismatch, Netlist: %0#, Expected output: %0#, Time: %0t\n",
                  38,(((QData)((IData)((0x7ffffU & (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out)))) 
                       << 0x13U) | (QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(
                                                              (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out 
                                                               >> 0x13U)))))),
                  38,vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__expected_out,
                  64,VL_TIME_UNITED_Q(1000),-9);
        vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mismatch 
            = ((IData)(1U) + vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mismatch);
    } else {
        VL_WRITEF("Data Matched: Netlist: %0#,  Expected output: %0#, Time: %0t\n",
                  38,(((QData)((IData)((0x7ffffU & (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out)))) 
                       << 0x13U) | (QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(
                                                              (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out 
                                                               >> 0x13U)))))),
                  38,vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__expected_out,
                  64,VL_TIME_UNITED_Q(1000),-9);
    }
    co_await vlSelf->__VtrigSched_h697651cc__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2.clk)", 
                                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Jira_Testcase/EDA-2500/accum_20lsb_input_to_mulltiplier_dsp19x2/results_dir/.././sim/co_sim_tb/co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2.v", 
                                                       191);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__a 
        = (0xfffffU & VL_RANDOM_I());
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__b 
        = (0x3ffffU & VL_RANDOM_I());
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mult 
        = ((0xffffffff00000000ULL & vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mult) 
           | (IData)((IData)(((0x3ffU & (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_out)) 
                              * (0x1ffU & vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__b)))));
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mult 
        = ((0xffffffffULL & vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mult) 
           | ((QData)((IData)(((0x3ffU & (IData)((vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_out 
                                                  >> 0x20U))) 
                               * (0x1ffU & (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__b 
                                            >> 9U))))) 
              << 0x20U));
    co_await vlSelf->__VtrigSched_h6976570b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2.clk)", 
                                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Jira_Testcase/EDA-2500/accum_20lsb_input_to_mulltiplier_dsp19x2/results_dir/.././sim/co_sim_tb/co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2.v", 
                                                       184);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_in 
        = (((QData)((IData)((0xffcU & (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__a 
                                       >> 8U)))) << 0x20U) 
           | (QData)((IData)((0xffcU & (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__a 
                                        << 2U)))));
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_out 
        = (((QData)((IData)(((IData)((vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_in 
                                      >> 0x20U)) - (IData)(
                                                           (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mult 
                                                            >> 0x20U))))) 
            << 0x20U) | (QData)((IData)(((IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_in) 
                                         - (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mult)))));
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__expected_out 
        = (((QData)((IData)((0x7ffffU & (IData)((vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_out 
                                                 >> 0x20U))))) 
            << 0x13U) | (QData)((IData)((0x7ffffU & (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_out)))));
    VL_WRITEF("%20#  Test stimulus is: a=%0#, b=%0#\n",
              64,VL_TIME_UNITED_Q(1000),20,vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__a,
              18,vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__b);
    co_await vlSelf->__VdlySched.delay(0xbb8ULL, nullptr, 
                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Jira_Testcase/EDA-2500/accum_20lsb_input_to_mulltiplier_dsp19x2/results_dir/.././sim/co_sim_tb/co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2.v", 
                                       189);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((((QData)((IData)((0x7ffffU & (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out)))) 
           << 0x13U) | (QData)((IData)((0x7ffffU & (IData)(
                                                           (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out 
                                                            >> 0x13U)))))) 
         != vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__expected_out)) {
        VL_WRITEF("Data Mismatch, Netlist: %0#, Expected output: %0#, Time: %0t\n",
                  38,(((QData)((IData)((0x7ffffU & (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out)))) 
                       << 0x13U) | (QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(
                                                              (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out 
                                                               >> 0x13U)))))),
                  38,vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__expected_out,
                  64,VL_TIME_UNITED_Q(1000),-9);
        vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mismatch 
            = ((IData)(1U) + vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mismatch);
    } else {
        VL_WRITEF("Data Matched: Netlist: %0#,  Expected output: %0#, Time: %0t\n",
                  38,(((QData)((IData)((0x7ffffU & (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out)))) 
                       << 0x13U) | (QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(
                                                              (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out 
                                                               >> 0x13U)))))),
                  38,vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__expected_out,
                  64,VL_TIME_UNITED_Q(1000),-9);
    }
    co_await vlSelf->__VtrigSched_h697651cc__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2.clk)", 
                                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Jira_Testcase/EDA-2500/accum_20lsb_input_to_mulltiplier_dsp19x2/results_dir/.././sim/co_sim_tb/co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2.v", 
                                                       191);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__a 
        = (0xfffffU & VL_RANDOM_I());
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__b 
        = (0x3ffffU & VL_RANDOM_I());
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mult 
        = ((0xffffffff00000000ULL & vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mult) 
           | (IData)((IData)(((0x3ffU & (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_out)) 
                              * (0x1ffU & vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__b)))));
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mult 
        = ((0xffffffffULL & vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mult) 
           | ((QData)((IData)(((0x3ffU & (IData)((vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_out 
                                                  >> 0x20U))) 
                               * (0x1ffU & (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__b 
                                            >> 9U))))) 
              << 0x20U));
    co_await vlSelf->__VtrigSched_h6976570b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2.clk)", 
                                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Jira_Testcase/EDA-2500/accum_20lsb_input_to_mulltiplier_dsp19x2/results_dir/.././sim/co_sim_tb/co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2.v", 
                                                       184);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_in 
        = (((QData)((IData)((0xffcU & (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__a 
                                       >> 8U)))) << 0x20U) 
           | (QData)((IData)((0xffcU & (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__a 
                                        << 2U)))));
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_out 
        = (((QData)((IData)(((IData)((vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_in 
                                      >> 0x20U)) - (IData)(
                                                           (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mult 
                                                            >> 0x20U))))) 
            << 0x20U) | (QData)((IData)(((IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_in) 
                                         - (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mult)))));
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__expected_out 
        = (((QData)((IData)((0x7ffffU & (IData)((vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_out 
                                                 >> 0x20U))))) 
            << 0x13U) | (QData)((IData)((0x7ffffU & (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_out)))));
    VL_WRITEF("%20#  Test stimulus is: a=%0#, b=%0#\n",
              64,VL_TIME_UNITED_Q(1000),20,vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__a,
              18,vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__b);
    co_await vlSelf->__VdlySched.delay(0xbb8ULL, nullptr, 
                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Jira_Testcase/EDA-2500/accum_20lsb_input_to_mulltiplier_dsp19x2/results_dir/.././sim/co_sim_tb/co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2.v", 
                                       189);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((((QData)((IData)((0x7ffffU & (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out)))) 
           << 0x13U) | (QData)((IData)((0x7ffffU & (IData)(
                                                           (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out 
                                                            >> 0x13U)))))) 
         != vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__expected_out)) {
        VL_WRITEF("Data Mismatch, Netlist: %0#, Expected output: %0#, Time: %0t\n",
                  38,(((QData)((IData)((0x7ffffU & (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out)))) 
                       << 0x13U) | (QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(
                                                              (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out 
                                                               >> 0x13U)))))),
                  38,vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__expected_out,
                  64,VL_TIME_UNITED_Q(1000),-9);
        vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mismatch 
            = ((IData)(1U) + vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mismatch);
    } else {
        VL_WRITEF("Data Matched: Netlist: %0#,  Expected output: %0#, Time: %0t\n",
                  38,(((QData)((IData)((0x7ffffU & (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out)))) 
                       << 0x13U) | (QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(
                                                              (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out 
                                                               >> 0x13U)))))),
                  38,vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__expected_out,
                  64,VL_TIME_UNITED_Q(1000),-9);
    }
    co_await vlSelf->__VtrigSched_h697651cc__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2.clk)", 
                                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Jira_Testcase/EDA-2500/accum_20lsb_input_to_mulltiplier_dsp19x2/results_dir/.././sim/co_sim_tb/co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2.v", 
                                                       191);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__a 
        = (0xfffffU & VL_RANDOM_I());
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__b 
        = (0x3ffffU & VL_RANDOM_I());
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mult 
        = ((0xffffffff00000000ULL & vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mult) 
           | (IData)((IData)(((0x3ffU & (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_out)) 
                              * (0x1ffU & vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__b)))));
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mult 
        = ((0xffffffffULL & vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mult) 
           | ((QData)((IData)(((0x3ffU & (IData)((vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_out 
                                                  >> 0x20U))) 
                               * (0x1ffU & (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__b 
                                            >> 9U))))) 
              << 0x20U));
    co_await vlSelf->__VtrigSched_h6976570b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2.clk)", 
                                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Jira_Testcase/EDA-2500/accum_20lsb_input_to_mulltiplier_dsp19x2/results_dir/.././sim/co_sim_tb/co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2.v", 
                                                       184);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_in 
        = (((QData)((IData)((0xffcU & (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__a 
                                       >> 8U)))) << 0x20U) 
           | (QData)((IData)((0xffcU & (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__a 
                                        << 2U)))));
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_out 
        = (((QData)((IData)(((IData)((vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_in 
                                      >> 0x20U)) - (IData)(
                                                           (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mult 
                                                            >> 0x20U))))) 
            << 0x20U) | (QData)((IData)(((IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_in) 
                                         - (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mult)))));
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__expected_out 
        = (((QData)((IData)((0x7ffffU & (IData)((vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_out 
                                                 >> 0x20U))))) 
            << 0x13U) | (QData)((IData)((0x7ffffU & (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_out)))));
    VL_WRITEF("%20#  Test stimulus is: a=%0#, b=%0#\n",
              64,VL_TIME_UNITED_Q(1000),20,vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__a,
              18,vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__b);
    co_await vlSelf->__VdlySched.delay(0xbb8ULL, nullptr, 
                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Jira_Testcase/EDA-2500/accum_20lsb_input_to_mulltiplier_dsp19x2/results_dir/.././sim/co_sim_tb/co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2.v", 
                                       189);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((((QData)((IData)((0x7ffffU & (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out)))) 
           << 0x13U) | (QData)((IData)((0x7ffffU & (IData)(
                                                           (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out 
                                                            >> 0x13U)))))) 
         != vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__expected_out)) {
        VL_WRITEF("Data Mismatch, Netlist: %0#, Expected output: %0#, Time: %0t\n",
                  38,(((QData)((IData)((0x7ffffU & (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out)))) 
                       << 0x13U) | (QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(
                                                              (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out 
                                                               >> 0x13U)))))),
                  38,vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__expected_out,
                  64,VL_TIME_UNITED_Q(1000),-9);
        vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mismatch 
            = ((IData)(1U) + vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mismatch);
    } else {
        VL_WRITEF("Data Matched: Netlist: %0#,  Expected output: %0#, Time: %0t\n",
                  38,(((QData)((IData)((0x7ffffU & (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out)))) 
                       << 0x13U) | (QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(
                                                              (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out 
                                                               >> 0x13U)))))),
                  38,vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__expected_out,
                  64,VL_TIME_UNITED_Q(1000),-9);
    }
    co_await vlSelf->__VtrigSched_h697651cc__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2.clk)", 
                                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Jira_Testcase/EDA-2500/accum_20lsb_input_to_mulltiplier_dsp19x2/results_dir/.././sim/co_sim_tb/co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2.v", 
                                                       191);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__a 
        = (0xfffffU & VL_RANDOM_I());
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__b 
        = (0x3ffffU & VL_RANDOM_I());
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mult 
        = ((0xffffffff00000000ULL & vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mult) 
           | (IData)((IData)(((0x3ffU & (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_out)) 
                              * (0x1ffU & vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__b)))));
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mult 
        = ((0xffffffffULL & vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mult) 
           | ((QData)((IData)(((0x3ffU & (IData)((vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_out 
                                                  >> 0x20U))) 
                               * (0x1ffU & (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__b 
                                            >> 9U))))) 
              << 0x20U));
    co_await vlSelf->__VtrigSched_h6976570b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2.clk)", 
                                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Jira_Testcase/EDA-2500/accum_20lsb_input_to_mulltiplier_dsp19x2/results_dir/.././sim/co_sim_tb/co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2.v", 
                                                       184);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_in 
        = (((QData)((IData)((0xffcU & (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__a 
                                       >> 8U)))) << 0x20U) 
           | (QData)((IData)((0xffcU & (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__a 
                                        << 2U)))));
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_out 
        = (((QData)((IData)(((IData)((vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_in 
                                      >> 0x20U)) - (IData)(
                                                           (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mult 
                                                            >> 0x20U))))) 
            << 0x20U) | (QData)((IData)(((IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_in) 
                                         - (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mult)))));
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__expected_out 
        = (((QData)((IData)((0x7ffffU & (IData)((vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_out 
                                                 >> 0x20U))))) 
            << 0x13U) | (QData)((IData)((0x7ffffU & (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_out)))));
    VL_WRITEF("%20#  Test stimulus is: a=%0#, b=%0#\n",
              64,VL_TIME_UNITED_Q(1000),20,vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__a,
              18,vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__b);
    co_await vlSelf->__VdlySched.delay(0xbb8ULL, nullptr, 
                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Jira_Testcase/EDA-2500/accum_20lsb_input_to_mulltiplier_dsp19x2/results_dir/.././sim/co_sim_tb/co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2.v", 
                                       189);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((((QData)((IData)((0x7ffffU & (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out)))) 
           << 0x13U) | (QData)((IData)((0x7ffffU & (IData)(
                                                           (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out 
                                                            >> 0x13U)))))) 
         != vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__expected_out)) {
        VL_WRITEF("Data Mismatch, Netlist: %0#, Expected output: %0#, Time: %0t\n",
                  38,(((QData)((IData)((0x7ffffU & (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out)))) 
                       << 0x13U) | (QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(
                                                              (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out 
                                                               >> 0x13U)))))),
                  38,vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__expected_out,
                  64,VL_TIME_UNITED_Q(1000),-9);
        vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mismatch 
            = ((IData)(1U) + vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mismatch);
    } else {
        VL_WRITEF("Data Matched: Netlist: %0#,  Expected output: %0#, Time: %0t\n",
                  38,(((QData)((IData)((0x7ffffU & (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out)))) 
                       << 0x13U) | (QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(
                                                              (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out 
                                                               >> 0x13U)))))),
                  38,vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__expected_out,
                  64,VL_TIME_UNITED_Q(1000),-9);
    }
    co_await vlSelf->__VtrigSched_h697651cc__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2.clk)", 
                                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Jira_Testcase/EDA-2500/accum_20lsb_input_to_mulltiplier_dsp19x2/results_dir/.././sim/co_sim_tb/co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2.v", 
                                                       191);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__a 
        = (0xfffffU & VL_RANDOM_I());
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__b 
        = (0x3ffffU & VL_RANDOM_I());
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mult 
        = ((0xffffffff00000000ULL & vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mult) 
           | (IData)((IData)(((0x3ffU & (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_out)) 
                              * (0x1ffU & vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__b)))));
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mult 
        = ((0xffffffffULL & vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mult) 
           | ((QData)((IData)(((0x3ffU & (IData)((vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_out 
                                                  >> 0x20U))) 
                               * (0x1ffU & (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__b 
                                            >> 9U))))) 
              << 0x20U));
    co_await vlSelf->__VtrigSched_h6976570b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2.clk)", 
                                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Jira_Testcase/EDA-2500/accum_20lsb_input_to_mulltiplier_dsp19x2/results_dir/.././sim/co_sim_tb/co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2.v", 
                                                       184);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_in 
        = (((QData)((IData)((0xffcU & (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__a 
                                       >> 8U)))) << 0x20U) 
           | (QData)((IData)((0xffcU & (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__a 
                                        << 2U)))));
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_out 
        = (((QData)((IData)(((IData)((vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_in 
                                      >> 0x20U)) - (IData)(
                                                           (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mult 
                                                            >> 0x20U))))) 
            << 0x20U) | (QData)((IData)(((IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_in) 
                                         - (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mult)))));
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__expected_out 
        = (((QData)((IData)((0x7ffffU & (IData)((vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_out 
                                                 >> 0x20U))))) 
            << 0x13U) | (QData)((IData)((0x7ffffU & (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_out)))));
    VL_WRITEF("%20#  Test stimulus is: a=%0#, b=%0#\n",
              64,VL_TIME_UNITED_Q(1000),20,vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__a,
              18,vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__b);
    co_await vlSelf->__VdlySched.delay(0xbb8ULL, nullptr, 
                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Jira_Testcase/EDA-2500/accum_20lsb_input_to_mulltiplier_dsp19x2/results_dir/.././sim/co_sim_tb/co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2.v", 
                                       189);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((((QData)((IData)((0x7ffffU & (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out)))) 
           << 0x13U) | (QData)((IData)((0x7ffffU & (IData)(
                                                           (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out 
                                                            >> 0x13U)))))) 
         != vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__expected_out)) {
        VL_WRITEF("Data Mismatch, Netlist: %0#, Expected output: %0#, Time: %0t\n",
                  38,(((QData)((IData)((0x7ffffU & (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out)))) 
                       << 0x13U) | (QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(
                                                              (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out 
                                                               >> 0x13U)))))),
                  38,vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__expected_out,
                  64,VL_TIME_UNITED_Q(1000),-9);
        vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mismatch 
            = ((IData)(1U) + vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mismatch);
    } else {
        VL_WRITEF("Data Matched: Netlist: %0#,  Expected output: %0#, Time: %0t\n",
                  38,(((QData)((IData)((0x7ffffU & (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out)))) 
                       << 0x13U) | (QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(
                                                              (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out 
                                                               >> 0x13U)))))),
                  38,vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__expected_out,
                  64,VL_TIME_UNITED_Q(1000),-9);
    }
    co_await vlSelf->__VtrigSched_h697651cc__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2.clk)", 
                                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Jira_Testcase/EDA-2500/accum_20lsb_input_to_mulltiplier_dsp19x2/results_dir/.././sim/co_sim_tb/co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2.v", 
                                                       191);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__a 
        = (0xfffffU & VL_RANDOM_I());
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__b 
        = (0x3ffffU & VL_RANDOM_I());
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mult 
        = ((0xffffffff00000000ULL & vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mult) 
           | (IData)((IData)(((0x3ffU & (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_out)) 
                              * (0x1ffU & vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__b)))));
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mult 
        = ((0xffffffffULL & vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mult) 
           | ((QData)((IData)(((0x3ffU & (IData)((vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_out 
                                                  >> 0x20U))) 
                               * (0x1ffU & (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__b 
                                            >> 9U))))) 
              << 0x20U));
    co_await vlSelf->__VtrigSched_h6976570b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2.clk)", 
                                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Jira_Testcase/EDA-2500/accum_20lsb_input_to_mulltiplier_dsp19x2/results_dir/.././sim/co_sim_tb/co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2.v", 
                                                       184);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_in 
        = (((QData)((IData)((0xffcU & (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__a 
                                       >> 8U)))) << 0x20U) 
           | (QData)((IData)((0xffcU & (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__a 
                                        << 2U)))));
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_out 
        = (((QData)((IData)(((IData)((vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_in 
                                      >> 0x20U)) - (IData)(
                                                           (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mult 
                                                            >> 0x20U))))) 
            << 0x20U) | (QData)((IData)(((IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_in) 
                                         - (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mult)))));
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__expected_out 
        = (((QData)((IData)((0x7ffffU & (IData)((vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_out 
                                                 >> 0x20U))))) 
            << 0x13U) | (QData)((IData)((0x7ffffU & (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_out)))));
    VL_WRITEF("%20#  Test stimulus is: a=%0#, b=%0#\n",
              64,VL_TIME_UNITED_Q(1000),20,vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__a,
              18,vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__b);
    co_await vlSelf->__VdlySched.delay(0xbb8ULL, nullptr, 
                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Jira_Testcase/EDA-2500/accum_20lsb_input_to_mulltiplier_dsp19x2/results_dir/.././sim/co_sim_tb/co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2.v", 
                                       189);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((((QData)((IData)((0x7ffffU & (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out)))) 
           << 0x13U) | (QData)((IData)((0x7ffffU & (IData)(
                                                           (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out 
                                                            >> 0x13U)))))) 
         != vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__expected_out)) {
        VL_WRITEF("Data Mismatch, Netlist: %0#, Expected output: %0#, Time: %0t\n",
                  38,(((QData)((IData)((0x7ffffU & (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out)))) 
                       << 0x13U) | (QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(
                                                              (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out 
                                                               >> 0x13U)))))),
                  38,vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__expected_out,
                  64,VL_TIME_UNITED_Q(1000),-9);
        vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mismatch 
            = ((IData)(1U) + vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mismatch);
    } else {
        VL_WRITEF("Data Matched: Netlist: %0#,  Expected output: %0#, Time: %0t\n",
                  38,(((QData)((IData)((0x7ffffU & (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out)))) 
                       << 0x13U) | (QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(
                                                              (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out 
                                                               >> 0x13U)))))),
                  38,vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__expected_out,
                  64,VL_TIME_UNITED_Q(1000),-9);
    }
    co_await vlSelf->__VtrigSched_h697651cc__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2.clk)", 
                                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Jira_Testcase/EDA-2500/accum_20lsb_input_to_mulltiplier_dsp19x2/results_dir/.././sim/co_sim_tb/co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2.v", 
                                                       191);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__a 
        = (0xfffffU & VL_RANDOM_I());
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__b 
        = (0x3ffffU & VL_RANDOM_I());
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mult 
        = ((0xffffffff00000000ULL & vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mult) 
           | (IData)((IData)(((0x3ffU & (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_out)) 
                              * (0x1ffU & vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__b)))));
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mult 
        = ((0xffffffffULL & vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mult) 
           | ((QData)((IData)(((0x3ffU & (IData)((vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_out 
                                                  >> 0x20U))) 
                               * (0x1ffU & (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__b 
                                            >> 9U))))) 
              << 0x20U));
    co_await vlSelf->__VtrigSched_h6976570b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2.clk)", 
                                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Jira_Testcase/EDA-2500/accum_20lsb_input_to_mulltiplier_dsp19x2/results_dir/.././sim/co_sim_tb/co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2.v", 
                                                       184);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_in 
        = (((QData)((IData)((0xffcU & (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__a 
                                       >> 8U)))) << 0x20U) 
           | (QData)((IData)((0xffcU & (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__a 
                                        << 2U)))));
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_out 
        = (((QData)((IData)(((IData)((vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_in 
                                      >> 0x20U)) - (IData)(
                                                           (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mult 
                                                            >> 0x20U))))) 
            << 0x20U) | (QData)((IData)(((IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_in) 
                                         - (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mult)))));
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__expected_out 
        = (((QData)((IData)((0x7ffffU & (IData)((vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_out 
                                                 >> 0x20U))))) 
            << 0x13U) | (QData)((IData)((0x7ffffU & (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_out)))));
    VL_WRITEF("%20#  Test stimulus is: a=%0#, b=%0#\n",
              64,VL_TIME_UNITED_Q(1000),20,vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__a,
              18,vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__b);
    co_await vlSelf->__VdlySched.delay(0xbb8ULL, nullptr, 
                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Jira_Testcase/EDA-2500/accum_20lsb_input_to_mulltiplier_dsp19x2/results_dir/.././sim/co_sim_tb/co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2.v", 
                                       189);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((((QData)((IData)((0x7ffffU & (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out)))) 
           << 0x13U) | (QData)((IData)((0x7ffffU & (IData)(
                                                           (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out 
                                                            >> 0x13U)))))) 
         != vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__expected_out)) {
        VL_WRITEF("Data Mismatch, Netlist: %0#, Expected output: %0#, Time: %0t\n",
                  38,(((QData)((IData)((0x7ffffU & (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out)))) 
                       << 0x13U) | (QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(
                                                              (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out 
                                                               >> 0x13U)))))),
                  38,vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__expected_out,
                  64,VL_TIME_UNITED_Q(1000),-9);
        vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mismatch 
            = ((IData)(1U) + vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mismatch);
    } else {
        VL_WRITEF("Data Matched: Netlist: %0#,  Expected output: %0#, Time: %0t\n",
                  38,(((QData)((IData)((0x7ffffU & (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out)))) 
                       << 0x13U) | (QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(
                                                              (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out 
                                                               >> 0x13U)))))),
                  38,vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__expected_out,
                  64,VL_TIME_UNITED_Q(1000),-9);
    }
    co_await vlSelf->__VtrigSched_h697651cc__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2.clk)", 
                                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Jira_Testcase/EDA-2500/accum_20lsb_input_to_mulltiplier_dsp19x2/results_dir/.././sim/co_sim_tb/co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2.v", 
                                                       191);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__a 
        = (0xfffffU & VL_RANDOM_I());
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__b 
        = (0x3ffffU & VL_RANDOM_I());
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mult 
        = ((0xffffffff00000000ULL & vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mult) 
           | (IData)((IData)(((0x3ffU & (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_out)) 
                              * (0x1ffU & vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__b)))));
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mult 
        = ((0xffffffffULL & vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mult) 
           | ((QData)((IData)(((0x3ffU & (IData)((vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_out 
                                                  >> 0x20U))) 
                               * (0x1ffU & (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__b 
                                            >> 9U))))) 
              << 0x20U));
    co_await vlSelf->__VtrigSched_h6976570b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2.clk)", 
                                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Jira_Testcase/EDA-2500/accum_20lsb_input_to_mulltiplier_dsp19x2/results_dir/.././sim/co_sim_tb/co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2.v", 
                                                       184);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_in 
        = (((QData)((IData)((0xffcU & (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__a 
                                       >> 8U)))) << 0x20U) 
           | (QData)((IData)((0xffcU & (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__a 
                                        << 2U)))));
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_out 
        = (((QData)((IData)(((IData)((vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_in 
                                      >> 0x20U)) - (IData)(
                                                           (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mult 
                                                            >> 0x20U))))) 
            << 0x20U) | (QData)((IData)(((IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_in) 
                                         - (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mult)))));
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__expected_out 
        = (((QData)((IData)((0x7ffffU & (IData)((vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_out 
                                                 >> 0x20U))))) 
            << 0x13U) | (QData)((IData)((0x7ffffU & (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_out)))));
    VL_WRITEF("%20#  Test stimulus is: a=%0#, b=%0#\n",
              64,VL_TIME_UNITED_Q(1000),20,vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__a,
              18,vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__b);
    co_await vlSelf->__VdlySched.delay(0xbb8ULL, nullptr, 
                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Jira_Testcase/EDA-2500/accum_20lsb_input_to_mulltiplier_dsp19x2/results_dir/.././sim/co_sim_tb/co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2.v", 
                                       189);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((((QData)((IData)((0x7ffffU & (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out)))) 
           << 0x13U) | (QData)((IData)((0x7ffffU & (IData)(
                                                           (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out 
                                                            >> 0x13U)))))) 
         != vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__expected_out)) {
        VL_WRITEF("Data Mismatch, Netlist: %0#, Expected output: %0#, Time: %0t\n",
                  38,(((QData)((IData)((0x7ffffU & (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out)))) 
                       << 0x13U) | (QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(
                                                              (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out 
                                                               >> 0x13U)))))),
                  38,vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__expected_out,
                  64,VL_TIME_UNITED_Q(1000),-9);
        vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mismatch 
            = ((IData)(1U) + vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mismatch);
    } else {
        VL_WRITEF("Data Matched: Netlist: %0#,  Expected output: %0#, Time: %0t\n",
                  38,(((QData)((IData)((0x7ffffU & (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out)))) 
                       << 0x13U) | (QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(
                                                              (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out 
                                                               >> 0x13U)))))),
                  38,vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__expected_out,
                  64,VL_TIME_UNITED_Q(1000),-9);
    }
    co_await vlSelf->__VtrigSched_h697651cc__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2.clk)", 
                                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Jira_Testcase/EDA-2500/accum_20lsb_input_to_mulltiplier_dsp19x2/results_dir/.././sim/co_sim_tb/co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2.v", 
                                                       191);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__a 
        = (0xfffffU & VL_RANDOM_I());
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__b 
        = (0x3ffffU & VL_RANDOM_I());
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mult 
        = ((0xffffffff00000000ULL & vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mult) 
           | (IData)((IData)(((0x3ffU & (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_out)) 
                              * (0x1ffU & vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__b)))));
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mult 
        = ((0xffffffffULL & vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mult) 
           | ((QData)((IData)(((0x3ffU & (IData)((vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_out 
                                                  >> 0x20U))) 
                               * (0x1ffU & (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__b 
                                            >> 9U))))) 
              << 0x20U));
    co_await vlSelf->__VtrigSched_h6976570b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2.clk)", 
                                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Jira_Testcase/EDA-2500/accum_20lsb_input_to_mulltiplier_dsp19x2/results_dir/.././sim/co_sim_tb/co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2.v", 
                                                       184);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_in 
        = (((QData)((IData)((0xffcU & (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__a 
                                       >> 8U)))) << 0x20U) 
           | (QData)((IData)((0xffcU & (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__a 
                                        << 2U)))));
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_out 
        = (((QData)((IData)(((IData)((vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_in 
                                      >> 0x20U)) - (IData)(
                                                           (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mult 
                                                            >> 0x20U))))) 
            << 0x20U) | (QData)((IData)(((IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_in) 
                                         - (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mult)))));
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__expected_out 
        = (((QData)((IData)((0x7ffffU & (IData)((vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_out 
                                                 >> 0x20U))))) 
            << 0x13U) | (QData)((IData)((0x7ffffU & (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_out)))));
    VL_WRITEF("%20#  Test stimulus is: a=%0#, b=%0#\n",
              64,VL_TIME_UNITED_Q(1000),20,vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__a,
              18,vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__b);
    co_await vlSelf->__VdlySched.delay(0xbb8ULL, nullptr, 
                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Jira_Testcase/EDA-2500/accum_20lsb_input_to_mulltiplier_dsp19x2/results_dir/.././sim/co_sim_tb/co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2.v", 
                                       189);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((((QData)((IData)((0x7ffffU & (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out)))) 
           << 0x13U) | (QData)((IData)((0x7ffffU & (IData)(
                                                           (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out 
                                                            >> 0x13U)))))) 
         != vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__expected_out)) {
        VL_WRITEF("Data Mismatch, Netlist: %0#, Expected output: %0#, Time: %0t\n",
                  38,(((QData)((IData)((0x7ffffU & (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out)))) 
                       << 0x13U) | (QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(
                                                              (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out 
                                                               >> 0x13U)))))),
                  38,vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__expected_out,
                  64,VL_TIME_UNITED_Q(1000),-9);
        vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mismatch 
            = ((IData)(1U) + vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mismatch);
    } else {
        VL_WRITEF("Data Matched: Netlist: %0#,  Expected output: %0#, Time: %0t\n",
                  38,(((QData)((IData)((0x7ffffU & (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out)))) 
                       << 0x13U) | (QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(
                                                              (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out 
                                                               >> 0x13U)))))),
                  38,vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__expected_out,
                  64,VL_TIME_UNITED_Q(1000),-9);
    }
    co_await vlSelf->__VtrigSched_h697651cc__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2.clk)", 
                                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Jira_Testcase/EDA-2500/accum_20lsb_input_to_mulltiplier_dsp19x2/results_dir/.././sim/co_sim_tb/co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2.v", 
                                                       191);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF("\n\n***Random Functionality Tests with random inputs are ended***\n\n\n");
    if ((0U == vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mismatch)) {
        VL_WRITEF("\n**** All Comparison Matched ***\nSimulation Passed\n");
    } else {
        VL_WRITEF("%0d comparison(s) mismatched\nERROR: SIM: Simulation Failed\n",
                  32,vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mismatch);
    }
    VL_FINISH_MT("/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Jira_Testcase/EDA-2500/accum_20lsb_input_to_mulltiplier_dsp19x2/results_dir/.././sim/co_sim_tb/co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2.v", 199, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT void Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2___024root___act_comb__TOP__0(Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2___024root___act_comb__TOP__0\n"); );
    // Body
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT____Vcellinp__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__B 
        = ((0x3fe00U & (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__b 
                        << 9U)) | (0x1ffU & (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__b 
                                             >> 9U)));
}

void Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2___024root___eval_act(Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2___024root___eval_act\n"); );
    // Body
    if ((0xeULL & vlSelf->__VactTriggered.word(0U))) {
        Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2___024root___nba_sequent__TOP__0(Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__reset) {
        vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__accumulator = 0ULL;
        vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__DLY_B = 0U;
        vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out_reg = 0ULL;
        vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__acc_fir_reg = 0U;
        vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__shift_right_reg2 = 0U;
        vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__b_reg = 0U;
        vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__a_reg = 0U;
        vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__feedback_reg = 0U;
    } else {
        vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__accumulator 
            = ((IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__load_acc_int)
                ? vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__add_sub_out
                : vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__accumulator);
        vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__DLY_B 
            = vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT____Vcellinp__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__B;
        vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out_reg 
            = vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out;
        vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__acc_fir_reg = 2U;
        vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__shift_right_reg2 
            = vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__shift_right_reg1;
        vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__b_reg 
            = vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT____Vcellinp__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__B;
        vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__a_reg 
            = ((0xffc00U & (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__a 
                            << 0xaU)) | (0x3ffU & (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__a 
                                                   >> 0xaU)));
        vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__feedback_reg = 3U;
    }
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__load_acc_reg 
        = (1U & (~ (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__reset)));
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__subtract_reg 
        = (1U & (~ (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__reset)));
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__unsigned_b_reg = 1U;
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__round_reg2 
        = ((~ (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__reset)) 
           & (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__round_reg1));
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__saturate_reg2 
        = ((~ (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__reset)) 
           & (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__saturate_reg1));
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__unsigned_a_reg = 1U;
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__load_acc_int 
        = vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__load_acc_reg;
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__subtract_int 
        = vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__subtract_reg;
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__acc_fir_int 
        = vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__acc_fir_reg;
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__unsigned_b_int 
        = vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__unsigned_b_reg;
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__round_reg1 = 0U;
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__saturate_reg1 = 0U;
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__shift_right_reg1 = 0U;
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__b_int 
        = vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__b_reg;
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__unsigned_a_int 
        = vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__unsigned_a_reg;
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__a_int 
        = vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__a_reg;
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__feedback_int 
        = vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__feedback_reg;
    if ((4U & (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__feedback_int))) {
        vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__add_sub_in 
            = ((2U & (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__feedback_int))
                ? ((1U & (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__feedback_int))
                    ? ((IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__unsigned_a_int)
                        ? ((QData)((IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__a_int)) 
                           << (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__acc_fir_int))
                        : ((((- (QData)((IData)((1U 
                                                 & (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__a_int 
                                                    >> 0x13U))))) 
                             << 0x14U) | (QData)((IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__a_int))) 
                           << (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__acc_fir_int)))
                    : ((IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__unsigned_a_int)
                        ? ((QData)((IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__a_int)) 
                           << (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__acc_fir_int))
                        : ((((- (QData)((IData)((1U 
                                                 & (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__a_int 
                                                    >> 0x13U))))) 
                             << 0x14U) | (QData)((IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__a_int))) 
                           << (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__acc_fir_int))))
                : ((1U & (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__feedback_int))
                    ? ((IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__unsigned_a_int)
                        ? ((QData)((IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__a_int)) 
                           << (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__acc_fir_int))
                        : ((((- (QData)((IData)((1U 
                                                 & (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__a_int 
                                                    >> 0x13U))))) 
                             << 0x14U) | (QData)((IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__a_int))) 
                           << (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__acc_fir_int)))
                    : ((IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__unsigned_a_int)
                        ? ((QData)((IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__a_int)) 
                           << (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__acc_fir_int))
                        : ((((- (QData)((IData)((1U 
                                                 & (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__a_int 
                                                    >> 0x13U))))) 
                             << 0x14U) | (QData)((IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__a_int))) 
                           << (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__acc_fir_int)))));
        vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__mult_b 
            = vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__b_int;
        vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__mult_a = 0U;
    } else if ((2U & (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__feedback_int))) {
        if ((1U & (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__feedback_int))) {
            vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__add_sub_in 
                = ((IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__unsigned_a_int)
                    ? ((QData)((IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__a_int)) 
                       << (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__acc_fir_int))
                    : ((((- (QData)((IData)((1U & (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__a_int 
                                                   >> 0x13U))))) 
                         << 0x14U) | (QData)((IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__a_int))) 
                       << (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__acc_fir_int)));
            vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__mult_b 
                = vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__b_int;
            vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__mult_a 
                = (0xfffffU & (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__accumulator));
        } else {
            vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__add_sub_in 
                = ((IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__unsigned_a_int)
                    ? ((QData)((IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__a_int)) 
                       << (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__acc_fir_int))
                    : ((((- (QData)((IData)((1U & (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__a_int 
                                                   >> 0x13U))))) 
                         << 0x14U) | (QData)((IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__a_int))) 
                       << (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__acc_fir_int)));
            vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__mult_b = 0U;
            vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__mult_a 
                = (0xfffffU & vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__a_int);
        }
    } else {
        vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__add_sub_in 
            = ((1U & (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__feedback_int))
                ? 0ULL : vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__accumulator);
        vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__mult_b 
            = vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__b_int;
        vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__mult_a 
            = (0xfffffU & vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__a_int);
    }
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__round_int 
        = vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__round_reg1;
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__saturate_int 
        = vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__saturate_reg1;
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__shift_right_int 
        = vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__shift_right_reg1;
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__mult_out 
        = ((IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__unsigned_a_int)
            ? ((IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__unsigned_b_int)
                ? ((QData)((IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__mult_a)) 
                   * (QData)((IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__mult_b)))
                : VL_MULS_QQQ(64, VL_EXTENDS_QI(64,21, vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__mult_a), 
                              VL_EXTENDS_QI(64,18, vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__mult_b)))
            : ((IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__unsigned_b_int)
                ? VL_MULS_QQQ(64, VL_EXTENDS_QI(64,20, vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__mult_a), 
                              VL_EXTENDS_QI(64,19, vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__mult_b))
                : VL_MULS_QQQ(64, VL_EXTENDS_QI(64,20, vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__mult_a), 
                              VL_EXTENDS_QI(64,18, vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__mult_b))));
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__add_sub_out 
        = ((IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__subtract_int)
            ? (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__add_sub_in 
               - vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__mult_out)
            : (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__add_sub_in 
               + vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__mult_out));
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__pre_shift 
        = vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__add_sub_out;
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__shift_right 
        = VL_SHIFTRS_QQI(64,64,6, vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__pre_shift, (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__shift_right_int));
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__round 
        = (((IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__round_int) 
            & (0U < (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__shift_right_int)))
            ? ((1U & (IData)((vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__pre_shift 
                              >> (0x3fU & ((IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__shift_right_int) 
                                           - (IData)(1U))))))
                ? (1ULL + vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__shift_right)
                : vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__shift_right)
            : vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__shift_right);
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__saturate 
        = (0x3fffffffffULL & ((IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__saturate_int)
                               ? (((IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__unsigned_a_int) 
                                   & (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__unsigned_b_int))
                                   ? (VL_GTS_IQQ(64, 0ULL, vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__round)
                                       ? 0ULL : ((0x3fffffffffULL 
                                                  < vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__round)
                                                  ? 0x3fffffffffULL
                                                  : vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__round))
                                   : (VL_LTS_IQQ(64, 0x1fffffffffULL, vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__round)
                                       ? 0x1fffffffffULL
                                       : (VL_GTS_IQQ(64, 0xffffffe000000000ULL, vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__round)
                                           ? 0x2000000000ULL
                                           : vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__round)))
                               : vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__round));
    vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out 
        = (0x3fffffffffULL & VL_EXTENDS_QQ(38,38, vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__saturate));
}

void Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2___024root___eval_nba(Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((0xeULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2___024root___act_comb__TOP__0(vlSelf);
    }
}

void Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2___024root___eval_triggers__act(Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2___024root* vlSelf);
void Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2___024root___timing_commit(Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2___024root___dump_triggers__act(Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2___024root* vlSelf);
#endif  // VL_DEBUG
void Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2___024root___timing_resume(Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2___024root___dump_triggers__nba(Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2___024root* vlSelf);
#endif  // VL_DEBUG

void Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2___024root___eval(Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2___024root___eval\n"); );
    // Init
    VlTriggerVec<4> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2___024root___eval_triggers__act(vlSelf);
            Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2___024root___timing_commit(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Jira_Testcase/EDA-2500/accum_20lsb_input_to_mulltiplier_dsp19x2/results_dir/.././sim/co_sim_tb/co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2___024root___timing_resume(vlSelf);
                Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Jira_Testcase/EDA-2500/accum_20lsb_input_to_mulltiplier_dsp19x2/results_dir/.././sim/co_sim_tb/co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2___024root___eval_nba(vlSelf);
        }
    }
}

void Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2___024root___timing_commit(Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2___024root___timing_commit\n"); );
    // Body
    if ((! (4ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h697651cc__0.commit("@(negedge co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2.clk)");
    }
    if ((! (8ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h6976570b__0.commit("@(posedge co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2.clk)");
    }
}

void Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2___024root___timing_resume(Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h697651cc__0.resume("@(negedge co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2.clk)");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h6976570b__0.resume("@(posedge co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2.clk)");
    }
}

#ifdef VL_DEBUG
void Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2___024root___eval_debug_assertions(Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
