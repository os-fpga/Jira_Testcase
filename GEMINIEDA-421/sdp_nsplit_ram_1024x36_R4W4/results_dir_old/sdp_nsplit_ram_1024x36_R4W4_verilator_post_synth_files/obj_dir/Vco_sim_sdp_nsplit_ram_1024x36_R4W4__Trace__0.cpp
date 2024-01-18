// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_sc.h"
#include "Vco_sim_sdp_nsplit_ram_1024x36_R4W4__Syms.h"


void Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root__trace_chg_sub_0(Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root__trace_chg_top_0\n"); );
    // Init
    Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root*>(voidSelf);
    Vco_sim_sdp_nsplit_ram_1024x36_R4W4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root__trace_chg_sub_0(Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_sdp_nsplit_ram_1024x36_R4W4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgCData(oldp+0,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__gmode),2);
        bufp->chgCData(oldp+1,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gmode),2);
        bufp->chgCData(oldp+2,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__gmode),2);
        bufp->chgCData(oldp+3,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gmode),2);
        bufp->chgCData(oldp+4,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__gmode),2);
        bufp->chgCData(oldp+5,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gmode),2);
        bufp->chgCData(oldp+6,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__gmode),2);
        bufp->chgCData(oldp+7,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gmode),2);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+8,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+9,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+10,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+11,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+12,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__we));
        bufp->chgSData(oldp+13,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__wr_addr),10);
        bufp->chgSData(oldp+14,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__rd_addr),10);
        bufp->chgQData(oldp+15,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__din),36);
        bufp->chgIData(oldp+17,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__mismatch),32);
        bufp->chgCData(oldp+18,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__cycle),7);
        bufp->chgCData(oldp+19,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__i),7);
        bufp->chgSData(oldp+20,(((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__wr_addr) 
                                 << 4U)),15);
        bufp->chgSData(oldp+21,(((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__rd_addr) 
                                 << 4U)),15);
        bufp->chgSData(oldp+22,((0x3ff0U & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__wr_addr) 
                                            << 3U))),14);
        bufp->chgSData(oldp+23,((0x3ff0U & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__rd_addr) 
                                            << 3U))),14);
        bufp->chgCData(oldp+24,((2U & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__wr_addr) 
                                       << 1U))),2);
        bufp->chgIData(oldp+25,(((0x30000U & ((IData)(
                                                      (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__din 
                                                       >> 0x22U)) 
                                              << 0x10U)) 
                                 | (0xffffU & (IData)(
                                                      (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__din 
                                                       >> 0x10U))))),18);
        bufp->chgIData(oldp+26,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+27,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__unnamedblk2__DOT__i),32);
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[3U] 
                      | vlSelf->__Vm_traceActivity[4U]) 
                     | vlSelf->__Vm_traceActivity[5U]))) {
        bufp->chgBit(oldp+28,(((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_wen_a1)
                                ? (((0x400U & ((~ (1U 
                                                   & (((IData)(4U) 
                                                       + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                      >> 0xcU))) 
                                               << 0xaU)) 
                                    | (0x3ffU & (((IData)(4U) 
                                                  + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                 >> 2U))) 
                                   == (0x7ffU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp)))
                                : (((0x400U & ((~ ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr) 
                                                   >> 0xcU)) 
                                               << 0xaU)) 
                                    | (0x3ffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr) 
                                                 >> 2U))) 
                                   == (0x7ffU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp))))));
        bufp->chgBit(oldp+29,(((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_wen_a1)
                                ? ((0x3ffU & ((IData)(1U) 
                                              + (0x3ffU 
                                                 & (((IData)(4U) 
                                                     + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                    >> 2U)))) 
                                   == (0x3ffU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp)))
                                : ((0x3ffU & ((IData)(1U) 
                                              + (0x3ffU 
                                                 & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr) 
                                                    >> 2U)))) 
                                   == (0x3ffU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp))))));
        bufp->chgSData(oldp+30,(((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_wen_a1)
                                  ? (0x7ffU & ((0x3ffU 
                                                & (((IData)(4U) 
                                                    + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                   >> 3U)) 
                                               ^ (0x7ffU 
                                                  & (((IData)(4U) 
                                                      + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                     >> 2U))))
                                  : 0U)),13);
        bufp->chgBit(oldp+31,(((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__full) 
                               & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_wen_a1))));
        bufp->chgSData(oldp+32,(((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_wen_a1)
                                  ? (0xfffU & ((2U 
                                                == (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gmode))
                                                ? (
                                                   (0x7ffU 
                                                    & (((IData)(2U) 
                                                        + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                       >> 1U)) 
                                                   ^ 
                                                   ((IData)(2U) 
                                                    + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)))
                                                : (
                                                   (1U 
                                                    == (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gmode))
                                                    ? 
                                                   (0x7ffU 
                                                    & ((0x3ffU 
                                                        & (((IData)(2U) 
                                                            + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                           >> 2U)) 
                                                       ^ 
                                                       (0x7ffU 
                                                        & (((IData)(2U) 
                                                            + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                           >> 1U))))
                                                    : 
                                                   ((0U 
                                                     == (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gmode))
                                                     ? 
                                                    (0x3ffU 
                                                     & ((0x1ffU 
                                                         & (((IData)(2U) 
                                                             + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                            >> 3U)) 
                                                        ^ 
                                                        (0x3ffU 
                                                         & (((IData)(2U) 
                                                             + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                            >> 2U))))
                                                     : 0U))))
                                  : 0U)),12);
        bufp->chgBit(oldp+33,(((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__full) 
                               & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_wen_a1))));
        bufp->chgSData(oldp+34,(((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_wen_a2)
                                  ? (0xfffU & ((2U 
                                                == (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gmode))
                                                ? (
                                                   (0x7ffU 
                                                    & (((IData)(2U) 
                                                        + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                       >> 1U)) 
                                                   ^ 
                                                   ((IData)(2U) 
                                                    + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)))
                                                : (
                                                   (1U 
                                                    == (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gmode))
                                                    ? 
                                                   (0x7ffU 
                                                    & ((0x3ffU 
                                                        & (((IData)(2U) 
                                                            + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                           >> 2U)) 
                                                       ^ 
                                                       (0x7ffU 
                                                        & (((IData)(2U) 
                                                            + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                           >> 1U))))
                                                    : 
                                                   ((0U 
                                                     == (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gmode))
                                                     ? 
                                                    (0x3ffU 
                                                     & ((0x1ffU 
                                                         & (((IData)(2U) 
                                                             + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                            >> 3U)) 
                                                        ^ 
                                                        (0x3ffU 
                                                         & (((IData)(2U) 
                                                             + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                            >> 2U))))
                                                     : 0U))))
                                  : 0U)),12);
        bufp->chgBit(oldp+35,(((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__full) 
                               & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_wen_a2))));
        bufp->chgBit(oldp+36,(((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_wen_a1)
                                ? (((0x400U & ((~ (1U 
                                                   & (((IData)(4U) 
                                                       + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                      >> 0xcU))) 
                                               << 0xaU)) 
                                    | (0x3ffU & (((IData)(4U) 
                                                  + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                 >> 2U))) 
                                   == (0x7ffU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp)))
                                : (((0x400U & ((~ ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr) 
                                                   >> 0xcU)) 
                                               << 0xaU)) 
                                    | (0x3ffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr) 
                                                 >> 2U))) 
                                   == (0x7ffU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp))))));
        bufp->chgBit(oldp+37,(((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_wen_a1)
                                ? (0x604U > (0x1fffU 
                                             & ((IData)(0x1000U) 
                                                - (
                                                   ((0x1fffU 
                                                     & ((IData)(4U) 
                                                        + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr))) 
                                                    >= 
                                                    (0x1ffcU 
                                                     & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp) 
                                                        << 2U)))
                                                    ? 
                                                   ((0x1fffU 
                                                     & ((IData)(4U) 
                                                        + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr))) 
                                                    - 
                                                    (0x1ffcU 
                                                     & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp) 
                                                        << 2U)))
                                                    : 
                                                   ((IData)(1U) 
                                                    + 
                                                    ((~ 
                                                      (0x1ffcU 
                                                       & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp) 
                                                          << 2U))) 
                                                     + 
                                                     (0x1fffU 
                                                      & ((IData)(4U) 
                                                         + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr)))))))))
                                : (0x604U > (0x1fffU 
                                             & ((IData)(0x1000U) 
                                                - (
                                                   ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr) 
                                                    >= (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__raddr))
                                                    ? 
                                                   ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr) 
                                                    - (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__raddr))
                                                    : 
                                                   ((IData)(1U) 
                                                    + 
                                                    ((~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__raddr)) 
                                                     + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr))))))))));
        bufp->chgBit(oldp+38,(((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_wen_a1)
                                ? ((0x3ffU & ((IData)(1U) 
                                              + (0x3ffU 
                                                 & (((IData)(4U) 
                                                     + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                    >> 2U)))) 
                                   == (0x3ffU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp)))
                                : ((0x3ffU & ((IData)(1U) 
                                              + (0x3ffU 
                                                 & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr) 
                                                    >> 2U)))) 
                                   == (0x3ffU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp))))));
        bufp->chgSData(oldp+39,(((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_wen_a1)
                                  ? (0x7ffU & ((0x3ffU 
                                                & (((IData)(4U) 
                                                    + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                   >> 3U)) 
                                               ^ (0x7ffU 
                                                  & (((IData)(4U) 
                                                      + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                     >> 2U))))
                                  : 0U)),13);
        bufp->chgBit(oldp+40,(((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__full) 
                               & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_wen_a1))));
        bufp->chgBit(oldp+41,(((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__empty) 
                               | (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_wen_b1))));
        bufp->chgBit(oldp+42,((1U & (~ ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__empty) 
                                        | (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_wen_b1))))));
        bufp->chgSData(oldp+43,(((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_wen_a1)
                                  ? (0xfffU & ((2U 
                                                == (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gmode))
                                                ? (
                                                   (0x7ffU 
                                                    & (((IData)(2U) 
                                                        + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                       >> 1U)) 
                                                   ^ 
                                                   ((IData)(2U) 
                                                    + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)))
                                                : (
                                                   (1U 
                                                    == (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gmode))
                                                    ? 
                                                   (0x7ffU 
                                                    & ((0x3ffU 
                                                        & (((IData)(2U) 
                                                            + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                           >> 2U)) 
                                                       ^ 
                                                       (0x7ffU 
                                                        & (((IData)(2U) 
                                                            + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                           >> 1U))))
                                                    : 
                                                   ((0U 
                                                     == (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gmode))
                                                     ? 
                                                    (0x3ffU 
                                                     & ((0x1ffU 
                                                         & (((IData)(2U) 
                                                             + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                            >> 3U)) 
                                                        ^ 
                                                        (0x3ffU 
                                                         & (((IData)(2U) 
                                                             + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                            >> 2U))))
                                                     : 0U))))
                                  : 0U)),12);
        bufp->chgBit(oldp+44,(((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__full) 
                               & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_wen_a1))));
        bufp->chgBit(oldp+45,(((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__empty) 
                               | (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_wen_b2))));
        bufp->chgBit(oldp+46,((1U & (~ ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__empty) 
                                        | (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_wen_b2))))));
        bufp->chgSData(oldp+47,(((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_wen_a2)
                                  ? (0xfffU & ((2U 
                                                == (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gmode))
                                                ? (
                                                   (0x7ffU 
                                                    & (((IData)(2U) 
                                                        + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                       >> 1U)) 
                                                   ^ 
                                                   ((IData)(2U) 
                                                    + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)))
                                                : (
                                                   (1U 
                                                    == (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gmode))
                                                    ? 
                                                   (0x7ffU 
                                                    & ((0x3ffU 
                                                        & (((IData)(2U) 
                                                            + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                           >> 2U)) 
                                                       ^ 
                                                       (0x7ffU 
                                                        & (((IData)(2U) 
                                                            + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                           >> 1U))))
                                                    : 
                                                   ((0U 
                                                     == (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gmode))
                                                     ? 
                                                    (0x3ffU 
                                                     & ((0x1ffU 
                                                         & (((IData)(2U) 
                                                             + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                            >> 3U)) 
                                                        ^ 
                                                        (0x3ffU 
                                                         & (((IData)(2U) 
                                                             + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                            >> 2U))))
                                                     : 0U))))
                                  : 0U)),12);
        bufp->chgBit(oldp+48,(((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__full) 
                               & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_wen_a2))));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[5U]))) {
        bufp->chgIData(oldp+49,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT____Vcellinp__inst1__WDATA_A1_i),18);
        bufp->chgIData(oldp+50,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT____Vcellinp__inst1__WDATA_B1_i),18);
        bufp->chgBit(oldp+51,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_wen_a1));
        bufp->chgBit(oldp+52,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_wen_b1));
        bufp->chgBit(oldp+53,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_wen_a2));
        bufp->chgBit(oldp+54,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_wen_b2));
        bufp->chgIData(oldp+55,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__wmsk_a),18);
        bufp->chgIData(oldp+56,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__wmsk_b),18);
        bufp->chgIData(oldp+57,(((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_wen_a1)
                                  ? (0xffffU & ((0xf000U 
                                                 & (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT____Vcellinp__inst1__WDATA_A1_i 
                                                    << 0xcU)) 
                                                | ((0xf00U 
                                                    & (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT____Vcellinp__inst1__WDATA_A1_i 
                                                       << 8U)) 
                                                   | ((0xf0U 
                                                       & (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT____Vcellinp__inst1__WDATA_A1_i 
                                                          << 4U)) 
                                                      | (0xfU 
                                                         & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT____Vcellinp__inst1__WDATA_A1_i)))))
                                  : 0U)),18);
        bufp->chgIData(oldp+58,(((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_wen_b1)
                                  ? (0xffffU & ((0xf000U 
                                                 & (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT____Vcellinp__inst1__WDATA_B1_i 
                                                    << 0xcU)) 
                                                | ((0xf00U 
                                                    & (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT____Vcellinp__inst1__WDATA_B1_i 
                                                       << 8U)) 
                                                   | ((0xf0U 
                                                       & (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT____Vcellinp__inst1__WDATA_B1_i 
                                                          << 4U)) 
                                                      | (0xfU 
                                                         & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT____Vcellinp__inst1__WDATA_B1_i)))))
                                  : 0U)),18);
        bufp->chgSData(oldp+59,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__ram_addr_a),14);
        bufp->chgSData(oldp+60,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__ram_addr_b),14);
        bufp->chgBit(oldp+61,((1U & (~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_wen_a1)))));
        bufp->chgBit(oldp+62,((1U & (~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_wen_b1)))));
        bufp->chgSData(oldp+63,((0x3ffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__ram_addr_a) 
                                           >> 4U))),10);
        bufp->chgSData(oldp+64,((0x3ffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__ram_addr_b) 
                                           >> 4U))),10);
        bufp->chgIData(oldp+65,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__wmsk_a),18);
        bufp->chgIData(oldp+66,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__wmsk_b),18);
        bufp->chgIData(oldp+67,(((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_wen_a2)
                                  ? (0xffffU & ((0xf000U 
                                                 & (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT____Vcellinp__inst1__WDATA_A1_i 
                                                    << 0xcU)) 
                                                | ((0xf00U 
                                                    & (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT____Vcellinp__inst1__WDATA_A1_i 
                                                       << 8U)) 
                                                   | ((0xf0U 
                                                       & (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT____Vcellinp__inst1__WDATA_A1_i 
                                                          << 4U)) 
                                                      | (0xfU 
                                                         & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT____Vcellinp__inst1__WDATA_A1_i)))))
                                  : 0U)),18);
        bufp->chgIData(oldp+68,(((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_wen_b2)
                                  ? (0xffffU & ((0xf000U 
                                                 & (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT____Vcellinp__inst1__WDATA_B1_i 
                                                    << 0xcU)) 
                                                | ((0xf00U 
                                                    & (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT____Vcellinp__inst1__WDATA_B1_i 
                                                       << 8U)) 
                                                   | ((0xf0U 
                                                       & (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT____Vcellinp__inst1__WDATA_B1_i 
                                                          << 4U)) 
                                                      | (0xfU 
                                                         & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT____Vcellinp__inst1__WDATA_B1_i)))))
                                  : 0U)),18);
        bufp->chgSData(oldp+69,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__ram_addr_a),14);
        bufp->chgSData(oldp+70,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__ram_addr_b),14);
        bufp->chgBit(oldp+71,((1U & (~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_wen_a2)))));
        bufp->chgBit(oldp+72,((1U & (~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_wen_b2)))));
        bufp->chgSData(oldp+73,((0x3ffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__ram_addr_a) 
                                           >> 4U))),10);
        bufp->chgSData(oldp+74,((0x3ffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__ram_addr_b) 
                                           >> 4U))),10);
        bufp->chgIData(oldp+75,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT____Vcellinp__inst1__WDATA_A1_i),18);
        bufp->chgBit(oldp+76,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_wen_a1));
        bufp->chgBit(oldp+77,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_wen_b1));
        bufp->chgBit(oldp+78,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_wen_a2));
        bufp->chgBit(oldp+79,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_wen_b2));
        bufp->chgIData(oldp+80,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__wmsk_a),18);
        bufp->chgIData(oldp+81,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__wmsk_b),18);
        bufp->chgIData(oldp+82,(((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_wen_a1)
                                  ? vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT____Vcellinp__inst1__WDATA_A1_i
                                  : 0U)),18);
        bufp->chgBit(oldp+83,((1U & (~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_wen_a1)))));
        bufp->chgBit(oldp+84,((1U & (~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_wen_b1)))));
        bufp->chgIData(oldp+85,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__wmsk_a),18);
        bufp->chgIData(oldp+86,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__wmsk_b),18);
        bufp->chgIData(oldp+87,(((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_wen_a2)
                                  ? vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT____Vcellinp__inst1__WDATA_A1_i
                                  : 0U)),18);
        bufp->chgBit(oldp+88,((1U & (~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_wen_a2)))));
        bufp->chgBit(oldp+89,((1U & (~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_wen_b2)))));
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[3U] 
                      | vlSelf->__Vm_traceActivity[5U]) 
                     | vlSelf->__Vm_traceActivity[6U]))) {
        bufp->chgBit(oldp+90,(((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_wen_a1)
                                ? (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__f1)
                                : (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__f2))));
        bufp->chgBit(oldp+91,(((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_wen_a1)
                                ? (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__p1)
                                : (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__p2))));
        bufp->chgBit(oldp+92,(((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_wen_a2)
                                ? (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__f1)
                                : (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__f2))));
        bufp->chgBit(oldp+93,(((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_wen_a2)
                                ? (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__p1)
                                : (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__p2))));
        bufp->chgBit(oldp+94,(((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_wen_a1)
                                ? (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__f1)
                                : (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__f2))));
        bufp->chgBit(oldp+95,(((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_wen_a1)
                                ? (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__p1)
                                : (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__p2))));
        bufp->chgBit(oldp+96,(((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_wen_a2)
                                ? (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__f1)
                                : (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__f2))));
        bufp->chgBit(oldp+97,(((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_wen_a2)
                                ? (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__p1)
                                : (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__p2))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+98,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__empty));
        bufp->chgBit(oldp+99,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__epo));
        bufp->chgBit(oldp+100,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__pae));
        bufp->chgBit(oldp+101,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__full));
        bufp->chgBit(oldp+102,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__fmo));
        bufp->chgBit(oldp+103,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__paf));
        bufp->chgBit(oldp+104,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__empty));
        bufp->chgBit(oldp+105,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__epo));
        bufp->chgBit(oldp+106,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__pae));
        bufp->chgBit(oldp+107,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__full));
        bufp->chgBit(oldp+108,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__fmo));
        bufp->chgBit(oldp+109,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__paf));
        bufp->chgBit(oldp+110,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__overflow));
        bufp->chgBit(oldp+111,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__overflow));
        bufp->chgBit(oldp+112,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__overflow));
        bufp->chgBit(oldp+113,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__empty));
        bufp->chgBit(oldp+114,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__epo));
        bufp->chgBit(oldp+115,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__pae));
        bufp->chgBit(oldp+116,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__full));
        bufp->chgBit(oldp+117,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__fmo));
        bufp->chgBit(oldp+118,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__paf));
        bufp->chgSData(oldp+119,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__laddr_a1),15);
        bufp->chgSData(oldp+120,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__laddr_b1),15);
        bufp->chgSData(oldp+121,(((0xffcU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__ff_raddr)) 
                                  | (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__bwl_sel))),12);
        bufp->chgSData(oldp+122,((0xfffU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr))),12);
        bufp->chgCData(oldp+123,(((((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__full) 
                                    << 7U) | (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__fmo) 
                                               << 6U) 
                                              | (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__paf) 
                                                  << 5U) 
                                                 | ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__overflow) 
                                                    << 4U)))) 
                                  | (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__empty) 
                                      << 3U) | (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__epo) 
                                                 << 2U) 
                                                | (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__pae) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__underflow)))))),8);
        bufp->chgSData(oldp+124,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__pushtopop1),13);
        bufp->chgSData(oldp+125,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__pushtopop2),13);
        bufp->chgSData(oldp+126,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__poptopush1),13);
        bufp->chgSData(oldp+127,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__poptopush2),13);
        bufp->chgSData(oldp+128,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__gcout_reg),13);
        bufp->chgCData(oldp+129,((((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__empty) 
                                   << 3U) | (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__epo) 
                                              << 2U) 
                                             | (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__pae) 
                                                 << 1U) 
                                                | (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__underflow))))),4);
        bufp->chgBit(oldp+130,(((0x7ffU & (((IData)(4U) 
                                            + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__raddr)) 
                                           >> 2U)) 
                                == (0x7ffU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__tmp)))));
        bufp->chgBit(oldp+131,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__e2));
        bufp->chgBit(oldp+132,((((IData)(1U) + (0x7ffU 
                                                & (((IData)(4U) 
                                                    + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__raddr)) 
                                                   >> 2U))) 
                                == (0x7ffU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__tmp)))));
        bufp->chgBit(oldp+133,((((IData)(1U) + (0x7ffU 
                                                & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__raddr) 
                                                   >> 2U))) 
                                == (0x7ffU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__tmp)))));
        bufp->chgSData(oldp+134,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__ff_raddr),12);
        bufp->chgSData(oldp+135,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__waddr),13);
        bufp->chgSData(oldp+136,((0x1ffcU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__tmp) 
                                             << 2U))),13);
        bufp->chgSData(oldp+137,((0xfffU & ((IData)(4U) 
                                            + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__ff_raddr)))),12);
        bufp->chgSData(oldp+138,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__tmp),13);
        bufp->chgSData(oldp+139,((0x3fffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__waddr) 
                                             - (0x1fffU 
                                                & ((IData)(4U) 
                                                   + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__raddr)))))),14);
        bufp->chgSData(oldp+140,((0x3fffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__waddr) 
                                             - (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__raddr)))),14);
        bufp->chgCData(oldp+141,((((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__full) 
                                   << 3U) | (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__fmo) 
                                              << 2U) 
                                             | (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__paf) 
                                                 << 1U) 
                                                | (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__overflow))))),4);
        bufp->chgBit(oldp+142,(((0x3ffU & ((IData)(1U) 
                                           + (0x3ffU 
                                              & (((IData)(4U) 
                                                  + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                 >> 2U)))) 
                                == (0x3ffU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp)))));
        bufp->chgBit(oldp+143,(((0x3ffU & ((IData)(1U) 
                                           + (0x3ffU 
                                              & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr) 
                                                 >> 2U)))) 
                                == (0x3ffU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp)))));
        bufp->chgBit(oldp+144,((((0x400U & ((~ (1U 
                                                & (((IData)(4U) 
                                                    + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                   >> 0xcU))) 
                                            << 0xaU)) 
                                 | (0x3ffU & (((IData)(4U) 
                                               + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                              >> 2U))) 
                                == (0x7ffU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp)))));
        bufp->chgBit(oldp+145,((((0x400U & ((~ ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr) 
                                                >> 0xcU)) 
                                            << 0xaU)) 
                                 | (0x3ffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr) 
                                              >> 2U))) 
                                == (0x7ffU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp)))));
        bufp->chgSData(oldp+146,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr),13);
        bufp->chgSData(oldp+147,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__raddr),13);
        bufp->chgSData(oldp+148,((0x1ffcU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp) 
                                             << 2U))),13);
        bufp->chgSData(oldp+149,((0x1fffU & ((IData)(4U) 
                                             + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr)))),13);
        bufp->chgSData(oldp+150,((0x1fffU & ((0xfffU 
                                              & (((IData)(4U) 
                                                  + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                 >> 1U)) 
                                             ^ ((IData)(4U) 
                                                + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr))))),13);
        bufp->chgSData(oldp+151,((0xfffU & ((0x7ffU 
                                             & (((IData)(4U) 
                                                 + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                >> 2U)) 
                                            ^ (0xfffU 
                                               & (((IData)(4U) 
                                                   + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                  >> 1U))))),12);
        bufp->chgSData(oldp+152,((0x7ffU & ((0x3ffU 
                                             & (((IData)(4U) 
                                                 + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                >> 3U)) 
                                            ^ (0x7ffU 
                                               & (((IData)(4U) 
                                                   + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                  >> 2U))))),11);
        bufp->chgSData(oldp+153,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp),13);
        bufp->chgSData(oldp+154,((0x1fffU & ((IData)(0x1000U) 
                                             - (((0x1fffU 
                                                  & ((IData)(4U) 
                                                     + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr))) 
                                                 >= 
                                                 (0x1ffcU 
                                                  & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp) 
                                                     << 2U)))
                                                 ? 
                                                ((0x1fffU 
                                                  & ((IData)(4U) 
                                                     + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr))) 
                                                 - 
                                                 (0x1ffcU 
                                                  & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp) 
                                                     << 2U)))
                                                 : 
                                                ((IData)(1U) 
                                                 + 
                                                 ((~ 
                                                   (0x1ffcU 
                                                    & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp) 
                                                       << 2U))) 
                                                  + 
                                                  (0x1fffU 
                                                   & ((IData)(4U) 
                                                      + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr))))))))),13);
        bufp->chgSData(oldp+155,((0x1fffU & ((IData)(0x1000U) 
                                             - (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr) 
                                                 >= (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__raddr))
                                                 ? 
                                                ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr) 
                                                 - (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__raddr))
                                                 : 
                                                ((IData)(1U) 
                                                 + 
                                                 ((~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__raddr)) 
                                                  + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr))))))),13);
        bufp->chgCData(oldp+156,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__addr_a_d),5);
        bufp->chgCData(oldp+157,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__addr_b_d),5);
        bufp->chgSData(oldp+158,(((0x7feU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__ff_raddr)) 
                                  | (1U & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__bwl_sel)))),11);
        bufp->chgSData(oldp+159,((0x7ffU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr))),11);
        bufp->chgCData(oldp+160,(((((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__full) 
                                    << 7U) | (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__fmo) 
                                               << 6U) 
                                              | (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__paf) 
                                                  << 5U) 
                                                 | ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__overflow) 
                                                    << 4U)))) 
                                  | (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__empty) 
                                      << 3U) | (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__epo) 
                                                 << 2U) 
                                                | (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__pae) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__underflow)))))),8);
        bufp->chgSData(oldp+161,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__pushtopop1),12);
        bufp->chgSData(oldp+162,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__pushtopop2),12);
        bufp->chgSData(oldp+163,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__poptopush1),12);
        bufp->chgSData(oldp+164,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__poptopush2),12);
        bufp->chgSData(oldp+165,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gcout_reg),12);
        bufp->chgCData(oldp+166,((((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__empty) 
                                   << 3U) | (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__epo) 
                                              << 2U) 
                                             | (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__pae) 
                                                 << 1U) 
                                                | (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__underflow))))),4);
        bufp->chgSData(oldp+167,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__ff_raddr),11);
        bufp->chgSData(oldp+168,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr),12);
        bufp->chgSData(oldp+169,((0x7ffU & ((IData)(2U) 
                                            + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__ff_raddr)))),11);
        bufp->chgSData(oldp+170,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp),12);
        bufp->chgSData(oldp+171,((0x1fffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr) 
                                             - (0xfffU 
                                                & ((IData)(2U) 
                                                   + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)))))),13);
        bufp->chgSData(oldp+172,((0x1fffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr) 
                                             - (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)))),13);
        bufp->chgCData(oldp+173,((((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__full) 
                                   << 3U) | (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__fmo) 
                                              << 2U) 
                                             | (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__paf) 
                                                 << 1U) 
                                                | (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__overflow))))),4);
        bufp->chgSData(oldp+174,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr),12);
        bufp->chgSData(oldp+175,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr),12);
        bufp->chgSData(oldp+176,((0xfffU & ((IData)(2U) 
                                            + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)))),12);
        bufp->chgSData(oldp+177,((0xfffU & ((0x7ffU 
                                             & (((IData)(2U) 
                                                 + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                >> 1U)) 
                                            ^ ((IData)(2U) 
                                               + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr))))),12);
        bufp->chgSData(oldp+178,((0x7ffU & ((0x3ffU 
                                             & (((IData)(2U) 
                                                 + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                >> 2U)) 
                                            ^ (0x7ffU 
                                               & (((IData)(2U) 
                                                   + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                  >> 1U))))),11);
        bufp->chgSData(oldp+179,((0x3ffU & ((0x1ffU 
                                             & (((IData)(2U) 
                                                 + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                >> 3U)) 
                                            ^ (0x3ffU 
                                               & (((IData)(2U) 
                                                   + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                  >> 2U))))),10);
        bufp->chgSData(oldp+180,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp),12);
        bufp->chgSData(oldp+181,((0xfffU & ((IData)(0x800U) 
                                            - (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr) 
                                                >= (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr))
                                                ? ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr) 
                                                   - (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr))
                                                : ((IData)(1U) 
                                                   + 
                                                   ((~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr)) 
                                                    + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr))))))),12);
        bufp->chgSData(oldp+182,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a),10);
        bufp->chgSData(oldp+183,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b),10);
        bufp->chgIData(oldp+184,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwdata_a),18);
        bufp->chgIData(oldp+185,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwdata_b),18);
        bufp->chgIData(oldp+186,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwmsk_a),18);
        bufp->chgIData(oldp+187,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwmsk_b),18);
        bufp->chgCData(oldp+188,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__addr_a_d),5);
        bufp->chgCData(oldp+189,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__addr_b_d),5);
        bufp->chgSData(oldp+190,(((0x7feU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__ff_raddr)) 
                                  | (1U & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__bwl_sel)))),11);
        bufp->chgSData(oldp+191,((0x7ffU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr))),11);
        bufp->chgCData(oldp+192,(((((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__full) 
                                    << 7U) | (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__fmo) 
                                               << 6U) 
                                              | (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__paf) 
                                                  << 5U) 
                                                 | ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__overflow) 
                                                    << 4U)))) 
                                  | (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__empty) 
                                      << 3U) | (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__epo) 
                                                 << 2U) 
                                                | (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__pae) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__underflow)))))),8);
        bufp->chgSData(oldp+193,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__pushtopop1),12);
        bufp->chgSData(oldp+194,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__pushtopop2),12);
        bufp->chgSData(oldp+195,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__poptopush1),12);
        bufp->chgSData(oldp+196,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__poptopush2),12);
        bufp->chgSData(oldp+197,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gcout_reg),12);
        bufp->chgCData(oldp+198,((((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__empty) 
                                   << 3U) | (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__epo) 
                                              << 2U) 
                                             | (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__pae) 
                                                 << 1U) 
                                                | (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__underflow))))),4);
        bufp->chgSData(oldp+199,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__ff_raddr),11);
        bufp->chgSData(oldp+200,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr),12);
        bufp->chgSData(oldp+201,((0x7ffU & ((IData)(2U) 
                                            + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__ff_raddr)))),11);
        bufp->chgSData(oldp+202,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp),12);
        bufp->chgSData(oldp+203,((0x1fffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr) 
                                             - (0xfffU 
                                                & ((IData)(2U) 
                                                   + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)))))),13);
        bufp->chgSData(oldp+204,((0x1fffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr) 
                                             - (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)))),13);
        bufp->chgCData(oldp+205,((((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__full) 
                                   << 3U) | (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__fmo) 
                                              << 2U) 
                                             | (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__paf) 
                                                 << 1U) 
                                                | (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__overflow))))),4);
        bufp->chgSData(oldp+206,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr),12);
        bufp->chgSData(oldp+207,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr),12);
        bufp->chgSData(oldp+208,((0xfffU & ((IData)(2U) 
                                            + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)))),12);
        bufp->chgSData(oldp+209,((0xfffU & ((0x7ffU 
                                             & (((IData)(2U) 
                                                 + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                >> 1U)) 
                                            ^ ((IData)(2U) 
                                               + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr))))),12);
        bufp->chgSData(oldp+210,((0x7ffU & ((0x3ffU 
                                             & (((IData)(2U) 
                                                 + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                >> 2U)) 
                                            ^ (0x7ffU 
                                               & (((IData)(2U) 
                                                   + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                  >> 1U))))),11);
        bufp->chgSData(oldp+211,((0x3ffU & ((0x1ffU 
                                             & (((IData)(2U) 
                                                 + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                >> 3U)) 
                                            ^ (0x3ffU 
                                               & (((IData)(2U) 
                                                   + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                  >> 2U))))),10);
        bufp->chgSData(oldp+212,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp),12);
        bufp->chgSData(oldp+213,((0xfffU & ((IData)(0x800U) 
                                            - (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr) 
                                                >= (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr))
                                                ? ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr) 
                                                   - (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr))
                                                : ((IData)(1U) 
                                                   + 
                                                   ((~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr)) 
                                                    + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr))))))),12);
        bufp->chgSData(oldp+214,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a),10);
        bufp->chgSData(oldp+215,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b),10);
        bufp->chgIData(oldp+216,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwdata_a),18);
        bufp->chgIData(oldp+217,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwdata_b),18);
        bufp->chgIData(oldp+218,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwmsk_a),18);
        bufp->chgIData(oldp+219,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwmsk_b),18);
        bufp->chgIData(oldp+220,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT____Vcellout__inst1__RDATA_A1_o),18);
        bufp->chgBit(oldp+221,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__empty));
        bufp->chgBit(oldp+222,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__epo));
        bufp->chgBit(oldp+223,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__pae));
        bufp->chgBit(oldp+224,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__full));
        bufp->chgBit(oldp+225,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__fmo));
        bufp->chgBit(oldp+226,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__paf));
        bufp->chgBit(oldp+227,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__empty));
        bufp->chgBit(oldp+228,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__epo));
        bufp->chgBit(oldp+229,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__pae));
        bufp->chgBit(oldp+230,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__full));
        bufp->chgBit(oldp+231,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__fmo));
        bufp->chgBit(oldp+232,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__paf));
        bufp->chgBit(oldp+233,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__underflow));
        bufp->chgBit(oldp+234,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__overflow));
        bufp->chgBit(oldp+235,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__underflow));
        bufp->chgBit(oldp+236,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__overflow));
        bufp->chgBit(oldp+237,((1U & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT____Vcellout__fifo36_ctl__fflags))));
        bufp->chgBit(oldp+238,((1U & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT____Vcellout__fifo36_ctl__fflags) 
                                      >> 4U))));
        bufp->chgBit(oldp+239,((1U & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT____Vcellout__fifo36_ctl__fflags) 
                                      >> 3U))));
        bufp->chgBit(oldp+240,((1U & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT____Vcellout__fifo36_ctl__fflags) 
                                      >> 2U))));
        bufp->chgBit(oldp+241,((1U & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT____Vcellout__fifo36_ctl__fflags) 
                                      >> 1U))));
        bufp->chgBit(oldp+242,((1U & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT____Vcellout__fifo36_ctl__fflags) 
                                      >> 7U))));
        bufp->chgBit(oldp+243,((1U & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT____Vcellout__fifo36_ctl__fflags) 
                                      >> 6U))));
        bufp->chgBit(oldp+244,((1U & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT____Vcellout__fifo36_ctl__fflags) 
                                      >> 5U))));
        bufp->chgSData(oldp+245,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__laddr_a1),15);
        bufp->chgSData(oldp+246,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__laddr_b1),15);
        bufp->chgSData(oldp+247,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_addr_a1),14);
        bufp->chgSData(oldp+248,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_addr_b1),14);
        bufp->chgSData(oldp+249,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_addr_a2),14);
        bufp->chgSData(oldp+250,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_addr_b2),14);
        bufp->chgBit(oldp+251,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__empty));
        bufp->chgSData(oldp+252,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ff_raddr),12);
        bufp->chgSData(oldp+253,((0xfffU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr))),12);
        bufp->chgCData(oldp+254,((3U & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr))),2);
        bufp->chgCData(oldp+255,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT____Vcellout__fifo36_ctl__fflags),8);
        bufp->chgSData(oldp+256,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__pushtopop1),13);
        bufp->chgSData(oldp+257,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__pushtopop2),13);
        bufp->chgSData(oldp+258,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__poptopush1),13);
        bufp->chgSData(oldp+259,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__poptopush2),13);
        bufp->chgSData(oldp+260,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__gcout_reg),13);
        bufp->chgCData(oldp+261,((((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__empty) 
                                   << 3U) | (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__epo) 
                                              << 2U) 
                                             | (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__pae) 
                                                 << 1U) 
                                                | (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__underflow))))),4);
        bufp->chgBit(oldp+262,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__epo));
        bufp->chgBit(oldp+263,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__pae));
        bufp->chgBit(oldp+264,(((0x7ffU & (((IData)(4U) 
                                            + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__raddr)) 
                                           >> 2U)) 
                                == (0x7ffU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__tmp)))));
        bufp->chgBit(oldp+265,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__e2));
        bufp->chgBit(oldp+266,((((IData)(1U) + (0x7ffU 
                                                & (((IData)(4U) 
                                                    + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__raddr)) 
                                                   >> 2U))) 
                                == (0x7ffU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__tmp)))));
        bufp->chgBit(oldp+267,((((IData)(1U) + (0x7ffU 
                                                & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__raddr) 
                                                   >> 2U))) 
                                == (0x7ffU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__tmp)))));
        bufp->chgBit(oldp+268,((0x260U > (0x3fffU & 
                                          ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__waddr) 
                                           - (0x1fffU 
                                              & ((IData)(4U) 
                                                 + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__raddr))))))));
        bufp->chgBit(oldp+269,((0x260U > (0x3fffU & 
                                          ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__waddr) 
                                           - (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__raddr))))));
        bufp->chgSData(oldp+270,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__ff_raddr),12);
        bufp->chgSData(oldp+271,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__waddr),13);
        bufp->chgSData(oldp+272,((0x1ffcU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__tmp) 
                                             << 2U))),13);
        bufp->chgSData(oldp+273,((0xfffU & ((IData)(4U) 
                                            + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__ff_raddr)))),12);
        bufp->chgSData(oldp+274,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__tmp),13);
        bufp->chgSData(oldp+275,((0x3fffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__waddr) 
                                             - (0x1fffU 
                                                & ((IData)(4U) 
                                                   + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__raddr)))))),14);
        bufp->chgSData(oldp+276,((0x3fffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__waddr) 
                                             - (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__raddr)))),14);
        bufp->chgCData(oldp+277,((((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__full) 
                                   << 3U) | (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__fmo) 
                                              << 2U) 
                                             | (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__paf) 
                                                 << 1U) 
                                                | (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__overflow))))),4);
        bufp->chgBit(oldp+278,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__full));
        bufp->chgBit(oldp+279,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__paf));
        bufp->chgBit(oldp+280,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__fmo));
        bufp->chgBit(oldp+281,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__overflow));
        bufp->chgBit(oldp+282,(((0x3ffU & ((IData)(1U) 
                                           + (0x3ffU 
                                              & (((IData)(4U) 
                                                  + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                 >> 2U)))) 
                                == (0x3ffU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp)))));
        bufp->chgBit(oldp+283,(((0x3ffU & ((IData)(1U) 
                                           + (0x3ffU 
                                              & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr) 
                                                 >> 2U)))) 
                                == (0x3ffU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp)))));
        bufp->chgBit(oldp+284,((((0x400U & ((~ (1U 
                                                & (((IData)(4U) 
                                                    + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                   >> 0xcU))) 
                                            << 0xaU)) 
                                 | (0x3ffU & (((IData)(4U) 
                                               + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                              >> 2U))) 
                                == (0x7ffU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp)))));
        bufp->chgBit(oldp+285,((((0x400U & ((~ ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr) 
                                                >> 0xcU)) 
                                            << 0xaU)) 
                                 | (0x3ffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr) 
                                              >> 2U))) 
                                == (0x7ffU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp)))));
        bufp->chgBit(oldp+286,((0x604U > (0x1fffU & 
                                          ((IData)(0x1000U) 
                                           - (((0x1fffU 
                                                & ((IData)(4U) 
                                                   + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr))) 
                                               >= (0x1ffcU 
                                                   & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp) 
                                                      << 2U)))
                                               ? ((0x1fffU 
                                                   & ((IData)(4U) 
                                                      + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr))) 
                                                  - 
                                                  (0x1ffcU 
                                                   & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp) 
                                                      << 2U)))
                                               : ((IData)(1U) 
                                                  + 
                                                  ((~ 
                                                    (0x1ffcU 
                                                     & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp) 
                                                        << 2U))) 
                                                   + 
                                                   (0x1fffU 
                                                    & ((IData)(4U) 
                                                       + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr)))))))))));
        bufp->chgBit(oldp+287,((0x604U > (0x1fffU & 
                                          ((IData)(0x1000U) 
                                           - (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr) 
                                               >= (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__raddr))
                                               ? ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr) 
                                                  - (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__raddr))
                                               : ((IData)(1U) 
                                                  + 
                                                  ((~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__raddr)) 
                                                   + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr)))))))));
        bufp->chgSData(oldp+288,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr),13);
        bufp->chgSData(oldp+289,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__raddr),13);
        bufp->chgSData(oldp+290,((0x1ffcU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp) 
                                             << 2U))),13);
        bufp->chgSData(oldp+291,((0x1fffU & ((IData)(4U) 
                                             + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr)))),13);
        bufp->chgSData(oldp+292,((0x1fffU & ((0xfffU 
                                              & (((IData)(4U) 
                                                  + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                 >> 1U)) 
                                             ^ ((IData)(4U) 
                                                + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr))))),13);
        bufp->chgSData(oldp+293,((0xfffU & ((0x7ffU 
                                             & (((IData)(4U) 
                                                 + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                >> 2U)) 
                                            ^ (0xfffU 
                                               & (((IData)(4U) 
                                                   + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                  >> 1U))))),12);
        bufp->chgSData(oldp+294,((0x7ffU & ((0x3ffU 
                                             & (((IData)(4U) 
                                                 + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                >> 3U)) 
                                            ^ (0x7ffU 
                                               & (((IData)(4U) 
                                                   + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                  >> 2U))))),11);
        bufp->chgSData(oldp+295,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp),13);
        bufp->chgSData(oldp+296,((0x1fffU & ((IData)(0x1000U) 
                                             - (((0x1fffU 
                                                  & ((IData)(4U) 
                                                     + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr))) 
                                                 >= 
                                                 (0x1ffcU 
                                                  & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp) 
                                                     << 2U)))
                                                 ? 
                                                ((0x1fffU 
                                                  & ((IData)(4U) 
                                                     + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr))) 
                                                 - 
                                                 (0x1ffcU 
                                                  & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp) 
                                                     << 2U)))
                                                 : 
                                                ((IData)(1U) 
                                                 + 
                                                 ((~ 
                                                   (0x1ffcU 
                                                    & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp) 
                                                       << 2U))) 
                                                  + 
                                                  (0x1fffU 
                                                   & ((IData)(4U) 
                                                      + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr))))))))),13);
        bufp->chgSData(oldp+297,((0x1fffU & ((IData)(0x1000U) 
                                             - (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr) 
                                                 >= (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__raddr))
                                                 ? 
                                                ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr) 
                                                 - (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__raddr))
                                                 : 
                                                ((IData)(1U) 
                                                 + 
                                                 ((~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__raddr)) 
                                                  + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr))))))),13);
        bufp->chgCData(oldp+298,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__addr_a_d),5);
        bufp->chgCData(oldp+299,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__addr_b_d),5);
        bufp->chgBit(oldp+300,(((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__empty) 
                                | (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__empty))));
        bufp->chgSData(oldp+301,(((0x7feU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__ff_raddr)) 
                                  | (1U & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__bwl_sel)))),11);
        bufp->chgSData(oldp+302,((0x7ffU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr))),11);
        bufp->chgSData(oldp+303,(((0x3ff0U & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_addr_a1)) 
                                  | (0xfU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__addr_a_d)))),14);
        bufp->chgSData(oldp+304,(((0x3ff0U & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_addr_b1)) 
                                  | (0xfU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__addr_b_d)))),14);
        bufp->chgCData(oldp+305,((0xfU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_addr_a1))),4);
        bufp->chgCData(oldp+306,((0xfU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_addr_b1))),4);
        bufp->chgCData(oldp+307,(((((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__full) 
                                    << 7U) | (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__fmo) 
                                               << 6U) 
                                              | (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__paf) 
                                                  << 5U) 
                                                 | ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__overflow) 
                                                    << 4U)))) 
                                  | (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__empty) 
                                      << 3U) | (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__epo) 
                                                 << 2U) 
                                                | (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__pae) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__underflow)))))),8);
        bufp->chgSData(oldp+308,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__pushtopop1),12);
        bufp->chgSData(oldp+309,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__pushtopop2),12);
        bufp->chgSData(oldp+310,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__poptopush1),12);
        bufp->chgSData(oldp+311,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__poptopush2),12);
        bufp->chgSData(oldp+312,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gcout_reg),12);
        bufp->chgSData(oldp+313,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__gcout_reg),12);
        bufp->chgCData(oldp+314,((((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__empty) 
                                   << 3U) | (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__epo) 
                                              << 2U) 
                                             | (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__pae) 
                                                 << 1U) 
                                                | (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__underflow))))),4);
        bufp->chgBit(oldp+315,((0x130U > (0x1fffU & 
                                          ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr) 
                                           - (0xfffU 
                                              & ((IData)(2U) 
                                                 + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr))))))));
        bufp->chgBit(oldp+316,((0x130U > (0x1fffU & 
                                          ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr) 
                                           - (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr))))));
        bufp->chgCData(oldp+317,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__bwl_sel),2);
        bufp->chgSData(oldp+318,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__ff_raddr),11);
        bufp->chgSData(oldp+319,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr),12);
        bufp->chgSData(oldp+320,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr),12);
        bufp->chgSData(oldp+321,(((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__empty)
                                   ? (0xfffU & ((2U 
                                                 == (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__gmode))
                                                 ? 
                                                ((0x7ffU 
                                                  & (((IData)(2U) 
                                                      + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)) 
                                                     >> 1U)) 
                                                 ^ 
                                                 ((IData)(2U) 
                                                  + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)))
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__gmode))
                                                  ? 
                                                 (0x7ffU 
                                                  & ((0x3ffU 
                                                      & (((IData)(2U) 
                                                          + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)) 
                                                         >> 2U)) 
                                                     ^ 
                                                     (0x7ffU 
                                                      & (((IData)(2U) 
                                                          + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)) 
                                                         >> 1U))))
                                                  : 
                                                 ((0U 
                                                   == (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__gmode))
                                                   ? 
                                                  (0x3ffU 
                                                   & ((0x1ffU 
                                                       & (((IData)(2U) 
                                                           + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)) 
                                                          >> 3U)) 
                                                      ^ 
                                                      (0x3ffU 
                                                       & (((IData)(2U) 
                                                           + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)) 
                                                          >> 2U))))
                                                   : 0U))))
                                   : 0U)),12);
        bufp->chgBit(oldp+322,((((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__empty) 
                                 & (~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__empty)))
                                 ? (0x130U > (0x1fffU 
                                              & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr) 
                                                 - 
                                                 (0xfffU 
                                                  & ((IData)(2U) 
                                                     + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr))))))
                                 : (0x130U > (0x1fffU 
                                              & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr) 
                                                 - (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)))))));
        bufp->chgSData(oldp+323,((0x3ffU & ((0x1ffU 
                                             & (((IData)(2U) 
                                                 + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)) 
                                                >> 3U)) 
                                            ^ (0x3ffU 
                                               & (((IData)(2U) 
                                                   + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)) 
                                                  >> 2U))))),10);
        bufp->chgSData(oldp+324,((0x7ffU & ((0x3ffU 
                                             & (((IData)(2U) 
                                                 + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)) 
                                                >> 2U)) 
                                            ^ (0x7ffU 
                                               & (((IData)(2U) 
                                                   + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)) 
                                                  >> 1U))))),11);
        bufp->chgSData(oldp+325,((0xfffU & ((0x7ffU 
                                             & (((IData)(2U) 
                                                 + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)) 
                                                >> 1U)) 
                                            ^ ((IData)(2U) 
                                               + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr))))),12);
        bufp->chgSData(oldp+326,((0xfffU & ((IData)(2U) 
                                            + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)))),12);
        bufp->chgSData(oldp+327,((0x7ffU & ((IData)(2U) 
                                            + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__ff_raddr)))),11);
        bufp->chgSData(oldp+328,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp),12);
        bufp->chgSData(oldp+329,((0x1fffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr) 
                                             - (0xfffU 
                                                & ((IData)(2U) 
                                                   + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)))))),13);
        bufp->chgSData(oldp+330,((0x1fffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr) 
                                             - (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)))),13);
        bufp->chgCData(oldp+331,((((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__full) 
                                   << 3U) | (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__fmo) 
                                              << 2U) 
                                             | (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__paf) 
                                                 << 1U) 
                                                | (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__overflow))))),4);
        bufp->chgBit(oldp+332,((0x302U > (0xfffU & 
                                          ((IData)(0x800U) 
                                           - (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr) 
                                               >= (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr))
                                               ? ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr) 
                                                  - (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr))
                                               : ((IData)(1U) 
                                                  + 
                                                  ((~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr)) 
                                                   + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)))))))));
        bufp->chgSData(oldp+333,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr),12);
        bufp->chgSData(oldp+334,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr),12);
        bufp->chgSData(oldp+335,((0xfffU & ((IData)(2U) 
                                            + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)))),12);
        bufp->chgSData(oldp+336,((0xfffU & ((0x7ffU 
                                             & (((IData)(2U) 
                                                 + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                >> 1U)) 
                                            ^ ((IData)(2U) 
                                               + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr))))),12);
        bufp->chgSData(oldp+337,((0x7ffU & ((0x3ffU 
                                             & (((IData)(2U) 
                                                 + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                >> 2U)) 
                                            ^ (0x7ffU 
                                               & (((IData)(2U) 
                                                   + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                  >> 1U))))),11);
        bufp->chgSData(oldp+338,((0x3ffU & ((0x1ffU 
                                             & (((IData)(2U) 
                                                 + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                >> 3U)) 
                                            ^ (0x3ffU 
                                               & (((IData)(2U) 
                                                   + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                  >> 2U))))),10);
        bufp->chgSData(oldp+339,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp),12);
        bufp->chgSData(oldp+340,((0xfffU & ((IData)(0x800U) 
                                            - (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr) 
                                                >= (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr))
                                                ? ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr) 
                                                   - (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr))
                                                : ((IData)(1U) 
                                                   + 
                                                   ((~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr)) 
                                                    + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr))))))),12);
        bufp->chgSData(oldp+341,((0x3ffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_addr_a1) 
                                            >> 4U))),10);
        bufp->chgSData(oldp+342,((0x3ffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_addr_b1) 
                                            >> 4U))),10);
        bufp->chgSData(oldp+343,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a),10);
        bufp->chgSData(oldp+344,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b),10);
        bufp->chgIData(oldp+345,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwdata_a),18);
        bufp->chgIData(oldp+346,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwdata_b),18);
        bufp->chgIData(oldp+347,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwmsk_a),18);
        bufp->chgIData(oldp+348,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwmsk_b),18);
        bufp->chgCData(oldp+349,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__addr_a_d),5);
        bufp->chgCData(oldp+350,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__addr_b_d),5);
        bufp->chgBit(oldp+351,(((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__empty) 
                                | (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__empty))));
        bufp->chgSData(oldp+352,(((0x7feU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__ff_raddr)) 
                                  | (1U & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__bwl_sel)))),11);
        bufp->chgSData(oldp+353,((0x7ffU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr))),11);
        bufp->chgSData(oldp+354,(((0x3ff0U & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_addr_a2)) 
                                  | (0xfU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__addr_a_d)))),14);
        bufp->chgSData(oldp+355,(((0x3ff0U & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_addr_b2)) 
                                  | (0xfU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__addr_b_d)))),14);
        bufp->chgCData(oldp+356,((0xfU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_addr_a2))),4);
        bufp->chgCData(oldp+357,((0xfU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_addr_b2))),4);
        bufp->chgCData(oldp+358,(((((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__full) 
                                    << 7U) | (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__fmo) 
                                               << 6U) 
                                              | (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__paf) 
                                                  << 5U) 
                                                 | ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__overflow) 
                                                    << 4U)))) 
                                  | (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__empty) 
                                      << 3U) | (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__epo) 
                                                 << 2U) 
                                                | (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__pae) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__underflow)))))),8);
        bufp->chgSData(oldp+359,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__pushtopop1),12);
        bufp->chgSData(oldp+360,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__pushtopop2),12);
        bufp->chgSData(oldp+361,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__poptopush1),12);
        bufp->chgSData(oldp+362,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__poptopush2),12);
        bufp->chgSData(oldp+363,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gcout_reg),12);
        bufp->chgSData(oldp+364,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__gcout_reg),12);
        bufp->chgCData(oldp+365,((((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__empty) 
                                   << 3U) | (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__epo) 
                                              << 2U) 
                                             | (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__pae) 
                                                 << 1U) 
                                                | (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__underflow))))),4);
        bufp->chgBit(oldp+366,((0x18U > (0x1fffU & 
                                         ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr) 
                                          - (0xfffU 
                                             & ((IData)(2U) 
                                                + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr))))))));
        bufp->chgBit(oldp+367,((0x18U > (0x1fffU & 
                                         ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr) 
                                          - (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr))))));
        bufp->chgCData(oldp+368,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__bwl_sel),2);
        bufp->chgSData(oldp+369,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__ff_raddr),11);
        bufp->chgSData(oldp+370,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr),12);
        bufp->chgSData(oldp+371,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr),12);
        bufp->chgSData(oldp+372,(((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__empty)
                                   ? (0xfffU & ((2U 
                                                 == (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__gmode))
                                                 ? 
                                                ((0x7ffU 
                                                  & (((IData)(2U) 
                                                      + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)) 
                                                     >> 1U)) 
                                                 ^ 
                                                 ((IData)(2U) 
                                                  + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)))
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__gmode))
                                                  ? 
                                                 (0x7ffU 
                                                  & ((0x3ffU 
                                                      & (((IData)(2U) 
                                                          + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)) 
                                                         >> 2U)) 
                                                     ^ 
                                                     (0x7ffU 
                                                      & (((IData)(2U) 
                                                          + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)) 
                                                         >> 1U))))
                                                  : 
                                                 ((0U 
                                                   == (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__gmode))
                                                   ? 
                                                  (0x3ffU 
                                                   & ((0x1ffU 
                                                       & (((IData)(2U) 
                                                           + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)) 
                                                          >> 3U)) 
                                                      ^ 
                                                      (0x3ffU 
                                                       & (((IData)(2U) 
                                                           + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)) 
                                                          >> 2U))))
                                                   : 0U))))
                                   : 0U)),12);
        bufp->chgBit(oldp+373,((((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__empty) 
                                 & (~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__empty)))
                                 ? (0x18U > (0x1fffU 
                                             & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr) 
                                                - (0xfffU 
                                                   & ((IData)(2U) 
                                                      + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr))))))
                                 : (0x18U > (0x1fffU 
                                             & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr) 
                                                - (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)))))));
        bufp->chgSData(oldp+374,((0x3ffU & ((0x1ffU 
                                             & (((IData)(2U) 
                                                 + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)) 
                                                >> 3U)) 
                                            ^ (0x3ffU 
                                               & (((IData)(2U) 
                                                   + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)) 
                                                  >> 2U))))),10);
        bufp->chgSData(oldp+375,((0x7ffU & ((0x3ffU 
                                             & (((IData)(2U) 
                                                 + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)) 
                                                >> 2U)) 
                                            ^ (0x7ffU 
                                               & (((IData)(2U) 
                                                   + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)) 
                                                  >> 1U))))),11);
        bufp->chgSData(oldp+376,((0xfffU & ((0x7ffU 
                                             & (((IData)(2U) 
                                                 + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)) 
                                                >> 1U)) 
                                            ^ ((IData)(2U) 
                                               + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr))))),12);
        bufp->chgSData(oldp+377,((0xfffU & ((IData)(2U) 
                                            + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)))),12);
        bufp->chgSData(oldp+378,((0x7ffU & ((IData)(2U) 
                                            + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__ff_raddr)))),11);
        bufp->chgSData(oldp+379,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp),12);
        bufp->chgSData(oldp+380,((0x1fffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr) 
                                             - (0xfffU 
                                                & ((IData)(2U) 
                                                   + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)))))),13);
        bufp->chgSData(oldp+381,((0x1fffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr) 
                                             - (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)))),13);
        bufp->chgCData(oldp+382,((((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__full) 
                                   << 3U) | (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__fmo) 
                                              << 2U) 
                                             | (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__paf) 
                                                 << 1U) 
                                                | (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__overflow))))),4);
        bufp->chgBit(oldp+383,((0x312U > (0xfffU & 
                                          ((IData)(0x800U) 
                                           - (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr) 
                                               >= (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr))
                                               ? ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr) 
                                                  - (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr))
                                               : ((IData)(1U) 
                                                  + 
                                                  ((~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr)) 
                                                   + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)))))))));
        bufp->chgSData(oldp+384,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr),12);
        bufp->chgSData(oldp+385,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr),12);
        bufp->chgSData(oldp+386,((0xfffU & ((IData)(2U) 
                                            + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)))),12);
        bufp->chgSData(oldp+387,((0xfffU & ((0x7ffU 
                                             & (((IData)(2U) 
                                                 + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                >> 1U)) 
                                            ^ ((IData)(2U) 
                                               + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr))))),12);
        bufp->chgSData(oldp+388,((0x7ffU & ((0x3ffU 
                                             & (((IData)(2U) 
                                                 + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                >> 2U)) 
                                            ^ (0x7ffU 
                                               & (((IData)(2U) 
                                                   + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                  >> 1U))))),11);
        bufp->chgSData(oldp+389,((0x3ffU & ((0x1ffU 
                                             & (((IData)(2U) 
                                                 + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                >> 3U)) 
                                            ^ (0x3ffU 
                                               & (((IData)(2U) 
                                                   + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                  >> 2U))))),10);
        bufp->chgSData(oldp+390,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp),12);
        bufp->chgSData(oldp+391,((0xfffU & ((IData)(0x800U) 
                                            - (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr) 
                                                >= (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr))
                                                ? ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr) 
                                                   - (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr))
                                                : ((IData)(1U) 
                                                   + 
                                                   ((~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr)) 
                                                    + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr))))))),12);
        bufp->chgSData(oldp+392,((0x3ffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_addr_a2) 
                                            >> 4U))),10);
        bufp->chgSData(oldp+393,((0x3ffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_addr_b2) 
                                            >> 4U))),10);
        bufp->chgSData(oldp+394,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a),10);
        bufp->chgSData(oldp+395,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b),10);
        bufp->chgIData(oldp+396,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwdata_a),18);
        bufp->chgIData(oldp+397,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwdata_b),18);
        bufp->chgIData(oldp+398,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwmsk_a),18);
        bufp->chgIData(oldp+399,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwmsk_b),18);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[4U] 
                     | vlSelf->__Vm_traceActivity[6U]))) {
        bufp->chgSData(oldp+400,((0xfffU & ((IData)(0x800U) 
                                            - (((0xfffU 
                                                 & ((IData)(2U) 
                                                    + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr))) 
                                                >= (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next))
                                                ? (
                                                   (0xfffU 
                                                    & ((IData)(2U) 
                                                       + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr))) 
                                                   - (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next))
                                                : ((IData)(1U) 
                                                   + 
                                                   ((~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next)) 
                                                    + 
                                                    (0xfffU 
                                                     & ((IData)(2U) 
                                                        + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr))))))))),12);
        bufp->chgSData(oldp+401,((0xfffU & ((IData)(0x800U) 
                                            - (((0xfffU 
                                                 & ((IData)(2U) 
                                                    + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr))) 
                                                >= (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next))
                                                ? (
                                                   (0xfffU 
                                                    & ((IData)(2U) 
                                                       + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr))) 
                                                   - (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next))
                                                : ((IData)(1U) 
                                                   + 
                                                   ((~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next)) 
                                                    + 
                                                    (0xfffU 
                                                     & ((IData)(2U) 
                                                        + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr))))))))),12);
        bufp->chgBit(oldp+402,((((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__empty) 
                                 & (~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__empty)))
                                 ? (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__o1)
                                 : (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__o2))));
        bufp->chgBit(oldp+403,((0x302U > (0xfffU & 
                                          ((IData)(0x800U) 
                                           - (((0xfffU 
                                                & ((IData)(2U) 
                                                   + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr))) 
                                               >= (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next))
                                               ? ((0xfffU 
                                                   & ((IData)(2U) 
                                                      + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr))) 
                                                  - (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next))
                                               : ((IData)(1U) 
                                                  + 
                                                  ((~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next)) 
                                                   + 
                                                   (0xfffU 
                                                    & ((IData)(2U) 
                                                       + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)))))))))));
        bufp->chgSData(oldp+404,((0xfffU & ((IData)(0x800U) 
                                            - (((0xfffU 
                                                 & ((IData)(2U) 
                                                    + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr))) 
                                                >= (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next))
                                                ? (
                                                   (0xfffU 
                                                    & ((IData)(2U) 
                                                       + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr))) 
                                                   - (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next))
                                                : ((IData)(1U) 
                                                   + 
                                                   ((~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next)) 
                                                    + 
                                                    (0xfffU 
                                                     & ((IData)(2U) 
                                                        + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr))))))))),12);
        bufp->chgBit(oldp+405,((((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__empty) 
                                 & (~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__empty)))
                                 ? (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__o1)
                                 : (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__o2))));
        bufp->chgBit(oldp+406,((0x312U > (0xfffU & 
                                          ((IData)(0x800U) 
                                           - (((0xfffU 
                                                & ((IData)(2U) 
                                                   + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr))) 
                                               >= (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next))
                                               ? ((0xfffU 
                                                   & ((IData)(2U) 
                                                      + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr))) 
                                                  - (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next))
                                               : ((IData)(1U) 
                                                  + 
                                                  ((~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next)) 
                                                   + 
                                                   (0xfffU 
                                                    & ((IData)(2U) 
                                                       + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)))))))))));
        bufp->chgSData(oldp+407,((0xfffU & ((IData)(0x800U) 
                                            - (((0xfffU 
                                                 & ((IData)(2U) 
                                                    + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr))) 
                                                >= (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next))
                                                ? (
                                                   (0xfffU 
                                                    & ((IData)(2U) 
                                                       + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr))) 
                                                   - (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next))
                                                : ((IData)(1U) 
                                                   + 
                                                   ((~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next)) 
                                                    + 
                                                    (0xfffU 
                                                     & ((IData)(2U) 
                                                        + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr))))))))),12);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
        bufp->chgBit(oldp+408,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__e1));
        bufp->chgBit(oldp+409,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__e2));
        bufp->chgBit(oldp+410,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__o1));
        bufp->chgBit(oldp+411,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__o2));
        bufp->chgSData(oldp+412,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr_next),12);
        bufp->chgBit(oldp+413,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__p1));
        bufp->chgBit(oldp+414,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__p2));
        bufp->chgBit(oldp+415,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__f1));
        bufp->chgBit(oldp+416,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__f2));
        bufp->chgSData(oldp+417,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next),12);
        bufp->chgBit(oldp+418,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__e1));
        bufp->chgBit(oldp+419,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__e2));
        bufp->chgBit(oldp+420,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__o1));
        bufp->chgBit(oldp+421,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__o2));
        bufp->chgSData(oldp+422,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr_next),12);
        bufp->chgBit(oldp+423,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__p1));
        bufp->chgBit(oldp+424,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__p2));
        bufp->chgBit(oldp+425,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__f1));
        bufp->chgBit(oldp+426,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__f2));
        bufp->chgSData(oldp+427,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next),12);
        bufp->chgBit(oldp+428,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__e1));
        bufp->chgBit(oldp+429,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__e2));
        bufp->chgBit(oldp+430,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__o1));
        bufp->chgBit(oldp+431,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__o2));
        bufp->chgSData(oldp+432,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr_next),12);
        bufp->chgBit(oldp+433,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__empty_next));
        bufp->chgBit(oldp+434,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__p1));
        bufp->chgBit(oldp+435,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__p2));
        bufp->chgBit(oldp+436,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__f1));
        bufp->chgBit(oldp+437,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__f2));
        bufp->chgSData(oldp+438,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next),12);
        bufp->chgBit(oldp+439,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__e1));
        bufp->chgBit(oldp+440,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__e2));
        bufp->chgBit(oldp+441,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__o1));
        bufp->chgBit(oldp+442,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__o2));
        bufp->chgSData(oldp+443,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr_next),12);
        bufp->chgBit(oldp+444,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__empty_next));
        bufp->chgBit(oldp+445,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__p1));
        bufp->chgBit(oldp+446,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__p2));
        bufp->chgBit(oldp+447,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__f1));
        bufp->chgBit(oldp+448,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__f2));
        bufp->chgSData(oldp+449,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next),12);
    }
    bufp->chgBit(oldp+450,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__clk));
    bufp->chgQData(oldp+451,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__dout),36);
    bufp->chgQData(oldp+453,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__dout_net),36);
    bufp->chgIData(oldp+455,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT____Vcellout__inst1__RDATA_A1_o),18);
    bufp->chgIData(oldp+456,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT____Vcellout__inst1__RDATA_B1_o),18);
    bufp->chgIData(oldp+457,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_rdata_a1),18);
    bufp->chgIData(oldp+458,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_rdata_b1),18);
    bufp->chgIData(oldp+459,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_rdata_a2),18);
    bufp->chgIData(oldp+460,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_rdata_b2),18);
    bufp->chgQData(oldp+461,((((QData)((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_rdata_b2)) 
                               << 0x12U) | (QData)((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_rdata_b1)))),36);
    bufp->chgIData(oldp+463,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__ram_rdata_a),18);
    bufp->chgIData(oldp+464,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__ram_rdata_b),18);
    bufp->chgBit(oldp+465,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lcen_a));
    bufp->chgBit(oldp+466,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwen_a));
    bufp->chgBit(oldp+467,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lcen_b));
    bufp->chgBit(oldp+468,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwen_b));
    bufp->chgIData(oldp+469,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__ram_rdata_a),18);
    bufp->chgIData(oldp+470,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__ram_rdata_b),18);
    bufp->chgBit(oldp+471,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lcen_a));
    bufp->chgBit(oldp+472,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwen_a));
    bufp->chgBit(oldp+473,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lcen_b));
    bufp->chgBit(oldp+474,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwen_b));
    bufp->chgIData(oldp+475,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__ram_rdata_b),18);
    bufp->chgIData(oldp+476,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__ram_rdata_b),18);
    bufp->chgQData(oldp+477,((((QData)((IData)((3U 
                                                & (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__ram_rdata_b 
                                                   >> 0x10U)))) 
                               << 0x22U) | (((QData)((IData)(
                                                             (3U 
                                                              & (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__ram_rdata_b 
                                                                 >> 0x10U)))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              ((vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__ram_rdata_b 
                                                                << 0x10U) 
                                                               | (0xffffU 
                                                                  & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__ram_rdata_b))))))),36);
    bufp->chgIData(oldp+479,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__ram_rdata_a),18);
    bufp->chgBit(oldp+480,(((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_wen_a1)
                             ? (0x302U > (0xfffU & 
                                          ((IData)(0x800U) 
                                           - (((0xfffU 
                                                & ((IData)(2U) 
                                                   + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr))) 
                                               >= (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next))
                                               ? ((0xfffU 
                                                   & ((IData)(2U) 
                                                      + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr))) 
                                                  - (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next))
                                               : ((IData)(1U) 
                                                  + 
                                                  ((~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next)) 
                                                   + 
                                                   (0xfffU 
                                                    & ((IData)(2U) 
                                                       + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)))))))))
                             : (0x302U > (0xfffU & 
                                          ((IData)(0x800U) 
                                           - (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr) 
                                               >= (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr))
                                               ? ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr) 
                                                  - (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr))
                                               : ((IData)(1U) 
                                                  + 
                                                  ((~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr)) 
                                                   + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr))))))))));
    bufp->chgBit(oldp+481,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lcen_a));
    bufp->chgBit(oldp+482,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwen_a));
    bufp->chgBit(oldp+483,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lcen_b));
    bufp->chgBit(oldp+484,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwen_b));
    bufp->chgIData(oldp+485,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__ram_rdata_a),18);
    bufp->chgBit(oldp+486,(((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_wen_a2)
                             ? (0x312U > (0xfffU & 
                                          ((IData)(0x800U) 
                                           - (((0xfffU 
                                                & ((IData)(2U) 
                                                   + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr))) 
                                               >= (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next))
                                               ? ((0xfffU 
                                                   & ((IData)(2U) 
                                                      + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr))) 
                                                  - (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next))
                                               : ((IData)(1U) 
                                                  + 
                                                  ((~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next)) 
                                                   + 
                                                   (0xfffU 
                                                    & ((IData)(2U) 
                                                       + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)))))))))
                             : (0x312U > (0xfffU & 
                                          ((IData)(0x800U) 
                                           - (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr) 
                                               >= (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr))
                                               ? ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr) 
                                                  - (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr))
                                               : ((IData)(1U) 
                                                  + 
                                                  ((~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr)) 
                                                   + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr))))))))));
    bufp->chgBit(oldp+487,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lcen_a));
    bufp->chgBit(oldp+488,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwen_a));
    bufp->chgBit(oldp+489,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lcen_b));
    bufp->chgBit(oldp+490,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwen_b));
}

void Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root__trace_cleanup\n"); );
    // Init
    Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root*>(voidSelf);
    Vco_sim_sdp_nsplit_ram_1024x36_R4W4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
}
