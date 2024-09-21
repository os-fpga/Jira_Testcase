// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vco_sim_syn2.h for the primary calling header

#include "Vco_sim_syn2__pch.h"
#include "Vco_sim_syn2_post_norm.h"

VL_INLINE_OPT void Vco_sim_syn2_post_norm___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4__1(Vco_sim_syn2_post_norm* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_syn2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vco_sim_syn2_post_norm___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4__1\n"); );
    // Body
    vlSelf->__PVT__out = (((IData)(vlSelf->__PVT__exp_out_final) 
                           << 0x17U) | (((IData)(vlSelf->__PVT__inf_out) 
                                         | (IData)(vlSelf->__PVT__ovf0))
                                         ? 0U : (((IData)(vlSelf->__PVT__max_num) 
                                                  | (IData)(vlSelf->__VdfgRegularize_he8d392c1_0_46))
                                                  ? 0x7fffffU
                                                  : vlSelf->__PVT__fract_out_rnd)));
}
