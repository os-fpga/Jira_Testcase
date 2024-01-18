// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vsyn_tb__Syms.h"


void Vsyn_tb___024root__trace_chg_sub_0(Vsyn_tb___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vsyn_tb___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsyn_tb___024root__trace_chg_top_0\n"); );
    // Init
    Vsyn_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsyn_tb___024root*>(voidSelf);
    Vsyn_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vsyn_tb___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vsyn_tb___024root__trace_chg_sub_0(Vsyn_tb___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsyn_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsyn_tb___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->rstn));
    bufp->chgBit(oldp+1,(vlSelf->clk));
    bufp->chgBit(oldp+2,(vlSelf->rtl_q));
    bufp->chgBit(oldp+3,(vlSelf->syn_tb__DOT__d));
    bufp->chgIData(oldp+4,(vlSelf->syn_tb__DOT__state),32);
    bufp->chgBit(oldp+5,(vlSelf->syn_tb__DOT__rtl_model__DOT__dffr_q_output_0_0));
    bufp->chgBit(oldp+6,(vlSelf->syn_tb__DOT__rtl_model__DOT__lut___024abc__024379__024techmap__VhsheuR8keZROz9PaIm4SC3xs5hR2ngL9uw2TXWToki1));
    bufp->chgCData(oldp+7,(((IData)(vlSelf->rstn) << 2U)),6);
}

void Vsyn_tb___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsyn_tb___024root__trace_cleanup\n"); );
    // Init
    Vsyn_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsyn_tb___024root*>(voidSelf);
    Vsyn_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
