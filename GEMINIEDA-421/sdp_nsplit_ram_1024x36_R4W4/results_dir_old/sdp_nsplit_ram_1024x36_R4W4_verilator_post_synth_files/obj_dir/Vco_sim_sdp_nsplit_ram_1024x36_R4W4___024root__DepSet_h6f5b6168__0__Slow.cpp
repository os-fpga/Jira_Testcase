// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vco_sim_sdp_nsplit_ram_1024x36_R4W4.h for the primary calling header

#include "verilated.h"

#include "Vco_sim_sdp_nsplit_ram_1024x36_R4W4__Syms.h"
#include "Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root.h"

extern const VlWide<576>/*18431:0*/ Vco_sim_sdp_nsplit_ram_1024x36_R4W4__ConstPool__CONST_ha5ac2e72_0;
extern const VlWide<576>/*18431:0*/ Vco_sim_sdp_nsplit_ram_1024x36_R4W4__ConstPool__CONST_hbca17dff_0;

VL_ATTR_COLD void Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___eval_initial__TOP(Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_sdp_nsplit_ram_1024x36_R4W4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___eval_initial__TOP\n"); );
    // Body
    vlSymsp->_vm_contextp__->dumpfile(std::string{"tb.vcd"});
    vlSymsp->_traceDumpOpen();
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x400U, vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__unnamedblk1__DOT__i)) {
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram[(0x3ffU 
                                                                                & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__unnamedblk1__DOT__i)] 
            = ((0x47ffU >= (0x7fffU & VL_MULS_III(32, (IData)(0x12U), vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__unnamedblk1__DOT__i)))
                ? (0x3ffffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x12U), vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__unnamedblk1__DOT__i)))
                                 ? 0U : (Vco_sim_sdp_nsplit_ram_1024x36_R4W4__ConstPool__CONST_ha5ac2e72_0[
                                         (((IData)(0x11U) 
                                           + (0x7fffU 
                                              & VL_MULS_III(32, (IData)(0x12U), vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__unnamedblk1__DOT__i))) 
                                          >> 5U)] << 
                                         ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_MULS_III(32, (IData)(0x12U), vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__unnamedblk1__DOT__i))))) 
                               | (Vco_sim_sdp_nsplit_ram_1024x36_R4W4__ConstPool__CONST_ha5ac2e72_0[
                                  (0x3ffU & (VL_MULS_III(32, (IData)(0x12U), vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__unnamedblk1__DOT__i) 
                                             >> 5U))] 
                                  >> (0x1fU & VL_MULS_III(32, (IData)(0x12U), vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__unnamedblk1__DOT__i)))))
                : 0U);
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__unnamedblk1__DOT__i);
    }
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x400U, vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__unnamedblk1__DOT__i)) {
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram[(0x3ffU 
                                                                                & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__unnamedblk1__DOT__i)] 
            = ((0x47ffU >= (0x7fffU & VL_MULS_III(32, (IData)(0x12U), vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__unnamedblk1__DOT__i)))
                ? (0x3ffffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x12U), vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__unnamedblk1__DOT__i)))
                                 ? 0U : (Vco_sim_sdp_nsplit_ram_1024x36_R4W4__ConstPool__CONST_ha5ac2e72_0[
                                         (((IData)(0x11U) 
                                           + (0x7fffU 
                                              & VL_MULS_III(32, (IData)(0x12U), vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__unnamedblk1__DOT__i))) 
                                          >> 5U)] << 
                                         ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_MULS_III(32, (IData)(0x12U), vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__unnamedblk1__DOT__i))))) 
                               | (Vco_sim_sdp_nsplit_ram_1024x36_R4W4__ConstPool__CONST_ha5ac2e72_0[
                                  (0x3ffU & (VL_MULS_III(32, (IData)(0x12U), vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__unnamedblk1__DOT__i) 
                                             >> 5U))] 
                                  >> (0x1fU & VL_MULS_III(32, (IData)(0x12U), vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__unnamedblk1__DOT__i)))))
                : 0U);
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__unnamedblk1__DOT__i);
    }
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x400U, vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__unnamedblk1__DOT__i)) {
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram[(0x3ffU 
                                                                                & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__unnamedblk1__DOT__i)] 
            = ((0x47ffU >= (0x7fffU & VL_MULS_III(32, (IData)(0x12U), vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__unnamedblk1__DOT__i)))
                ? (0x3ffffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x12U), vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__unnamedblk1__DOT__i)))
                                 ? 0U : (Vco_sim_sdp_nsplit_ram_1024x36_R4W4__ConstPool__CONST_hbca17dff_0[
                                         (((IData)(0x11U) 
                                           + (0x7fffU 
                                              & VL_MULS_III(32, (IData)(0x12U), vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__unnamedblk1__DOT__i))) 
                                          >> 5U)] << 
                                         ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_MULS_III(32, (IData)(0x12U), vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__unnamedblk1__DOT__i))))) 
                               | (Vco_sim_sdp_nsplit_ram_1024x36_R4W4__ConstPool__CONST_hbca17dff_0[
                                  (0x3ffU & (VL_MULS_III(32, (IData)(0x12U), vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__unnamedblk1__DOT__i) 
                                             >> 5U))] 
                                  >> (0x1fU & VL_MULS_III(32, (IData)(0x12U), vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__unnamedblk1__DOT__i)))))
                : 0U);
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__unnamedblk1__DOT__i);
    }
    vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x400U, vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__unnamedblk1__DOT__i)) {
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram[(0x3ffU 
                                                                                & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__unnamedblk1__DOT__i)] 
            = ((0x47ffU >= (0x7fffU & VL_MULS_III(32, (IData)(0x12U), vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__unnamedblk1__DOT__i)))
                ? (0x3ffffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x12U), vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__unnamedblk1__DOT__i)))
                                 ? 0U : (Vco_sim_sdp_nsplit_ram_1024x36_R4W4__ConstPool__CONST_hbca17dff_0[
                                         (((IData)(0x11U) 
                                           + (0x7fffU 
                                              & VL_MULS_III(32, (IData)(0x12U), vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__unnamedblk1__DOT__i))) 
                                          >> 5U)] << 
                                         ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_MULS_III(32, (IData)(0x12U), vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__unnamedblk1__DOT__i))))) 
                               | (Vco_sim_sdp_nsplit_ram_1024x36_R4W4__ConstPool__CONST_hbca17dff_0[
                                  (0x3ffU & (VL_MULS_III(32, (IData)(0x12U), vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__unnamedblk1__DOT__i) 
                                             >> 5U))] 
                                  >> (0x1fU & VL_MULS_III(32, (IData)(0x12U), vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__unnamedblk1__DOT__i)))))
                : 0U);
        vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__unnamedblk1__DOT__i);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___dump_triggers__stl(Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___eval_triggers__stl(Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_sdp_nsplit_ram_1024x36_R4W4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.at(0U) = (0U == vlSelf->__VstlIterCount);
    vlSelf->__VstlTriggered.at(1U) = ((((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwen_b) 
                                        != (IData)(vlSelf->__Vtrigrprev__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwen_b)) 
                                       | ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lcen_b) 
                                          != (IData)(vlSelf->__Vtrigrprev__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lcen_b))) 
                                      | vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram.neq(vlSelf->__Vtrigrprev__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram));
    vlSelf->__VstlTriggered.at(2U) = ((vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram.neq(vlSelf->__Vtrigrprev__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram) 
                                       | ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwen_a) 
                                          != (IData)(vlSelf->__Vtrigrprev__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwen_a))) 
                                      | ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lcen_a) 
                                         != (IData)(vlSelf->__Vtrigrprev__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lcen_a)));
    vlSelf->__VstlTriggered.at(3U) = ((((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwen_b) 
                                        != (IData)(vlSelf->__Vtrigrprev__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwen_b)) 
                                       | ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lcen_b) 
                                          != (IData)(vlSelf->__Vtrigrprev__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lcen_b))) 
                                      | vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram.neq(vlSelf->__Vtrigrprev__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram));
    vlSelf->__VstlTriggered.at(4U) = ((vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram.neq(vlSelf->__Vtrigrprev__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram) 
                                       | ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwen_a) 
                                          != (IData)(vlSelf->__Vtrigrprev__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwen_a))) 
                                      | ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lcen_a) 
                                         != (IData)(vlSelf->__Vtrigrprev__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lcen_a)));
    vlSelf->__VstlTriggered.at(5U) = ((((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwen_b) 
                                        != (IData)(vlSelf->__Vtrigrprev__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwen_b)) 
                                       | ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lcen_b) 
                                          != (IData)(vlSelf->__Vtrigrprev__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lcen_b))) 
                                      | vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram.neq(vlSelf->__Vtrigrprev__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram));
    vlSelf->__VstlTriggered.at(6U) = ((vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram.neq(vlSelf->__Vtrigrprev__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram) 
                                       | ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwen_a) 
                                          != (IData)(vlSelf->__Vtrigrprev__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwen_a))) 
                                      | ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lcen_a) 
                                         != (IData)(vlSelf->__Vtrigrprev__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lcen_a)));
    vlSelf->__VstlTriggered.at(7U) = ((((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwen_b) 
                                        != (IData)(vlSelf->__Vtrigrprev__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwen_b)) 
                                       | ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lcen_b) 
                                          != (IData)(vlSelf->__Vtrigrprev__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lcen_b))) 
                                      | vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram.neq(vlSelf->__Vtrigrprev__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram));
    vlSelf->__VstlTriggered.at(8U) = ((vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram.neq(vlSelf->__Vtrigrprev__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram) 
                                       | ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwen_a) 
                                          != (IData)(vlSelf->__Vtrigrprev__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwen_a))) 
                                      | ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lcen_a) 
                                         != (IData)(vlSelf->__Vtrigrprev__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lcen_a)));
    vlSelf->__Vtrigrprev__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwen_b 
        = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwen_b;
    vlSelf->__Vtrigrprev__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lcen_b 
        = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lcen_b;
    vlSelf->__Vtrigrprev__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram.assign(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram);
    vlSelf->__Vtrigrprev__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwen_a 
        = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwen_a;
    vlSelf->__Vtrigrprev__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lcen_a 
        = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lcen_a;
    vlSelf->__Vtrigrprev__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwen_b 
        = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwen_b;
    vlSelf->__Vtrigrprev__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lcen_b 
        = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lcen_b;
    vlSelf->__Vtrigrprev__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram.assign(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram);
    vlSelf->__Vtrigrprev__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwen_a 
        = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwen_a;
    vlSelf->__Vtrigrprev__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lcen_a 
        = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lcen_a;
    vlSelf->__Vtrigrprev__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwen_b 
        = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwen_b;
    vlSelf->__Vtrigrprev__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lcen_b 
        = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lcen_b;
    vlSelf->__Vtrigrprev__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram.assign(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram);
    vlSelf->__Vtrigrprev__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwen_a 
        = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwen_a;
    vlSelf->__Vtrigrprev__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lcen_a 
        = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lcen_a;
    vlSelf->__Vtrigrprev__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwen_b 
        = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwen_b;
    vlSelf->__Vtrigrprev__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lcen_b 
        = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lcen_b;
    vlSelf->__Vtrigrprev__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram.assign(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram);
    vlSelf->__Vtrigrprev__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwen_a 
        = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwen_a;
    vlSelf->__Vtrigrprev__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lcen_a 
        = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lcen_a;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VstlDidInit))))) {
        vlSelf->__VstlDidInit = 1U;
        vlSelf->__VstlTriggered.at(1U) = 1U;
        vlSelf->__VstlTriggered.at(2U) = 1U;
        vlSelf->__VstlTriggered.at(3U) = 1U;
        vlSelf->__VstlTriggered.at(4U) = 1U;
        vlSelf->__VstlTriggered.at(5U) = 1U;
        vlSelf->__VstlTriggered.at(6U) = 1U;
        vlSelf->__VstlTriggered.at(7U) = 1U;
        vlSelf->__VstlTriggered.at(8U) = 1U;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
