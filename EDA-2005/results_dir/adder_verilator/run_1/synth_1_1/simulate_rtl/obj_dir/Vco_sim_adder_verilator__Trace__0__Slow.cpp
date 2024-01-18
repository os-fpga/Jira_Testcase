// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vco_sim_adder_verilator__Syms.h"


VL_ATTR_COLD void Vco_sim_adder_verilator___024root__trace_init_sub__TOP__0(Vco_sim_adder_verilator___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_adder_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_adder_verilator___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("co_sim_adder_verilator ");
    tracep->declBit(c+1,"clock",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2,"reset",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+3,"a",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+4,"b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+5,"sum",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+6,"mismatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->pushNamePrefix("inst ");
    tracep->declBit(c+1,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+3,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+4,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+5,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vco_sim_adder_verilator___024root__trace_init_top(Vco_sim_adder_verilator___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_adder_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_adder_verilator___024root__trace_init_top\n"); );
    // Body
    Vco_sim_adder_verilator___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vco_sim_adder_verilator___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vco_sim_adder_verilator___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vco_sim_adder_verilator___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vco_sim_adder_verilator___024root__trace_register(Vco_sim_adder_verilator___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_adder_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_adder_verilator___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vco_sim_adder_verilator___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vco_sim_adder_verilator___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vco_sim_adder_verilator___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vco_sim_adder_verilator___024root__trace_full_sub_0(Vco_sim_adder_verilator___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vco_sim_adder_verilator___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_adder_verilator___024root__trace_full_top_0\n"); );
    // Init
    Vco_sim_adder_verilator___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vco_sim_adder_verilator___024root*>(voidSelf);
    Vco_sim_adder_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vco_sim_adder_verilator___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vco_sim_adder_verilator___024root__trace_full_sub_0(Vco_sim_adder_verilator___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_adder_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_adder_verilator___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->co_sim_adder_verilator__DOT__clock));
    bufp->fullBit(oldp+2,(vlSelf->co_sim_adder_verilator__DOT__reset));
    bufp->fullCData(oldp+3,(vlSelf->co_sim_adder_verilator__DOT__a),4);
    bufp->fullCData(oldp+4,(vlSelf->co_sim_adder_verilator__DOT__b),4);
    bufp->fullCData(oldp+5,(vlSelf->co_sim_adder_verilator__DOT__sum),5);
    bufp->fullIData(oldp+6,(0U),32);
}
