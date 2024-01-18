// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vco_sim_sdp_nsplit_ram_1024x36_R4W4.h for the primary calling header

#include "verilated.h"

#include "Vco_sim_sdp_nsplit_ram_1024x36_R4W4_TDP36K__Mz1.h"

extern const VlWide<576>/*18431:0*/ Vco_sim_sdp_nsplit_ram_1024x36_R4W4__ConstPool__CONST_ha5ac2e72_0;

VL_ATTR_COLD void Vco_sim_sdp_nsplit_ram_1024x36_R4W4_TDP36K__Mz1___eval_initial__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1(Vco_sim_sdp_nsplit_ram_1024x36_R4W4_TDP36K__Mz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_sdp_nsplit_ram_1024x36_R4W4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vco_sim_sdp_nsplit_ram_1024x36_R4W4_TDP36K__Mz1___eval_initial__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1\n"); );
    // Body
    vlSelf->__PVT__sreset = 1U;
    vlSelf->__PVT__u1__DOT__uram__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x400U, vlSelf->__PVT__u1__DOT__uram__DOT__unnamedblk1__DOT__i)) {
        vlSelf->__PVT__u1__DOT__uram__DOT__ram[(0x3ffU 
                                                & vlSelf->__PVT__u1__DOT__uram__DOT__unnamedblk1__DOT__i)] 
            = ((0x47ffU >= (0x7fffU & VL_MULS_III(32, (IData)(0x12U), vlSelf->__PVT__u1__DOT__uram__DOT__unnamedblk1__DOT__i)))
                ? (0x3ffffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x12U), vlSelf->__PVT__u1__DOT__uram__DOT__unnamedblk1__DOT__i)))
                                 ? 0U : (Vco_sim_sdp_nsplit_ram_1024x36_R4W4__ConstPool__CONST_ha5ac2e72_0[
                                         (((IData)(0x11U) 
                                           + (0x7fffU 
                                              & VL_MULS_III(32, (IData)(0x12U), vlSelf->__PVT__u1__DOT__uram__DOT__unnamedblk1__DOT__i))) 
                                          >> 5U)] << 
                                         ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_MULS_III(32, (IData)(0x12U), vlSelf->__PVT__u1__DOT__uram__DOT__unnamedblk1__DOT__i))))) 
                               | (Vco_sim_sdp_nsplit_ram_1024x36_R4W4__ConstPool__CONST_ha5ac2e72_0[
                                  (0x3ffU & (VL_MULS_III(32, (IData)(0x12U), vlSelf->__PVT__u1__DOT__uram__DOT__unnamedblk1__DOT__i) 
                                             >> 5U))] 
                                  >> (0x1fU & VL_MULS_III(32, (IData)(0x12U), vlSelf->__PVT__u1__DOT__uram__DOT__unnamedblk1__DOT__i)))))
                : 0U);
        vlSelf->__PVT__u1__DOT__uram__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelf->__PVT__u1__DOT__uram__DOT__unnamedblk1__DOT__i);
    }
    vlSelf->__PVT__u2__DOT__uram__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x400U, vlSelf->__PVT__u2__DOT__uram__DOT__unnamedblk1__DOT__i)) {
        vlSelf->__PVT__u2__DOT__uram__DOT__ram[(0x3ffU 
                                                & vlSelf->__PVT__u2__DOT__uram__DOT__unnamedblk1__DOT__i)] 
            = ((0x47ffU >= (0x7fffU & VL_MULS_III(32, (IData)(0x12U), vlSelf->__PVT__u2__DOT__uram__DOT__unnamedblk1__DOT__i)))
                ? (0x3ffffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x12U), vlSelf->__PVT__u2__DOT__uram__DOT__unnamedblk1__DOT__i)))
                                 ? 0U : (Vco_sim_sdp_nsplit_ram_1024x36_R4W4__ConstPool__CONST_ha5ac2e72_0[
                                         (((IData)(0x11U) 
                                           + (0x7fffU 
                                              & VL_MULS_III(32, (IData)(0x12U), vlSelf->__PVT__u2__DOT__uram__DOT__unnamedblk1__DOT__i))) 
                                          >> 5U)] << 
                                         ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_MULS_III(32, (IData)(0x12U), vlSelf->__PVT__u2__DOT__uram__DOT__unnamedblk1__DOT__i))))) 
                               | (Vco_sim_sdp_nsplit_ram_1024x36_R4W4__ConstPool__CONST_ha5ac2e72_0[
                                  (0x3ffU & (VL_MULS_III(32, (IData)(0x12U), vlSelf->__PVT__u2__DOT__uram__DOT__unnamedblk1__DOT__i) 
                                             >> 5U))] 
                                  >> (0x1fU & VL_MULS_III(32, (IData)(0x12U), vlSelf->__PVT__u2__DOT__uram__DOT__unnamedblk1__DOT__i)))))
                : 0U);
        vlSelf->__PVT__u2__DOT__uram__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelf->__PVT__u2__DOT__uram__DOT__unnamedblk1__DOT__i);
    }
}

VL_ATTR_COLD void Vco_sim_sdp_nsplit_ram_1024x36_R4W4_TDP36K__Mz1___stl_comb__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__0(Vco_sim_sdp_nsplit_ram_1024x36_R4W4_TDP36K__Mz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_sdp_nsplit_ram_1024x36_R4W4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vco_sim_sdp_nsplit_ram_1024x36_R4W4_TDP36K__Mz1___stl_comb__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__0\n"); );
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

VL_ATTR_COLD void Vco_sim_sdp_nsplit_ram_1024x36_R4W4_TDP36K__Mz1___stl_comb__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__1(Vco_sim_sdp_nsplit_ram_1024x36_R4W4_TDP36K__Mz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_sdp_nsplit_ram_1024x36_R4W4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vco_sim_sdp_nsplit_ram_1024x36_R4W4_TDP36K__Mz1___stl_comb__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__1\n"); );
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

VL_ATTR_COLD void Vco_sim_sdp_nsplit_ram_1024x36_R4W4_TDP36K__Mz1___stl_comb__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__2(Vco_sim_sdp_nsplit_ram_1024x36_R4W4_TDP36K__Mz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_sdp_nsplit_ram_1024x36_R4W4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vco_sim_sdp_nsplit_ram_1024x36_R4W4_TDP36K__Mz1___stl_comb__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__2\n"); );
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

VL_ATTR_COLD void Vco_sim_sdp_nsplit_ram_1024x36_R4W4_TDP36K__Mz1___stl_comb__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__3(Vco_sim_sdp_nsplit_ram_1024x36_R4W4_TDP36K__Mz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_sdp_nsplit_ram_1024x36_R4W4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vco_sim_sdp_nsplit_ram_1024x36_R4W4_TDP36K__Mz1___stl_comb__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__3\n"); );
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

VL_ATTR_COLD void Vco_sim_sdp_nsplit_ram_1024x36_R4W4_TDP36K__Mz1___ctor_var_reset(Vco_sim_sdp_nsplit_ram_1024x36_R4W4_TDP36K__Mz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_sdp_nsplit_ram_1024x36_R4W4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vco_sim_sdp_nsplit_ram_1024x36_R4W4_TDP36K__Mz1___ctor_var_reset\n"); );
    // Body
    vlSelf->RESET_ni = VL_RAND_RESET_I(1);
    vlSelf->WEN_A1_i = VL_RAND_RESET_I(1);
    vlSelf->WEN_B1_i = VL_RAND_RESET_I(1);
    vlSelf->REN_A1_i = VL_RAND_RESET_I(1);
    vlSelf->REN_B1_i = VL_RAND_RESET_I(1);
    vlSelf->CLK_A1_i = VL_RAND_RESET_I(1);
    vlSelf->CLK_B1_i = VL_RAND_RESET_I(1);
    vlSelf->BE_A1_i = VL_RAND_RESET_I(2);
    vlSelf->BE_B1_i = VL_RAND_RESET_I(2);
    vlSelf->ADDR_A1_i = VL_RAND_RESET_I(15);
    vlSelf->ADDR_B1_i = VL_RAND_RESET_I(15);
    vlSelf->WDATA_A1_i = VL_RAND_RESET_I(18);
    vlSelf->WDATA_B1_i = VL_RAND_RESET_I(18);
    vlSelf->RDATA_A1_o = VL_RAND_RESET_I(18);
    vlSelf->RDATA_B1_o = VL_RAND_RESET_I(18);
    vlSelf->FLUSH1_i = VL_RAND_RESET_I(1);
    vlSelf->WEN_A2_i = VL_RAND_RESET_I(1);
    vlSelf->WEN_B2_i = VL_RAND_RESET_I(1);
    vlSelf->REN_A2_i = VL_RAND_RESET_I(1);
    vlSelf->REN_B2_i = VL_RAND_RESET_I(1);
    vlSelf->CLK_A2_i = VL_RAND_RESET_I(1);
    vlSelf->CLK_B2_i = VL_RAND_RESET_I(1);
    vlSelf->BE_A2_i = VL_RAND_RESET_I(2);
    vlSelf->BE_B2_i = VL_RAND_RESET_I(2);
    vlSelf->ADDR_A2_i = VL_RAND_RESET_I(14);
    vlSelf->ADDR_B2_i = VL_RAND_RESET_I(14);
    vlSelf->WDATA_A2_i = VL_RAND_RESET_I(18);
    vlSelf->WDATA_B2_i = VL_RAND_RESET_I(18);
    vlSelf->__PVT__RDATA_A2_o = VL_RAND_RESET_I(18);
    vlSelf->__PVT__RDATA_B2_o = VL_RAND_RESET_I(18);
    vlSelf->FLUSH2_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ram_rdata_a1 = VL_RAND_RESET_I(18);
    vlSelf->__PVT__ram_rdata_b1 = VL_RAND_RESET_I(18);
    vlSelf->__PVT__ram_rdata_a2 = VL_RAND_RESET_I(18);
    vlSelf->__PVT__ram_rdata_b2 = VL_RAND_RESET_I(18);
    vlSelf->__PVT__laddr_a1 = VL_RAND_RESET_I(15);
    vlSelf->__PVT__laddr_b1 = VL_RAND_RESET_I(15);
    vlSelf->__PVT__ram_wen_a1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ram_wen_b1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ram_wen_a2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ram_wen_b2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pl_dout0 = VL_RAND_RESET_I(18);
    vlSelf->__PVT__pl_dout1 = VL_RAND_RESET_I(18);
    vlSelf->__PVT__sreset = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fifo36_ctl__DOT__pushtopop1 = VL_RAND_RESET_I(13);
    vlSelf->__PVT__fifo36_ctl__DOT__pushtopop2 = VL_RAND_RESET_I(13);
    vlSelf->__PVT__fifo36_ctl__DOT__poptopush1 = VL_RAND_RESET_I(13);
    vlSelf->__PVT__fifo36_ctl__DOT__poptopush2 = VL_RAND_RESET_I(13);
    vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_push__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_push__DOT__paf = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_push__DOT__fmo = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_push__DOT__overflow = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr = VL_RAND_RESET_I(13);
    vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_push__DOT__raddr = VL_RAND_RESET_I(13);
    vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_push__DOT__gcout_reg = VL_RAND_RESET_I(13);
    vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr_next = VL_RAND_RESET_I(13);
    vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp = VL_RAND_RESET_I(13);
    vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_pop__DOT__empty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_pop__DOT__epo = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_pop__DOT__pae = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_pop__DOT__underflow = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_pop__DOT__e2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_pop__DOT__bwl_sel = VL_RAND_RESET_I(2);
    vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_pop__DOT__ff_raddr = VL_RAND_RESET_I(12);
    vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_pop__DOT__waddr = VL_RAND_RESET_I(13);
    vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_pop__DOT__raddr = VL_RAND_RESET_I(13);
    vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_pop__DOT__gcout_reg = VL_RAND_RESET_I(13);
    vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_pop__DOT__tmp = VL_RAND_RESET_I(13);
    vlSelf->__PVT__u1__DOT__wmsk_a = VL_RAND_RESET_I(18);
    vlSelf->__PVT__u1__DOT__wmsk_b = VL_RAND_RESET_I(18);
    vlSelf->__PVT__u1__DOT__addr_a = VL_RAND_RESET_I(9);
    vlSelf->__PVT__u1__DOT__addr_b = VL_RAND_RESET_I(9);
    vlSelf->__PVT__u1__DOT__addr_a_d = VL_RAND_RESET_I(5);
    vlSelf->__PVT__u1__DOT__addr_b_d = VL_RAND_RESET_I(5);
    vlSelf->__PVT__u1__DOT__ram_rdata_a = VL_RAND_RESET_I(18);
    vlSelf->__PVT__u1__DOT__ram_rdata_b = VL_RAND_RESET_I(18);
    vlSelf->__PVT__u1__DOT__ram_addr_a = VL_RAND_RESET_I(14);
    vlSelf->__PVT__u1__DOT__ram_addr_b = VL_RAND_RESET_I(14);
    vlSelf->__PVT__u1__DOT__initn = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u1__DOT__smux_rclk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u1__DOT__smux_wclk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u1__DOT__raw_fflags = VL_RAND_RESET_I(4);
    for (int __Vi0=0; __Vi0<1024; ++__Vi0) {
        vlSelf->__PVT__u1__DOT__uram__DOT__ram[__Vi0] = VL_RAND_RESET_I(18);
    }
    vlSelf->__PVT__u1__DOT__uram__DOT__laddr_a = VL_RAND_RESET_I(10);
    vlSelf->__PVT__u1__DOT__uram__DOT__laddr_b = VL_RAND_RESET_I(10);
    vlSelf->__PVT__u1__DOT__uram__DOT__lcen_a = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u1__DOT__uram__DOT__lwen_a = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u1__DOT__uram__DOT__lwdata_a = VL_RAND_RESET_I(18);
    vlSelf->__PVT__u1__DOT__uram__DOT__lcen_b = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u1__DOT__uram__DOT__lwen_b = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u1__DOT__uram__DOT__lwdata_b = VL_RAND_RESET_I(18);
    vlSelf->__PVT__u1__DOT__uram__DOT__lwmsk_a = VL_RAND_RESET_I(18);
    vlSelf->__PVT__u1__DOT__uram__DOT__lwmsk_b = VL_RAND_RESET_I(18);
    vlSelf->__PVT__u1__DOT__uram__DOT__unnamedblk1__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__pushtopop1 = VL_RAND_RESET_I(12);
    vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__pushtopop2 = VL_RAND_RESET_I(12);
    vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__poptopush1 = VL_RAND_RESET_I(12);
    vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__poptopush2 = VL_RAND_RESET_I(12);
    vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__paf = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__fmo = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__overflow = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__p1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__p2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__f1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__f2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gmode = VL_RAND_RESET_I(2);
    vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr = VL_RAND_RESET_I(12);
    vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr = VL_RAND_RESET_I(12);
    vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gcout_reg = VL_RAND_RESET_I(12);
    vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next = VL_RAND_RESET_I(12);
    vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr_next = VL_RAND_RESET_I(12);
    vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp = VL_RAND_RESET_I(12);
    vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__empty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__epo = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__pae = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__underflow = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__e1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__e2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__o1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__o2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__bwl_sel = VL_RAND_RESET_I(2);
    vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__gmode = VL_RAND_RESET_I(2);
    vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__ff_raddr = VL_RAND_RESET_I(11);
    vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr = VL_RAND_RESET_I(12);
    vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr = VL_RAND_RESET_I(12);
    vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__gcout_reg = VL_RAND_RESET_I(12);
    vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr_next = VL_RAND_RESET_I(12);
    vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp = VL_RAND_RESET_I(12);
    vlSelf->__PVT__u2__DOT__wmsk_a = VL_RAND_RESET_I(18);
    vlSelf->__PVT__u2__DOT__wmsk_b = VL_RAND_RESET_I(18);
    vlSelf->__PVT__u2__DOT__addr_a = VL_RAND_RESET_I(9);
    vlSelf->__PVT__u2__DOT__addr_b = VL_RAND_RESET_I(9);
    vlSelf->__PVT__u2__DOT__addr_a_d = VL_RAND_RESET_I(5);
    vlSelf->__PVT__u2__DOT__addr_b_d = VL_RAND_RESET_I(5);
    vlSelf->__PVT__u2__DOT__ram_rdata_a = VL_RAND_RESET_I(18);
    vlSelf->__PVT__u2__DOT__ram_rdata_b = VL_RAND_RESET_I(18);
    vlSelf->__PVT__u2__DOT__ram_addr_a = VL_RAND_RESET_I(14);
    vlSelf->__PVT__u2__DOT__ram_addr_b = VL_RAND_RESET_I(14);
    vlSelf->__PVT__u2__DOT__initn = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u2__DOT__smux_rclk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u2__DOT__smux_wclk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u2__DOT__raw_fflags = VL_RAND_RESET_I(4);
    for (int __Vi0=0; __Vi0<1024; ++__Vi0) {
        vlSelf->__PVT__u2__DOT__uram__DOT__ram[__Vi0] = VL_RAND_RESET_I(18);
    }
    vlSelf->__PVT__u2__DOT__uram__DOT__laddr_a = VL_RAND_RESET_I(10);
    vlSelf->__PVT__u2__DOT__uram__DOT__laddr_b = VL_RAND_RESET_I(10);
    vlSelf->__PVT__u2__DOT__uram__DOT__lcen_a = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u2__DOT__uram__DOT__lwen_a = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u2__DOT__uram__DOT__lwdata_a = VL_RAND_RESET_I(18);
    vlSelf->__PVT__u2__DOT__uram__DOT__lcen_b = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u2__DOT__uram__DOT__lwen_b = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u2__DOT__uram__DOT__lwdata_b = VL_RAND_RESET_I(18);
    vlSelf->__PVT__u2__DOT__uram__DOT__lwmsk_a = VL_RAND_RESET_I(18);
    vlSelf->__PVT__u2__DOT__uram__DOT__lwmsk_b = VL_RAND_RESET_I(18);
    vlSelf->__PVT__u2__DOT__uram__DOT__unnamedblk1__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__pushtopop1 = VL_RAND_RESET_I(12);
    vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__pushtopop2 = VL_RAND_RESET_I(12);
    vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__poptopush1 = VL_RAND_RESET_I(12);
    vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__poptopush2 = VL_RAND_RESET_I(12);
    vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__paf = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__fmo = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__overflow = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__p1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__p2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__f1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__f2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gmode = VL_RAND_RESET_I(2);
    vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr = VL_RAND_RESET_I(12);
    vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr = VL_RAND_RESET_I(12);
    vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gcout_reg = VL_RAND_RESET_I(12);
    vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next = VL_RAND_RESET_I(12);
    vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr_next = VL_RAND_RESET_I(12);
    vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp = VL_RAND_RESET_I(12);
    vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__empty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__epo = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__pae = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__underflow = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__e1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__e2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__o1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__o2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__bwl_sel = VL_RAND_RESET_I(2);
    vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__gmode = VL_RAND_RESET_I(2);
    vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__ff_raddr = VL_RAND_RESET_I(11);
    vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr = VL_RAND_RESET_I(12);
    vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr = VL_RAND_RESET_I(12);
    vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__gcout_reg = VL_RAND_RESET_I(12);
    vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr_next = VL_RAND_RESET_I(12);
    vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp = VL_RAND_RESET_I(12);
}
