// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vco_sim_sdp_nsplit_ram_1024x36_R4W4.h for the primary calling header

#include "verilated.h"

#include "Vco_sim_sdp_nsplit_ram_1024x36_R4W4__Syms.h"
#include "Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___dump_triggers__act(Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root* vlSelf);
#endif  // VL_DEBUG

void Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___eval_triggers__act(Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_sdp_nsplit_ram_1024x36_R4W4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__clk)));
    vlSelf->__VactTriggered.at(1U) = ((((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwen_b) 
                                        != (IData)(vlSelf->__Vtrigrprev__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwen_b)) 
                                       | ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lcen_b) 
                                          != (IData)(vlSelf->__Vtrigrprev__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lcen_b))) 
                                      | vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram.neq(vlSelf->__Vtrigrprev__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram));
    vlSelf->__VactTriggered.at(2U) = ((vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram.neq(vlSelf->__Vtrigrprev__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__ram) 
                                       | ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwen_a) 
                                          != (IData)(vlSelf->__Vtrigrprev__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwen_a))) 
                                      | ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lcen_a) 
                                         != (IData)(vlSelf->__Vtrigrprev__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lcen_a)));
    vlSelf->__VactTriggered.at(3U) = ((((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwen_b) 
                                        != (IData)(vlSelf->__Vtrigrprev__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwen_b)) 
                                       | ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lcen_b) 
                                          != (IData)(vlSelf->__Vtrigrprev__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lcen_b))) 
                                      | vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram.neq(vlSelf->__Vtrigrprev__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram));
    vlSelf->__VactTriggered.at(4U) = ((vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram.neq(vlSelf->__Vtrigrprev__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__ram) 
                                       | ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwen_a) 
                                          != (IData)(vlSelf->__Vtrigrprev__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwen_a))) 
                                      | ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lcen_a) 
                                         != (IData)(vlSelf->__Vtrigrprev__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lcen_a)));
    vlSelf->__VactTriggered.at(5U) = ((((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwen_b) 
                                        != (IData)(vlSelf->__Vtrigrprev__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwen_b)) 
                                       | ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lcen_b) 
                                          != (IData)(vlSelf->__Vtrigrprev__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lcen_b))) 
                                      | vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram.neq(vlSelf->__Vtrigrprev__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram));
    vlSelf->__VactTriggered.at(6U) = ((vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram.neq(vlSelf->__Vtrigrprev__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__ram) 
                                       | ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwen_a) 
                                          != (IData)(vlSelf->__Vtrigrprev__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwen_a))) 
                                      | ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lcen_a) 
                                         != (IData)(vlSelf->__Vtrigrprev__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lcen_a)));
    vlSelf->__VactTriggered.at(7U) = ((((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwen_b) 
                                        != (IData)(vlSelf->__Vtrigrprev__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwen_b)) 
                                       | ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lcen_b) 
                                          != (IData)(vlSelf->__Vtrigrprev__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lcen_b))) 
                                      | vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram.neq(vlSelf->__Vtrigrprev__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram));
    vlSelf->__VactTriggered.at(8U) = ((vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram.neq(vlSelf->__Vtrigrprev__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__ram) 
                                       | ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwen_a) 
                                          != (IData)(vlSelf->__Vtrigrprev__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwen_a))) 
                                      | ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lcen_a) 
                                         != (IData)(vlSelf->__Vtrigrprev__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lcen_a)));
    vlSelf->__VactTriggered.at(9U) = vlSelf->__VdlySched.awaitingCurrentTime();
    vlSelf->__Vtrigrprev__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__clk 
        = vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__clk;
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
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.at(1U) = 1U;
        vlSelf->__VactTriggered.at(2U) = 1U;
        vlSelf->__VactTriggered.at(3U) = 1U;
        vlSelf->__VactTriggered.at(4U) = 1U;
        vlSelf->__VactTriggered.at(5U) = 1U;
        vlSelf->__VactTriggered.at(6U) = 1U;
        vlSelf->__VactTriggered.at(7U) = 1U;
        vlSelf->__VactTriggered.at(8U) = 1U;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___dump_triggers__act(vlSelf);
    }
#endif
}
