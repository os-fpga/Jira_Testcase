// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vco_sim_ram_true_reg_addr_dp_1024x32_verilator__Syms.h"


void Vco_sim_ram_true_reg_addr_dp_1024x32_verilator___024root__trace_chg_sub_0(Vco_sim_ram_true_reg_addr_dp_1024x32_verilator___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vco_sim_ram_true_reg_addr_dp_1024x32_verilator___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_ram_true_reg_addr_dp_1024x32_verilator___024root__trace_chg_top_0\n"); );
    // Init
    Vco_sim_ram_true_reg_addr_dp_1024x32_verilator___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vco_sim_ram_true_reg_addr_dp_1024x32_verilator___024root*>(voidSelf);
    Vco_sim_ram_true_reg_addr_dp_1024x32_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vco_sim_ram_true_reg_addr_dp_1024x32_verilator___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vco_sim_ram_true_reg_addr_dp_1024x32_verilator___024root__trace_chg_sub_0(Vco_sim_ram_true_reg_addr_dp_1024x32_verilator___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_ram_true_reg_addr_dp_1024x32_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_ram_true_reg_addr_dp_1024x32_verilator___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__weA));
        bufp->chgBit(oldp+1,(vlSelf->co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__weB));
        bufp->chgSData(oldp+2,(vlSelf->co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__addrA),10);
        bufp->chgSData(oldp+3,(vlSelf->co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__addrB),10);
        bufp->chgIData(oldp+4,(vlSelf->co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__dinA),32);
        bufp->chgIData(oldp+5,(vlSelf->co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__dinB),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+6,(vlSelf->co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__golden__DOT__ram
                               [vlSelf->co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__golden__DOT__reg_addrA]),32);
        bufp->chgIData(oldp+7,(vlSelf->co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__golden__DOT__ram
                               [vlSelf->co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__golden__DOT__reg_addrB]),32);
        bufp->chgSData(oldp+8,(vlSelf->co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__golden__DOT__reg_addrA),10);
        bufp->chgSData(oldp+9,(vlSelf->co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__golden__DOT__reg_addrB),10);
    }
    bufp->chgBit(oldp+10,(vlSelf->co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__clk));
}

void Vco_sim_ram_true_reg_addr_dp_1024x32_verilator___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_ram_true_reg_addr_dp_1024x32_verilator___024root__trace_cleanup\n"); );
    // Init
    Vco_sim_ram_true_reg_addr_dp_1024x32_verilator___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vco_sim_ram_true_reg_addr_dp_1024x32_verilator___024root*>(voidSelf);
    Vco_sim_ram_true_reg_addr_dp_1024x32_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
