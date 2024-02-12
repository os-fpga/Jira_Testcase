// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vco_sim_ram_true_reg_addr_dp_1024x32_verilator.h for the primary calling header

#include "verilated.h"

#include "Vco_sim_ram_true_reg_addr_dp_1024x32_verilator__Syms.h"
#include "Vco_sim_ram_true_reg_addr_dp_1024x32_verilator___024root.h"

VL_ATTR_COLD void Vco_sim_ram_true_reg_addr_dp_1024x32_verilator___024root___eval_initial__TOP(Vco_sim_ram_true_reg_addr_dp_1024x32_verilator___024root* vlSelf);
VlCoroutine Vco_sim_ram_true_reg_addr_dp_1024x32_verilator___024root___eval_initial__TOP__0(Vco_sim_ram_true_reg_addr_dp_1024x32_verilator___024root* vlSelf);
VlCoroutine Vco_sim_ram_true_reg_addr_dp_1024x32_verilator___024root___eval_initial__TOP__1(Vco_sim_ram_true_reg_addr_dp_1024x32_verilator___024root* vlSelf);

void Vco_sim_ram_true_reg_addr_dp_1024x32_verilator___024root___eval_initial(Vco_sim_ram_true_reg_addr_dp_1024x32_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_ram_true_reg_addr_dp_1024x32_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_ram_true_reg_addr_dp_1024x32_verilator___024root___eval_initial\n"); );
    // Body
    Vco_sim_ram_true_reg_addr_dp_1024x32_verilator___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vco_sim_ram_true_reg_addr_dp_1024x32_verilator___024root___eval_initial__TOP__0(vlSelf);
    Vco_sim_ram_true_reg_addr_dp_1024x32_verilator___024root___eval_initial__TOP__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__clk__0 
        = vlSelf->co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__clk;
}

VL_INLINE_OPT VlCoroutine Vco_sim_ram_true_reg_addr_dp_1024x32_verilator___024root___eval_initial__TOP__0(Vco_sim_ram_true_reg_addr_dp_1024x32_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_ram_true_reg_addr_dp_1024x32_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_ram_true_reg_addr_dp_1024x32_verilator___024root___eval_initial__TOP__0\n"); );
    // Body
    vlSelf->co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__clk = 0U;
    vlSelf->co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__weA = 0U;
    vlSelf->co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__weB = 0U;
    vlSelf->co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__addrA = 0U;
    vlSelf->co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__addrB = 0U;
    vlSelf->co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__dinA = 0U;
    vlSelf->co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__dinB = 0U;
    co_await vlSelf->__VtrigSched_h3990b6cd__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge co_sim_ram_true_reg_addr_dp_1024x32_verilator.clk)", 
                                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Jira_Testcase/EDA-2492/ram_true_reg_addr_dp_1024x32_verilator/./sim/co_sim_tb/co_sim_ram_true_reg_addr_dp_1024x32_verilator.v", 
                                                       173);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__weA = 1U;
    vlSelf->co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__addrA = 0x1feU;
    vlSelf->co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__dinA = 0x3fcU;
    VL_WRITEF("NEGEDGE 1: weA = %0#, weB = %0#, addrA = %0#, addrB = %0#, dinA = %0#, dinB = %0#\n",
              1,vlSelf->co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__weA,
              1,(IData)(vlSelf->co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__weB),
              10,vlSelf->co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__addrA,
              10,(IData)(vlSelf->co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__addrB),
              32,vlSelf->co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__dinA,
              32,vlSelf->co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__dinB);
    co_await vlSelf->__VtrigSched_h3990b6cd__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge co_sim_ram_true_reg_addr_dp_1024x32_verilator.clk)", 
                                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Jira_Testcase/EDA-2492/ram_true_reg_addr_dp_1024x32_verilator/./sim/co_sim_tb/co_sim_ram_true_reg_addr_dp_1024x32_verilator.v", 
                                                       176);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF("NEGEDGE 2: addrA = %0#, doutA = %0# | addrB = %0#, doutB = %0#\n\n\n",
              10,vlSelf->co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__addrA,
              32,vlSelf->co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__golden__DOT__ram
              [vlSelf->co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__golden__DOT__reg_addrA],
              10,vlSelf->co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__addrB,
              32,vlSelf->co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__golden__DOT__ram
              [vlSelf->co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__golden__DOT__reg_addrB]);
    co_await vlSelf->__VtrigSched_h3990b6cd__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge co_sim_ram_true_reg_addr_dp_1024x32_verilator.clk)", 
                                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Jira_Testcase/EDA-2492/ram_true_reg_addr_dp_1024x32_verilator/./sim/co_sim_tb/co_sim_ram_true_reg_addr_dp_1024x32_verilator.v", 
                                                       180);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__weB = 1U;
    vlSelf->co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__addrB = 0xaU;
    vlSelf->co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__dinB = 0x4ddU;
    VL_WRITEF("NEGEDGE 3: weA = %0#, weB = %0#, addrA = %0#, addrB = %0#, dinA = %0#, dinB = %0#\n",
              1,vlSelf->co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__weA,
              1,(IData)(vlSelf->co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__weB),
              10,vlSelf->co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__addrA,
              10,(IData)(vlSelf->co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__addrB),
              32,vlSelf->co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__dinA,
              32,vlSelf->co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__dinB);
    co_await vlSelf->__VtrigSched_h3990b6cd__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge co_sim_ram_true_reg_addr_dp_1024x32_verilator.clk)", 
                                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Jira_Testcase/EDA-2492/ram_true_reg_addr_dp_1024x32_verilator/./sim/co_sim_tb/co_sim_ram_true_reg_addr_dp_1024x32_verilator.v", 
                                                       183);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF("NEGEDGE 4: addrA = %0#, doutA = %0# | addrB = %0#, doutB = %0#\n\n\n",
              10,vlSelf->co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__addrA,
              32,vlSelf->co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__golden__DOT__ram
              [vlSelf->co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__golden__DOT__reg_addrA],
              10,vlSelf->co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__addrB,
              32,vlSelf->co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__golden__DOT__ram
              [vlSelf->co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__golden__DOT__reg_addrB]);
    co_await vlSelf->__VtrigSched_h3990b6cd__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge co_sim_ram_true_reg_addr_dp_1024x32_verilator.clk)", 
                                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Jira_Testcase/EDA-2492/ram_true_reg_addr_dp_1024x32_verilator/./sim/co_sim_tb/co_sim_ram_true_reg_addr_dp_1024x32_verilator.v", 
                                                       187);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__weA = 0U;
    vlSelf->co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__addrA = 0x1feU;
    vlSelf->co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__dinA = 0x84cU;
    VL_WRITEF("NEGEDGE 5: weA = %0#, weB = %0#, addrA = %0#, addrB = %0#, dinA = %0#, dinB = %0#\n",
              1,vlSelf->co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__weA,
              1,(IData)(vlSelf->co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__weB),
              10,vlSelf->co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__addrA,
              10,(IData)(vlSelf->co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__addrB),
              32,vlSelf->co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__dinA,
              32,vlSelf->co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__dinB);
    co_await vlSelf->__VtrigSched_h3990b6cd__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge co_sim_ram_true_reg_addr_dp_1024x32_verilator.clk)", 
                                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Jira_Testcase/EDA-2492/ram_true_reg_addr_dp_1024x32_verilator/./sim/co_sim_tb/co_sim_ram_true_reg_addr_dp_1024x32_verilator.v", 
                                                       190);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF("NEGEDGE 6:  addrA = %0#, doutA = %0# | addrB = %0#, doutB = %0#\n\n\n",
              10,vlSelf->co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__addrA,
              32,vlSelf->co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__golden__DOT__ram
              [vlSelf->co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__golden__DOT__reg_addrA],
              10,vlSelf->co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__addrB,
              32,vlSelf->co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__golden__DOT__ram
              [vlSelf->co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__golden__DOT__reg_addrB]);
    co_await vlSelf->__VtrigSched_h3990b6cd__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge co_sim_ram_true_reg_addr_dp_1024x32_verilator.clk)", 
                                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Jira_Testcase/EDA-2492/ram_true_reg_addr_dp_1024x32_verilator/./sim/co_sim_tb/co_sim_ram_true_reg_addr_dp_1024x32_verilator.v", 
                                                       194);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__weB = 1U;
    vlSelf->co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__addrB = 0U;
    vlSelf->co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__dinB = 0x15b3U;
    VL_WRITEF("NEGEDGE 7: weA = %0#, weB = %0#, addrA = %0#, addrB = %0#, dinA = %0#, dinB = %0#\n",
              1,vlSelf->co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__weA,
              1,(IData)(vlSelf->co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__weB),
              10,vlSelf->co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__addrA,
              10,(IData)(vlSelf->co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__addrB),
              32,vlSelf->co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__dinA,
              32,vlSelf->co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__dinB);
    co_await vlSelf->__VtrigSched_h3990b6cd__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge co_sim_ram_true_reg_addr_dp_1024x32_verilator.clk)", 
                                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Jira_Testcase/EDA-2492/ram_true_reg_addr_dp_1024x32_verilator/./sim/co_sim_tb/co_sim_ram_true_reg_addr_dp_1024x32_verilator.v", 
                                                       197);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF("NEGEDGE 8: addrA = %0#, doutA = %0# | addrB = %0#, doutB = %0#\n\n\n",
              10,vlSelf->co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__addrA,
              32,vlSelf->co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__golden__DOT__ram
              [vlSelf->co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__golden__DOT__reg_addrA],
              10,vlSelf->co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__addrB,
              32,vlSelf->co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__golden__DOT__ram
              [vlSelf->co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__golden__DOT__reg_addrB]);
    VL_FINISH_MT("/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Jira_Testcase/EDA-2492/ram_true_reg_addr_dp_1024x32_verilator/./sim/co_sim_tb/co_sim_ram_true_reg_addr_dp_1024x32_verilator.v", 201, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT VlCoroutine Vco_sim_ram_true_reg_addr_dp_1024x32_verilator___024root___eval_initial__TOP__1(Vco_sim_ram_true_reg_addr_dp_1024x32_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_ram_true_reg_addr_dp_1024x32_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_ram_true_reg_addr_dp_1024x32_verilator___024root___eval_initial__TOP__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Jira_Testcase/EDA-2492/ram_true_reg_addr_dp_1024x32_verilator/./sim/co_sim_tb/co_sim_ram_true_reg_addr_dp_1024x32_verilator.v", 
                                           168);
        vlSelf->co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__clk 
            = (1U & (~ (IData)(vlSelf->co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__clk)));
    }
}

void Vco_sim_ram_true_reg_addr_dp_1024x32_verilator___024root___eval_act(Vco_sim_ram_true_reg_addr_dp_1024x32_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_ram_true_reg_addr_dp_1024x32_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_ram_true_reg_addr_dp_1024x32_verilator___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vco_sim_ram_true_reg_addr_dp_1024x32_verilator___024root___nba_sequent__TOP__0(Vco_sim_ram_true_reg_addr_dp_1024x32_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_ram_true_reg_addr_dp_1024x32_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_ram_true_reg_addr_dp_1024x32_verilator___024root___nba_sequent__TOP__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__golden__DOT__ram__v0;
    __Vdlyvdim0__co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__golden__DOT__ram__v0 = 0;
    IData/*31:0*/ __Vdlyvval__co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__golden__DOT__ram__v0;
    __Vdlyvval__co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__golden__DOT__ram__v0 = 0;
    CData/*0:0*/ __Vdlyvset__co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__golden__DOT__ram__v0;
    __Vdlyvset__co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__golden__DOT__ram__v0 = 0;
    SData/*9:0*/ __Vdlyvdim0__co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__golden__DOT__ram__v1;
    __Vdlyvdim0__co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__golden__DOT__ram__v1 = 0;
    IData/*31:0*/ __Vdlyvval__co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__golden__DOT__ram__v1;
    __Vdlyvval__co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__golden__DOT__ram__v1 = 0;
    CData/*0:0*/ __Vdlyvset__co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__golden__DOT__ram__v1;
    __Vdlyvset__co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__golden__DOT__ram__v1 = 0;
    // Body
    __Vdlyvset__co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__golden__DOT__ram__v0 = 0U;
    __Vdlyvset__co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__golden__DOT__ram__v1 = 0U;
    if (vlSelf->co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__weA) {
        __Vdlyvval__co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__golden__DOT__ram__v0 
            = vlSelf->co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__dinA;
        __Vdlyvset__co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__golden__DOT__ram__v0 = 1U;
        __Vdlyvdim0__co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__golden__DOT__ram__v0 
            = vlSelf->co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__addrA;
    }
    if (vlSelf->co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__weB) {
        __Vdlyvval__co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__golden__DOT__ram__v1 
            = vlSelf->co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__dinB;
        __Vdlyvset__co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__golden__DOT__ram__v1 = 1U;
        __Vdlyvdim0__co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__golden__DOT__ram__v1 
            = vlSelf->co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__addrB;
    }
    vlSelf->co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__golden__DOT__reg_addrA 
        = vlSelf->co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__addrA;
    vlSelf->co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__golden__DOT__reg_addrB 
        = vlSelf->co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__addrB;
    if (__Vdlyvset__co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__golden__DOT__ram__v0) {
        vlSelf->co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__golden__DOT__ram[__Vdlyvdim0__co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__golden__DOT__ram__v0] 
            = __Vdlyvval__co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__golden__DOT__ram__v0;
    }
    if (__Vdlyvset__co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__golden__DOT__ram__v1) {
        vlSelf->co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__golden__DOT__ram[__Vdlyvdim0__co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__golden__DOT__ram__v1] 
            = __Vdlyvval__co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__golden__DOT__ram__v1;
    }
}

void Vco_sim_ram_true_reg_addr_dp_1024x32_verilator___024root___eval_nba(Vco_sim_ram_true_reg_addr_dp_1024x32_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_ram_true_reg_addr_dp_1024x32_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_ram_true_reg_addr_dp_1024x32_verilator___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_ram_true_reg_addr_dp_1024x32_verilator___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
}

void Vco_sim_ram_true_reg_addr_dp_1024x32_verilator___024root___eval_triggers__act(Vco_sim_ram_true_reg_addr_dp_1024x32_verilator___024root* vlSelf);
void Vco_sim_ram_true_reg_addr_dp_1024x32_verilator___024root___timing_commit(Vco_sim_ram_true_reg_addr_dp_1024x32_verilator___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vco_sim_ram_true_reg_addr_dp_1024x32_verilator___024root___dump_triggers__act(Vco_sim_ram_true_reg_addr_dp_1024x32_verilator___024root* vlSelf);
#endif  // VL_DEBUG
void Vco_sim_ram_true_reg_addr_dp_1024x32_verilator___024root___timing_resume(Vco_sim_ram_true_reg_addr_dp_1024x32_verilator___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vco_sim_ram_true_reg_addr_dp_1024x32_verilator___024root___dump_triggers__nba(Vco_sim_ram_true_reg_addr_dp_1024x32_verilator___024root* vlSelf);
#endif  // VL_DEBUG

void Vco_sim_ram_true_reg_addr_dp_1024x32_verilator___024root___eval(Vco_sim_ram_true_reg_addr_dp_1024x32_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_ram_true_reg_addr_dp_1024x32_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_ram_true_reg_addr_dp_1024x32_verilator___024root___eval\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
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
            Vco_sim_ram_true_reg_addr_dp_1024x32_verilator___024root___eval_triggers__act(vlSelf);
            Vco_sim_ram_true_reg_addr_dp_1024x32_verilator___024root___timing_commit(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vco_sim_ram_true_reg_addr_dp_1024x32_verilator___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Jira_Testcase/EDA-2492/ram_true_reg_addr_dp_1024x32_verilator/./sim/co_sim_tb/co_sim_ram_true_reg_addr_dp_1024x32_verilator.v", 2, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vco_sim_ram_true_reg_addr_dp_1024x32_verilator___024root___timing_resume(vlSelf);
                Vco_sim_ram_true_reg_addr_dp_1024x32_verilator___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vco_sim_ram_true_reg_addr_dp_1024x32_verilator___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Jira_Testcase/EDA-2492/ram_true_reg_addr_dp_1024x32_verilator/./sim/co_sim_tb/co_sim_ram_true_reg_addr_dp_1024x32_verilator.v", 2, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vco_sim_ram_true_reg_addr_dp_1024x32_verilator___024root___eval_nba(vlSelf);
        }
    }
}

void Vco_sim_ram_true_reg_addr_dp_1024x32_verilator___024root___timing_commit(Vco_sim_ram_true_reg_addr_dp_1024x32_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_ram_true_reg_addr_dp_1024x32_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_ram_true_reg_addr_dp_1024x32_verilator___024root___timing_commit\n"); );
    // Body
    if ((! (2ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h3990b6cd__0.commit("@(negedge co_sim_ram_true_reg_addr_dp_1024x32_verilator.clk)");
    }
}

void Vco_sim_ram_true_reg_addr_dp_1024x32_verilator___024root___timing_resume(Vco_sim_ram_true_reg_addr_dp_1024x32_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_ram_true_reg_addr_dp_1024x32_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_ram_true_reg_addr_dp_1024x32_verilator___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h3990b6cd__0.resume("@(negedge co_sim_ram_true_reg_addr_dp_1024x32_verilator.clk)");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

#ifdef VL_DEBUG
void Vco_sim_ram_true_reg_addr_dp_1024x32_verilator___024root___eval_debug_assertions(Vco_sim_ram_true_reg_addr_dp_1024x32_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_ram_true_reg_addr_dp_1024x32_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_ram_true_reg_addr_dp_1024x32_verilator___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
