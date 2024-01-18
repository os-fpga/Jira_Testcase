// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vco_sim_sdp_nsplit_ram_1024x36_R4W4.h for the primary calling header

#include "verilated.h"

#include "Vco_sim_sdp_nsplit_ram_1024x36_R4W4_TDP36K__Mz1.h"
#include "Vco_sim_sdp_nsplit_ram_1024x36_R4W4__Syms.h"

VL_INLINE_OPT void Vco_sim_sdp_nsplit_ram_1024x36_R4W4_TDP36K__Mz1___act_comb__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__0(Vco_sim_sdp_nsplit_ram_1024x36_R4W4_TDP36K__Mz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_sdp_nsplit_ram_1024x36_R4W4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vco_sim_sdp_nsplit_ram_1024x36_R4W4_TDP36K__Mz1___act_comb__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__0\n"); );
    // Body
    vlSelf->__PVT__ram_wen_a1 = ((IData)(vlSymsp->TOP.co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__we) 
                                 & (~ (IData)(vlSymsp->TOP.co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__wr_addr)));
    vlSelf->__PVT__ram_wen_a2 = ((IData)(vlSymsp->TOP.co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__we) 
                                 & (IData)(vlSymsp->TOP.co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__wr_addr));
    vlSelf->__PVT__ram_wen_b1 = ((IData)(vlSymsp->TOP.co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__we) 
                                 & (~ (IData)(vlSymsp->TOP.co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__rd_addr)));
    vlSelf->__PVT__ram_wen_b2 = ((IData)(vlSymsp->TOP.co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__we) 
                                 & (IData)(vlSymsp->TOP.co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__rd_addr));
    vlSelf->__PVT__u1__DOT__ram_addr_a = ((0x3ff0U 
                                           & ((IData)(vlSymsp->TOP.co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__wr_addr) 
                                              << 3U)) 
                                          | (0xfU & (IData)(vlSelf->__PVT__u1__DOT__addr_a_d)));
    vlSelf->__PVT__u2__DOT__ram_addr_a = ((0x3ff0U 
                                           & ((IData)(vlSymsp->TOP.co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__wr_addr) 
                                              << 3U)) 
                                          | (0xfU & (IData)(vlSelf->__PVT__u2__DOT__addr_a_d)));
    vlSelf->__PVT__u1__DOT__ram_addr_b = ((0x3ff0U 
                                           & ((IData)(vlSymsp->TOP.co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__rd_addr) 
                                              << 3U)) 
                                          | (0xfU & (IData)(vlSelf->__PVT__u1__DOT__addr_b_d)));
    vlSelf->__PVT__u2__DOT__ram_addr_b = ((0x3ff0U 
                                           & ((IData)(vlSymsp->TOP.co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__rd_addr) 
                                              << 3U)) 
                                          | (0xfU & (IData)(vlSelf->__PVT__u2__DOT__addr_b_d)));
    vlSelf->__PVT__u1__DOT__wmsk_a = ((IData)(vlSelf->__PVT__ram_wen_a1)
                                       ? 0xfff0U : 0x3ffffU);
    vlSelf->__PVT__u2__DOT__wmsk_a = ((IData)(vlSelf->__PVT__ram_wen_a2)
                                       ? 0xfff0U : 0x3ffffU);
    vlSelf->__PVT__u1__DOT__wmsk_b = ((IData)(vlSelf->__PVT__ram_wen_b1)
                                       ? 0xfff0U : 0x3ffffU);
    vlSelf->__PVT__u2__DOT__wmsk_b = ((IData)(vlSelf->__PVT__ram_wen_b2)
                                       ? 0xfff0U : 0x3ffffU);
}

VL_INLINE_OPT void Vco_sim_sdp_nsplit_ram_1024x36_R4W4_TDP36K__Mz1___nba_sequent__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__0(Vco_sim_sdp_nsplit_ram_1024x36_R4W4_TDP36K__Mz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_sdp_nsplit_ram_1024x36_R4W4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vco_sim_sdp_nsplit_ram_1024x36_R4W4_TDP36K__Mz1___nba_sequent__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__0\n"); );
    // Body
    vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_push__DOT__paf = 0U;
    vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__paf = 0U;
    vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__paf = 0U;
    vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_pop__DOT__pae 
        = (1U & (~ (IData)(vlSelf->__PVT__sreset)));
    vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__pae 
        = (1U & (~ (IData)(vlSelf->__PVT__sreset)));
    vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__pae 
        = (1U & (~ (IData)(vlSelf->__PVT__sreset)));
    if (vlSelf->__PVT__sreset) {
        vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__epo 
            = vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__o2;
        vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__epo 
            = vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__o2;
        vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_pop__DOT__epo 
            = (((IData)(1U) + (0x7ffU & ((IData)(vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_pop__DOT__raddr) 
                                         >> 2U))) == 
               (0x7ffU & (IData)(vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_pop__DOT__tmp)));
        vlSelf->__PVT__fifo36_ctl__DOT__pushtopop1 
            = vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_push__DOT__gcout_reg;
        vlSelf->__PVT__fifo36_ctl__DOT__pushtopop2 
            = vlSelf->__PVT__fifo36_ctl__DOT__pushtopop1;
        vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__pushtopop1 
            = vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gcout_reg;
        if (vlSelf->__PVT__ram_wen_a2) {
            vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__fmo 
                = vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__p1;
            if (vlSelf->__PVT__ram_wen_a2) {
                vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__overflow 
                    = vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__full;
                vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gcout_reg 
                    = (0xfffU & ((2U == (IData)(vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gmode))
                                  ? ((0x7ffU & (((IData)(2U) 
                                                 + (IData)(vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                >> 1U)) 
                                     ^ ((IData)(2U) 
                                        + (IData)(vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)))
                                  : ((1U == (IData)(vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gmode))
                                      ? (0x7ffU & (
                                                   (0x3ffU 
                                                    & (((IData)(2U) 
                                                        + (IData)(vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                       >> 2U)) 
                                                   ^ 
                                                   (0x7ffU 
                                                    & (((IData)(2U) 
                                                        + (IData)(vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                       >> 1U))))
                                      : ((0U == (IData)(vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gmode))
                                          ? (0x3ffU 
                                             & ((0x1ffU 
                                                 & (((IData)(2U) 
                                                     + (IData)(vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                    >> 3U)) 
                                                ^ (0x3ffU 
                                                   & (((IData)(2U) 
                                                       + (IData)(vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                      >> 2U))))
                                          : 0U))));
            } else {
                vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__overflow = 0U;
                vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gcout_reg = 0U;
            }
        } else {
            vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__fmo 
                = vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__p2;
        }
        vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__pushtopop2 
            = vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__pushtopop1;
        vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__pushtopop1 
            = vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gcout_reg;
        if (vlSelf->__PVT__ram_wen_a1) {
            vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__fmo 
                = vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__p1;
            if (vlSelf->__PVT__ram_wen_a1) {
                vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__overflow 
                    = vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__full;
                vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_push__DOT__overflow 
                    = vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_push__DOT__full;
                vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_push__DOT__gcout_reg 
                    = (0x7ffU & ((0x3ffU & (((IData)(4U) 
                                             + (IData)(vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                            >> 3U)) 
                                 ^ (0x7ffU & (((IData)(4U) 
                                               + (IData)(vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                              >> 2U))));
                vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gcout_reg 
                    = (0xfffU & ((2U == (IData)(vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gmode))
                                  ? ((0x7ffU & (((IData)(2U) 
                                                 + (IData)(vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                >> 1U)) 
                                     ^ ((IData)(2U) 
                                        + (IData)(vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)))
                                  : ((1U == (IData)(vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gmode))
                                      ? (0x7ffU & (
                                                   (0x3ffU 
                                                    & (((IData)(2U) 
                                                        + (IData)(vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                       >> 2U)) 
                                                   ^ 
                                                   (0x7ffU 
                                                    & (((IData)(2U) 
                                                        + (IData)(vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                       >> 1U))))
                                      : ((0U == (IData)(vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gmode))
                                          ? (0x3ffU 
                                             & ((0x1ffU 
                                                 & (((IData)(2U) 
                                                     + (IData)(vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                    >> 3U)) 
                                                ^ (0x3ffU 
                                                   & (((IData)(2U) 
                                                       + (IData)(vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                      >> 2U))))
                                          : 0U))));
            } else {
                vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__overflow = 0U;
                vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_push__DOT__overflow = 0U;
                vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_push__DOT__gcout_reg = 0U;
                vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gcout_reg = 0U;
            }
            vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_push__DOT__fmo 
                = ((0x3ffU & ((IData)(1U) + (0x3ffU 
                                             & (((IData)(4U) 
                                                 + (IData)(vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                >> 2U)))) 
                   == (0x3ffU & (IData)(vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp)));
        } else {
            vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__fmo 
                = vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__p2;
            vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_push__DOT__fmo 
                = ((0x3ffU & ((IData)(1U) + (0x3ffU 
                                             & ((IData)(vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr) 
                                                >> 2U)))) 
                   == (0x3ffU & (IData)(vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp)));
        }
        vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__pushtopop2 
            = vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__pushtopop1;
        vlSelf->__PVT__laddr_a1 = ((IData)(vlSymsp->TOP.co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__wr_addr) 
                                   << 4U);
        vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr 
            = vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr_next;
        vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr 
            = vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr_next;
        vlSelf->__PVT__laddr_b1 = ((IData)(vlSymsp->TOP.co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__rd_addr) 
                                   << 4U);
        if ((0U == (IData)(vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gmode))) {
            vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr 
                = (0xffcU & (IData)(vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next));
        } else if ((1U == (IData)(vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gmode))) {
            vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr 
                = (0xffeU & (IData)(vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next));
        } else if ((2U == (IData)(vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gmode))) {
            vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr 
                = vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next;
        } else if ((3U == (IData)(vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gmode))) {
            vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr = 0U;
        }
        if ((0U == (IData)(vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gmode))) {
            vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr 
                = (0xffcU & (IData)(vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next));
        } else if ((1U == (IData)(vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gmode))) {
            vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr 
                = (0xffeU & (IData)(vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next));
        } else if ((2U == (IData)(vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gmode))) {
            vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr 
                = vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next;
        } else if ((3U == (IData)(vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gmode))) {
            vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr = 0U;
        }
        vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_push__DOT__raddr 
            = (0x1ffcU & ((IData)(vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp) 
                          << 2U));
        vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_pop__DOT__waddr 
            = (0x1ffcU & ((IData)(vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_pop__DOT__tmp) 
                          << 2U));
        if (((IData)(vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_pop__DOT__empty) 
             & (~ (IData)(vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_pop__DOT__e2)))) {
            vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_pop__DOT__ff_raddr 
                = (0xfffU & ((IData)(4U) + (IData)(vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_pop__DOT__raddr)));
        }
        if (((IData)(vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__empty) 
             & (~ (IData)(vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__e2)))) {
            vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__ff_raddr 
                = (0x7ffU & ((IData)(2U) + (IData)(vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)));
        }
        if (((IData)(vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__empty) 
             & (~ (IData)(vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__e2)))) {
            vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__ff_raddr 
                = (0x7ffU & ((IData)(2U) + (IData)(vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)));
        }
        vlSelf->__PVT__fifo36_ctl__DOT__poptopush2 
            = vlSelf->__PVT__fifo36_ctl__DOT__poptopush1;
        vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__poptopush2 
            = vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__poptopush1;
        vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__poptopush2 
            = vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__poptopush1;
        vlSelf->__PVT__fifo36_ctl__DOT__poptopush1 
            = vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_pop__DOT__gcout_reg;
    } else {
        vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__epo = 0U;
        vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__epo = 0U;
        vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__fmo = 0U;
        vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__fmo = 0U;
        vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_pop__DOT__epo = 0U;
        vlSelf->__PVT__laddr_a1 = 0U;
        vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr = 0U;
        vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr = 0U;
        vlSelf->__PVT__laddr_b1 = 0U;
        vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr = 0U;
        vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr = 0U;
        vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_push__DOT__raddr = 0U;
        vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_pop__DOT__waddr = 0U;
        vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__overflow = 0U;
        vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__overflow = 0U;
        vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_pop__DOT__ff_raddr = 0U;
        vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__ff_raddr = 0U;
        vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__ff_raddr = 0U;
        vlSelf->__PVT__fifo36_ctl__DOT__poptopush2 = 0U;
        vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_push__DOT__overflow = 0U;
        vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__poptopush2 = 0U;
        vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__poptopush2 = 0U;
        vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_push__DOT__gcout_reg = 0U;
        vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gcout_reg = 0U;
        vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gcout_reg = 0U;
        vlSelf->__PVT__fifo36_ctl__DOT__poptopush1 = 0U;
        vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_push__DOT__fmo = 0U;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__sreset)))) {
        vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_pop__DOT__underflow = 0U;
        vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_pop__DOT__bwl_sel = 0U;
        vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__underflow = 0U;
        vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__bwl_sel = 0U;
        vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__underflow = 0U;
        vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__bwl_sel = 0U;
        vlSelf->__PVT__fifo36_ctl__DOT__pushtopop2 = 0U;
    }
    vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_pop__DOT__tmp 
        = ((0x1ffcU & (IData)(vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_pop__DOT__tmp)) 
           | ((2U & (VL_REDXOR_32((0x1fffU & ((IData)(vlSelf->__PVT__fifo36_ctl__DOT__pushtopop2) 
                                              >> 1U))) 
                     << 1U)) | (1U & VL_REDXOR_16(vlSelf->__PVT__fifo36_ctl__DOT__pushtopop2))));
    vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_pop__DOT__tmp 
        = ((0x1ff3U & (IData)(vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_pop__DOT__tmp)) 
           | ((8U & (VL_REDXOR_32((0x1fffU & ((IData)(vlSelf->__PVT__fifo36_ctl__DOT__pushtopop2) 
                                              >> 3U))) 
                     << 3U)) | (4U & (VL_REDXOR_32(
                                                   (0x1fffU 
                                                    & ((IData)(vlSelf->__PVT__fifo36_ctl__DOT__pushtopop2) 
                                                       >> 2U))) 
                                      << 2U))));
    vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_pop__DOT__tmp 
        = ((0x1fcfU & (IData)(vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_pop__DOT__tmp)) 
           | ((0x20U & (VL_REDXOR_32((0x1fffU & ((IData)(vlSelf->__PVT__fifo36_ctl__DOT__pushtopop2) 
                                                 >> 5U))) 
                        << 5U)) | (0x10U & (VL_REDXOR_32(
                                                         (0x1fffU 
                                                          & ((IData)(vlSelf->__PVT__fifo36_ctl__DOT__pushtopop2) 
                                                             >> 4U))) 
                                            << 4U))));
    vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_pop__DOT__tmp 
        = ((0x1f3fU & (IData)(vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_pop__DOT__tmp)) 
           | ((0x80U & (VL_REDXOR_32((0x1fffU & ((IData)(vlSelf->__PVT__fifo36_ctl__DOT__pushtopop2) 
                                                 >> 7U))) 
                        << 7U)) | (0x40U & (VL_REDXOR_32(
                                                         (0x1fffU 
                                                          & ((IData)(vlSelf->__PVT__fifo36_ctl__DOT__pushtopop2) 
                                                             >> 6U))) 
                                            << 6U))));
    vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_pop__DOT__tmp 
        = ((0x1cffU & (IData)(vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_pop__DOT__tmp)) 
           | ((0x200U & (VL_REDXOR_32((0x1fffU & ((IData)(vlSelf->__PVT__fifo36_ctl__DOT__pushtopop2) 
                                                  >> 9U))) 
                         << 9U)) | (0x100U & (VL_REDXOR_32(
                                                           (0x1fffU 
                                                            & ((IData)(vlSelf->__PVT__fifo36_ctl__DOT__pushtopop2) 
                                                               >> 8U))) 
                                              << 8U))));
    vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_pop__DOT__tmp 
        = ((0x13ffU & (IData)(vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_pop__DOT__tmp)) 
           | ((0x800U & (VL_REDXOR_32((0x1fffU & ((IData)(vlSelf->__PVT__fifo36_ctl__DOT__pushtopop2) 
                                                  >> 0xbU))) 
                         << 0xbU)) | (0x400U & (VL_REDXOR_32(
                                                             (0x1fffU 
                                                              & ((IData)(vlSelf->__PVT__fifo36_ctl__DOT__pushtopop2) 
                                                                 >> 0xaU))) 
                                                << 0xaU))));
    vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_pop__DOT__tmp 
        = ((0xfffU & (IData)(vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_pop__DOT__tmp)) 
           | (0x1000U & (VL_REDXOR_32((0x1fffU & ((IData)(vlSelf->__PVT__fifo36_ctl__DOT__pushtopop2) 
                                                  >> 0xcU))) 
                         << 0xcU)));
    vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__full 
        = ((IData)(vlSelf->__PVT__sreset) & ((IData)(vlSelf->__PVT__ram_wen_a2)
                                              ? (IData)(vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__f1)
                                              : (IData)(vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__f2)));
    vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__full 
        = ((IData)(vlSelf->__PVT__sreset) & ((IData)(vlSelf->__PVT__ram_wen_a1)
                                              ? (IData)(vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__f1)
                                              : (IData)(vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__f2)));
    vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_pop__DOT__empty 
        = (1U & ((~ (IData)(vlSelf->__PVT__sreset)) 
                 | (IData)(vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_pop__DOT__e2)));
    if ((1U & (~ (IData)(vlSelf->__PVT__sreset)))) {
        vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__pushtopop2 = 0U;
    }
    vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp 
        = ((0xffcU & (IData)(vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp)) 
           | ((2U & (VL_REDXOR_32((0xfffU & ((IData)(vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__pushtopop2) 
                                             >> 1U))) 
                     << 1U)) | (1U & VL_REDXOR_16(vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__pushtopop2))));
    vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp 
        = ((0xff3U & (IData)(vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp)) 
           | ((8U & (VL_REDXOR_32((0xfffU & ((IData)(vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__pushtopop2) 
                                             >> 3U))) 
                     << 3U)) | (4U & (VL_REDXOR_32(
                                                   (0xfffU 
                                                    & ((IData)(vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__pushtopop2) 
                                                       >> 2U))) 
                                      << 2U))));
    vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp 
        = ((0xfcfU & (IData)(vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp)) 
           | ((0x20U & (VL_REDXOR_32((0xfffU & ((IData)(vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__pushtopop2) 
                                                >> 5U))) 
                        << 5U)) | (0x10U & (VL_REDXOR_32(
                                                         (0xfffU 
                                                          & ((IData)(vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__pushtopop2) 
                                                             >> 4U))) 
                                            << 4U))));
    vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp 
        = ((0xf3fU & (IData)(vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp)) 
           | ((0x80U & (VL_REDXOR_32((0xfffU & ((IData)(vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__pushtopop2) 
                                                >> 7U))) 
                        << 7U)) | (0x40U & (VL_REDXOR_32(
                                                         (0xfffU 
                                                          & ((IData)(vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__pushtopop2) 
                                                             >> 6U))) 
                                            << 6U))));
    vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp 
        = ((0xcffU & (IData)(vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp)) 
           | ((0x200U & (VL_REDXOR_32((0xfffU & ((IData)(vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__pushtopop2) 
                                                 >> 9U))) 
                         << 9U)) | (0x100U & (VL_REDXOR_32(
                                                           (0xfffU 
                                                            & ((IData)(vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__pushtopop2) 
                                                               >> 8U))) 
                                              << 8U))));
    vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp 
        = ((0x3ffU & (IData)(vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp)) 
           | ((0x800U & (VL_REDXOR_32((0xfffU & ((IData)(vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__pushtopop2) 
                                                 >> 0xbU))) 
                         << 0xbU)) | (0x400U & (VL_REDXOR_32(
                                                             (0xfffU 
                                                              & ((IData)(vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__pushtopop2) 
                                                                 >> 0xaU))) 
                                                << 0xaU))));
    if ((1U & (~ (IData)(vlSelf->__PVT__sreset)))) {
        vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__pushtopop2 = 0U;
    }
    vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp 
        = ((0xffcU & (IData)(vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp)) 
           | ((2U & (VL_REDXOR_32((0xfffU & ((IData)(vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__pushtopop2) 
                                             >> 1U))) 
                     << 1U)) | (1U & VL_REDXOR_16(vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__pushtopop2))));
    vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp 
        = ((0xff3U & (IData)(vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp)) 
           | ((8U & (VL_REDXOR_32((0xfffU & ((IData)(vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__pushtopop2) 
                                             >> 3U))) 
                     << 3U)) | (4U & (VL_REDXOR_32(
                                                   (0xfffU 
                                                    & ((IData)(vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__pushtopop2) 
                                                       >> 2U))) 
                                      << 2U))));
    vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp 
        = ((0xfcfU & (IData)(vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp)) 
           | ((0x20U & (VL_REDXOR_32((0xfffU & ((IData)(vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__pushtopop2) 
                                                >> 5U))) 
                        << 5U)) | (0x10U & (VL_REDXOR_32(
                                                         (0xfffU 
                                                          & ((IData)(vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__pushtopop2) 
                                                             >> 4U))) 
                                            << 4U))));
    vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp 
        = ((0xf3fU & (IData)(vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp)) 
           | ((0x80U & (VL_REDXOR_32((0xfffU & ((IData)(vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__pushtopop2) 
                                                >> 7U))) 
                        << 7U)) | (0x40U & (VL_REDXOR_32(
                                                         (0xfffU 
                                                          & ((IData)(vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__pushtopop2) 
                                                             >> 6U))) 
                                            << 6U))));
    vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp 
        = ((0xcffU & (IData)(vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp)) 
           | ((0x200U & (VL_REDXOR_32((0xfffU & ((IData)(vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__pushtopop2) 
                                                 >> 9U))) 
                         << 9U)) | (0x100U & (VL_REDXOR_32(
                                                           (0xfffU 
                                                            & ((IData)(vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__pushtopop2) 
                                                               >> 8U))) 
                                              << 8U))));
    vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp 
        = ((0x3ffU & (IData)(vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp)) 
           | ((0x800U & (VL_REDXOR_32((0xfffU & ((IData)(vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__pushtopop2) 
                                                 >> 0xbU))) 
                         << 0xbU)) | (0x400U & (VL_REDXOR_32(
                                                             (0xfffU 
                                                              & ((IData)(vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__pushtopop2) 
                                                                 >> 0xaU))) 
                                                << 0xaU))));
    vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__empty 
        = (1U & ((~ (IData)(vlSelf->__PVT__sreset)) 
                 | (IData)(vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__e2)));
    vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__empty 
        = (1U & ((~ (IData)(vlSelf->__PVT__sreset)) 
                 | (IData)(vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__e2)));
    if (vlSelf->__PVT__sreset) {
        vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_push__DOT__full 
            = ((IData)(vlSelf->__PVT__ram_wen_a1) ? 
               (((0x400U & ((~ (1U & (((IData)(4U) 
                                       + (IData)(vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                      >> 0xcU))) << 0xaU)) 
                 | (0x3ffU & (((IData)(4U) + (IData)(vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr)) 
                              >> 2U))) == (0x7ffU & (IData)(vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp)))
                : (((0x400U & ((~ ((IData)(vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr) 
                                   >> 0xcU)) << 0xaU)) 
                    | (0x3ffU & ((IData)(vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr) 
                                 >> 2U))) == (0x7ffU 
                                              & (IData)(vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp))));
        vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__poptopush1 
            = vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__gcout_reg;
        vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__poptopush1 
            = vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__gcout_reg;
    } else {
        vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_push__DOT__full = 0U;
        vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__poptopush1 = 0U;
        vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__poptopush1 = 0U;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__sreset)))) {
        vlSelf->__PVT__fifo36_ctl__DOT__pushtopop1 = 0U;
        vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__pushtopop1 = 0U;
        vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__pushtopop1 = 0U;
        vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_pop__DOT__raddr = 0U;
        vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr = 0U;
        vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr = 0U;
        vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_pop__DOT__gcout_reg = 0U;
        vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__gcout_reg = 0U;
        vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__gcout_reg = 0U;
    }
    if (vlSelf->__PVT__sreset) {
        if (vlSelf->__PVT__ram_wen_a2) {
            vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr 
                = vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr_next;
        }
        if (vlSelf->__PVT__ram_wen_a1) {
            vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr 
                = vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr_next;
            vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr 
                = vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr_next;
        }
    } else {
        vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr = 0U;
        vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr = 0U;
        vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr = 0U;
    }
    vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp 
        = ((0xffcU & (IData)(vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp)) 
           | ((2U & (VL_REDXOR_32((0xfffU & ((IData)(vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__poptopush2) 
                                             >> 1U))) 
                     << 1U)) | (1U & VL_REDXOR_16(vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__poptopush2))));
    vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp 
        = ((0xff3U & (IData)(vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp)) 
           | ((8U & (VL_REDXOR_32((0xfffU & ((IData)(vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__poptopush2) 
                                             >> 3U))) 
                     << 3U)) | (4U & (VL_REDXOR_32(
                                                   (0xfffU 
                                                    & ((IData)(vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__poptopush2) 
                                                       >> 2U))) 
                                      << 2U))));
    vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp 
        = ((0xfcfU & (IData)(vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp)) 
           | ((0x20U & (VL_REDXOR_32((0xfffU & ((IData)(vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__poptopush2) 
                                                >> 5U))) 
                        << 5U)) | (0x10U & (VL_REDXOR_32(
                                                         (0xfffU 
                                                          & ((IData)(vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__poptopush2) 
                                                             >> 4U))) 
                                            << 4U))));
    vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp 
        = ((0xf3fU & (IData)(vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp)) 
           | ((0x80U & (VL_REDXOR_32((0xfffU & ((IData)(vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__poptopush2) 
                                                >> 7U))) 
                        << 7U)) | (0x40U & (VL_REDXOR_32(
                                                         (0xfffU 
                                                          & ((IData)(vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__poptopush2) 
                                                             >> 6U))) 
                                            << 6U))));
    vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp 
        = ((0xcffU & (IData)(vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp)) 
           | ((0x200U & (VL_REDXOR_32((0xfffU & ((IData)(vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__poptopush2) 
                                                 >> 9U))) 
                         << 9U)) | (0x100U & (VL_REDXOR_32(
                                                           (0xfffU 
                                                            & ((IData)(vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__poptopush2) 
                                                               >> 8U))) 
                                              << 8U))));
    vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp 
        = ((0x3ffU & (IData)(vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp)) 
           | ((0x800U & (VL_REDXOR_32((0xfffU & ((IData)(vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__poptopush2) 
                                                 >> 0xbU))) 
                         << 0xbU)) | (0x400U & (VL_REDXOR_32(
                                                             (0xfffU 
                                                              & ((IData)(vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__poptopush2) 
                                                                 >> 0xaU))) 
                                                << 0xaU))));
    vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp 
        = ((0xffcU & (IData)(vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp)) 
           | ((2U & (VL_REDXOR_32((0xfffU & ((IData)(vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__poptopush2) 
                                             >> 1U))) 
                     << 1U)) | (1U & VL_REDXOR_16(vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__poptopush2))));
    vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp 
        = ((0xff3U & (IData)(vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp)) 
           | ((8U & (VL_REDXOR_32((0xfffU & ((IData)(vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__poptopush2) 
                                             >> 3U))) 
                     << 3U)) | (4U & (VL_REDXOR_32(
                                                   (0xfffU 
                                                    & ((IData)(vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__poptopush2) 
                                                       >> 2U))) 
                                      << 2U))));
    vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp 
        = ((0xfcfU & (IData)(vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp)) 
           | ((0x20U & (VL_REDXOR_32((0xfffU & ((IData)(vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__poptopush2) 
                                                >> 5U))) 
                        << 5U)) | (0x10U & (VL_REDXOR_32(
                                                         (0xfffU 
                                                          & ((IData)(vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__poptopush2) 
                                                             >> 4U))) 
                                            << 4U))));
    vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp 
        = ((0xf3fU & (IData)(vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp)) 
           | ((0x80U & (VL_REDXOR_32((0xfffU & ((IData)(vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__poptopush2) 
                                                >> 7U))) 
                        << 7U)) | (0x40U & (VL_REDXOR_32(
                                                         (0xfffU 
                                                          & ((IData)(vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__poptopush2) 
                                                             >> 6U))) 
                                            << 6U))));
    vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp 
        = ((0xcffU & (IData)(vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp)) 
           | ((0x200U & (VL_REDXOR_32((0xfffU & ((IData)(vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__poptopush2) 
                                                 >> 9U))) 
                         << 9U)) | (0x100U & (VL_REDXOR_32(
                                                           (0xfffU 
                                                            & ((IData)(vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__poptopush2) 
                                                               >> 8U))) 
                                              << 8U))));
    vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp 
        = ((0x3ffU & (IData)(vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp)) 
           | ((0x800U & (VL_REDXOR_32((0xfffU & ((IData)(vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__poptopush2) 
                                                 >> 0xbU))) 
                         << 0xbU)) | (0x400U & (VL_REDXOR_32(
                                                             (0xfffU 
                                                              & ((IData)(vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__poptopush2) 
                                                                 >> 0xaU))) 
                                                << 0xaU))));
    vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp 
        = ((0x1ffcU & (IData)(vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp)) 
           | ((2U & (VL_REDXOR_32((0x1fffU & ((IData)(vlSelf->__PVT__fifo36_ctl__DOT__poptopush2) 
                                              >> 1U))) 
                     << 1U)) | (1U & VL_REDXOR_16(vlSelf->__PVT__fifo36_ctl__DOT__poptopush2))));
    vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp 
        = ((0x1ff3U & (IData)(vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp)) 
           | ((8U & (VL_REDXOR_32((0x1fffU & ((IData)(vlSelf->__PVT__fifo36_ctl__DOT__poptopush2) 
                                              >> 3U))) 
                     << 3U)) | (4U & (VL_REDXOR_32(
                                                   (0x1fffU 
                                                    & ((IData)(vlSelf->__PVT__fifo36_ctl__DOT__poptopush2) 
                                                       >> 2U))) 
                                      << 2U))));
    vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp 
        = ((0x1fcfU & (IData)(vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp)) 
           | ((0x20U & (VL_REDXOR_32((0x1fffU & ((IData)(vlSelf->__PVT__fifo36_ctl__DOT__poptopush2) 
                                                 >> 5U))) 
                        << 5U)) | (0x10U & (VL_REDXOR_32(
                                                         (0x1fffU 
                                                          & ((IData)(vlSelf->__PVT__fifo36_ctl__DOT__poptopush2) 
                                                             >> 4U))) 
                                            << 4U))));
    vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp 
        = ((0x1f3fU & (IData)(vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp)) 
           | ((0x80U & (VL_REDXOR_32((0x1fffU & ((IData)(vlSelf->__PVT__fifo36_ctl__DOT__poptopush2) 
                                                 >> 7U))) 
                        << 7U)) | (0x40U & (VL_REDXOR_32(
                                                         (0x1fffU 
                                                          & ((IData)(vlSelf->__PVT__fifo36_ctl__DOT__poptopush2) 
                                                             >> 6U))) 
                                            << 6U))));
    vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp 
        = ((0x1cffU & (IData)(vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp)) 
           | ((0x200U & (VL_REDXOR_32((0x1fffU & ((IData)(vlSelf->__PVT__fifo36_ctl__DOT__poptopush2) 
                                                  >> 9U))) 
                         << 9U)) | (0x100U & (VL_REDXOR_32(
                                                           (0x1fffU 
                                                            & ((IData)(vlSelf->__PVT__fifo36_ctl__DOT__poptopush2) 
                                                               >> 8U))) 
                                              << 8U))));
    vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp 
        = ((0x13ffU & (IData)(vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp)) 
           | ((0x800U & (VL_REDXOR_32((0x1fffU & ((IData)(vlSelf->__PVT__fifo36_ctl__DOT__poptopush2) 
                                                  >> 0xbU))) 
                         << 0xbU)) | (0x400U & (VL_REDXOR_32(
                                                             (0x1fffU 
                                                              & ((IData)(vlSelf->__PVT__fifo36_ctl__DOT__poptopush2) 
                                                                 >> 0xaU))) 
                                                << 0xaU))));
    vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp 
        = ((0xfffU & (IData)(vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp)) 
           | (0x1000U & (VL_REDXOR_32((0x1fffU & ((IData)(vlSelf->__PVT__fifo36_ctl__DOT__poptopush2) 
                                                  >> 0xcU))) 
                         << 0xcU)));
    vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_pop__DOT__e2 
        = ((0x7ffU & ((IData)(vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_pop__DOT__raddr) 
                      >> 2U)) == (0x7ffU & (IData)(vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_pop__DOT__tmp)));
    vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr_next 
        = (0xfffU & ((IData)(2U) + (IData)(vlSelf->__PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)));
    vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr_next 
        = (0xfffU & ((IData)(2U) + (IData)(vlSelf->__PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)));
    vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr_next 
        = (0x1fffU & ((IData)(4U) + (IData)(vlSelf->__PVT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr)));
}

VL_INLINE_OPT void Vco_sim_sdp_nsplit_ram_1024x36_R4W4_TDP36K__Mz1___nba_sequent__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__1(Vco_sim_sdp_nsplit_ram_1024x36_R4W4_TDP36K__Mz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_sdp_nsplit_ram_1024x36_R4W4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vco_sim_sdp_nsplit_ram_1024x36_R4W4_TDP36K__Mz1___nba_sequent__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__1\n"); );
    // Init
    CData/*0:0*/ __Vdly__u1__DOT__uram__DOT__lcen_a;
    CData/*0:0*/ __Vdly__u1__DOT__uram__DOT__lwen_a;
    CData/*0:0*/ __Vdly__u1__DOT__uram__DOT__lcen_b;
    CData/*0:0*/ __Vdly__u1__DOT__uram__DOT__lwen_b;
    CData/*0:0*/ __Vdly__u2__DOT__uram__DOT__lcen_a;
    CData/*0:0*/ __Vdly__u2__DOT__uram__DOT__lwen_a;
    CData/*0:0*/ __Vdly__u2__DOT__uram__DOT__lcen_b;
    CData/*0:0*/ __Vdly__u2__DOT__uram__DOT__lwen_b;
    // Body
    __Vdly__u1__DOT__uram__DOT__lcen_b = (1U & (~ (IData)(vlSelf->__PVT__ram_wen_b1)));
    __Vdly__u1__DOT__uram__DOT__lwen_b = (1U & (~ (IData)(vlSelf->__PVT__ram_wen_b1)));
    __Vdly__u2__DOT__uram__DOT__lcen_b = (1U & (~ (IData)(vlSelf->__PVT__ram_wen_b2)));
    __Vdly__u2__DOT__uram__DOT__lwen_b = (1U & (~ (IData)(vlSelf->__PVT__ram_wen_b2)));
    __Vdly__u2__DOT__uram__DOT__lcen_a = (1U & (~ (IData)(vlSelf->__PVT__ram_wen_a2)));
    __Vdly__u2__DOT__uram__DOT__lwen_a = (1U & (~ (IData)(vlSelf->__PVT__ram_wen_a2)));
    __Vdly__u1__DOT__uram__DOT__lcen_a = (1U & (~ (IData)(vlSelf->__PVT__ram_wen_a1)));
    __Vdly__u1__DOT__uram__DOT__lwen_a = (1U & (~ (IData)(vlSelf->__PVT__ram_wen_a1)));
    vlSelf->__PVT__u1__DOT__uram__DOT__lcen_b = __Vdly__u1__DOT__uram__DOT__lcen_b;
    vlSelf->__PVT__u1__DOT__uram__DOT__lwen_b = __Vdly__u1__DOT__uram__DOT__lwen_b;
    vlSelf->__PVT__u2__DOT__uram__DOT__lcen_b = __Vdly__u2__DOT__uram__DOT__lcen_b;
    vlSelf->__PVT__u2__DOT__uram__DOT__lwen_b = __Vdly__u2__DOT__uram__DOT__lwen_b;
    vlSelf->__PVT__u2__DOT__uram__DOT__lcen_a = __Vdly__u2__DOT__uram__DOT__lcen_a;
    vlSelf->__PVT__u2__DOT__uram__DOT__lwen_a = __Vdly__u2__DOT__uram__DOT__lwen_a;
    vlSelf->__PVT__u1__DOT__uram__DOT__lcen_a = __Vdly__u1__DOT__uram__DOT__lcen_a;
    vlSelf->__PVT__u1__DOT__uram__DOT__lwen_a = __Vdly__u1__DOT__uram__DOT__lwen_a;
    vlSelf->__PVT__u1__DOT__addr_a_d = (0x10U & (IData)(vlSelf->__PVT__u1__DOT__addr_a_d));
    vlSelf->__PVT__u2__DOT__addr_a_d = (0x10U & (IData)(vlSelf->__PVT__u2__DOT__addr_a_d));
    vlSelf->__PVT__u1__DOT__addr_b_d = (0x10U & (IData)(vlSelf->__PVT__u1__DOT__addr_b_d));
    vlSelf->__PVT__u2__DOT__addr_b_d = (0x10U & (IData)(vlSelf->__PVT__u2__DOT__addr_b_d));
    vlSelf->__PVT__u1__DOT__uram__DOT__lwmsk_a = vlSelf->__PVT__u1__DOT__wmsk_a;
    vlSelf->__PVT__u2__DOT__uram__DOT__lwmsk_a = vlSelf->__PVT__u2__DOT__wmsk_a;
    vlSelf->__PVT__u1__DOT__uram__DOT__lwmsk_b = vlSelf->__PVT__u1__DOT__wmsk_b;
    vlSelf->__PVT__u2__DOT__uram__DOT__lwmsk_b = vlSelf->__PVT__u2__DOT__wmsk_b;
    vlSelf->__PVT__u1__DOT__uram__DOT__laddr_a = (0x3ffU 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__ram_addr_a) 
                                                     >> 4U));
    vlSelf->__PVT__u2__DOT__uram__DOT__laddr_a = (0x3ffU 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__ram_addr_a) 
                                                     >> 4U));
    vlSelf->__PVT__u1__DOT__uram__DOT__lwdata_b = ((IData)(vlSelf->__PVT__ram_wen_b1)
                                                    ? 
                                                   (0xffffU 
                                                    & ((0xf000U 
                                                        & (vlSymsp->TOP.co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT____Vcellinp__inst1__WDATA_B1_i 
                                                           << 0xcU)) 
                                                       | ((0xf00U 
                                                           & (vlSymsp->TOP.co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT____Vcellinp__inst1__WDATA_B1_i 
                                                              << 8U)) 
                                                          | ((0xf0U 
                                                              & (vlSymsp->TOP.co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT____Vcellinp__inst1__WDATA_B1_i 
                                                                 << 4U)) 
                                                             | (0xfU 
                                                                & vlSymsp->TOP.co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT____Vcellinp__inst1__WDATA_B1_i)))))
                                                    : 0U);
    vlSelf->__PVT__u2__DOT__uram__DOT__lwdata_a = ((IData)(vlSelf->__PVT__ram_wen_a2)
                                                    ? 
                                                   (0xffffU 
                                                    & ((0xf000U 
                                                        & (vlSymsp->TOP.co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT____Vcellinp__inst1__WDATA_A1_i 
                                                           << 0xcU)) 
                                                       | ((0xf00U 
                                                           & (vlSymsp->TOP.co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT____Vcellinp__inst1__WDATA_A1_i 
                                                              << 8U)) 
                                                          | ((0xf0U 
                                                              & (vlSymsp->TOP.co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT____Vcellinp__inst1__WDATA_A1_i 
                                                                 << 4U)) 
                                                             | (0xfU 
                                                                & vlSymsp->TOP.co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT____Vcellinp__inst1__WDATA_A1_i)))))
                                                    : 0U);
    vlSelf->__PVT__u2__DOT__uram__DOT__lwdata_b = ((IData)(vlSelf->__PVT__ram_wen_b2)
                                                    ? 
                                                   (0xffffU 
                                                    & ((0xf000U 
                                                        & (vlSymsp->TOP.co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT____Vcellinp__inst1__WDATA_B1_i 
                                                           << 0xcU)) 
                                                       | ((0xf00U 
                                                           & (vlSymsp->TOP.co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT____Vcellinp__inst1__WDATA_B1_i 
                                                              << 8U)) 
                                                          | ((0xf0U 
                                                              & (vlSymsp->TOP.co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT____Vcellinp__inst1__WDATA_B1_i 
                                                                 << 4U)) 
                                                             | (0xfU 
                                                                & vlSymsp->TOP.co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT____Vcellinp__inst1__WDATA_B1_i)))))
                                                    : 0U);
    vlSelf->__PVT__u1__DOT__uram__DOT__laddr_b = (0x3ffU 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__ram_addr_b) 
                                                     >> 4U));
    vlSelf->__PVT__u2__DOT__uram__DOT__laddr_b = (0x3ffU 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__ram_addr_b) 
                                                     >> 4U));
    vlSelf->__PVT__u1__DOT__uram__DOT__lwdata_a = ((IData)(vlSelf->__PVT__ram_wen_a1)
                                                    ? 
                                                   (0xffffU 
                                                    & ((0xf000U 
                                                        & (vlSymsp->TOP.co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT____Vcellinp__inst1__WDATA_A1_i 
                                                           << 0xcU)) 
                                                       | ((0xf00U 
                                                           & (vlSymsp->TOP.co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT____Vcellinp__inst1__WDATA_A1_i 
                                                              << 8U)) 
                                                          | ((0xf0U 
                                                              & (vlSymsp->TOP.co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT____Vcellinp__inst1__WDATA_A1_i 
                                                                 << 4U)) 
                                                             | (0xfU 
                                                                & vlSymsp->TOP.co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT____Vcellinp__inst1__WDATA_A1_i)))))
                                                    : 0U);
}

VL_INLINE_OPT void Vco_sim_sdp_nsplit_ram_1024x36_R4W4_TDP36K__Mz1___nba_comb__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__0(Vco_sim_sdp_nsplit_ram_1024x36_R4W4_TDP36K__Mz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_sdp_nsplit_ram_1024x36_R4W4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vco_sim_sdp_nsplit_ram_1024x36_R4W4_TDP36K__Mz1___nba_comb__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__0\n"); );
    // Body
    vlSelf->__PVT__ram_wen_b1 = ((IData)(vlSymsp->TOP.co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__we) 
                                 & (~ (IData)(vlSymsp->TOP.co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__rd_addr)));
    vlSelf->__PVT__ram_wen_a2 = ((IData)(vlSymsp->TOP.co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__we) 
                                 & (IData)(vlSymsp->TOP.co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__wr_addr));
    vlSelf->__PVT__ram_wen_b2 = ((IData)(vlSymsp->TOP.co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__we) 
                                 & (IData)(vlSymsp->TOP.co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__rd_addr));
    vlSelf->__PVT__ram_wen_a1 = ((IData)(vlSymsp->TOP.co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__we) 
                                 & (~ (IData)(vlSymsp->TOP.co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__wr_addr)));
    vlSelf->__PVT__u1__DOT__ram_addr_a = ((0x3ff0U 
                                           & ((IData)(vlSymsp->TOP.co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__wr_addr) 
                                              << 3U)) 
                                          | (0xfU & (IData)(vlSelf->__PVT__u1__DOT__addr_a_d)));
    vlSelf->__PVT__u2__DOT__ram_addr_a = ((0x3ff0U 
                                           & ((IData)(vlSymsp->TOP.co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__wr_addr) 
                                              << 3U)) 
                                          | (0xfU & (IData)(vlSelf->__PVT__u2__DOT__addr_a_d)));
    vlSelf->__PVT__u1__DOT__ram_addr_b = ((0x3ff0U 
                                           & ((IData)(vlSymsp->TOP.co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__rd_addr) 
                                              << 3U)) 
                                          | (0xfU & (IData)(vlSelf->__PVT__u1__DOT__addr_b_d)));
    vlSelf->__PVT__u2__DOT__ram_addr_b = ((0x3ff0U 
                                           & ((IData)(vlSymsp->TOP.co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__rd_addr) 
                                              << 3U)) 
                                          | (0xfU & (IData)(vlSelf->__PVT__u2__DOT__addr_b_d)));
    vlSelf->__PVT__u1__DOT__wmsk_b = ((IData)(vlSelf->__PVT__ram_wen_b1)
                                       ? 0xfff0U : 0x3ffffU);
    vlSelf->__PVT__u2__DOT__wmsk_a = ((IData)(vlSelf->__PVT__ram_wen_a2)
                                       ? 0xfff0U : 0x3ffffU);
    vlSelf->__PVT__u2__DOT__wmsk_b = ((IData)(vlSelf->__PVT__ram_wen_b2)
                                       ? 0xfff0U : 0x3ffffU);
    vlSelf->__PVT__u1__DOT__wmsk_a = ((IData)(vlSelf->__PVT__ram_wen_a1)
                                       ? 0xfff0U : 0x3ffffU);
}

VL_INLINE_OPT void Vco_sim_sdp_nsplit_ram_1024x36_R4W4_TDP36K__Mz1___nba_sequent__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__1(Vco_sim_sdp_nsplit_ram_1024x36_R4W4_TDP36K__Mz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_sdp_nsplit_ram_1024x36_R4W4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vco_sim_sdp_nsplit_ram_1024x36_R4W4_TDP36K__Mz1___nba_sequent__TOP__co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__1\n"); );
    // Init
    CData/*0:0*/ __Vdly__u1__DOT__uram__DOT__lcen_a;
    CData/*0:0*/ __Vdly__u1__DOT__uram__DOT__lwen_a;
    CData/*0:0*/ __Vdly__u1__DOT__uram__DOT__lcen_b;
    CData/*0:0*/ __Vdly__u1__DOT__uram__DOT__lwen_b;
    CData/*0:0*/ __Vdly__u2__DOT__uram__DOT__lcen_a;
    CData/*0:0*/ __Vdly__u2__DOT__uram__DOT__lwen_a;
    CData/*0:0*/ __Vdly__u2__DOT__uram__DOT__lcen_b;
    CData/*0:0*/ __Vdly__u2__DOT__uram__DOT__lwen_b;
    // Body
    __Vdly__u1__DOT__uram__DOT__lcen_b = (1U & (~ (IData)(vlSelf->__PVT__ram_wen_b1)));
    __Vdly__u1__DOT__uram__DOT__lwen_b = (1U & (~ (IData)(vlSelf->__PVT__ram_wen_b1)));
    __Vdly__u2__DOT__uram__DOT__lcen_b = (1U & (~ (IData)(vlSelf->__PVT__ram_wen_b2)));
    __Vdly__u2__DOT__uram__DOT__lwen_b = (1U & (~ (IData)(vlSelf->__PVT__ram_wen_b2)));
    __Vdly__u2__DOT__uram__DOT__lcen_a = (1U & (~ (IData)(vlSelf->__PVT__ram_wen_a2)));
    __Vdly__u2__DOT__uram__DOT__lwen_a = (1U & (~ (IData)(vlSelf->__PVT__ram_wen_a2)));
    __Vdly__u1__DOT__uram__DOT__lcen_a = (1U & (~ (IData)(vlSelf->__PVT__ram_wen_a1)));
    __Vdly__u1__DOT__uram__DOT__lwen_a = (1U & (~ (IData)(vlSelf->__PVT__ram_wen_a1)));
    vlSelf->__PVT__u1__DOT__uram__DOT__lcen_b = __Vdly__u1__DOT__uram__DOT__lcen_b;
    vlSelf->__PVT__u1__DOT__uram__DOT__lwen_b = __Vdly__u1__DOT__uram__DOT__lwen_b;
    vlSelf->__PVT__u2__DOT__uram__DOT__lcen_b = __Vdly__u2__DOT__uram__DOT__lcen_b;
    vlSelf->__PVT__u2__DOT__uram__DOT__lwen_b = __Vdly__u2__DOT__uram__DOT__lwen_b;
    vlSelf->__PVT__u2__DOT__uram__DOT__lcen_a = __Vdly__u2__DOT__uram__DOT__lcen_a;
    vlSelf->__PVT__u2__DOT__uram__DOT__lwen_a = __Vdly__u2__DOT__uram__DOT__lwen_a;
    vlSelf->__PVT__u1__DOT__uram__DOT__lcen_a = __Vdly__u1__DOT__uram__DOT__lcen_a;
    vlSelf->__PVT__u1__DOT__uram__DOT__lwen_a = __Vdly__u1__DOT__uram__DOT__lwen_a;
    vlSelf->__PVT__u1__DOT__addr_a_d = (0x10U & (IData)(vlSelf->__PVT__u1__DOT__addr_a_d));
    vlSelf->__PVT__u2__DOT__addr_a_d = (0x10U & (IData)(vlSelf->__PVT__u2__DOT__addr_a_d));
    vlSelf->__PVT__u1__DOT__addr_b_d = (0x10U & (IData)(vlSelf->__PVT__u1__DOT__addr_b_d));
    vlSelf->__PVT__u2__DOT__addr_b_d = (0x10U & (IData)(vlSelf->__PVT__u2__DOT__addr_b_d));
    vlSelf->__PVT__u1__DOT__uram__DOT__lwmsk_a = vlSelf->__PVT__u1__DOT__wmsk_a;
    vlSelf->__PVT__u2__DOT__uram__DOT__lwmsk_a = vlSelf->__PVT__u2__DOT__wmsk_a;
    vlSelf->__PVT__u1__DOT__uram__DOT__lwmsk_b = vlSelf->__PVT__u1__DOT__wmsk_b;
    vlSelf->__PVT__u2__DOT__uram__DOT__lwmsk_b = vlSelf->__PVT__u2__DOT__wmsk_b;
    vlSelf->__PVT__u1__DOT__uram__DOT__laddr_a = (0x3ffU 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__ram_addr_a) 
                                                     >> 4U));
    vlSelf->__PVT__u2__DOT__uram__DOT__laddr_a = (0x3ffU 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__ram_addr_a) 
                                                     >> 4U));
    vlSelf->__PVT__u1__DOT__uram__DOT__lwdata_b = ((IData)(vlSelf->__PVT__ram_wen_b1)
                                                    ? 
                                                   (0xffffU 
                                                    & ((0xf000U 
                                                        & (vlSymsp->TOP.co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT____Vcellinp__inst1__WDATA_B1_i 
                                                           << 0xcU)) 
                                                       | ((0xf00U 
                                                           & (vlSymsp->TOP.co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT____Vcellinp__inst1__WDATA_B1_i 
                                                              << 8U)) 
                                                          | ((0xf0U 
                                                              & (vlSymsp->TOP.co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT____Vcellinp__inst1__WDATA_B1_i 
                                                                 << 4U)) 
                                                             | (0xfU 
                                                                & vlSymsp->TOP.co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT____Vcellinp__inst1__WDATA_B1_i)))))
                                                    : 0U);
    vlSelf->__PVT__u2__DOT__uram__DOT__lwdata_a = ((IData)(vlSelf->__PVT__ram_wen_a2)
                                                    ? 
                                                   (0xffffU 
                                                    & ((0xf000U 
                                                        & (vlSymsp->TOP.co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT____Vcellinp__inst1__WDATA_A1_i 
                                                           << 0xcU)) 
                                                       | ((0xf00U 
                                                           & (vlSymsp->TOP.co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT____Vcellinp__inst1__WDATA_A1_i 
                                                              << 8U)) 
                                                          | ((0xf0U 
                                                              & (vlSymsp->TOP.co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT____Vcellinp__inst1__WDATA_A1_i 
                                                                 << 4U)) 
                                                             | (0xfU 
                                                                & vlSymsp->TOP.co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT____Vcellinp__inst1__WDATA_A1_i)))))
                                                    : 0U);
    vlSelf->__PVT__u2__DOT__uram__DOT__lwdata_b = ((IData)(vlSelf->__PVT__ram_wen_b2)
                                                    ? 
                                                   (0xffffU 
                                                    & ((0xf000U 
                                                        & (vlSymsp->TOP.co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT____Vcellinp__inst1__WDATA_B1_i 
                                                           << 0xcU)) 
                                                       | ((0xf00U 
                                                           & (vlSymsp->TOP.co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT____Vcellinp__inst1__WDATA_B1_i 
                                                              << 8U)) 
                                                          | ((0xf0U 
                                                              & (vlSymsp->TOP.co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT____Vcellinp__inst1__WDATA_B1_i 
                                                                 << 4U)) 
                                                             | (0xfU 
                                                                & vlSymsp->TOP.co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT____Vcellinp__inst1__WDATA_B1_i)))))
                                                    : 0U);
    vlSelf->__PVT__u1__DOT__uram__DOT__laddr_b = (0x3ffU 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__ram_addr_b) 
                                                     >> 4U));
    vlSelf->__PVT__u2__DOT__uram__DOT__laddr_b = (0x3ffU 
                                                  & ((IData)(vlSelf->__PVT__u2__DOT__ram_addr_b) 
                                                     >> 4U));
    vlSelf->__PVT__u1__DOT__uram__DOT__lwdata_a = ((IData)(vlSelf->__PVT__ram_wen_a1)
                                                    ? 
                                                   (0xffffU 
                                                    & ((0xf000U 
                                                        & (vlSymsp->TOP.co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT____Vcellinp__inst1__WDATA_A1_i 
                                                           << 0xcU)) 
                                                       | ((0xf00U 
                                                           & (vlSymsp->TOP.co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT____Vcellinp__inst1__WDATA_A1_i 
                                                              << 8U)) 
                                                          | ((0xf0U 
                                                              & (vlSymsp->TOP.co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT____Vcellinp__inst1__WDATA_A1_i 
                                                                 << 4U)) 
                                                             | (0xfU 
                                                                & vlSymsp->TOP.co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT____Vcellinp__inst1__WDATA_A1_i)))))
                                                    : 0U);
}
