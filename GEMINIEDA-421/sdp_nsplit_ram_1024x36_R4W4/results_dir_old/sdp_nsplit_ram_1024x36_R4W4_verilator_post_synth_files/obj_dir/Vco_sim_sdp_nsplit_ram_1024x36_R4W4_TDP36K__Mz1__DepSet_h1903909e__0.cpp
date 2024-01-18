// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vco_sim_sdp_nsplit_ram_1024x36_R4W4.h for the primary calling header

#include "verilated.h"

#include "Vco_sim_sdp_nsplit_ram_1024x36_R4W4_TDP36K__Mz1.h"

VL_INLINE_OPT void Vco_sim_sdp_nsplit_ram_1024x36_R4W4_TDP36K__Mz1___act_sequent__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__0(Vco_sim_sdp_nsplit_ram_1024x36_R4W4_TDP36K__Mz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_sdp_nsplit_ram_1024x36_R4W4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vco_sim_sdp_nsplit_ram_1024x36_R4W4_TDP36K__Mz1___act_sequent__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__0\n"); );
    // Init
    CData/*0:0*/ __Vdly__u1__DOT__uram__DOT__lcen_a;
    CData/*0:0*/ __Vdly__u1__DOT__uram__DOT__lwen_a;
    CData/*0:0*/ __Vdly__u1__DOT__uram__DOT__lcen_b;
    CData/*0:0*/ __Vdly__u1__DOT__uram__DOT__lwen_b;
    CData/*0:0*/ __Vdly__u2__DOT__uram__DOT__lcen_a;
    CData/*0:0*/ __Vdly__u2__DOT__uram__DOT__lwen_a;
    CData/*0:0*/ __Vdly__u2__DOT__uram__DOT__lcen_b;
    CData/*0:0*/ __Vdly__u2__DOT__uram__DOT__lwen_b;
    // Body
    __Vdly__u1__DOT__uram__DOT__lwen_a = vlSelf->__PVT__u1__DOT__uram__DOT__lwen_a;
    __Vdly__u1__DOT__uram__DOT__lcen_a = vlSelf->__PVT__u1__DOT__uram__DOT__lcen_a;
    __Vdly__u1__DOT__uram__DOT__lwen_b = vlSelf->__PVT__u1__DOT__uram__DOT__lwen_b;
    __Vdly__u1__DOT__uram__DOT__lcen_b = vlSelf->__PVT__u1__DOT__uram__DOT__lcen_b;
    __Vdly__u2__DOT__uram__DOT__lwen_a = vlSelf->__PVT__u2__DOT__uram__DOT__lwen_a;
    __Vdly__u2__DOT__uram__DOT__lcen_a = vlSelf->__PVT__u2__DOT__uram__DOT__lcen_a;
    __Vdly__u2__DOT__uram__DOT__lwen_b = vlSelf->__PVT__u2__DOT__uram__DOT__lwen_b;
    __Vdly__u2__DOT__uram__DOT__lcen_b = vlSelf->__PVT__u2__DOT__uram__DOT__lcen_b;
}

VL_INLINE_OPT void Vco_sim_sdp_nsplit_ram_1024x36_R4W4_TDP36K__Mz1___act_sequent__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__1(Vco_sim_sdp_nsplit_ram_1024x36_R4W4_TDP36K__Mz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_sdp_nsplit_ram_1024x36_R4W4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vco_sim_sdp_nsplit_ram_1024x36_R4W4_TDP36K__Mz1___act_sequent__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__1\n"); );
    // Body
    if ((1U & ((~ (IData)(vlSelf->__PVT__u1__DOT__uram__DOT__lwen_a)) 
               & (~ (IData)(vlSelf->__PVT__u1__DOT__uram__DOT__lcen_a))))) {
        vlSelf->__PVT__u1__DOT__uram__DOT__ram[vlSelf->__PVT__u1__DOT__uram__DOT__laddr_a] 
            = ((0x3fffeU & vlSelf->__PVT__u1__DOT__uram__DOT__ram
                [vlSelf->__PVT__u1__DOT__uram__DOT__laddr_a]) 
               | (1U & ((1U & vlSelf->__PVT__u1__DOT__uram__DOT__lwmsk_a)
                         ? vlSelf->__PVT__u1__DOT__uram__DOT__ram
                        [vlSelf->__PVT__u1__DOT__uram__DOT__laddr_a]
                         : vlSelf->__PVT__u1__DOT__uram__DOT__lwdata_a)));
        vlSelf->__PVT__u1__DOT__uram__DOT__lwen_a = 1U;
        vlSelf->__PVT__u1__DOT__uram__DOT__ram[vlSelf->__PVT__u1__DOT__uram__DOT__laddr_a] 
            = ((0x3fffdU & vlSelf->__PVT__u1__DOT__uram__DOT__ram
                [vlSelf->__PVT__u1__DOT__uram__DOT__laddr_a]) 
               | (2U & (((2U & vlSelf->__PVT__u1__DOT__uram__DOT__lwmsk_a)
                          ? (vlSelf->__PVT__u1__DOT__uram__DOT__ram
                             [vlSelf->__PVT__u1__DOT__uram__DOT__laddr_a] 
                             >> 1U) : (vlSelf->__PVT__u1__DOT__uram__DOT__lwdata_a 
                                       >> 1U)) << 1U)));
        vlSelf->__PVT__u1__DOT__uram__DOT__ram[vlSelf->__PVT__u1__DOT__uram__DOT__laddr_a] 
            = ((0x3fffbU & vlSelf->__PVT__u1__DOT__uram__DOT__ram
                [vlSelf->__PVT__u1__DOT__uram__DOT__laddr_a]) 
               | (4U & (((4U & vlSelf->__PVT__u1__DOT__uram__DOT__lwmsk_a)
                          ? (vlSelf->__PVT__u1__DOT__uram__DOT__ram
                             [vlSelf->__PVT__u1__DOT__uram__DOT__laddr_a] 
                             >> 2U) : (vlSelf->__PVT__u1__DOT__uram__DOT__lwdata_a 
                                       >> 2U)) << 2U)));
        vlSelf->__PVT__u1__DOT__uram__DOT__ram[vlSelf->__PVT__u1__DOT__uram__DOT__laddr_a] 
            = ((0x3fff7U & vlSelf->__PVT__u1__DOT__uram__DOT__ram
                [vlSelf->__PVT__u1__DOT__uram__DOT__laddr_a]) 
               | (8U & (((8U & vlSelf->__PVT__u1__DOT__uram__DOT__lwmsk_a)
                          ? (vlSelf->__PVT__u1__DOT__uram__DOT__ram
                             [vlSelf->__PVT__u1__DOT__uram__DOT__laddr_a] 
                             >> 3U) : (vlSelf->__PVT__u1__DOT__uram__DOT__lwdata_a 
                                       >> 3U)) << 3U)));
        vlSelf->__PVT__u1__DOT__uram__DOT__ram[vlSelf->__PVT__u1__DOT__uram__DOT__laddr_a] 
            = ((0x3ffefU & vlSelf->__PVT__u1__DOT__uram__DOT__ram
                [vlSelf->__PVT__u1__DOT__uram__DOT__laddr_a]) 
               | (0x10U & (((0x10U & vlSelf->__PVT__u1__DOT__uram__DOT__lwmsk_a)
                             ? (vlSelf->__PVT__u1__DOT__uram__DOT__ram
                                [vlSelf->__PVT__u1__DOT__uram__DOT__laddr_a] 
                                >> 4U) : (vlSelf->__PVT__u1__DOT__uram__DOT__lwdata_a 
                                          >> 4U)) << 4U)));
        vlSelf->__PVT__u1__DOT__uram__DOT__ram[vlSelf->__PVT__u1__DOT__uram__DOT__laddr_a] 
            = ((0x3ffdfU & vlSelf->__PVT__u1__DOT__uram__DOT__ram
                [vlSelf->__PVT__u1__DOT__uram__DOT__laddr_a]) 
               | (0x20U & (((0x20U & vlSelf->__PVT__u1__DOT__uram__DOT__lwmsk_a)
                             ? (vlSelf->__PVT__u1__DOT__uram__DOT__ram
                                [vlSelf->__PVT__u1__DOT__uram__DOT__laddr_a] 
                                >> 5U) : (vlSelf->__PVT__u1__DOT__uram__DOT__lwdata_a 
                                          >> 5U)) << 5U)));
        vlSelf->__PVT__u1__DOT__uram__DOT__ram[vlSelf->__PVT__u1__DOT__uram__DOT__laddr_a] 
            = ((0x3ffbfU & vlSelf->__PVT__u1__DOT__uram__DOT__ram
                [vlSelf->__PVT__u1__DOT__uram__DOT__laddr_a]) 
               | (0x40U & (((0x40U & vlSelf->__PVT__u1__DOT__uram__DOT__lwmsk_a)
                             ? (vlSelf->__PVT__u1__DOT__uram__DOT__ram
                                [vlSelf->__PVT__u1__DOT__uram__DOT__laddr_a] 
                                >> 6U) : (vlSelf->__PVT__u1__DOT__uram__DOT__lwdata_a 
                                          >> 6U)) << 6U)));
        vlSelf->__PVT__u1__DOT__uram__DOT__ram[vlSelf->__PVT__u1__DOT__uram__DOT__laddr_a] 
            = ((0x3ff7fU & vlSelf->__PVT__u1__DOT__uram__DOT__ram
                [vlSelf->__PVT__u1__DOT__uram__DOT__laddr_a]) 
               | (0x80U & (((0x80U & vlSelf->__PVT__u1__DOT__uram__DOT__lwmsk_a)
                             ? (vlSelf->__PVT__u1__DOT__uram__DOT__ram
                                [vlSelf->__PVT__u1__DOT__uram__DOT__laddr_a] 
                                >> 7U) : (vlSelf->__PVT__u1__DOT__uram__DOT__lwdata_a 
                                          >> 7U)) << 7U)));
        vlSelf->__PVT__u1__DOT__uram__DOT__ram[vlSelf->__PVT__u1__DOT__uram__DOT__laddr_a] 
            = ((0x3feffU & vlSelf->__PVT__u1__DOT__uram__DOT__ram
                [vlSelf->__PVT__u1__DOT__uram__DOT__laddr_a]) 
               | (0x100U & (((0x100U & vlSelf->__PVT__u1__DOT__uram__DOT__lwmsk_a)
                              ? (vlSelf->__PVT__u1__DOT__uram__DOT__ram
                                 [vlSelf->__PVT__u1__DOT__uram__DOT__laddr_a] 
                                 >> 8U) : (vlSelf->__PVT__u1__DOT__uram__DOT__lwdata_a 
                                           >> 8U)) 
                            << 8U)));
        vlSelf->__PVT__u1__DOT__uram__DOT__ram[vlSelf->__PVT__u1__DOT__uram__DOT__laddr_a] 
            = ((0x3fdffU & vlSelf->__PVT__u1__DOT__uram__DOT__ram
                [vlSelf->__PVT__u1__DOT__uram__DOT__laddr_a]) 
               | (0x200U & (((0x200U & vlSelf->__PVT__u1__DOT__uram__DOT__lwmsk_a)
                              ? (vlSelf->__PVT__u1__DOT__uram__DOT__ram
                                 [vlSelf->__PVT__u1__DOT__uram__DOT__laddr_a] 
                                 >> 9U) : (vlSelf->__PVT__u1__DOT__uram__DOT__lwdata_a 
                                           >> 9U)) 
                            << 9U)));
        vlSelf->__PVT__u1__DOT__uram__DOT__ram[vlSelf->__PVT__u1__DOT__uram__DOT__laddr_a] 
            = ((0x3fbffU & vlSelf->__PVT__u1__DOT__uram__DOT__ram
                [vlSelf->__PVT__u1__DOT__uram__DOT__laddr_a]) 
               | (0x400U & (((0x400U & vlSelf->__PVT__u1__DOT__uram__DOT__lwmsk_a)
                              ? (vlSelf->__PVT__u1__DOT__uram__DOT__ram
                                 [vlSelf->__PVT__u1__DOT__uram__DOT__laddr_a] 
                                 >> 0xaU) : (vlSelf->__PVT__u1__DOT__uram__DOT__lwdata_a 
                                             >> 0xaU)) 
                            << 0xaU)));
        vlSelf->__PVT__u1__DOT__uram__DOT__ram[vlSelf->__PVT__u1__DOT__uram__DOT__laddr_a] 
            = ((0x3f7ffU & vlSelf->__PVT__u1__DOT__uram__DOT__ram
                [vlSelf->__PVT__u1__DOT__uram__DOT__laddr_a]) 
               | (0x800U & (((0x800U & vlSelf->__PVT__u1__DOT__uram__DOT__lwmsk_a)
                              ? (vlSelf->__PVT__u1__DOT__uram__DOT__ram
                                 [vlSelf->__PVT__u1__DOT__uram__DOT__laddr_a] 
                                 >> 0xbU) : (vlSelf->__PVT__u1__DOT__uram__DOT__lwdata_a 
                                             >> 0xbU)) 
                            << 0xbU)));
        vlSelf->__PVT__u1__DOT__uram__DOT__ram[vlSelf->__PVT__u1__DOT__uram__DOT__laddr_a] 
            = ((0x3efffU & vlSelf->__PVT__u1__DOT__uram__DOT__ram
                [vlSelf->__PVT__u1__DOT__uram__DOT__laddr_a]) 
               | (0x1000U & (((0x1000U & vlSelf->__PVT__u1__DOT__uram__DOT__lwmsk_a)
                               ? (vlSelf->__PVT__u1__DOT__uram__DOT__ram
                                  [vlSelf->__PVT__u1__DOT__uram__DOT__laddr_a] 
                                  >> 0xcU) : (vlSelf->__PVT__u1__DOT__uram__DOT__lwdata_a 
                                              >> 0xcU)) 
                             << 0xcU)));
        vlSelf->__PVT__u1__DOT__uram__DOT__ram[vlSelf->__PVT__u1__DOT__uram__DOT__laddr_a] 
            = ((0x3dfffU & vlSelf->__PVT__u1__DOT__uram__DOT__ram
                [vlSelf->__PVT__u1__DOT__uram__DOT__laddr_a]) 
               | (0x2000U & (((0x2000U & vlSelf->__PVT__u1__DOT__uram__DOT__lwmsk_a)
                               ? (vlSelf->__PVT__u1__DOT__uram__DOT__ram
                                  [vlSelf->__PVT__u1__DOT__uram__DOT__laddr_a] 
                                  >> 0xdU) : (vlSelf->__PVT__u1__DOT__uram__DOT__lwdata_a 
                                              >> 0xdU)) 
                             << 0xdU)));
        vlSelf->__PVT__u1__DOT__uram__DOT__ram[vlSelf->__PVT__u1__DOT__uram__DOT__laddr_a] 
            = ((0x3bfffU & vlSelf->__PVT__u1__DOT__uram__DOT__ram
                [vlSelf->__PVT__u1__DOT__uram__DOT__laddr_a]) 
               | (0x4000U & (((0x4000U & vlSelf->__PVT__u1__DOT__uram__DOT__lwmsk_a)
                               ? (vlSelf->__PVT__u1__DOT__uram__DOT__ram
                                  [vlSelf->__PVT__u1__DOT__uram__DOT__laddr_a] 
                                  >> 0xeU) : (vlSelf->__PVT__u1__DOT__uram__DOT__lwdata_a 
                                              >> 0xeU)) 
                             << 0xeU)));
        vlSelf->__PVT__u1__DOT__uram__DOT__ram[vlSelf->__PVT__u1__DOT__uram__DOT__laddr_a] 
            = ((0x37fffU & vlSelf->__PVT__u1__DOT__uram__DOT__ram
                [vlSelf->__PVT__u1__DOT__uram__DOT__laddr_a]) 
               | (0x8000U & (((0x8000U & vlSelf->__PVT__u1__DOT__uram__DOT__lwmsk_a)
                               ? (vlSelf->__PVT__u1__DOT__uram__DOT__ram
                                  [vlSelf->__PVT__u1__DOT__uram__DOT__laddr_a] 
                                  >> 0xfU) : (vlSelf->__PVT__u1__DOT__uram__DOT__lwdata_a 
                                              >> 0xfU)) 
                             << 0xfU)));
        vlSelf->__PVT__u1__DOT__uram__DOT__ram[vlSelf->__PVT__u1__DOT__uram__DOT__laddr_a] 
            = ((0x2ffffU & vlSelf->__PVT__u1__DOT__uram__DOT__ram
                [vlSelf->__PVT__u1__DOT__uram__DOT__laddr_a]) 
               | (0x10000U & (((0x10000U & vlSelf->__PVT__u1__DOT__uram__DOT__lwmsk_a)
                                ? (vlSelf->__PVT__u1__DOT__uram__DOT__ram
                                   [vlSelf->__PVT__u1__DOT__uram__DOT__laddr_a] 
                                   >> 0x10U) : (vlSelf->__PVT__u1__DOT__uram__DOT__lwdata_a 
                                                >> 0x10U)) 
                              << 0x10U)));
        vlSelf->__PVT__u1__DOT__uram__DOT__ram[vlSelf->__PVT__u1__DOT__uram__DOT__laddr_a] 
            = ((0x1ffffU & vlSelf->__PVT__u1__DOT__uram__DOT__ram
                [vlSelf->__PVT__u1__DOT__uram__DOT__laddr_a]) 
               | (0x20000U & (((0x20000U & vlSelf->__PVT__u1__DOT__uram__DOT__lwmsk_a)
                                ? (vlSelf->__PVT__u1__DOT__uram__DOT__ram
                                   [vlSelf->__PVT__u1__DOT__uram__DOT__laddr_a] 
                                   >> 0x11U) : (vlSelf->__PVT__u1__DOT__uram__DOT__lwdata_a 
                                                >> 0x11U)) 
                              << 0x11U)));
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__u1__DOT__uram__DOT__lcen_a)))) {
        vlSelf->__PVT__u1__DOT__ram_rdata_a = vlSelf->__PVT__u1__DOT__uram__DOT__ram
            [vlSelf->__PVT__u1__DOT__uram__DOT__laddr_a];
        vlSelf->__PVT__u1__DOT__uram__DOT__lcen_a = 1U;
    }
}

VL_INLINE_OPT void Vco_sim_sdp_nsplit_ram_1024x36_R4W4_TDP36K__Mz1___act_sequent__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__2(Vco_sim_sdp_nsplit_ram_1024x36_R4W4_TDP36K__Mz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_sdp_nsplit_ram_1024x36_R4W4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vco_sim_sdp_nsplit_ram_1024x36_R4W4_TDP36K__Mz1___act_sequent__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__2\n"); );
    // Body
    if ((1U & ((~ (IData)(vlSelf->__PVT__u2__DOT__uram__DOT__lwen_a)) 
               & (~ (IData)(vlSelf->__PVT__u2__DOT__uram__DOT__lcen_a))))) {
        vlSelf->__PVT__u2__DOT__uram__DOT__ram[vlSelf->__PVT__u2__DOT__uram__DOT__laddr_a] 
            = ((0x3fffeU & vlSelf->__PVT__u2__DOT__uram__DOT__ram
                [vlSelf->__PVT__u2__DOT__uram__DOT__laddr_a]) 
               | (1U & ((1U & vlSelf->__PVT__u2__DOT__uram__DOT__lwmsk_a)
                         ? vlSelf->__PVT__u2__DOT__uram__DOT__ram
                        [vlSelf->__PVT__u2__DOT__uram__DOT__laddr_a]
                         : vlSelf->__PVT__u2__DOT__uram__DOT__lwdata_a)));
        vlSelf->__PVT__u2__DOT__uram__DOT__lwen_a = 1U;
        vlSelf->__PVT__u2__DOT__uram__DOT__ram[vlSelf->__PVT__u2__DOT__uram__DOT__laddr_a] 
            = ((0x3fffdU & vlSelf->__PVT__u2__DOT__uram__DOT__ram
                [vlSelf->__PVT__u2__DOT__uram__DOT__laddr_a]) 
               | (2U & (((2U & vlSelf->__PVT__u2__DOT__uram__DOT__lwmsk_a)
                          ? (vlSelf->__PVT__u2__DOT__uram__DOT__ram
                             [vlSelf->__PVT__u2__DOT__uram__DOT__laddr_a] 
                             >> 1U) : (vlSelf->__PVT__u2__DOT__uram__DOT__lwdata_a 
                                       >> 1U)) << 1U)));
        vlSelf->__PVT__u2__DOT__uram__DOT__ram[vlSelf->__PVT__u2__DOT__uram__DOT__laddr_a] 
            = ((0x3fffbU & vlSelf->__PVT__u2__DOT__uram__DOT__ram
                [vlSelf->__PVT__u2__DOT__uram__DOT__laddr_a]) 
               | (4U & (((4U & vlSelf->__PVT__u2__DOT__uram__DOT__lwmsk_a)
                          ? (vlSelf->__PVT__u2__DOT__uram__DOT__ram
                             [vlSelf->__PVT__u2__DOT__uram__DOT__laddr_a] 
                             >> 2U) : (vlSelf->__PVT__u2__DOT__uram__DOT__lwdata_a 
                                       >> 2U)) << 2U)));
        vlSelf->__PVT__u2__DOT__uram__DOT__ram[vlSelf->__PVT__u2__DOT__uram__DOT__laddr_a] 
            = ((0x3fff7U & vlSelf->__PVT__u2__DOT__uram__DOT__ram
                [vlSelf->__PVT__u2__DOT__uram__DOT__laddr_a]) 
               | (8U & (((8U & vlSelf->__PVT__u2__DOT__uram__DOT__lwmsk_a)
                          ? (vlSelf->__PVT__u2__DOT__uram__DOT__ram
                             [vlSelf->__PVT__u2__DOT__uram__DOT__laddr_a] 
                             >> 3U) : (vlSelf->__PVT__u2__DOT__uram__DOT__lwdata_a 
                                       >> 3U)) << 3U)));
        vlSelf->__PVT__u2__DOT__uram__DOT__ram[vlSelf->__PVT__u2__DOT__uram__DOT__laddr_a] 
            = ((0x3ffefU & vlSelf->__PVT__u2__DOT__uram__DOT__ram
                [vlSelf->__PVT__u2__DOT__uram__DOT__laddr_a]) 
               | (0x10U & (((0x10U & vlSelf->__PVT__u2__DOT__uram__DOT__lwmsk_a)
                             ? (vlSelf->__PVT__u2__DOT__uram__DOT__ram
                                [vlSelf->__PVT__u2__DOT__uram__DOT__laddr_a] 
                                >> 4U) : (vlSelf->__PVT__u2__DOT__uram__DOT__lwdata_a 
                                          >> 4U)) << 4U)));
        vlSelf->__PVT__u2__DOT__uram__DOT__ram[vlSelf->__PVT__u2__DOT__uram__DOT__laddr_a] 
            = ((0x3ffdfU & vlSelf->__PVT__u2__DOT__uram__DOT__ram
                [vlSelf->__PVT__u2__DOT__uram__DOT__laddr_a]) 
               | (0x20U & (((0x20U & vlSelf->__PVT__u2__DOT__uram__DOT__lwmsk_a)
                             ? (vlSelf->__PVT__u2__DOT__uram__DOT__ram
                                [vlSelf->__PVT__u2__DOT__uram__DOT__laddr_a] 
                                >> 5U) : (vlSelf->__PVT__u2__DOT__uram__DOT__lwdata_a 
                                          >> 5U)) << 5U)));
        vlSelf->__PVT__u2__DOT__uram__DOT__ram[vlSelf->__PVT__u2__DOT__uram__DOT__laddr_a] 
            = ((0x3ffbfU & vlSelf->__PVT__u2__DOT__uram__DOT__ram
                [vlSelf->__PVT__u2__DOT__uram__DOT__laddr_a]) 
               | (0x40U & (((0x40U & vlSelf->__PVT__u2__DOT__uram__DOT__lwmsk_a)
                             ? (vlSelf->__PVT__u2__DOT__uram__DOT__ram
                                [vlSelf->__PVT__u2__DOT__uram__DOT__laddr_a] 
                                >> 6U) : (vlSelf->__PVT__u2__DOT__uram__DOT__lwdata_a 
                                          >> 6U)) << 6U)));
        vlSelf->__PVT__u2__DOT__uram__DOT__ram[vlSelf->__PVT__u2__DOT__uram__DOT__laddr_a] 
            = ((0x3ff7fU & vlSelf->__PVT__u2__DOT__uram__DOT__ram
                [vlSelf->__PVT__u2__DOT__uram__DOT__laddr_a]) 
               | (0x80U & (((0x80U & vlSelf->__PVT__u2__DOT__uram__DOT__lwmsk_a)
                             ? (vlSelf->__PVT__u2__DOT__uram__DOT__ram
                                [vlSelf->__PVT__u2__DOT__uram__DOT__laddr_a] 
                                >> 7U) : (vlSelf->__PVT__u2__DOT__uram__DOT__lwdata_a 
                                          >> 7U)) << 7U)));
        vlSelf->__PVT__u2__DOT__uram__DOT__ram[vlSelf->__PVT__u2__DOT__uram__DOT__laddr_a] 
            = ((0x3feffU & vlSelf->__PVT__u2__DOT__uram__DOT__ram
                [vlSelf->__PVT__u2__DOT__uram__DOT__laddr_a]) 
               | (0x100U & (((0x100U & vlSelf->__PVT__u2__DOT__uram__DOT__lwmsk_a)
                              ? (vlSelf->__PVT__u2__DOT__uram__DOT__ram
                                 [vlSelf->__PVT__u2__DOT__uram__DOT__laddr_a] 
                                 >> 8U) : (vlSelf->__PVT__u2__DOT__uram__DOT__lwdata_a 
                                           >> 8U)) 
                            << 8U)));
        vlSelf->__PVT__u2__DOT__uram__DOT__ram[vlSelf->__PVT__u2__DOT__uram__DOT__laddr_a] 
            = ((0x3fdffU & vlSelf->__PVT__u2__DOT__uram__DOT__ram
                [vlSelf->__PVT__u2__DOT__uram__DOT__laddr_a]) 
               | (0x200U & (((0x200U & vlSelf->__PVT__u2__DOT__uram__DOT__lwmsk_a)
                              ? (vlSelf->__PVT__u2__DOT__uram__DOT__ram
                                 [vlSelf->__PVT__u2__DOT__uram__DOT__laddr_a] 
                                 >> 9U) : (vlSelf->__PVT__u2__DOT__uram__DOT__lwdata_a 
                                           >> 9U)) 
                            << 9U)));
        vlSelf->__PVT__u2__DOT__uram__DOT__ram[vlSelf->__PVT__u2__DOT__uram__DOT__laddr_a] 
            = ((0x3fbffU & vlSelf->__PVT__u2__DOT__uram__DOT__ram
                [vlSelf->__PVT__u2__DOT__uram__DOT__laddr_a]) 
               | (0x400U & (((0x400U & vlSelf->__PVT__u2__DOT__uram__DOT__lwmsk_a)
                              ? (vlSelf->__PVT__u2__DOT__uram__DOT__ram
                                 [vlSelf->__PVT__u2__DOT__uram__DOT__laddr_a] 
                                 >> 0xaU) : (vlSelf->__PVT__u2__DOT__uram__DOT__lwdata_a 
                                             >> 0xaU)) 
                            << 0xaU)));
        vlSelf->__PVT__u2__DOT__uram__DOT__ram[vlSelf->__PVT__u2__DOT__uram__DOT__laddr_a] 
            = ((0x3f7ffU & vlSelf->__PVT__u2__DOT__uram__DOT__ram
                [vlSelf->__PVT__u2__DOT__uram__DOT__laddr_a]) 
               | (0x800U & (((0x800U & vlSelf->__PVT__u2__DOT__uram__DOT__lwmsk_a)
                              ? (vlSelf->__PVT__u2__DOT__uram__DOT__ram
                                 [vlSelf->__PVT__u2__DOT__uram__DOT__laddr_a] 
                                 >> 0xbU) : (vlSelf->__PVT__u2__DOT__uram__DOT__lwdata_a 
                                             >> 0xbU)) 
                            << 0xbU)));
        vlSelf->__PVT__u2__DOT__uram__DOT__ram[vlSelf->__PVT__u2__DOT__uram__DOT__laddr_a] 
            = ((0x3efffU & vlSelf->__PVT__u2__DOT__uram__DOT__ram
                [vlSelf->__PVT__u2__DOT__uram__DOT__laddr_a]) 
               | (0x1000U & (((0x1000U & vlSelf->__PVT__u2__DOT__uram__DOT__lwmsk_a)
                               ? (vlSelf->__PVT__u2__DOT__uram__DOT__ram
                                  [vlSelf->__PVT__u2__DOT__uram__DOT__laddr_a] 
                                  >> 0xcU) : (vlSelf->__PVT__u2__DOT__uram__DOT__lwdata_a 
                                              >> 0xcU)) 
                             << 0xcU)));
        vlSelf->__PVT__u2__DOT__uram__DOT__ram[vlSelf->__PVT__u2__DOT__uram__DOT__laddr_a] 
            = ((0x3dfffU & vlSelf->__PVT__u2__DOT__uram__DOT__ram
                [vlSelf->__PVT__u2__DOT__uram__DOT__laddr_a]) 
               | (0x2000U & (((0x2000U & vlSelf->__PVT__u2__DOT__uram__DOT__lwmsk_a)
                               ? (vlSelf->__PVT__u2__DOT__uram__DOT__ram
                                  [vlSelf->__PVT__u2__DOT__uram__DOT__laddr_a] 
                                  >> 0xdU) : (vlSelf->__PVT__u2__DOT__uram__DOT__lwdata_a 
                                              >> 0xdU)) 
                             << 0xdU)));
        vlSelf->__PVT__u2__DOT__uram__DOT__ram[vlSelf->__PVT__u2__DOT__uram__DOT__laddr_a] 
            = ((0x3bfffU & vlSelf->__PVT__u2__DOT__uram__DOT__ram
                [vlSelf->__PVT__u2__DOT__uram__DOT__laddr_a]) 
               | (0x4000U & (((0x4000U & vlSelf->__PVT__u2__DOT__uram__DOT__lwmsk_a)
                               ? (vlSelf->__PVT__u2__DOT__uram__DOT__ram
                                  [vlSelf->__PVT__u2__DOT__uram__DOT__laddr_a] 
                                  >> 0xeU) : (vlSelf->__PVT__u2__DOT__uram__DOT__lwdata_a 
                                              >> 0xeU)) 
                             << 0xeU)));
        vlSelf->__PVT__u2__DOT__uram__DOT__ram[vlSelf->__PVT__u2__DOT__uram__DOT__laddr_a] 
            = ((0x37fffU & vlSelf->__PVT__u2__DOT__uram__DOT__ram
                [vlSelf->__PVT__u2__DOT__uram__DOT__laddr_a]) 
               | (0x8000U & (((0x8000U & vlSelf->__PVT__u2__DOT__uram__DOT__lwmsk_a)
                               ? (vlSelf->__PVT__u2__DOT__uram__DOT__ram
                                  [vlSelf->__PVT__u2__DOT__uram__DOT__laddr_a] 
                                  >> 0xfU) : (vlSelf->__PVT__u2__DOT__uram__DOT__lwdata_a 
                                              >> 0xfU)) 
                             << 0xfU)));
        vlSelf->__PVT__u2__DOT__uram__DOT__ram[vlSelf->__PVT__u2__DOT__uram__DOT__laddr_a] 
            = ((0x2ffffU & vlSelf->__PVT__u2__DOT__uram__DOT__ram
                [vlSelf->__PVT__u2__DOT__uram__DOT__laddr_a]) 
               | (0x10000U & (((0x10000U & vlSelf->__PVT__u2__DOT__uram__DOT__lwmsk_a)
                                ? (vlSelf->__PVT__u2__DOT__uram__DOT__ram
                                   [vlSelf->__PVT__u2__DOT__uram__DOT__laddr_a] 
                                   >> 0x10U) : (vlSelf->__PVT__u2__DOT__uram__DOT__lwdata_a 
                                                >> 0x10U)) 
                              << 0x10U)));
        vlSelf->__PVT__u2__DOT__uram__DOT__ram[vlSelf->__PVT__u2__DOT__uram__DOT__laddr_a] 
            = ((0x1ffffU & vlSelf->__PVT__u2__DOT__uram__DOT__ram
                [vlSelf->__PVT__u2__DOT__uram__DOT__laddr_a]) 
               | (0x20000U & (((0x20000U & vlSelf->__PVT__u2__DOT__uram__DOT__lwmsk_a)
                                ? (vlSelf->__PVT__u2__DOT__uram__DOT__ram
                                   [vlSelf->__PVT__u2__DOT__uram__DOT__laddr_a] 
                                   >> 0x11U) : (vlSelf->__PVT__u2__DOT__uram__DOT__lwdata_a 
                                                >> 0x11U)) 
                              << 0x11U)));
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__u2__DOT__uram__DOT__lcen_a)))) {
        vlSelf->__PVT__u2__DOT__ram_rdata_a = vlSelf->__PVT__u2__DOT__uram__DOT__ram
            [vlSelf->__PVT__u2__DOT__uram__DOT__laddr_a];
        vlSelf->__PVT__u2__DOT__uram__DOT__lcen_a = 1U;
    }
}

VL_INLINE_OPT void Vco_sim_sdp_nsplit_ram_1024x36_R4W4_TDP36K__Mz1___act_sequent__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__3(Vco_sim_sdp_nsplit_ram_1024x36_R4W4_TDP36K__Mz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_sdp_nsplit_ram_1024x36_R4W4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vco_sim_sdp_nsplit_ram_1024x36_R4W4_TDP36K__Mz1___act_sequent__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__3\n"); );
    // Body
    if ((1U & ((~ (IData)(vlSelf->__PVT__u1__DOT__uram__DOT__lwen_b)) 
               & (~ (IData)(vlSelf->__PVT__u1__DOT__uram__DOT__lcen_b))))) {
        vlSelf->__PVT__u1__DOT__uram__DOT__ram[vlSelf->__PVT__u1__DOT__uram__DOT__laddr_b] 
            = ((0x3fffeU & vlSelf->__PVT__u1__DOT__uram__DOT__ram
                [vlSelf->__PVT__u1__DOT__uram__DOT__laddr_b]) 
               | (1U & ((1U & vlSelf->__PVT__u1__DOT__uram__DOT__lwmsk_b)
                         ? vlSelf->__PVT__u1__DOT__uram__DOT__ram
                        [vlSelf->__PVT__u1__DOT__uram__DOT__laddr_b]
                         : vlSelf->__PVT__u1__DOT__uram__DOT__lwdata_b)));
        vlSelf->__PVT__u1__DOT__uram__DOT__lwen_b = 1U;
        vlSelf->__PVT__u1__DOT__uram__DOT__ram[vlSelf->__PVT__u1__DOT__uram__DOT__laddr_b] 
            = ((0x3fffdU & vlSelf->__PVT__u1__DOT__uram__DOT__ram
                [vlSelf->__PVT__u1__DOT__uram__DOT__laddr_b]) 
               | (2U & (((2U & vlSelf->__PVT__u1__DOT__uram__DOT__lwmsk_b)
                          ? (vlSelf->__PVT__u1__DOT__uram__DOT__ram
                             [vlSelf->__PVT__u1__DOT__uram__DOT__laddr_b] 
                             >> 1U) : (vlSelf->__PVT__u1__DOT__uram__DOT__lwdata_b 
                                       >> 1U)) << 1U)));
        vlSelf->__PVT__u1__DOT__uram__DOT__ram[vlSelf->__PVT__u1__DOT__uram__DOT__laddr_b] 
            = ((0x3fffbU & vlSelf->__PVT__u1__DOT__uram__DOT__ram
                [vlSelf->__PVT__u1__DOT__uram__DOT__laddr_b]) 
               | (4U & (((4U & vlSelf->__PVT__u1__DOT__uram__DOT__lwmsk_b)
                          ? (vlSelf->__PVT__u1__DOT__uram__DOT__ram
                             [vlSelf->__PVT__u1__DOT__uram__DOT__laddr_b] 
                             >> 2U) : (vlSelf->__PVT__u1__DOT__uram__DOT__lwdata_b 
                                       >> 2U)) << 2U)));
        vlSelf->__PVT__u1__DOT__uram__DOT__ram[vlSelf->__PVT__u1__DOT__uram__DOT__laddr_b] 
            = ((0x3fff7U & vlSelf->__PVT__u1__DOT__uram__DOT__ram
                [vlSelf->__PVT__u1__DOT__uram__DOT__laddr_b]) 
               | (8U & (((8U & vlSelf->__PVT__u1__DOT__uram__DOT__lwmsk_b)
                          ? (vlSelf->__PVT__u1__DOT__uram__DOT__ram
                             [vlSelf->__PVT__u1__DOT__uram__DOT__laddr_b] 
                             >> 3U) : (vlSelf->__PVT__u1__DOT__uram__DOT__lwdata_b 
                                       >> 3U)) << 3U)));
        vlSelf->__PVT__u1__DOT__uram__DOT__ram[vlSelf->__PVT__u1__DOT__uram__DOT__laddr_b] 
            = ((0x3ffefU & vlSelf->__PVT__u1__DOT__uram__DOT__ram
                [vlSelf->__PVT__u1__DOT__uram__DOT__laddr_b]) 
               | (0x10U & (((0x10U & vlSelf->__PVT__u1__DOT__uram__DOT__lwmsk_b)
                             ? (vlSelf->__PVT__u1__DOT__uram__DOT__ram
                                [vlSelf->__PVT__u1__DOT__uram__DOT__laddr_b] 
                                >> 4U) : (vlSelf->__PVT__u1__DOT__uram__DOT__lwdata_b 
                                          >> 4U)) << 4U)));
        vlSelf->__PVT__u1__DOT__uram__DOT__ram[vlSelf->__PVT__u1__DOT__uram__DOT__laddr_b] 
            = ((0x3ffdfU & vlSelf->__PVT__u1__DOT__uram__DOT__ram
                [vlSelf->__PVT__u1__DOT__uram__DOT__laddr_b]) 
               | (0x20U & (((0x20U & vlSelf->__PVT__u1__DOT__uram__DOT__lwmsk_b)
                             ? (vlSelf->__PVT__u1__DOT__uram__DOT__ram
                                [vlSelf->__PVT__u1__DOT__uram__DOT__laddr_b] 
                                >> 5U) : (vlSelf->__PVT__u1__DOT__uram__DOT__lwdata_b 
                                          >> 5U)) << 5U)));
        vlSelf->__PVT__u1__DOT__uram__DOT__ram[vlSelf->__PVT__u1__DOT__uram__DOT__laddr_b] 
            = ((0x3ffbfU & vlSelf->__PVT__u1__DOT__uram__DOT__ram
                [vlSelf->__PVT__u1__DOT__uram__DOT__laddr_b]) 
               | (0x40U & (((0x40U & vlSelf->__PVT__u1__DOT__uram__DOT__lwmsk_b)
                             ? (vlSelf->__PVT__u1__DOT__uram__DOT__ram
                                [vlSelf->__PVT__u1__DOT__uram__DOT__laddr_b] 
                                >> 6U) : (vlSelf->__PVT__u1__DOT__uram__DOT__lwdata_b 
                                          >> 6U)) << 6U)));
        vlSelf->__PVT__u1__DOT__uram__DOT__ram[vlSelf->__PVT__u1__DOT__uram__DOT__laddr_b] 
            = ((0x3ff7fU & vlSelf->__PVT__u1__DOT__uram__DOT__ram
                [vlSelf->__PVT__u1__DOT__uram__DOT__laddr_b]) 
               | (0x80U & (((0x80U & vlSelf->__PVT__u1__DOT__uram__DOT__lwmsk_b)
                             ? (vlSelf->__PVT__u1__DOT__uram__DOT__ram
                                [vlSelf->__PVT__u1__DOT__uram__DOT__laddr_b] 
                                >> 7U) : (vlSelf->__PVT__u1__DOT__uram__DOT__lwdata_b 
                                          >> 7U)) << 7U)));
        vlSelf->__PVT__u1__DOT__uram__DOT__ram[vlSelf->__PVT__u1__DOT__uram__DOT__laddr_b] 
            = ((0x3feffU & vlSelf->__PVT__u1__DOT__uram__DOT__ram
                [vlSelf->__PVT__u1__DOT__uram__DOT__laddr_b]) 
               | (0x100U & (((0x100U & vlSelf->__PVT__u1__DOT__uram__DOT__lwmsk_b)
                              ? (vlSelf->__PVT__u1__DOT__uram__DOT__ram
                                 [vlSelf->__PVT__u1__DOT__uram__DOT__laddr_b] 
                                 >> 8U) : (vlSelf->__PVT__u1__DOT__uram__DOT__lwdata_b 
                                           >> 8U)) 
                            << 8U)));
        vlSelf->__PVT__u1__DOT__uram__DOT__ram[vlSelf->__PVT__u1__DOT__uram__DOT__laddr_b] 
            = ((0x3fdffU & vlSelf->__PVT__u1__DOT__uram__DOT__ram
                [vlSelf->__PVT__u1__DOT__uram__DOT__laddr_b]) 
               | (0x200U & (((0x200U & vlSelf->__PVT__u1__DOT__uram__DOT__lwmsk_b)
                              ? (vlSelf->__PVT__u1__DOT__uram__DOT__ram
                                 [vlSelf->__PVT__u1__DOT__uram__DOT__laddr_b] 
                                 >> 9U) : (vlSelf->__PVT__u1__DOT__uram__DOT__lwdata_b 
                                           >> 9U)) 
                            << 9U)));
        vlSelf->__PVT__u1__DOT__uram__DOT__ram[vlSelf->__PVT__u1__DOT__uram__DOT__laddr_b] 
            = ((0x3fbffU & vlSelf->__PVT__u1__DOT__uram__DOT__ram
                [vlSelf->__PVT__u1__DOT__uram__DOT__laddr_b]) 
               | (0x400U & (((0x400U & vlSelf->__PVT__u1__DOT__uram__DOT__lwmsk_b)
                              ? (vlSelf->__PVT__u1__DOT__uram__DOT__ram
                                 [vlSelf->__PVT__u1__DOT__uram__DOT__laddr_b] 
                                 >> 0xaU) : (vlSelf->__PVT__u1__DOT__uram__DOT__lwdata_b 
                                             >> 0xaU)) 
                            << 0xaU)));
        vlSelf->__PVT__u1__DOT__uram__DOT__ram[vlSelf->__PVT__u1__DOT__uram__DOT__laddr_b] 
            = ((0x3f7ffU & vlSelf->__PVT__u1__DOT__uram__DOT__ram
                [vlSelf->__PVT__u1__DOT__uram__DOT__laddr_b]) 
               | (0x800U & (((0x800U & vlSelf->__PVT__u1__DOT__uram__DOT__lwmsk_b)
                              ? (vlSelf->__PVT__u1__DOT__uram__DOT__ram
                                 [vlSelf->__PVT__u1__DOT__uram__DOT__laddr_b] 
                                 >> 0xbU) : (vlSelf->__PVT__u1__DOT__uram__DOT__lwdata_b 
                                             >> 0xbU)) 
                            << 0xbU)));
        vlSelf->__PVT__u1__DOT__uram__DOT__ram[vlSelf->__PVT__u1__DOT__uram__DOT__laddr_b] 
            = ((0x3efffU & vlSelf->__PVT__u1__DOT__uram__DOT__ram
                [vlSelf->__PVT__u1__DOT__uram__DOT__laddr_b]) 
               | (0x1000U & (((0x1000U & vlSelf->__PVT__u1__DOT__uram__DOT__lwmsk_b)
                               ? (vlSelf->__PVT__u1__DOT__uram__DOT__ram
                                  [vlSelf->__PVT__u1__DOT__uram__DOT__laddr_b] 
                                  >> 0xcU) : (vlSelf->__PVT__u1__DOT__uram__DOT__lwdata_b 
                                              >> 0xcU)) 
                             << 0xcU)));
        vlSelf->__PVT__u1__DOT__uram__DOT__ram[vlSelf->__PVT__u1__DOT__uram__DOT__laddr_b] 
            = ((0x3dfffU & vlSelf->__PVT__u1__DOT__uram__DOT__ram
                [vlSelf->__PVT__u1__DOT__uram__DOT__laddr_b]) 
               | (0x2000U & (((0x2000U & vlSelf->__PVT__u1__DOT__uram__DOT__lwmsk_b)
                               ? (vlSelf->__PVT__u1__DOT__uram__DOT__ram
                                  [vlSelf->__PVT__u1__DOT__uram__DOT__laddr_b] 
                                  >> 0xdU) : (vlSelf->__PVT__u1__DOT__uram__DOT__lwdata_b 
                                              >> 0xdU)) 
                             << 0xdU)));
        vlSelf->__PVT__u1__DOT__uram__DOT__ram[vlSelf->__PVT__u1__DOT__uram__DOT__laddr_b] 
            = ((0x3bfffU & vlSelf->__PVT__u1__DOT__uram__DOT__ram
                [vlSelf->__PVT__u1__DOT__uram__DOT__laddr_b]) 
               | (0x4000U & (((0x4000U & vlSelf->__PVT__u1__DOT__uram__DOT__lwmsk_b)
                               ? (vlSelf->__PVT__u1__DOT__uram__DOT__ram
                                  [vlSelf->__PVT__u1__DOT__uram__DOT__laddr_b] 
                                  >> 0xeU) : (vlSelf->__PVT__u1__DOT__uram__DOT__lwdata_b 
                                              >> 0xeU)) 
                             << 0xeU)));
        vlSelf->__PVT__u1__DOT__uram__DOT__ram[vlSelf->__PVT__u1__DOT__uram__DOT__laddr_b] 
            = ((0x37fffU & vlSelf->__PVT__u1__DOT__uram__DOT__ram
                [vlSelf->__PVT__u1__DOT__uram__DOT__laddr_b]) 
               | (0x8000U & (((0x8000U & vlSelf->__PVT__u1__DOT__uram__DOT__lwmsk_b)
                               ? (vlSelf->__PVT__u1__DOT__uram__DOT__ram
                                  [vlSelf->__PVT__u1__DOT__uram__DOT__laddr_b] 
                                  >> 0xfU) : (vlSelf->__PVT__u1__DOT__uram__DOT__lwdata_b 
                                              >> 0xfU)) 
                             << 0xfU)));
        vlSelf->__PVT__u1__DOT__uram__DOT__ram[vlSelf->__PVT__u1__DOT__uram__DOT__laddr_b] 
            = ((0x2ffffU & vlSelf->__PVT__u1__DOT__uram__DOT__ram
                [vlSelf->__PVT__u1__DOT__uram__DOT__laddr_b]) 
               | (0x10000U & (((0x10000U & vlSelf->__PVT__u1__DOT__uram__DOT__lwmsk_b)
                                ? (vlSelf->__PVT__u1__DOT__uram__DOT__ram
                                   [vlSelf->__PVT__u1__DOT__uram__DOT__laddr_b] 
                                   >> 0x10U) : (vlSelf->__PVT__u1__DOT__uram__DOT__lwdata_b 
                                                >> 0x10U)) 
                              << 0x10U)));
        vlSelf->__PVT__u1__DOT__uram__DOT__ram[vlSelf->__PVT__u1__DOT__uram__DOT__laddr_b] 
            = ((0x1ffffU & vlSelf->__PVT__u1__DOT__uram__DOT__ram
                [vlSelf->__PVT__u1__DOT__uram__DOT__laddr_b]) 
               | (0x20000U & (((0x20000U & vlSelf->__PVT__u1__DOT__uram__DOT__lwmsk_b)
                                ? (vlSelf->__PVT__u1__DOT__uram__DOT__ram
                                   [vlSelf->__PVT__u1__DOT__uram__DOT__laddr_b] 
                                   >> 0x11U) : (vlSelf->__PVT__u1__DOT__uram__DOT__lwdata_b 
                                                >> 0x11U)) 
                              << 0x11U)));
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__u1__DOT__uram__DOT__lcen_b)))) {
        vlSelf->__PVT__u1__DOT__ram_rdata_b = vlSelf->__PVT__u1__DOT__uram__DOT__ram
            [vlSelf->__PVT__u1__DOT__uram__DOT__laddr_b];
        vlSelf->__PVT__u1__DOT__uram__DOT__lcen_b = 1U;
    }
}

VL_INLINE_OPT void Vco_sim_sdp_nsplit_ram_1024x36_R4W4_TDP36K__Mz1___act_sequent__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__4(Vco_sim_sdp_nsplit_ram_1024x36_R4W4_TDP36K__Mz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_sdp_nsplit_ram_1024x36_R4W4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vco_sim_sdp_nsplit_ram_1024x36_R4W4_TDP36K__Mz1___act_sequent__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__4\n"); );
    // Body
    if ((1U & ((~ (IData)(vlSelf->__PVT__u2__DOT__uram__DOT__lwen_b)) 
               & (~ (IData)(vlSelf->__PVT__u2__DOT__uram__DOT__lcen_b))))) {
        vlSelf->__PVT__u2__DOT__uram__DOT__ram[vlSelf->__PVT__u2__DOT__uram__DOT__laddr_b] 
            = ((0x3fffeU & vlSelf->__PVT__u2__DOT__uram__DOT__ram
                [vlSelf->__PVT__u2__DOT__uram__DOT__laddr_b]) 
               | (1U & ((1U & vlSelf->__PVT__u2__DOT__uram__DOT__lwmsk_b)
                         ? vlSelf->__PVT__u2__DOT__uram__DOT__ram
                        [vlSelf->__PVT__u2__DOT__uram__DOT__laddr_b]
                         : vlSelf->__PVT__u2__DOT__uram__DOT__lwdata_b)));
        vlSelf->__PVT__u2__DOT__uram__DOT__lwen_b = 1U;
        vlSelf->__PVT__u2__DOT__uram__DOT__ram[vlSelf->__PVT__u2__DOT__uram__DOT__laddr_b] 
            = ((0x3fffdU & vlSelf->__PVT__u2__DOT__uram__DOT__ram
                [vlSelf->__PVT__u2__DOT__uram__DOT__laddr_b]) 
               | (2U & (((2U & vlSelf->__PVT__u2__DOT__uram__DOT__lwmsk_b)
                          ? (vlSelf->__PVT__u2__DOT__uram__DOT__ram
                             [vlSelf->__PVT__u2__DOT__uram__DOT__laddr_b] 
                             >> 1U) : (vlSelf->__PVT__u2__DOT__uram__DOT__lwdata_b 
                                       >> 1U)) << 1U)));
        vlSelf->__PVT__u2__DOT__uram__DOT__ram[vlSelf->__PVT__u2__DOT__uram__DOT__laddr_b] 
            = ((0x3fffbU & vlSelf->__PVT__u2__DOT__uram__DOT__ram
                [vlSelf->__PVT__u2__DOT__uram__DOT__laddr_b]) 
               | (4U & (((4U & vlSelf->__PVT__u2__DOT__uram__DOT__lwmsk_b)
                          ? (vlSelf->__PVT__u2__DOT__uram__DOT__ram
                             [vlSelf->__PVT__u2__DOT__uram__DOT__laddr_b] 
                             >> 2U) : (vlSelf->__PVT__u2__DOT__uram__DOT__lwdata_b 
                                       >> 2U)) << 2U)));
        vlSelf->__PVT__u2__DOT__uram__DOT__ram[vlSelf->__PVT__u2__DOT__uram__DOT__laddr_b] 
            = ((0x3fff7U & vlSelf->__PVT__u2__DOT__uram__DOT__ram
                [vlSelf->__PVT__u2__DOT__uram__DOT__laddr_b]) 
               | (8U & (((8U & vlSelf->__PVT__u2__DOT__uram__DOT__lwmsk_b)
                          ? (vlSelf->__PVT__u2__DOT__uram__DOT__ram
                             [vlSelf->__PVT__u2__DOT__uram__DOT__laddr_b] 
                             >> 3U) : (vlSelf->__PVT__u2__DOT__uram__DOT__lwdata_b 
                                       >> 3U)) << 3U)));
        vlSelf->__PVT__u2__DOT__uram__DOT__ram[vlSelf->__PVT__u2__DOT__uram__DOT__laddr_b] 
            = ((0x3ffefU & vlSelf->__PVT__u2__DOT__uram__DOT__ram
                [vlSelf->__PVT__u2__DOT__uram__DOT__laddr_b]) 
               | (0x10U & (((0x10U & vlSelf->__PVT__u2__DOT__uram__DOT__lwmsk_b)
                             ? (vlSelf->__PVT__u2__DOT__uram__DOT__ram
                                [vlSelf->__PVT__u2__DOT__uram__DOT__laddr_b] 
                                >> 4U) : (vlSelf->__PVT__u2__DOT__uram__DOT__lwdata_b 
                                          >> 4U)) << 4U)));
        vlSelf->__PVT__u2__DOT__uram__DOT__ram[vlSelf->__PVT__u2__DOT__uram__DOT__laddr_b] 
            = ((0x3ffdfU & vlSelf->__PVT__u2__DOT__uram__DOT__ram
                [vlSelf->__PVT__u2__DOT__uram__DOT__laddr_b]) 
               | (0x20U & (((0x20U & vlSelf->__PVT__u2__DOT__uram__DOT__lwmsk_b)
                             ? (vlSelf->__PVT__u2__DOT__uram__DOT__ram
                                [vlSelf->__PVT__u2__DOT__uram__DOT__laddr_b] 
                                >> 5U) : (vlSelf->__PVT__u2__DOT__uram__DOT__lwdata_b 
                                          >> 5U)) << 5U)));
        vlSelf->__PVT__u2__DOT__uram__DOT__ram[vlSelf->__PVT__u2__DOT__uram__DOT__laddr_b] 
            = ((0x3ffbfU & vlSelf->__PVT__u2__DOT__uram__DOT__ram
                [vlSelf->__PVT__u2__DOT__uram__DOT__laddr_b]) 
               | (0x40U & (((0x40U & vlSelf->__PVT__u2__DOT__uram__DOT__lwmsk_b)
                             ? (vlSelf->__PVT__u2__DOT__uram__DOT__ram
                                [vlSelf->__PVT__u2__DOT__uram__DOT__laddr_b] 
                                >> 6U) : (vlSelf->__PVT__u2__DOT__uram__DOT__lwdata_b 
                                          >> 6U)) << 6U)));
        vlSelf->__PVT__u2__DOT__uram__DOT__ram[vlSelf->__PVT__u2__DOT__uram__DOT__laddr_b] 
            = ((0x3ff7fU & vlSelf->__PVT__u2__DOT__uram__DOT__ram
                [vlSelf->__PVT__u2__DOT__uram__DOT__laddr_b]) 
               | (0x80U & (((0x80U & vlSelf->__PVT__u2__DOT__uram__DOT__lwmsk_b)
                             ? (vlSelf->__PVT__u2__DOT__uram__DOT__ram
                                [vlSelf->__PVT__u2__DOT__uram__DOT__laddr_b] 
                                >> 7U) : (vlSelf->__PVT__u2__DOT__uram__DOT__lwdata_b 
                                          >> 7U)) << 7U)));
        vlSelf->__PVT__u2__DOT__uram__DOT__ram[vlSelf->__PVT__u2__DOT__uram__DOT__laddr_b] 
            = ((0x3feffU & vlSelf->__PVT__u2__DOT__uram__DOT__ram
                [vlSelf->__PVT__u2__DOT__uram__DOT__laddr_b]) 
               | (0x100U & (((0x100U & vlSelf->__PVT__u2__DOT__uram__DOT__lwmsk_b)
                              ? (vlSelf->__PVT__u2__DOT__uram__DOT__ram
                                 [vlSelf->__PVT__u2__DOT__uram__DOT__laddr_b] 
                                 >> 8U) : (vlSelf->__PVT__u2__DOT__uram__DOT__lwdata_b 
                                           >> 8U)) 
                            << 8U)));
        vlSelf->__PVT__u2__DOT__uram__DOT__ram[vlSelf->__PVT__u2__DOT__uram__DOT__laddr_b] 
            = ((0x3fdffU & vlSelf->__PVT__u2__DOT__uram__DOT__ram
                [vlSelf->__PVT__u2__DOT__uram__DOT__laddr_b]) 
               | (0x200U & (((0x200U & vlSelf->__PVT__u2__DOT__uram__DOT__lwmsk_b)
                              ? (vlSelf->__PVT__u2__DOT__uram__DOT__ram
                                 [vlSelf->__PVT__u2__DOT__uram__DOT__laddr_b] 
                                 >> 9U) : (vlSelf->__PVT__u2__DOT__uram__DOT__lwdata_b 
                                           >> 9U)) 
                            << 9U)));
        vlSelf->__PVT__u2__DOT__uram__DOT__ram[vlSelf->__PVT__u2__DOT__uram__DOT__laddr_b] 
            = ((0x3fbffU & vlSelf->__PVT__u2__DOT__uram__DOT__ram
                [vlSelf->__PVT__u2__DOT__uram__DOT__laddr_b]) 
               | (0x400U & (((0x400U & vlSelf->__PVT__u2__DOT__uram__DOT__lwmsk_b)
                              ? (vlSelf->__PVT__u2__DOT__uram__DOT__ram
                                 [vlSelf->__PVT__u2__DOT__uram__DOT__laddr_b] 
                                 >> 0xaU) : (vlSelf->__PVT__u2__DOT__uram__DOT__lwdata_b 
                                             >> 0xaU)) 
                            << 0xaU)));
        vlSelf->__PVT__u2__DOT__uram__DOT__ram[vlSelf->__PVT__u2__DOT__uram__DOT__laddr_b] 
            = ((0x3f7ffU & vlSelf->__PVT__u2__DOT__uram__DOT__ram
                [vlSelf->__PVT__u2__DOT__uram__DOT__laddr_b]) 
               | (0x800U & (((0x800U & vlSelf->__PVT__u2__DOT__uram__DOT__lwmsk_b)
                              ? (vlSelf->__PVT__u2__DOT__uram__DOT__ram
                                 [vlSelf->__PVT__u2__DOT__uram__DOT__laddr_b] 
                                 >> 0xbU) : (vlSelf->__PVT__u2__DOT__uram__DOT__lwdata_b 
                                             >> 0xbU)) 
                            << 0xbU)));
        vlSelf->__PVT__u2__DOT__uram__DOT__ram[vlSelf->__PVT__u2__DOT__uram__DOT__laddr_b] 
            = ((0x3efffU & vlSelf->__PVT__u2__DOT__uram__DOT__ram
                [vlSelf->__PVT__u2__DOT__uram__DOT__laddr_b]) 
               | (0x1000U & (((0x1000U & vlSelf->__PVT__u2__DOT__uram__DOT__lwmsk_b)
                               ? (vlSelf->__PVT__u2__DOT__uram__DOT__ram
                                  [vlSelf->__PVT__u2__DOT__uram__DOT__laddr_b] 
                                  >> 0xcU) : (vlSelf->__PVT__u2__DOT__uram__DOT__lwdata_b 
                                              >> 0xcU)) 
                             << 0xcU)));
        vlSelf->__PVT__u2__DOT__uram__DOT__ram[vlSelf->__PVT__u2__DOT__uram__DOT__laddr_b] 
            = ((0x3dfffU & vlSelf->__PVT__u2__DOT__uram__DOT__ram
                [vlSelf->__PVT__u2__DOT__uram__DOT__laddr_b]) 
               | (0x2000U & (((0x2000U & vlSelf->__PVT__u2__DOT__uram__DOT__lwmsk_b)
                               ? (vlSelf->__PVT__u2__DOT__uram__DOT__ram
                                  [vlSelf->__PVT__u2__DOT__uram__DOT__laddr_b] 
                                  >> 0xdU) : (vlSelf->__PVT__u2__DOT__uram__DOT__lwdata_b 
                                              >> 0xdU)) 
                             << 0xdU)));
        vlSelf->__PVT__u2__DOT__uram__DOT__ram[vlSelf->__PVT__u2__DOT__uram__DOT__laddr_b] 
            = ((0x3bfffU & vlSelf->__PVT__u2__DOT__uram__DOT__ram
                [vlSelf->__PVT__u2__DOT__uram__DOT__laddr_b]) 
               | (0x4000U & (((0x4000U & vlSelf->__PVT__u2__DOT__uram__DOT__lwmsk_b)
                               ? (vlSelf->__PVT__u2__DOT__uram__DOT__ram
                                  [vlSelf->__PVT__u2__DOT__uram__DOT__laddr_b] 
                                  >> 0xeU) : (vlSelf->__PVT__u2__DOT__uram__DOT__lwdata_b 
                                              >> 0xeU)) 
                             << 0xeU)));
        vlSelf->__PVT__u2__DOT__uram__DOT__ram[vlSelf->__PVT__u2__DOT__uram__DOT__laddr_b] 
            = ((0x37fffU & vlSelf->__PVT__u2__DOT__uram__DOT__ram
                [vlSelf->__PVT__u2__DOT__uram__DOT__laddr_b]) 
               | (0x8000U & (((0x8000U & vlSelf->__PVT__u2__DOT__uram__DOT__lwmsk_b)
                               ? (vlSelf->__PVT__u2__DOT__uram__DOT__ram
                                  [vlSelf->__PVT__u2__DOT__uram__DOT__laddr_b] 
                                  >> 0xfU) : (vlSelf->__PVT__u2__DOT__uram__DOT__lwdata_b 
                                              >> 0xfU)) 
                             << 0xfU)));
        vlSelf->__PVT__u2__DOT__uram__DOT__ram[vlSelf->__PVT__u2__DOT__uram__DOT__laddr_b] 
            = ((0x2ffffU & vlSelf->__PVT__u2__DOT__uram__DOT__ram
                [vlSelf->__PVT__u2__DOT__uram__DOT__laddr_b]) 
               | (0x10000U & (((0x10000U & vlSelf->__PVT__u2__DOT__uram__DOT__lwmsk_b)
                                ? (vlSelf->__PVT__u2__DOT__uram__DOT__ram
                                   [vlSelf->__PVT__u2__DOT__uram__DOT__laddr_b] 
                                   >> 0x10U) : (vlSelf->__PVT__u2__DOT__uram__DOT__lwdata_b 
                                                >> 0x10U)) 
                              << 0x10U)));
        vlSelf->__PVT__u2__DOT__uram__DOT__ram[vlSelf->__PVT__u2__DOT__uram__DOT__laddr_b] 
            = ((0x1ffffU & vlSelf->__PVT__u2__DOT__uram__DOT__ram
                [vlSelf->__PVT__u2__DOT__uram__DOT__laddr_b]) 
               | (0x20000U & (((0x20000U & vlSelf->__PVT__u2__DOT__uram__DOT__lwmsk_b)
                                ? (vlSelf->__PVT__u2__DOT__uram__DOT__ram
                                   [vlSelf->__PVT__u2__DOT__uram__DOT__laddr_b] 
                                   >> 0x11U) : (vlSelf->__PVT__u2__DOT__uram__DOT__lwdata_b 
                                                >> 0x11U)) 
                              << 0x11U)));
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__u2__DOT__uram__DOT__lcen_b)))) {
        vlSelf->__PVT__u2__DOT__ram_rdata_b = vlSelf->__PVT__u2__DOT__uram__DOT__ram
            [vlSelf->__PVT__u2__DOT__uram__DOT__laddr_b];
        vlSelf->__PVT__u2__DOT__uram__DOT__lcen_b = 1U;
    }
}

VL_INLINE_OPT void Vco_sim_sdp_nsplit_ram_1024x36_R4W4_TDP36K__Mz1___act_comb__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__1(Vco_sim_sdp_nsplit_ram_1024x36_R4W4_TDP36K__Mz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_sdp_nsplit_ram_1024x36_R4W4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vco_sim_sdp_nsplit_ram_1024x36_R4W4_TDP36K__Mz1___act_comb__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__1\n"); );
    // Body
    vlSelf->__PVT__ram_rdata_a1 = (0xfU & vlSelf->__PVT__ram_rdata_a1);
    if ((3U == (3U & ((IData)(vlSelf->__PVT__u1__DOT__ram_addr_a) 
                      >> 2U)))) {
        vlSelf->__PVT__ram_rdata_a1 = ((0x3fff0U & vlSelf->__PVT__ram_rdata_a1) 
                                       | (0xfU & (vlSelf->__PVT__u1__DOT__ram_rdata_a 
                                                  >> 0xcU)));
    } else if ((2U == (3U & ((IData)(vlSelf->__PVT__u1__DOT__ram_addr_a) 
                             >> 2U)))) {
        vlSelf->__PVT__ram_rdata_a1 = ((0x3fff0U & vlSelf->__PVT__ram_rdata_a1) 
                                       | (0xfU & (vlSelf->__PVT__u1__DOT__ram_rdata_a 
                                                  >> 8U)));
    } else if ((1U == (3U & ((IData)(vlSelf->__PVT__u1__DOT__ram_addr_a) 
                             >> 2U)))) {
        vlSelf->__PVT__ram_rdata_a1 = ((0x3fff0U & vlSelf->__PVT__ram_rdata_a1) 
                                       | (0xfU & (vlSelf->__PVT__u1__DOT__ram_rdata_a 
                                                  >> 4U)));
    } else if ((0U == (3U & ((IData)(vlSelf->__PVT__u1__DOT__ram_addr_a) 
                             >> 2U)))) {
        vlSelf->__PVT__ram_rdata_a1 = ((0x3fff0U & vlSelf->__PVT__ram_rdata_a1) 
                                       | (0xfU & vlSelf->__PVT__u1__DOT__ram_rdata_a));
    }
}

VL_INLINE_OPT void Vco_sim_sdp_nsplit_ram_1024x36_R4W4_TDP36K__Mz1___act_comb__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__2(Vco_sim_sdp_nsplit_ram_1024x36_R4W4_TDP36K__Mz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_sdp_nsplit_ram_1024x36_R4W4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vco_sim_sdp_nsplit_ram_1024x36_R4W4_TDP36K__Mz1___act_comb__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__2\n"); );
    // Body
    vlSelf->__PVT__ram_rdata_a2 = (0xfU & vlSelf->__PVT__ram_rdata_a2);
    if ((3U == (3U & ((IData)(vlSelf->__PVT__u2__DOT__ram_addr_a) 
                      >> 2U)))) {
        vlSelf->__PVT__ram_rdata_a2 = ((0x3fff0U & vlSelf->__PVT__ram_rdata_a2) 
                                       | (0xfU & (vlSelf->__PVT__u2__DOT__ram_rdata_a 
                                                  >> 0xcU)));
    } else if ((2U == (3U & ((IData)(vlSelf->__PVT__u2__DOT__ram_addr_a) 
                             >> 2U)))) {
        vlSelf->__PVT__ram_rdata_a2 = ((0x3fff0U & vlSelf->__PVT__ram_rdata_a2) 
                                       | (0xfU & (vlSelf->__PVT__u2__DOT__ram_rdata_a 
                                                  >> 8U)));
    } else if ((1U == (3U & ((IData)(vlSelf->__PVT__u2__DOT__ram_addr_a) 
                             >> 2U)))) {
        vlSelf->__PVT__ram_rdata_a2 = ((0x3fff0U & vlSelf->__PVT__ram_rdata_a2) 
                                       | (0xfU & (vlSelf->__PVT__u2__DOT__ram_rdata_a 
                                                  >> 4U)));
    } else if ((0U == (3U & ((IData)(vlSelf->__PVT__u2__DOT__ram_addr_a) 
                             >> 2U)))) {
        vlSelf->__PVT__ram_rdata_a2 = ((0x3fff0U & vlSelf->__PVT__ram_rdata_a2) 
                                       | (0xfU & vlSelf->__PVT__u2__DOT__ram_rdata_a));
    }
}

VL_INLINE_OPT void Vco_sim_sdp_nsplit_ram_1024x36_R4W4_TDP36K__Mz1___act_comb__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__3(Vco_sim_sdp_nsplit_ram_1024x36_R4W4_TDP36K__Mz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_sdp_nsplit_ram_1024x36_R4W4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vco_sim_sdp_nsplit_ram_1024x36_R4W4_TDP36K__Mz1___act_comb__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__3\n"); );
    // Body
    if ((3U == (3U & ((IData)(vlSelf->__PVT__u1__DOT__ram_addr_b) 
                      >> 2U)))) {
        vlSelf->__PVT__ram_rdata_b1 = ((0x3fff0U & vlSelf->__PVT__ram_rdata_b1) 
                                       | (0xfU & (vlSelf->__PVT__u1__DOT__ram_rdata_b 
                                                  >> 0xcU)));
    } else if ((2U == (3U & ((IData)(vlSelf->__PVT__u1__DOT__ram_addr_b) 
                             >> 2U)))) {
        vlSelf->__PVT__ram_rdata_b1 = ((0x3fff0U & vlSelf->__PVT__ram_rdata_b1) 
                                       | (0xfU & (vlSelf->__PVT__u1__DOT__ram_rdata_b 
                                                  >> 8U)));
    } else if ((1U == (3U & ((IData)(vlSelf->__PVT__u1__DOT__ram_addr_b) 
                             >> 2U)))) {
        vlSelf->__PVT__ram_rdata_b1 = ((0x3fff0U & vlSelf->__PVT__ram_rdata_b1) 
                                       | (0xfU & (vlSelf->__PVT__u1__DOT__ram_rdata_b 
                                                  >> 4U)));
    } else if ((0U == (3U & ((IData)(vlSelf->__PVT__u1__DOT__ram_addr_b) 
                             >> 2U)))) {
        vlSelf->__PVT__ram_rdata_b1 = ((0x3fff0U & vlSelf->__PVT__ram_rdata_b1) 
                                       | (0xfU & vlSelf->__PVT__u1__DOT__ram_rdata_b));
    }
}

VL_INLINE_OPT void Vco_sim_sdp_nsplit_ram_1024x36_R4W4_TDP36K__Mz1___act_comb__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__4(Vco_sim_sdp_nsplit_ram_1024x36_R4W4_TDP36K__Mz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_sdp_nsplit_ram_1024x36_R4W4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vco_sim_sdp_nsplit_ram_1024x36_R4W4_TDP36K__Mz1___act_comb__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__4\n"); );
    // Body
    if ((3U == (3U & ((IData)(vlSelf->__PVT__u2__DOT__ram_addr_b) 
                      >> 2U)))) {
        vlSelf->__PVT__ram_rdata_b2 = ((0x3fff0U & vlSelf->__PVT__ram_rdata_b2) 
                                       | (0xfU & (vlSelf->__PVT__u2__DOT__ram_rdata_b 
                                                  >> 0xcU)));
    } else if ((2U == (3U & ((IData)(vlSelf->__PVT__u2__DOT__ram_addr_b) 
                             >> 2U)))) {
        vlSelf->__PVT__ram_rdata_b2 = ((0x3fff0U & vlSelf->__PVT__ram_rdata_b2) 
                                       | (0xfU & (vlSelf->__PVT__u2__DOT__ram_rdata_b 
                                                  >> 8U)));
    } else if ((1U == (3U & ((IData)(vlSelf->__PVT__u2__DOT__ram_addr_b) 
                             >> 2U)))) {
        vlSelf->__PVT__ram_rdata_b2 = ((0x3fff0U & vlSelf->__PVT__ram_rdata_b2) 
                                       | (0xfU & (vlSelf->__PVT__u2__DOT__ram_rdata_b 
                                                  >> 4U)));
    } else if ((0U == (3U & ((IData)(vlSelf->__PVT__u2__DOT__ram_addr_b) 
                             >> 2U)))) {
        vlSelf->__PVT__ram_rdata_b2 = ((0x3fff0U & vlSelf->__PVT__ram_rdata_b2) 
                                       | (0xfU & vlSelf->__PVT__u2__DOT__ram_rdata_b));
    }
}

VL_INLINE_OPT void Vco_sim_sdp_nsplit_ram_1024x36_R4W4_TDP36K__Mz1___act_comb__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__5(Vco_sim_sdp_nsplit_ram_1024x36_R4W4_TDP36K__Mz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_sdp_nsplit_ram_1024x36_R4W4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vco_sim_sdp_nsplit_ram_1024x36_R4W4_TDP36K__Mz1___act_comb__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__5\n"); );
    // Body
    vlSelf->RDATA_B1_o = (0xfU & ((0x10U & (IData)(vlSelf->__PVT__laddr_b1))
                                   ? vlSelf->__PVT__ram_rdata_b2
                                   : vlSelf->__PVT__ram_rdata_b1));
}

VL_INLINE_OPT void Vco_sim_sdp_nsplit_ram_1024x36_R4W4_TDP36K__Mz1___nba_sequent__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__2(Vco_sim_sdp_nsplit_ram_1024x36_R4W4_TDP36K__Mz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_sdp_nsplit_ram_1024x36_R4W4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vco_sim_sdp_nsplit_ram_1024x36_R4W4_TDP36K__Mz1___nba_sequent__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__2\n"); );
    // Body
    vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr_next 
        = ((0U == (IData)(vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__gmode))
            ? (0xffcU & ((IData)(vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp) 
                         << 2U)) : ((1U == (IData)(vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__gmode))
                                     ? (0xffeU & ((IData)(vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp) 
                                                  << 1U))
                                     : ((2U == (IData)(vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__gmode))
                                         ? (IData)(vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp)
                                         : 0U)));
    vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr_next 
        = ((0U == (IData)(vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__gmode))
            ? (0xffcU & ((IData)(vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp) 
                         << 2U)) : ((1U == (IData)(vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__gmode))
                                     ? (0xffeU & ((IData)(vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp) 
                                                  << 1U))
                                     : ((2U == (IData)(vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__gmode))
                                         ? (IData)(vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp)
                                         : 0U)));
    vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next 
        = ((0U == (IData)(vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gmode))
            ? (0xffcU & ((IData)(vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp) 
                         << 2U)) : ((1U == (IData)(vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gmode))
                                     ? (0xffeU & ((IData)(vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp) 
                                                  << 1U))
                                     : ((2U == (IData)(vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gmode))
                                         ? (IData)(vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp)
                                         : 0U)));
    vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next 
        = ((0U == (IData)(vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gmode))
            ? (0xffcU & ((IData)(vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp) 
                         << 2U)) : ((1U == (IData)(vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gmode))
                                     ? (0xffeU & ((IData)(vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp) 
                                                  << 1U))
                                     : ((2U == (IData)(vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gmode))
                                         ? (IData)(vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp)
                                         : 0U)));
    vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__o2 
        = (((IData)(1U) + (0x7ffU & ((IData)(vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr) 
                                     >> 1U))) == (0x7ffU 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr_next) 
                                                     >> 1U)));
    vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__o1 
        = (((IData)(1U) + (0x7ffU & (((IData)(2U) + (IData)(vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)) 
                                     >> 1U))) == (0x7ffU 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr_next) 
                                                     >> 1U)));
    vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__e1 
        = ((0x7ffU & (((IData)(2U) + (IData)(vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)) 
                      >> 1U)) == (0x7ffU & ((IData)(vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr_next) 
                                            >> 1U)));
    vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__e2 
        = ((0x7ffU & ((IData)(vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr) 
                      >> 1U)) == (0x7ffU & ((IData)(vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr_next) 
                                            >> 1U)));
    vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__o2 
        = (((IData)(1U) + (0x7ffU & ((IData)(vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr) 
                                     >> 1U))) == (0x7ffU 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr_next) 
                                                     >> 1U)));
    vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__o1 
        = (((IData)(1U) + (0x7ffU & (((IData)(2U) + (IData)(vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)) 
                                     >> 1U))) == (0x7ffU 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr_next) 
                                                     >> 1U)));
    vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__e1 
        = ((0x7ffU & (((IData)(2U) + (IData)(vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)) 
                      >> 1U)) == (0x7ffU & ((IData)(vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr_next) 
                                            >> 1U)));
    vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__e2 
        = ((0x7ffU & ((IData)(vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr) 
                      >> 1U)) == (0x7ffU & ((IData)(vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr_next) 
                                            >> 1U)));
    vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__p2 
        = ((0x3ffU & ((IData)(1U) + (0x3ffU & ((IData)(vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr) 
                                               >> 1U)))) 
           == (0x3ffU & ((IData)(vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next) 
                         >> 1U)));
    vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__p1 
        = ((0x3ffU & ((IData)(1U) + (0x3ffU & (((IData)(2U) 
                                                + (IData)(vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                               >> 1U)))) 
           == (0x3ffU & ((IData)(vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next) 
                         >> 1U)));
    vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__f1 
        = (((0x400U & ((~ (1U & (((IData)(2U) + (IData)(vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                 >> 0xbU))) << 0xaU)) 
            | (0x3ffU & (((IData)(2U) + (IData)(vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                         >> 1U))) == (0x7ffU & ((IData)(vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next) 
                                                >> 1U)));
    vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__f2 
        = (((0x400U & ((~ ((IData)(vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr) 
                           >> 0xbU)) << 0xaU)) | (0x3ffU 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr) 
                                                     >> 1U))) 
           == (0x7ffU & ((IData)(vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next) 
                         >> 1U)));
    vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__p2 
        = ((0x3ffU & ((IData)(1U) + (0x3ffU & ((IData)(vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr) 
                                               >> 1U)))) 
           == (0x3ffU & ((IData)(vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next) 
                         >> 1U)));
    vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__p1 
        = ((0x3ffU & ((IData)(1U) + (0x3ffU & (((IData)(2U) 
                                                + (IData)(vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                               >> 1U)))) 
           == (0x3ffU & ((IData)(vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next) 
                         >> 1U)));
    vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__f1 
        = (((0x400U & ((~ (1U & (((IData)(2U) + (IData)(vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                 >> 0xbU))) << 0xaU)) 
            | (0x3ffU & (((IData)(2U) + (IData)(vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                         >> 1U))) == (0x7ffU & ((IData)(vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next) 
                                                >> 1U)));
    vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__f2 
        = (((0x400U & ((~ ((IData)(vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr) 
                           >> 0xbU)) << 0xaU)) | (0x3ffU 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr) 
                                                     >> 1U))) 
           == (0x7ffU & ((IData)(vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next) 
                         >> 1U)));
}
