// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vco_sim_adder_verilator__Syms.h"


void Vco_sim_adder_verilator___024root__trace_chg_sub_0(Vco_sim_adder_verilator___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vco_sim_adder_verilator___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_adder_verilator___024root__trace_chg_top_0\n"); );
    // Init
    Vco_sim_adder_verilator___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vco_sim_adder_verilator___024root*>(voidSelf);
    Vco_sim_adder_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vco_sim_adder_verilator___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vco_sim_adder_verilator___024root__trace_chg_sub_0(Vco_sim_adder_verilator___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_adder_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_adder_verilator___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->co_sim_adder_verilator__DOT__clock));
    bufp->chgBit(oldp+1,(vlSelf->co_sim_adder_verilator__DOT__reset));
    bufp->chgCData(oldp+2,(vlSelf->co_sim_adder_verilator__DOT__a),4);
    bufp->chgCData(oldp+3,(vlSelf->co_sim_adder_verilator__DOT__b),4);
    bufp->chgCData(oldp+4,(vlSelf->co_sim_adder_verilator__DOT__sum),5);
}

void Vco_sim_adder_verilator___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_adder_verilator___024root__trace_cleanup\n"); );
    // Init
    Vco_sim_adder_verilator___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vco_sim_adder_verilator___024root*>(voidSelf);
    Vco_sim_adder_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
