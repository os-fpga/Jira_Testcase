// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vco_sim_sdp_nsplit_ram_1024x36_R4W4.h for the primary calling header

#include "verilated.h"

#include "Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root.h"

VL_INLINE_OPT VlCoroutine Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___eval_initial__TOP__1(Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_sdp_nsplit_ram_1024x36_R4W4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___eval_initial__TOP__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0xaU, "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Compiler_Validationsdperror/RTL_testcases/mem_instantiation/sdp_nsplit_ram_1024x36_R4W4/sim/co_sim_tb/co_sim_sdp_nsplit_ram_1024x36_R4W4.v", 16);
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__clk 
            = (1U & (~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__clk)));
    }
}

VL_INLINE_OPT void Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___act_sequent__TOP__0(Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_sdp_nsplit_ram_1024x36_R4W4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___act_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ __Vdly__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lcen_a;
    CData/*0:0*/ __Vdly__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwen_a;
    CData/*0:0*/ __Vdly__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lcen_b;
    CData/*0:0*/ __Vdly__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwen_b;
    CData/*0:0*/ __Vdly__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lcen_a;
    CData/*0:0*/ __Vdly__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwen_a;
    CData/*0:0*/ __Vdly__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lcen_b;
    CData/*0:0*/ __Vdly__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwen_b;
    CData/*0:0*/ __Vdly__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lcen_a;
    CData/*0:0*/ __Vdly__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwen_a;
    CData/*0:0*/ __Vdly__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lcen_b;
    CData/*0:0*/ __Vdly__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwen_b;
    CData/*0:0*/ __Vdly__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lcen_a;
    CData/*0:0*/ __Vdly__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwen_a;
    CData/*0:0*/ __Vdly__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lcen_b;
    CData/*0:0*/ __Vdly__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwen_b;
    // Body
    __Vdly__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwen_a 
        = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwen_a;
    __Vdly__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lcen_a 
        = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lcen_a;
    __Vdly__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwen_b 
        = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwen_b;
    __Vdly__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lcen_b 
        = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lcen_b;
    __Vdly__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwen_a 
        = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwen_a;
    __Vdly__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lcen_a 
        = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lcen_a;
    __Vdly__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwen_b 
        = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwen_b;
    __Vdly__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lcen_b 
        = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lcen_b;
    __Vdly__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwen_a 
        = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwen_a;
    __Vdly__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lcen_a 
        = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lcen_a;
    __Vdly__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwen_b 
        = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwen_b;
    __Vdly__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lcen_b 
        = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lcen_b;
    __Vdly__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwen_a 
        = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwen_a;
    __Vdly__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lcen_a 
        = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lcen_a;
    __Vdly__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwen_b 
        = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwen_b;
    __Vdly__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lcen_b 
        = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lcen_b;
}

VL_INLINE_OPT void Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___act_comb__TOP__0(Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_sdp_nsplit_ram_1024x36_R4W4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___act_comb__TOP__0\n"); );
    // Body
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT____Vcellinp__inst1__WDATA_B1_i 
        = ((0x30000U & ((IData)((vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__din 
                                 >> 0x22U)) << 0x10U)) 
           | (0xffffU & (IData)((vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__din 
                                 >> 0x10U))));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT____Vcellinp__inst1__WDATA_A1_i 
        = ((0x30000U & ((IData)((vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__din 
                                 >> 0x20U)) << 0x10U)) 
           | (0xffffU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__din)));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT____Vcellinp__inst1__WDATA_A1_i 
        = ((0x30000U & ((IData)((vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__din 
                                 >> 0x20U)) << 0x10U)) 
           | (0xffffU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__din)));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_wen_a1 
        = ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__we) 
           & (~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__wr_addr)));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_wen_a2 
        = ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__we) 
           & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__wr_addr));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_wen_b1 
        = ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__we) 
           & (~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__rd_addr)));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_wen_b2 
        = ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__we) 
           & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__rd_addr));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_wen_a1 
        = ((~ ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT____Vcellout__fifo36_ctl__fflags) 
               >> 7U)) & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__we));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_wen_a2 
        = ((~ ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT____Vcellout__fifo36_ctl__fflags) 
               >> 7U)) & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__we));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_wen_b1 
        = ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__we) 
           & (~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__rd_addr)));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_wen_b2 
        = ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__we) 
           & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__rd_addr));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__ram_addr_b 
        = ((0x3ff0U & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__rd_addr) 
                       << 3U)) | (0xfU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__addr_b_d)));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__ram_addr_a 
        = ((0x3ff0U & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__wr_addr) 
                       << 3U)) | (0xfU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__addr_a_d)));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__ram_addr_b 
        = ((0x3ff0U & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__rd_addr) 
                       << 3U)) | (0xfU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__addr_b_d)));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__ram_addr_a 
        = ((0x3ff0U & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__wr_addr) 
                       << 3U)) | (0xfU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__addr_a_d)));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__wmsk_a 
        = ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_wen_a1)
            ? 0xfff0U : 0x3ffffU);
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__wmsk_a 
        = ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_wen_a2)
            ? 0xfff0U : 0x3ffffU);
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__wmsk_b 
        = ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_wen_b1)
            ? 0xfff0U : 0x3ffffU);
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__wmsk_b 
        = ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_wen_b2)
            ? 0xfff0U : 0x3ffffU);
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__wmsk_a 
        = ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_wen_a1)
            ? 0U : 0x3ffffU);
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__wmsk_a 
        = ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_wen_a2)
            ? 0U : 0x3ffffU);
    if (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_wen_b1) {
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__wmsk_b 
            = (0xffffU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__wmsk_b);
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__wmsk_b 
            = ((0x30fffU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__wmsk_b) 
               | (((3U == (3U & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_addr_b1) 
                                 >> 2U))) ? 0U : 0xfU) 
                  << 0xcU));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__wmsk_b 
            = ((0x3f0ffU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__wmsk_b) 
               | (((2U == (3U & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_addr_b1) 
                                 >> 2U))) ? 0U : 0xfU) 
                  << 8U));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__wmsk_b 
            = ((0x3ff0fU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__wmsk_b) 
               | (((1U == (3U & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_addr_b1) 
                                 >> 2U))) ? 0U : 0xfU) 
                  << 4U));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__wmsk_b 
            = ((0x3fff0U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__wmsk_b) 
               | ((0U == (3U & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_addr_b1) 
                                >> 2U))) ? 0U : 0xfU));
    } else {
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__wmsk_b = 0x3ffffU;
    }
    if (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_wen_b2) {
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__wmsk_b 
            = (0xffffU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__wmsk_b);
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__wmsk_b 
            = ((0x30fffU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__wmsk_b) 
               | (((3U == (3U & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_addr_b2) 
                                 >> 2U))) ? 0U : 0xfU) 
                  << 0xcU));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__wmsk_b 
            = ((0x3f0ffU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__wmsk_b) 
               | (((2U == (3U & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_addr_b2) 
                                 >> 2U))) ? 0U : 0xfU) 
                  << 8U));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__wmsk_b 
            = ((0x3ff0fU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__wmsk_b) 
               | (((1U == (3U & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_addr_b2) 
                                 >> 2U))) ? 0U : 0xfU) 
                  << 4U));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__wmsk_b 
            = ((0x3fff0U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__wmsk_b) 
               | ((0U == (3U & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_addr_b2) 
                                >> 2U))) ? 0U : 0xfU));
    } else {
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__wmsk_b = 0x3ffffU;
    }
}

VL_INLINE_OPT void Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___act_sequent__TOP__1(Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_sdp_nsplit_ram_1024x36_R4W4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___act_sequent__TOP__1\n"); );
    // Body
    if ((1U & ((~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwen_a)) 
               & (~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lcen_a))))) {
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a] 
            = ((0x3fffeU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a]) 
               | (1U & ((1U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwmsk_a)
                         ? vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                        [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a]
                         : vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwdata_a)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwen_a = 1U;
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a] 
            = ((0x3fffdU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a]) 
               | (2U & (((2U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwmsk_a)
                          ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                             [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a] 
                             >> 1U) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwdata_a 
                                       >> 1U)) << 1U)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a] 
            = ((0x3fffbU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a]) 
               | (4U & (((4U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwmsk_a)
                          ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                             [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a] 
                             >> 2U) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwdata_a 
                                       >> 2U)) << 2U)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a] 
            = ((0x3fff7U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a]) 
               | (8U & (((8U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwmsk_a)
                          ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                             [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a] 
                             >> 3U) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwdata_a 
                                       >> 3U)) << 3U)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a] 
            = ((0x3ffefU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a]) 
               | (0x10U & (((0x10U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwmsk_a)
                             ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a] 
                                >> 4U) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwdata_a 
                                          >> 4U)) << 4U)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a] 
            = ((0x3ffdfU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a]) 
               | (0x20U & (((0x20U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwmsk_a)
                             ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a] 
                                >> 5U) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwdata_a 
                                          >> 5U)) << 5U)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a] 
            = ((0x3ffbfU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a]) 
               | (0x40U & (((0x40U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwmsk_a)
                             ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a] 
                                >> 6U) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwdata_a 
                                          >> 6U)) << 6U)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a] 
            = ((0x3ff7fU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a]) 
               | (0x80U & (((0x80U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwmsk_a)
                             ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a] 
                                >> 7U) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwdata_a 
                                          >> 7U)) << 7U)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a] 
            = ((0x3feffU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a]) 
               | (0x100U & (((0x100U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwmsk_a)
                              ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                                 [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a] 
                                 >> 8U) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwdata_a 
                                           >> 8U)) 
                            << 8U)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a] 
            = ((0x3fdffU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a]) 
               | (0x200U & (((0x200U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwmsk_a)
                              ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                                 [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a] 
                                 >> 9U) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwdata_a 
                                           >> 9U)) 
                            << 9U)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a] 
            = ((0x3fbffU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a]) 
               | (0x400U & (((0x400U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwmsk_a)
                              ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                                 [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a] 
                                 >> 0xaU) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwdata_a 
                                             >> 0xaU)) 
                            << 0xaU)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a] 
            = ((0x3f7ffU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a]) 
               | (0x800U & (((0x800U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwmsk_a)
                              ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                                 [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a] 
                                 >> 0xbU) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwdata_a 
                                             >> 0xbU)) 
                            << 0xbU)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a] 
            = ((0x3efffU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a]) 
               | (0x1000U & (((0x1000U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwmsk_a)
                               ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                                  [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a] 
                                  >> 0xcU) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwdata_a 
                                              >> 0xcU)) 
                             << 0xcU)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a] 
            = ((0x3dfffU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a]) 
               | (0x2000U & (((0x2000U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwmsk_a)
                               ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                                  [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a] 
                                  >> 0xdU) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwdata_a 
                                              >> 0xdU)) 
                             << 0xdU)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a] 
            = ((0x3bfffU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a]) 
               | (0x4000U & (((0x4000U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwmsk_a)
                               ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                                  [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a] 
                                  >> 0xeU) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwdata_a 
                                              >> 0xeU)) 
                             << 0xeU)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a] 
            = ((0x37fffU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a]) 
               | (0x8000U & (((0x8000U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwmsk_a)
                               ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                                  [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a] 
                                  >> 0xfU) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwdata_a 
                                              >> 0xfU)) 
                             << 0xfU)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a] 
            = ((0x2ffffU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a]) 
               | (0x10000U & (((0x10000U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwmsk_a)
                                ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                                   [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a] 
                                   >> 0x10U) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwdata_a 
                                                >> 0x10U)) 
                              << 0x10U)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a] 
            = ((0x1ffffU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a]) 
               | (0x20000U & (((0x20000U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwmsk_a)
                                ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                                   [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a] 
                                   >> 0x11U) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwdata_a 
                                                >> 0x11U)) 
                              << 0x11U)));
    }
    if ((1U & (~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lcen_a)))) {
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__ram_rdata_a 
            = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
            [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a];
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lcen_a = 1U;
    }
}

VL_INLINE_OPT void Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___act_sequent__TOP__2(Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_sdp_nsplit_ram_1024x36_R4W4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___act_sequent__TOP__2\n"); );
    // Body
    if ((1U & ((~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwen_b)) 
               & (~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lcen_b))))) {
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b] 
            = ((0x3fffeU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b]) 
               | (1U & ((1U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwmsk_b)
                         ? vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                        [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b]
                         : vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwdata_b)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwen_b = 1U;
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b] 
            = ((0x3fffdU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b]) 
               | (2U & (((2U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwmsk_b)
                          ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                             [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b] 
                             >> 1U) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwdata_b 
                                       >> 1U)) << 1U)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b] 
            = ((0x3fffbU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b]) 
               | (4U & (((4U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwmsk_b)
                          ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                             [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b] 
                             >> 2U) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwdata_b 
                                       >> 2U)) << 2U)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b] 
            = ((0x3fff7U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b]) 
               | (8U & (((8U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwmsk_b)
                          ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                             [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b] 
                             >> 3U) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwdata_b 
                                       >> 3U)) << 3U)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b] 
            = ((0x3ffefU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b]) 
               | (0x10U & (((0x10U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwmsk_b)
                             ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b] 
                                >> 4U) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwdata_b 
                                          >> 4U)) << 4U)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b] 
            = ((0x3ffdfU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b]) 
               | (0x20U & (((0x20U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwmsk_b)
                             ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b] 
                                >> 5U) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwdata_b 
                                          >> 5U)) << 5U)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b] 
            = ((0x3ffbfU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b]) 
               | (0x40U & (((0x40U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwmsk_b)
                             ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b] 
                                >> 6U) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwdata_b 
                                          >> 6U)) << 6U)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b] 
            = ((0x3ff7fU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b]) 
               | (0x80U & (((0x80U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwmsk_b)
                             ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b] 
                                >> 7U) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwdata_b 
                                          >> 7U)) << 7U)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b] 
            = ((0x3feffU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b]) 
               | (0x100U & (((0x100U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwmsk_b)
                              ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                                 [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b] 
                                 >> 8U) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwdata_b 
                                           >> 8U)) 
                            << 8U)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b] 
            = ((0x3fdffU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b]) 
               | (0x200U & (((0x200U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwmsk_b)
                              ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                                 [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b] 
                                 >> 9U) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwdata_b 
                                           >> 9U)) 
                            << 9U)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b] 
            = ((0x3fbffU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b]) 
               | (0x400U & (((0x400U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwmsk_b)
                              ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                                 [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b] 
                                 >> 0xaU) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwdata_b 
                                             >> 0xaU)) 
                            << 0xaU)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b] 
            = ((0x3f7ffU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b]) 
               | (0x800U & (((0x800U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwmsk_b)
                              ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                                 [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b] 
                                 >> 0xbU) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwdata_b 
                                             >> 0xbU)) 
                            << 0xbU)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b] 
            = ((0x3efffU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b]) 
               | (0x1000U & (((0x1000U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwmsk_b)
                               ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                                  [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b] 
                                  >> 0xcU) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwdata_b 
                                              >> 0xcU)) 
                             << 0xcU)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b] 
            = ((0x3dfffU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b]) 
               | (0x2000U & (((0x2000U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwmsk_b)
                               ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                                  [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b] 
                                  >> 0xdU) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwdata_b 
                                              >> 0xdU)) 
                             << 0xdU)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b] 
            = ((0x3bfffU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b]) 
               | (0x4000U & (((0x4000U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwmsk_b)
                               ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                                  [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b] 
                                  >> 0xeU) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwdata_b 
                                              >> 0xeU)) 
                             << 0xeU)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b] 
            = ((0x37fffU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b]) 
               | (0x8000U & (((0x8000U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwmsk_b)
                               ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                                  [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b] 
                                  >> 0xfU) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwdata_b 
                                              >> 0xfU)) 
                             << 0xfU)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b] 
            = ((0x2ffffU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b]) 
               | (0x10000U & (((0x10000U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwmsk_b)
                                ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                                   [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b] 
                                   >> 0x10U) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwdata_b 
                                                >> 0x10U)) 
                              << 0x10U)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b] 
            = ((0x1ffffU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b]) 
               | (0x20000U & (((0x20000U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwmsk_b)
                                ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                                   [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b] 
                                   >> 0x11U) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwdata_b 
                                                >> 0x11U)) 
                              << 0x11U)));
    }
    if ((1U & (~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lcen_b)))) {
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__ram_rdata_b 
            = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
            [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b];
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lcen_b = 1U;
    }
}

VL_INLINE_OPT void Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___act_sequent__TOP__3(Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_sdp_nsplit_ram_1024x36_R4W4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___act_sequent__TOP__3\n"); );
    // Body
    if ((1U & ((~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwen_a)) 
               & (~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lcen_a))))) {
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a] 
            = ((0x3fffeU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a]) 
               | (1U & ((1U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwmsk_a)
                         ? vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                        [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a]
                         : vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwdata_a)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwen_a = 1U;
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a] 
            = ((0x3fffdU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a]) 
               | (2U & (((2U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwmsk_a)
                          ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                             [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a] 
                             >> 1U) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwdata_a 
                                       >> 1U)) << 1U)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a] 
            = ((0x3fffbU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a]) 
               | (4U & (((4U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwmsk_a)
                          ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                             [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a] 
                             >> 2U) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwdata_a 
                                       >> 2U)) << 2U)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a] 
            = ((0x3fff7U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a]) 
               | (8U & (((8U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwmsk_a)
                          ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                             [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a] 
                             >> 3U) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwdata_a 
                                       >> 3U)) << 3U)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a] 
            = ((0x3ffefU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a]) 
               | (0x10U & (((0x10U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwmsk_a)
                             ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a] 
                                >> 4U) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwdata_a 
                                          >> 4U)) << 4U)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a] 
            = ((0x3ffdfU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a]) 
               | (0x20U & (((0x20U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwmsk_a)
                             ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a] 
                                >> 5U) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwdata_a 
                                          >> 5U)) << 5U)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a] 
            = ((0x3ffbfU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a]) 
               | (0x40U & (((0x40U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwmsk_a)
                             ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a] 
                                >> 6U) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwdata_a 
                                          >> 6U)) << 6U)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a] 
            = ((0x3ff7fU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a]) 
               | (0x80U & (((0x80U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwmsk_a)
                             ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a] 
                                >> 7U) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwdata_a 
                                          >> 7U)) << 7U)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a] 
            = ((0x3feffU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a]) 
               | (0x100U & (((0x100U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwmsk_a)
                              ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                                 [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a] 
                                 >> 8U) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwdata_a 
                                           >> 8U)) 
                            << 8U)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a] 
            = ((0x3fdffU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a]) 
               | (0x200U & (((0x200U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwmsk_a)
                              ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                                 [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a] 
                                 >> 9U) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwdata_a 
                                           >> 9U)) 
                            << 9U)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a] 
            = ((0x3fbffU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a]) 
               | (0x400U & (((0x400U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwmsk_a)
                              ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                                 [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a] 
                                 >> 0xaU) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwdata_a 
                                             >> 0xaU)) 
                            << 0xaU)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a] 
            = ((0x3f7ffU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a]) 
               | (0x800U & (((0x800U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwmsk_a)
                              ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                                 [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a] 
                                 >> 0xbU) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwdata_a 
                                             >> 0xbU)) 
                            << 0xbU)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a] 
            = ((0x3efffU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a]) 
               | (0x1000U & (((0x1000U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwmsk_a)
                               ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                                  [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a] 
                                  >> 0xcU) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwdata_a 
                                              >> 0xcU)) 
                             << 0xcU)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a] 
            = ((0x3dfffU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a]) 
               | (0x2000U & (((0x2000U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwmsk_a)
                               ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                                  [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a] 
                                  >> 0xdU) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwdata_a 
                                              >> 0xdU)) 
                             << 0xdU)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a] 
            = ((0x3bfffU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a]) 
               | (0x4000U & (((0x4000U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwmsk_a)
                               ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                                  [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a] 
                                  >> 0xeU) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwdata_a 
                                              >> 0xeU)) 
                             << 0xeU)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a] 
            = ((0x37fffU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a]) 
               | (0x8000U & (((0x8000U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwmsk_a)
                               ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                                  [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a] 
                                  >> 0xfU) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwdata_a 
                                              >> 0xfU)) 
                             << 0xfU)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a] 
            = ((0x2ffffU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a]) 
               | (0x10000U & (((0x10000U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwmsk_a)
                                ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                                   [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a] 
                                   >> 0x10U) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwdata_a 
                                                >> 0x10U)) 
                              << 0x10U)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a] 
            = ((0x1ffffU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a]) 
               | (0x20000U & (((0x20000U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwmsk_a)
                                ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                                   [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a] 
                                   >> 0x11U) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwdata_a 
                                                >> 0x11U)) 
                              << 0x11U)));
    }
    if ((1U & (~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lcen_a)))) {
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__ram_rdata_a 
            = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
            [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a];
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lcen_a = 1U;
    }
}

VL_INLINE_OPT void Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___act_sequent__TOP__4(Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_sdp_nsplit_ram_1024x36_R4W4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___act_sequent__TOP__4\n"); );
    // Body
    if ((1U & ((~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwen_b)) 
               & (~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lcen_b))))) {
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b] 
            = ((0x3fffeU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b]) 
               | (1U & ((1U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwmsk_b)
                         ? vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                        [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b]
                         : vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwdata_b)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwen_b = 1U;
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b] 
            = ((0x3fffdU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b]) 
               | (2U & (((2U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwmsk_b)
                          ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                             [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b] 
                             >> 1U) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwdata_b 
                                       >> 1U)) << 1U)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b] 
            = ((0x3fffbU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b]) 
               | (4U & (((4U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwmsk_b)
                          ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                             [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b] 
                             >> 2U) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwdata_b 
                                       >> 2U)) << 2U)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b] 
            = ((0x3fff7U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b]) 
               | (8U & (((8U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwmsk_b)
                          ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                             [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b] 
                             >> 3U) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwdata_b 
                                       >> 3U)) << 3U)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b] 
            = ((0x3ffefU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b]) 
               | (0x10U & (((0x10U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwmsk_b)
                             ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b] 
                                >> 4U) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwdata_b 
                                          >> 4U)) << 4U)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b] 
            = ((0x3ffdfU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b]) 
               | (0x20U & (((0x20U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwmsk_b)
                             ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b] 
                                >> 5U) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwdata_b 
                                          >> 5U)) << 5U)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b] 
            = ((0x3ffbfU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b]) 
               | (0x40U & (((0x40U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwmsk_b)
                             ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b] 
                                >> 6U) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwdata_b 
                                          >> 6U)) << 6U)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b] 
            = ((0x3ff7fU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b]) 
               | (0x80U & (((0x80U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwmsk_b)
                             ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b] 
                                >> 7U) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwdata_b 
                                          >> 7U)) << 7U)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b] 
            = ((0x3feffU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b]) 
               | (0x100U & (((0x100U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwmsk_b)
                              ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                                 [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b] 
                                 >> 8U) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwdata_b 
                                           >> 8U)) 
                            << 8U)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b] 
            = ((0x3fdffU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b]) 
               | (0x200U & (((0x200U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwmsk_b)
                              ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                                 [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b] 
                                 >> 9U) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwdata_b 
                                           >> 9U)) 
                            << 9U)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b] 
            = ((0x3fbffU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b]) 
               | (0x400U & (((0x400U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwmsk_b)
                              ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                                 [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b] 
                                 >> 0xaU) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwdata_b 
                                             >> 0xaU)) 
                            << 0xaU)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b] 
            = ((0x3f7ffU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b]) 
               | (0x800U & (((0x800U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwmsk_b)
                              ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                                 [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b] 
                                 >> 0xbU) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwdata_b 
                                             >> 0xbU)) 
                            << 0xbU)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b] 
            = ((0x3efffU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b]) 
               | (0x1000U & (((0x1000U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwmsk_b)
                               ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                                  [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b] 
                                  >> 0xcU) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwdata_b 
                                              >> 0xcU)) 
                             << 0xcU)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b] 
            = ((0x3dfffU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b]) 
               | (0x2000U & (((0x2000U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwmsk_b)
                               ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                                  [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b] 
                                  >> 0xdU) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwdata_b 
                                              >> 0xdU)) 
                             << 0xdU)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b] 
            = ((0x3bfffU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b]) 
               | (0x4000U & (((0x4000U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwmsk_b)
                               ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                                  [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b] 
                                  >> 0xeU) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwdata_b 
                                              >> 0xeU)) 
                             << 0xeU)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b] 
            = ((0x37fffU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b]) 
               | (0x8000U & (((0x8000U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwmsk_b)
                               ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                                  [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b] 
                                  >> 0xfU) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwdata_b 
                                              >> 0xfU)) 
                             << 0xfU)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b] 
            = ((0x2ffffU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b]) 
               | (0x10000U & (((0x10000U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwmsk_b)
                                ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                                   [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b] 
                                   >> 0x10U) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwdata_b 
                                                >> 0x10U)) 
                              << 0x10U)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b] 
            = ((0x1ffffU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b]) 
               | (0x20000U & (((0x20000U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwmsk_b)
                                ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                                   [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b] 
                                   >> 0x11U) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwdata_b 
                                                >> 0x11U)) 
                              << 0x11U)));
    }
    if ((1U & (~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lcen_b)))) {
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__ram_rdata_b 
            = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
            [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b];
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lcen_b = 1U;
    }
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__dout_net 
        = (((QData)((IData)((3U & (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__ram_rdata_b 
                                   >> 0x10U)))) << 0x22U) 
           | (((QData)((IData)((3U & (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT____Vcellout__inst1__RDATA_A1_o 
                                      >> 0x10U)))) 
               << 0x20U) | (QData)((IData)(((vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__ram_rdata_b 
                                             << 0x10U) 
                                            | (0xffffU 
                                               & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT____Vcellout__inst1__RDATA_A1_o))))));
}

VL_INLINE_OPT void Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___act_sequent__TOP__5(Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_sdp_nsplit_ram_1024x36_R4W4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___act_sequent__TOP__5\n"); );
    // Body
    if ((1U & ((~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwen_b)) 
               & (~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lcen_b))))) {
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b] 
            = ((0x3fffeU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b]) 
               | (1U & ((1U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwmsk_b)
                         ? vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                        [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b]
                         : vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwdata_b)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwen_b = 1U;
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b] 
            = ((0x3fffdU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b]) 
               | (2U & (((2U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwmsk_b)
                          ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                             [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b] 
                             >> 1U) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwdata_b 
                                       >> 1U)) << 1U)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b] 
            = ((0x3fffbU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b]) 
               | (4U & (((4U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwmsk_b)
                          ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                             [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b] 
                             >> 2U) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwdata_b 
                                       >> 2U)) << 2U)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b] 
            = ((0x3fff7U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b]) 
               | (8U & (((8U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwmsk_b)
                          ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                             [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b] 
                             >> 3U) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwdata_b 
                                       >> 3U)) << 3U)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b] 
            = ((0x3ffefU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b]) 
               | (0x10U & (((0x10U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwmsk_b)
                             ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b] 
                                >> 4U) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwdata_b 
                                          >> 4U)) << 4U)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b] 
            = ((0x3ffdfU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b]) 
               | (0x20U & (((0x20U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwmsk_b)
                             ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b] 
                                >> 5U) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwdata_b 
                                          >> 5U)) << 5U)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b] 
            = ((0x3ffbfU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b]) 
               | (0x40U & (((0x40U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwmsk_b)
                             ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b] 
                                >> 6U) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwdata_b 
                                          >> 6U)) << 6U)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b] 
            = ((0x3ff7fU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b]) 
               | (0x80U & (((0x80U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwmsk_b)
                             ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b] 
                                >> 7U) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwdata_b 
                                          >> 7U)) << 7U)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b] 
            = ((0x3feffU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b]) 
               | (0x100U & (((0x100U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwmsk_b)
                              ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                                 [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b] 
                                 >> 8U) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwdata_b 
                                           >> 8U)) 
                            << 8U)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b] 
            = ((0x3fdffU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b]) 
               | (0x200U & (((0x200U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwmsk_b)
                              ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                                 [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b] 
                                 >> 9U) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwdata_b 
                                           >> 9U)) 
                            << 9U)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b] 
            = ((0x3fbffU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b]) 
               | (0x400U & (((0x400U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwmsk_b)
                              ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                                 [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b] 
                                 >> 0xaU) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwdata_b 
                                             >> 0xaU)) 
                            << 0xaU)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b] 
            = ((0x3f7ffU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b]) 
               | (0x800U & (((0x800U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwmsk_b)
                              ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                                 [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b] 
                                 >> 0xbU) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwdata_b 
                                             >> 0xbU)) 
                            << 0xbU)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b] 
            = ((0x3efffU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b]) 
               | (0x1000U & (((0x1000U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwmsk_b)
                               ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                                  [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b] 
                                  >> 0xcU) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwdata_b 
                                              >> 0xcU)) 
                             << 0xcU)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b] 
            = ((0x3dfffU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b]) 
               | (0x2000U & (((0x2000U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwmsk_b)
                               ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                                  [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b] 
                                  >> 0xdU) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwdata_b 
                                              >> 0xdU)) 
                             << 0xdU)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b] 
            = ((0x3bfffU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b]) 
               | (0x4000U & (((0x4000U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwmsk_b)
                               ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                                  [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b] 
                                  >> 0xeU) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwdata_b 
                                              >> 0xeU)) 
                             << 0xeU)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b] 
            = ((0x37fffU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b]) 
               | (0x8000U & (((0x8000U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwmsk_b)
                               ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                                  [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b] 
                                  >> 0xfU) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwdata_b 
                                              >> 0xfU)) 
                             << 0xfU)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b] 
            = ((0x2ffffU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b]) 
               | (0x10000U & (((0x10000U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwmsk_b)
                                ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                                   [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b] 
                                   >> 0x10U) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwdata_b 
                                                >> 0x10U)) 
                              << 0x10U)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b] 
            = ((0x1ffffU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b]) 
               | (0x20000U & (((0x20000U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwmsk_b)
                                ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                                   [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b] 
                                   >> 0x11U) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwdata_b 
                                                >> 0x11U)) 
                              << 0x11U)));
    }
    if ((1U & (~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lcen_b)))) {
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__ram_rdata_b 
            = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
            [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b];
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lcen_b = 1U;
    }
}

VL_INLINE_OPT void Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___act_sequent__TOP__6(Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_sdp_nsplit_ram_1024x36_R4W4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___act_sequent__TOP__6\n"); );
    // Body
    if ((1U & ((~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwen_a)) 
               & (~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lcen_a))))) {
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a] 
            = ((0x3fffeU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a]) 
               | (1U & ((1U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwmsk_a)
                         ? vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                        [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a]
                         : vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwdata_a)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwen_a = 1U;
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a] 
            = ((0x3fffdU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a]) 
               | (2U & (((2U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwmsk_a)
                          ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                             [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a] 
                             >> 1U) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwdata_a 
                                       >> 1U)) << 1U)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a] 
            = ((0x3fffbU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a]) 
               | (4U & (((4U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwmsk_a)
                          ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                             [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a] 
                             >> 2U) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwdata_a 
                                       >> 2U)) << 2U)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a] 
            = ((0x3fff7U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a]) 
               | (8U & (((8U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwmsk_a)
                          ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                             [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a] 
                             >> 3U) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwdata_a 
                                       >> 3U)) << 3U)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a] 
            = ((0x3ffefU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a]) 
               | (0x10U & (((0x10U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwmsk_a)
                             ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a] 
                                >> 4U) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwdata_a 
                                          >> 4U)) << 4U)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a] 
            = ((0x3ffdfU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a]) 
               | (0x20U & (((0x20U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwmsk_a)
                             ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a] 
                                >> 5U) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwdata_a 
                                          >> 5U)) << 5U)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a] 
            = ((0x3ffbfU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a]) 
               | (0x40U & (((0x40U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwmsk_a)
                             ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a] 
                                >> 6U) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwdata_a 
                                          >> 6U)) << 6U)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a] 
            = ((0x3ff7fU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a]) 
               | (0x80U & (((0x80U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwmsk_a)
                             ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a] 
                                >> 7U) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwdata_a 
                                          >> 7U)) << 7U)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a] 
            = ((0x3feffU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a]) 
               | (0x100U & (((0x100U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwmsk_a)
                              ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                                 [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a] 
                                 >> 8U) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwdata_a 
                                           >> 8U)) 
                            << 8U)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a] 
            = ((0x3fdffU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a]) 
               | (0x200U & (((0x200U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwmsk_a)
                              ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                                 [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a] 
                                 >> 9U) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwdata_a 
                                           >> 9U)) 
                            << 9U)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a] 
            = ((0x3fbffU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a]) 
               | (0x400U & (((0x400U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwmsk_a)
                              ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                                 [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a] 
                                 >> 0xaU) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwdata_a 
                                             >> 0xaU)) 
                            << 0xaU)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a] 
            = ((0x3f7ffU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a]) 
               | (0x800U & (((0x800U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwmsk_a)
                              ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                                 [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a] 
                                 >> 0xbU) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwdata_a 
                                             >> 0xbU)) 
                            << 0xbU)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a] 
            = ((0x3efffU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a]) 
               | (0x1000U & (((0x1000U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwmsk_a)
                               ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                                  [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a] 
                                  >> 0xcU) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwdata_a 
                                              >> 0xcU)) 
                             << 0xcU)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a] 
            = ((0x3dfffU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a]) 
               | (0x2000U & (((0x2000U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwmsk_a)
                               ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                                  [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a] 
                                  >> 0xdU) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwdata_a 
                                              >> 0xdU)) 
                             << 0xdU)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a] 
            = ((0x3bfffU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a]) 
               | (0x4000U & (((0x4000U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwmsk_a)
                               ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                                  [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a] 
                                  >> 0xeU) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwdata_a 
                                              >> 0xeU)) 
                             << 0xeU)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a] 
            = ((0x37fffU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a]) 
               | (0x8000U & (((0x8000U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwmsk_a)
                               ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                                  [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a] 
                                  >> 0xfU) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwdata_a 
                                              >> 0xfU)) 
                             << 0xfU)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a] 
            = ((0x2ffffU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a]) 
               | (0x10000U & (((0x10000U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwmsk_a)
                                ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                                   [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a] 
                                   >> 0x10U) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwdata_a 
                                                >> 0x10U)) 
                              << 0x10U)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a] 
            = ((0x1ffffU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a]) 
               | (0x20000U & (((0x20000U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwmsk_a)
                                ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
                                   [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a] 
                                   >> 0x11U) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwdata_a 
                                                >> 0x11U)) 
                              << 0x11U)));
    }
    if ((1U & (~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lcen_a)))) {
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__ram_rdata_a 
            = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram
            [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a];
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lcen_a = 1U;
    }
}

VL_INLINE_OPT void Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___act_sequent__TOP__7(Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_sdp_nsplit_ram_1024x36_R4W4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___act_sequent__TOP__7\n"); );
    // Body
    if ((1U & ((~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwen_b)) 
               & (~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lcen_b))))) {
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b] 
            = ((0x3fffeU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b]) 
               | (1U & ((1U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwmsk_b)
                         ? vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                        [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b]
                         : vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwdata_b)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwen_b = 1U;
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b] 
            = ((0x3fffdU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b]) 
               | (2U & (((2U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwmsk_b)
                          ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                             [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b] 
                             >> 1U) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwdata_b 
                                       >> 1U)) << 1U)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b] 
            = ((0x3fffbU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b]) 
               | (4U & (((4U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwmsk_b)
                          ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                             [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b] 
                             >> 2U) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwdata_b 
                                       >> 2U)) << 2U)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b] 
            = ((0x3fff7U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b]) 
               | (8U & (((8U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwmsk_b)
                          ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                             [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b] 
                             >> 3U) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwdata_b 
                                       >> 3U)) << 3U)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b] 
            = ((0x3ffefU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b]) 
               | (0x10U & (((0x10U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwmsk_b)
                             ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b] 
                                >> 4U) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwdata_b 
                                          >> 4U)) << 4U)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b] 
            = ((0x3ffdfU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b]) 
               | (0x20U & (((0x20U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwmsk_b)
                             ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b] 
                                >> 5U) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwdata_b 
                                          >> 5U)) << 5U)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b] 
            = ((0x3ffbfU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b]) 
               | (0x40U & (((0x40U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwmsk_b)
                             ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b] 
                                >> 6U) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwdata_b 
                                          >> 6U)) << 6U)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b] 
            = ((0x3ff7fU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b]) 
               | (0x80U & (((0x80U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwmsk_b)
                             ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b] 
                                >> 7U) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwdata_b 
                                          >> 7U)) << 7U)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b] 
            = ((0x3feffU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b]) 
               | (0x100U & (((0x100U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwmsk_b)
                              ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                                 [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b] 
                                 >> 8U) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwdata_b 
                                           >> 8U)) 
                            << 8U)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b] 
            = ((0x3fdffU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b]) 
               | (0x200U & (((0x200U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwmsk_b)
                              ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                                 [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b] 
                                 >> 9U) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwdata_b 
                                           >> 9U)) 
                            << 9U)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b] 
            = ((0x3fbffU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b]) 
               | (0x400U & (((0x400U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwmsk_b)
                              ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                                 [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b] 
                                 >> 0xaU) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwdata_b 
                                             >> 0xaU)) 
                            << 0xaU)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b] 
            = ((0x3f7ffU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b]) 
               | (0x800U & (((0x800U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwmsk_b)
                              ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                                 [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b] 
                                 >> 0xbU) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwdata_b 
                                             >> 0xbU)) 
                            << 0xbU)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b] 
            = ((0x3efffU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b]) 
               | (0x1000U & (((0x1000U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwmsk_b)
                               ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                                  [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b] 
                                  >> 0xcU) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwdata_b 
                                              >> 0xcU)) 
                             << 0xcU)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b] 
            = ((0x3dfffU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b]) 
               | (0x2000U & (((0x2000U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwmsk_b)
                               ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                                  [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b] 
                                  >> 0xdU) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwdata_b 
                                              >> 0xdU)) 
                             << 0xdU)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b] 
            = ((0x3bfffU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b]) 
               | (0x4000U & (((0x4000U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwmsk_b)
                               ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                                  [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b] 
                                  >> 0xeU) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwdata_b 
                                              >> 0xeU)) 
                             << 0xeU)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b] 
            = ((0x37fffU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b]) 
               | (0x8000U & (((0x8000U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwmsk_b)
                               ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                                  [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b] 
                                  >> 0xfU) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwdata_b 
                                              >> 0xfU)) 
                             << 0xfU)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b] 
            = ((0x2ffffU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b]) 
               | (0x10000U & (((0x10000U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwmsk_b)
                                ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                                   [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b] 
                                   >> 0x10U) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwdata_b 
                                                >> 0x10U)) 
                              << 0x10U)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b] 
            = ((0x1ffffU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b]) 
               | (0x20000U & (((0x20000U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwmsk_b)
                                ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                                   [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b] 
                                   >> 0x11U) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwdata_b 
                                                >> 0x11U)) 
                              << 0x11U)));
    }
    if ((1U & (~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lcen_b)))) {
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__ram_rdata_b 
            = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
            [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b];
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lcen_b = 1U;
    }
}

VL_INLINE_OPT void Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___act_sequent__TOP__8(Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_sdp_nsplit_ram_1024x36_R4W4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___act_sequent__TOP__8\n"); );
    // Body
    if ((1U & ((~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwen_a)) 
               & (~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lcen_a))))) {
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a] 
            = ((0x3fffeU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a]) 
               | (1U & ((1U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwmsk_a)
                         ? vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                        [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a]
                         : vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwdata_a)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwen_a = 1U;
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a] 
            = ((0x3fffdU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a]) 
               | (2U & (((2U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwmsk_a)
                          ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                             [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a] 
                             >> 1U) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwdata_a 
                                       >> 1U)) << 1U)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a] 
            = ((0x3fffbU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a]) 
               | (4U & (((4U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwmsk_a)
                          ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                             [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a] 
                             >> 2U) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwdata_a 
                                       >> 2U)) << 2U)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a] 
            = ((0x3fff7U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a]) 
               | (8U & (((8U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwmsk_a)
                          ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                             [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a] 
                             >> 3U) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwdata_a 
                                       >> 3U)) << 3U)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a] 
            = ((0x3ffefU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a]) 
               | (0x10U & (((0x10U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwmsk_a)
                             ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a] 
                                >> 4U) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwdata_a 
                                          >> 4U)) << 4U)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a] 
            = ((0x3ffdfU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a]) 
               | (0x20U & (((0x20U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwmsk_a)
                             ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a] 
                                >> 5U) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwdata_a 
                                          >> 5U)) << 5U)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a] 
            = ((0x3ffbfU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a]) 
               | (0x40U & (((0x40U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwmsk_a)
                             ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a] 
                                >> 6U) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwdata_a 
                                          >> 6U)) << 6U)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a] 
            = ((0x3ff7fU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a]) 
               | (0x80U & (((0x80U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwmsk_a)
                             ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a] 
                                >> 7U) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwdata_a 
                                          >> 7U)) << 7U)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a] 
            = ((0x3feffU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a]) 
               | (0x100U & (((0x100U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwmsk_a)
                              ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                                 [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a] 
                                 >> 8U) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwdata_a 
                                           >> 8U)) 
                            << 8U)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a] 
            = ((0x3fdffU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a]) 
               | (0x200U & (((0x200U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwmsk_a)
                              ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                                 [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a] 
                                 >> 9U) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwdata_a 
                                           >> 9U)) 
                            << 9U)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a] 
            = ((0x3fbffU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a]) 
               | (0x400U & (((0x400U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwmsk_a)
                              ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                                 [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a] 
                                 >> 0xaU) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwdata_a 
                                             >> 0xaU)) 
                            << 0xaU)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a] 
            = ((0x3f7ffU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a]) 
               | (0x800U & (((0x800U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwmsk_a)
                              ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                                 [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a] 
                                 >> 0xbU) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwdata_a 
                                             >> 0xbU)) 
                            << 0xbU)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a] 
            = ((0x3efffU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a]) 
               | (0x1000U & (((0x1000U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwmsk_a)
                               ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                                  [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a] 
                                  >> 0xcU) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwdata_a 
                                              >> 0xcU)) 
                             << 0xcU)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a] 
            = ((0x3dfffU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a]) 
               | (0x2000U & (((0x2000U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwmsk_a)
                               ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                                  [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a] 
                                  >> 0xdU) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwdata_a 
                                              >> 0xdU)) 
                             << 0xdU)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a] 
            = ((0x3bfffU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a]) 
               | (0x4000U & (((0x4000U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwmsk_a)
                               ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                                  [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a] 
                                  >> 0xeU) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwdata_a 
                                              >> 0xeU)) 
                             << 0xeU)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a] 
            = ((0x37fffU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a]) 
               | (0x8000U & (((0x8000U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwmsk_a)
                               ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                                  [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a] 
                                  >> 0xfU) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwdata_a 
                                              >> 0xfU)) 
                             << 0xfU)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a] 
            = ((0x2ffffU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a]) 
               | (0x10000U & (((0x10000U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwmsk_a)
                                ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                                   [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a] 
                                   >> 0x10U) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwdata_a 
                                                >> 0x10U)) 
                              << 0x10U)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram[vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a] 
            = ((0x1ffffU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a]) 
               | (0x20000U & (((0x20000U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwmsk_a)
                                ? (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
                                   [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a] 
                                   >> 0x11U) : (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwdata_a 
                                                >> 0x11U)) 
                              << 0x11U)));
    }
    if ((1U & (~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lcen_a)))) {
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__ram_rdata_a 
            = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram
            [vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a];
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lcen_a = 1U;
    }
}

VL_INLINE_OPT void Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___act_comb__TOP__1(Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_sdp_nsplit_ram_1024x36_R4W4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___act_comb__TOP__1\n"); );
    // Body
    if ((3U == (3U & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__ram_addr_b) 
                      >> 2U)))) {
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_rdata_b1 
            = ((0x3fff0U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_rdata_b1) 
               | (0xfU & (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__ram_rdata_b 
                          >> 0xcU)));
    } else if ((2U == (3U & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__ram_addr_b) 
                             >> 2U)))) {
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_rdata_b1 
            = ((0x3fff0U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_rdata_b1) 
               | (0xfU & (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__ram_rdata_b 
                          >> 8U)));
    } else if ((1U == (3U & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__ram_addr_b) 
                             >> 2U)))) {
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_rdata_b1 
            = ((0x3fff0U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_rdata_b1) 
               | (0xfU & (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__ram_rdata_b 
                          >> 4U)));
    } else if ((0U == (3U & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__ram_addr_b) 
                             >> 2U)))) {
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_rdata_b1 
            = ((0x3fff0U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_rdata_b1) 
               | (0xfU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__ram_rdata_b));
    }
}

VL_INLINE_OPT void Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___act_comb__TOP__2(Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_sdp_nsplit_ram_1024x36_R4W4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___act_comb__TOP__2\n"); );
    // Body
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_rdata_a1 
        = (0xfU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_rdata_a1);
    if ((3U == (3U & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__ram_addr_a) 
                      >> 2U)))) {
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_rdata_a1 
            = ((0x3fff0U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_rdata_a1) 
               | (0xfU & (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__ram_rdata_a 
                          >> 0xcU)));
    } else if ((2U == (3U & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__ram_addr_a) 
                             >> 2U)))) {
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_rdata_a1 
            = ((0x3fff0U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_rdata_a1) 
               | (0xfU & (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__ram_rdata_a 
                          >> 8U)));
    } else if ((1U == (3U & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__ram_addr_a) 
                             >> 2U)))) {
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_rdata_a1 
            = ((0x3fff0U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_rdata_a1) 
               | (0xfU & (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__ram_rdata_a 
                          >> 4U)));
    } else if ((0U == (3U & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__ram_addr_a) 
                             >> 2U)))) {
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_rdata_a1 
            = ((0x3fff0U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_rdata_a1) 
               | (0xfU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__ram_rdata_a));
    }
}

VL_INLINE_OPT void Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___act_comb__TOP__3(Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_sdp_nsplit_ram_1024x36_R4W4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___act_comb__TOP__3\n"); );
    // Body
    if ((3U == (3U & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__ram_addr_b) 
                      >> 2U)))) {
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_rdata_b2 
            = ((0x3fff0U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_rdata_b2) 
               | (0xfU & (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__ram_rdata_b 
                          >> 0xcU)));
    } else if ((2U == (3U & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__ram_addr_b) 
                             >> 2U)))) {
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_rdata_b2 
            = ((0x3fff0U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_rdata_b2) 
               | (0xfU & (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__ram_rdata_b 
                          >> 8U)));
    } else if ((1U == (3U & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__ram_addr_b) 
                             >> 2U)))) {
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_rdata_b2 
            = ((0x3fff0U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_rdata_b2) 
               | (0xfU & (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__ram_rdata_b 
                          >> 4U)));
    } else if ((0U == (3U & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__ram_addr_b) 
                             >> 2U)))) {
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_rdata_b2 
            = ((0x3fff0U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_rdata_b2) 
               | (0xfU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__ram_rdata_b));
    }
}

VL_INLINE_OPT void Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___act_comb__TOP__4(Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_sdp_nsplit_ram_1024x36_R4W4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___act_comb__TOP__4\n"); );
    // Body
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_rdata_a2 
        = (0xfU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_rdata_a2);
    if ((3U == (3U & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__ram_addr_a) 
                      >> 2U)))) {
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_rdata_a2 
            = ((0x3fff0U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_rdata_a2) 
               | (0xfU & (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__ram_rdata_a 
                          >> 0xcU)));
    } else if ((2U == (3U & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__ram_addr_a) 
                             >> 2U)))) {
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_rdata_a2 
            = ((0x3fff0U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_rdata_a2) 
               | (0xfU & (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__ram_rdata_a 
                          >> 8U)));
    } else if ((1U == (3U & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__ram_addr_a) 
                             >> 2U)))) {
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_rdata_a2 
            = ((0x3fff0U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_rdata_a2) 
               | (0xfU & (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__ram_rdata_a 
                          >> 4U)));
    } else if ((0U == (3U & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__ram_addr_a) 
                             >> 2U)))) {
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_rdata_a2 
            = ((0x3fff0U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_rdata_a2) 
               | (0xfU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__ram_rdata_a));
    }
}

VL_INLINE_OPT void Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___act_comb__TOP__5(Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_sdp_nsplit_ram_1024x36_R4W4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___act_comb__TOP__5\n"); );
    // Body
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT____Vcellout__inst1__RDATA_B1_o 
        = (0xfU & ((0x10U & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__laddr_b1))
                    ? vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_rdata_b2
                    : vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_rdata_b1));
}

VL_INLINE_OPT void Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___act_comb__TOP__6(Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_sdp_nsplit_ram_1024x36_R4W4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___act_comb__TOP__6\n"); );
    // Body
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT____Vcellout__inst1__RDATA_A1_o 
        = (0xfU & ((0x10U & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__laddr_a1))
                    ? vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_rdata_a2
                    : vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_rdata_a1));
}

VL_INLINE_OPT void Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___act_comb__TOP__7(Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_sdp_nsplit_ram_1024x36_R4W4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___act_comb__TOP__7\n"); );
    // Body
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__dout 
        = (((QData)((IData)((3U & (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT____Vcellout__inst1__RDATA_B1_o 
                                   >> 0x10U)))) << 0x22U) 
           | (((QData)((IData)((3U & (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT____Vcellout__inst1__RDATA_A1_o 
                                      >> 0x10U)))) 
               << 0x20U) | (QData)((IData)(((vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT____Vcellout__inst1__RDATA_B1_o 
                                             << 0x10U) 
                                            | (0xffffU 
                                               & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT____Vcellout__inst1__RDATA_A1_o))))));
}

void Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___eval_act(Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_sdp_nsplit_ram_1024x36_R4W4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___eval_act\n"); );
    // Body
    if (vlSelf->__VpreTriggered.at(0U)) {
        Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((vlSelf->__VactTriggered.at(0U) | vlSelf->__VactTriggered.at(9U))) {
        Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___act_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if (vlSelf->__VactTriggered.at(6U)) {
        Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___act_sequent__TOP__1(vlSelf);
    }
    if (vlSelf->__VactTriggered.at(7U)) {
        Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___act_sequent__TOP__2(vlSelf);
    }
    if (vlSelf->__VactTriggered.at(8U)) {
        Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___act_sequent__TOP__3(vlSelf);
    }
    if (vlSelf->__VactTriggered.at(5U)) {
        Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___act_sequent__TOP__4(vlSelf);
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___act_sequent__TOP__5(vlSelf);
    }
    if (vlSelf->__VactTriggered.at(2U)) {
        Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___act_sequent__TOP__6(vlSelf);
    }
    if (vlSelf->__VactTriggered.at(3U)) {
        Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___act_sequent__TOP__7(vlSelf);
    }
    if (vlSelf->__VactTriggered.at(4U)) {
        Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___act_sequent__TOP__8(vlSelf);
    }
    if (((vlSelf->__VactTriggered.at(0U) | vlSelf->__VactTriggered.at(1U)) 
         | vlSelf->__VactTriggered.at(9U))) {
        Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___act_comb__TOP__1(vlSelf);
    }
    if (((vlSelf->__VactTriggered.at(0U) | vlSelf->__VactTriggered.at(2U)) 
         | vlSelf->__VactTriggered.at(9U))) {
        Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___act_comb__TOP__2(vlSelf);
    }
    if (((vlSelf->__VactTriggered.at(0U) | vlSelf->__VactTriggered.at(3U)) 
         | vlSelf->__VactTriggered.at(9U))) {
        Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___act_comb__TOP__3(vlSelf);
    }
    if (((vlSelf->__VactTriggered.at(0U) | vlSelf->__VactTriggered.at(4U)) 
         | vlSelf->__VactTriggered.at(9U))) {
        Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___act_comb__TOP__4(vlSelf);
    }
    if ((((vlSelf->__VactTriggered.at(0U) | vlSelf->__VactTriggered.at(1U)) 
          | vlSelf->__VactTriggered.at(3U)) | vlSelf->__VactTriggered.at(9U))) {
        Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___act_comb__TOP__5(vlSelf);
    }
    if ((((vlSelf->__VactTriggered.at(0U) | vlSelf->__VactTriggered.at(2U)) 
          | vlSelf->__VactTriggered.at(4U)) | vlSelf->__VactTriggered.at(9U))) {
        Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___act_comb__TOP__6(vlSelf);
    }
    if ((((((vlSelf->__VactTriggered.at(0U) | vlSelf->__VactTriggered.at(1U)) 
            | vlSelf->__VactTriggered.at(2U)) | vlSelf->__VactTriggered.at(3U)) 
          | vlSelf->__VactTriggered.at(4U)) | vlSelf->__VactTriggered.at(9U))) {
        Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___act_comb__TOP__7(vlSelf);
    }
}

VL_INLINE_OPT void Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___nba_sequent__TOP__0(Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_sdp_nsplit_ram_1024x36_R4W4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ __Vdly__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lcen_a;
    CData/*0:0*/ __Vdly__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwen_a;
    CData/*0:0*/ __Vdly__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lcen_b;
    CData/*0:0*/ __Vdly__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwen_b;
    CData/*0:0*/ __Vdly__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lcen_a;
    CData/*0:0*/ __Vdly__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwen_a;
    CData/*0:0*/ __Vdly__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lcen_b;
    CData/*0:0*/ __Vdly__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwen_b;
    CData/*0:0*/ __Vdly__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lcen_a;
    CData/*0:0*/ __Vdly__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwen_a;
    CData/*0:0*/ __Vdly__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lcen_b;
    CData/*0:0*/ __Vdly__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwen_b;
    CData/*0:0*/ __Vdly__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lcen_a;
    CData/*0:0*/ __Vdly__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwen_a;
    CData/*0:0*/ __Vdly__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lcen_b;
    CData/*0:0*/ __Vdly__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwen_b;
    // Body
    __Vdly__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwen_b 
        = (1U & (~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_wen_b1)));
    __Vdly__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwen_b 
        = (1U & (~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_wen_b2)));
    __Vdly__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lcen_b 
        = (1U & (~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_wen_b1)));
    __Vdly__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwen_b 
        = (1U & (~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_wen_b1)));
    __Vdly__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lcen_b 
        = (1U & (~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_wen_b2)));
    __Vdly__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwen_b 
        = (1U & (~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_wen_b2)));
    __Vdly__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lcen_a 
        = (1U & (~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_wen_a2)));
    __Vdly__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwen_a 
        = (1U & (~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_wen_a2)));
    __Vdly__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lcen_a 
        = (1U & (~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_wen_a2)));
    __Vdly__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwen_a 
        = (1U & (~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_wen_a2)));
    __Vdly__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lcen_a 
        = (1U & (~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_wen_a1)));
    __Vdly__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwen_a 
        = (1U & (~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_wen_a1)));
    __Vdly__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lcen_a 
        = (1U & (~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_wen_a1)));
    __Vdly__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwen_a 
        = (1U & (~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_wen_a1)));
    __Vdly__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lcen_b 
        = (1U & (~ ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__empty) 
                    | (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_wen_b1))));
    __Vdly__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lcen_b 
        = (1U & (~ ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__empty) 
                    | (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_wen_b2))));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__pushtopop1 
        = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__gcout_reg;
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__pushtopop2 
        = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__pushtopop1;
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__pushtopop1 
        = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__gcout_reg;
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__pushtopop2 
        = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__pushtopop1;
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__pushtopop1 
        = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gcout_reg;
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__pushtopop2 
        = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__pushtopop1;
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__pushtopop1 
        = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gcout_reg;
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__pushtopop2 
        = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__pushtopop1;
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__pushtopop1 
        = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gcout_reg;
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__pushtopop2 
        = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__pushtopop1;
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__pushtopop1 
        = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gcout_reg;
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__pushtopop2 
        = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__pushtopop1;
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__paf = 0U;
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__pae = 0U;
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__paf = 0U;
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__pae = 0U;
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__paf = 0U;
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__pae = 0U;
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__laddr_a1 
        = ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__wr_addr) 
           << 4U);
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__laddr_b1 
        = ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__rd_addr) 
           << 4U);
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwen_b 
        = __Vdly__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwen_b;
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwen_b 
        = __Vdly__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwen_b;
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lcen_b 
        = __Vdly__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lcen_b;
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwen_b 
        = __Vdly__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwen_b;
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lcen_b 
        = __Vdly__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lcen_b;
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwen_b 
        = __Vdly__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwen_b;
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__epo 
        = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__o2;
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__epo 
        = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__o2;
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__addr_a_d 
        = ((0x10U & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__addr_a_d)) 
           | (0xfU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_addr_a1)));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__addr_a_d 
        = ((0x10U & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__addr_a_d)) 
           | (0xfU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_addr_a2)));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__addr_b_d 
        = ((0x10U & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__addr_b_d)) 
           | (0xfU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_addr_b1)));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__addr_b_d 
        = ((0x10U & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__addr_b_d)) 
           | (0xfU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_addr_b2)));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lcen_a 
        = __Vdly__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lcen_a;
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwen_a 
        = __Vdly__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwen_a;
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lcen_a 
        = __Vdly__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lcen_a;
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwen_a 
        = __Vdly__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwen_a;
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__laddr_a1 
        = ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__wr_addr) 
           << 4U);
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__laddr_b1 
        = ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__rd_addr) 
           << 4U);
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr 
        = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr_next;
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr 
        = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr_next;
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lcen_a 
        = __Vdly__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lcen_a;
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwen_a 
        = __Vdly__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwen_a;
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwdata_b = 0U;
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lcen_a 
        = __Vdly__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lcen_a;
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwen_a 
        = __Vdly__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwen_a;
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwmsk_a 
        = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__wmsk_a;
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwmsk_a 
        = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__wmsk_a;
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__addr_a_d 
        = (0x10U & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__addr_a_d));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__addr_b_d 
        = (0x10U & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__addr_b_d));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__addr_a_d 
        = (0x10U & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__addr_a_d));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__addr_b_d 
        = (0x10U & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__addr_b_d));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwmsk_b 
        = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__wmsk_b;
    if (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_wen_a2) {
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__fmo 
            = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__p1;
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__overflow 
            = ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__full) 
               & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_wen_a2));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwdata_a 
            = (0xffffU & ((0xf000U & (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT____Vcellinp__inst1__WDATA_A1_i 
                                      << 0xcU)) | (
                                                   (0xf00U 
                                                    & (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT____Vcellinp__inst1__WDATA_A1_i 
                                                       << 8U)) 
                                                   | ((0xf0U 
                                                       & (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT____Vcellinp__inst1__WDATA_A1_i 
                                                          << 4U)) 
                                                      | (0xfU 
                                                         & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT____Vcellinp__inst1__WDATA_A1_i)))));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gcout_reg 
            = ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_wen_a2)
                ? (0xfffU & ((2U == (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gmode))
                              ? ((0x7ffU & (((IData)(2U) 
                                             + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                            >> 1U)) 
                                 ^ ((IData)(2U) + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)))
                              : ((1U == (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gmode))
                                  ? (0x7ffU & ((0x3ffU 
                                                & (((IData)(2U) 
                                                    + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                   >> 2U)) 
                                               ^ (0x7ffU 
                                                  & (((IData)(2U) 
                                                      + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                     >> 1U))))
                                  : ((0U == (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gmode))
                                      ? (0x3ffU & (
                                                   (0x1ffU 
                                                    & (((IData)(2U) 
                                                        + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                       >> 3U)) 
                                                   ^ 
                                                   (0x3ffU 
                                                    & (((IData)(2U) 
                                                        + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                       >> 2U))))
                                      : 0U)))) : 0U);
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__full 
            = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__f1;
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr 
            = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr_next;
    } else {
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__fmo 
            = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__p2;
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwdata_a = 0U;
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__full 
            = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__f2;
    }
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a 
        = (0x3ffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_addr_a1) 
                     >> 4U));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a 
        = (0x3ffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_addr_a2) 
                     >> 4U));
    if (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__empty) 
         & (~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__e2)))) {
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__ff_raddr 
            = (0x7ffU & ((IData)(2U) + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)));
    }
    if (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__empty) 
         & (~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__e2)))) {
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__ff_raddr 
            = (0x7ffU & ((IData)(2U) + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)));
    }
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwdata_b = 0U;
    if (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_wen_a2) {
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__fmo 
            = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__p1;
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwdata_a 
            = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT____Vcellinp__inst1__WDATA_A1_i;
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__overflow 
            = ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__full) 
               & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_wen_a2));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__paf 
            = (0x312U > (0xfffU & ((IData)(0x800U) 
                                   - (((0xfffU & ((IData)(2U) 
                                                  + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr))) 
                                       >= (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next))
                                       ? ((0xfffU & 
                                           ((IData)(2U) 
                                            + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr))) 
                                          - (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next))
                                       : ((IData)(1U) 
                                          + ((~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next)) 
                                             + (0xfffU 
                                                & ((IData)(2U) 
                                                   + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)))))))));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gcout_reg 
            = ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_wen_a2)
                ? (0xfffU & ((2U == (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gmode))
                              ? ((0x7ffU & (((IData)(2U) 
                                             + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                            >> 1U)) 
                                 ^ ((IData)(2U) + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)))
                              : ((1U == (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gmode))
                                  ? (0x7ffU & ((0x3ffU 
                                                & (((IData)(2U) 
                                                    + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                   >> 2U)) 
                                               ^ (0x7ffU 
                                                  & (((IData)(2U) 
                                                      + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                     >> 1U))))
                                  : ((0U == (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gmode))
                                      ? (0x3ffU & (
                                                   (0x1ffU 
                                                    & (((IData)(2U) 
                                                        + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                       >> 3U)) 
                                                   ^ 
                                                   (0x3ffU 
                                                    & (((IData)(2U) 
                                                        + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                       >> 2U))))
                                      : 0U)))) : 0U);
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__full 
            = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__f1;
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr 
            = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr_next;
    } else {
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__fmo 
            = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__p2;
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwdata_a = 0U;
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__paf 
            = (0x312U > (0xfffU & ((IData)(0x800U) 
                                   - (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr) 
                                       >= (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr))
                                       ? ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr) 
                                          - (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr))
                                       : ((IData)(1U) 
                                          + ((~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr)) 
                                             + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)))))));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__full 
            = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__f2;
    }
    if (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__empty) 
         & (~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__e2)))) {
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__ff_raddr 
            = (0xfffU & ((IData)(4U) + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__raddr)));
    }
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b 
        = (0x3ffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_addr_b2) 
                     >> 4U));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwmsk_b 
        = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__wmsk_b;
    if (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_wen_a1) {
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__fmo 
            = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__p1;
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwdata_a 
            = (0xffffU & ((0xf000U & (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT____Vcellinp__inst1__WDATA_A1_i 
                                      << 0xcU)) | (
                                                   (0xf00U 
                                                    & (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT____Vcellinp__inst1__WDATA_A1_i 
                                                       << 8U)) 
                                                   | ((0xf0U 
                                                       & (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT____Vcellinp__inst1__WDATA_A1_i 
                                                          << 4U)) 
                                                      | (0xfU 
                                                         & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT____Vcellinp__inst1__WDATA_A1_i)))));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__overflow 
            = ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__full) 
               & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_wen_a1));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__fmo 
            = ((0x3ffU & ((IData)(1U) + (0x3ffU & (
                                                   ((IData)(4U) 
                                                    + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                   >> 2U)))) 
               == (0x3ffU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp)));
        if (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_wen_a1) {
            vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__overflow 
                = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__full;
            vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__gcout_reg 
                = (0x7ffU & ((0x3ffU & (((IData)(4U) 
                                         + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                        >> 3U)) ^ (0x7ffU 
                                                   & (((IData)(4U) 
                                                       + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                      >> 2U))));
            vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gcout_reg 
                = (0xfffU & ((2U == (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gmode))
                              ? ((0x7ffU & (((IData)(2U) 
                                             + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                            >> 1U)) 
                                 ^ ((IData)(2U) + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)))
                              : ((1U == (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gmode))
                                  ? (0x7ffU & ((0x3ffU 
                                                & (((IData)(2U) 
                                                    + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                   >> 2U)) 
                                               ^ (0x7ffU 
                                                  & (((IData)(2U) 
                                                      + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                     >> 1U))))
                                  : ((0U == (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gmode))
                                      ? (0x3ffU & (
                                                   (0x1ffU 
                                                    & (((IData)(2U) 
                                                        + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                       >> 3U)) 
                                                   ^ 
                                                   (0x3ffU 
                                                    & (((IData)(2U) 
                                                        + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                       >> 2U))))
                                      : 0U))));
        } else {
            vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__overflow = 0U;
            vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__gcout_reg = 0U;
            vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gcout_reg = 0U;
        }
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__full 
            = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__f1;
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__full 
            = (((0x400U & ((~ (1U & (((IData)(4U) + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                     >> 0xcU))) << 0xaU)) 
                | (0x3ffU & (((IData)(4U) + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr)) 
                             >> 2U))) == (0x7ffU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr 
            = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr_next;
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr 
            = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr_next;
    } else {
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__fmo 
            = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__p2;
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwdata_a = 0U;
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__fmo 
            = ((0x3ffU & ((IData)(1U) + (0x3ffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr) 
                                                   >> 2U)))) 
               == (0x3ffU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__full 
            = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__f2;
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__full 
            = (((0x400U & ((~ ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr) 
                               >> 0xcU)) << 0xaU)) 
                | (0x3ffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr) 
                             >> 2U))) == (0x7ffU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp)));
    }
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b 
        = (0x3ffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_addr_b1) 
                     >> 4U));
    if (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_wen_a1) {
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__fmo 
            = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__p1;
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwdata_a 
            = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT____Vcellinp__inst1__WDATA_A1_i;
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__overflow 
            = ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__full) 
               & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_wen_a1));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__paf 
            = (0x302U > (0xfffU & ((IData)(0x800U) 
                                   - (((0xfffU & ((IData)(2U) 
                                                  + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr))) 
                                       >= (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next))
                                       ? ((0xfffU & 
                                           ((IData)(2U) 
                                            + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr))) 
                                          - (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next))
                                       : ((IData)(1U) 
                                          + ((~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next)) 
                                             + (0xfffU 
                                                & ((IData)(2U) 
                                                   + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)))))))));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__fmo 
            = ((0x3ffU & ((IData)(1U) + (0x3ffU & (
                                                   ((IData)(4U) 
                                                    + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                   >> 2U)))) 
               == (0x3ffU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__paf 
            = (0x604U > (0x1fffU & ((IData)(0x1000U) 
                                    - (((0x1fffU & 
                                         ((IData)(4U) 
                                          + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr))) 
                                        >= (0x1ffcU 
                                            & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp) 
                                               << 2U)))
                                        ? ((0x1fffU 
                                            & ((IData)(4U) 
                                               + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr))) 
                                           - (0x1ffcU 
                                              & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp) 
                                                 << 2U)))
                                        : ((IData)(1U) 
                                           + ((~ (0x1ffcU 
                                                  & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp) 
                                                     << 2U))) 
                                              + (0x1fffU 
                                                 & ((IData)(4U) 
                                                    + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr)))))))));
        if (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_wen_a1) {
            vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__overflow 
                = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__full;
            vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__gcout_reg 
                = (0x7ffU & ((0x3ffU & (((IData)(4U) 
                                         + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                        >> 3U)) ^ (0x7ffU 
                                                   & (((IData)(4U) 
                                                       + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                      >> 2U))));
            vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gcout_reg 
                = (0xfffU & ((2U == (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gmode))
                              ? ((0x7ffU & (((IData)(2U) 
                                             + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                            >> 1U)) 
                                 ^ ((IData)(2U) + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)))
                              : ((1U == (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gmode))
                                  ? (0x7ffU & ((0x3ffU 
                                                & (((IData)(2U) 
                                                    + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                   >> 2U)) 
                                               ^ (0x7ffU 
                                                  & (((IData)(2U) 
                                                      + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                     >> 1U))))
                                  : ((0U == (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gmode))
                                      ? (0x3ffU & (
                                                   (0x1ffU 
                                                    & (((IData)(2U) 
                                                        + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                       >> 3U)) 
                                                   ^ 
                                                   (0x3ffU 
                                                    & (((IData)(2U) 
                                                        + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                       >> 2U))))
                                      : 0U))));
        } else {
            vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__overflow = 0U;
            vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__gcout_reg = 0U;
            vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gcout_reg = 0U;
        }
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__full 
            = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__f1;
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__full 
            = (((0x400U & ((~ (1U & (((IData)(4U) + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                     >> 0xcU))) << 0xaU)) 
                | (0x3ffU & (((IData)(4U) + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr)) 
                             >> 2U))) == (0x7ffU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr 
            = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr_next;
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr 
            = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr_next;
    } else {
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__fmo 
            = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__p2;
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwdata_a = 0U;
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__paf 
            = (0x302U > (0xfffU & ((IData)(0x800U) 
                                   - (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr) 
                                       >= (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr))
                                       ? ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr) 
                                          - (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr))
                                       : ((IData)(1U) 
                                          + ((~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr)) 
                                             + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)))))));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__fmo 
            = ((0x3ffU & ((IData)(1U) + (0x3ffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr) 
                                                   >> 2U)))) 
               == (0x3ffU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp)));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__paf 
            = (0x604U > (0x1fffU & ((IData)(0x1000U) 
                                    - (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr) 
                                        >= (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__raddr))
                                        ? ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr) 
                                           - (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__raddr))
                                        : ((IData)(1U) 
                                           + ((~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__raddr)) 
                                              + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr)))))));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__full 
            = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__f2;
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__full 
            = (((0x400U & ((~ ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr) 
                               >> 0xcU)) << 0xaU)) 
                | (0x3ffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr) 
                             >> 2U))) == (0x7ffU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp)));
    }
    if ((0U == (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gmode))) {
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr 
            = (0xffcU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next));
    } else if ((1U == (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gmode))) {
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr 
            = (0xffeU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next));
    } else if ((2U == (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gmode))) {
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr 
            = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next;
    } else if ((3U == (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gmode))) {
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr = 0U;
    }
    if ((0U == (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gmode))) {
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr 
            = (0xffcU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next));
    } else if ((1U == (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gmode))) {
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr 
            = (0xffeU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next));
    } else if ((2U == (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gmode))) {
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr 
            = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next;
    } else if ((3U == (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gmode))) {
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr = 0U;
    }
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwmsk_a 
        = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__wmsk_a;
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwmsk_b 
        = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__wmsk_b;
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwmsk_a 
        = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__wmsk_a;
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwmsk_b 
        = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__wmsk_b;
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__raddr 
        = (0x1ffcU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp) 
                      << 2U));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a 
        = (0x3ffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__ram_addr_a) 
                     >> 4U));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b 
        = (0x3ffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__ram_addr_b) 
                     >> 4U));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a 
        = (0x3ffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__ram_addr_a) 
                     >> 4U));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b 
        = (0x3ffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__ram_addr_b) 
                     >> 4U));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwdata_b 
        = ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_wen_b1)
            ? (0xffffU & ((0xf000U & (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT____Vcellinp__inst1__WDATA_B1_i 
                                      << 0xcU)) | (
                                                   (0xf00U 
                                                    & (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT____Vcellinp__inst1__WDATA_B1_i 
                                                       << 8U)) 
                                                   | ((0xf0U 
                                                       & (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT____Vcellinp__inst1__WDATA_B1_i 
                                                          << 4U)) 
                                                      | (0xfU 
                                                         & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT____Vcellinp__inst1__WDATA_B1_i)))))
            : 0U);
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwdata_b 
        = ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_wen_b2)
            ? (0xffffU & ((0xf000U & (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT____Vcellinp__inst1__WDATA_B1_i 
                                      << 0xcU)) | (
                                                   (0xf00U 
                                                    & (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT____Vcellinp__inst1__WDATA_B1_i 
                                                       << 8U)) 
                                                   | ((0xf0U 
                                                       & (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT____Vcellinp__inst1__WDATA_B1_i 
                                                          << 4U)) 
                                                      | (0xfU 
                                                         & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT____Vcellinp__inst1__WDATA_B1_i)))))
            : 0U);
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__waddr 
        = (0x1ffcU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__tmp) 
                      << 2U));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__epo 
        = (((IData)(1U) + (0x7ffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__raddr) 
                                     >> 2U))) == (0x7ffU 
                                                  & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__tmp)));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__poptopush2 
        = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__poptopush1;
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__poptopush2 
        = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__poptopush1;
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__epo 
        = (((IData)(1U) + (0x7ffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__raddr) 
                                     >> 2U))) == (0x7ffU 
                                                  & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__tmp)));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__pae 
        = (0x260U > (0x3fffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__waddr) 
                                - (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__raddr))));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lcen_b 
        = __Vdly__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lcen_b;
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lcen_b 
        = __Vdly__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lcen_b;
    if (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__empty) 
         & (~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__e2)))) {
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__ff_raddr 
            = (0xfffU & ((IData)(4U) + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__raddr)));
    }
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp 
        = ((0xffcU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp)) 
           | ((2U & (VL_REDXOR_32((0xfffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__pushtopop2) 
                                             >> 1U))) 
                     << 1U)) | (1U & VL_REDXOR_16(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__pushtopop2))));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp 
        = ((0xff3U & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp)) 
           | ((8U & (VL_REDXOR_32((0xfffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__pushtopop2) 
                                             >> 3U))) 
                     << 3U)) | (4U & (VL_REDXOR_32(
                                                   (0xfffU 
                                                    & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__pushtopop2) 
                                                       >> 2U))) 
                                      << 2U))));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp 
        = ((0xfcfU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp)) 
           | ((0x20U & (VL_REDXOR_32((0xfffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__pushtopop2) 
                                                >> 5U))) 
                        << 5U)) | (0x10U & (VL_REDXOR_32(
                                                         (0xfffU 
                                                          & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__pushtopop2) 
                                                             >> 4U))) 
                                            << 4U))));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp 
        = ((0xf3fU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp)) 
           | ((0x80U & (VL_REDXOR_32((0xfffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__pushtopop2) 
                                                >> 7U))) 
                        << 7U)) | (0x40U & (VL_REDXOR_32(
                                                         (0xfffU 
                                                          & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__pushtopop2) 
                                                             >> 6U))) 
                                            << 6U))));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp 
        = ((0xcffU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp)) 
           | ((0x200U & (VL_REDXOR_32((0xfffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__pushtopop2) 
                                                 >> 9U))) 
                         << 9U)) | (0x100U & (VL_REDXOR_32(
                                                           (0xfffU 
                                                            & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__pushtopop2) 
                                                               >> 8U))) 
                                              << 8U))));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp 
        = ((0x3ffU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp)) 
           | ((0x800U & (VL_REDXOR_32((0xfffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__pushtopop2) 
                                                 >> 0xbU))) 
                         << 0xbU)) | (0x400U & (VL_REDXOR_32(
                                                             (0xfffU 
                                                              & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__pushtopop2) 
                                                                 >> 0xaU))) 
                                                << 0xaU))));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp 
        = ((0xffcU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp)) 
           | ((2U & (VL_REDXOR_32((0xfffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__pushtopop2) 
                                             >> 1U))) 
                     << 1U)) | (1U & VL_REDXOR_16(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__pushtopop2))));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp 
        = ((0xff3U & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp)) 
           | ((8U & (VL_REDXOR_32((0xfffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__pushtopop2) 
                                             >> 3U))) 
                     << 3U)) | (4U & (VL_REDXOR_32(
                                                   (0xfffU 
                                                    & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__pushtopop2) 
                                                       >> 2U))) 
                                      << 2U))));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp 
        = ((0xfcfU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp)) 
           | ((0x20U & (VL_REDXOR_32((0xfffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__pushtopop2) 
                                                >> 5U))) 
                        << 5U)) | (0x10U & (VL_REDXOR_32(
                                                         (0xfffU 
                                                          & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__pushtopop2) 
                                                             >> 4U))) 
                                            << 4U))));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp 
        = ((0xf3fU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp)) 
           | ((0x80U & (VL_REDXOR_32((0xfffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__pushtopop2) 
                                                >> 7U))) 
                        << 7U)) | (0x40U & (VL_REDXOR_32(
                                                         (0xfffU 
                                                          & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__pushtopop2) 
                                                             >> 6U))) 
                                            << 6U))));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp 
        = ((0xcffU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp)) 
           | ((0x200U & (VL_REDXOR_32((0xfffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__pushtopop2) 
                                                 >> 9U))) 
                         << 9U)) | (0x100U & (VL_REDXOR_32(
                                                           (0xfffU 
                                                            & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__pushtopop2) 
                                                               >> 8U))) 
                                              << 8U))));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp 
        = ((0x3ffU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp)) 
           | ((0x800U & (VL_REDXOR_32((0xfffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__pushtopop2) 
                                                 >> 0xbU))) 
                         << 0xbU)) | (0x400U & (VL_REDXOR_32(
                                                             (0xfffU 
                                                              & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__pushtopop2) 
                                                                 >> 0xaU))) 
                                                << 0xaU))));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__poptopush2 
        = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__poptopush1;
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__poptopush2 
        = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__poptopush1;
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp 
        = ((0xffcU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp)) 
           | ((2U & (VL_REDXOR_32((0xfffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__pushtopop2) 
                                             >> 1U))) 
                     << 1U)) | (1U & VL_REDXOR_16(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__pushtopop2))));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp 
        = ((0xff3U & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp)) 
           | ((8U & (VL_REDXOR_32((0xfffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__pushtopop2) 
                                             >> 3U))) 
                     << 3U)) | (4U & (VL_REDXOR_32(
                                                   (0xfffU 
                                                    & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__pushtopop2) 
                                                       >> 2U))) 
                                      << 2U))));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp 
        = ((0xfcfU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp)) 
           | ((0x20U & (VL_REDXOR_32((0xfffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__pushtopop2) 
                                                >> 5U))) 
                        << 5U)) | (0x10U & (VL_REDXOR_32(
                                                         (0xfffU 
                                                          & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__pushtopop2) 
                                                             >> 4U))) 
                                            << 4U))));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp 
        = ((0xf3fU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp)) 
           | ((0x80U & (VL_REDXOR_32((0xfffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__pushtopop2) 
                                                >> 7U))) 
                        << 7U)) | (0x40U & (VL_REDXOR_32(
                                                         (0xfffU 
                                                          & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__pushtopop2) 
                                                             >> 6U))) 
                                            << 6U))));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp 
        = ((0xcffU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp)) 
           | ((0x200U & (VL_REDXOR_32((0xfffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__pushtopop2) 
                                                 >> 9U))) 
                         << 9U)) | (0x100U & (VL_REDXOR_32(
                                                           (0xfffU 
                                                            & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__pushtopop2) 
                                                               >> 8U))) 
                                              << 8U))));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp 
        = ((0x3ffU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp)) 
           | ((0x800U & (VL_REDXOR_32((0xfffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__pushtopop2) 
                                                 >> 0xbU))) 
                         << 0xbU)) | (0x400U & (VL_REDXOR_32(
                                                             (0xfffU 
                                                              & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__pushtopop2) 
                                                                 >> 0xaU))) 
                                                << 0xaU))));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp 
        = ((0xffcU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp)) 
           | ((2U & (VL_REDXOR_32((0xfffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__pushtopop2) 
                                             >> 1U))) 
                     << 1U)) | (1U & VL_REDXOR_16(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__pushtopop2))));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp 
        = ((0xff3U & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp)) 
           | ((8U & (VL_REDXOR_32((0xfffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__pushtopop2) 
                                             >> 3U))) 
                     << 3U)) | (4U & (VL_REDXOR_32(
                                                   (0xfffU 
                                                    & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__pushtopop2) 
                                                       >> 2U))) 
                                      << 2U))));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp 
        = ((0xfcfU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp)) 
           | ((0x20U & (VL_REDXOR_32((0xfffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__pushtopop2) 
                                                >> 5U))) 
                        << 5U)) | (0x10U & (VL_REDXOR_32(
                                                         (0xfffU 
                                                          & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__pushtopop2) 
                                                             >> 4U))) 
                                            << 4U))));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp 
        = ((0xf3fU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp)) 
           | ((0x80U & (VL_REDXOR_32((0xfffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__pushtopop2) 
                                                >> 7U))) 
                        << 7U)) | (0x40U & (VL_REDXOR_32(
                                                         (0xfffU 
                                                          & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__pushtopop2) 
                                                             >> 6U))) 
                                            << 6U))));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp 
        = ((0xcffU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp)) 
           | ((0x200U & (VL_REDXOR_32((0xfffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__pushtopop2) 
                                                 >> 9U))) 
                         << 9U)) | (0x100U & (VL_REDXOR_32(
                                                           (0xfffU 
                                                            & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__pushtopop2) 
                                                               >> 8U))) 
                                              << 8U))));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp 
        = ((0x3ffU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp)) 
           | ((0x800U & (VL_REDXOR_32((0xfffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__pushtopop2) 
                                                 >> 0xbU))) 
                         << 0xbU)) | (0x400U & (VL_REDXOR_32(
                                                             (0xfffU 
                                                              & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__pushtopop2) 
                                                                 >> 0xaU))) 
                                                << 0xaU))));
    if (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__empty) 
         & (~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__empty_next)))) {
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__ff_raddr 
            = (0x7ffU & ((IData)(2U) + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)));
    } else if ((((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__empty) 
                 & (~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__empty))) 
                & (~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__empty_next)))) {
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__ff_raddr 
            = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__ff_raddr_next;
    }
    if (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__empty) 
         & (~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__empty_next)))) {
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__ff_raddr 
            = (0x7ffU & ((IData)(2U) + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)));
    } else if ((((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__empty) 
                 & (~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__empty))) 
                & (~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__empty_next)))) {
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__ff_raddr 
            = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__ff_raddr_next;
    }
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__poptopush2 
        = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__poptopush1;
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__poptopush2 
        = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__poptopush1;
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__tmp 
        = ((0x1ffcU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__tmp)) 
           | ((2U & (VL_REDXOR_32((0x1fffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__pushtopop2) 
                                              >> 1U))) 
                     << 1U)) | (1U & VL_REDXOR_16(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__pushtopop2))));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__tmp 
        = ((0x1ff3U & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__tmp)) 
           | ((8U & (VL_REDXOR_32((0x1fffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__pushtopop2) 
                                              >> 3U))) 
                     << 3U)) | (4U & (VL_REDXOR_32(
                                                   (0x1fffU 
                                                    & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__pushtopop2) 
                                                       >> 2U))) 
                                      << 2U))));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__tmp 
        = ((0x1fcfU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__tmp)) 
           | ((0x20U & (VL_REDXOR_32((0x1fffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__pushtopop2) 
                                                 >> 5U))) 
                        << 5U)) | (0x10U & (VL_REDXOR_32(
                                                         (0x1fffU 
                                                          & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__pushtopop2) 
                                                             >> 4U))) 
                                            << 4U))));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__tmp 
        = ((0x1f3fU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__tmp)) 
           | ((0x80U & (VL_REDXOR_32((0x1fffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__pushtopop2) 
                                                 >> 7U))) 
                        << 7U)) | (0x40U & (VL_REDXOR_32(
                                                         (0x1fffU 
                                                          & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__pushtopop2) 
                                                             >> 6U))) 
                                            << 6U))));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__tmp 
        = ((0x1cffU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__tmp)) 
           | ((0x200U & (VL_REDXOR_32((0x1fffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__pushtopop2) 
                                                  >> 9U))) 
                         << 9U)) | (0x100U & (VL_REDXOR_32(
                                                           (0x1fffU 
                                                            & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__pushtopop2) 
                                                               >> 8U))) 
                                              << 8U))));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__tmp 
        = ((0x13ffU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__tmp)) 
           | ((0x800U & (VL_REDXOR_32((0x1fffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__pushtopop2) 
                                                  >> 0xbU))) 
                         << 0xbU)) | (0x400U & (VL_REDXOR_32(
                                                             (0x1fffU 
                                                              & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__pushtopop2) 
                                                                 >> 0xaU))) 
                                                << 0xaU))));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__tmp 
        = ((0xfffU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__tmp)) 
           | (0x1000U & (VL_REDXOR_32((0x1fffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__pushtopop2) 
                                                  >> 0xcU))) 
                         << 0xcU)));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__empty 
        = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__e2;
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__empty 
        = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__e2;
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__empty 
        = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__e2;
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__poptopush1 
        = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__gcout_reg;
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__poptopush1 
        = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__gcout_reg;
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__waddr 
        = (0x1ffcU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__tmp) 
                      << 2U));
    if ((0U == (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gmode))) {
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr 
            = (0xffcU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next));
    } else if ((1U == (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gmode))) {
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr 
            = (0xffeU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next));
    } else if ((2U == (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gmode))) {
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr 
            = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next;
    } else if ((3U == (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gmode))) {
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr = 0U;
    }
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ff_raddr 
        = ((0xffcU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__ff_raddr)) 
           | (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__bwl_sel));
    if ((0U == (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gmode))) {
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr 
            = (0xffcU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next));
    } else if ((1U == (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gmode))) {
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr 
            = (0xffeU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next));
    } else if ((2U == (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gmode))) {
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr 
            = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next;
    } else if ((3U == (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gmode))) {
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr = 0U;
    }
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__raddr 
        = (0x1ffcU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp) 
                      << 2U));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__poptopush1 
        = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__gcout_reg;
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp 
        = ((0xffcU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp)) 
           | ((2U & (VL_REDXOR_32((0xfffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__poptopush2) 
                                             >> 1U))) 
                     << 1U)) | (1U & VL_REDXOR_16(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__poptopush2))));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp 
        = ((0xff3U & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp)) 
           | ((8U & (VL_REDXOR_32((0xfffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__poptopush2) 
                                             >> 3U))) 
                     << 3U)) | (4U & (VL_REDXOR_32(
                                                   (0xfffU 
                                                    & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__poptopush2) 
                                                       >> 2U))) 
                                      << 2U))));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp 
        = ((0xfcfU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp)) 
           | ((0x20U & (VL_REDXOR_32((0xfffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__poptopush2) 
                                                >> 5U))) 
                        << 5U)) | (0x10U & (VL_REDXOR_32(
                                                         (0xfffU 
                                                          & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__poptopush2) 
                                                             >> 4U))) 
                                            << 4U))));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp 
        = ((0xf3fU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp)) 
           | ((0x80U & (VL_REDXOR_32((0xfffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__poptopush2) 
                                                >> 7U))) 
                        << 7U)) | (0x40U & (VL_REDXOR_32(
                                                         (0xfffU 
                                                          & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__poptopush2) 
                                                             >> 6U))) 
                                            << 6U))));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp 
        = ((0xcffU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp)) 
           | ((0x200U & (VL_REDXOR_32((0xfffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__poptopush2) 
                                                 >> 9U))) 
                         << 9U)) | (0x100U & (VL_REDXOR_32(
                                                           (0xfffU 
                                                            & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__poptopush2) 
                                                               >> 8U))) 
                                              << 8U))));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp 
        = ((0x3ffU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp)) 
           | ((0x800U & (VL_REDXOR_32((0xfffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__poptopush2) 
                                                 >> 0xbU))) 
                         << 0xbU)) | (0x400U & (VL_REDXOR_32(
                                                             (0xfffU 
                                                              & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__poptopush2) 
                                                                 >> 0xaU))) 
                                                << 0xaU))));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__poptopush1 
        = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__gcout_reg;
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp 
        = ((0xffcU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp)) 
           | ((2U & (VL_REDXOR_32((0xfffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__poptopush2) 
                                             >> 1U))) 
                     << 1U)) | (1U & VL_REDXOR_16(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__poptopush2))));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp 
        = ((0xff3U & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp)) 
           | ((8U & (VL_REDXOR_32((0xfffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__poptopush2) 
                                             >> 3U))) 
                     << 3U)) | (4U & (VL_REDXOR_32(
                                                   (0xfffU 
                                                    & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__poptopush2) 
                                                       >> 2U))) 
                                      << 2U))));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp 
        = ((0xfcfU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp)) 
           | ((0x20U & (VL_REDXOR_32((0xfffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__poptopush2) 
                                                >> 5U))) 
                        << 5U)) | (0x10U & (VL_REDXOR_32(
                                                         (0xfffU 
                                                          & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__poptopush2) 
                                                             >> 4U))) 
                                            << 4U))));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp 
        = ((0xf3fU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp)) 
           | ((0x80U & (VL_REDXOR_32((0xfffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__poptopush2) 
                                                >> 7U))) 
                        << 7U)) | (0x40U & (VL_REDXOR_32(
                                                         (0xfffU 
                                                          & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__poptopush2) 
                                                             >> 6U))) 
                                            << 6U))));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp 
        = ((0xcffU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp)) 
           | ((0x200U & (VL_REDXOR_32((0xfffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__poptopush2) 
                                                 >> 9U))) 
                         << 9U)) | (0x100U & (VL_REDXOR_32(
                                                           (0xfffU 
                                                            & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__poptopush2) 
                                                               >> 8U))) 
                                              << 8U))));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp 
        = ((0x3ffU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp)) 
           | ((0x800U & (VL_REDXOR_32((0xfffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__poptopush2) 
                                                 >> 0xbU))) 
                         << 0xbU)) | (0x400U & (VL_REDXOR_32(
                                                             (0xfffU 
                                                              & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__poptopush2) 
                                                                 >> 0xaU))) 
                                                << 0xaU))));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__ff_raddr_next 
        = (0x7ffU & ((IData)(2U) + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__ff_raddr)));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__ff_raddr_next 
        = (0x7ffU & ((IData)(2U) + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__ff_raddr)));
    if (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__empty) 
         & (~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__empty)))) {
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__epo 
            = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__o1;
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__pae 
            = (0x130U > (0x1fffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr) 
                                    - (0xfffU & ((IData)(2U) 
                                                 + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr))))));
    } else {
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__epo 
            = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__o2;
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__pae 
            = (0x130U > (0x1fffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr) 
                                    - (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr))));
    }
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr 
        = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr_next;
    if (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__empty) 
         & (~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__empty)))) {
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__epo 
            = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__o1;
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__pae 
            = (0x18U > (0x1fffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr) 
                                   - (0xfffU & ((IData)(2U) 
                                                + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr))))));
    } else {
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__epo 
            = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__o2;
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__pae 
            = (0x18U > (0x1fffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr) 
                                   - (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr))));
    }
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr 
        = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr_next;
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp 
        = ((0xffcU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp)) 
           | ((2U & (VL_REDXOR_32((0xfffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__poptopush2) 
                                             >> 1U))) 
                     << 1U)) | (1U & VL_REDXOR_16(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__poptopush2))));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp 
        = ((0xff3U & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp)) 
           | ((8U & (VL_REDXOR_32((0xfffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__poptopush2) 
                                             >> 3U))) 
                     << 3U)) | (4U & (VL_REDXOR_32(
                                                   (0xfffU 
                                                    & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__poptopush2) 
                                                       >> 2U))) 
                                      << 2U))));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp 
        = ((0xfcfU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp)) 
           | ((0x20U & (VL_REDXOR_32((0xfffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__poptopush2) 
                                                >> 5U))) 
                        << 5U)) | (0x10U & (VL_REDXOR_32(
                                                         (0xfffU 
                                                          & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__poptopush2) 
                                                             >> 4U))) 
                                            << 4U))));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp 
        = ((0xf3fU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp)) 
           | ((0x80U & (VL_REDXOR_32((0xfffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__poptopush2) 
                                                >> 7U))) 
                        << 7U)) | (0x40U & (VL_REDXOR_32(
                                                         (0xfffU 
                                                          & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__poptopush2) 
                                                             >> 6U))) 
                                            << 6U))));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp 
        = ((0xcffU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp)) 
           | ((0x200U & (VL_REDXOR_32((0xfffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__poptopush2) 
                                                 >> 9U))) 
                         << 9U)) | (0x100U & (VL_REDXOR_32(
                                                           (0xfffU 
                                                            & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__poptopush2) 
                                                               >> 8U))) 
                                              << 8U))));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp 
        = ((0x3ffU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp)) 
           | ((0x800U & (VL_REDXOR_32((0xfffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__poptopush2) 
                                                 >> 0xbU))) 
                         << 0xbU)) | (0x400U & (VL_REDXOR_32(
                                                             (0xfffU 
                                                              & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__poptopush2) 
                                                                 >> 0xaU))) 
                                                << 0xaU))));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__poptopush1 
        = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__gcout_reg;
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp 
        = ((0xffcU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp)) 
           | ((2U & (VL_REDXOR_32((0xfffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__poptopush2) 
                                             >> 1U))) 
                     << 1U)) | (1U & VL_REDXOR_16(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__poptopush2))));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp 
        = ((0xff3U & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp)) 
           | ((8U & (VL_REDXOR_32((0xfffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__poptopush2) 
                                             >> 3U))) 
                     << 3U)) | (4U & (VL_REDXOR_32(
                                                   (0xfffU 
                                                    & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__poptopush2) 
                                                       >> 2U))) 
                                      << 2U))));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp 
        = ((0xfcfU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp)) 
           | ((0x20U & (VL_REDXOR_32((0xfffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__poptopush2) 
                                                >> 5U))) 
                        << 5U)) | (0x10U & (VL_REDXOR_32(
                                                         (0xfffU 
                                                          & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__poptopush2) 
                                                             >> 4U))) 
                                            << 4U))));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp 
        = ((0xf3fU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp)) 
           | ((0x80U & (VL_REDXOR_32((0xfffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__poptopush2) 
                                                >> 7U))) 
                        << 7U)) | (0x40U & (VL_REDXOR_32(
                                                         (0xfffU 
                                                          & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__poptopush2) 
                                                             >> 6U))) 
                                            << 6U))));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp 
        = ((0xcffU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp)) 
           | ((0x200U & (VL_REDXOR_32((0xfffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__poptopush2) 
                                                 >> 9U))) 
                         << 9U)) | (0x100U & (VL_REDXOR_32(
                                                           (0xfffU 
                                                            & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__poptopush2) 
                                                               >> 8U))) 
                                              << 8U))));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp 
        = ((0x3ffU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp)) 
           | ((0x800U & (VL_REDXOR_32((0xfffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__poptopush2) 
                                                 >> 0xbU))) 
                         << 0xbU)) | (0x400U & (VL_REDXOR_32(
                                                             (0xfffU 
                                                              & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__poptopush2) 
                                                                 >> 0xaU))) 
                                                << 0xaU))));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__poptopush1 
        = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__gcout_reg;
    if (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__empty) {
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__underflow 
            = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__empty;
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__underflow 
            = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__empty;
        if ((1U & (~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__empty)))) {
            vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__bwl_sel 
                = (3U & ((IData)(2U) + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)));
            vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__gcout_reg 
                = ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__empty)
                    ? (0xfffU & ((2U == (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__gmode))
                                  ? ((0x7ffU & (((IData)(2U) 
                                                 + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)) 
                                                >> 1U)) 
                                     ^ ((IData)(2U) 
                                        + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)))
                                  : ((1U == (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__gmode))
                                      ? (0x7ffU & (
                                                   (0x3ffU 
                                                    & (((IData)(2U) 
                                                        + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)) 
                                                       >> 2U)) 
                                                   ^ 
                                                   (0x7ffU 
                                                    & (((IData)(2U) 
                                                        + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)) 
                                                       >> 1U))))
                                      : ((0U == (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__gmode))
                                          ? (0x3ffU 
                                             & ((0x1ffU 
                                                 & (((IData)(2U) 
                                                     + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)) 
                                                    >> 3U)) 
                                                ^ (0x3ffU 
                                                   & (((IData)(2U) 
                                                       + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)) 
                                                      >> 2U))))
                                          : 0U)))) : 0U);
        }
        if ((1U & (~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__empty)))) {
            vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__bwl_sel 
                = (3U & ((IData)(2U) + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)));
        }
    }
    if (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__empty) 
         & (~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__empty)))) {
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr 
            = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr_next;
    }
    if (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__empty) {
        if ((1U & (~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__empty)))) {
            vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__gcout_reg 
                = ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__empty)
                    ? (0xfffU & ((2U == (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__gmode))
                                  ? ((0x7ffU & (((IData)(2U) 
                                                 + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)) 
                                                >> 1U)) 
                                     ^ ((IData)(2U) 
                                        + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)))
                                  : ((1U == (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__gmode))
                                      ? (0x7ffU & (
                                                   (0x3ffU 
                                                    & (((IData)(2U) 
                                                        + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)) 
                                                       >> 2U)) 
                                                   ^ 
                                                   (0x7ffU 
                                                    & (((IData)(2U) 
                                                        + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)) 
                                                       >> 1U))))
                                      : ((0U == (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__gmode))
                                          ? (0x3ffU 
                                             & ((0x1ffU 
                                                 & (((IData)(2U) 
                                                     + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)) 
                                                    >> 3U)) 
                                                ^ (0x3ffU 
                                                   & (((IData)(2U) 
                                                       + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)) 
                                                      >> 2U))))
                                          : 0U)))) : 0U);
        }
    }
    if (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__empty) 
         & (~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__empty)))) {
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr 
            = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr_next;
    }
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__e2 
        = ((0x7ffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__raddr) 
                      >> 2U)) == (0x7ffU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__tmp)));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__tmp 
        = ((0x1ffcU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__tmp)) 
           | ((2U & (VL_REDXOR_32((0x1fffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__pushtopop2) 
                                              >> 1U))) 
                     << 1U)) | (1U & VL_REDXOR_16(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__pushtopop2))));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__tmp 
        = ((0x1ff3U & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__tmp)) 
           | ((8U & (VL_REDXOR_32((0x1fffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__pushtopop2) 
                                              >> 3U))) 
                     << 3U)) | (4U & (VL_REDXOR_32(
                                                   (0x1fffU 
                                                    & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__pushtopop2) 
                                                       >> 2U))) 
                                      << 2U))));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__tmp 
        = ((0x1fcfU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__tmp)) 
           | ((0x20U & (VL_REDXOR_32((0x1fffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__pushtopop2) 
                                                 >> 5U))) 
                        << 5U)) | (0x10U & (VL_REDXOR_32(
                                                         (0x1fffU 
                                                          & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__pushtopop2) 
                                                             >> 4U))) 
                                            << 4U))));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__tmp 
        = ((0x1f3fU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__tmp)) 
           | ((0x80U & (VL_REDXOR_32((0x1fffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__pushtopop2) 
                                                 >> 7U))) 
                        << 7U)) | (0x40U & (VL_REDXOR_32(
                                                         (0x1fffU 
                                                          & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__pushtopop2) 
                                                             >> 6U))) 
                                            << 6U))));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__tmp 
        = ((0x1cffU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__tmp)) 
           | ((0x200U & (VL_REDXOR_32((0x1fffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__pushtopop2) 
                                                  >> 9U))) 
                         << 9U)) | (0x100U & (VL_REDXOR_32(
                                                           (0x1fffU 
                                                            & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__pushtopop2) 
                                                               >> 8U))) 
                                              << 8U))));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__tmp 
        = ((0x13ffU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__tmp)) 
           | ((0x800U & (VL_REDXOR_32((0x1fffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__pushtopop2) 
                                                  >> 0xbU))) 
                         << 0xbU)) | (0x400U & (VL_REDXOR_32(
                                                             (0x1fffU 
                                                              & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__pushtopop2) 
                                                                 >> 0xaU))) 
                                                << 0xaU))));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__tmp 
        = ((0xfffU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__tmp)) 
           | (0x1000U & (VL_REDXOR_32((0x1fffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__pushtopop2) 
                                                  >> 0xcU))) 
                         << 0xcU)));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp 
        = ((0x1ffcU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp)) 
           | ((2U & (VL_REDXOR_32((0x1fffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__poptopush2) 
                                              >> 1U))) 
                     << 1U)) | (1U & VL_REDXOR_16(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__poptopush2))));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp 
        = ((0x1ff3U & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp)) 
           | ((8U & (VL_REDXOR_32((0x1fffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__poptopush2) 
                                              >> 3U))) 
                     << 3U)) | (4U & (VL_REDXOR_32(
                                                   (0x1fffU 
                                                    & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__poptopush2) 
                                                       >> 2U))) 
                                      << 2U))));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp 
        = ((0x1fcfU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp)) 
           | ((0x20U & (VL_REDXOR_32((0x1fffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__poptopush2) 
                                                 >> 5U))) 
                        << 5U)) | (0x10U & (VL_REDXOR_32(
                                                         (0x1fffU 
                                                          & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__poptopush2) 
                                                             >> 4U))) 
                                            << 4U))));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp 
        = ((0x1f3fU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp)) 
           | ((0x80U & (VL_REDXOR_32((0x1fffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__poptopush2) 
                                                 >> 7U))) 
                        << 7U)) | (0x40U & (VL_REDXOR_32(
                                                         (0x1fffU 
                                                          & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__poptopush2) 
                                                             >> 6U))) 
                                            << 6U))));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp 
        = ((0x1cffU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp)) 
           | ((0x200U & (VL_REDXOR_32((0x1fffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__poptopush2) 
                                                  >> 9U))) 
                         << 9U)) | (0x100U & (VL_REDXOR_32(
                                                           (0x1fffU 
                                                            & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__poptopush2) 
                                                               >> 8U))) 
                                              << 8U))));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp 
        = ((0x13ffU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp)) 
           | ((0x800U & (VL_REDXOR_32((0x1fffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__poptopush2) 
                                                  >> 0xbU))) 
                         << 0xbU)) | (0x400U & (VL_REDXOR_32(
                                                             (0x1fffU 
                                                              & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__poptopush2) 
                                                                 >> 0xaU))) 
                                                << 0xaU))));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp 
        = ((0xfffU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp)) 
           | (0x1000U & (VL_REDXOR_32((0x1fffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__poptopush2) 
                                                  >> 0xcU))) 
                         << 0xcU)));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_addr_b1 
        = ((0x3ff0U & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ff_raddr) 
                       << 2U)) | (8U & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ff_raddr) 
                                        << 3U)));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_addr_b2 
        = ((0x3ff0U & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ff_raddr) 
                       << 2U)) | (8U & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ff_raddr) 
                                        << 3U)));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp 
        = ((0x1ffcU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp)) 
           | ((2U & (VL_REDXOR_32((0x1fffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__poptopush2) 
                                              >> 1U))) 
                     << 1U)) | (1U & VL_REDXOR_16(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__poptopush2))));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp 
        = ((0x1ff3U & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp)) 
           | ((8U & (VL_REDXOR_32((0x1fffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__poptopush2) 
                                              >> 3U))) 
                     << 3U)) | (4U & (VL_REDXOR_32(
                                                   (0x1fffU 
                                                    & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__poptopush2) 
                                                       >> 2U))) 
                                      << 2U))));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp 
        = ((0x1fcfU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp)) 
           | ((0x20U & (VL_REDXOR_32((0x1fffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__poptopush2) 
                                                 >> 5U))) 
                        << 5U)) | (0x10U & (VL_REDXOR_32(
                                                         (0x1fffU 
                                                          & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__poptopush2) 
                                                             >> 4U))) 
                                            << 4U))));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp 
        = ((0x1f3fU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp)) 
           | ((0x80U & (VL_REDXOR_32((0x1fffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__poptopush2) 
                                                 >> 7U))) 
                        << 7U)) | (0x40U & (VL_REDXOR_32(
                                                         (0x1fffU 
                                                          & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__poptopush2) 
                                                             >> 6U))) 
                                            << 6U))));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp 
        = ((0x1cffU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp)) 
           | ((0x200U & (VL_REDXOR_32((0x1fffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__poptopush2) 
                                                  >> 9U))) 
                         << 9U)) | (0x100U & (VL_REDXOR_32(
                                                           (0x1fffU 
                                                            & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__poptopush2) 
                                                               >> 8U))) 
                                              << 8U))));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp 
        = ((0x13ffU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp)) 
           | ((0x800U & (VL_REDXOR_32((0x1fffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__poptopush2) 
                                                  >> 0xbU))) 
                         << 0xbU)) | (0x400U & (VL_REDXOR_32(
                                                             (0x1fffU 
                                                              & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__poptopush2) 
                                                                 >> 0xaU))) 
                                                << 0xaU))));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp 
        = ((0xfffU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp)) 
           | (0x1000U & (VL_REDXOR_32((0x1fffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__poptopush2) 
                                                  >> 0xcU))) 
                         << 0xcU)));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr_next 
        = (0xfffU & ((IData)(2U) + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr_next 
        = (0xfffU & ((IData)(2U) + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr_next 
        = (0xfffU & ((IData)(2U) + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr_next 
        = (0xfffU & ((IData)(2U) + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr_next 
        = (0x1fffU & ((IData)(4U) + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr)));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_addr_a1 
        = ((0x3ff0U & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr) 
                       << 2U)) | (8U & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr) 
                                        << 3U)));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_addr_a2 
        = ((0x3ff0U & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr) 
                       << 2U)) | (8U & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr) 
                                        << 3U)));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr_next 
        = (0x1fffU & ((IData)(4U) + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr)));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr_next 
        = (0xfffU & ((IData)(2U) + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__empty 
        = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__empty_next;
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr_next 
        = (0xfffU & ((IData)(2U) + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__empty 
        = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__empty_next;
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__empty 
        = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__e2;
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__e2 
        = ((0x7ffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__raddr) 
                      >> 2U)) == (0x7ffU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__tmp)));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT____Vcellout__fifo36_ctl__fflags 
        = ((((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__full) 
             << 7U) | (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__fmo) 
                        << 6U) | (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__paf) 
                                   << 5U) | ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__overflow) 
                                             << 4U)))) 
           | (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__empty) 
               << 3U) | (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__epo) 
                          << 2U) | (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__pae) 
                                     << 1U) | (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__underflow)))));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT____Vcellout__inst1__RDATA_A1_o 
        = ((0x80U & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT____Vcellout__fifo36_ctl__fflags) 
                     << 4U)) | ((0x40U & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT____Vcellout__fifo36_ctl__fflags) 
                                          << 4U)) | 
                                ((0x20U & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT____Vcellout__fifo36_ctl__fflags) 
                                           << 4U)) 
                                 | ((0x10U & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT____Vcellout__fifo36_ctl__fflags) 
                                              << 4U)) 
                                    | (0xfU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT____Vcellout__fifo36_ctl__fflags) 
                                               >> 4U))))));
}

VL_INLINE_OPT void Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___nba_comb__TOP__0(Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_sdp_nsplit_ram_1024x36_R4W4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_wen_b1 
        = ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__we) 
           & (~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__rd_addr)));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_wen_b2 
        = ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__we) 
           & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__rd_addr));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT____Vcellinp__inst1__WDATA_A1_i 
        = ((0x30000U & ((IData)((vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__din 
                                 >> 0x20U)) << 0x10U)) 
           | (0xffffU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__din)));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_wen_b1 
        = ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__we) 
           & (~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__rd_addr)));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT____Vcellinp__inst1__WDATA_B1_i 
        = ((0x30000U & ((IData)((vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__din 
                                 >> 0x22U)) << 0x10U)) 
           | (0xffffU & (IData)((vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__din 
                                 >> 0x10U))));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_wen_b2 
        = ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__we) 
           & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__rd_addr));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT____Vcellinp__inst1__WDATA_A1_i 
        = ((0x30000U & ((IData)((vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__din 
                                 >> 0x20U)) << 0x10U)) 
           | (0xffffU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__din)));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__ram_addr_a 
        = ((0x3ff0U & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__wr_addr) 
                       << 3U)) | (0xfU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__addr_a_d)));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__ram_addr_b 
        = ((0x3ff0U & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__rd_addr) 
                       << 3U)) | (0xfU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__addr_b_d)));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__ram_addr_a 
        = ((0x3ff0U & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__wr_addr) 
                       << 3U)) | (0xfU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__addr_a_d)));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__ram_addr_b 
        = ((0x3ff0U & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__rd_addr) 
                       << 3U)) | (0xfU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__addr_b_d)));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_wen_a2 
        = ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__we) 
           & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__wr_addr));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_wen_a1 
        = ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__we) 
           & (~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__wr_addr)));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_wen_a1 
        = ((~ ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT____Vcellout__fifo36_ctl__fflags) 
               >> 7U)) & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__we));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_wen_a2 
        = ((~ ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT____Vcellout__fifo36_ctl__fflags) 
               >> 7U)) & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__we));
    if (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_wen_b1) {
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__wmsk_b 
            = (0xffffU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__wmsk_b);
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__wmsk_b 
            = ((0x30fffU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__wmsk_b) 
               | (((3U == (3U & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_addr_b1) 
                                 >> 2U))) ? 0U : 0xfU) 
                  << 0xcU));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__wmsk_b 
            = ((0x3f0ffU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__wmsk_b) 
               | (((2U == (3U & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_addr_b1) 
                                 >> 2U))) ? 0U : 0xfU) 
                  << 8U));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__wmsk_b 
            = ((0x3ff0fU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__wmsk_b) 
               | (((1U == (3U & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_addr_b1) 
                                 >> 2U))) ? 0U : 0xfU) 
                  << 4U));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__wmsk_b 
            = ((0x3fff0U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__wmsk_b) 
               | ((0U == (3U & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_addr_b1) 
                                >> 2U))) ? 0U : 0xfU));
    } else {
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__wmsk_b = 0x3ffffU;
    }
    if (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_wen_b2) {
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__wmsk_b 
            = (0xffffU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__wmsk_b);
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__wmsk_b 
            = ((0x30fffU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__wmsk_b) 
               | (((3U == (3U & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_addr_b2) 
                                 >> 2U))) ? 0U : 0xfU) 
                  << 0xcU));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__wmsk_b 
            = ((0x3f0ffU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__wmsk_b) 
               | (((2U == (3U & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_addr_b2) 
                                 >> 2U))) ? 0U : 0xfU) 
                  << 8U));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__wmsk_b 
            = ((0x3ff0fU & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__wmsk_b) 
               | (((1U == (3U & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_addr_b2) 
                                 >> 2U))) ? 0U : 0xfU) 
                  << 4U));
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__wmsk_b 
            = ((0x3fff0U & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__wmsk_b) 
               | ((0U == (3U & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_addr_b2) 
                                >> 2U))) ? 0U : 0xfU));
    } else {
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__wmsk_b = 0x3ffffU;
    }
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__wmsk_b 
        = ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_wen_b1)
            ? 0xfff0U : 0x3ffffU);
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__wmsk_b 
        = ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_wen_b2)
            ? 0xfff0U : 0x3ffffU);
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__wmsk_a 
        = ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_wen_a2)
            ? 0xfff0U : 0x3ffffU);
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__wmsk_a 
        = ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_wen_a1)
            ? 0xfff0U : 0x3ffffU);
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__wmsk_a 
        = ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_wen_a1)
            ? 0U : 0x3ffffU);
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__wmsk_a 
        = ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_wen_a2)
            ? 0U : 0x3ffffU);
}

VL_INLINE_OPT void Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___nba_sequent__TOP__1(Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_sdp_nsplit_ram_1024x36_R4W4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr_next 
        = ((0U == (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__gmode))
            ? (0xffcU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp) 
                         << 2U)) : ((1U == (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__gmode))
                                     ? (0xffeU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp) 
                                                  << 1U))
                                     : ((2U == (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__gmode))
                                         ? (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp)
                                         : 0U)));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr_next 
        = ((0U == (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__gmode))
            ? (0xffcU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp) 
                         << 2U)) : ((1U == (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__gmode))
                                     ? (0xffeU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp) 
                                                  << 1U))
                                     : ((2U == (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__gmode))
                                         ? (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp)
                                         : 0U)));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next 
        = ((0U == (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gmode))
            ? (0xffcU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp) 
                         << 2U)) : ((1U == (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gmode))
                                     ? (0xffeU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp) 
                                                  << 1U))
                                     : ((2U == (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gmode))
                                         ? (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp)
                                         : 0U)));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next 
        = ((0U == (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gmode))
            ? (0xffcU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp) 
                         << 2U)) : ((1U == (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gmode))
                                     ? (0xffeU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp) 
                                                  << 1U))
                                     : ((2U == (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gmode))
                                         ? (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp)
                                         : 0U)));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next 
        = ((0U == (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gmode))
            ? (0xffcU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp) 
                         << 2U)) : ((1U == (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gmode))
                                     ? (0xffeU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp) 
                                                  << 1U))
                                     : ((2U == (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gmode))
                                         ? (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp)
                                         : 0U)));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next 
        = ((0U == (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gmode))
            ? (0xffcU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp) 
                         << 2U)) : ((1U == (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gmode))
                                     ? (0xffeU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp) 
                                                  << 1U))
                                     : ((2U == (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gmode))
                                         ? (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp)
                                         : 0U)));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr_next 
        = ((0U == (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__gmode))
            ? (0xffcU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp) 
                         << 2U)) : ((1U == (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__gmode))
                                     ? (0xffeU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp) 
                                                  << 1U))
                                     : ((2U == (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__gmode))
                                         ? (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp)
                                         : 0U)));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr_next 
        = ((0U == (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__gmode))
            ? (0xffcU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp) 
                         << 2U)) : ((1U == (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__gmode))
                                     ? (0xffeU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp) 
                                                  << 1U))
                                     : ((2U == (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__gmode))
                                         ? (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp)
                                         : 0U)));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__o2 
        = (((IData)(1U) + (0x7ffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr) 
                                     >> 1U))) == (0x7ffU 
                                                  & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr_next) 
                                                     >> 1U)));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__o1 
        = (((IData)(1U) + (0x7ffU & (((IData)(2U) + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)) 
                                     >> 1U))) == (0x7ffU 
                                                  & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr_next) 
                                                     >> 1U)));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__e1 
        = ((0x7ffU & (((IData)(2U) + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)) 
                      >> 1U)) == (0x7ffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr_next) 
                                            >> 1U)));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__e2 
        = ((0x7ffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr) 
                      >> 1U)) == (0x7ffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr_next) 
                                            >> 1U)));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__o2 
        = (((IData)(1U) + (0x7ffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr) 
                                     >> 1U))) == (0x7ffU 
                                                  & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr_next) 
                                                     >> 1U)));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__o1 
        = (((IData)(1U) + (0x7ffU & (((IData)(2U) + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)) 
                                     >> 1U))) == (0x7ffU 
                                                  & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr_next) 
                                                     >> 1U)));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__e1 
        = ((0x7ffU & (((IData)(2U) + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)) 
                      >> 1U)) == (0x7ffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr_next) 
                                            >> 1U)));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__e2 
        = ((0x7ffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr) 
                      >> 1U)) == (0x7ffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr_next) 
                                            >> 1U)));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__p2 
        = ((0x3ffU & ((IData)(1U) + (0x3ffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr) 
                                               >> 1U)))) 
           == (0x3ffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next) 
                         >> 1U)));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__p1 
        = ((0x3ffU & ((IData)(1U) + (0x3ffU & (((IData)(2U) 
                                                + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                               >> 1U)))) 
           == (0x3ffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next) 
                         >> 1U)));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__f1 
        = (((0x400U & ((~ (1U & (((IData)(2U) + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                 >> 0xbU))) << 0xaU)) 
            | (0x3ffU & (((IData)(2U) + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                         >> 1U))) == (0x7ffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next) 
                                                >> 1U)));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__f2 
        = (((0x400U & ((~ ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr) 
                           >> 0xbU)) << 0xaU)) | (0x3ffU 
                                                  & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr) 
                                                     >> 1U))) 
           == (0x7ffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next) 
                         >> 1U)));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__p2 
        = ((0x3ffU & ((IData)(1U) + (0x3ffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr) 
                                               >> 1U)))) 
           == (0x3ffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next) 
                         >> 1U)));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__p1 
        = ((0x3ffU & ((IData)(1U) + (0x3ffU & (((IData)(2U) 
                                                + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                               >> 1U)))) 
           == (0x3ffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next) 
                         >> 1U)));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__f1 
        = (((0x400U & ((~ (1U & (((IData)(2U) + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                 >> 0xbU))) << 0xaU)) 
            | (0x3ffU & (((IData)(2U) + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                         >> 1U))) == (0x7ffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next) 
                                                >> 1U)));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__f2 
        = (((0x400U & ((~ ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr) 
                           >> 0xbU)) << 0xaU)) | (0x3ffU 
                                                  & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr) 
                                                     >> 1U))) 
           == (0x7ffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next) 
                         >> 1U)));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__p2 
        = ((0x3ffU & ((IData)(1U) + (0x3ffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr) 
                                               >> 1U)))) 
           == (0x3ffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next) 
                         >> 1U)));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__p1 
        = ((0x3ffU & ((IData)(1U) + (0x3ffU & (((IData)(2U) 
                                                + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                               >> 1U)))) 
           == (0x3ffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next) 
                         >> 1U)));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__f1 
        = (((0x400U & ((~ (1U & (((IData)(2U) + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                 >> 0xbU))) << 0xaU)) 
            | (0x3ffU & (((IData)(2U) + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                         >> 1U))) == (0x7ffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next) 
                                                >> 1U)));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__f2 
        = (((0x400U & ((~ ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr) 
                           >> 0xbU)) << 0xaU)) | (0x3ffU 
                                                  & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr) 
                                                     >> 1U))) 
           == (0x7ffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next) 
                         >> 1U)));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__p2 
        = ((0x3ffU & ((IData)(1U) + (0x3ffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr) 
                                               >> 1U)))) 
           == (0x3ffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next) 
                         >> 1U)));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__p1 
        = ((0x3ffU & ((IData)(1U) + (0x3ffU & (((IData)(2U) 
                                                + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                               >> 1U)))) 
           == (0x3ffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next) 
                         >> 1U)));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__f1 
        = (((0x400U & ((~ (1U & (((IData)(2U) + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                 >> 0xbU))) << 0xaU)) 
            | (0x3ffU & (((IData)(2U) + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                         >> 1U))) == (0x7ffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next) 
                                                >> 1U)));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__f2 
        = (((0x400U & ((~ ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr) 
                           >> 0xbU)) << 0xaU)) | (0x3ffU 
                                                  & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr) 
                                                     >> 1U))) 
           == (0x7ffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next) 
                         >> 1U)));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__o2 
        = (((IData)(1U) + (0x7ffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr) 
                                     >> 1U))) == (0x7ffU 
                                                  & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr_next) 
                                                     >> 1U)));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__o1 
        = (((IData)(1U) + (0x7ffU & (((IData)(2U) + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)) 
                                     >> 1U))) == (0x7ffU 
                                                  & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr_next) 
                                                     >> 1U)));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__e1 
        = ((0x7ffU & (((IData)(2U) + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)) 
                      >> 1U)) == (0x7ffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr_next) 
                                            >> 1U)));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__e2 
        = ((0x7ffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr) 
                      >> 1U)) == (0x7ffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr_next) 
                                            >> 1U)));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__o2 
        = (((IData)(1U) + (0x7ffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr) 
                                     >> 1U))) == (0x7ffU 
                                                  & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr_next) 
                                                     >> 1U)));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__o1 
        = (((IData)(1U) + (0x7ffU & (((IData)(2U) + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)) 
                                     >> 1U))) == (0x7ffU 
                                                  & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr_next) 
                                                     >> 1U)));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__e1 
        = ((0x7ffU & (((IData)(2U) + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)) 
                      >> 1U)) == (0x7ffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr_next) 
                                            >> 1U)));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__e2 
        = ((0x7ffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr) 
                      >> 1U)) == (0x7ffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr_next) 
                                            >> 1U)));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__empty_next 
        = (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__empty) 
            & (~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__empty)))
            ? (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__e1)
            : (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__e2));
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__empty_next 
        = (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__empty) 
            & (~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__empty)))
            ? (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__e1)
            : (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__e2));
}

void Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___eval_nba(Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_sdp_nsplit_ram_1024x36_R4W4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(9U))) {
        Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(7U))) {
        Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___act_sequent__TOP__2(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(5U))) {
        Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___act_sequent__TOP__4(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(8U))) {
        Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___act_sequent__TOP__3(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(6U))) {
        Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___act_sequent__TOP__1(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U))) {
        Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___act_sequent__TOP__5(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(3U))) {
        Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___act_sequent__TOP__7(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(4U))) {
        Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___act_sequent__TOP__8(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(2U))) {
        Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___act_sequent__TOP__6(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
    if (((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U)) 
         | vlSelf->__VnbaTriggered.at(9U))) {
        Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___act_comb__TOP__1(vlSelf);
    }
    if (((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(3U)) 
         | vlSelf->__VnbaTriggered.at(9U))) {
        Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___act_comb__TOP__3(vlSelf);
    }
    if (((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(4U)) 
         | vlSelf->__VnbaTriggered.at(9U))) {
        Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___act_comb__TOP__4(vlSelf);
    }
    if (((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(2U)) 
         | vlSelf->__VnbaTriggered.at(9U))) {
        Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___act_comb__TOP__2(vlSelf);
    }
    if ((((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U)) 
          | vlSelf->__VnbaTriggered.at(3U)) | vlSelf->__VnbaTriggered.at(9U))) {
        Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___act_comb__TOP__5(vlSelf);
    }
    if ((((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(2U)) 
          | vlSelf->__VnbaTriggered.at(4U)) | vlSelf->__VnbaTriggered.at(9U))) {
        Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___act_comb__TOP__6(vlSelf);
    }
    if ((((((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U)) 
            | vlSelf->__VnbaTriggered.at(2U)) | vlSelf->__VnbaTriggered.at(3U)) 
          | vlSelf->__VnbaTriggered.at(4U)) | vlSelf->__VnbaTriggered.at(9U))) {
        Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___act_comb__TOP__7(vlSelf);
    }
}

void Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___eval_triggers__act(Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root* vlSelf);
void Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___timing_commit(Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___dump_triggers__act(Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root* vlSelf);
#endif  // VL_DEBUG
void Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___timing_resume(Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___dump_triggers__nba(Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root* vlSelf);
#endif  // VL_DEBUG

void Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___eval(Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_sdp_nsplit_ram_1024x36_R4W4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___eval\n"); );
    // Init
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
            Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___eval_triggers__act(vlSelf);
            Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___timing_commit(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if ((0x64U < vlSelf->__VactIterCount)) {
#ifdef VL_DEBUG
                    Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Compiler_Validationsdperror/RTL_testcases/mem_instantiation/sdp_nsplit_ram_1024x36_R4W4/sim/co_sim_tb/co_sim_sdp_nsplit_ram_1024x36_R4W4.v", 2, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                vlSelf->__VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___timing_resume(vlSelf);
                Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if ((0x64U < __VnbaIterCount)) {
#ifdef VL_DEBUG
                Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Compiler_Validationsdperror/RTL_testcases/mem_instantiation/sdp_nsplit_ram_1024x36_R4W4/sim/co_sim_tb/co_sim_sdp_nsplit_ram_1024x36_R4W4.v", 2, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___eval_nba(vlSelf);
        }
    }
}

void Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___timing_commit(Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_sdp_nsplit_ram_1024x36_R4W4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___timing_commit\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.at(0U))))) {
        vlSelf->__VtrigSched_ha56e2e32__0.commit("@(posedge co_sim_sdp_nsplit_ram_1024x36_R4W4.clk)");
    }
}

void Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___timing_resume(Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_sdp_nsplit_ram_1024x36_R4W4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___timing_resume\n"); );
    // Body
    if (vlSelf->__VactTriggered.at(0U)) {
        vlSelf->__VtrigSched_ha56e2e32__0.resume("@(posedge co_sim_sdp_nsplit_ram_1024x36_R4W4.clk)");
    }
    if (vlSelf->__VactTriggered.at(9U)) {
        vlSelf->__VdlySched.resume();
    }
}

#ifdef VL_DEBUG
void Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___eval_debug_assertions(Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_sdp_nsplit_ram_1024x36_R4W4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
