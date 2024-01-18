// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_sc.h"
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
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->co_sim_adder_verilator__DOT__reset));
        bufp->chgCData(oldp+1,(vlSelf->co_sim_adder_verilator__DOT__a),4);
        bufp->chgCData(oldp+2,(vlSelf->co_sim_adder_verilator__DOT__b),4);
        bufp->chgBit(oldp+3,((1U & ((IData)(vlSelf->co_sim_adder_verilator__DOT__b) 
                                    >> 3U))));
        bufp->chgBit(oldp+4,((1U & ((IData)(vlSelf->co_sim_adder_verilator__DOT__b) 
                                    >> 2U))));
        bufp->chgBit(oldp+5,((1U & ((IData)(vlSelf->co_sim_adder_verilator__DOT__b) 
                                    >> 1U))));
        bufp->chgBit(oldp+6,((1U & (IData)(vlSelf->co_sim_adder_verilator__DOT__b))));
        bufp->chgBit(oldp+7,((1U & ((IData)(vlSelf->co_sim_adder_verilator__DOT__a) 
                                    >> 3U))));
        bufp->chgBit(oldp+8,((1U & ((IData)(vlSelf->co_sim_adder_verilator__DOT__a) 
                                    >> 2U))));
        bufp->chgBit(oldp+9,((1U & ((IData)(vlSelf->co_sim_adder_verilator__DOT__a) 
                                    >> 1U))));
        bufp->chgBit(oldp+10,((1U & (IData)(vlSelf->co_sim_adder_verilator__DOT__a))));
        bufp->chgBit(oldp+11,((1U & (0x102U >> ((8U 
                                                 & (IData)(vlSelf->co_sim_adder_verilator__DOT__a)) 
                                                | (((IData)(vlSelf->co_sim_adder_verilator__DOT__reset) 
                                                    << 2U) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->co_sim_adder_verilator__DOT__b) 
                                                         >> 3U))))))));
        bufp->chgCData(oldp+12,(((8U & (IData)(vlSelf->co_sim_adder_verilator__DOT__a)) 
                                 | (((IData)(vlSelf->co_sim_adder_verilator__DOT__reset) 
                                     << 2U) | (1U & 
                                               ((IData)(vlSelf->co_sim_adder_verilator__DOT__b) 
                                                >> 3U))))),5);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        bufp->chgCData(oldp+13,((((IData)(vlSelf->co_sim_adder_verilator__DOT__inst__DOT__dffre_sum__05b0__05d_output_0_0) 
                                  << 4U) | (((IData)(vlSelf->co_sim_adder_verilator__DOT__inst__DOT__dffre_sum__05b1__05d_output_0_0) 
                                             << 3U) 
                                            | (((IData)(vlSelf->co_sim_adder_verilator__DOT__inst__DOT__dffre_sum__05b2__05d_output_0_0) 
                                                << 2U) 
                                               | (((IData)(vlSelf->co_sim_adder_verilator__DOT__inst__DOT__dffre_sum__05b3__05d_output_0_0) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->co_sim_adder_verilator__DOT__inst__DOT__dffre_sum__05b4__05d_output_0_0)))))),5);
        bufp->chgBit(oldp+14,(vlSelf->co_sim_adder_verilator__DOT__inst__DOT__dffre_sum__05b0__05d_output_0_0));
        bufp->chgBit(oldp+15,(vlSelf->co_sim_adder_verilator__DOT__inst__DOT__dffre_sum__05b1__05d_output_0_0));
        bufp->chgBit(oldp+16,(vlSelf->co_sim_adder_verilator__DOT__inst__DOT__dffre_sum__05b2__05d_output_0_0));
        bufp->chgBit(oldp+17,(vlSelf->co_sim_adder_verilator__DOT__inst__DOT__dffre_sum__05b3__05d_output_0_0));
        bufp->chgBit(oldp+18,(vlSelf->co_sim_adder_verilator__DOT__inst__DOT__dffre_sum__05b4__05d_output_0_0));
    }
    bufp->chgBit(oldp+19,(vlSelf->co_sim_adder_verilator__DOT__clock));
    bufp->chgBit(oldp+20,((1U & (0x9060606U >> ((0x10U 
                                                 & ((IData)(vlSelf->co_sim_adder_verilator__DOT__b) 
                                                    << 1U)) 
                                                | ((8U 
                                                    & (IData)(vlSelf->co_sim_adder_verilator__DOT__a)) 
                                                   | (((IData)(vlSelf->co_sim_adder_verilator__DOT__reset) 
                                                       << 2U) 
                                                      | (IData)(vlSelf->__VdfgTmp_hcfa82f7a__0))))))));
    bufp->chgBit(oldp+21,((1U & (0xe080808U >> (IData)(vlSelf->co_sim_adder_verilator__DOT__inst__DOT____Vcellinp__lut___024abc__0241007__024new_new_n18___05F__in)))));
    bufp->chgBit(oldp+22,((1U & (0x210012U >> ((0x10U 
                                                & ((0xe080808U 
                                                    >> (IData)(vlSelf->co_sim_adder_verilator__DOT__inst__DOT____Vcellinp__lut___024abc__0241007__024new_new_n18___05F__in)) 
                                                   << 4U)) 
                                               | ((4U 
                                                   & ((IData)(vlSelf->co_sim_adder_verilator__DOT__a) 
                                                      << 1U)) 
                                                  | (((IData)(vlSelf->co_sim_adder_verilator__DOT__reset) 
                                                      << 1U) 
                                                     | (1U 
                                                        & ((IData)(vlSelf->co_sim_adder_verilator__DOT__b) 
                                                           >> 1U)))))))));
    bufp->chgBit(oldp+23,((1U & (IData)((0x3332332032002000ULL 
                                         >> ((0x20U 
                                              & ((IData)(vlSelf->co_sim_adder_verilator__DOT__b) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & ((0xe080808U 
                                                     >> (IData)(vlSelf->co_sim_adder_verilator__DOT__inst__DOT____Vcellinp__lut___024abc__0241007__024new_new_n18___05F__in)) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & ((IData)(vlSelf->co_sim_adder_verilator__DOT__a) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & ((IData)(vlSelf->co_sim_adder_verilator__DOT__b) 
                                                          << 1U)) 
                                                      | (((IData)(vlSelf->co_sim_adder_verilator__DOT__reset) 
                                                          << 1U) 
                                                         | (1U 
                                                            & ((IData)(vlSelf->co_sim_adder_verilator__DOT__a) 
                                                               >> 1U))))))))))));
    bufp->chgBit(oldp+24,((1U & (IData)((0xc936936cULL 
                                         >> (((IData)(vlSelf->co_sim_adder_verilator__DOT__reset) 
                                              << 5U) 
                                             | ((0x10U 
                                                 & ((0xe080808U 
                                                     >> (IData)(vlSelf->co_sim_adder_verilator__DOT__inst__DOT____Vcellinp__lut___024abc__0241007__024new_new_n18___05F__in)) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & ((IData)(vlSelf->co_sim_adder_verilator__DOT__b) 
                                                       << 3U)) 
                                                   | ((6U 
                                                       & ((IData)(vlSelf->co_sim_adder_verilator__DOT__a) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->co_sim_adder_verilator__DOT__b) 
                                                            >> 1U)))))))))));
    bufp->chgCData(oldp+25,(((0x10U & ((IData)(vlSelf->co_sim_adder_verilator__DOT__b) 
                                       << 1U)) | ((8U 
                                                   & (IData)(vlSelf->co_sim_adder_verilator__DOT__a)) 
                                                  | (((IData)(vlSelf->co_sim_adder_verilator__DOT__reset) 
                                                      << 2U) 
                                                     | (IData)(vlSelf->__VdfgTmp_hcfa82f7a__0))))),5);
    bufp->chgCData(oldp+26,(((0x10U & ((0xe080808U 
                                        >> (IData)(vlSelf->co_sim_adder_verilator__DOT__inst__DOT____Vcellinp__lut___024abc__0241007__024new_new_n18___05F__in)) 
                                       << 4U)) | ((4U 
                                                   & ((IData)(vlSelf->co_sim_adder_verilator__DOT__a) 
                                                      << 1U)) 
                                                  | (((IData)(vlSelf->co_sim_adder_verilator__DOT__reset) 
                                                      << 1U) 
                                                     | (1U 
                                                        & ((IData)(vlSelf->co_sim_adder_verilator__DOT__b) 
                                                           >> 1U)))))),5);
    bufp->chgCData(oldp+27,((((IData)(vlSelf->co_sim_adder_verilator__DOT__reset) 
                              << 5U) | ((0x10U & ((0xe080808U 
                                                   >> (IData)(vlSelf->co_sim_adder_verilator__DOT__inst__DOT____Vcellinp__lut___024abc__0241007__024new_new_n18___05F__in)) 
                                                  << 4U)) 
                                        | ((8U & ((IData)(vlSelf->co_sim_adder_verilator__DOT__b) 
                                                  << 3U)) 
                                           | ((6U & 
                                               ((IData)(vlSelf->co_sim_adder_verilator__DOT__a) 
                                                << 1U)) 
                                              | (1U 
                                                 & ((IData)(vlSelf->co_sim_adder_verilator__DOT__b) 
                                                    >> 1U))))))),6);
    bufp->chgCData(oldp+28,(((0x20U & ((IData)(vlSelf->co_sim_adder_verilator__DOT__b) 
                                       << 5U)) | ((0x10U 
                                                   & ((0xe080808U 
                                                       >> (IData)(vlSelf->co_sim_adder_verilator__DOT__inst__DOT____Vcellinp__lut___024abc__0241007__024new_new_n18___05F__in)) 
                                                      << 4U)) 
                                                  | ((8U 
                                                      & ((IData)(vlSelf->co_sim_adder_verilator__DOT__a) 
                                                         << 3U)) 
                                                     | ((4U 
                                                         & ((IData)(vlSelf->co_sim_adder_verilator__DOT__b) 
                                                            << 1U)) 
                                                        | (((IData)(vlSelf->co_sim_adder_verilator__DOT__reset) 
                                                            << 1U) 
                                                           | (1U 
                                                              & ((IData)(vlSelf->co_sim_adder_verilator__DOT__a) 
                                                                 >> 1U)))))))),6);
    bufp->chgCData(oldp+29,(vlSelf->co_sim_adder_verilator__DOT__inst__DOT____Vcellinp__lut___024abc__0241007__024new_new_n18___05F__in),5);
}

void Vco_sim_adder_verilator___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_adder_verilator___024root__trace_cleanup\n"); );
    // Init
    Vco_sim_adder_verilator___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vco_sim_adder_verilator___024root*>(voidSelf);
    Vco_sim_adder_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
