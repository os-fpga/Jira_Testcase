// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vco_sim_ram_true_dp_out_reg_512x16_block.h for the primary calling header

#include "Vco_sim_ram_true_dp_out_reg_512x16_block__pch.h"
#include "Vco_sim_ram_true_dp_out_reg_512x16_block__Syms.h"
#include "Vco_sim_ram_true_dp_out_reg_512x16_block___024root.h"

extern const VlWide<64>/*2047:0*/ Vco_sim_ram_true_dp_out_reg_512x16_block__ConstPool__CONST_h6be9aa18_0;
extern const VlWide<512>/*16383:0*/ Vco_sim_ram_true_dp_out_reg_512x16_block__ConstPool__CONST_h60a81158_0;

VL_ATTR_COLD void Vco_sim_ram_true_dp_out_reg_512x16_block___024root___eval_initial__TOP(Vco_sim_ram_true_dp_out_reg_512x16_block___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_ram_true_dp_out_reg_512x16_block__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_ram_true_dp_out_reg_512x16_block___024root___eval_initial__TOP\n"); );
    // Init
    VlUnpacked<CData/*0:0*/, 16384> co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__RAM2_DATA;
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__RAM2_DATA[__Vi0] = 0;
    }
    // Body
    vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x201U, vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__unnamedblk1__DOT__i)) {
        vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__golden__DOT__ram[(0x1ffU 
                                                                                & vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__unnamedblk1__DOT__i)] = 0U;
        vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__unnamedblk1__DOT__i);
    }
    vlSymsp->_vm_contextp__->dumpfile(std::string{"tb.vcd"});
    vlSymsp->_traceDumpOpen();
    vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__parity_RAM1__DOT__f_p = 0U;
    vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__parity_RAM1__DOT__g_p = 0U;
    while (VL_GTS_III(32, 0x400U, vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__parity_RAM1__DOT__g_p)) {
        vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__parity_RAM1__DOT__RAM1_PARITY[(0x3ffU 
                                                                                & vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__parity_RAM1__DOT__g_p)] 
            = ((2U & vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__parity_RAM1__DOT__RAM1_PARITY
                [(0x3ffU & vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__parity_RAM1__DOT__g_p)]) 
               | (1U & (Vco_sim_ram_true_dp_out_reg_512x16_block__ConstPool__CONST_h6be9aa18_0[
                        (0x3fU & (vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__parity_RAM1__DOT__f_p 
                                  >> 5U))] >> (0x1fU 
                                               & vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__parity_RAM1__DOT__f_p))));
        vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__parity_RAM1__DOT__f_p 
            = ((IData)(1U) + vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__parity_RAM1__DOT__f_p);
        vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__parity_RAM1__DOT__RAM1_PARITY[(0x3ffU 
                                                                                & vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__parity_RAM1__DOT__g_p)] 
            = ((1U & vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__parity_RAM1__DOT__RAM1_PARITY
                [(0x3ffU & vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__parity_RAM1__DOT__g_p)]) 
               | (2U & ((Vco_sim_ram_true_dp_out_reg_512x16_block__ConstPool__CONST_h6be9aa18_0[
                         (0x3fU & (vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__parity_RAM1__DOT__f_p 
                                   >> 5U))] >> (0x1fU 
                                                & vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__parity_RAM1__DOT__f_p)) 
                        << 1U)));
        vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__parity_RAM1__DOT__f_p 
            = ((IData)(1U) + vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__parity_RAM1__DOT__f_p);
        vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__parity_RAM1__DOT__h_p = 2U;
        vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__parity_RAM1__DOT__g_p 
            = ((IData)(1U) + vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__parity_RAM1__DOT__g_p);
    }
    vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__f = 0U;
    vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__g = 0U;
    while (VL_GTS_III(32, 0x400U, vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__g)) {
        vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__RAM1_DATA[(0x3ffU 
                                                                                & vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__g)] 
            = ((0xfffeU & vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__RAM1_DATA
                [(0x3ffU & vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__g)]) 
               | (1U & (Vco_sim_ram_true_dp_out_reg_512x16_block__ConstPool__CONST_h60a81158_0[
                        (0x1ffU & (vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__f 
                                   >> 5U))] >> (0x1fU 
                                                & vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__f))));
        vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__f 
            = ((IData)(1U) + vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__f);
        vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__RAM1_DATA[(0x3ffU 
                                                                                & vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__g)] 
            = ((0xfffdU & vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__RAM1_DATA
                [(0x3ffU & vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__g)]) 
               | (2U & ((Vco_sim_ram_true_dp_out_reg_512x16_block__ConstPool__CONST_h60a81158_0[
                         (0x1ffU & (vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__f 
                                    >> 5U))] >> (0x1fU 
                                                 & vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__f)) 
                        << 1U)));
        vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__f 
            = ((IData)(1U) + vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__f);
        vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__RAM1_DATA[(0x3ffU 
                                                                                & vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__g)] 
            = ((0xfffbU & vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__RAM1_DATA
                [(0x3ffU & vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__g)]) 
               | (4U & ((Vco_sim_ram_true_dp_out_reg_512x16_block__ConstPool__CONST_h60a81158_0[
                         (0x1ffU & (vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__f 
                                    >> 5U))] >> (0x1fU 
                                                 & vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__f)) 
                        << 2U)));
        vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__f 
            = ((IData)(1U) + vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__f);
        vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__RAM1_DATA[(0x3ffU 
                                                                                & vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__g)] 
            = ((0xfff7U & vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__RAM1_DATA
                [(0x3ffU & vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__g)]) 
               | (8U & ((Vco_sim_ram_true_dp_out_reg_512x16_block__ConstPool__CONST_h60a81158_0[
                         (0x1ffU & (vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__f 
                                    >> 5U))] >> (0x1fU 
                                                 & vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__f)) 
                        << 3U)));
        vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__f 
            = ((IData)(1U) + vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__f);
        vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__RAM1_DATA[(0x3ffU 
                                                                                & vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__g)] 
            = ((0xffefU & vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__RAM1_DATA
                [(0x3ffU & vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__g)]) 
               | (0x10U & ((Vco_sim_ram_true_dp_out_reg_512x16_block__ConstPool__CONST_h60a81158_0[
                            (0x1ffU & (vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__f 
                                       >> 5U))] >> 
                            (0x1fU & vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__f)) 
                           << 4U)));
        vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__f 
            = ((IData)(1U) + vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__f);
        vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__RAM1_DATA[(0x3ffU 
                                                                                & vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__g)] 
            = ((0xffdfU & vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__RAM1_DATA
                [(0x3ffU & vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__g)]) 
               | (0x20U & ((Vco_sim_ram_true_dp_out_reg_512x16_block__ConstPool__CONST_h60a81158_0[
                            (0x1ffU & (vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__f 
                                       >> 5U))] >> 
                            (0x1fU & vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__f)) 
                           << 5U)));
        vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__f 
            = ((IData)(1U) + vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__f);
        vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__RAM1_DATA[(0x3ffU 
                                                                                & vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__g)] 
            = ((0xffbfU & vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__RAM1_DATA
                [(0x3ffU & vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__g)]) 
               | (0x40U & ((Vco_sim_ram_true_dp_out_reg_512x16_block__ConstPool__CONST_h60a81158_0[
                            (0x1ffU & (vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__f 
                                       >> 5U))] >> 
                            (0x1fU & vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__f)) 
                           << 6U)));
        vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__f 
            = ((IData)(1U) + vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__f);
        vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__RAM1_DATA[(0x3ffU 
                                                                                & vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__g)] 
            = ((0xff7fU & vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__RAM1_DATA
                [(0x3ffU & vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__g)]) 
               | (0x80U & ((Vco_sim_ram_true_dp_out_reg_512x16_block__ConstPool__CONST_h60a81158_0[
                            (0x1ffU & (vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__f 
                                       >> 5U))] >> 
                            (0x1fU & vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__f)) 
                           << 7U)));
        vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__f 
            = ((IData)(1U) + vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__f);
        vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__RAM1_DATA[(0x3ffU 
                                                                                & vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__g)] 
            = ((0xfeffU & vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__RAM1_DATA
                [(0x3ffU & vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__g)]) 
               | (0x100U & ((Vco_sim_ram_true_dp_out_reg_512x16_block__ConstPool__CONST_h60a81158_0[
                             (0x1ffU & (vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__f 
                                        >> 5U))] >> 
                             (0x1fU & vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__f)) 
                            << 8U)));
        vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__f 
            = ((IData)(1U) + vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__f);
        vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__RAM1_DATA[(0x3ffU 
                                                                                & vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__g)] 
            = ((0xfdffU & vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__RAM1_DATA
                [(0x3ffU & vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__g)]) 
               | (0x200U & ((Vco_sim_ram_true_dp_out_reg_512x16_block__ConstPool__CONST_h60a81158_0[
                             (0x1ffU & (vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__f 
                                        >> 5U))] >> 
                             (0x1fU & vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__f)) 
                            << 9U)));
        vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__f 
            = ((IData)(1U) + vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__f);
        vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__RAM1_DATA[(0x3ffU 
                                                                                & vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__g)] 
            = ((0xfbffU & vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__RAM1_DATA
                [(0x3ffU & vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__g)]) 
               | (0x400U & ((Vco_sim_ram_true_dp_out_reg_512x16_block__ConstPool__CONST_h60a81158_0[
                             (0x1ffU & (vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__f 
                                        >> 5U))] >> 
                             (0x1fU & vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__f)) 
                            << 0xaU)));
        vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__f 
            = ((IData)(1U) + vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__f);
        vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__RAM1_DATA[(0x3ffU 
                                                                                & vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__g)] 
            = ((0xf7ffU & vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__RAM1_DATA
                [(0x3ffU & vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__g)]) 
               | (0x800U & ((Vco_sim_ram_true_dp_out_reg_512x16_block__ConstPool__CONST_h60a81158_0[
                             (0x1ffU & (vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__f 
                                        >> 5U))] >> 
                             (0x1fU & vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__f)) 
                            << 0xbU)));
        vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__f 
            = ((IData)(1U) + vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__f);
        vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__RAM1_DATA[(0x3ffU 
                                                                                & vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__g)] 
            = ((0xefffU & vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__RAM1_DATA
                [(0x3ffU & vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__g)]) 
               | (0x1000U & ((Vco_sim_ram_true_dp_out_reg_512x16_block__ConstPool__CONST_h60a81158_0[
                              (0x1ffU & (vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__f 
                                         >> 5U))] >> 
                              (0x1fU & vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__f)) 
                             << 0xcU)));
        vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__f 
            = ((IData)(1U) + vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__f);
        vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__RAM1_DATA[(0x3ffU 
                                                                                & vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__g)] 
            = ((0xdfffU & vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__RAM1_DATA
                [(0x3ffU & vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__g)]) 
               | (0x2000U & ((Vco_sim_ram_true_dp_out_reg_512x16_block__ConstPool__CONST_h60a81158_0[
                              (0x1ffU & (vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__f 
                                         >> 5U))] >> 
                              (0x1fU & vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__f)) 
                             << 0xdU)));
        vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__f 
            = ((IData)(1U) + vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__f);
        vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__RAM1_DATA[(0x3ffU 
                                                                                & vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__g)] 
            = ((0xbfffU & vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__RAM1_DATA
                [(0x3ffU & vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__g)]) 
               | (0x4000U & ((Vco_sim_ram_true_dp_out_reg_512x16_block__ConstPool__CONST_h60a81158_0[
                              (0x1ffU & (vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__f 
                                         >> 5U))] >> 
                              (0x1fU & vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__f)) 
                             << 0xeU)));
        vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__f 
            = ((IData)(1U) + vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__f);
        vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__RAM1_DATA[(0x3ffU 
                                                                                & vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__g)] 
            = ((0x7fffU & vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__RAM1_DATA
                [(0x3ffU & vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__g)]) 
               | (0x8000U & ((Vco_sim_ram_true_dp_out_reg_512x16_block__ConstPool__CONST_h60a81158_0[
                              (0x1ffU & (vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__f 
                                         >> 5U))] >> 
                              (0x1fU & vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__f)) 
                             << 0xfU)));
        vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__f 
            = ((IData)(1U) + vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__f);
        vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__h = 0x10U;
        vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__g 
            = ((IData)(1U) + vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__g);
    }
    vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__a = 0U;
    vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__b = 0U;
    while (VL_GTS_III(32, 0x4000U, vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__b)) {
        vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT____Vlvbound_hf948b197__0 
            = (1U & (Vco_sim_ram_true_dp_out_reg_512x16_block__ConstPool__CONST_h60a81158_0[
                     (0x1ffU & (vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__a 
                                >> 5U))] >> (0x1fU 
                                             & vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__a)));
        co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__RAM2_DATA[(0x3fffU 
                                                                                & vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__b)] 
            = vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT____Vlvbound_hf948b197__0;
        vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__a 
            = ((IData)(1U) + vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__a);
        vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__c = 1U;
        vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__b 
            = ((IData)(1U) + vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__b);
    }
    VL_TIMEFORMAT_IINI(0xfffffff7U, 0U, std::string{" ns"}, 5U, vlSymsp->_vm_contextp__);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vco_sim_ram_true_dp_out_reg_512x16_block___024root___dump_triggers__stl(Vco_sim_ram_true_dp_out_reg_512x16_block___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vco_sim_ram_true_dp_out_reg_512x16_block___024root___eval_triggers__stl(Vco_sim_ram_true_dp_out_reg_512x16_block___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_ram_true_dp_out_reg_512x16_block__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_ram_true_dp_out_reg_512x16_block___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vco_sim_ram_true_dp_out_reg_512x16_block___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
