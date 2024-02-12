// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vco_sim_ram_true_reg_addr_dp_1024x32_verilator.h for the primary calling header

#include "verilated.h"

#include "Vco_sim_ram_true_reg_addr_dp_1024x32_verilator__Syms.h"
#include "Vco_sim_ram_true_reg_addr_dp_1024x32_verilator__Syms.h"
#include "Vco_sim_ram_true_reg_addr_dp_1024x32_verilator___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vco_sim_ram_true_reg_addr_dp_1024x32_verilator___024root___dump_triggers__act(Vco_sim_ram_true_reg_addr_dp_1024x32_verilator___024root* vlSelf);
#endif  // VL_DEBUG

void Vco_sim_ram_true_reg_addr_dp_1024x32_verilator___024root___eval_triggers__act(Vco_sim_ram_true_reg_addr_dp_1024x32_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_ram_true_reg_addr_dp_1024x32_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_ram_true_reg_addr_dp_1024x32_verilator___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__clk__0))));
    vlSelf->__VactTriggered.set(1U, ((~ (IData)(vlSelf->co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__clk)) 
                                     & (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__clk__0)));
    vlSelf->__VactTriggered.set(2U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__clk__0 
        = vlSelf->co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vco_sim_ram_true_reg_addr_dp_1024x32_verilator___024root___dump_triggers__act(vlSelf);
    }
#endif
}
