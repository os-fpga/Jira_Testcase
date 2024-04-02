// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vco_sim_mac_32__Syms.h"


void Vco_sim_mac_32___024root__trace_chg_0_sub_0(Vco_sim_mac_32___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vco_sim_mac_32___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_mac_32___024root__trace_chg_0\n"); );
    // Init
    Vco_sim_mac_32___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vco_sim_mac_32___024root*>(voidSelf);
    Vco_sim_mac_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vco_sim_mac_32___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vco_sim_mac_32___024root__trace_chg_0_sub_0(Vco_sim_mac_32___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_mac_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_mac_32___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgBit(oldp+0,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__subtract_int));
        bufp->chgCData(oldp+1,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__acc_fir_int),6);
        bufp->chgCData(oldp+2,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__shift_right_int),6);
        bufp->chgBit(oldp+3,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__round_int));
        bufp->chgBit(oldp+4,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__saturate_int));
        bufp->chgBit(oldp+5,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__load_acc_int));
        bufp->chgBit(oldp+6,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__subtract_int));
        bufp->chgCData(oldp+7,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__acc_fir_int),6);
        bufp->chgCData(oldp+8,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__shift_right_int),6);
        bufp->chgBit(oldp+9,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__round_int));
        bufp->chgBit(oldp+10,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__saturate_int));
        bufp->chgBit(oldp+11,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__load_acc_int));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+12,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__feedback_int),3);
        bufp->chgBit(oldp+13,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__unsigned_a_int));
        bufp->chgBit(oldp+14,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__unsigned_b_int));
        bufp->chgCData(oldp+15,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__feedback_int),3);
        bufp->chgBit(oldp+16,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__unsigned_a_int));
        bufp->chgBit(oldp+17,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__unsigned_b_int));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+18,(vlSelf->co_sim_mac_32__DOT__reset));
        bufp->chgSData(oldp+19,(vlSelf->co_sim_mac_32__DOT__a),16);
        bufp->chgSData(oldp+20,(vlSelf->co_sim_mac_32__DOT__b),16);
        bufp->chgCData(oldp+21,(vlSelf->co_sim_mac_32__DOT__id),2);
        bufp->chgIData(oldp+22,(vlSelf->co_sim_mac_32__DOT__mismatch),32);
        bufp->chgCData(oldp+23,(((2U & ((IData)(vlSelf->co_sim_mac_32__DOT__b) 
                                        >> 0xcU)) | 
                                 (1U & (IData)(vlSelf->co_sim_mac_32__DOT__id)))),2);
        bufp->chgBit(oldp+24,((1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__id)) 
                                     & ((IData)(vlSelf->co_sim_mac_32__DOT__b) 
                                        >> 0xdU)))));
        bufp->chgCData(oldp+25,(((0x2000U & (IData)(vlSelf->co_sim_mac_32__DOT__b))
                                  ? 1U : 0U)),2);
        bufp->chgCData(oldp+26,(((2U & ((IData)(vlSelf->co_sim_mac_32__DOT__b) 
                                        >> 0xdU)) | 
                                 (1U & (IData)(vlSelf->co_sim_mac_32__DOT__id)))),2);
        bufp->chgBit(oldp+27,((1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__id)) 
                                     & ((IData)(vlSelf->co_sim_mac_32__DOT__b) 
                                        >> 0xeU)))));
        bufp->chgCData(oldp+28,(((0x4000U & (IData)(vlSelf->co_sim_mac_32__DOT__b))
                                  ? 1U : 0U)),2);
        bufp->chgCData(oldp+29,(((2U & ((IData)(vlSelf->co_sim_mac_32__DOT__a) 
                                        << 1U)) | (1U 
                                                   & (IData)(vlSelf->co_sim_mac_32__DOT__id)))),2);
        bufp->chgBit(oldp+30,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__id) 
                                     & (IData)(vlSelf->co_sim_mac_32__DOT__a)))));
        bufp->chgCData(oldp+31,(((1U & (IData)(vlSelf->co_sim_mac_32__DOT__a))
                                  ? 2U : 0U)),2);
        bufp->chgCData(oldp+32,(((2U & (IData)(vlSelf->co_sim_mac_32__DOT__a)) 
                                 | (1U & (IData)(vlSelf->co_sim_mac_32__DOT__id)))),2);
        bufp->chgBit(oldp+33,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__id) 
                                     & ((IData)(vlSelf->co_sim_mac_32__DOT__a) 
                                        >> 1U)))));
        bufp->chgCData(oldp+34,(((2U & (IData)(vlSelf->co_sim_mac_32__DOT__a))
                                  ? 2U : 0U)),2);
        bufp->chgCData(oldp+35,(((2U & ((IData)(vlSelf->co_sim_mac_32__DOT__a) 
                                        >> 1U)) | (1U 
                                                   & (IData)(vlSelf->co_sim_mac_32__DOT__id)))),2);
        bufp->chgBit(oldp+36,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__id) 
                                     & ((IData)(vlSelf->co_sim_mac_32__DOT__a) 
                                        >> 2U)))));
        bufp->chgCData(oldp+37,(((4U & (IData)(vlSelf->co_sim_mac_32__DOT__a))
                                  ? 2U : 0U)),2);
        bufp->chgCData(oldp+38,(((2U & ((IData)(vlSelf->co_sim_mac_32__DOT__a) 
                                        >> 3U)) | (1U 
                                                   & (IData)(vlSelf->co_sim_mac_32__DOT__id)))),2);
        bufp->chgBit(oldp+39,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__id) 
                                     & ((IData)(vlSelf->co_sim_mac_32__DOT__a) 
                                        >> 4U)))));
        bufp->chgCData(oldp+40,(((0x10U & (IData)(vlSelf->co_sim_mac_32__DOT__a))
                                  ? 2U : 0U)),2);
        bufp->chgCData(oldp+41,(((2U & ((IData)(vlSelf->co_sim_mac_32__DOT__a) 
                                        >> 6U)) | (1U 
                                                   & (IData)(vlSelf->co_sim_mac_32__DOT__id)))),2);
        bufp->chgBit(oldp+42,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__id) 
                                     & ((IData)(vlSelf->co_sim_mac_32__DOT__a) 
                                        >> 7U)))));
        bufp->chgCData(oldp+43,(((0x80U & (IData)(vlSelf->co_sim_mac_32__DOT__a))
                                  ? 2U : 0U)),2);
        bufp->chgCData(oldp+44,(((2U & ((IData)(vlSelf->co_sim_mac_32__DOT__a) 
                                        >> 9U)) | (1U 
                                                   & (IData)(vlSelf->co_sim_mac_32__DOT__id)))),2);
        bufp->chgBit(oldp+45,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__id) 
                                     & ((IData)(vlSelf->co_sim_mac_32__DOT__a) 
                                        >> 0xaU)))));
        bufp->chgCData(oldp+46,(((0x400U & (IData)(vlSelf->co_sim_mac_32__DOT__a))
                                  ? 2U : 0U)),2);
        bufp->chgCData(oldp+47,(((2U & ((IData)(vlSelf->co_sim_mac_32__DOT__a) 
                                        >> 0xcU)) | 
                                 (1U & (IData)(vlSelf->co_sim_mac_32__DOT__id)))),2);
        bufp->chgBit(oldp+48,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__id) 
                                     & ((IData)(vlSelf->co_sim_mac_32__DOT__a) 
                                        >> 0xdU)))));
        bufp->chgCData(oldp+49,(((0x2000U & (IData)(vlSelf->co_sim_mac_32__DOT__a))
                                  ? 2U : 0U)),2);
        bufp->chgCData(oldp+50,(((2U & ((IData)(vlSelf->co_sim_mac_32__DOT__b) 
                                        << 1U)) | (1U 
                                                   & (IData)(vlSelf->co_sim_mac_32__DOT__id)))),2);
        bufp->chgBit(oldp+51,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__id) 
                                     & (IData)(vlSelf->co_sim_mac_32__DOT__b)))));
        bufp->chgCData(oldp+52,(((1U & (IData)(vlSelf->co_sim_mac_32__DOT__b))
                                  ? 2U : 0U)),2);
        bufp->chgCData(oldp+53,(((2U & ((IData)(vlSelf->co_sim_mac_32__DOT__b) 
                                        >> 2U)) | (1U 
                                                   & (IData)(vlSelf->co_sim_mac_32__DOT__id)))),2);
        bufp->chgBit(oldp+54,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__id) 
                                     & ((IData)(vlSelf->co_sim_mac_32__DOT__b) 
                                        >> 3U)))));
        bufp->chgCData(oldp+55,(((8U & (IData)(vlSelf->co_sim_mac_32__DOT__b))
                                  ? 2U : 0U)),2);
        bufp->chgCData(oldp+56,(((2U & ((IData)(vlSelf->co_sim_mac_32__DOT__b) 
                                        >> 5U)) | (1U 
                                                   & (IData)(vlSelf->co_sim_mac_32__DOT__id)))),2);
        bufp->chgBit(oldp+57,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__id) 
                                     & ((IData)(vlSelf->co_sim_mac_32__DOT__b) 
                                        >> 6U)))));
        bufp->chgCData(oldp+58,(((0x40U & (IData)(vlSelf->co_sim_mac_32__DOT__b))
                                  ? 2U : 0U)),2);
        bufp->chgCData(oldp+59,(((2U & ((IData)(vlSelf->co_sim_mac_32__DOT__b) 
                                        >> 8U)) | (1U 
                                                   & (IData)(vlSelf->co_sim_mac_32__DOT__id)))),2);
        bufp->chgBit(oldp+60,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__id) 
                                     & ((IData)(vlSelf->co_sim_mac_32__DOT__b) 
                                        >> 9U)))));
        bufp->chgCData(oldp+61,(((0x200U & (IData)(vlSelf->co_sim_mac_32__DOT__b))
                                  ? 2U : 0U)),2);
        bufp->chgCData(oldp+62,(((2U & ((IData)(vlSelf->co_sim_mac_32__DOT__b) 
                                        >> 0xbU)) | 
                                 (1U & (IData)(vlSelf->co_sim_mac_32__DOT__id)))),2);
        bufp->chgBit(oldp+63,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__id) 
                                     & ((IData)(vlSelf->co_sim_mac_32__DOT__b) 
                                        >> 0xcU)))));
        bufp->chgCData(oldp+64,(((0x1000U & (IData)(vlSelf->co_sim_mac_32__DOT__b))
                                  ? 2U : 0U)),2);
        bufp->chgCData(oldp+65,(((2U & ((IData)(vlSelf->co_sim_mac_32__DOT__b) 
                                        >> 0xeU)) | 
                                 (1U & (IData)(vlSelf->co_sim_mac_32__DOT__id)))),2);
        bufp->chgCData(oldp+66,(((0x8000U & (IData)(vlSelf->co_sim_mac_32__DOT__b))
                                  ? 2U : 0U)),2);
        bufp->chgCData(oldp+67,(((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                  ? 0xcU : 0xaU)),4);
        bufp->chgCData(oldp+68,(((2U & ((IData)(vlSelf->co_sim_mac_32__DOT__id) 
                                        << 1U)) | (1U 
                                                   & ((IData)(vlSelf->co_sim_mac_32__DOT__b) 
                                                      >> 0xdU)))),2);
        bufp->chgBit(oldp+69,((1U & (((IData)(vlSelf->co_sim_mac_32__DOT__b) 
                                      >> 0xdU) & (IData)(vlSelf->co_sim_mac_32__DOT__id)))));
        bufp->chgCData(oldp+70,(((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                  ? 2U : 0U)),2);
        bufp->chgCData(oldp+71,(((2U & ((IData)(vlSelf->co_sim_mac_32__DOT__id) 
                                        << 1U)) | (1U 
                                                   & ((IData)(vlSelf->co_sim_mac_32__DOT__b) 
                                                      >> 0xeU)))),2);
        bufp->chgBit(oldp+72,((1U & (((IData)(vlSelf->co_sim_mac_32__DOT__b) 
                                      >> 0xeU) & (IData)(vlSelf->co_sim_mac_32__DOT__id)))));
        bufp->chgCData(oldp+73,(((2U & ((IData)(vlSelf->co_sim_mac_32__DOT__b) 
                                        >> 9U)) | (1U 
                                                   & (IData)(vlSelf->co_sim_mac_32__DOT__id)))),2);
        bufp->chgBit(oldp+74,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__id) 
                                     & ((IData)(vlSelf->co_sim_mac_32__DOT__b) 
                                        >> 0xaU)))));
        bufp->chgCData(oldp+75,(((0x400U & (IData)(vlSelf->co_sim_mac_32__DOT__b))
                                  ? 2U : 0U)),2);
        bufp->chgCData(oldp+76,(((2U & ((IData)(vlSelf->co_sim_mac_32__DOT__b) 
                                        >> 0xaU)) | 
                                 (1U & (IData)(vlSelf->co_sim_mac_32__DOT__id)))),2);
        bufp->chgBit(oldp+77,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__id) 
                                     & ((IData)(vlSelf->co_sim_mac_32__DOT__b) 
                                        >> 0xbU)))));
        bufp->chgCData(oldp+78,(((0x800U & (IData)(vlSelf->co_sim_mac_32__DOT__b))
                                  ? 2U : 0U)),2);
        bufp->chgCData(oldp+79,(((2U & ((IData)(vlSelf->co_sim_mac_32__DOT__b) 
                                        >> 6U)) | (1U 
                                                   & (IData)(vlSelf->co_sim_mac_32__DOT__id)))),2);
        bufp->chgBit(oldp+80,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__id) 
                                     & ((IData)(vlSelf->co_sim_mac_32__DOT__b) 
                                        >> 7U)))));
        bufp->chgCData(oldp+81,(((0x80U & (IData)(vlSelf->co_sim_mac_32__DOT__b))
                                  ? 2U : 0U)),2);
        bufp->chgCData(oldp+82,(((2U & ((IData)(vlSelf->co_sim_mac_32__DOT__b) 
                                        >> 7U)) | (1U 
                                                   & (IData)(vlSelf->co_sim_mac_32__DOT__id)))),2);
        bufp->chgBit(oldp+83,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__id) 
                                     & ((IData)(vlSelf->co_sim_mac_32__DOT__b) 
                                        >> 8U)))));
        bufp->chgCData(oldp+84,(((0x100U & (IData)(vlSelf->co_sim_mac_32__DOT__b))
                                  ? 2U : 0U)),2);
        bufp->chgCData(oldp+85,(((2U & ((IData)(vlSelf->co_sim_mac_32__DOT__b) 
                                        >> 3U)) | (1U 
                                                   & (IData)(vlSelf->co_sim_mac_32__DOT__id)))),2);
        bufp->chgBit(oldp+86,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__id) 
                                     & ((IData)(vlSelf->co_sim_mac_32__DOT__b) 
                                        >> 4U)))));
        bufp->chgCData(oldp+87,(((0x10U & (IData)(vlSelf->co_sim_mac_32__DOT__b))
                                  ? 2U : 0U)),2);
        bufp->chgCData(oldp+88,(((2U & ((IData)(vlSelf->co_sim_mac_32__DOT__b) 
                                        >> 4U)) | (1U 
                                                   & (IData)(vlSelf->co_sim_mac_32__DOT__id)))),2);
        bufp->chgBit(oldp+89,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__id) 
                                     & ((IData)(vlSelf->co_sim_mac_32__DOT__b) 
                                        >> 5U)))));
        bufp->chgCData(oldp+90,(((0x20U & (IData)(vlSelf->co_sim_mac_32__DOT__b))
                                  ? 2U : 0U)),2);
        bufp->chgCData(oldp+91,(((2U & (IData)(vlSelf->co_sim_mac_32__DOT__b)) 
                                 | (1U & (IData)(vlSelf->co_sim_mac_32__DOT__id)))),2);
        bufp->chgBit(oldp+92,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__id) 
                                     & ((IData)(vlSelf->co_sim_mac_32__DOT__b) 
                                        >> 1U)))));
        bufp->chgCData(oldp+93,(((2U & (IData)(vlSelf->co_sim_mac_32__DOT__b))
                                  ? 2U : 0U)),2);
        bufp->chgCData(oldp+94,(((2U & ((IData)(vlSelf->co_sim_mac_32__DOT__b) 
                                        >> 1U)) | (1U 
                                                   & (IData)(vlSelf->co_sim_mac_32__DOT__id)))),2);
        bufp->chgBit(oldp+95,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__id) 
                                     & ((IData)(vlSelf->co_sim_mac_32__DOT__b) 
                                        >> 2U)))));
        bufp->chgCData(oldp+96,(((4U & (IData)(vlSelf->co_sim_mac_32__DOT__b))
                                  ? 2U : 0U)),2);
        bufp->chgCData(oldp+97,(((2U & ((IData)(vlSelf->co_sim_mac_32__DOT__a) 
                                        >> 0xdU)) | 
                                 (1U & (IData)(vlSelf->co_sim_mac_32__DOT__id)))),2);
        bufp->chgBit(oldp+98,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__id) 
                                     & ((IData)(vlSelf->co_sim_mac_32__DOT__a) 
                                        >> 0xeU)))));
        bufp->chgCData(oldp+99,(((0x4000U & (IData)(vlSelf->co_sim_mac_32__DOT__a))
                                  ? 2U : 0U)),2);
        bufp->chgCData(oldp+100,(((2U & ((IData)(vlSelf->co_sim_mac_32__DOT__a) 
                                         >> 0xeU)) 
                                  | (1U & (IData)(vlSelf->co_sim_mac_32__DOT__id)))),2);
        bufp->chgCData(oldp+101,(((0x8000U & (IData)(vlSelf->co_sim_mac_32__DOT__a))
                                   ? 2U : 0U)),2);
        bufp->chgCData(oldp+102,(((2U & ((IData)(vlSelf->co_sim_mac_32__DOT__a) 
                                         >> 0xaU)) 
                                  | (1U & (IData)(vlSelf->co_sim_mac_32__DOT__id)))),2);
        bufp->chgBit(oldp+103,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__id) 
                                      & ((IData)(vlSelf->co_sim_mac_32__DOT__a) 
                                         >> 0xbU)))));
        bufp->chgCData(oldp+104,(((0x800U & (IData)(vlSelf->co_sim_mac_32__DOT__a))
                                   ? 2U : 0U)),2);
        bufp->chgCData(oldp+105,(((2U & ((IData)(vlSelf->co_sim_mac_32__DOT__a) 
                                         >> 0xbU)) 
                                  | (1U & (IData)(vlSelf->co_sim_mac_32__DOT__id)))),2);
        bufp->chgBit(oldp+106,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__id) 
                                      & ((IData)(vlSelf->co_sim_mac_32__DOT__a) 
                                         >> 0xcU)))));
        bufp->chgCData(oldp+107,(((0x1000U & (IData)(vlSelf->co_sim_mac_32__DOT__a))
                                   ? 2U : 0U)),2);
        bufp->chgCData(oldp+108,(((2U & ((IData)(vlSelf->co_sim_mac_32__DOT__a) 
                                         >> 7U)) | 
                                  (1U & (IData)(vlSelf->co_sim_mac_32__DOT__id)))),2);
        bufp->chgBit(oldp+109,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__id) 
                                      & ((IData)(vlSelf->co_sim_mac_32__DOT__a) 
                                         >> 8U)))));
        bufp->chgCData(oldp+110,(((0x100U & (IData)(vlSelf->co_sim_mac_32__DOT__a))
                                   ? 2U : 0U)),2);
        bufp->chgCData(oldp+111,(((2U & ((IData)(vlSelf->co_sim_mac_32__DOT__a) 
                                         >> 8U)) | 
                                  (1U & (IData)(vlSelf->co_sim_mac_32__DOT__id)))),2);
        bufp->chgBit(oldp+112,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__id) 
                                      & ((IData)(vlSelf->co_sim_mac_32__DOT__a) 
                                         >> 9U)))));
        bufp->chgCData(oldp+113,(((0x200U & (IData)(vlSelf->co_sim_mac_32__DOT__a))
                                   ? 2U : 0U)),2);
        bufp->chgCData(oldp+114,(((2U & ((IData)(vlSelf->co_sim_mac_32__DOT__a) 
                                         >> 4U)) | 
                                  (1U & (IData)(vlSelf->co_sim_mac_32__DOT__id)))),2);
        bufp->chgBit(oldp+115,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__id) 
                                      & ((IData)(vlSelf->co_sim_mac_32__DOT__a) 
                                         >> 5U)))));
        bufp->chgCData(oldp+116,(((0x20U & (IData)(vlSelf->co_sim_mac_32__DOT__a))
                                   ? 2U : 0U)),2);
        bufp->chgCData(oldp+117,(((2U & ((IData)(vlSelf->co_sim_mac_32__DOT__a) 
                                         >> 5U)) | 
                                  (1U & (IData)(vlSelf->co_sim_mac_32__DOT__id)))),2);
        bufp->chgBit(oldp+118,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__id) 
                                      & ((IData)(vlSelf->co_sim_mac_32__DOT__a) 
                                         >> 6U)))));
        bufp->chgCData(oldp+119,(((0x40U & (IData)(vlSelf->co_sim_mac_32__DOT__a))
                                   ? 2U : 0U)),2);
        bufp->chgCData(oldp+120,(((2U & ((IData)(vlSelf->co_sim_mac_32__DOT__a) 
                                         >> 2U)) | 
                                  (1U & (IData)(vlSelf->co_sim_mac_32__DOT__id)))),2);
        bufp->chgBit(oldp+121,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__id) 
                                      & ((IData)(vlSelf->co_sim_mac_32__DOT__a) 
                                         >> 3U)))));
        bufp->chgCData(oldp+122,(((8U & (IData)(vlSelf->co_sim_mac_32__DOT__a))
                                   ? 2U : 0U)),2);
        bufp->chgCData(oldp+123,(((0x8000U & (IData)(vlSelf->co_sim_mac_32__DOT__b))
                                   ? 1U : 0U)),2);
        bufp->chgBit(oldp+124,((1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__id)) 
                                      & ((IData)(vlSelf->co_sim_mac_32__DOT__b) 
                                         >> 0xcU)))));
        bufp->chgCData(oldp+125,(((0x1000U & (IData)(vlSelf->co_sim_mac_32__DOT__b))
                                   ? 1U : 0U)),2);
        bufp->chgBit(oldp+126,((1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__id)) 
                                      & ((IData)(vlSelf->co_sim_mac_32__DOT__b) 
                                         >> 0xbU)))));
        bufp->chgCData(oldp+127,(((0x800U & (IData)(vlSelf->co_sim_mac_32__DOT__b))
                                   ? 1U : 0U)),2);
        bufp->chgBit(oldp+128,((1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__id)) 
                                      & ((IData)(vlSelf->co_sim_mac_32__DOT__b) 
                                         >> 0xaU)))));
        bufp->chgCData(oldp+129,(((0x400U & (IData)(vlSelf->co_sim_mac_32__DOT__b))
                                   ? 1U : 0U)),2);
        bufp->chgBit(oldp+130,((1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__id)) 
                                      & ((IData)(vlSelf->co_sim_mac_32__DOT__b) 
                                         >> 9U)))));
        bufp->chgCData(oldp+131,(((0x200U & (IData)(vlSelf->co_sim_mac_32__DOT__b))
                                   ? 1U : 0U)),2);
        bufp->chgBit(oldp+132,((1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__id)) 
                                      & ((IData)(vlSelf->co_sim_mac_32__DOT__b) 
                                         >> 8U)))));
        bufp->chgCData(oldp+133,(((0x100U & (IData)(vlSelf->co_sim_mac_32__DOT__b))
                                   ? 1U : 0U)),2);
        bufp->chgBit(oldp+134,((1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__id)) 
                                      & ((IData)(vlSelf->co_sim_mac_32__DOT__b) 
                                         >> 7U)))));
        bufp->chgCData(oldp+135,(((0x80U & (IData)(vlSelf->co_sim_mac_32__DOT__b))
                                   ? 1U : 0U)),2);
        bufp->chgBit(oldp+136,((1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__id)) 
                                      & ((IData)(vlSelf->co_sim_mac_32__DOT__b) 
                                         >> 6U)))));
        bufp->chgCData(oldp+137,(((0x40U & (IData)(vlSelf->co_sim_mac_32__DOT__b))
                                   ? 1U : 0U)),2);
        bufp->chgBit(oldp+138,((1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__id)) 
                                      & ((IData)(vlSelf->co_sim_mac_32__DOT__b) 
                                         >> 5U)))));
        bufp->chgCData(oldp+139,(((0x20U & (IData)(vlSelf->co_sim_mac_32__DOT__b))
                                   ? 1U : 0U)),2);
        bufp->chgBit(oldp+140,((1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__id)) 
                                      & ((IData)(vlSelf->co_sim_mac_32__DOT__b) 
                                         >> 4U)))));
        bufp->chgCData(oldp+141,(((0x10U & (IData)(vlSelf->co_sim_mac_32__DOT__b))
                                   ? 1U : 0U)),2);
        bufp->chgBit(oldp+142,((1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__id)) 
                                      & ((IData)(vlSelf->co_sim_mac_32__DOT__b) 
                                         >> 3U)))));
        bufp->chgCData(oldp+143,(((8U & (IData)(vlSelf->co_sim_mac_32__DOT__b))
                                   ? 1U : 0U)),2);
        bufp->chgBit(oldp+144,((1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__id)) 
                                      & ((IData)(vlSelf->co_sim_mac_32__DOT__b) 
                                         >> 2U)))));
        bufp->chgCData(oldp+145,(((4U & (IData)(vlSelf->co_sim_mac_32__DOT__b))
                                   ? 1U : 0U)),2);
        bufp->chgBit(oldp+146,((1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__id)) 
                                      & ((IData)(vlSelf->co_sim_mac_32__DOT__b) 
                                         >> 1U)))));
        bufp->chgCData(oldp+147,(((2U & (IData)(vlSelf->co_sim_mac_32__DOT__b))
                                   ? 1U : 0U)),2);
        bufp->chgBit(oldp+148,((1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__id)) 
                                      & (IData)(vlSelf->co_sim_mac_32__DOT__b)))));
        bufp->chgCData(oldp+149,(((1U & (IData)(vlSelf->co_sim_mac_32__DOT__b))
                                   ? 1U : 0U)),2);
        bufp->chgCData(oldp+150,(((0x8000U & (IData)(vlSelf->co_sim_mac_32__DOT__a))
                                   ? 1U : 0U)),2);
        bufp->chgBit(oldp+151,((1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__id)) 
                                      & ((IData)(vlSelf->co_sim_mac_32__DOT__a) 
                                         >> 0xeU)))));
        bufp->chgCData(oldp+152,(((0x4000U & (IData)(vlSelf->co_sim_mac_32__DOT__a))
                                   ? 1U : 0U)),2);
        bufp->chgBit(oldp+153,((1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__id)) 
                                      & ((IData)(vlSelf->co_sim_mac_32__DOT__a) 
                                         >> 0xdU)))));
        bufp->chgCData(oldp+154,(((0x2000U & (IData)(vlSelf->co_sim_mac_32__DOT__a))
                                   ? 1U : 0U)),2);
        bufp->chgBit(oldp+155,((1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__id)) 
                                      & ((IData)(vlSelf->co_sim_mac_32__DOT__a) 
                                         >> 0xcU)))));
        bufp->chgCData(oldp+156,(((0x1000U & (IData)(vlSelf->co_sim_mac_32__DOT__a))
                                   ? 1U : 0U)),2);
        bufp->chgBit(oldp+157,((1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__id)) 
                                      & ((IData)(vlSelf->co_sim_mac_32__DOT__a) 
                                         >> 0xbU)))));
        bufp->chgCData(oldp+158,(((0x800U & (IData)(vlSelf->co_sim_mac_32__DOT__a))
                                   ? 1U : 0U)),2);
        bufp->chgBit(oldp+159,((1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__id)) 
                                      & ((IData)(vlSelf->co_sim_mac_32__DOT__a) 
                                         >> 0xaU)))));
        bufp->chgCData(oldp+160,(((0x400U & (IData)(vlSelf->co_sim_mac_32__DOT__a))
                                   ? 1U : 0U)),2);
        bufp->chgBit(oldp+161,((1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__id)) 
                                      & ((IData)(vlSelf->co_sim_mac_32__DOT__a) 
                                         >> 9U)))));
        bufp->chgCData(oldp+162,(((0x200U & (IData)(vlSelf->co_sim_mac_32__DOT__a))
                                   ? 1U : 0U)),2);
        bufp->chgBit(oldp+163,((1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__id)) 
                                      & ((IData)(vlSelf->co_sim_mac_32__DOT__a) 
                                         >> 8U)))));
        bufp->chgCData(oldp+164,(((0x100U & (IData)(vlSelf->co_sim_mac_32__DOT__a))
                                   ? 1U : 0U)),2);
        bufp->chgBit(oldp+165,((1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__id)) 
                                      & ((IData)(vlSelf->co_sim_mac_32__DOT__a) 
                                         >> 7U)))));
        bufp->chgCData(oldp+166,(((0x80U & (IData)(vlSelf->co_sim_mac_32__DOT__a))
                                   ? 1U : 0U)),2);
        bufp->chgBit(oldp+167,((1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__id)) 
                                      & ((IData)(vlSelf->co_sim_mac_32__DOT__a) 
                                         >> 6U)))));
        bufp->chgCData(oldp+168,(((0x40U & (IData)(vlSelf->co_sim_mac_32__DOT__a))
                                   ? 1U : 0U)),2);
        bufp->chgBit(oldp+169,((1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__id)) 
                                      & ((IData)(vlSelf->co_sim_mac_32__DOT__a) 
                                         >> 5U)))));
        bufp->chgCData(oldp+170,(((0x20U & (IData)(vlSelf->co_sim_mac_32__DOT__a))
                                   ? 1U : 0U)),2);
        bufp->chgBit(oldp+171,((1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__id)) 
                                      & ((IData)(vlSelf->co_sim_mac_32__DOT__a) 
                                         >> 4U)))));
        bufp->chgCData(oldp+172,(((0x10U & (IData)(vlSelf->co_sim_mac_32__DOT__a))
                                   ? 1U : 0U)),2);
        bufp->chgBit(oldp+173,((1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__id)) 
                                      & ((IData)(vlSelf->co_sim_mac_32__DOT__a) 
                                         >> 3U)))));
        bufp->chgCData(oldp+174,(((8U & (IData)(vlSelf->co_sim_mac_32__DOT__a))
                                   ? 1U : 0U)),2);
        bufp->chgBit(oldp+175,((1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__id)) 
                                      & ((IData)(vlSelf->co_sim_mac_32__DOT__a) 
                                         >> 2U)))));
        bufp->chgCData(oldp+176,(((4U & (IData)(vlSelf->co_sim_mac_32__DOT__a))
                                   ? 1U : 0U)),2);
        bufp->chgBit(oldp+177,((1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__id)) 
                                      & ((IData)(vlSelf->co_sim_mac_32__DOT__a) 
                                         >> 1U)))));
        bufp->chgCData(oldp+178,(((2U & (IData)(vlSelf->co_sim_mac_32__DOT__a))
                                   ? 1U : 0U)),2);
        bufp->chgBit(oldp+179,((1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__id)) 
                                      & (IData)(vlSelf->co_sim_mac_32__DOT__a)))));
        bufp->chgCData(oldp+180,(((1U & (IData)(vlSelf->co_sim_mac_32__DOT__a))
                                   ? 1U : 0U)),2);
        bufp->chgBit(oldp+181,((1U & (IData)(vlSelf->co_sim_mac_32__DOT__a))));
        bufp->chgBit(oldp+182,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__a) 
                                      >> 1U))));
        bufp->chgBit(oldp+183,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__a) 
                                      >> 0xaU))));
        bufp->chgBit(oldp+184,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__a) 
                                      >> 0xbU))));
        bufp->chgBit(oldp+185,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__a) 
                                      >> 0xcU))));
        bufp->chgBit(oldp+186,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__a) 
                                      >> 0xdU))));
        bufp->chgBit(oldp+187,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__a) 
                                      >> 0xeU))));
        bufp->chgBit(oldp+188,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__a) 
                                      >> 0xfU))));
        bufp->chgBit(oldp+189,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__a) 
                                      >> 2U))));
        bufp->chgBit(oldp+190,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__a) 
                                      >> 3U))));
        bufp->chgBit(oldp+191,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__a) 
                                      >> 4U))));
        bufp->chgBit(oldp+192,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__a) 
                                      >> 5U))));
        bufp->chgBit(oldp+193,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__a) 
                                      >> 6U))));
        bufp->chgBit(oldp+194,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__a) 
                                      >> 7U))));
        bufp->chgBit(oldp+195,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__a) 
                                      >> 8U))));
        bufp->chgBit(oldp+196,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__a) 
                                      >> 9U))));
        bufp->chgBit(oldp+197,((1U & (IData)(vlSelf->co_sim_mac_32__DOT__b))));
        bufp->chgBit(oldp+198,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__b) 
                                      >> 1U))));
        bufp->chgBit(oldp+199,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__b) 
                                      >> 0xaU))));
        bufp->chgBit(oldp+200,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__b) 
                                      >> 0xbU))));
        bufp->chgBit(oldp+201,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__b) 
                                      >> 0xcU))));
        bufp->chgBit(oldp+202,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__b) 
                                      >> 0xdU))));
        bufp->chgBit(oldp+203,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__b) 
                                      >> 0xeU))));
        bufp->chgBit(oldp+204,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__b) 
                                      >> 0xfU))));
        bufp->chgBit(oldp+205,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__b) 
                                      >> 2U))));
        bufp->chgBit(oldp+206,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__b) 
                                      >> 3U))));
        bufp->chgBit(oldp+207,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__b) 
                                      >> 4U))));
        bufp->chgBit(oldp+208,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__b) 
                                      >> 5U))));
        bufp->chgBit(oldp+209,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__b) 
                                      >> 6U))));
        bufp->chgBit(oldp+210,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__b) 
                                      >> 7U))));
        bufp->chgBit(oldp+211,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__b) 
                                      >> 8U))));
        bufp->chgBit(oldp+212,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__b) 
                                      >> 9U))));
        bufp->chgBit(oldp+213,((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))));
        bufp->chgBit(oldp+214,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__id) 
                                      >> 1U))));
    }
    if (VL_UNLIKELY((((vlSelf->__Vm_traceActivity[1U] 
                       | vlSelf->__Vm_traceActivity
                       [2U]) | vlSelf->__Vm_traceActivity
                      [4U]) | vlSelf->__Vm_traceActivity
                     [0xdU]))) {
        bufp->chgBit(oldp+215,((1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                                      & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY))));
        bufp->chgBit(oldp+216,((1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                                      & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY 
                                         >> 1U)))));
        bufp->chgBit(oldp+217,((1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                                      & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY 
                                         >> 2U)))));
        bufp->chgBit(oldp+218,((1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                                      & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY 
                                         >> 3U)))));
        bufp->chgBit(oldp+219,((1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                                      & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY 
                                         >> 4U)))));
        bufp->chgBit(oldp+220,((1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                                      & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY 
                                         >> 5U)))));
        bufp->chgBit(oldp+221,((1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                                      & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY 
                                         >> 6U)))));
        bufp->chgBit(oldp+222,((1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                                      & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY 
                                         >> 7U)))));
        bufp->chgBit(oldp+223,((1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                                      & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY 
                                         >> 8U)))));
        bufp->chgBit(oldp+224,((1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                                      & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY 
                                         >> 9U)))));
        bufp->chgBit(oldp+225,((1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                                      & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY 
                                         >> 0xaU)))));
        bufp->chgBit(oldp+226,((1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                                      & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY 
                                         >> 0xbU)))));
        bufp->chgBit(oldp+227,((1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                                      & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY 
                                         >> 0xcU)))));
        bufp->chgBit(oldp+228,((1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                                      & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY 
                                         >> 0xdU)))));
        bufp->chgBit(oldp+229,((1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                                      & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY 
                                         >> 0xeU)))));
        bufp->chgBit(oldp+230,((1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                                      & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY 
                                         >> 0xfU)))));
        bufp->chgBit(oldp+231,((1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                                      & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY 
                                         >> 0x10U)))));
        bufp->chgBit(oldp+232,((1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                                      & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY 
                                         >> 0x11U)))));
        bufp->chgBit(oldp+233,((1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                                      & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY 
                                         >> 0x12U)))));
        bufp->chgBit(oldp+234,((1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                                      & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY 
                                         >> 0x13U)))));
        bufp->chgBit(oldp+235,((1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                                      & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY 
                                         >> 0x14U)))));
        bufp->chgBit(oldp+236,((1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                                      & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY 
                                         >> 0x15U)))));
        bufp->chgBit(oldp+237,((1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                                      & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY 
                                         >> 0x16U)))));
        bufp->chgBit(oldp+238,((1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                                      & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY 
                                         >> 0x17U)))));
        bufp->chgBit(oldp+239,((1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                                      & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY 
                                         >> 0x18U)))));
        bufp->chgBit(oldp+240,((1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                                      & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY 
                                         >> 0x19U)))));
        bufp->chgBit(oldp+241,((1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                                      & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY 
                                         >> 0x1aU)))));
        bufp->chgBit(oldp+242,((1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                                      & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY 
                                         >> 0x1bU)))));
        bufp->chgBit(oldp+243,((1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                                      & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY 
                                         >> 0x1cU)))));
        bufp->chgBit(oldp+244,((1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                                      & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY 
                                         >> 0x1dU)))));
        bufp->chgBit(oldp+245,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__reset)
                                       ? ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244054__DOT__s1) 
                                          >> 1U) : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244054__DOT__s1)))));
        bufp->chgCData(oldp+246,(((2U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY 
                                         >> 0x1cU)) 
                                  | (IData)(vlSelf->co_sim_mac_32__DOT__reset))),2);
        bufp->chgCData(oldp+247,(((2U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY 
                                         >> 0x1bU)) 
                                  | (IData)(vlSelf->co_sim_mac_32__DOT__reset))),2);
        bufp->chgCData(oldp+248,(((2U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY 
                                         >> 0x1aU)) 
                                  | (IData)(vlSelf->co_sim_mac_32__DOT__reset))),2);
        bufp->chgCData(oldp+249,(((2U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY 
                                         >> 0x19U)) 
                                  | (IData)(vlSelf->co_sim_mac_32__DOT__reset))),2);
        bufp->chgCData(oldp+250,(((2U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY 
                                         >> 0x18U)) 
                                  | (IData)(vlSelf->co_sim_mac_32__DOT__reset))),2);
        bufp->chgCData(oldp+251,(((2U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY 
                                         >> 0x17U)) 
                                  | (IData)(vlSelf->co_sim_mac_32__DOT__reset))),2);
        bufp->chgCData(oldp+252,(((2U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY 
                                         >> 0x16U)) 
                                  | (IData)(vlSelf->co_sim_mac_32__DOT__reset))),2);
        bufp->chgCData(oldp+253,(((2U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY 
                                         >> 0x15U)) 
                                  | (IData)(vlSelf->co_sim_mac_32__DOT__reset))),2);
        bufp->chgCData(oldp+254,(((2U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY 
                                         >> 0x14U)) 
                                  | (IData)(vlSelf->co_sim_mac_32__DOT__reset))),2);
        bufp->chgCData(oldp+255,(((2U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY 
                                         >> 0x13U)) 
                                  | (IData)(vlSelf->co_sim_mac_32__DOT__reset))),2);
        bufp->chgCData(oldp+256,(((2U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY 
                                         >> 0x12U)) 
                                  | (IData)(vlSelf->co_sim_mac_32__DOT__reset))),2);
        bufp->chgCData(oldp+257,(((2U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY 
                                         >> 0x11U)) 
                                  | (IData)(vlSelf->co_sim_mac_32__DOT__reset))),2);
        bufp->chgCData(oldp+258,(((2U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY 
                                         >> 0x10U)) 
                                  | (IData)(vlSelf->co_sim_mac_32__DOT__reset))),2);
        bufp->chgCData(oldp+259,(((2U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY 
                                         >> 0xfU)) 
                                  | (IData)(vlSelf->co_sim_mac_32__DOT__reset))),2);
        bufp->chgCData(oldp+260,(((2U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY 
                                         >> 0xeU)) 
                                  | (IData)(vlSelf->co_sim_mac_32__DOT__reset))),2);
        bufp->chgCData(oldp+261,(((2U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY 
                                         >> 0xdU)) 
                                  | (IData)(vlSelf->co_sim_mac_32__DOT__reset))),2);
        bufp->chgCData(oldp+262,(((2U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY 
                                         >> 0xcU)) 
                                  | (IData)(vlSelf->co_sim_mac_32__DOT__reset))),2);
        bufp->chgCData(oldp+263,(((2U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY 
                                         >> 0xbU)) 
                                  | (IData)(vlSelf->co_sim_mac_32__DOT__reset))),2);
        bufp->chgCData(oldp+264,(((2U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY 
                                         >> 0xaU)) 
                                  | (IData)(vlSelf->co_sim_mac_32__DOT__reset))),2);
        bufp->chgCData(oldp+265,(((2U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY 
                                         >> 9U)) | (IData)(vlSelf->co_sim_mac_32__DOT__reset))),2);
        bufp->chgCData(oldp+266,(((2U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY 
                                         >> 8U)) | (IData)(vlSelf->co_sim_mac_32__DOT__reset))),2);
        bufp->chgCData(oldp+267,(((2U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY 
                                         >> 7U)) | (IData)(vlSelf->co_sim_mac_32__DOT__reset))),2);
        bufp->chgCData(oldp+268,(((2U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY 
                                         >> 6U)) | (IData)(vlSelf->co_sim_mac_32__DOT__reset))),2);
        bufp->chgCData(oldp+269,(((2U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY 
                                         >> 5U)) | (IData)(vlSelf->co_sim_mac_32__DOT__reset))),2);
        bufp->chgCData(oldp+270,(((2U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY 
                                         >> 4U)) | (IData)(vlSelf->co_sim_mac_32__DOT__reset))),2);
        bufp->chgCData(oldp+271,(((2U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY 
                                         >> 3U)) | (IData)(vlSelf->co_sim_mac_32__DOT__reset))),2);
        bufp->chgCData(oldp+272,(((2U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY 
                                         >> 2U)) | (IData)(vlSelf->co_sim_mac_32__DOT__reset))),2);
        bufp->chgCData(oldp+273,(((2U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY 
                                         << 1U)) | (IData)(vlSelf->co_sim_mac_32__DOT__reset))),2);
        bufp->chgCData(oldp+274,(((2U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY) 
                                  | (IData)(vlSelf->co_sim_mac_32__DOT__reset))),2);
        bufp->chgCData(oldp+275,(((2U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY 
                                         >> 1U)) | (IData)(vlSelf->co_sim_mac_32__DOT__reset))),2);
    }
    if (VL_UNLIKELY((((vlSelf->__Vm_traceActivity[1U] 
                       | vlSelf->__Vm_traceActivity
                       [2U]) | vlSelf->__Vm_traceActivity
                      [5U]) | vlSelf->__Vm_traceActivity
                     [0xcU]))) {
        bufp->chgBit(oldp+276,((1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                                      & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY))));
        bufp->chgBit(oldp+277,((1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                                      & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY 
                                         >> 1U)))));
        bufp->chgBit(oldp+278,((1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                                      & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY 
                                         >> 2U)))));
        bufp->chgBit(oldp+279,((1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                                      & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY 
                                         >> 3U)))));
        bufp->chgBit(oldp+280,((1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                                      & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY 
                                         >> 4U)))));
        bufp->chgBit(oldp+281,((1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                                      & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY 
                                         >> 5U)))));
        bufp->chgBit(oldp+282,((1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                                      & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY 
                                         >> 6U)))));
        bufp->chgBit(oldp+283,((1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                                      & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY 
                                         >> 7U)))));
        bufp->chgBit(oldp+284,((1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                                      & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY 
                                         >> 8U)))));
        bufp->chgBit(oldp+285,((1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                                      & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY 
                                         >> 9U)))));
        bufp->chgBit(oldp+286,((1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                                      & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY 
                                         >> 0xaU)))));
        bufp->chgBit(oldp+287,((1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                                      & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY 
                                         >> 0xbU)))));
        bufp->chgBit(oldp+288,((1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                                      & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY 
                                         >> 0xcU)))));
        bufp->chgBit(oldp+289,((1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                                      & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY 
                                         >> 0xdU)))));
        bufp->chgBit(oldp+290,((1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                                      & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY 
                                         >> 0xeU)))));
        bufp->chgBit(oldp+291,((1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                                      & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY 
                                         >> 0xfU)))));
        bufp->chgBit(oldp+292,((1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                                      & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY 
                                         >> 0x10U)))));
        bufp->chgBit(oldp+293,((1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                                      & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY 
                                         >> 0x11U)))));
        bufp->chgBit(oldp+294,((1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                                      & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY 
                                         >> 0x12U)))));
        bufp->chgBit(oldp+295,((1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                                      & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY 
                                         >> 0x13U)))));
        bufp->chgBit(oldp+296,((1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                                      & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY 
                                         >> 0x14U)))));
        bufp->chgBit(oldp+297,((1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                                      & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY 
                                         >> 0x15U)))));
        bufp->chgBit(oldp+298,((1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                                      & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY 
                                         >> 0x16U)))));
        bufp->chgBit(oldp+299,((1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                                      & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY 
                                         >> 0x17U)))));
        bufp->chgBit(oldp+300,((1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                                      & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY 
                                         >> 0x18U)))));
        bufp->chgBit(oldp+301,((1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                                      & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY 
                                         >> 0x19U)))));
        bufp->chgBit(oldp+302,((1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                                      & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY 
                                         >> 0x1aU)))));
        bufp->chgBit(oldp+303,((1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                                      & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY 
                                         >> 0x1bU)))));
        bufp->chgBit(oldp+304,((1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                                      & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY 
                                         >> 0x1cU)))));
        bufp->chgBit(oldp+305,((1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                                      & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY 
                                         >> 0x1dU)))));
        bufp->chgBit(oldp+306,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__reset)
                                       ? ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244268__DOT__s1) 
                                          >> 1U) : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244268__DOT__s1)))));
        bufp->chgCData(oldp+307,(((2U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY 
                                         << 1U)) | (IData)(vlSelf->co_sim_mac_32__DOT__reset))),2);
        bufp->chgCData(oldp+308,(((2U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY) 
                                  | (IData)(vlSelf->co_sim_mac_32__DOT__reset))),2);
        bufp->chgCData(oldp+309,(((2U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY 
                                         >> 1U)) | (IData)(vlSelf->co_sim_mac_32__DOT__reset))),2);
        bufp->chgCData(oldp+310,(((2U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY 
                                         >> 2U)) | (IData)(vlSelf->co_sim_mac_32__DOT__reset))),2);
        bufp->chgCData(oldp+311,(((2U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY 
                                         >> 3U)) | (IData)(vlSelf->co_sim_mac_32__DOT__reset))),2);
        bufp->chgCData(oldp+312,(((2U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY 
                                         >> 4U)) | (IData)(vlSelf->co_sim_mac_32__DOT__reset))),2);
        bufp->chgCData(oldp+313,(((2U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY 
                                         >> 5U)) | (IData)(vlSelf->co_sim_mac_32__DOT__reset))),2);
        bufp->chgCData(oldp+314,(((2U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY 
                                         >> 6U)) | (IData)(vlSelf->co_sim_mac_32__DOT__reset))),2);
        bufp->chgCData(oldp+315,(((2U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY 
                                         >> 7U)) | (IData)(vlSelf->co_sim_mac_32__DOT__reset))),2);
        bufp->chgCData(oldp+316,(((2U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY 
                                         >> 8U)) | (IData)(vlSelf->co_sim_mac_32__DOT__reset))),2);
        bufp->chgCData(oldp+317,(((2U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY 
                                         >> 9U)) | (IData)(vlSelf->co_sim_mac_32__DOT__reset))),2);
        bufp->chgCData(oldp+318,(((2U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY 
                                         >> 0xaU)) 
                                  | (IData)(vlSelf->co_sim_mac_32__DOT__reset))),2);
        bufp->chgCData(oldp+319,(((2U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY 
                                         >> 0xbU)) 
                                  | (IData)(vlSelf->co_sim_mac_32__DOT__reset))),2);
        bufp->chgCData(oldp+320,(((2U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY 
                                         >> 0xcU)) 
                                  | (IData)(vlSelf->co_sim_mac_32__DOT__reset))),2);
        bufp->chgCData(oldp+321,(((2U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY 
                                         >> 0xdU)) 
                                  | (IData)(vlSelf->co_sim_mac_32__DOT__reset))),2);
        bufp->chgCData(oldp+322,(((2U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY 
                                         >> 0xeU)) 
                                  | (IData)(vlSelf->co_sim_mac_32__DOT__reset))),2);
        bufp->chgCData(oldp+323,(((2U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY 
                                         >> 0xfU)) 
                                  | (IData)(vlSelf->co_sim_mac_32__DOT__reset))),2);
        bufp->chgCData(oldp+324,(((2U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY 
                                         >> 0x10U)) 
                                  | (IData)(vlSelf->co_sim_mac_32__DOT__reset))),2);
        bufp->chgCData(oldp+325,(((2U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY 
                                         >> 0x11U)) 
                                  | (IData)(vlSelf->co_sim_mac_32__DOT__reset))),2);
        bufp->chgCData(oldp+326,(((2U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY 
                                         >> 0x12U)) 
                                  | (IData)(vlSelf->co_sim_mac_32__DOT__reset))),2);
        bufp->chgCData(oldp+327,(((2U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY 
                                         >> 0x13U)) 
                                  | (IData)(vlSelf->co_sim_mac_32__DOT__reset))),2);
        bufp->chgCData(oldp+328,(((2U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY 
                                         >> 0x14U)) 
                                  | (IData)(vlSelf->co_sim_mac_32__DOT__reset))),2);
        bufp->chgCData(oldp+329,(((2U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY 
                                         >> 0x15U)) 
                                  | (IData)(vlSelf->co_sim_mac_32__DOT__reset))),2);
        bufp->chgCData(oldp+330,(((2U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY 
                                         >> 0x16U)) 
                                  | (IData)(vlSelf->co_sim_mac_32__DOT__reset))),2);
        bufp->chgCData(oldp+331,(((2U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY 
                                         >> 0x17U)) 
                                  | (IData)(vlSelf->co_sim_mac_32__DOT__reset))),2);
        bufp->chgCData(oldp+332,(((2U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY 
                                         >> 0x18U)) 
                                  | (IData)(vlSelf->co_sim_mac_32__DOT__reset))),2);
        bufp->chgCData(oldp+333,(((2U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY 
                                         >> 0x19U)) 
                                  | (IData)(vlSelf->co_sim_mac_32__DOT__reset))),2);
        bufp->chgCData(oldp+334,(((2U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY 
                                         >> 0x1aU)) 
                                  | (IData)(vlSelf->co_sim_mac_32__DOT__reset))),2);
        bufp->chgCData(oldp+335,(((2U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY 
                                         >> 0x1bU)) 
                                  | (IData)(vlSelf->co_sim_mac_32__DOT__reset))),2);
        bufp->chgCData(oldp+336,(((2U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY 
                                         >> 0x1cU)) 
                                  | (IData)(vlSelf->co_sim_mac_32__DOT__reset))),2);
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[1U] 
                      | vlSelf->__Vm_traceActivity[2U]) 
                     | vlSelf->__Vm_traceActivity[6U]))) {
        bufp->chgIData(oldp+337,(vlSelf->co_sim_mac_32__DOT__golden__DOT__output_bus
                                 [(1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))]),32);
        bufp->chgIData(oldp+338,(((((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241074__Q)
                                     ? (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241106__Q)
                                          ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                              ? 3U : 2U)
                                          : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                              ? 0U : 2U)) 
                                        >> 1U) : ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241106__Q)
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                    ? 3U
                                                    : 2U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                    ? 0U
                                                    : 2U))) 
                                   << 0x1fU) | ((0x40000000U 
                                                 & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241073__Q)
                                                      ? 
                                                     (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241105__Q)
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                         ? 3U
                                                         : 2U)
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                         ? 0U
                                                         : 2U)) 
                                                      >> 1U)
                                                      : 
                                                     ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241105__Q)
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                        ? 3U
                                                        : 2U)
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                        ? 0U
                                                        : 2U))) 
                                                    << 0x1eU)) 
                                                | ((0x20000000U 
                                                    & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241072__Q)
                                                         ? 
                                                        (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241104__Q)
                                                           ? 
                                                          ((1U 
                                                            & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                            ? 3U
                                                            : 2U)
                                                           : 
                                                          ((1U 
                                                            & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                            ? 0U
                                                            : 2U)) 
                                                         >> 1U)
                                                         : 
                                                        ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241104__Q)
                                                          ? 
                                                         ((1U 
                                                           & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                           ? 3U
                                                           : 2U)
                                                          : 
                                                         ((1U 
                                                           & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                           ? 0U
                                                           : 2U))) 
                                                       << 0x1dU)) 
                                                   | ((0x10000000U 
                                                       & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241071__Q)
                                                            ? 
                                                           (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241103__Q)
                                                              ? 
                                                             ((1U 
                                                               & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                               ? 3U
                                                               : 2U)
                                                              : 
                                                             ((1U 
                                                               & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                               ? 0U
                                                               : 2U)) 
                                                            >> 1U)
                                                            : 
                                                           ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241103__Q)
                                                             ? 
                                                            ((1U 
                                                              & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                              ? 3U
                                                              : 2U)
                                                             : 
                                                            ((1U 
                                                              & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                              ? 0U
                                                              : 2U))) 
                                                          << 0x1cU)) 
                                                      | ((0x8000000U 
                                                          & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241070__Q)
                                                               ? 
                                                              (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241102__Q)
                                                                 ? 
                                                                ((1U 
                                                                  & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                  ? 3U
                                                                  : 2U)
                                                                 : 
                                                                ((1U 
                                                                  & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                  ? 0U
                                                                  : 2U)) 
                                                               >> 1U)
                                                               : 
                                                              ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241102__Q)
                                                                ? 
                                                               ((1U 
                                                                 & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                 ? 3U
                                                                 : 2U)
                                                                : 
                                                               ((1U 
                                                                 & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                 ? 0U
                                                                 : 2U))) 
                                                             << 0x1bU)) 
                                                         | ((0x4000000U 
                                                             & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241069__Q)
                                                                  ? 
                                                                 (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241101__Q)
                                                                    ? 
                                                                   ((1U 
                                                                     & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                     ? 3U
                                                                     : 2U)
                                                                    : 
                                                                   ((1U 
                                                                     & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                     ? 0U
                                                                     : 2U)) 
                                                                  >> 1U)
                                                                  : 
                                                                 ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241101__Q)
                                                                   ? 
                                                                  ((1U 
                                                                    & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                    ? 3U
                                                                    : 2U)
                                                                   : 
                                                                  ((1U 
                                                                    & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                    ? 0U
                                                                    : 2U))) 
                                                                << 0x1aU)) 
                                                            | ((0x2000000U 
                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241068__Q)
                                                                     ? 
                                                                    (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241100__Q)
                                                                       ? 
                                                                      ((1U 
                                                                        & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                        ? 3U
                                                                        : 2U)
                                                                       : 
                                                                      ((1U 
                                                                        & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                        ? 0U
                                                                        : 2U)) 
                                                                     >> 1U)
                                                                     : 
                                                                    ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241100__Q)
                                                                      ? 
                                                                     ((1U 
                                                                       & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                       ? 3U
                                                                       : 2U)
                                                                      : 
                                                                     ((1U 
                                                                       & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                       ? 0U
                                                                       : 2U))) 
                                                                   << 0x19U)) 
                                                               | ((0x1000000U 
                                                                   & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241067__Q)
                                                                        ? 
                                                                       (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241099__Q)
                                                                          ? 
                                                                         ((1U 
                                                                           & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                           ? 3U
                                                                           : 2U)
                                                                          : 
                                                                         ((1U 
                                                                           & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                           ? 0U
                                                                           : 2U)) 
                                                                        >> 1U)
                                                                        : 
                                                                       ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241099__Q)
                                                                         ? 
                                                                        ((1U 
                                                                          & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                          ? 3U
                                                                          : 2U)
                                                                         : 
                                                                        ((1U 
                                                                          & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                          ? 0U
                                                                          : 2U))) 
                                                                      << 0x18U)) 
                                                                  | ((0x800000U 
                                                                      & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241066__Q)
                                                                           ? 
                                                                          (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241098__Q)
                                                                             ? 
                                                                            ((1U 
                                                                              & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                              ? 3U
                                                                              : 2U)
                                                                             : 
                                                                            ((1U 
                                                                              & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                              ? 0U
                                                                              : 2U)) 
                                                                           >> 1U)
                                                                           : 
                                                                          ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241098__Q)
                                                                            ? 
                                                                           ((1U 
                                                                             & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                             ? 3U
                                                                             : 2U)
                                                                            : 
                                                                           ((1U 
                                                                             & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                             ? 0U
                                                                             : 2U))) 
                                                                         << 0x17U)) 
                                                                     | ((0x400000U 
                                                                         & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241065__Q)
                                                                              ? 
                                                                             (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241097__Q)
                                                                                ? 
                                                                               ((1U 
                                                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                                 ? 3U
                                                                                 : 2U)
                                                                                : 
                                                                               ((1U 
                                                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                                 ? 0U
                                                                                 : 2U)) 
                                                                              >> 1U)
                                                                              : 
                                                                             ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241097__Q)
                                                                               ? 
                                                                              ((1U 
                                                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                                ? 3U
                                                                                : 2U)
                                                                               : 
                                                                              ((1U 
                                                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                                ? 0U
                                                                                : 2U))) 
                                                                            << 0x16U)) 
                                                                        | ((0x200000U 
                                                                            & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241064__Q)
                                                                                 ? 
                                                                                (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241096__Q)
                                                                                 ? 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                                 ? 3U
                                                                                 : 2U)
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                                 ? 0U
                                                                                 : 2U)) 
                                                                                >> 1U)
                                                                                 : 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241096__Q)
                                                                                 ? 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                                 ? 3U
                                                                                 : 2U)
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                                 ? 0U
                                                                                 : 2U))) 
                                                                               << 0x15U)) 
                                                                           | ((0x100000U 
                                                                               & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241063__Q)
                                                                                 ? 
                                                                                (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241095__Q)
                                                                                 ? 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                                 ? 3U
                                                                                 : 2U)
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                                 ? 0U
                                                                                 : 2U)) 
                                                                                >> 1U)
                                                                                 : 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241095__Q)
                                                                                 ? 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                                 ? 3U
                                                                                 : 2U)
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                                 ? 0U
                                                                                 : 2U))) 
                                                                                << 0x14U)) 
                                                                              | ((0x80000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241062__Q)
                                                                                 ? 
                                                                                (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241094__Q)
                                                                                 ? 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                                 ? 3U
                                                                                 : 2U)
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                                 ? 0U
                                                                                 : 2U)) 
                                                                                >> 1U)
                                                                                 : 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241094__Q)
                                                                                 ? 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                                 ? 3U
                                                                                 : 2U)
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                                 ? 0U
                                                                                 : 2U))) 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241061__Q)
                                                                                 ? 
                                                                                (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241093__Q)
                                                                                 ? 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                                 ? 3U
                                                                                 : 2U)
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                                 ? 0U
                                                                                 : 2U)) 
                                                                                >> 1U)
                                                                                 : 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241093__Q)
                                                                                 ? 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                                 ? 3U
                                                                                 : 2U)
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                                 ? 0U
                                                                                 : 2U))) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241060__Q)
                                                                                 ? 
                                                                                (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241092__Q)
                                                                                 ? 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                                 ? 3U
                                                                                 : 2U)
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                                 ? 0U
                                                                                 : 2U)) 
                                                                                >> 1U)
                                                                                 : 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241092__Q)
                                                                                 ? 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                                 ? 3U
                                                                                 : 2U)
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                                 ? 0U
                                                                                 : 2U))) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241059__Q)
                                                                                 ? 
                                                                                (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241091__Q)
                                                                                 ? 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                                 ? 3U
                                                                                 : 2U)
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                                 ? 0U
                                                                                 : 2U)) 
                                                                                >> 1U)
                                                                                 : 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241091__Q)
                                                                                 ? 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                                 ? 3U
                                                                                 : 2U)
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                                 ? 0U
                                                                                 : 2U))) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241058__Q)
                                                                                 ? 
                                                                                (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241090__Q)
                                                                                 ? 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                                 ? 3U
                                                                                 : 2U)
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                                 ? 0U
                                                                                 : 2U)) 
                                                                                >> 1U)
                                                                                 : 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241090__Q)
                                                                                 ? 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                                 ? 3U
                                                                                 : 2U)
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                                 ? 0U
                                                                                 : 2U))) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241057__Q)
                                                                                 ? 
                                                                                (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241089__Q)
                                                                                 ? 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                                 ? 3U
                                                                                 : 2U)
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                                 ? 0U
                                                                                 : 2U)) 
                                                                                >> 1U)
                                                                                 : 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241089__Q)
                                                                                 ? 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                                 ? 3U
                                                                                 : 2U)
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                                 ? 0U
                                                                                 : 2U))) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241056__Q)
                                                                                 ? 
                                                                                (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241088__Q)
                                                                                 ? 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                                 ? 3U
                                                                                 : 2U)
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                                 ? 0U
                                                                                 : 2U)) 
                                                                                >> 1U)
                                                                                 : 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241088__Q)
                                                                                 ? 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                                 ? 3U
                                                                                 : 2U)
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                                 ? 0U
                                                                                 : 2U))) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241055__Q)
                                                                                 ? 
                                                                                (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241087__Q)
                                                                                 ? 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                                 ? 3U
                                                                                 : 2U)
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                                 ? 0U
                                                                                 : 2U)) 
                                                                                >> 1U)
                                                                                 : 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241087__Q)
                                                                                 ? 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                                 ? 3U
                                                                                 : 2U)
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                                 ? 0U
                                                                                 : 2U))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241054__Q)
                                                                                 ? 
                                                                                (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241086__Q)
                                                                                 ? 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                                 ? 3U
                                                                                 : 2U)
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                                 ? 0U
                                                                                 : 2U)) 
                                                                                >> 1U)
                                                                                 : 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241086__Q)
                                                                                 ? 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                                 ? 3U
                                                                                 : 2U)
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                                 ? 0U
                                                                                 : 2U))) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241053__Q)
                                                                                 ? 
                                                                                (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241085__Q)
                                                                                 ? 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                                 ? 3U
                                                                                 : 2U)
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                                 ? 0U
                                                                                 : 2U)) 
                                                                                >> 1U)
                                                                                 : 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241085__Q)
                                                                                 ? 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                                 ? 3U
                                                                                 : 2U)
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                                 ? 0U
                                                                                 : 2U))) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241052__Q)
                                                                                 ? 
                                                                                (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241084__Q)
                                                                                 ? 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                                 ? 3U
                                                                                 : 2U)
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                                 ? 0U
                                                                                 : 2U)) 
                                                                                >> 1U)
                                                                                 : 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241084__Q)
                                                                                 ? 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                                 ? 3U
                                                                                 : 2U)
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                                 ? 0U
                                                                                 : 2U))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241051__Q)
                                                                                 ? 
                                                                                (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241083__Q)
                                                                                 ? 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                                 ? 3U
                                                                                 : 2U)
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                                 ? 0U
                                                                                 : 2U)) 
                                                                                >> 1U)
                                                                                 : 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241083__Q)
                                                                                 ? 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                                 ? 3U
                                                                                 : 2U)
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                                 ? 0U
                                                                                 : 2U))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241050__Q)
                                                                                 ? 
                                                                                (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241082__Q)
                                                                                 ? 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                                 ? 3U
                                                                                 : 2U)
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                                 ? 0U
                                                                                 : 2U)) 
                                                                                >> 1U)
                                                                                 : 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241082__Q)
                                                                                 ? 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                                 ? 3U
                                                                                 : 2U)
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                                 ? 0U
                                                                                 : 2U))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241049__Q)
                                                                                 ? 
                                                                                (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241081__Q)
                                                                                 ? 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                                 ? 3U
                                                                                 : 2U)
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                                 ? 0U
                                                                                 : 2U)) 
                                                                                >> 1U)
                                                                                 : 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241081__Q)
                                                                                 ? 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                                 ? 3U
                                                                                 : 2U)
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                                 ? 0U
                                                                                 : 2U))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241048__Q)
                                                                                 ? 
                                                                                (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241080__Q)
                                                                                 ? 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                                 ? 3U
                                                                                 : 2U)
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                                 ? 0U
                                                                                 : 2U)) 
                                                                                >> 1U)
                                                                                 : 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241080__Q)
                                                                                 ? 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                                 ? 3U
                                                                                 : 2U)
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                                 ? 0U
                                                                                 : 2U))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241047__Q)
                                                                                 ? 
                                                                                (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241079__Q)
                                                                                 ? 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                                 ? 3U
                                                                                 : 2U)
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                                 ? 0U
                                                                                 : 2U)) 
                                                                                >> 1U)
                                                                                 : 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241079__Q)
                                                                                 ? 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                                 ? 3U
                                                                                 : 2U)
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                                 ? 0U
                                                                                 : 2U))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241046__Q)
                                                                                 ? 
                                                                                (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241078__Q)
                                                                                 ? 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                                 ? 3U
                                                                                 : 2U)
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                                 ? 0U
                                                                                 : 2U)) 
                                                                                >> 1U)
                                                                                 : 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241078__Q)
                                                                                 ? 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                                 ? 3U
                                                                                 : 2U)
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                                 ? 0U
                                                                                 : 2U))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241045__Q)
                                                                                 ? 
                                                                                (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241077__Q)
                                                                                 ? 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                                 ? 3U
                                                                                 : 2U)
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                                 ? 0U
                                                                                 : 2U)) 
                                                                                >> 1U)
                                                                                 : 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241077__Q)
                                                                                 ? 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                                 ? 3U
                                                                                 : 2U)
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                                 ? 0U
                                                                                 : 2U))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241044__Q)
                                                                                 ? 
                                                                                (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241076__Q)
                                                                                 ? 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                                 ? 3U
                                                                                 : 2U)
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                                 ? 0U
                                                                                 : 2U)) 
                                                                                >> 1U)
                                                                                 : 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241076__Q)
                                                                                 ? 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                                 ? 3U
                                                                                 : 2U)
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                                 ? 0U
                                                                                 : 2U))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241043__Q)
                                                                                 ? 
                                                                                (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241075__Q)
                                                                                 ? 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                                 ? 3U
                                                                                 : 2U)
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                                 ? 0U
                                                                                 : 2U)) 
                                                                                >> 1U)
                                                                                 : 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241075__Q)
                                                                                 ? 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                                 ? 3U
                                                                                 : 2U)
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                                                 ? 0U
                                                                                 : 2U)))))))))))))))))))))))))))))))))))),32);
        bufp->chgCData(oldp+339,(((4U & ((IData)(vlSelf->co_sim_mac_32__DOT__id) 
                                         << 2U)) | 
                                  (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241077__Q) 
                                    << 1U) | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241045__Q)))),3);
        bufp->chgBit(oldp+340,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241045__Q)
                                       ? (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241077__Q)
                                            ? ((1U 
                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                ? 3U
                                                : 2U)
                                            : ((1U 
                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                ? 0U
                                                : 2U)) 
                                          >> 1U) : 
                                      ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241077__Q)
                                        ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                            ? 3U : 2U)
                                        : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                            ? 0U : 2U))))));
        bufp->chgCData(oldp+341,(((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241077__Q)
                                   ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                       ? 3U : 2U) : 
                                  ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                    ? 0U : 2U))),2);
        bufp->chgCData(oldp+342,(((4U & ((IData)(vlSelf->co_sim_mac_32__DOT__id) 
                                         << 2U)) | 
                                  (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241080__Q) 
                                    << 1U) | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241048__Q)))),3);
        bufp->chgBit(oldp+343,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241048__Q)
                                       ? (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241080__Q)
                                            ? ((1U 
                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                ? 3U
                                                : 2U)
                                            : ((1U 
                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                ? 0U
                                                : 2U)) 
                                          >> 1U) : 
                                      ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241080__Q)
                                        ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                            ? 3U : 2U)
                                        : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                            ? 0U : 2U))))));
        bufp->chgCData(oldp+344,(((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241080__Q)
                                   ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                       ? 3U : 2U) : 
                                  ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                    ? 0U : 2U))),2);
        bufp->chgCData(oldp+345,(((4U & ((IData)(vlSelf->co_sim_mac_32__DOT__id) 
                                         << 2U)) | 
                                  (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241083__Q) 
                                    << 1U) | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241051__Q)))),3);
        bufp->chgBit(oldp+346,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241051__Q)
                                       ? (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241083__Q)
                                            ? ((1U 
                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                ? 3U
                                                : 2U)
                                            : ((1U 
                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                ? 0U
                                                : 2U)) 
                                          >> 1U) : 
                                      ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241083__Q)
                                        ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                            ? 3U : 2U)
                                        : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                            ? 0U : 2U))))));
        bufp->chgCData(oldp+347,(((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241083__Q)
                                   ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                       ? 3U : 2U) : 
                                  ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                    ? 0U : 2U))),2);
        bufp->chgCData(oldp+348,(((4U & ((IData)(vlSelf->co_sim_mac_32__DOT__id) 
                                         << 2U)) | 
                                  (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241086__Q) 
                                    << 1U) | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241054__Q)))),3);
        bufp->chgBit(oldp+349,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241054__Q)
                                       ? (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241086__Q)
                                            ? ((1U 
                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                ? 3U
                                                : 2U)
                                            : ((1U 
                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                ? 0U
                                                : 2U)) 
                                          >> 1U) : 
                                      ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241086__Q)
                                        ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                            ? 3U : 2U)
                                        : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                            ? 0U : 2U))))));
        bufp->chgCData(oldp+350,(((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241086__Q)
                                   ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                       ? 3U : 2U) : 
                                  ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                    ? 0U : 2U))),2);
        bufp->chgCData(oldp+351,(((4U & ((IData)(vlSelf->co_sim_mac_32__DOT__id) 
                                         << 2U)) | 
                                  (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241089__Q) 
                                    << 1U) | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241057__Q)))),3);
        bufp->chgBit(oldp+352,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241057__Q)
                                       ? (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241089__Q)
                                            ? ((1U 
                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                ? 3U
                                                : 2U)
                                            : ((1U 
                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                ? 0U
                                                : 2U)) 
                                          >> 1U) : 
                                      ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241089__Q)
                                        ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                            ? 3U : 2U)
                                        : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                            ? 0U : 2U))))));
        bufp->chgCData(oldp+353,(((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241089__Q)
                                   ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                       ? 3U : 2U) : 
                                  ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                    ? 0U : 2U))),2);
        bufp->chgCData(oldp+354,(((4U & ((IData)(vlSelf->co_sim_mac_32__DOT__id) 
                                         << 2U)) | 
                                  (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241091__Q) 
                                    << 1U) | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241059__Q)))),3);
        bufp->chgBit(oldp+355,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241059__Q)
                                       ? (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241091__Q)
                                            ? ((1U 
                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                ? 3U
                                                : 2U)
                                            : ((1U 
                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                ? 0U
                                                : 2U)) 
                                          >> 1U) : 
                                      ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241091__Q)
                                        ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                            ? 3U : 2U)
                                        : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                            ? 0U : 2U))))));
        bufp->chgCData(oldp+356,(((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241091__Q)
                                   ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                       ? 3U : 2U) : 
                                  ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                    ? 0U : 2U))),2);
        bufp->chgCData(oldp+357,(((4U & ((IData)(vlSelf->co_sim_mac_32__DOT__id) 
                                         << 2U)) | 
                                  (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241092__Q) 
                                    << 1U) | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241060__Q)))),3);
        bufp->chgBit(oldp+358,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241060__Q)
                                       ? (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241092__Q)
                                            ? ((1U 
                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                ? 3U
                                                : 2U)
                                            : ((1U 
                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                ? 0U
                                                : 2U)) 
                                          >> 1U) : 
                                      ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241092__Q)
                                        ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                            ? 3U : 2U)
                                        : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                            ? 0U : 2U))))));
        bufp->chgCData(oldp+359,(((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241092__Q)
                                   ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                       ? 3U : 2U) : 
                                  ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                    ? 0U : 2U))),2);
        bufp->chgCData(oldp+360,(((4U & ((IData)(vlSelf->co_sim_mac_32__DOT__id) 
                                         << 2U)) | 
                                  (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241093__Q) 
                                    << 1U) | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241061__Q)))),3);
        bufp->chgBit(oldp+361,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241061__Q)
                                       ? (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241093__Q)
                                            ? ((1U 
                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                ? 3U
                                                : 2U)
                                            : ((1U 
                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                ? 0U
                                                : 2U)) 
                                          >> 1U) : 
                                      ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241093__Q)
                                        ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                            ? 3U : 2U)
                                        : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                            ? 0U : 2U))))));
        bufp->chgCData(oldp+362,(((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241093__Q)
                                   ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                       ? 3U : 2U) : 
                                  ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                    ? 0U : 2U))),2);
        bufp->chgCData(oldp+363,(((4U & ((IData)(vlSelf->co_sim_mac_32__DOT__id) 
                                         << 2U)) | 
                                  (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241094__Q) 
                                    << 1U) | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241062__Q)))),3);
        bufp->chgBit(oldp+364,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241062__Q)
                                       ? (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241094__Q)
                                            ? ((1U 
                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                ? 3U
                                                : 2U)
                                            : ((1U 
                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                ? 0U
                                                : 2U)) 
                                          >> 1U) : 
                                      ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241094__Q)
                                        ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                            ? 3U : 2U)
                                        : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                            ? 0U : 2U))))));
        bufp->chgCData(oldp+365,(((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241094__Q)
                                   ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                       ? 3U : 2U) : 
                                  ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                    ? 0U : 2U))),2);
        bufp->chgCData(oldp+366,(((4U & ((IData)(vlSelf->co_sim_mac_32__DOT__id) 
                                         << 2U)) | 
                                  (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241095__Q) 
                                    << 1U) | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241063__Q)))),3);
        bufp->chgBit(oldp+367,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241063__Q)
                                       ? (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241095__Q)
                                            ? ((1U 
                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                ? 3U
                                                : 2U)
                                            : ((1U 
                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                ? 0U
                                                : 2U)) 
                                          >> 1U) : 
                                      ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241095__Q)
                                        ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                            ? 3U : 2U)
                                        : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                            ? 0U : 2U))))));
        bufp->chgCData(oldp+368,(((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241095__Q)
                                   ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                       ? 3U : 2U) : 
                                  ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                    ? 0U : 2U))),2);
        bufp->chgCData(oldp+369,(((4U & ((IData)(vlSelf->co_sim_mac_32__DOT__id) 
                                         << 2U)) | 
                                  (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241096__Q) 
                                    << 1U) | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241064__Q)))),3);
        bufp->chgBit(oldp+370,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241064__Q)
                                       ? (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241096__Q)
                                            ? ((1U 
                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                ? 3U
                                                : 2U)
                                            : ((1U 
                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                ? 0U
                                                : 2U)) 
                                          >> 1U) : 
                                      ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241096__Q)
                                        ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                            ? 3U : 2U)
                                        : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                            ? 0U : 2U))))));
        bufp->chgCData(oldp+371,(((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241096__Q)
                                   ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                       ? 3U : 2U) : 
                                  ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                    ? 0U : 2U))),2);
        bufp->chgCData(oldp+372,(((4U & ((IData)(vlSelf->co_sim_mac_32__DOT__id) 
                                         << 2U)) | 
                                  (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241097__Q) 
                                    << 1U) | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241065__Q)))),3);
        bufp->chgBit(oldp+373,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241065__Q)
                                       ? (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241097__Q)
                                            ? ((1U 
                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                ? 3U
                                                : 2U)
                                            : ((1U 
                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                ? 0U
                                                : 2U)) 
                                          >> 1U) : 
                                      ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241097__Q)
                                        ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                            ? 3U : 2U)
                                        : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                            ? 0U : 2U))))));
        bufp->chgCData(oldp+374,(((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241097__Q)
                                   ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                       ? 3U : 2U) : 
                                  ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                    ? 0U : 2U))),2);
        bufp->chgCData(oldp+375,(((4U & ((IData)(vlSelf->co_sim_mac_32__DOT__id) 
                                         << 2U)) | 
                                  (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241098__Q) 
                                    << 1U) | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241066__Q)))),3);
        bufp->chgBit(oldp+376,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241066__Q)
                                       ? (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241098__Q)
                                            ? ((1U 
                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                ? 3U
                                                : 2U)
                                            : ((1U 
                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                ? 0U
                                                : 2U)) 
                                          >> 1U) : 
                                      ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241098__Q)
                                        ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                            ? 3U : 2U)
                                        : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                            ? 0U : 2U))))));
        bufp->chgCData(oldp+377,(((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241098__Q)
                                   ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                       ? 3U : 2U) : 
                                  ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                    ? 0U : 2U))),2);
        bufp->chgCData(oldp+378,(((4U & ((IData)(vlSelf->co_sim_mac_32__DOT__id) 
                                         << 2U)) | 
                                  (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241099__Q) 
                                    << 1U) | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241067__Q)))),3);
        bufp->chgBit(oldp+379,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241067__Q)
                                       ? (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241099__Q)
                                            ? ((1U 
                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                ? 3U
                                                : 2U)
                                            : ((1U 
                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                ? 0U
                                                : 2U)) 
                                          >> 1U) : 
                                      ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241099__Q)
                                        ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                            ? 3U : 2U)
                                        : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                            ? 0U : 2U))))));
        bufp->chgCData(oldp+380,(((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241099__Q)
                                   ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                       ? 3U : 2U) : 
                                  ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                    ? 0U : 2U))),2);
        bufp->chgCData(oldp+381,(((4U & ((IData)(vlSelf->co_sim_mac_32__DOT__id) 
                                         << 2U)) | 
                                  (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241100__Q) 
                                    << 1U) | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241068__Q)))),3);
        bufp->chgBit(oldp+382,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241068__Q)
                                       ? (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241100__Q)
                                            ? ((1U 
                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                ? 3U
                                                : 2U)
                                            : ((1U 
                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                ? 0U
                                                : 2U)) 
                                          >> 1U) : 
                                      ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241100__Q)
                                        ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                            ? 3U : 2U)
                                        : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                            ? 0U : 2U))))));
        bufp->chgCData(oldp+383,(((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241100__Q)
                                   ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                       ? 3U : 2U) : 
                                  ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                    ? 0U : 2U))),2);
        bufp->chgCData(oldp+384,(((4U & ((IData)(vlSelf->co_sim_mac_32__DOT__id) 
                                         << 2U)) | 
                                  (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241101__Q) 
                                    << 1U) | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241069__Q)))),3);
        bufp->chgBit(oldp+385,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241069__Q)
                                       ? (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241101__Q)
                                            ? ((1U 
                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                ? 3U
                                                : 2U)
                                            : ((1U 
                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                ? 0U
                                                : 2U)) 
                                          >> 1U) : 
                                      ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241101__Q)
                                        ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                            ? 3U : 2U)
                                        : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                            ? 0U : 2U))))));
        bufp->chgCData(oldp+386,(((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241101__Q)
                                   ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                       ? 3U : 2U) : 
                                  ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                    ? 0U : 2U))),2);
        bufp->chgCData(oldp+387,(((4U & ((IData)(vlSelf->co_sim_mac_32__DOT__id) 
                                         << 2U)) | 
                                  (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241102__Q) 
                                    << 1U) | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241070__Q)))),3);
        bufp->chgBit(oldp+388,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241070__Q)
                                       ? (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241102__Q)
                                            ? ((1U 
                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                ? 3U
                                                : 2U)
                                            : ((1U 
                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                ? 0U
                                                : 2U)) 
                                          >> 1U) : 
                                      ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241102__Q)
                                        ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                            ? 3U : 2U)
                                        : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                            ? 0U : 2U))))));
        bufp->chgCData(oldp+389,(((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241102__Q)
                                   ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                       ? 3U : 2U) : 
                                  ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                    ? 0U : 2U))),2);
        bufp->chgCData(oldp+390,(((4U & ((IData)(vlSelf->co_sim_mac_32__DOT__id) 
                                         << 2U)) | 
                                  (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241103__Q) 
                                    << 1U) | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241071__Q)))),3);
        bufp->chgBit(oldp+391,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241071__Q)
                                       ? (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241103__Q)
                                            ? ((1U 
                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                ? 3U
                                                : 2U)
                                            : ((1U 
                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                ? 0U
                                                : 2U)) 
                                          >> 1U) : 
                                      ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241103__Q)
                                        ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                            ? 3U : 2U)
                                        : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                            ? 0U : 2U))))));
        bufp->chgCData(oldp+392,(((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241103__Q)
                                   ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                       ? 3U : 2U) : 
                                  ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                    ? 0U : 2U))),2);
        bufp->chgCData(oldp+393,(((4U & ((IData)(vlSelf->co_sim_mac_32__DOT__id) 
                                         << 2U)) | 
                                  (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241104__Q) 
                                    << 1U) | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241072__Q)))),3);
        bufp->chgBit(oldp+394,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241072__Q)
                                       ? (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241104__Q)
                                            ? ((1U 
                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                ? 3U
                                                : 2U)
                                            : ((1U 
                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                ? 0U
                                                : 2U)) 
                                          >> 1U) : 
                                      ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241104__Q)
                                        ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                            ? 3U : 2U)
                                        : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                            ? 0U : 2U))))));
        bufp->chgCData(oldp+395,(((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241104__Q)
                                   ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                       ? 3U : 2U) : 
                                  ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                    ? 0U : 2U))),2);
        bufp->chgCData(oldp+396,(((4U & ((IData)(vlSelf->co_sim_mac_32__DOT__id) 
                                         << 2U)) | 
                                  (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241106__Q) 
                                    << 1U) | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241074__Q)))),3);
        bufp->chgBit(oldp+397,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241074__Q)
                                       ? (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241106__Q)
                                            ? ((1U 
                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                ? 3U
                                                : 2U)
                                            : ((1U 
                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                ? 0U
                                                : 2U)) 
                                          >> 1U) : 
                                      ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241106__Q)
                                        ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                            ? 3U : 2U)
                                        : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                            ? 0U : 2U))))));
        bufp->chgCData(oldp+398,(((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241106__Q)
                                   ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                       ? 3U : 2U) : 
                                  ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                    ? 0U : 2U))),2);
        bufp->chgCData(oldp+399,(((4U & ((IData)(vlSelf->co_sim_mac_32__DOT__id) 
                                         << 2U)) | 
                                  (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241105__Q) 
                                    << 1U) | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241073__Q)))),3);
        bufp->chgBit(oldp+400,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241073__Q)
                                       ? (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241105__Q)
                                            ? ((1U 
                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                ? 3U
                                                : 2U)
                                            : ((1U 
                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                ? 0U
                                                : 2U)) 
                                          >> 1U) : 
                                      ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241105__Q)
                                        ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                            ? 3U : 2U)
                                        : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                            ? 0U : 2U))))));
        bufp->chgCData(oldp+401,(((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241105__Q)
                                   ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                       ? 3U : 2U) : 
                                  ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                    ? 0U : 2U))),2);
        bufp->chgCData(oldp+402,(((4U & ((IData)(vlSelf->co_sim_mac_32__DOT__id) 
                                         << 2U)) | 
                                  (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241090__Q) 
                                    << 1U) | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241058__Q)))),3);
        bufp->chgBit(oldp+403,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241058__Q)
                                       ? (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241090__Q)
                                            ? ((1U 
                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                ? 3U
                                                : 2U)
                                            : ((1U 
                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                ? 0U
                                                : 2U)) 
                                          >> 1U) : 
                                      ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241090__Q)
                                        ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                            ? 3U : 2U)
                                        : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                            ? 0U : 2U))))));
        bufp->chgCData(oldp+404,(((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241090__Q)
                                   ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                       ? 3U : 2U) : 
                                  ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                    ? 0U : 2U))),2);
        bufp->chgCData(oldp+405,(((4U & ((IData)(vlSelf->co_sim_mac_32__DOT__id) 
                                         << 2U)) | 
                                  (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241088__Q) 
                                    << 1U) | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241056__Q)))),3);
        bufp->chgBit(oldp+406,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241056__Q)
                                       ? (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241088__Q)
                                            ? ((1U 
                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                ? 3U
                                                : 2U)
                                            : ((1U 
                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                ? 0U
                                                : 2U)) 
                                          >> 1U) : 
                                      ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241088__Q)
                                        ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                            ? 3U : 2U)
                                        : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                            ? 0U : 2U))))));
        bufp->chgCData(oldp+407,(((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241088__Q)
                                   ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                       ? 3U : 2U) : 
                                  ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                    ? 0U : 2U))),2);
        bufp->chgCData(oldp+408,(((4U & ((IData)(vlSelf->co_sim_mac_32__DOT__id) 
                                         << 2U)) | 
                                  (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241087__Q) 
                                    << 1U) | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241055__Q)))),3);
        bufp->chgBit(oldp+409,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241055__Q)
                                       ? (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241087__Q)
                                            ? ((1U 
                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                ? 3U
                                                : 2U)
                                            : ((1U 
                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                ? 0U
                                                : 2U)) 
                                          >> 1U) : 
                                      ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241087__Q)
                                        ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                            ? 3U : 2U)
                                        : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                            ? 0U : 2U))))));
        bufp->chgCData(oldp+410,(((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241087__Q)
                                   ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                       ? 3U : 2U) : 
                                  ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                    ? 0U : 2U))),2);
        bufp->chgCData(oldp+411,(((4U & ((IData)(vlSelf->co_sim_mac_32__DOT__id) 
                                         << 2U)) | 
                                  (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241085__Q) 
                                    << 1U) | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241053__Q)))),3);
        bufp->chgBit(oldp+412,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241053__Q)
                                       ? (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241085__Q)
                                            ? ((1U 
                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                ? 3U
                                                : 2U)
                                            : ((1U 
                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                ? 0U
                                                : 2U)) 
                                          >> 1U) : 
                                      ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241085__Q)
                                        ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                            ? 3U : 2U)
                                        : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                            ? 0U : 2U))))));
        bufp->chgCData(oldp+413,(((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241085__Q)
                                   ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                       ? 3U : 2U) : 
                                  ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                    ? 0U : 2U))),2);
        bufp->chgCData(oldp+414,(((4U & ((IData)(vlSelf->co_sim_mac_32__DOT__id) 
                                         << 2U)) | 
                                  (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241084__Q) 
                                    << 1U) | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241052__Q)))),3);
        bufp->chgBit(oldp+415,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241052__Q)
                                       ? (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241084__Q)
                                            ? ((1U 
                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                ? 3U
                                                : 2U)
                                            : ((1U 
                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                ? 0U
                                                : 2U)) 
                                          >> 1U) : 
                                      ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241084__Q)
                                        ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                            ? 3U : 2U)
                                        : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                            ? 0U : 2U))))));
        bufp->chgCData(oldp+416,(((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241084__Q)
                                   ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                       ? 3U : 2U) : 
                                  ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                    ? 0U : 2U))),2);
        bufp->chgCData(oldp+417,(((4U & ((IData)(vlSelf->co_sim_mac_32__DOT__id) 
                                         << 2U)) | 
                                  (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241082__Q) 
                                    << 1U) | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241050__Q)))),3);
        bufp->chgBit(oldp+418,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241050__Q)
                                       ? (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241082__Q)
                                            ? ((1U 
                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                ? 3U
                                                : 2U)
                                            : ((1U 
                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                ? 0U
                                                : 2U)) 
                                          >> 1U) : 
                                      ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241082__Q)
                                        ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                            ? 3U : 2U)
                                        : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                            ? 0U : 2U))))));
        bufp->chgCData(oldp+419,(((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241082__Q)
                                   ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                       ? 3U : 2U) : 
                                  ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                    ? 0U : 2U))),2);
        bufp->chgCData(oldp+420,(((4U & ((IData)(vlSelf->co_sim_mac_32__DOT__id) 
                                         << 2U)) | 
                                  (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241081__Q) 
                                    << 1U) | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241049__Q)))),3);
        bufp->chgBit(oldp+421,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241049__Q)
                                       ? (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241081__Q)
                                            ? ((1U 
                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                ? 3U
                                                : 2U)
                                            : ((1U 
                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                ? 0U
                                                : 2U)) 
                                          >> 1U) : 
                                      ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241081__Q)
                                        ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                            ? 3U : 2U)
                                        : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                            ? 0U : 2U))))));
        bufp->chgCData(oldp+422,(((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241081__Q)
                                   ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                       ? 3U : 2U) : 
                                  ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                    ? 0U : 2U))),2);
        bufp->chgCData(oldp+423,(((4U & ((IData)(vlSelf->co_sim_mac_32__DOT__id) 
                                         << 2U)) | 
                                  (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241079__Q) 
                                    << 1U) | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241047__Q)))),3);
        bufp->chgBit(oldp+424,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241047__Q)
                                       ? (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241079__Q)
                                            ? ((1U 
                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                ? 3U
                                                : 2U)
                                            : ((1U 
                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                ? 0U
                                                : 2U)) 
                                          >> 1U) : 
                                      ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241079__Q)
                                        ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                            ? 3U : 2U)
                                        : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                            ? 0U : 2U))))));
        bufp->chgCData(oldp+425,(((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241079__Q)
                                   ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                       ? 3U : 2U) : 
                                  ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                    ? 0U : 2U))),2);
        bufp->chgCData(oldp+426,(((4U & ((IData)(vlSelf->co_sim_mac_32__DOT__id) 
                                         << 2U)) | 
                                  (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241078__Q) 
                                    << 1U) | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241046__Q)))),3);
        bufp->chgBit(oldp+427,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241046__Q)
                                       ? (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241078__Q)
                                            ? ((1U 
                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                ? 3U
                                                : 2U)
                                            : ((1U 
                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                ? 0U
                                                : 2U)) 
                                          >> 1U) : 
                                      ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241078__Q)
                                        ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                            ? 3U : 2U)
                                        : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                            ? 0U : 2U))))));
        bufp->chgCData(oldp+428,(((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241078__Q)
                                   ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                       ? 3U : 2U) : 
                                  ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                    ? 0U : 2U))),2);
        bufp->chgCData(oldp+429,(((4U & ((IData)(vlSelf->co_sim_mac_32__DOT__id) 
                                         << 2U)) | 
                                  (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241076__Q) 
                                    << 1U) | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241044__Q)))),3);
        bufp->chgBit(oldp+430,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241044__Q)
                                       ? (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241076__Q)
                                            ? ((1U 
                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                ? 3U
                                                : 2U)
                                            : ((1U 
                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                ? 0U
                                                : 2U)) 
                                          >> 1U) : 
                                      ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241076__Q)
                                        ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                            ? 3U : 2U)
                                        : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                            ? 0U : 2U))))));
        bufp->chgCData(oldp+431,(((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241076__Q)
                                   ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                       ? 3U : 2U) : 
                                  ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                    ? 0U : 2U))),2);
        bufp->chgCData(oldp+432,(((4U & ((IData)(vlSelf->co_sim_mac_32__DOT__id) 
                                         << 2U)) | 
                                  (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241075__Q) 
                                    << 1U) | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241043__Q)))),3);
        bufp->chgBit(oldp+433,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241043__Q)
                                       ? (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241075__Q)
                                            ? ((1U 
                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                ? 3U
                                                : 2U)
                                            : ((1U 
                                                & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                                ? 0U
                                                : 2U)) 
                                          >> 1U) : 
                                      ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241075__Q)
                                        ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                            ? 3U : 2U)
                                        : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                            ? 0U : 2U))))));
        bufp->chgCData(oldp+434,(((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241075__Q)
                                   ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                       ? 3U : 2U) : 
                                  ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                                    ? 0U : 2U))),2);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgSData(oldp+435,(vlSelf->co_sim_mac_32__DOT__netlist__DOT__genblk1__05b0__05d__02ea0__02ea),16);
        bufp->chgSData(oldp+436,(vlSelf->co_sim_mac_32__DOT__netlist__DOT__genblk1__05b0__05d__02ea0__02eb),16);
        bufp->chgSData(oldp+437,(vlSelf->co_sim_mac_32__DOT__netlist__DOT__genblk1__05b1__05d__02ea0__02ea),16);
        bufp->chgSData(oldp+438,(vlSelf->co_sim_mac_32__DOT__netlist__DOT__genblk1__05b1__05d__02ea0__02eb),16);
        bufp->chgBit(oldp+439,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244096__Y));
        bufp->chgBit(oldp+440,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244200__Y));
        bufp->chgBit(oldp+441,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244208__Y));
        bufp->chgBit(oldp+442,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244222__Y));
        bufp->chgIData(oldp+443,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellinp____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__A),20);
        bufp->chgIData(oldp+444,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellinp____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__B),18);
        bufp->chgIData(oldp+445,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__a_int),20);
        bufp->chgIData(oldp+446,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__b_int),18);
        bufp->chgIData(oldp+447,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__mult_b),18);
        bufp->chgIData(oldp+448,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellinp____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__A),20);
        bufp->chgIData(oldp+449,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellinp____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__B),18);
        bufp->chgIData(oldp+450,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__a_int),20);
        bufp->chgIData(oldp+451,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__b_int),18);
        bufp->chgIData(oldp+452,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__mult_b),18);
    }
    if (VL_UNLIKELY(((((vlSelf->__Vm_traceActivity[3U] 
                        | vlSelf->__Vm_traceActivity
                        [4U]) | vlSelf->__Vm_traceActivity
                       [8U]) | vlSelf->__Vm_traceActivity
                      [0xbU]) | vlSelf->__Vm_traceActivity
                     [0xdU]))) {
        bufp->chgBit(oldp+453,((1U & ((1U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS)
                                       ? (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC)
                                       : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out)))));
        bufp->chgBit(oldp+454,((1U & ((0x400U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS)
                                       ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                                                  >> 0xaU))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 0xaU))))));
        bufp->chgBit(oldp+455,((1U & ((0x800U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS)
                                       ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                                                  >> 0xbU))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 0xbU))))));
        bufp->chgBit(oldp+456,((1U & ((0x1000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS)
                                       ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                                                  >> 0xcU))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 0xcU))))));
        bufp->chgBit(oldp+457,((1U & ((0x2000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS)
                                       ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                                                  >> 0xdU))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 0xdU))))));
        bufp->chgBit(oldp+458,((1U & ((0x4000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS)
                                       ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                                                  >> 0xeU))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 0xeU))))));
        bufp->chgBit(oldp+459,((1U & ((0x8000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS)
                                       ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                                                  >> 0xfU))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 0xfU))))));
        bufp->chgBit(oldp+460,((1U & ((0x10000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS)
                                       ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                                                  >> 0x10U))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 0x10U))))));
        bufp->chgBit(oldp+461,((1U & ((0x20000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS)
                                       ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                                                  >> 0x11U))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 0x11U))))));
        bufp->chgBit(oldp+462,((1U & ((0x40000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS)
                                       ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                                                  >> 0x12U))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 0x12U))))));
        bufp->chgBit(oldp+463,((1U & ((0x80000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS)
                                       ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                                                  >> 0x13U))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 0x13U))))));
        bufp->chgBit(oldp+464,((1U & ((2U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS)
                                       ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                                                  >> 1U))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 1U))))));
        bufp->chgBit(oldp+465,((1U & ((0x100000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS)
                                       ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                                                  >> 0x14U))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 0x14U))))));
        bufp->chgBit(oldp+466,((1U & ((0x200000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS)
                                       ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                                                  >> 0x15U))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 0x15U))))));
        bufp->chgBit(oldp+467,((1U & ((0x400000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS)
                                       ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                                                  >> 0x16U))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 0x16U))))));
        bufp->chgBit(oldp+468,((1U & ((0x800000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS)
                                       ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                                                  >> 0x17U))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 0x17U))))));
        bufp->chgBit(oldp+469,((1U & ((0x1000000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS)
                                       ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                                                  >> 0x18U))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 0x18U))))));
        bufp->chgBit(oldp+470,((1U & ((0x2000000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS)
                                       ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                                                  >> 0x19U))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 0x19U))))));
        bufp->chgBit(oldp+471,((1U & ((0x4000000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS)
                                       ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                                                  >> 0x1aU))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 0x1aU))))));
        bufp->chgBit(oldp+472,((1U & ((0x8000000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS)
                                       ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                                                  >> 0x1bU))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 0x1bU))))));
        bufp->chgBit(oldp+473,((1U & ((0x10000000U 
                                       & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS)
                                       ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                                                  >> 0x1cU))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 0x1cU))))));
        bufp->chgBit(oldp+474,((1U & ((0x20000000U 
                                       & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS)
                                       ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                                                  >> 0x1dU))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 0x1dU))))));
        bufp->chgBit(oldp+475,((1U & ((4U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS)
                                       ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                                                  >> 2U))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 2U))))));
        bufp->chgBit(oldp+476,((1U & ((8U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS)
                                       ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                                                  >> 3U))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 3U))))));
        bufp->chgBit(oldp+477,((1U & ((0x10U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS)
                                       ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                                                  >> 4U))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 4U))))));
        bufp->chgBit(oldp+478,((1U & ((0x20U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS)
                                       ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                                                  >> 5U))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 5U))))));
        bufp->chgBit(oldp+479,((1U & ((0x40U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS)
                                       ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                                                  >> 6U))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 6U))))));
        bufp->chgBit(oldp+480,((1U & ((0x80U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS)
                                       ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                                                  >> 7U))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 7U))))));
        bufp->chgBit(oldp+481,((1U & ((0x100U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS)
                                       ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                                                  >> 8U))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 8U))))));
        bufp->chgBit(oldp+482,((1U & ((0x200U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS)
                                       ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                                                  >> 9U))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 9U))))));
    }
    if (VL_UNLIKELY((((vlSelf->__Vm_traceActivity[3U] 
                       | vlSelf->__Vm_traceActivity
                       [4U]) | vlSelf->__Vm_traceActivity
                      [0xbU]) | vlSelf->__Vm_traceActivity
                     [0xdU]))) {
        bufp->chgBit(oldp+483,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC) 
                                      ^ vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS))));
        bufp->chgBit(oldp+484,((1U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                                               >> 0xaU)) 
                                      ^ (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS 
                                         >> 0xaU)))));
        bufp->chgBit(oldp+485,((1U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                                               >> 0xbU)) 
                                      ^ (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS 
                                         >> 0xbU)))));
        bufp->chgBit(oldp+486,((1U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                                               >> 0xcU)) 
                                      ^ (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS 
                                         >> 0xcU)))));
        bufp->chgBit(oldp+487,((1U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                                               >> 0xdU)) 
                                      ^ (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS 
                                         >> 0xdU)))));
        bufp->chgBit(oldp+488,((1U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                                               >> 0xeU)) 
                                      ^ (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS 
                                         >> 0xeU)))));
        bufp->chgBit(oldp+489,((1U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                                               >> 0xfU)) 
                                      ^ (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS 
                                         >> 0xfU)))));
        bufp->chgBit(oldp+490,((1U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                                               >> 0x10U)) 
                                      ^ (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS 
                                         >> 0x10U)))));
        bufp->chgBit(oldp+491,((1U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                                               >> 0x11U)) 
                                      ^ (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS 
                                         >> 0x11U)))));
        bufp->chgBit(oldp+492,((1U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                                               >> 0x12U)) 
                                      ^ (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS 
                                         >> 0x12U)))));
        bufp->chgBit(oldp+493,((1U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                                               >> 0x13U)) 
                                      ^ (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS 
                                         >> 0x13U)))));
        bufp->chgBit(oldp+494,((1U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                                               >> 1U)) 
                                      ^ (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS 
                                         >> 1U)))));
        bufp->chgBit(oldp+495,((1U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                                               >> 0x14U)) 
                                      ^ (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS 
                                         >> 0x14U)))));
        bufp->chgBit(oldp+496,((1U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                                               >> 0x15U)) 
                                      ^ (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS 
                                         >> 0x15U)))));
        bufp->chgBit(oldp+497,((1U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                                               >> 0x16U)) 
                                      ^ (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS 
                                         >> 0x16U)))));
        bufp->chgBit(oldp+498,((1U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                                               >> 0x17U)) 
                                      ^ (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS 
                                         >> 0x17U)))));
        bufp->chgBit(oldp+499,((1U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                                               >> 0x18U)) 
                                      ^ (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS 
                                         >> 0x18U)))));
        bufp->chgBit(oldp+500,((1U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                                               >> 0x19U)) 
                                      ^ (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS 
                                         >> 0x19U)))));
        bufp->chgBit(oldp+501,((1U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                                               >> 0x1aU)) 
                                      ^ (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS 
                                         >> 0x1aU)))));
        bufp->chgBit(oldp+502,((1U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                                               >> 0x1bU)) 
                                      ^ (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS 
                                         >> 0x1bU)))));
        bufp->chgBit(oldp+503,((1U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                                               >> 0x1cU)) 
                                      ^ (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS 
                                         >> 0x1cU)))));
        bufp->chgBit(oldp+504,((1U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                                               >> 0x1dU)) 
                                      ^ (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS 
                                         >> 0x1dU)))));
        bufp->chgBit(oldp+505,((1U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                                               >> 2U)) 
                                      ^ (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS 
                                         >> 2U)))));
        bufp->chgBit(oldp+506,((1U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                                               >> 3U)) 
                                      ^ (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS 
                                         >> 3U)))));
        bufp->chgBit(oldp+507,((1U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                                               >> 4U)) 
                                      ^ (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS 
                                         >> 4U)))));
        bufp->chgBit(oldp+508,((1U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                                               >> 5U)) 
                                      ^ (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS 
                                         >> 5U)))));
        bufp->chgBit(oldp+509,((1U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                                               >> 6U)) 
                                      ^ (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS 
                                         >> 6U)))));
        bufp->chgBit(oldp+510,((1U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                                               >> 7U)) 
                                      ^ (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS 
                                         >> 7U)))));
        bufp->chgBit(oldp+511,((1U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                                               >> 8U)) 
                                      ^ (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS 
                                         >> 8U)))));
        bufp->chgBit(oldp+512,((1U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                                               >> 9U)) 
                                      ^ (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS 
                                         >> 9U)))));
    }
    if (VL_UNLIKELY(((((vlSelf->__Vm_traceActivity[3U] 
                        | vlSelf->__Vm_traceActivity
                        [5U]) | vlSelf->__Vm_traceActivity
                       [7U]) | vlSelf->__Vm_traceActivity
                      [0xaU]) | vlSelf->__Vm_traceActivity
                     [0xcU]))) {
        bufp->chgBit(oldp+513,((1U & ((1U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS)
                                       ? (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC)
                                       : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out)))));
        bufp->chgBit(oldp+514,((1U & ((0x400U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS)
                                       ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                                                  >> 0xaU))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 0xaU))))));
        bufp->chgBit(oldp+515,((1U & ((0x800U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS)
                                       ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                                                  >> 0xbU))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 0xbU))))));
        bufp->chgBit(oldp+516,((1U & ((0x1000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS)
                                       ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                                                  >> 0xcU))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 0xcU))))));
        bufp->chgBit(oldp+517,((1U & ((0x2000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS)
                                       ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                                                  >> 0xdU))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 0xdU))))));
        bufp->chgBit(oldp+518,((1U & ((0x4000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS)
                                       ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                                                  >> 0xeU))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 0xeU))))));
        bufp->chgBit(oldp+519,((1U & ((0x8000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS)
                                       ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                                                  >> 0xfU))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 0xfU))))));
        bufp->chgBit(oldp+520,((1U & ((0x10000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS)
                                       ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                                                  >> 0x10U))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 0x10U))))));
        bufp->chgBit(oldp+521,((1U & ((0x20000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS)
                                       ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                                                  >> 0x11U))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 0x11U))))));
        bufp->chgBit(oldp+522,((1U & ((0x40000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS)
                                       ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                                                  >> 0x12U))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 0x12U))))));
        bufp->chgBit(oldp+523,((1U & ((0x80000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS)
                                       ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                                                  >> 0x13U))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 0x13U))))));
        bufp->chgBit(oldp+524,((1U & ((2U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS)
                                       ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                                                  >> 1U))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 1U))))));
        bufp->chgBit(oldp+525,((1U & ((0x100000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS)
                                       ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                                                  >> 0x14U))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 0x14U))))));
        bufp->chgBit(oldp+526,((1U & ((0x200000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS)
                                       ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                                                  >> 0x15U))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 0x15U))))));
        bufp->chgBit(oldp+527,((1U & ((0x400000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS)
                                       ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                                                  >> 0x16U))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 0x16U))))));
        bufp->chgBit(oldp+528,((1U & ((0x800000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS)
                                       ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                                                  >> 0x17U))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 0x17U))))));
        bufp->chgBit(oldp+529,((1U & ((0x1000000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS)
                                       ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                                                  >> 0x18U))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 0x18U))))));
        bufp->chgBit(oldp+530,((1U & ((0x2000000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS)
                                       ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                                                  >> 0x19U))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 0x19U))))));
        bufp->chgBit(oldp+531,((1U & ((0x4000000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS)
                                       ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                                                  >> 0x1aU))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 0x1aU))))));
        bufp->chgBit(oldp+532,((1U & ((0x8000000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS)
                                       ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                                                  >> 0x1bU))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 0x1bU))))));
        bufp->chgBit(oldp+533,((1U & ((0x10000000U 
                                       & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS)
                                       ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                                                  >> 0x1cU))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 0x1cU))))));
        bufp->chgBit(oldp+534,((1U & ((0x20000000U 
                                       & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS)
                                       ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                                                  >> 0x1dU))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 0x1dU))))));
        bufp->chgBit(oldp+535,((1U & ((4U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS)
                                       ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                                                  >> 2U))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 2U))))));
        bufp->chgBit(oldp+536,((1U & ((8U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS)
                                       ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                                                  >> 3U))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 3U))))));
        bufp->chgBit(oldp+537,((1U & ((0x10U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS)
                                       ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                                                  >> 4U))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 4U))))));
        bufp->chgBit(oldp+538,((1U & ((0x20U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS)
                                       ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                                                  >> 5U))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 5U))))));
        bufp->chgBit(oldp+539,((1U & ((0x40U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS)
                                       ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                                                  >> 6U))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 6U))))));
        bufp->chgBit(oldp+540,((1U & ((0x80U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS)
                                       ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                                                  >> 7U))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 7U))))));
        bufp->chgBit(oldp+541,((1U & ((0x100U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS)
                                       ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                                                  >> 8U))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 8U))))));
        bufp->chgBit(oldp+542,((1U & ((0x200U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS)
                                       ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                                                  >> 9U))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 9U))))));
    }
    if (VL_UNLIKELY((((vlSelf->__Vm_traceActivity[3U] 
                       | vlSelf->__Vm_traceActivity
                       [5U]) | vlSelf->__Vm_traceActivity
                      [0xaU]) | vlSelf->__Vm_traceActivity
                     [0xcU]))) {
        bufp->chgBit(oldp+543,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC) 
                                      ^ vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS))));
        bufp->chgBit(oldp+544,((1U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                                               >> 0xaU)) 
                                      ^ (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS 
                                         >> 0xaU)))));
        bufp->chgBit(oldp+545,((1U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                                               >> 0xbU)) 
                                      ^ (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS 
                                         >> 0xbU)))));
        bufp->chgBit(oldp+546,((1U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                                               >> 0xcU)) 
                                      ^ (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS 
                                         >> 0xcU)))));
        bufp->chgBit(oldp+547,((1U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                                               >> 0xdU)) 
                                      ^ (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS 
                                         >> 0xdU)))));
        bufp->chgBit(oldp+548,((1U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                                               >> 0xeU)) 
                                      ^ (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS 
                                         >> 0xeU)))));
        bufp->chgBit(oldp+549,((1U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                                               >> 0xfU)) 
                                      ^ (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS 
                                         >> 0xfU)))));
        bufp->chgBit(oldp+550,((1U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                                               >> 0x10U)) 
                                      ^ (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS 
                                         >> 0x10U)))));
        bufp->chgBit(oldp+551,((1U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                                               >> 0x11U)) 
                                      ^ (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS 
                                         >> 0x11U)))));
        bufp->chgBit(oldp+552,((1U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                                               >> 0x12U)) 
                                      ^ (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS 
                                         >> 0x12U)))));
        bufp->chgBit(oldp+553,((1U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                                               >> 0x13U)) 
                                      ^ (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS 
                                         >> 0x13U)))));
        bufp->chgBit(oldp+554,((1U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                                               >> 1U)) 
                                      ^ (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS 
                                         >> 1U)))));
        bufp->chgBit(oldp+555,((1U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                                               >> 0x14U)) 
                                      ^ (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS 
                                         >> 0x14U)))));
        bufp->chgBit(oldp+556,((1U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                                               >> 0x15U)) 
                                      ^ (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS 
                                         >> 0x15U)))));
        bufp->chgBit(oldp+557,((1U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                                               >> 0x16U)) 
                                      ^ (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS 
                                         >> 0x16U)))));
        bufp->chgBit(oldp+558,((1U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                                               >> 0x17U)) 
                                      ^ (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS 
                                         >> 0x17U)))));
        bufp->chgBit(oldp+559,((1U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                                               >> 0x18U)) 
                                      ^ (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS 
                                         >> 0x18U)))));
        bufp->chgBit(oldp+560,((1U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                                               >> 0x19U)) 
                                      ^ (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS 
                                         >> 0x19U)))));
        bufp->chgBit(oldp+561,((1U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                                               >> 0x1aU)) 
                                      ^ (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS 
                                         >> 0x1aU)))));
        bufp->chgBit(oldp+562,((1U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                                               >> 0x1bU)) 
                                      ^ (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS 
                                         >> 0x1bU)))));
        bufp->chgBit(oldp+563,((1U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                                               >> 0x1cU)) 
                                      ^ (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS 
                                         >> 0x1cU)))));
        bufp->chgBit(oldp+564,((1U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                                               >> 0x1dU)) 
                                      ^ (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS 
                                         >> 0x1dU)))));
        bufp->chgBit(oldp+565,((1U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                                               >> 2U)) 
                                      ^ (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS 
                                         >> 2U)))));
        bufp->chgBit(oldp+566,((1U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                                               >> 3U)) 
                                      ^ (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS 
                                         >> 3U)))));
        bufp->chgBit(oldp+567,((1U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                                               >> 4U)) 
                                      ^ (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS 
                                         >> 4U)))));
        bufp->chgBit(oldp+568,((1U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                                               >> 5U)) 
                                      ^ (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS 
                                         >> 5U)))));
        bufp->chgBit(oldp+569,((1U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                                               >> 6U)) 
                                      ^ (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS 
                                         >> 6U)))));
        bufp->chgBit(oldp+570,((1U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                                               >> 7U)) 
                                      ^ (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS 
                                         >> 7U)))));
        bufp->chgBit(oldp+571,((1U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                                               >> 8U)) 
                                      ^ (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS 
                                         >> 8U)))));
        bufp->chgBit(oldp+572,((1U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                                               >> 9U)) 
                                      ^ (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS 
                                         >> 9U)))));
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[3U] 
                      | vlSelf->__Vm_traceActivity[6U]) 
                     | vlSelf->__Vm_traceActivity[7U]))) {
        bufp->chgCData(oldp+573,(((2U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 2U)) 
                                         << 1U)) | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241045__Q))),2);
        bufp->chgBit(oldp+574,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241045__Q)
                                       ? (~ (IData)(
                                                    (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                     >> 2U)))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 2U))))));
        bufp->chgCData(oldp+575,(((2U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 5U)) 
                                         << 1U)) | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241048__Q))),2);
        bufp->chgBit(oldp+576,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241048__Q)
                                       ? (~ (IData)(
                                                    (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                     >> 5U)))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 5U))))));
        bufp->chgCData(oldp+577,(((2U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 8U)) 
                                         << 1U)) | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241051__Q))),2);
        bufp->chgBit(oldp+578,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241051__Q)
                                       ? (~ (IData)(
                                                    (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                     >> 8U)))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 8U))))));
        bufp->chgCData(oldp+579,(((2U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 0xbU)) 
                                         << 1U)) | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241054__Q))),2);
        bufp->chgBit(oldp+580,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241054__Q)
                                       ? (~ (IData)(
                                                    (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                     >> 0xbU)))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 0xbU))))));
        bufp->chgCData(oldp+581,(((2U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 0xeU)) 
                                         << 1U)) | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241057__Q))),2);
        bufp->chgBit(oldp+582,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241057__Q)
                                       ? (~ (IData)(
                                                    (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                     >> 0xeU)))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 0xeU))))));
        bufp->chgCData(oldp+583,(((2U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 0x11U)) 
                                         << 1U)) | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241060__Q))),2);
        bufp->chgBit(oldp+584,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241060__Q)
                                       ? (~ (IData)(
                                                    (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                     >> 0x11U)))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 0x11U))))));
        bufp->chgCData(oldp+585,(((2U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 0x14U)) 
                                         << 1U)) | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241063__Q))),2);
        bufp->chgBit(oldp+586,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241063__Q)
                                       ? (~ (IData)(
                                                    (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                     >> 0x14U)))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 0x14U))))));
        bufp->chgCData(oldp+587,(((2U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 0x17U)) 
                                         << 1U)) | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241066__Q))),2);
        bufp->chgBit(oldp+588,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241066__Q)
                                       ? (~ (IData)(
                                                    (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                     >> 0x17U)))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 0x17U))))));
        bufp->chgCData(oldp+589,(((2U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 0x1aU)) 
                                         << 1U)) | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241069__Q))),2);
        bufp->chgBit(oldp+590,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241069__Q)
                                       ? (~ (IData)(
                                                    (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                     >> 0x1aU)))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 0x1aU))))));
        bufp->chgCData(oldp+591,(((2U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 0x1dU)) 
                                         << 1U)) | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241072__Q))),2);
        bufp->chgBit(oldp+592,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241072__Q)
                                       ? (~ (IData)(
                                                    (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                     >> 0x1dU)))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 0x1dU))))));
        bufp->chgCData(oldp+593,(((2U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 0x1bU)) 
                                         << 1U)) | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241070__Q))),2);
        bufp->chgBit(oldp+594,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241070__Q)
                                       ? (~ (IData)(
                                                    (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                     >> 0x1bU)))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 0x1bU))))));
        bufp->chgCData(oldp+595,(((2U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 0x1cU)) 
                                         << 1U)) | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241071__Q))),2);
        bufp->chgBit(oldp+596,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241071__Q)
                                       ? (~ (IData)(
                                                    (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                     >> 0x1cU)))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 0x1cU))))));
        bufp->chgCData(oldp+597,(((2U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 0x18U)) 
                                         << 1U)) | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241067__Q))),2);
        bufp->chgBit(oldp+598,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241067__Q)
                                       ? (~ (IData)(
                                                    (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                     >> 0x18U)))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 0x18U))))));
        bufp->chgCData(oldp+599,(((2U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 0x19U)) 
                                         << 1U)) | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241068__Q))),2);
        bufp->chgBit(oldp+600,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241068__Q)
                                       ? (~ (IData)(
                                                    (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                     >> 0x19U)))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 0x19U))))));
        bufp->chgCData(oldp+601,(((2U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 0x15U)) 
                                         << 1U)) | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241064__Q))),2);
        bufp->chgBit(oldp+602,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241064__Q)
                                       ? (~ (IData)(
                                                    (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                     >> 0x15U)))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 0x15U))))));
        bufp->chgCData(oldp+603,(((2U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 0x16U)) 
                                         << 1U)) | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241065__Q))),2);
        bufp->chgBit(oldp+604,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241065__Q)
                                       ? (~ (IData)(
                                                    (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                     >> 0x16U)))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 0x16U))))));
        bufp->chgCData(oldp+605,(((2U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 0x12U)) 
                                         << 1U)) | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241061__Q))),2);
        bufp->chgBit(oldp+606,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241061__Q)
                                       ? (~ (IData)(
                                                    (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                     >> 0x12U)))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 0x12U))))));
        bufp->chgCData(oldp+607,(((2U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 0x13U)) 
                                         << 1U)) | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241062__Q))),2);
        bufp->chgBit(oldp+608,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241062__Q)
                                       ? (~ (IData)(
                                                    (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                     >> 0x13U)))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 0x13U))))));
        bufp->chgCData(oldp+609,(((2U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 0xfU)) 
                                         << 1U)) | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241058__Q))),2);
        bufp->chgBit(oldp+610,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241058__Q)
                                       ? (~ (IData)(
                                                    (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                     >> 0xfU)))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 0xfU))))));
        bufp->chgCData(oldp+611,(((2U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 0x10U)) 
                                         << 1U)) | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241059__Q))),2);
        bufp->chgBit(oldp+612,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241059__Q)
                                       ? (~ (IData)(
                                                    (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                     >> 0x10U)))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 0x10U))))));
        bufp->chgCData(oldp+613,(((2U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 0xcU)) 
                                         << 1U)) | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241055__Q))),2);
        bufp->chgBit(oldp+614,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241055__Q)
                                       ? (~ (IData)(
                                                    (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                     >> 0xcU)))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 0xcU))))));
        bufp->chgCData(oldp+615,(((2U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 0xdU)) 
                                         << 1U)) | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241056__Q))),2);
        bufp->chgBit(oldp+616,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241056__Q)
                                       ? (~ (IData)(
                                                    (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                     >> 0xdU)))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 0xdU))))));
        bufp->chgCData(oldp+617,(((2U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 9U)) 
                                         << 1U)) | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241052__Q))),2);
        bufp->chgBit(oldp+618,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241052__Q)
                                       ? (~ (IData)(
                                                    (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                     >> 9U)))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 9U))))));
        bufp->chgCData(oldp+619,(((2U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 0xaU)) 
                                         << 1U)) | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241053__Q))),2);
        bufp->chgBit(oldp+620,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241053__Q)
                                       ? (~ (IData)(
                                                    (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                     >> 0xaU)))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 0xaU))))));
        bufp->chgCData(oldp+621,(((2U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 6U)) 
                                         << 1U)) | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241049__Q))),2);
        bufp->chgBit(oldp+622,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241049__Q)
                                       ? (~ (IData)(
                                                    (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                     >> 6U)))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 6U))))));
        bufp->chgCData(oldp+623,(((2U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 7U)) 
                                         << 1U)) | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241050__Q))),2);
        bufp->chgBit(oldp+624,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241050__Q)
                                       ? (~ (IData)(
                                                    (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                     >> 7U)))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 7U))))));
        bufp->chgCData(oldp+625,(((2U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 3U)) 
                                         << 1U)) | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241046__Q))),2);
        bufp->chgBit(oldp+626,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241046__Q)
                                       ? (~ (IData)(
                                                    (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                     >> 3U)))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 3U))))));
        bufp->chgCData(oldp+627,(((2U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 4U)) 
                                         << 1U)) | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241047__Q))),2);
        bufp->chgBit(oldp+628,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241047__Q)
                                       ? (~ (IData)(
                                                    (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                     >> 4U)))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 4U))))));
        bufp->chgCData(oldp+629,(((2U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out) 
                                         << 1U)) | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241043__Q))),2);
        bufp->chgBit(oldp+630,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241043__Q)
                                       ? (~ (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out))
                                       : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out)))));
        bufp->chgCData(oldp+631,(((2U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 1U)) 
                                         << 1U)) | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241044__Q))),2);
        bufp->chgBit(oldp+632,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241044__Q)
                                       ? (~ (IData)(
                                                    (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                     >> 1U)))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 1U))))));
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[3U] 
                      | vlSelf->__Vm_traceActivity[6U]) 
                     | vlSelf->__Vm_traceActivity[8U]))) {
        bufp->chgCData(oldp+633,(((2U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 1U)) 
                                         << 1U)) | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241076__Q))),2);
        bufp->chgBit(oldp+634,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241076__Q)
                                       ? (~ (IData)(
                                                    (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                     >> 1U)))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 1U))))));
        bufp->chgCData(oldp+635,(((2U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 4U)) 
                                         << 1U)) | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241079__Q))),2);
        bufp->chgBit(oldp+636,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241079__Q)
                                       ? (~ (IData)(
                                                    (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                     >> 4U)))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 4U))))));
        bufp->chgCData(oldp+637,(((2U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 7U)) 
                                         << 1U)) | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241082__Q))),2);
        bufp->chgBit(oldp+638,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241082__Q)
                                       ? (~ (IData)(
                                                    (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                     >> 7U)))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 7U))))));
        bufp->chgCData(oldp+639,(((2U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 0xaU)) 
                                         << 1U)) | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241085__Q))),2);
        bufp->chgBit(oldp+640,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241085__Q)
                                       ? (~ (IData)(
                                                    (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                     >> 0xaU)))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 0xaU))))));
        bufp->chgCData(oldp+641,(((2U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 0xdU)) 
                                         << 1U)) | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241088__Q))),2);
        bufp->chgBit(oldp+642,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241088__Q)
                                       ? (~ (IData)(
                                                    (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                     >> 0xdU)))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 0xdU))))));
        bufp->chgCData(oldp+643,(((2U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 0x10U)) 
                                         << 1U)) | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241091__Q))),2);
        bufp->chgBit(oldp+644,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241091__Q)
                                       ? (~ (IData)(
                                                    (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                     >> 0x10U)))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 0x10U))))));
        bufp->chgCData(oldp+645,(((2U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 0x11U)) 
                                         << 1U)) | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241092__Q))),2);
        bufp->chgBit(oldp+646,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241092__Q)
                                       ? (~ (IData)(
                                                    (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                     >> 0x11U)))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 0x11U))))));
        bufp->chgCData(oldp+647,(((2U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 0x12U)) 
                                         << 1U)) | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241093__Q))),2);
        bufp->chgBit(oldp+648,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241093__Q)
                                       ? (~ (IData)(
                                                    (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                     >> 0x12U)))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 0x12U))))));
        bufp->chgCData(oldp+649,(((2U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 0x1dU)) 
                                         << 1U)) | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241104__Q))),2);
        bufp->chgBit(oldp+650,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241104__Q)
                                       ? (~ (IData)(
                                                    (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                     >> 0x1dU)))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 0x1dU))))));
        bufp->chgCData(oldp+651,(((2U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 0x1cU)) 
                                         << 1U)) | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241103__Q))),2);
        bufp->chgBit(oldp+652,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241103__Q)
                                       ? (~ (IData)(
                                                    (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                     >> 0x1cU)))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 0x1cU))))));
        bufp->chgCData(oldp+653,(((2U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 0x1bU)) 
                                         << 1U)) | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241102__Q))),2);
        bufp->chgBit(oldp+654,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241102__Q)
                                       ? (~ (IData)(
                                                    (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                     >> 0x1bU)))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 0x1bU))))));
        bufp->chgCData(oldp+655,(((2U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 0x1aU)) 
                                         << 1U)) | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241101__Q))),2);
        bufp->chgBit(oldp+656,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241101__Q)
                                       ? (~ (IData)(
                                                    (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                     >> 0x1aU)))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 0x1aU))))));
        bufp->chgCData(oldp+657,(((2U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 0x19U)) 
                                         << 1U)) | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241100__Q))),2);
        bufp->chgBit(oldp+658,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241100__Q)
                                       ? (~ (IData)(
                                                    (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                     >> 0x19U)))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 0x19U))))));
        bufp->chgCData(oldp+659,(((2U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 0x18U)) 
                                         << 1U)) | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241099__Q))),2);
        bufp->chgBit(oldp+660,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241099__Q)
                                       ? (~ (IData)(
                                                    (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                     >> 0x18U)))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 0x18U))))));
        bufp->chgCData(oldp+661,(((2U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 0x17U)) 
                                         << 1U)) | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241098__Q))),2);
        bufp->chgBit(oldp+662,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241098__Q)
                                       ? (~ (IData)(
                                                    (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                     >> 0x17U)))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 0x17U))))));
        bufp->chgCData(oldp+663,(((2U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 0x16U)) 
                                         << 1U)) | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241097__Q))),2);
        bufp->chgBit(oldp+664,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241097__Q)
                                       ? (~ (IData)(
                                                    (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                     >> 0x16U)))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 0x16U))))));
        bufp->chgCData(oldp+665,(((2U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 0x15U)) 
                                         << 1U)) | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241096__Q))),2);
        bufp->chgBit(oldp+666,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241096__Q)
                                       ? (~ (IData)(
                                                    (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                     >> 0x15U)))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 0x15U))))));
        bufp->chgCData(oldp+667,(((2U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 0x14U)) 
                                         << 1U)) | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241095__Q))),2);
        bufp->chgBit(oldp+668,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241095__Q)
                                       ? (~ (IData)(
                                                    (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                     >> 0x14U)))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 0x14U))))));
        bufp->chgCData(oldp+669,(((2U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 0x13U)) 
                                         << 1U)) | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241094__Q))),2);
        bufp->chgBit(oldp+670,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241094__Q)
                                       ? (~ (IData)(
                                                    (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                     >> 0x13U)))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 0x13U))))));
        bufp->chgCData(oldp+671,(((2U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 0xfU)) 
                                         << 1U)) | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241090__Q))),2);
        bufp->chgBit(oldp+672,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241090__Q)
                                       ? (~ (IData)(
                                                    (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                     >> 0xfU)))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 0xfU))))));
        bufp->chgCData(oldp+673,(((2U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 0xeU)) 
                                         << 1U)) | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241089__Q))),2);
        bufp->chgBit(oldp+674,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241089__Q)
                                       ? (~ (IData)(
                                                    (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                     >> 0xeU)))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 0xeU))))));
        bufp->chgCData(oldp+675,(((2U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 0xcU)) 
                                         << 1U)) | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241087__Q))),2);
        bufp->chgBit(oldp+676,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241087__Q)
                                       ? (~ (IData)(
                                                    (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                     >> 0xcU)))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 0xcU))))));
        bufp->chgCData(oldp+677,(((2U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 0xbU)) 
                                         << 1U)) | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241086__Q))),2);
        bufp->chgBit(oldp+678,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241086__Q)
                                       ? (~ (IData)(
                                                    (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                     >> 0xbU)))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 0xbU))))));
        bufp->chgCData(oldp+679,(((2U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 9U)) 
                                         << 1U)) | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241084__Q))),2);
        bufp->chgBit(oldp+680,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241084__Q)
                                       ? (~ (IData)(
                                                    (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                     >> 9U)))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 9U))))));
        bufp->chgCData(oldp+681,(((2U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 8U)) 
                                         << 1U)) | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241083__Q))),2);
        bufp->chgBit(oldp+682,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241083__Q)
                                       ? (~ (IData)(
                                                    (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                     >> 8U)))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 8U))))));
        bufp->chgCData(oldp+683,(((2U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 6U)) 
                                         << 1U)) | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241081__Q))),2);
        bufp->chgBit(oldp+684,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241081__Q)
                                       ? (~ (IData)(
                                                    (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                     >> 6U)))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 6U))))));
        bufp->chgCData(oldp+685,(((2U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 5U)) 
                                         << 1U)) | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241080__Q))),2);
        bufp->chgBit(oldp+686,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241080__Q)
                                       ? (~ (IData)(
                                                    (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                     >> 5U)))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 5U))))));
        bufp->chgCData(oldp+687,(((2U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 3U)) 
                                         << 1U)) | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241078__Q))),2);
        bufp->chgBit(oldp+688,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241078__Q)
                                       ? (~ (IData)(
                                                    (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                     >> 3U)))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 3U))))));
        bufp->chgCData(oldp+689,(((2U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 2U)) 
                                         << 1U)) | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241077__Q))),2);
        bufp->chgBit(oldp+690,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241077__Q)
                                       ? (~ (IData)(
                                                    (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                     >> 2U)))
                                       : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 2U))))));
        bufp->chgCData(oldp+691,(((2U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out) 
                                         << 1U)) | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241075__Q))),2);
        bufp->chgBit(oldp+692,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241075__Q)
                                       ? (~ (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out))
                                       : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out)))));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[7U]))) {
        bufp->chgIData(oldp+693,((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out)),32);
        bufp->chgQData(oldp+694,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024techmap49__024flatten____VhsheoAgw3cNQWfKc6y2YBKCNarIVv6pcbe2QYQiEhya),38);
        bufp->chgCData(oldp+696,(((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                 >> 2U)))
                                   ? 1U : 2U)),2);
        bufp->chgCData(oldp+697,(((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                 >> 5U)))
                                   ? 1U : 2U)),2);
        bufp->chgCData(oldp+698,(((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                 >> 8U)))
                                   ? 1U : 2U)),2);
        bufp->chgCData(oldp+699,(((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                 >> 0xbU)))
                                   ? 1U : 2U)),2);
        bufp->chgCData(oldp+700,(((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                 >> 0xeU)))
                                   ? 1U : 2U)),2);
        bufp->chgCData(oldp+701,(((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                 >> 0x11U)))
                                   ? 1U : 2U)),2);
        bufp->chgCData(oldp+702,(((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                 >> 0x14U)))
                                   ? 1U : 2U)),2);
        bufp->chgCData(oldp+703,(((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                 >> 0x17U)))
                                   ? 1U : 2U)),2);
        bufp->chgCData(oldp+704,(((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                 >> 0x1aU)))
                                   ? 1U : 2U)),2);
        bufp->chgCData(oldp+705,(((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                 >> 0x1dU)))
                                   ? 1U : 2U)),2);
        bufp->chgCData(oldp+706,(((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                 >> 0x1bU)))
                                   ? 1U : 2U)),2);
        bufp->chgCData(oldp+707,(((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                 >> 0x1cU)))
                                   ? 1U : 2U)),2);
        bufp->chgCData(oldp+708,(((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                 >> 0x18U)))
                                   ? 1U : 2U)),2);
        bufp->chgCData(oldp+709,(((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                 >> 0x19U)))
                                   ? 1U : 2U)),2);
        bufp->chgCData(oldp+710,(((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                 >> 0x15U)))
                                   ? 1U : 2U)),2);
        bufp->chgCData(oldp+711,(((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                 >> 0x16U)))
                                   ? 1U : 2U)),2);
        bufp->chgCData(oldp+712,(((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                 >> 0x12U)))
                                   ? 1U : 2U)),2);
        bufp->chgCData(oldp+713,(((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                 >> 0x13U)))
                                   ? 1U : 2U)),2);
        bufp->chgCData(oldp+714,(((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                 >> 0xfU)))
                                   ? 1U : 2U)),2);
        bufp->chgCData(oldp+715,(((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                 >> 0x10U)))
                                   ? 1U : 2U)),2);
        bufp->chgCData(oldp+716,(((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                 >> 0xcU)))
                                   ? 1U : 2U)),2);
        bufp->chgCData(oldp+717,(((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                 >> 0xdU)))
                                   ? 1U : 2U)),2);
        bufp->chgCData(oldp+718,(((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                 >> 9U)))
                                   ? 1U : 2U)),2);
        bufp->chgCData(oldp+719,(((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                 >> 0xaU)))
                                   ? 1U : 2U)),2);
        bufp->chgCData(oldp+720,(((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                 >> 6U)))
                                   ? 1U : 2U)),2);
        bufp->chgCData(oldp+721,(((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                 >> 7U)))
                                   ? 1U : 2U)),2);
        bufp->chgCData(oldp+722,(((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                 >> 3U)))
                                   ? 1U : 2U)),2);
        bufp->chgCData(oldp+723,(((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                 >> 4U)))
                                   ? 1U : 2U)),2);
        bufp->chgCData(oldp+724,(((1U & (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out))
                                   ? 1U : 2U)),2);
        bufp->chgCData(oldp+725,(((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                 >> 1U)))
                                   ? 1U : 2U)),2);
        bufp->chgIData(oldp+726,(((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                 >> 0x1fU)))
                                   ? 0xe80017U : 0x1700e8U)),32);
        bufp->chgBit(oldp+727,((1U & (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out))));
        bufp->chgBit(oldp+728,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                              >> 0xaU)))));
        bufp->chgBit(oldp+729,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                              >> 0xbU)))));
        bufp->chgBit(oldp+730,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                              >> 0xcU)))));
        bufp->chgBit(oldp+731,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                              >> 0xdU)))));
        bufp->chgBit(oldp+732,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                              >> 0xeU)))));
        bufp->chgBit(oldp+733,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+734,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                              >> 0x10U)))));
        bufp->chgBit(oldp+735,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                              >> 0x11U)))));
        bufp->chgBit(oldp+736,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                              >> 0x12U)))));
        bufp->chgBit(oldp+737,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                              >> 0x13U)))));
        bufp->chgBit(oldp+738,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                              >> 1U)))));
        bufp->chgBit(oldp+739,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                              >> 0x14U)))));
        bufp->chgBit(oldp+740,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                              >> 0x15U)))));
        bufp->chgBit(oldp+741,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                              >> 0x16U)))));
        bufp->chgBit(oldp+742,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                              >> 0x17U)))));
        bufp->chgBit(oldp+743,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                              >> 0x18U)))));
        bufp->chgBit(oldp+744,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                              >> 0x19U)))));
        bufp->chgBit(oldp+745,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                              >> 0x1aU)))));
        bufp->chgBit(oldp+746,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                              >> 0x1bU)))));
        bufp->chgBit(oldp+747,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                              >> 0x1cU)))));
        bufp->chgBit(oldp+748,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                              >> 0x1dU)))));
        bufp->chgBit(oldp+749,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                              >> 2U)))));
        bufp->chgBit(oldp+750,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                              >> 3U)))));
        bufp->chgBit(oldp+751,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                              >> 4U)))));
        bufp->chgBit(oldp+752,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                              >> 5U)))));
        bufp->chgBit(oldp+753,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                              >> 6U)))));
        bufp->chgBit(oldp+754,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                              >> 7U)))));
        bufp->chgBit(oldp+755,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                              >> 8U)))));
        bufp->chgBit(oldp+756,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                              >> 9U)))));
        bufp->chgQData(oldp+757,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out),38);
        bufp->chgQData(oldp+759,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__add_sub_in),64);
        bufp->chgQData(oldp+761,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__mult_out),64);
        bufp->chgQData(oldp+763,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__add_sub_out),64);
        bufp->chgQData(oldp+765,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__pre_shift),64);
        bufp->chgQData(oldp+767,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__shift_right),64);
        bufp->chgQData(oldp+769,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__round),64);
        bufp->chgQData(oldp+771,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__saturate),38);
        bufp->chgIData(oldp+773,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__mult_a),20);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[8U]))) {
        bufp->chgIData(oldp+774,((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out)),32);
        bufp->chgQData(oldp+775,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024techmap48__024flatten____VhshcxkILnAxJK1ec9BpMm9TSPgHFVCSeZuaOT9t9sVz),38);
        bufp->chgIData(oldp+777,(((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                 >> 0x1fU)))
                                   ? 0xe80017U : 0x1700e8U)),32);
        bufp->chgCData(oldp+778,(((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                 >> 1U)))
                                   ? 1U : 2U)),2);
        bufp->chgCData(oldp+779,(((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                 >> 4U)))
                                   ? 1U : 2U)),2);
        bufp->chgCData(oldp+780,(((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                 >> 7U)))
                                   ? 1U : 2U)),2);
        bufp->chgCData(oldp+781,(((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                 >> 0xaU)))
                                   ? 1U : 2U)),2);
        bufp->chgCData(oldp+782,(((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                 >> 0xdU)))
                                   ? 1U : 2U)),2);
        bufp->chgCData(oldp+783,(((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                 >> 0x10U)))
                                   ? 1U : 2U)),2);
        bufp->chgCData(oldp+784,(((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                 >> 0x11U)))
                                   ? 1U : 2U)),2);
        bufp->chgCData(oldp+785,(((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                 >> 0x12U)))
                                   ? 1U : 2U)),2);
        bufp->chgCData(oldp+786,(((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                 >> 0x1dU)))
                                   ? 1U : 2U)),2);
        bufp->chgCData(oldp+787,(((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                 >> 0x1cU)))
                                   ? 1U : 2U)),2);
        bufp->chgCData(oldp+788,(((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                 >> 0x1bU)))
                                   ? 1U : 2U)),2);
        bufp->chgCData(oldp+789,(((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                 >> 0x1aU)))
                                   ? 1U : 2U)),2);
        bufp->chgCData(oldp+790,(((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                 >> 0x19U)))
                                   ? 1U : 2U)),2);
        bufp->chgCData(oldp+791,(((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                 >> 0x18U)))
                                   ? 1U : 2U)),2);
        bufp->chgCData(oldp+792,(((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                 >> 0x17U)))
                                   ? 1U : 2U)),2);
        bufp->chgCData(oldp+793,(((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                 >> 0x16U)))
                                   ? 1U : 2U)),2);
        bufp->chgCData(oldp+794,(((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                 >> 0x15U)))
                                   ? 1U : 2U)),2);
        bufp->chgCData(oldp+795,(((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                 >> 0x14U)))
                                   ? 1U : 2U)),2);
        bufp->chgCData(oldp+796,(((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                 >> 0x13U)))
                                   ? 1U : 2U)),2);
        bufp->chgCData(oldp+797,(((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                 >> 0xfU)))
                                   ? 1U : 2U)),2);
        bufp->chgCData(oldp+798,(((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                 >> 0xeU)))
                                   ? 1U : 2U)),2);
        bufp->chgCData(oldp+799,(((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                 >> 0xcU)))
                                   ? 1U : 2U)),2);
        bufp->chgCData(oldp+800,(((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                 >> 0xbU)))
                                   ? 1U : 2U)),2);
        bufp->chgCData(oldp+801,(((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                 >> 9U)))
                                   ? 1U : 2U)),2);
        bufp->chgCData(oldp+802,(((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                 >> 8U)))
                                   ? 1U : 2U)),2);
        bufp->chgCData(oldp+803,(((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                 >> 6U)))
                                   ? 1U : 2U)),2);
        bufp->chgCData(oldp+804,(((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                 >> 5U)))
                                   ? 1U : 2U)),2);
        bufp->chgCData(oldp+805,(((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                 >> 3U)))
                                   ? 1U : 2U)),2);
        bufp->chgCData(oldp+806,(((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                 >> 2U)))
                                   ? 1U : 2U)),2);
        bufp->chgCData(oldp+807,(((1U & (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out))
                                   ? 1U : 2U)),2);
        bufp->chgBit(oldp+808,((1U & (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out))));
        bufp->chgBit(oldp+809,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                              >> 0xaU)))));
        bufp->chgBit(oldp+810,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                              >> 0xbU)))));
        bufp->chgBit(oldp+811,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                              >> 0xcU)))));
        bufp->chgBit(oldp+812,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                              >> 0xdU)))));
        bufp->chgBit(oldp+813,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                              >> 0xeU)))));
        bufp->chgBit(oldp+814,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+815,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                              >> 0x10U)))));
        bufp->chgBit(oldp+816,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                              >> 0x11U)))));
        bufp->chgBit(oldp+817,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                              >> 0x12U)))));
        bufp->chgBit(oldp+818,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                              >> 0x13U)))));
        bufp->chgBit(oldp+819,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                              >> 1U)))));
        bufp->chgBit(oldp+820,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                              >> 0x14U)))));
        bufp->chgBit(oldp+821,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                              >> 0x15U)))));
        bufp->chgBit(oldp+822,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                              >> 0x16U)))));
        bufp->chgBit(oldp+823,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                              >> 0x17U)))));
        bufp->chgBit(oldp+824,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                              >> 0x18U)))));
        bufp->chgBit(oldp+825,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                              >> 0x19U)))));
        bufp->chgBit(oldp+826,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                              >> 0x1aU)))));
        bufp->chgBit(oldp+827,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                              >> 0x1bU)))));
        bufp->chgBit(oldp+828,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                              >> 0x1cU)))));
        bufp->chgBit(oldp+829,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                              >> 0x1dU)))));
        bufp->chgBit(oldp+830,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                              >> 2U)))));
        bufp->chgBit(oldp+831,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                              >> 3U)))));
        bufp->chgBit(oldp+832,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                              >> 4U)))));
        bufp->chgBit(oldp+833,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                              >> 5U)))));
        bufp->chgBit(oldp+834,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                              >> 6U)))));
        bufp->chgBit(oldp+835,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                              >> 7U)))));
        bufp->chgBit(oldp+836,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                              >> 8U)))));
        bufp->chgBit(oldp+837,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                              >> 9U)))));
        bufp->chgQData(oldp+838,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out),38);
        bufp->chgQData(oldp+840,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__add_sub_in),64);
        bufp->chgQData(oldp+842,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__mult_out),64);
        bufp->chgQData(oldp+844,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__add_sub_out),64);
        bufp->chgQData(oldp+846,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__pre_shift),64);
        bufp->chgQData(oldp+848,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__shift_right),64);
        bufp->chgQData(oldp+850,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__round),64);
        bufp->chgQData(oldp+852,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__saturate),38);
        bufp->chgIData(oldp+854,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__mult_a),20);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[9U]))) {
        bufp->chgSData(oldp+855,(vlSelf->co_sim_mac_32__DOT__golden__DOT__input_a[0]),16);
        bufp->chgSData(oldp+856,(vlSelf->co_sim_mac_32__DOT__golden__DOT__input_a[1]),16);
        bufp->chgSData(oldp+857,(vlSelf->co_sim_mac_32__DOT__golden__DOT__input_b[0]),16);
        bufp->chgSData(oldp+858,(vlSelf->co_sim_mac_32__DOT__golden__DOT__input_b[1]),16);
        bufp->chgSData(oldp+859,(vlSelf->co_sim_mac_32__DOT__golden__DOT__input_a
                                 [0U]),16);
        bufp->chgSData(oldp+860,(vlSelf->co_sim_mac_32__DOT__golden__DOT__input_b
                                 [0U]),16);
        bufp->chgSData(oldp+861,(vlSelf->co_sim_mac_32__DOT__golden__DOT__input_a
                                 [1U]),16);
        bufp->chgSData(oldp+862,(vlSelf->co_sim_mac_32__DOT__golden__DOT__input_b
                                 [1U]),16);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[0xaU]))) {
        bufp->chgIData(oldp+863,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS),32);
        bufp->chgSData(oldp+864,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244269__DOT__s4),16);
        bufp->chgBit(oldp+865,((1U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS)));
        bufp->chgBit(oldp+866,((1U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS 
                                      >> 0xaU))));
        bufp->chgBit(oldp+867,((1U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS 
                                      >> 0xbU))));
        bufp->chgBit(oldp+868,((1U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS 
                                      >> 0xcU))));
        bufp->chgBit(oldp+869,((1U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS 
                                      >> 0xdU))));
        bufp->chgBit(oldp+870,((1U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS 
                                      >> 0xeU))));
        bufp->chgBit(oldp+871,((1U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS 
                                      >> 0xfU))));
        bufp->chgBit(oldp+872,((1U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS 
                                      >> 0x10U))));
        bufp->chgBit(oldp+873,((1U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS 
                                      >> 0x11U))));
        bufp->chgBit(oldp+874,((1U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS 
                                      >> 0x12U))));
        bufp->chgBit(oldp+875,((1U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS 
                                      >> 0x13U))));
        bufp->chgBit(oldp+876,((1U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS 
                                      >> 1U))));
        bufp->chgBit(oldp+877,((1U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS 
                                      >> 0x14U))));
        bufp->chgBit(oldp+878,((1U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS 
                                      >> 0x15U))));
        bufp->chgBit(oldp+879,((1U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS 
                                      >> 0x16U))));
        bufp->chgBit(oldp+880,((1U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS 
                                      >> 0x17U))));
        bufp->chgBit(oldp+881,((1U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS 
                                      >> 0x18U))));
        bufp->chgBit(oldp+882,((1U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS 
                                      >> 0x19U))));
        bufp->chgBit(oldp+883,((1U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+884,((1U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+885,((1U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+886,((1U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+887,((1U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS 
                                      >> 2U))));
        bufp->chgBit(oldp+888,((1U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS 
                                      >> 3U))));
        bufp->chgBit(oldp+889,((1U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS 
                                      >> 4U))));
        bufp->chgBit(oldp+890,((1U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS 
                                      >> 5U))));
        bufp->chgBit(oldp+891,((1U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS 
                                      >> 6U))));
        bufp->chgBit(oldp+892,((1U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS 
                                      >> 7U))));
        bufp->chgBit(oldp+893,((1U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS 
                                      >> 8U))));
        bufp->chgBit(oldp+894,((1U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS 
                                      >> 9U))));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[0xbU]))) {
        bufp->chgIData(oldp+895,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS),32);
        bufp->chgSData(oldp+896,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244053__DOT__s4),16);
        bufp->chgBit(oldp+897,((1U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS)));
        bufp->chgBit(oldp+898,((1U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS 
                                      >> 0xaU))));
        bufp->chgBit(oldp+899,((1U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS 
                                      >> 0xbU))));
        bufp->chgBit(oldp+900,((1U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS 
                                      >> 0xcU))));
        bufp->chgBit(oldp+901,((1U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS 
                                      >> 0xdU))));
        bufp->chgBit(oldp+902,((1U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS 
                                      >> 0xeU))));
        bufp->chgBit(oldp+903,((1U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS 
                                      >> 0xfU))));
        bufp->chgBit(oldp+904,((1U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS 
                                      >> 0x10U))));
        bufp->chgBit(oldp+905,((1U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS 
                                      >> 0x11U))));
        bufp->chgBit(oldp+906,((1U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS 
                                      >> 0x12U))));
        bufp->chgBit(oldp+907,((1U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS 
                                      >> 0x13U))));
        bufp->chgBit(oldp+908,((1U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS 
                                      >> 1U))));
        bufp->chgBit(oldp+909,((1U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS 
                                      >> 0x14U))));
        bufp->chgBit(oldp+910,((1U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS 
                                      >> 0x15U))));
        bufp->chgBit(oldp+911,((1U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS 
                                      >> 0x16U))));
        bufp->chgBit(oldp+912,((1U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS 
                                      >> 0x17U))));
        bufp->chgBit(oldp+913,((1U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS 
                                      >> 0x18U))));
        bufp->chgBit(oldp+914,((1U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS 
                                      >> 0x19U))));
        bufp->chgBit(oldp+915,((1U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+916,((1U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+917,((1U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+918,((1U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+919,((1U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS 
                                      >> 2U))));
        bufp->chgBit(oldp+920,((1U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS 
                                      >> 3U))));
        bufp->chgBit(oldp+921,((1U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS 
                                      >> 4U))));
        bufp->chgBit(oldp+922,((1U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS 
                                      >> 5U))));
        bufp->chgBit(oldp+923,((1U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS 
                                      >> 6U))));
        bufp->chgBit(oldp+924,((1U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS 
                                      >> 7U))));
        bufp->chgBit(oldp+925,((1U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS 
                                      >> 8U))));
        bufp->chgBit(oldp+926,((1U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS 
                                      >> 9U))));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[4U] 
                     | vlSelf->__Vm_traceActivity[0xdU]))) {
        bufp->chgBit(oldp+927,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                                              >> 0x1eU)))));
        bufp->chgQData(oldp+928,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC),33);
        bufp->chgIData(oldp+930,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY),32);
        bufp->chgCData(oldp+931,(((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                                                 >> 0x1eU)))
                                   ? 0x41U : 0x14U)),8);
        bufp->chgCData(oldp+932,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244054__DOT__s2),4);
        bufp->chgCData(oldp+933,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244054__DOT__s1),2);
        bufp->chgCData(oldp+934,(((0x20000000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY)
                                   ? 1U : 0U)),2);
        bufp->chgCData(oldp+935,(((0x10000000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY)
                                   ? 1U : 0U)),2);
        bufp->chgCData(oldp+936,(((0x8000000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY)
                                   ? 1U : 0U)),2);
        bufp->chgCData(oldp+937,(((0x4000000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY)
                                   ? 1U : 0U)),2);
        bufp->chgCData(oldp+938,(((0x2000000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY)
                                   ? 1U : 0U)),2);
        bufp->chgCData(oldp+939,(((0x1000000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY)
                                   ? 1U : 0U)),2);
        bufp->chgCData(oldp+940,(((0x800000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY)
                                   ? 1U : 0U)),2);
        bufp->chgCData(oldp+941,(((0x400000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY)
                                   ? 1U : 0U)),2);
        bufp->chgCData(oldp+942,(((0x200000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY)
                                   ? 1U : 0U)),2);
        bufp->chgCData(oldp+943,(((0x100000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY)
                                   ? 1U : 0U)),2);
        bufp->chgCData(oldp+944,(((0x80000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY)
                                   ? 1U : 0U)),2);
        bufp->chgCData(oldp+945,(((0x40000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY)
                                   ? 1U : 0U)),2);
        bufp->chgCData(oldp+946,(((0x20000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY)
                                   ? 1U : 0U)),2);
        bufp->chgCData(oldp+947,(((0x10000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY)
                                   ? 1U : 0U)),2);
        bufp->chgCData(oldp+948,(((0x8000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY)
                                   ? 1U : 0U)),2);
        bufp->chgCData(oldp+949,(((0x4000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY)
                                   ? 1U : 0U)),2);
        bufp->chgCData(oldp+950,(((0x2000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY)
                                   ? 1U : 0U)),2);
        bufp->chgCData(oldp+951,(((0x1000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY)
                                   ? 1U : 0U)),2);
        bufp->chgCData(oldp+952,(((0x800U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY)
                                   ? 1U : 0U)),2);
        bufp->chgCData(oldp+953,(((0x400U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY)
                                   ? 1U : 0U)),2);
        bufp->chgCData(oldp+954,(((0x200U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY)
                                   ? 1U : 0U)),2);
        bufp->chgCData(oldp+955,(((0x100U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY)
                                   ? 1U : 0U)),2);
        bufp->chgCData(oldp+956,(((0x80U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY)
                                   ? 1U : 0U)),2);
        bufp->chgCData(oldp+957,(((0x40U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY)
                                   ? 1U : 0U)),2);
        bufp->chgCData(oldp+958,(((0x20U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY)
                                   ? 1U : 0U)),2);
        bufp->chgCData(oldp+959,(((0x10U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY)
                                   ? 1U : 0U)),2);
        bufp->chgCData(oldp+960,(((8U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY)
                                   ? 1U : 0U)),2);
        bufp->chgCData(oldp+961,(((1U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY)
                                   ? 1U : 0U)),2);
        bufp->chgCData(oldp+962,(((2U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY)
                                   ? 1U : 0U)),2);
        bufp->chgCData(oldp+963,(((4U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY)
                                   ? 1U : 0U)),2);
        bufp->chgBit(oldp+964,((1U & (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC))));
        bufp->chgBit(oldp+965,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                                              >> 0xaU)))));
        bufp->chgBit(oldp+966,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                                              >> 0xbU)))));
        bufp->chgBit(oldp+967,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                                              >> 0xcU)))));
        bufp->chgBit(oldp+968,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                                              >> 0xdU)))));
        bufp->chgBit(oldp+969,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                                              >> 0xeU)))));
        bufp->chgBit(oldp+970,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+971,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                                              >> 0x10U)))));
        bufp->chgBit(oldp+972,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                                              >> 0x11U)))));
        bufp->chgBit(oldp+973,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                                              >> 0x12U)))));
        bufp->chgBit(oldp+974,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                                              >> 0x13U)))));
        bufp->chgBit(oldp+975,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                                              >> 1U)))));
        bufp->chgBit(oldp+976,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                                              >> 0x14U)))));
        bufp->chgBit(oldp+977,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                                              >> 0x15U)))));
        bufp->chgBit(oldp+978,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                                              >> 0x16U)))));
        bufp->chgBit(oldp+979,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                                              >> 0x17U)))));
        bufp->chgBit(oldp+980,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                                              >> 0x18U)))));
        bufp->chgBit(oldp+981,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                                              >> 0x19U)))));
        bufp->chgBit(oldp+982,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                                              >> 0x1aU)))));
        bufp->chgBit(oldp+983,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                                              >> 0x1bU)))));
        bufp->chgBit(oldp+984,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                                              >> 0x1cU)))));
        bufp->chgBit(oldp+985,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                                              >> 0x1dU)))));
        bufp->chgBit(oldp+986,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                                              >> 2U)))));
        bufp->chgBit(oldp+987,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                                              >> 3U)))));
        bufp->chgBit(oldp+988,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                                              >> 4U)))));
        bufp->chgBit(oldp+989,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                                              >> 5U)))));
        bufp->chgBit(oldp+990,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                                              >> 6U)))));
        bufp->chgBit(oldp+991,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                                              >> 7U)))));
        bufp->chgBit(oldp+992,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                                              >> 8U)))));
        bufp->chgBit(oldp+993,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                                              >> 9U)))));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[5U] 
                     | vlSelf->__Vm_traceActivity[0xcU]))) {
        bufp->chgBit(oldp+994,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                                              >> 0x1eU)))));
        bufp->chgQData(oldp+995,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC),33);
        bufp->chgIData(oldp+997,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY),32);
        bufp->chgCData(oldp+998,(((1U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY)
                                   ? 1U : 0U)),2);
        bufp->chgCData(oldp+999,(((2U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY)
                                   ? 1U : 0U)),2);
        bufp->chgCData(oldp+1000,(((4U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY)
                                    ? 1U : 0U)),2);
        bufp->chgCData(oldp+1001,(((8U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY)
                                    ? 1U : 0U)),2);
        bufp->chgCData(oldp+1002,(((0x10U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY)
                                    ? 1U : 0U)),2);
        bufp->chgCData(oldp+1003,(((0x20U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY)
                                    ? 1U : 0U)),2);
        bufp->chgCData(oldp+1004,(((0x40U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY)
                                    ? 1U : 0U)),2);
        bufp->chgCData(oldp+1005,(((0x80U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY)
                                    ? 1U : 0U)),2);
        bufp->chgCData(oldp+1006,(((0x100U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY)
                                    ? 1U : 0U)),2);
        bufp->chgCData(oldp+1007,(((0x200U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY)
                                    ? 1U : 0U)),2);
        bufp->chgCData(oldp+1008,(((0x400U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY)
                                    ? 1U : 0U)),2);
        bufp->chgCData(oldp+1009,(((0x800U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY)
                                    ? 1U : 0U)),2);
        bufp->chgCData(oldp+1010,(((0x1000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY)
                                    ? 1U : 0U)),2);
        bufp->chgCData(oldp+1011,(((0x2000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY)
                                    ? 1U : 0U)),2);
        bufp->chgCData(oldp+1012,(((0x4000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY)
                                    ? 1U : 0U)),2);
        bufp->chgCData(oldp+1013,(((0x8000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY)
                                    ? 1U : 0U)),2);
        bufp->chgCData(oldp+1014,(((0x10000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY)
                                    ? 1U : 0U)),2);
        bufp->chgCData(oldp+1015,(((0x20000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY)
                                    ? 1U : 0U)),2);
        bufp->chgCData(oldp+1016,(((0x40000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY)
                                    ? 1U : 0U)),2);
        bufp->chgCData(oldp+1017,(((0x80000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY)
                                    ? 1U : 0U)),2);
        bufp->chgCData(oldp+1018,(((0x100000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY)
                                    ? 1U : 0U)),2);
        bufp->chgCData(oldp+1019,(((0x200000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY)
                                    ? 1U : 0U)),2);
        bufp->chgCData(oldp+1020,(((0x400000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY)
                                    ? 1U : 0U)),2);
        bufp->chgCData(oldp+1021,(((0x800000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY)
                                    ? 1U : 0U)),2);
        bufp->chgCData(oldp+1022,(((0x1000000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY)
                                    ? 1U : 0U)),2);
        bufp->chgCData(oldp+1023,(((0x2000000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY)
                                    ? 1U : 0U)),2);
        bufp->chgCData(oldp+1024,(((0x4000000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY)
                                    ? 1U : 0U)),2);
        bufp->chgCData(oldp+1025,(((0x8000000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY)
                                    ? 1U : 0U)),2);
        bufp->chgCData(oldp+1026,(((0x10000000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY)
                                    ? 1U : 0U)),2);
        bufp->chgCData(oldp+1027,(((0x20000000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY)
                                    ? 1U : 0U)),2);
        bufp->chgCData(oldp+1028,(((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                                                  >> 0x1eU)))
                                    ? 0x41U : 0x14U)),8);
        bufp->chgCData(oldp+1029,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244268__DOT__s2),4);
        bufp->chgCData(oldp+1030,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244268__DOT__s1),2);
        bufp->chgBit(oldp+1031,((1U & (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC))));
        bufp->chgBit(oldp+1032,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                                               >> 0xaU)))));
        bufp->chgBit(oldp+1033,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                                               >> 0xbU)))));
        bufp->chgBit(oldp+1034,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                                               >> 0xcU)))));
        bufp->chgBit(oldp+1035,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                                               >> 0xdU)))));
        bufp->chgBit(oldp+1036,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                                               >> 0xeU)))));
        bufp->chgBit(oldp+1037,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                                               >> 0xfU)))));
        bufp->chgBit(oldp+1038,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                                               >> 0x10U)))));
        bufp->chgBit(oldp+1039,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                                               >> 0x11U)))));
        bufp->chgBit(oldp+1040,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                                               >> 0x12U)))));
        bufp->chgBit(oldp+1041,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                                               >> 0x13U)))));
        bufp->chgBit(oldp+1042,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                                               >> 1U)))));
        bufp->chgBit(oldp+1043,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+1044,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                                               >> 0x15U)))));
        bufp->chgBit(oldp+1045,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                                               >> 0x16U)))));
        bufp->chgBit(oldp+1046,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                                               >> 0x17U)))));
        bufp->chgBit(oldp+1047,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                                               >> 0x18U)))));
        bufp->chgBit(oldp+1048,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                                               >> 0x19U)))));
        bufp->chgBit(oldp+1049,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                                               >> 0x1aU)))));
        bufp->chgBit(oldp+1050,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                                               >> 0x1bU)))));
        bufp->chgBit(oldp+1051,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                                               >> 0x1cU)))));
        bufp->chgBit(oldp+1052,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                                               >> 0x1dU)))));
        bufp->chgBit(oldp+1053,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                                               >> 2U)))));
        bufp->chgBit(oldp+1054,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                                               >> 3U)))));
        bufp->chgBit(oldp+1055,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                                               >> 4U)))));
        bufp->chgBit(oldp+1056,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                                               >> 5U)))));
        bufp->chgBit(oldp+1057,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                                               >> 6U)))));
        bufp->chgBit(oldp+1058,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                                               >> 7U)))));
        bufp->chgBit(oldp+1059,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                                               >> 8U)))));
        bufp->chgBit(oldp+1060,((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                                               >> 9U)))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
        bufp->chgIData(oldp+1061,(vlSelf->co_sim_mac_32__DOT__golden__DOT__output_bus[0]),32);
        bufp->chgIData(oldp+1062,(vlSelf->co_sim_mac_32__DOT__golden__DOT__output_bus[1]),32);
        bufp->chgIData(oldp+1063,(vlSelf->co_sim_mac_32__DOT__golden__DOT____Vcellout__genblk1__BRA__0__KET____DOT__a0____pinNumber5),32);
        bufp->chgIData(oldp+1064,(vlSelf->co_sim_mac_32__DOT__golden__DOT____Vcellout__genblk1__BRA__1__KET____DOT__a0____pinNumber5),32);
        bufp->chgIData(oldp+1065,((((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241074__Q) 
                                    << 0x1fU) | (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241073__Q) 
                                                  << 0x1eU) 
                                                 | (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241072__Q) 
                                                     << 0x1dU) 
                                                    | (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241071__Q) 
                                                        << 0x1cU) 
                                                       | (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241070__Q) 
                                                           << 0x1bU) 
                                                          | (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241069__Q) 
                                                              << 0x1aU) 
                                                             | (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241068__Q) 
                                                                 << 0x19U) 
                                                                | (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241067__Q) 
                                                                    << 0x18U) 
                                                                   | (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241066__Q) 
                                                                       << 0x17U) 
                                                                      | (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241065__Q) 
                                                                          << 0x16U) 
                                                                         | (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241064__Q) 
                                                                             << 0x15U) 
                                                                            | (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241063__Q) 
                                                                                << 0x14U) 
                                                                               | (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241062__Q) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241061__Q) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241060__Q) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241059__Q) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241058__Q) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241057__Q) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241056__Q) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241055__Q) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241054__Q) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241053__Q) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241052__Q) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241051__Q) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241050__Q) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241049__Q) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241048__Q) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241047__Q) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241046__Q) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241045__Q) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241044__Q) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241043__Q))))))))))))))))))))))))))))))))),32);
        bufp->chgIData(oldp+1066,((((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241106__Q) 
                                    << 0x1fU) | (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241105__Q) 
                                                  << 0x1eU) 
                                                 | (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241104__Q) 
                                                     << 0x1dU) 
                                                    | (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241103__Q) 
                                                        << 0x1cU) 
                                                       | (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241102__Q) 
                                                           << 0x1bU) 
                                                          | (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241101__Q) 
                                                              << 0x1aU) 
                                                             | (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241100__Q) 
                                                                 << 0x19U) 
                                                                | (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241099__Q) 
                                                                    << 0x18U) 
                                                                   | (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241098__Q) 
                                                                       << 0x17U) 
                                                                      | (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241097__Q) 
                                                                          << 0x16U) 
                                                                         | (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241096__Q) 
                                                                             << 0x15U) 
                                                                            | (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241095__Q) 
                                                                                << 0x14U) 
                                                                               | (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241094__Q) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241093__Q) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241092__Q) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241091__Q) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241090__Q) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241089__Q) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241088__Q) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241087__Q) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241086__Q) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241085__Q) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241084__Q) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241083__Q) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241082__Q) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241081__Q) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241080__Q) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241079__Q) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241078__Q) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241077__Q) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241076__Q) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241075__Q))))))))))))))))))))))))))))))))),32);
        bufp->chgBit(oldp+1067,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241043__Q));
        bufp->chgBit(oldp+1068,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241044__Q));
        bufp->chgBit(oldp+1069,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241045__Q));
        bufp->chgBit(oldp+1070,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241046__Q));
        bufp->chgBit(oldp+1071,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241047__Q));
        bufp->chgBit(oldp+1072,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241048__Q));
        bufp->chgBit(oldp+1073,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241049__Q));
        bufp->chgBit(oldp+1074,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241050__Q));
        bufp->chgBit(oldp+1075,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241051__Q));
        bufp->chgBit(oldp+1076,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241052__Q));
        bufp->chgBit(oldp+1077,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241053__Q));
        bufp->chgBit(oldp+1078,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241054__Q));
        bufp->chgBit(oldp+1079,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241055__Q));
        bufp->chgBit(oldp+1080,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241056__Q));
        bufp->chgBit(oldp+1081,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241057__Q));
        bufp->chgBit(oldp+1082,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241058__Q));
        bufp->chgBit(oldp+1083,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241059__Q));
        bufp->chgBit(oldp+1084,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241060__Q));
        bufp->chgBit(oldp+1085,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241061__Q));
        bufp->chgBit(oldp+1086,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241062__Q));
        bufp->chgBit(oldp+1087,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241063__Q));
        bufp->chgBit(oldp+1088,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241064__Q));
        bufp->chgBit(oldp+1089,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241065__Q));
        bufp->chgBit(oldp+1090,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241066__Q));
        bufp->chgBit(oldp+1091,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241067__Q));
        bufp->chgBit(oldp+1092,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241068__Q));
        bufp->chgBit(oldp+1093,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241069__Q));
        bufp->chgBit(oldp+1094,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241070__Q));
        bufp->chgBit(oldp+1095,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241071__Q));
        bufp->chgBit(oldp+1096,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241072__Q));
        bufp->chgBit(oldp+1097,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241073__Q));
        bufp->chgBit(oldp+1098,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241074__Q));
        bufp->chgBit(oldp+1099,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241075__Q));
        bufp->chgBit(oldp+1100,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241076__Q));
        bufp->chgBit(oldp+1101,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241077__Q));
        bufp->chgBit(oldp+1102,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241078__Q));
        bufp->chgBit(oldp+1103,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241079__Q));
        bufp->chgBit(oldp+1104,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241080__Q));
        bufp->chgBit(oldp+1105,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241081__Q));
        bufp->chgBit(oldp+1106,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241082__Q));
        bufp->chgBit(oldp+1107,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241083__Q));
        bufp->chgBit(oldp+1108,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241084__Q));
        bufp->chgBit(oldp+1109,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241085__Q));
        bufp->chgBit(oldp+1110,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241086__Q));
        bufp->chgBit(oldp+1111,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241087__Q));
        bufp->chgBit(oldp+1112,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241088__Q));
        bufp->chgBit(oldp+1113,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241089__Q));
        bufp->chgBit(oldp+1114,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241090__Q));
        bufp->chgBit(oldp+1115,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241091__Q));
        bufp->chgBit(oldp+1116,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241092__Q));
        bufp->chgBit(oldp+1117,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241093__Q));
        bufp->chgBit(oldp+1118,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241094__Q));
        bufp->chgBit(oldp+1119,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241095__Q));
        bufp->chgBit(oldp+1120,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241096__Q));
        bufp->chgBit(oldp+1121,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241097__Q));
        bufp->chgBit(oldp+1122,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241098__Q));
        bufp->chgBit(oldp+1123,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241099__Q));
        bufp->chgBit(oldp+1124,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241100__Q));
        bufp->chgBit(oldp+1125,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241101__Q));
        bufp->chgBit(oldp+1126,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241102__Q));
        bufp->chgBit(oldp+1127,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241103__Q));
        bufp->chgBit(oldp+1128,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241104__Q));
        bufp->chgBit(oldp+1129,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241105__Q));
        bufp->chgBit(oldp+1130,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241106__Q));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[7U])) {
        bufp->chgIData(oldp+1131,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024techmap52__024flatten____VhshJXbdi8WnllpjFwre4tph1UjrTup4fbvkZrW8Ny0Z),18);
        bufp->chgBit(oldp+1132,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__subtract_reg));
        bufp->chgCData(oldp+1133,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__acc_fir_reg),6);
        bufp->chgCData(oldp+1134,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__feedback_reg),3);
        bufp->chgCData(oldp+1135,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__shift_right_reg1),6);
        bufp->chgCData(oldp+1136,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__shift_right_reg2),6);
        bufp->chgBit(oldp+1137,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__round_reg1));
        bufp->chgBit(oldp+1138,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__round_reg2));
        bufp->chgBit(oldp+1139,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__saturate_reg1));
        bufp->chgBit(oldp+1140,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__saturate_reg2));
        bufp->chgBit(oldp+1141,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__load_acc_reg));
        bufp->chgIData(oldp+1142,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__a_reg),20);
        bufp->chgIData(oldp+1143,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__b_reg),18);
        bufp->chgBit(oldp+1144,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__unsigned_a_reg));
        bufp->chgBit(oldp+1145,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__unsigned_b_reg));
        bufp->chgQData(oldp+1146,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__accumulator),64);
        bufp->chgQData(oldp+1148,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out_reg),38);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[8U])) {
        bufp->chgIData(oldp+1150,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024techmap53__024flatten____Vhshxo3f2g22HpVZ6KGU25oz8smEEmsLZQF9DGiVqIYD),18);
        bufp->chgBit(oldp+1151,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__subtract_reg));
        bufp->chgCData(oldp+1152,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__acc_fir_reg),6);
        bufp->chgCData(oldp+1153,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__feedback_reg),3);
        bufp->chgCData(oldp+1154,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__shift_right_reg1),6);
        bufp->chgCData(oldp+1155,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__shift_right_reg2),6);
        bufp->chgBit(oldp+1156,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__round_reg1));
        bufp->chgBit(oldp+1157,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__round_reg2));
        bufp->chgBit(oldp+1158,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__saturate_reg1));
        bufp->chgBit(oldp+1159,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__saturate_reg2));
        bufp->chgBit(oldp+1160,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__load_acc_reg));
        bufp->chgIData(oldp+1161,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__a_reg),20);
        bufp->chgIData(oldp+1162,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__b_reg),18);
        bufp->chgBit(oldp+1163,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__unsigned_a_reg));
        bufp->chgBit(oldp+1164,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__unsigned_b_reg));
        bufp->chgQData(oldp+1165,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__accumulator),64);
        bufp->chgQData(oldp+1167,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out_reg),38);
    }
    bufp->chgBit(oldp+1169,(vlSelf->co_sim_mac_32__DOT__clock0));
    bufp->chgBit(oldp+1170,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241073__Q)
                                    ? ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244269__DOT__s1) 
                                       >> 1U) : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244269__DOT__s1)))));
    bufp->chgBit(oldp+1171,((1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241105__Q)
                                    ? ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244053__DOT__s1) 
                                       >> 1U) : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244053__DOT__s1)))));
    bufp->chgCData(oldp+1172,(((0x20U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 0x1fU)) 
                                         << 5U)) | 
                               (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241106__Q) 
                                 << 4U) | (((IData)(vlSelf->co_sim_mac_32__DOT__reset) 
                                            << 3U) 
                                           | ((4U & 
                                               ((IData)(
                                                        (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                                                         >> 0x1eU)) 
                                                << 2U)) 
                                              | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                              >> 0x1eU)) 
                                                     << 1U)) 
                                                 | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241105__Q))))))),6);
    bufp->chgCData(oldp+1173,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244053__DOT__s3),8);
    bufp->chgCData(oldp+1174,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244053__DOT__s2),4);
    bufp->chgCData(oldp+1175,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244053__DOT__s1),2);
    bufp->chgCData(oldp+1176,(((8U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                                               >> 0x1eU)) 
                                      << 3U)) | ((4U 
                                                  & ((IData)(
                                                             (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                              >> 0x1eU)) 
                                                     << 2U)) 
                                                 | (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241105__Q) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->co_sim_mac_32__DOT__reset))))),4);
    bufp->chgCData(oldp+1177,(((8U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                                               >> 0x1eU)) 
                                      << 3U)) | ((4U 
                                                  & ((IData)(
                                                             (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                              >> 0x1eU)) 
                                                     << 2U)) 
                                                 | (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241073__Q) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->co_sim_mac_32__DOT__reset))))),4);
    bufp->chgCData(oldp+1178,(((0x20U & ((IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 0x1fU)) 
                                         << 5U)) | 
                               (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241074__Q) 
                                 << 4U) | (((IData)(vlSelf->co_sim_mac_32__DOT__reset) 
                                            << 3U) 
                                           | ((4U & 
                                               ((IData)(
                                                        (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                                                         >> 0x1eU)) 
                                                << 2U)) 
                                              | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                              >> 0x1eU)) 
                                                     << 1U)) 
                                                 | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241073__Q))))))),6);
    bufp->chgCData(oldp+1179,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244269__DOT__s3),8);
    bufp->chgCData(oldp+1180,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244269__DOT__s2),4);
    bufp->chgCData(oldp+1181,(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244269__DOT__s1),2);
}

void Vco_sim_mac_32___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_mac_32___024root__trace_cleanup\n"); );
    // Init
    Vco_sim_mac_32___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vco_sim_mac_32___024root*>(voidSelf);
    Vco_sim_mac_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[9U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xaU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xbU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xcU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 0U;
}
