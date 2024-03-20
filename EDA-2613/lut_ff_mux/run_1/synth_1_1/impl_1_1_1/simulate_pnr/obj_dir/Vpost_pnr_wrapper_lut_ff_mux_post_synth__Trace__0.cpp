// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vpost_pnr_wrapper_lut_ff_mux_post_synth__Syms.h"


void Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root__trace_chg_0_sub_0(Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root__trace_chg_0\n"); );
    // Init
    Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root*>(voidSelf);
    Vpost_pnr_wrapper_lut_ff_mux_post_synth__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root__trace_chg_0_sub_0(Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpost_pnr_wrapper_lut_ff_mux_post_synth__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->Q));
    bufp->chgBit(oldp+1,(vlSelf->clk));
    bufp->chgCData(oldp+2,(vlSelf->in),4);
    bufp->chgBit(oldp+3,(vlSelf->mux_sel));
    bufp->chgBit(oldp+4,(vlSelf->rst));
    bufp->chgBit(oldp+5,(vlSelf->lut_ff_mux_post_route__DOT____024auto__024rs_design_edit__02ecc__03a656__03aexecute__024649__DOT__dffre___024iopadmap__024Q_output_0_0));
    bufp->chgBit(oldp+6,((1U & (IData)(vlSelf->in))));
    bufp->chgBit(oldp+7,((1U & ((IData)(vlSelf->in) 
                                >> 1U))));
    bufp->chgBit(oldp+8,((1U & ((IData)(vlSelf->in) 
                                >> 2U))));
    bufp->chgBit(oldp+9,((1U & ((IData)(vlSelf->in) 
                                >> 3U))));
    bufp->chgBit(oldp+10,((1U & (IData)((0x3030c0e0c0c0301ULL 
                                         >> (((IData)(vlSelf->mux_sel) 
                                              << 5U) 
                                             | ((0x10U 
                                                 & ((IData)(vlSelf->in) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (IData)(vlSelf->in)) 
                                                   | (((IData)(vlSelf->rst) 
                                                       << 2U) 
                                                      | ((2U 
                                                          & (IData)(vlSelf->in)) 
                                                         | (1U 
                                                            & ((IData)(vlSelf->in) 
                                                               >> 2U))))))))))));
    bufp->chgCData(oldp+11,((((IData)(vlSelf->mux_sel) 
                              << 5U) | ((0x10U & ((IData)(vlSelf->in) 
                                                  << 4U)) 
                                        | ((8U & (IData)(vlSelf->in)) 
                                           | (((IData)(vlSelf->rst) 
                                               << 2U) 
                                              | ((2U 
                                                  & (IData)(vlSelf->in)) 
                                                 | (1U 
                                                    & ((IData)(vlSelf->in) 
                                                       >> 2U)))))))),6);
}

void Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root__trace_cleanup\n"); );
    // Init
    Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root*>(voidSelf);
    Vpost_pnr_wrapper_lut_ff_mux_post_synth__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
