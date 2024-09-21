// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vco_sim_syn2.h for the primary calling header

#include "Vco_sim_syn2__pch.h"
#include "Vco_sim_syn2___024root.h"

VL_INLINE_OPT void Vco_sim_syn2___024root___nba_sequent__TOP__22(Vco_sim_syn2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_syn2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_syn2___024root___nba_sequent__TOP__22\n"); );
    // Body
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7085___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7068___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715931__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715931__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715878__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7011___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715878__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715878__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716115__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7262___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716115__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716115__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6814___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716291__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716291__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7384___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716230__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716291__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716291__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7384___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716230__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7377___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7373___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716223__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716223__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715732__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6849___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715732__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715732__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715854__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6996___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715854__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715854__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716017__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7157___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716017__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716017__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7248___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7232___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716094__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716094__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716161__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7270___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716161__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716161__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716177__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7319___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716177__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716177__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6848___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716238__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7391___05F)
                ? 0xbfU : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7331___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716177__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716238__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7391___05F)
                ? 0xbfbfU : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7331___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716177__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6915___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6909___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715761__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715761__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715897__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7035___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715897__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715897__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715797__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6918___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715797__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715797__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7150___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7134___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715996__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715996__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7110___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7086___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715956__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715956__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713426__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4564___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713426__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713426__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4416___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4380___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713262__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713262__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713201__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4346___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713201__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713201__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713283__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4426___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713283__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713283__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713360__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4509___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713360__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713360__DOT__s4)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4144___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713494__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713494__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713505__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713505__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713360__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713360__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713494__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713494__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713505__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713505__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713360__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713360__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713177__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4310___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713177__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713177__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713628__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4781___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4673___05F)
                ? 0x880cU : 0xccccU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4673___05F)
                                         ? 0xccc0U : 0xccccU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712991__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4128___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712991__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712991__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4681___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4677___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713527__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713527__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713463__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4599___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713463__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713463__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713444__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4583___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713444__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713444__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713247__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4150___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713247__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713247__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4172___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713582__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713582__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4401___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713247__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713582__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713582__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4401___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713247__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4195___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4159___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713041__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713041__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4494___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4484___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713340__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713340__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4540___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4528___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713386__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713386__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4196___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713224__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713224__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4437___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713283__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713224__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713224__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4437___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713283__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713322__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4466___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713322__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713322__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4307___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4161___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713153__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713153__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0079_li0079 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10401___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719254__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719254__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10404___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719253__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719253__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719251__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719251__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719253__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719253__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719251__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719251__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0102_li0102 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10154___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719135__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719135__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10147___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0104_li0104 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719131__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10282___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719128__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0104_li0104 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719131__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10282___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719128__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0105_li0105 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10150___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719132__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719132__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0027_li0027 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7460___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719546__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719546__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0025_li0025 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10698___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719550__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719550__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719549__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10699___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719549__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719549__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0051_li0051 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10435___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719421__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719421__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719420__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10571___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719420__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719420__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9550___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718520__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718520__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718506__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718506__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718520__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718520__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718506__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718506__DOT__s3));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9549___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718519__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718519__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718506__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718506__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718519__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718519__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718506__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718506__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718519__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9550___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718519__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718519__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718640__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9710___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718640__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718640__DOT__s4)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9709___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718653__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718653__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718654__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718654__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718640__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718640__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718653__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718653__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718654__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718654__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718640__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718640__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718299__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9447___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718299__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718299__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0302_li0302 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9394___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718337__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718337__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718309__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9340___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718309__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718309__DOT__s4)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9465___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718341__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718341__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718339__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718339__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718341__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718341__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718339__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718339__DOT__s3));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9367___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718330__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718330__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718333__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718333__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718330__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718330__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718333__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718333__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718323__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9429___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718323__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718323__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718323__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9367___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718323__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718323__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9354___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0306_li0306 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718334__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0304_li0304 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718335__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9423___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718269__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718330__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718330__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718333__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718333__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9477___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718323__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0306_li0306 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718334__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0304_li0304 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718335__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9423___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718269__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718330__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718330__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718333__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718333__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9477___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718323__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717870__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9006___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717870__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717870__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717830__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8903___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717830__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717830__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0487_li0487 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8937___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717901__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717901__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717814__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8942___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717814__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717814__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9860___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0156_li0156 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718819__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718820__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718820__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718811__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718811__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0156_li0156 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718819__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718820__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718820__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718811__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718811__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718959__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b22__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718959__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718959__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718961__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9996___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718961__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718961__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717715__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8867___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717715__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717715__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8866___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717717__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717717__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0607_li0607 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717715__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717717__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717717__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0607_li0607 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717715__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8786___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0621_li0621 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717702__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717701__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717701__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0621_li0621 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717702__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717701__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717701__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8398___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0992_li0992 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717293__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0990_li0990 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717294__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0992_li0992 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717293__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0990_li0990 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717294__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717284__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8266___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717284__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717284__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717285__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8289___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717285__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717285__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717287__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8440___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717287__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717287__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8417___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1002_li1002 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717288__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1006_li1006 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717285__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1004_li1004 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717287__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1002_li1002 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717288__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1006_li1006 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717285__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1004_li1004 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717287__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717280__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8290___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717280__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717280__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8432___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717281__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717281__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717280__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717280__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717281__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717281__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717280__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717280__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717283__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8436___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717283__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717283__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717289__DOT__s2 
        = (0xfU & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_735)
                    ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717289__DOT__s3)
                    : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717289__DOT__s3) 
                       >> 4U)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1016_li1016 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8291___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717235__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717235__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717271__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8339___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717271__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717271__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717247__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8390___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717247__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717247__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15780__02eC__05b7__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15780__02eS__05b6__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15780__02eC__05b6__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b3__05d)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719788__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719788__DOT__s1))));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716828__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7907___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716828__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716828__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8012___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716875__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716875__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716874__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716874__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716871__DOT__s3 
            = ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_658)
                ? 1U : 0xfeU);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716875__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716875__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716874__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716874__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716871__DOT__s3 
            = ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_658)
                ? 0U : 0xffU);
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7909___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716865__DOT__s4 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716859__DOT__s3 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1236_li1236 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716875__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716874__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716874__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716871__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716871__DOT__s3) 
                       >> 4U));
    } else {
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8012___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716865__DOT__s4 = 1U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716859__DOT__s3 = 1U;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716865__DOT__s4 = 0U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716859__DOT__s3 = 0U;
        }
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1236_li1236 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716875__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716874__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716874__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716871__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716871__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716880__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1230_li1230)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716880__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716880__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3670___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3646___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712516__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712516__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15689__02eC__05b1__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15689__02eS__05b0__05d) 
                 | ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3710___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719584__DOT__s1) 
                        >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719584__DOT__s1))));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15814__02eC__05b10__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15814__02eS__05b9__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15814__02eC__05b9__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b6__05d)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719908__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719908__DOT__s1))));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15746__02eC__05b3__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15746__02eS__05b2__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15746__02eC__05b2__05d)
                  : (~ ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3486___05F) 
                        | (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15746__02eS__05b2__05d)))));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713816__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0106)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713816__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713816__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0076) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2002_li2002 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713817__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2003_li2003 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713816__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2002_li2002 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713817__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2003_li2003 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713816__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6255___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b43__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715101__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715101__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715440__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6586___05F)
            ? 0U : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6593___05F)
                     ? 0xefU : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715553__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6507___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6636___05F)
                ? 0xa0b3U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6636___05F)
                                    ? 0x5f4cU : 0U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6475___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715354__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6507___05F)
                ? 0U : 0x88U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715553__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715553__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715354__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6507___05F)
                ? 0U : 0x8fU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715553__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715553__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715515__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6668___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715515__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715515__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715555__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5917___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715555__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715555__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6725___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6364___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715571__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715571__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6052___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6004___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714898__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714898__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6373___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6362___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715219__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715219__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715406__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6532___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715406__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715406__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715134__DOT__s2 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6277___05F)
            ? 0U : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6287___05F)
                     ? 1U : 0U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6301___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715510__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715510__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715166__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715166__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715510__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715510__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715166__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715166__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6646___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6013___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715492__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715492__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6188___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6160___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715034__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715034__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715569__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6002___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715569__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715569__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6353___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6336___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715199__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715199__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715089__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6224___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715089__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715089__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715471__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6614___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6624___05F)
                ? 0xfeU : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6624___05F)
                                  ? 0xffU : 0U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6062___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6629___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715475__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715471__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715471__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6629___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715475__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715471__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715471__DOT__s3));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6099___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715542__DOT__s3 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715001__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715001__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715542__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6130___05F)
                ? 0x4fU : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715001__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715001__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6724___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6410___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715570__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715570__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714029__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5146___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714029__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714029__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714608__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5723___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714608__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714608__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1887_li1887 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1883_li1883)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714551__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714551__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1889_li1889 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5425___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714548__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714548__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1885_li1885 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5663___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714553__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714553__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5661___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5654___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714507__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714507__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5543___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5387___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714389__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714389__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5597___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5582___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714443__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714443__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3922___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2227_li2227 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712770__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2226_li2226 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712771__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2225_li2225 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712772__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2224_li2224 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712773__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2227_li2227 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712770__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2226_li2226 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712771__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2225_li2225 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712772__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2224_li2224 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712773__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6906___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6898___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715752__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715752__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7205___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7195___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716051__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716051__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7032___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6839___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715878__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715878__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7269___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7263___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716115__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716115__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7445___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b5__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716291__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716291__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716232__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7384___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716232__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716232__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715732__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6823___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715732__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715732__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7008___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6998___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715854__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715854__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7171___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7155___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716017__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716017__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716161__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7272___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716161__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716161__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7051___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6995___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715897__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715897__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6951___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6926___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715797__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715797__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716276__DOT__s2 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7085___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7396___05F)
                ? 1U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7396___05F)
                               ? 0xeU : 0U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7110___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716275__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7396___05F)
                ? 0x1000U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715979__DOT__s4 = 0U;
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716275__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7396___05F)
                ? 0xefffU : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715979__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7132___05F)
                ? 0U : 1U);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715979__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7085___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715979__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715979__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4580___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4567___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713426__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713426__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713201__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4333___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713201__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713201__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713552__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4522___05F)
            ? 0U : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4636___05F)
                     ? 0U : 0xdfU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713552__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4704___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713552__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713552__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713582__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4730___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713582__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713582__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713177__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4308___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713177__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713177__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713628__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4276___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713628__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713628__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4145___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4131___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712991__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712991__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4457___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4151___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713303__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713303__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713534__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4687___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4457___05F)
                ? 0U : 0xfeU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4457___05F)
                                  ? 0U : 0xffU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4617___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4600___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713463__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713463__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4598___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4589___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713444__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713444__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713489__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4642___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4494___05F)
                ? 0U : 0xf8U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4494___05F)
                                  ? 0U : 0x88U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4378___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4359___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713224__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713224__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4476___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4469___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713322__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713322__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713505__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4653___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713505__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713505__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopb_r__05b22__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0080_li0080 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719253__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719251__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719251__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0080_li0080 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719253__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719251__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719251__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719129__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10282___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719129__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719129__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719130__DOT__s2 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopa_r__05b19__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10282___05F)
                ? 1U : 0xeU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10282___05F)
                                 ? 0U : 0xfU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719549__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1727_li1727)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719549__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719549__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719420__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eopa_r__05b18__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719420__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719420__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9545___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0209_li0209 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718520__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0210_li0210 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718519__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9660___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718506__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0209_li0209 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718520__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0210_li0210 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718519__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9660___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718506__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9708___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718653__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718653__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718654__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718654__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718640__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718640__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718653__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718653__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718654__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718654__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718640__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718640__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718309__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9454___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718309__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718309__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718339__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9468___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718339__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718339__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9451___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0292_li0292 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718342__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0290_li0290 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718343__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0294_li0294 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718341__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0296_li0296 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718339__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0292_li0292 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718342__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0290_li0290 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718343__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0294_li0294 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718341__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0296_li0296 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718339__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9423___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718327__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718327__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718319__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9326___05F)
                ? 0x1000U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718271__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718271__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718327__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718327__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718319__DOT__s4 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718271__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718271__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8998___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8990___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717844__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717844__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9024___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8998___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717870__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717870__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8984___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8902___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717830__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717830__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0490_li0490 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0487_li0487)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717902__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717902__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8968___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8959___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717814__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717814__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718811__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9859___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718811__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718811__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9964___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718820__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718820__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9965___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718811__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718820__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718820__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9965___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718811__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0155_li0155 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9859___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718820__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718820__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718961__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10001___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718961__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718961__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0605_li0605 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8825___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717717__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717717__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8840___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8758___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717686__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717686__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717700__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8840___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717700__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717700__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717687__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8812___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8840___05F)
                ? 0x1000U : 0U) : 0U);
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717281__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8391___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717281__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717281__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717283__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8270___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717283__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717283__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8388___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1008_li1008 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717284__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1014_li1014 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717280__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1012_li1012 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717281__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1010_li1010 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717283__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1008_li1008 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717284__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1014_li1014 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717280__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1012_li1012 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717281__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1010_li1010 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717283__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717289__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eu0__02eind)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717289__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717289__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717271__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8420___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717271__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717271__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8401___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8369___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717247__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717247__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15780__02eC__05b8__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15780__02eS__05b7__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15780__02eC__05b7__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8582___05F)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719789__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719789__DOT__s1))));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716828__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7902___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716828__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716828__DOT__s2)));
    if (vlSelf->__VdfgRegularize_hd87f99a1_0_658) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716865__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716865__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716859__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716859__DOT__s3));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716865__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716865__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716859__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716859__DOT__s3) 
                       >> 4U));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1232_li1232 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8031___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716880__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716880__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712517__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3653___05F)
            ? 0U : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3670___05F)
                     ? 0x7fU : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15689__02eC__05b2__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15689__02eS__05b1__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15689__02eC__05b1__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3715___05F)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719585__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719585__DOT__s1))));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15814__02eC__05b11__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15814__02eS__05b10__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15814__02eC__05b10__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b7__05d)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719909__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719909__DOT__s1))));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15746__02eC__05b4__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15746__02eS__05b3__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15746__02eC__05b3__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b0__05d)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719833__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719833__DOT__s1))));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6255___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715494__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715494__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715114__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715114__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715494__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715494__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715114__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715114__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715440__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6578___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715440__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715440__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715515__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6315___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715515__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715515__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6709___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5916___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715555__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715555__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715406__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6523___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715406__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715406__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715134__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6274___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715134__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715134__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715510__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6319___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715510__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715510__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715166__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6316___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715166__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715166__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6723___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b0__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715569__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715569__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715089__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6223___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715089__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715089__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715066__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6035___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715066__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715066__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715066__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6190___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715066__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715066__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715542__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6179___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715542__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715542__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715572__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6724___05F)
            ? 0xfU : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6725___05F)
                       ? 0xdfU : 0xfU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714029__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5163___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714029__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714029__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1875_li1875 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5457___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714608__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714608__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5543___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714545__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714545__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714546__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5663___05F)
                ? 2U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714544__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714544__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714543__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714543__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714541__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714541__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714411__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5564___05F)
                ? 0x100U : 0U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714545__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714545__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714546__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5663___05F)
                ? 1U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714544__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714544__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714543__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714543__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714541__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714541__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714411__DOT__s4 = 0U;
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5597___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714526__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5663___05F)
                ? 0x1000U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714457__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714457__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714526__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5663___05F)
                ? 0xefffU : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714457__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714457__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715754__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6906___05F)
            ? 0U : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6907___05F)
                     ? 0xccU : 0xfaU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716271__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7205___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7396___05F)
                ? 0xfeU : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7396___05F)
                                  ? 0xabU : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716232__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7380___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716232__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716232__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6886___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6830___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715732__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715732__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7315___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7271___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716161__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716161__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7331___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716282__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7396___05F)
                ? 1U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716195__DOT__s4 = 0U;
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716282__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7396___05F)
                ? 0xeU : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716195__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7348___05F)
                ? 0U : 1U);
    }
    vlSelf->__VdfgRegularize_hd87f99a1_0_589 = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7051___05F) 
                                                | (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7067___05F));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713538__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4416___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713538__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713538__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713538__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4690___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713538__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713538__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4355___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4334___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713201__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713201__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713552__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4705___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713552__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713552__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4648___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4151___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713494__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713494__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713528__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4648___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4673___05F)
                ? 0xefffU : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4673___05F)
                                    ? 0xbaaaU : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713582__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4729___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713582__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713582__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713360__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4507___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713360__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713360__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4331___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4309___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713177__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713177__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713628__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4731___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713628__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713628__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712998__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4145___05F)
            ? 0xf0f0U : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4151___05F)
                          ? 0xf010U : 0xf0f0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713534__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4684___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713534__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713534__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713544__DOT__s2 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4580___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4673___05F)
                ? 1U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4673___05F)
                               ? 0xeU : 0U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4598___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713543__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4673___05F)
                ? 0x1000U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713464__DOT__s3 = 0U;
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713543__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4673___05F)
                ? 0xefffU : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713464__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4617___05F)
                ? 1U : 0U);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713464__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4580___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713464__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713464__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713489__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4636___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713489__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713489__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713489__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4522___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713489__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713489__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713564__DOT__s2 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4378___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4673___05F)
                ? 4U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4673___05F)
                               ? 0xbU : 0U));
    vlSelf->__VdfgRegularize_hd87f99a1_0_186 = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4378___05F) 
                                                | (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4401___05F));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4659___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4652___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713505__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713505__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0081_li0081 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopa_r__05b22__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719251__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719251__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10149___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0107_li0107 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719129__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719130__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719130__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0107_li0107 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719129__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719130__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719130__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0026_li0026 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10702___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719549__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719549__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9705___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0183_li0183 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718653__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0182_li0182 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718654__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9794___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718640__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0183_li0183 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718653__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0182_li0182 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718654__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9794___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718640__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718299__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9418___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718299__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718299__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718299__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9446___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718299__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718299__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718309__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9409___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718309__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718309__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0308_li0308 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9485___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718333__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718333__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718319__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9432___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718319__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718319__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718319__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9429___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718319__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718319__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718271__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9330___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718271__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718271__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9328___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0310_li0310 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718330__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718271__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718271__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0310_li0310 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718330__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718271__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718271__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717871__DOT__s2 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8984___05F)
            ? 0U : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9024___05F)
                     ? 0xdU : 0U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8968___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0508_li0508 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717895__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717899__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717899__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717894__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717894__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717898__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717898__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717892__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717892__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717900__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9044___05F)
                ? 0x2feU : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717896__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717896__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717878__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717878__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717871__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717871__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0508_li0508 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717895__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717899__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717899__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717894__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717894__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717898__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717898__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717892__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717892__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717900__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9044___05F)
                ? 0xfe02U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717896__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717896__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717878__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717878__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717871__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717871__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718961__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10002___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718961__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718961__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717716__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0607_li0607)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717716__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717716__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717650__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8758___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717650__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717650__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717650__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8781___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717650__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717650__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1000_li1000 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02efasu_op_r2)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717289__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717289__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717271__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8408___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717271__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717271__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15780__02eC__05b9__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15780__02eS__05b8__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15780__02eC__05b8__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8576___05F)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719790__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719790__DOT__s1))));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712517__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3652___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712517__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712517__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15689__02eC__05b3__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15689__02eS__05b2__05d)
            ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15689__02eC__05b2__05d)
            : ((~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15689__02eS__05b2__05d)) 
               & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3679___05F)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15814__02eC__05b12__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15814__02eS__05b11__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15814__02eC__05b11__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b8__05d)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719910__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719910__DOT__s1))));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15746__02eC__05b5__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15746__02eS__05b4__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15746__02eC__05b4__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b1__05d)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719834__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719834__DOT__s1))));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6245___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715494__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715494__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715114__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715114__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715494__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715494__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715114__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715114__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715440__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6579___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715440__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715440__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715553__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6484___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715553__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715553__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6411___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715354__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715354__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715553__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715553__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715354__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715354__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715553__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715553__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715354__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6484___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715354__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715354__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6669___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6666___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715515__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715515__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6560___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6521___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715406__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715406__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6288___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6271___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715134__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715134__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715510__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6509___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715510__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715510__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6320___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6161___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715166__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715166__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6243___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6222___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715089__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715089__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715471__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6613___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715471__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715471__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6220___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6022___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715066__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715066__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715542__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6695___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715542__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715542__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5183___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5169___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714029__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714029__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714543__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5363___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714543__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714543__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714411__DOT__s3 
        = (0xffU & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_307)
                     ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714411__DOT__s4)
                     : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714411__DOT__s4) 
                        >> 8U)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714508__DOT__s2 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5568___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5597___05F)
                ? 0U : 0xfU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5597___05F)
                                 ? 0U : 4U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714457__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5579___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714457__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714457__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714457__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5568___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714457__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714457__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5572___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714508__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714508__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5611___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714457__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714508__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714508__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5611___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714457__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5662___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5579___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714508__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714508__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715754__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6897___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715754__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715754__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7386___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6915___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716232__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716232__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716284__DOT__s2 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7248___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7396___05F)
                ? 1U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7396___05F)
                               ? 0xeU : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716284__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7315___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716284__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716284__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716283__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7230___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7396___05F)
                ? 1U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7396___05F)
                               ? 0xfeU : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716283__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7315___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716283__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716283__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716281__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7348___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7396___05F)
                ? 1U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7396___05F)
                               ? 0xfffeU : 0U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7315___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716281__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716281__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716299__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7269___05F)
                ? 0U : 0xffU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716195__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716195__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716281__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716281__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716299__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7269___05F)
                ? 7U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716195__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716195__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715979__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7067___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715979__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715979__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7051___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716279__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7396___05F)
                ? 4U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715979__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715979__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716279__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7396___05F)
                ? 0xbU : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715979__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715979__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4692___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4474___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713538__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713538__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713570__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4355___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4673___05F)
                ? 2U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4673___05F)
                               ? 1U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713566__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4223___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4673___05F)
                ? 0x100U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4673___05F)
                                   ? 0xfeffU : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713566__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4355___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713566__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713566__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713568__DOT__s2 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4307___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4673___05F)
                ? 4U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4673___05F)
                               ? 0xbU : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713568__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4355___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713568__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713568__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713304__DOT__s2 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4437___05F)
            ? 0U : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4457___05F)
                     ? 1U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713304__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4420___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713304__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713304__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4458___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4416___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713304__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713304__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4706___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4096___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713552__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713552__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4736___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4174___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713582__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713582__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4514___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4083___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713360__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713360__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4331___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713569__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4673___05F)
                ? 0x888fU : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713202__DOT__s3 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713566__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713566__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713569__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4673___05F)
                ? 0xfff8U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713202__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4355___05F)
                ? 1U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713566__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713566__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712998__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4125___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712998__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712998__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713534__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4685___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713534__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713534__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4095___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4667___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713513__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4688___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713534__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4667___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713513__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4688___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713534__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4659___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713506__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713506__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713514__DOT__s4 = 0U;
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713506__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713506__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713514__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4667___05F)
                ? 0U : 0xefffU);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0106_li0106 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1945_li1945)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719130__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719130__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9660___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718517__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9540___05F)
                ? 0x71e7U : 0x8e18U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718511__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718511__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718517__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9540___05F)
                ? 0xe78eU : 0x1871U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718511__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718511__DOT__s3));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9541___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718518__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9660___05F)
                ? 0x69U : 0x96U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718517__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718517__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718511__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718511__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718518__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9660___05F)
                ? 0x96U : 0x69U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718517__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718517__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718511__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718511__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9453___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9444___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718299__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718299__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9463___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9326___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718309__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718309__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718340__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0296_li0296)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718340__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718340__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718324__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9477___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718324__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718324__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9000___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0496_li0496 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717899__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717898__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717898__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717900__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717900__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717896__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717896__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0496_li0496 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717899__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717898__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717898__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717900__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717900__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717896__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717896__DOT__s3));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8996___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717894__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717894__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0511_li0511 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717892__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717894__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717894__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0511_li0511 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717892__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717878__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9029___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717878__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717878__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717878__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8990___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717878__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717878__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9965___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0159_li0159 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718816__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718818__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9836___05F)
                ? 0x1871U : 0xef8eU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718813__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9966___05F)
                ? 0x44U : 0xffU);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0159_li0159 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718816__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718818__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9836___05F)
                ? 0x8e18U : 0x79efU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718813__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9966___05F)
                ? 0x40U : 0xfcU);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0134_li0134 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10000___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718961__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718961__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717700__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8781___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717700__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717700__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717700__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8822___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717700__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717700__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717687__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8808___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717687__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717687__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717687__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8807___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717687__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717687__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717687__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8781___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717687__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717687__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8771___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8804___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717650__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8841___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717687__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8804___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717650__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8841___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717687__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8804___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0629_li0629 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717696__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717695__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717695__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717698__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717698__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717694__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8812___05F)
                ? 0x3fffU : 0xb333U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0629_li0629 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717696__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717695__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717695__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717698__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717698__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717694__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8812___05F)
                ? 0xffffU : 0x3333U);
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8808___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0631_li0631 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717695__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717694__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717694__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0631_li0631 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717695__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717694__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717694__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717694__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8807___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717694__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717694__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8804___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717683__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717683__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717679__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717679__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717683__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717683__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717679__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717679__DOT__s3));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8766___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717716__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717716__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717679__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717679__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717716__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717716__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717679__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717679__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8425___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8362___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717271__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717271__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15780__02eC__05b10__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15780__02eS__05b9__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15780__02eC__05b9__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b6__05d)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719791__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719791__DOT__s1))));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7982___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7933___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716828__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716828__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716829__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7978___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7982___05F)
                ? 0x4000U : 0U) : 0U);
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716874__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7966___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716874__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716874__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1238_li1238 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8027___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716874__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716874__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716871__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7966___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716871__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716871__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8025___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7933___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716871__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716871__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7966___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716865__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716865__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716859__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716859__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716865__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716865__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716859__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716859__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8013___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7933___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716859__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716859__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716865__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7960___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716865__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716865__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8019___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7933___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716865__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716865__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712517__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3577___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712517__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712517__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15689__02eC__05b4__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15689__02eS__05b3__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15689__02eC__05b3__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b0__05d)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719950__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719950__DOT__s1))));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15814__02eC__05b13__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15814__02eS__05b12__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15814__02eC__05b12__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b9__05d)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719911__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719911__DOT__s1))));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15746__02eC__05b6__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15746__02eS__05b5__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15746__02eC__05b5__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b2__05d)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719835__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719835__DOT__s1))));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715494__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6098___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715494__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715494__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6648___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6035___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715494__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715494__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6594___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6582___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715440__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715440__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6481___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6508___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715354__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1661_li1661 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715553__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6508___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715354__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1661_li1661 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715553__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715516__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6669___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6636___05F)
                ? 0x7fU : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6636___05F)
                                  ? 0x80U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715550__DOT__s2 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6373___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6636___05F)
                ? 8U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6636___05F)
                               ? 7U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715550__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6560___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715550__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715550__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715505__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6288___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6636___05F)
                ? 0x80U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6636___05F)
                                  ? 0x7fU : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6664___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6034___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715510__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715510__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6321___05F 
        = ((~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6288___05F)) 
           & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6320___05F));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715484__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6243___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6636___05F)
                ? 0x40U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6636___05F)
                                  ? 0xbfU : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6268___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6249___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715114__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715114__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715115__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6243___05F)
            ? 0U : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6268___05F)
                     ? 1U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6625___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6611___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715471__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715471__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6696___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6694___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715542__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715542__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715001__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6115___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715001__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715001__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6155___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6109___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715001__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715001__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6155___05F) {
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6188___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715035__DOT__s1 = 1U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715476__DOT__s4 = 1U;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715035__DOT__s1 = 0U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715476__DOT__s4 = 0U;
        }
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715035__DOT__s1 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715476__DOT__s4 = 0U;
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6629___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715523__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6636___05F)
                ? 0x40U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715476__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715476__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715523__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6636___05F)
                ? 0xbfU : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715476__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715476__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715572__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6635___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715572__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715572__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715572__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6709___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715572__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715572__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5183___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714532__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714532__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714092__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5245___05F)
                ? 0U : 0x8fU);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714532__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714532__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714092__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5245___05F)
                ? 0U : 0x88U);
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5308___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1893_li1893 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714545__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1891_li1891 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714546__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714544__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714544__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714541__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714541__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714543__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714543__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1893_li1893 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714545__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1891_li1891 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714546__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714544__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714544__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714541__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714541__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714543__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714543__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714411__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5327___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714411__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714411__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714411__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5308___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714411__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714411__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5285___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1895_li1895 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714544__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1899_li1899 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714541__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1897_li1897 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714543__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5565___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714411__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1895_li1895 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714544__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1899_li1899 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714541__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1897_li1897 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714543__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5565___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714411__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715754__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6895___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715754__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715754__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7269___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1566_li1566 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716284__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716283__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716283__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716281__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716281__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716195__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716195__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1566_li1566 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716284__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716283__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716283__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716281__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716281__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716195__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716195__DOT__s3));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7248___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1569_li1569 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716283__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716281__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716281__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716195__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716195__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1569_li1569 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716283__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716281__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716281__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716195__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716195__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1572_li1572 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7230___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716281__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716281__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716257__DOT__s2 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6973___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7396___05F)
                ? 8U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7396___05F)
                               ? 7U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7349___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7230___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716195__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716195__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716299__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6883___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716299__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716299__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713539__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4692___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4673___05F)
                ? 0xefU : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4673___05F)
                                  ? 0x10U : 0U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4277___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2109_li2109 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713570__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2111_li2111 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713568__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2109_li2109 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713570__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2111_li2111 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713568__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713202__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4307___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713202__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713202__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713202__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4277___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713202__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713202__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4356___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4223___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713202__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713202__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713566__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4307___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713566__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713566__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2115_li2115 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4277___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713566__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713566__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4514___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713558__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713558__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713369__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4522___05F)
                ? 0x1000U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4643___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713489__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713558__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713558__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713369__DOT__s4 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4643___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713489__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713628__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4670___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713628__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713628__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4782___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4779___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713628__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713628__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712998__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4123___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712998__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712998__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713514__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4392___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713514__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713514__DOT__s4)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9664___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718518__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718518__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718517__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718517__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718518__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718518__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718517__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718517__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4505___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4496___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713351__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713351__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9794___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718651__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718651__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718652__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718652__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718644__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718644__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718651__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718651__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718652__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718652__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718644__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718644__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718316__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9463___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9469___05F)
                ? 0x100U : 0U) : 0U);
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718340__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9428___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718340__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718340__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0298_li0298 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9418___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718340__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718340__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718326__DOT__s2 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9434___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9477___05F)
                ? 7U : 5U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9477___05F)
                               ? 5U : 7U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718326__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9329___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718326__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718326__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9478___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9290___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718324__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718324__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718319__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9430___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718319__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718319__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9473___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9434___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718319__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718319__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9025___05F 
        = (1U & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_817)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717871__DOT__s1)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717871__DOT__s1) 
                     >> 1U)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9001___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0499_li0499 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717898__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717896__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717896__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0499_li0499 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717898__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717896__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717896__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717893__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0511_li0511)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717893__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717893__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717893__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9029___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717893__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717893__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8980___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0514_li0514 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717894__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9032___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717878__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0517_li0517 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717893__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0514_li0514 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717894__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9032___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717878__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0517_li0517 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717893__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717900__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8936___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717900__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717900__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718817__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9845___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9965___05F)
                ? 0x96U : 0x69U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9965___05F)
                                     ? 0x69U : 0x96U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9846___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718817__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718817__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718818__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718818__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718817__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718817__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718818__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718818__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718813__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9850___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718813__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718813__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0609_li0609 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8865___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717716__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717716__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0625_li0625 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8736___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717700__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717700__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717698__DOT__s2 
        = (0xfU & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_790)
                    ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717698__DOT__s3)
                    : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717698__DOT__s3) 
                       >> 4U)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717272__DOT__s2 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8410___05F)
            ? 0U : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8425___05F)
                     ? 1U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15780__02eC__05b11__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15780__02eS__05b10__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15780__02eC__05b10__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b7__05d)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719792__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719792__DOT__s1))));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716829__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7971___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716829__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716829__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716872__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8025___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8023___05F)
                ? 0x80U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8023___05F)
                                  ? 0xffU : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716870__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8013___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8023___05F)
                ? 0xff4fU : 0x4f4fU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8023___05F)
                                         ? 0x4fffU : 0x4f4fU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15712__02eS__05b2__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b6__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712517__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712517__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15689__02eC__05b5__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15689__02eS__05b4__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15689__02eC__05b4__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b1__05d)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719951__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719951__DOT__s1))));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15814__02eC__05b14__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15814__02eS__05b13__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15814__02eC__05b13__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3442___05F)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719912__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719912__DOT__s1))));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15746__02eC__05b7__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15746__02eS__05b6__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15746__02eC__05b6__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b3__05d)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719836__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719836__DOT__s1))));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715552__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6701___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6636___05F)
                ? 1U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6636___05F)
                               ? 2U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1663_li1663 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6508___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715552__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715552__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715551__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6701___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715551__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715551__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1665_li1665 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6508___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715551__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715551__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715548__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6395___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6636___05F)
                ? 0xefffU : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6636___05F)
                                    ? 0x1000U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715548__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6508___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715548__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715548__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0623_li0623 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8758___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717701__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717701__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715548__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6701___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715548__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715548__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6508___05F) {
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6560___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715536__DOT__s4 = 0x1000U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715531__DOT__s3 = 0x10U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715407__DOT__s4 = 0x100U;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715536__DOT__s4 = 0U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715531__DOT__s3 = 0U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715407__DOT__s4 = 0U;
        }
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715536__DOT__s4 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715531__DOT__s3 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715407__DOT__s4 = 0U;
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715549__DOT__s2 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6353___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6636___05F)
                ? 4U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6636___05F)
                               ? 0xbU : 0U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6395___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715549__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715549__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715536__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715536__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715549__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715549__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715536__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715536__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715536__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6155___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715536__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715536__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6395___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715531__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715531__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715407__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715407__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715531__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715531__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715407__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715407__DOT__s4));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6373___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715548__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715548__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715531__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715531__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715407__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715407__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715536__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715536__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715548__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715548__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715531__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715531__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715407__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715407__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715536__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715536__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6353___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6685___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715531__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715407__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715407__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6685___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715531__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715407__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715407__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6335___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715532__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6636___05F)
                ? 0xeaU : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6561___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715407__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715532__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6636___05F)
                ? 0xbfU : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6561___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715407__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6690___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6353___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715536__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715536__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1667_li1667 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6508___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715550__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715550__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6664___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715516__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715516__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715517__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6636___05F)
                ? 7U : 0U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715516__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715516__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715517__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6636___05F)
                ? 8U : 0U);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715543__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6696___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6636___05F)
                ? 0xef00U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6636___05F)
                                    ? 0x10ffU : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6189___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6085___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715035__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715035__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715443__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6594___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715443__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715443__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6052___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715522__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6636___05F)
                ? 0xabaaU : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715476__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715476__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715522__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6636___05F)
                ? 0xfeffU : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715476__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715476__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715476__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6594___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715476__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715476__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6630___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6085___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715476__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715476__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1659_li1659 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6723___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715572__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715572__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714532__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5683___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714532__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714532__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714092__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5160___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714092__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714092__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714542__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1899_li1899)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714542__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714542__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1901_li1901 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5327___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714542__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714542__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714512__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5661___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5663___05F)
                ? 0x7fU : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5663___05F)
                                  ? 0x80U : 0U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5662___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714512__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714512__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714510__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714510__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714512__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714512__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714510__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714510__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714510__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5661___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714510__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714510__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715754__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6896___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715754__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715754__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716299__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7452___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716299__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716299__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713569__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2111_li2111)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713569__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713569__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713569__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4307___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713569__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713569__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713558__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4709___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713558__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713558__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713629__DOT__s2 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4736___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4782___05F)
                ? 0U : 8U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4782___05F)
                               ? 0U : 0xfU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712998__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4068___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712998__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712998__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713514__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu5__02eprod__05b47__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713514__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713514__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9663___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718518__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718518__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718517__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718517__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718518__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718518__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718517__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718517__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9665___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9540___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718511__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718511__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718644__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9704___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718644__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718644__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9702___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0185_li0185 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718651__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0184_li0184 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718652__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718644__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718644__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0185_li0185 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718651__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0184_li0184 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718652__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718644__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718644__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718316__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9453___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718316__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718316__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718325__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9478___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9283___05F)
                ? 1U : 3U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9283___05F)
                               ? 0U : 3U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0320_li0320 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9329___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718325__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718325__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9283___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0316_li0316 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718327__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0312_li0312 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718271__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0318_li0318 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718326__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0316_li0316 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718327__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0312_li0312 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718271__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0318_li0318 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718326__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718329__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0312_li0312)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718329__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718329__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0314_li0314 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9283___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718329__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718329__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717872__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9025___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717872__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717872__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717900__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8935___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717900__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717900__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0502_li0502 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8992___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717896__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717896__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9847___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718817__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718817__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718818__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718818__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718817__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718817__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718818__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718818__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718818__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9845___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718818__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718818__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718813__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9849___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718813__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718813__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717698__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eu0__02eind)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717698__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717698__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714527__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5679___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5663___05F)
                ? 0x40U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5663___05F)
                                  ? 0xbfU : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0641_li0641 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8828___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717683__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717683__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717684__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0641_li0641)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eexp_r__05b7__05d)
                ? 0xf5U : 0x55U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eexp_r__05b7__05d)
                                     ? 0x77U : 0xd5U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8833___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8762___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717679__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717679__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717680__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8758___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8833___05F)
                ? 1U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8833___05F)
                               ? 0x80U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717272__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8401___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717272__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717272__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15780__02eC__05b12__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15780__02eS__05b11__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15780__02eC__05b11__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b8__05d)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719793__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719793__DOT__s1))));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716829__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7968___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716829__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716829__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716872__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7905___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716872__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716872__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8019___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716866__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716866__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716867__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7993___05F)
                ? 1U : 3U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716866__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716866__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716867__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7993___05F)
                ? 2U : 3U);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716860__DOT__s2 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8006___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8013___05F)
                ? 8U : 0U) : 0U);
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7980___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716860__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716860__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1246_li1246 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716866__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1244_li1244 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716867__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716860__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716860__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1246_li1246 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716866__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1244_li1244 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716867__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15712__02eC__05b3__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15712__02eS__05b2__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15712__02eC__05b2__05d)
                  : (~ ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3577___05F) 
                        | (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3670___05F)))));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15689__02eC__05b6__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15689__02eS__05b5__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15689__02eC__05b5__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b2__05d)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719952__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719952__DOT__s1))));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15814__02eC__05b15__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15814__02eS__05b14__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15814__02eC__05b14__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b11__05d)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719913__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719913__DOT__s1))));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15746__02eC__05b8__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15746__02eS__05b7__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15746__02eC__05b7__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b4__05d)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719837__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719837__DOT__s1))));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715500__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6648___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715500__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715500__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715443__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6566___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715443__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715443__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5686___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5213___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714532__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714532__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714092__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5208___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714092__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714092__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5611___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714485__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5638___05F)
                ? 8U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714464__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5617___05F)
                ? 0x4000U : 0U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714485__DOT__s2 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714464__DOT__s4 = 0U;
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6908___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6843___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715754__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715754__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716299__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7441___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716299__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716299__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713558__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4708___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713558__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713558__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4712___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4151___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713558__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713558__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713369__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4506___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713369__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713369__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713369__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4505___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713369__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713369__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4494___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713560__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4673___05F)
                ? 4U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713369__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713369__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713560__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4673___05F)
                ? 0xbU : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713369__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713369__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716224__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7377___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716224__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716224__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713629__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4727___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713629__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713629__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4152___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4079___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712998__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712998__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713464__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4561___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713464__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713464__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4618___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4540___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713464__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713464__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4618___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713473__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713473__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713476__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713476__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713475__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713475__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713467__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4620___05F)
                ? 4U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713490__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4643___05F)
                ? 0x1000U : 0U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713473__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713473__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713476__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713476__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713475__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713475__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713467__DOT__s2 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713490__DOT__s4 = 0U;
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713514__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4105___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713514__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713514__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9661___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0211_li0211 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718518__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0212_li0212 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718517__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0211_li0211 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718518__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0212_li0212 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718517__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9665___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718514__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718514__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718516__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9535___05F)
                ? 1U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718515__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9666___05F)
                ? 0xeU : 0xbU);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718514__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718514__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718516__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9535___05F)
                ? 2U : 1U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718515__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9666___05F)
                ? 0xdU : 2U);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718316__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9441___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718316__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718316__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9473___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0324_li0324 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718321__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718322__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718322__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0324_li0324 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718321__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718322__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718322__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717872__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eu1__02enan_sign)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717872__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717872__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0493_li0493 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8934___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717900__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717900__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717897__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0502_li0502)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717897__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717897__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9032___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717889__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717889__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717888__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717888__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717883__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9017___05F)
                ? 0x5dU : 0xf5U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717884__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717884__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717886__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717886__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717887__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9008___05F)
                ? 0x7733U : 0x33f3U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717891__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9044___05F)
                ? 0xff4fU : 0x4f4fU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717881__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717881__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717889__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717889__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717888__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717888__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717883__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9017___05F)
                ? 0xddU : 0x55U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717884__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717884__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717886__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717886__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717887__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9008___05F)
                ? 0x3333U : 0xf3f3U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717891__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9044___05F)
                ? 0x4fffU : 0x4f4fU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717881__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717881__DOT__s3));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9844___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0157_li0157 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718817__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0158_li0158 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718818__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0157_li0157 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718817__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0158_li0158 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718818__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9967___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9848___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718813__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718813__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8841___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717688__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717688__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717691__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717691__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717692__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8806___05F)
                ? 7U : 5U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717688__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717688__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717691__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717691__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717692__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8806___05F)
                ? 0xdU : 5U);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0627_li0627 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02efasu_op_r2)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717698__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717698__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717684__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8829___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717684__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717684__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8426___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1016_li1016)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717272__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717272__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15780__02eC__05b13__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15780__02eS__05b12__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15780__02eC__05b12__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b9__05d)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719794__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719794__DOT__s1))));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716829__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7938___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716829__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716829__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7983___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7966___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716829__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716829__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716872__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7985___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716872__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716872__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716870__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7960___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716870__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716870__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716870__DOT__s2 
        = (0xfU & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_659)
                    ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716870__DOT__s3)
                    : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716870__DOT__s3) 
                       >> 4U)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8014___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7979___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716860__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716860__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15712__02eC__05b4__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15712__02eS__05b3__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15712__02eC__05b3__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7783___05F)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719881__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719881__DOT__s1))));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15689__02eC__05b7__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15689__02eS__05b6__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15689__02eC__05b6__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b3__05d)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719953__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719953__DOT__s1))));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15814__02eC__05b16__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15814__02eS__05b15__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15814__02eC__05b15__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9151___05F)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719914__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719914__DOT__s1))));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15746__02eC__05b9__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15746__02eS__05b8__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15746__02eC__05b8__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b5__05d)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719838__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719838__DOT__s1))));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715500__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6007___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715500__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715500__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6597___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6576___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715443__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715443__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5246___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5200___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714092__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714092__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5565___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1903_li1903 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714540__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714512__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714512__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714528__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714528__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714527__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714527__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714538__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714538__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714526__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714526__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714458__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5611___05F)
                ? 0x40U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714510__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714510__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714485__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714485__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714464__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714464__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1903_li1903 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714540__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714512__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714512__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714528__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714528__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714527__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714527__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714538__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714538__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714526__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714526__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714458__DOT__s3 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714510__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714510__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714485__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714485__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714464__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714464__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714539__DOT__s2 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5686___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5663___05F)
                ? 4U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5663___05F)
                               ? 0xbU : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714539__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5565___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714539__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714539__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6908___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716238__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716238__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715762__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6915___05F)
                ? 0x40U : 0U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716238__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716238__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715762__DOT__s3 = 0U;
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716282__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1572_li1572)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716282__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716282__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1575_li1575 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7348___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716282__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716282__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7453___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7445___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716299__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716299__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716273__DOT__s2 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7150___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7396___05F)
                ? 8U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7396___05F)
                               ? 7U : 0U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7349___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716273__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716273__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716279__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716279__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716280__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7396___05F)
                ? 2U : 0U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716273__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716273__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716279__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716279__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716280__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7396___05F)
                ? 1U : 0U);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716272__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7171___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7396___05F)
                ? 0x40U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7396___05F)
                                  ? 0xbfU : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716272__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7349___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716272__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716272__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716277__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7032___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7396___05F)
                ? 0x40U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7396___05F)
                                  ? 0xbfU : 0U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7349___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716277__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716277__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716278__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716278__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716266__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716266__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716275__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716275__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716270__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716270__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716277__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716277__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716278__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716278__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716266__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716266__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716275__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716275__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716270__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716270__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716052__DOT__s2 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7189___05F)
            ? 0U : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7205___05F)
                     ? 1U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716052__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7171___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716052__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716052__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7206___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7150___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716052__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716052__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7206___05F) {
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7349___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716256__DOT__s2 = 4U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716196__DOT__s4 = 0x1000U;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716256__DOT__s2 = 0U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716196__DOT__s4 = 0U;
        }
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716266__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716266__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716256__DOT__s2 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716196__DOT__s4 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716266__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716266__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713569__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4179___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713569__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713569__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713565__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4401___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4673___05F)
                ? 2U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4673___05F)
                               ? 1U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713563__DOT__s2 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4195___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4673___05F)
                ? 8U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4673___05F)
                               ? 7U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713563__DOT__s1 
        = (3U & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_186)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713563__DOT__s2)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713563__DOT__s2) 
                     >> 2U)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4356___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2117_li2117 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713565__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2121_li2121 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713563__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713564__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713564__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2117_li2117 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713565__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2121_li2121 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713563__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713564__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713564__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2119_li2119 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4401___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713564__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713564__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713561__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4706___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4673___05F)
                ? 0x1000U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4673___05F)
                                    ? 0xefffU : 0U));
    if (vlSelf->__VdfgRegularize_hd87f99a1_0_186) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713561__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713561__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713542__DOT__s3 = 0U;
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713561__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713561__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713542__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4643___05F)
                ? 0x10U : 0U);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2107_li2107 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4091___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713629__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713629__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4356___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713561__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713561__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713553__DOT__s2 
            = ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_186)
                ? 0U : 1U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713545__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4643___05F)
                ? 0x100U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713542__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713542__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713561__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713561__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713553__DOT__s2 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713545__DOT__s4 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713542__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713542__DOT__s3));
    }
    if (vlSelf->__VdfgRegularize_hd87f99a1_0_186) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713490__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713490__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713545__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713545__DOT__s4));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713490__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713490__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713545__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713545__DOT__s4) 
                        >> 8U));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713562__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4152___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4673___05F)
                ? 0x40U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4673___05F)
                                  ? 0xbfU : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713562__DOT__s2 
        = (0xfU & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_186)
                    ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713562__DOT__s3)
                    : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713562__DOT__s3) 
                       >> 4U)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713490__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4356___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713490__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713490__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4195___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713561__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713561__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713553__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713553__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713542__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713542__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713490__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713490__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713561__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713561__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713553__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713553__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713542__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713542__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713490__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713490__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713546__DOT__s2 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4617___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4673___05F)
                ? 0xbU : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4673___05F)
                                 ? 4U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713545__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4540___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713545__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713545__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713545__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4195___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713545__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713545__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713562__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4356___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713562__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713562__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4668___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4111___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713514__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713514__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718515__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9535___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718515__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718515__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9539___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0215_li0215 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718514__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0213_li0213 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718516__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0214_li0214 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718515__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0215_li0215 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718514__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0213_li0213 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718516__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0214_li0214 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718515__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9798___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9700___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718644__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718644__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718316__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9438___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718316__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718316__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9470___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0312_li0312)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718316__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718316__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718322__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9292___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718322__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718322__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717872__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eu1__02eresult_zero_sign)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717872__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717872__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0505_li0505 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9005___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717897__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717897__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717888__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9009___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717888__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717888__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717883__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9027___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717883__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717883__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717884__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9011___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717884__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717884__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9039___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717886__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717886__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717887__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717887__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717886__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717886__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717887__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717887__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717881__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9028___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717881__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717881__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9967___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0161_li0161 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718814__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718815__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b19__05d)
                ? 0x420bU : 0x400U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0161_li0161 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718814__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718815__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b19__05d)
                ? 0xccf0U : 0xffffU);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717688__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8805___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717688__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717688__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8843___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717691__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717691__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717692__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717692__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717691__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717691__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717692__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717692__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8828___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717694__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717694__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0639_li0639 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717688__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0637_li0637 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717691__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0635_li0635 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717692__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717694__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717694__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0639_li0639 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717688__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0637_li0637 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717691__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0635_li0635 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717692__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0633_li0633 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8847___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717694__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717694__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717680__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8750___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717680__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717680__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717274__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8426___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717274__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717274__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15780__02eC__05b14__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15780__02eS__05b13__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15780__02eC__05b13__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8544___05F)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719795__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719795__DOT__s1))));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1240_li1240 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7896___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716872__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716872__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716870__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eu0__02eind)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716870__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716870__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716861__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8014___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716861__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716861__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7923___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716862__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8014___05F)
                ? 0xfeU : 0xffU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716861__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716861__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716862__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8014___05F)
                ? 0xffU : 0xfeU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716861__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716861__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15712__02eC__05b5__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15712__02eS__05b4__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15712__02eC__05b4__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b1__05d)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719882__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719882__DOT__s1))));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15689__02eC__05b8__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15689__02eS__05b7__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15689__02eC__05b7__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b4__05d)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719954__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719954__DOT__s1))));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15814__02eC__05b17__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15814__02eS__05b16__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15814__02eC__05b16__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b13__05d)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719915__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719915__DOT__s1))));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15746__02eC__05b10__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15746__02eS__05b9__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15746__02eC__05b9__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b6__05d)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719839__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719839__DOT__s1))));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6654___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b12__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715500__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715500__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1669_li1669 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6699___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715548__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715548__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5246___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1915_li1915 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714512__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1909_li1909 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714528__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714527__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714527__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714526__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714526__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1915_li1915 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714512__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1909_li1909 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714528__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714527__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714527__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714526__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714526__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714526__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5679___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714526__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714526__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5246___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714458__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714458__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1917_li1917 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714510__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5639___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714485__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714464__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714464__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714458__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714458__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1917_li1917 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714510__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5639___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714485__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714464__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714464__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714538__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5691___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714538__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714538__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1907_li1907 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5686___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714538__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714538__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1905_li1905 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5691___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714539__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714539__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716238__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7097___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716238__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716238__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715762__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6893___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715762__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715762__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716300__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7453___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716300__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716300__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7133___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7032___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715979__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715979__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7133___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1596_li1596 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716273__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716272__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716272__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716270__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716270__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1596_li1596 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716273__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716272__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716272__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716270__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716270__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716270__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7171___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716270__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716270__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7150___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1599_li1599 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716272__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1602_li1602 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716270__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1599_li1599 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716272__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1602_li1602 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716270__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7133___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716256__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716256__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716196__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716196__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716266__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716266__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716256__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716256__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716196__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716196__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716266__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716266__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716277__DOT__s1 
        = (3U & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_589)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716277__DOT__s2)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716277__DOT__s2) 
                     >> 2U)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7132___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1581_li1581 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716279__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1578_li1578 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716280__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716278__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716278__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1581_li1581 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716279__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1578_li1578 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716280__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716278__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716278__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1584_li1584 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7051___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716278__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716278__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716275__DOT__s2 
        = (0xfU & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_589)
                    ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716275__DOT__s3)
                    : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716275__DOT__s3) 
                       >> 4U)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7132___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1587_li1587 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716277__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716275__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716275__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1587_li1587 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716277__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716275__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716275__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1590_li1590 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7032___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716275__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716275__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2113_li2113 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4721___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713569__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713569__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713559__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4712___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4673___05F)
                ? 0x10U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4673___05F)
                                  ? 0xefU : 0U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9798___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718646__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718646__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718648__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718648__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718646__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718646__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718648__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718648__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718650__DOT__s2 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9699___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9798___05F)
                ? 9U : 6U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9798___05F)
                               ? 6U : 9U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718322__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eexp_r__05b6__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718322__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718322__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0547_li0547 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02esign)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717872__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717872__DOT__s1)));
    if (vlSelf->__VdfgRegularize_hd87f99a1_0_818) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717883__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717883__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717887__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717887__DOT__s3));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717883__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717883__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717887__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717887__DOT__s3) 
                       >> 4U));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717884__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8923___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717884__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717884__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717886__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9008___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717886__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717886__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8976___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0523_li0523 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717889__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717891__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717891__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0523_li0523 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717889__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717891__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717891__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717891__DOT__s2 
        = (0xfU & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_93)
                    ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717891__DOT__s3)
                    : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717891__DOT__s3) 
                       >> 4U)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9020___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0541_li0541 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717881__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0538_li0538 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717883__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0535_li0535 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717884__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0532_li0532 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717886__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717887__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717887__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0541_li0541 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717881__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0538_li0538 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717883__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0535_li0535 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717884__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0532_li0532 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717886__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717887__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717887__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8976___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0526_li0526 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717888__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0529_li0529 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717887__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0526_li0526 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717888__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0529_li0529 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717887__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718815__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b18__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718815__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718815__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717684__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eexp_r__05b6__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717684__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717684__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0643_li0643 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8830___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717684__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717684__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717680__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8745___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717680__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717680__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8834___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eexp_r__05b6__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717680__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717680__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717274__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eu1__02enan_sign)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717274__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717274__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15780__02eC__05b15__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15780__02eS__05b14__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15780__02eC__05b14__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8534___05F)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719796__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719796__DOT__s1))));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716864__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7983___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716864__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716864__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1248_li1248 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7960___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716864__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716864__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7983___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716863__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716863__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716848__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8001___05F)
                ? 0xffffU : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716854__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716854__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716863__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716863__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716848__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8001___05F)
                ? 0x8000U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716854__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716854__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716854__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8006___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716854__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716854__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1242_li1242 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02efasu_op_r2)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716870__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716870__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716862__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eu0__02einf)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716862__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716862__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15712__02eC__05b6__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15712__02eS__05b5__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15712__02eC__05b5__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b2__05d)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719883__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719883__DOT__s1))));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15689__02eC__05b9__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15689__02eS__05b8__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15689__02eC__05b8__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b5__05d)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719955__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719955__DOT__s1))));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15814__02eC__05b18__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15814__02eS__05b17__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15814__02eC__05b17__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b14__05d)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719916__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719916__DOT__s1))));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15746__02eC__05b11__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15746__02eS__05b10__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15746__02eC__05b10__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b7__05d)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719840__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719840__DOT__s1))));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1671_li1671 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1669_li1669)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715549__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715549__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6189___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715523__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715523__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715532__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715532__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715523__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715523__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715532__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715532__DOT__s3));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6685___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715532__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715532__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715543__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715543__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715544__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6636___05F)
                ? 0x10U : 0U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715532__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715532__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715543__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715543__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715544__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6636___05F)
                ? 0xefU : 0U);
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6630___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715516__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715516__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715517__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715517__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715505__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715505__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715516__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715516__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715517__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715517__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715505__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715505__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715485__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6220___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6636___05F)
                ? 0x8000U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6636___05F)
                                    ? 0x7fffU : 0U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6630___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715485__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715485__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715502__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715502__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715485__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715485__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715502__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715502__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715504__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6654___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6636___05F)
                ? 0x80U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6636___05F)
                                  ? 0x7fU : 0U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6630___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715504__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715504__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715501__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6561___05F)
                ? 4U : 0U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715504__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715504__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715501__DOT__s2 = 0U;
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5672___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1911_li1911 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714527__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1913_li1913 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714526__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1911_li1911 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714527__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1913_li1913 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714526__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5108___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714458__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714458__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714464__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714464__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714458__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714458__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714464__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714464__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714511__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1917_li1917)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714511__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714511__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714486__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5639___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714486__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714486__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5106___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714487__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5639___05F)
                ? 7U : 5U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5612___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714458__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714486__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714486__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5618___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714464__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714487__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5639___05F)
                ? 5U : 7U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5612___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714458__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714486__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714486__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5618___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714464__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716238__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7387___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716238__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716238__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715762__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6888___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715762__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715762__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7410___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6989___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716256__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716256__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716196__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7008___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716196__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716196__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716196__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6989___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716196__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716196__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7350___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6973___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716196__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716196__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4476___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713529__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4673___05F)
                ? 8U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4523___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713369__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713529__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4673___05F)
                ? 7U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4523___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713369__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713370__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4458___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4523___05F)
                ? 0x1000U : 0U) : 0U);
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713370__DOT__s3 
        = (0xffU & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_186)
                     ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713370__DOT__s4)
                     : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713370__DOT__s4) 
                        >> 8U)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713370__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4356___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713370__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713370__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4195___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2123_li2123 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713562__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713370__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713370__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2123_li2123 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713562__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713370__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713370__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4152___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2125_li2125 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713561__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4707___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713553__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4696___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713542__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4644___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713490__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4699___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713545__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4524___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713370__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2125_li2125 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713561__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4707___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713553__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4696___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713542__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4644___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713490__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4699___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713545__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4524___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713370__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718650__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9698___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718650__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718650__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9695___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0187_li0187 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718646__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0188_li0188 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718648__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0186_li0186 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718650__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0187_li0187 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718646__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0188_li0188 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718648__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0186_li0186 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718650__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718318__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9470___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718318__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718318__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0322_li0322 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eexp_r__05b7__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718322__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718322__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717891__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eu0__02eind)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717891__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717891__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717882__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0541_li0541)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717882__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717882__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718815__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1729_li1729)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718815__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718815__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717274__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eu1__02eresult_zero_sign)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717274__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717274__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15780__02eC__05b16__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15780__02eS__05b15__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15780__02eC__05b15__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3858___05F)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719797__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719797__DOT__s1))));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716863__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7991___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716863__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716863__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716848__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7899___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716848__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716848__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716862__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eu0__02esnan)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716862__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716862__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15712__02eC__05b7__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15712__02eS__05b6__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15712__02eC__05b6__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7687___05F)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719884__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719884__DOT__s1))));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15689__02eC__05b10__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15689__02eS__05b9__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15689__02eC__05b9__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7546___05F)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719956__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719956__DOT__s1))));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15814__02eC__05b19__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15814__02eS__05b18__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15814__02eC__05b18__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b15__05d)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719917__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719917__DOT__s1))));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15746__02eC__05b12__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15746__02eS__05b11__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15746__02eC__05b11__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b8__05d)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719841__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719841__DOT__s1))));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6690___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715538__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6636___05F)
                ? 1U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715537__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715537__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715538__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6636___05F)
                ? 2U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715537__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715537__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1681_li1681 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6684___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715532__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715532__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715543__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6154___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715543__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715543__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6269___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6220___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715115__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715115__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715544__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6154___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715544__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715544__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6109___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715543__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715543__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715544__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715544__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715543__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715543__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715544__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715544__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6115___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1675_li1675 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715543__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1673_li1673 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715544__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1675_li1675 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715543__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1673_li1673 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715544__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6321___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715479__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6630___05F)
                ? 2U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715485__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715485__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715502__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715502__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715504__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715504__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715501__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715501__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715479__DOT__s1 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715485__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715485__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715502__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715502__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715504__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715504__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715501__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715501__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6655___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6654___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715501__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715501__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6561___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715523__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715523__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715477__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6630___05F)
                ? 0x4000U : 0U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715523__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715523__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715477__DOT__s4 = 0U;
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715477__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6321___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715477__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715477__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715444__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6561___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6597___05F)
                ? 0x4000U : 0U) : 0U);
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715444__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6321___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715444__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715444__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6675___05F 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6561___05F) 
           & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6189___05F));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715505__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6320___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715505__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715505__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714511__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5653___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714511__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714511__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714487__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5613___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714487__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714487__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7392___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6864___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716238__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716238__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716300__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7179___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716300__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716300__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1563_li1563 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7439___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716300__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716300__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1608_li1608 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7418___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716266__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716266__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7410___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716257__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716257__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716262__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7396___05F)
                ? 0xf8ffU : 0U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716257__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716257__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716262__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7396___05F)
                ? 0xfff8U : 0U);
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7008___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1614_li1614 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716257__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716262__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716262__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1614_li1614 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716257__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716262__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716262__DOT__s4));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4707___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713560__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713560__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713559__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713559__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713560__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713560__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713559__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713559__DOT__s3));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4706___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2127_li2127 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713560__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713559__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713559__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2127_li2127 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713560__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713559__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713559__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2129_li2129 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4494___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713559__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713559__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4696___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713548__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4673___05F)
                ? 2U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713543__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713543__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713548__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4673___05F)
                ? 1U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713543__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713543__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713543__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4617___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713543__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713543__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718649__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0188_li0188)
            ? ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_76)
                ? 0U : 2U) : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_76)
                               ? 0U : 3U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718318__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eu1__02enan_sign)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718318__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718318__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0520_li0520 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02efasu_op_r2)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717891__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717891__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717882__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8920___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717882__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717882__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717682__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8834___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717682__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717682__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1018_li1018 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02esign)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717274__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717274__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15780__02eC__05b17__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15780__02eS__05b16__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15780__02eC__05b16__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b13__05d)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719798__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719798__DOT__s1))));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716848__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7961___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716848__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716848__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716854__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8005___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716854__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716854__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1252_li1252 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eu0__02eqnan)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716862__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716862__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15712__02eC__05b8__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15712__02eS__05b7__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15712__02eC__05b7__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b4__05d)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719885__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719885__DOT__s1))));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15689__02eC__05b11__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15689__02eS__05b10__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15689__02eC__05b10__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7544___05F)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719957__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719957__DOT__s1))));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15814__02eC__05b20__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15814__02eS__05b19__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15814__02eC__05b19__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b16__05d)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719918__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719918__DOT__s1))));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15746__02eC__05b13__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15746__02eS__05b12__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15746__02eC__05b12__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b9__05d)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719842__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719842__DOT__s1))));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6188___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1677_li1677 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715538__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715537__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715537__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1677_li1677 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715538__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715537__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715537__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715522__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6675___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715522__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715522__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715522__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6629___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715522__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715522__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715526__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6675___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6636___05F)
                ? 0xab00U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6636___05F)
                                    ? 0xabU : 0U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6594___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1685_li1685 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715523__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715526__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715526__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715522__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715522__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1685_li1685 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715523__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715526__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715526__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715522__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715522__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6561___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1691_li1691 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715516__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1689_li1689 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715517__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6633___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715479__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1693_li1693 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715505__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715502__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715502__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1695_li1695 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715504__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1691_li1691 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715516__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1689_li1689 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715517__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6633___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715479__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1693_li1693 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715505__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715502__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715502__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1695_li1695 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715504__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715485__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6268___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715485__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715485__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1699_li1699 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6561___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715485__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715485__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715483__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6625___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6636___05F)
                ? 0xd5U : 0x55U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6636___05F)
                                     ? 0x7fU : 0x55U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6633___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715483__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715483__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715484__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715484__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715483__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715483__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715484__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715484__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715484__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6268___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715484__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715484__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1701_li1701 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6220___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715484__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715484__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715480__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6633___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715480__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715480__DOT__s4)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5612___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714474__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714474__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714462__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714462__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714474__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714474__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714462__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714462__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714511__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5645___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714511__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714511__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5618___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714467__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714467__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714470__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714470__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714471__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5619___05F)
                ? 7U : 5U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714466__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714466__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714467__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714467__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714470__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714470__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714471__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5619___05F)
                ? 0xdU : 5U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714466__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714466__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716276__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1590_li1590)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716276__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716276__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1593_li1593 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7110___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716276__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716276__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716271__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1602_li1602)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716271__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716271__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716271__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7189___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716271__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716271__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713529__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4644___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713529__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713529__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713540__DOT__s2 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4688___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4673___05F)
                ? 4U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4673___05F)
                               ? 0xbU : 0U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4644___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713540__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713540__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713541__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4673___05F)
                ? 2U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713539__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713539__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713540__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713540__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713541__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4673___05F)
                ? 1U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713539__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713539__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713539__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4688___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713539__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713539__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4437___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2143_li2143 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713540__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2141_li2141 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713541__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2145_li2145 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713539__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2143_li2143 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713540__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2141_li2141 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713541__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2145_li2145 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713539__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4644___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713528__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713528__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713491__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4505___05F)
                ? 4U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713495__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4648___05F)
                ? 4U : 0U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713528__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713528__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713491__DOT__s2 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713495__DOT__s2 = 0U;
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4458___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2147_li2147 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713529__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713528__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713528__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713491__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713491__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713495__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713495__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2147_li2147 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713529__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713528__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713528__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713491__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713491__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713495__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713495__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4476___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713528__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713528__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4645___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713491__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713528__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713528__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4645___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713491__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713492__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4506___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4645___05F)
                ? 0xf0fU : 0xfffU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4645___05F)
                                       ? 0xfdfU : 0xf0fU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4649___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4476___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713495__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713495__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0189_li0189 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9801___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718649__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718649__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718318__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eu1__02eresult_zero_sign)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718318__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718318__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0544_li0544 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02efract_out_q__05b25__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717882__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717882__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b22__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0135_li0135 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718959__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0052_li0052 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719420__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718815__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718815__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0135_li0135 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718959__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0052_li0052 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719420__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718815__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718815__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0160_li0160 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9966___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718815__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718815__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717682__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eu1__02enan_sign)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717682__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717682__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15780__02eC__05b18__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15780__02eS__05b17__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15780__02eC__05b17__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b14__05d)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719799__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719799__DOT__s1))));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716848__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7940___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716848__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716848__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15712__02eC__05b9__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15712__02eS__05b8__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15712__02eC__05b8__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7752___05F)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719886__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719886__DOT__s1))));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15689__02eC__05b12__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15689__02eS__05b11__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15689__02eC__05b11__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b8__05d)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719958__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719958__DOT__s1))));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15814__02eC__05b21__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15814__02eS__05b20__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15814__02eC__05b20__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3437___05F)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719919__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719919__DOT__s1))));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15746__02eC__05b14__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15746__02eS__05b13__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15746__02eC__05b13__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b10__05d)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719843__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719843__DOT__s1))));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1679_li1679 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6689___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715537__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715537__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715477__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6595___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715477__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715477__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715444__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6269___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715444__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715444__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715444__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6189___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715444__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715444__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6598___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6052___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715444__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715444__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715483__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6269___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715483__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715483__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1703_li1703 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6635___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715483__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715483__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6269___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715480__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715480__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715477__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715477__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715480__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715480__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715477__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715477__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6656___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6265___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715502__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715502__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714462__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5093___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714462__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714462__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1919_li1919 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5642___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714511__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714511__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5622___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714470__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714470__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714471__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714471__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714470__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714470__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714471__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714471__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714467__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5082___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714467__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714467__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714466__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5089___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714466__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714466__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714466__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5082___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714466__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714466__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5023___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1923_li1923 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714486__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1921_li1921 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714487__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1925_li1925 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714474__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1935_li1935 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714462__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1931_li1931 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714467__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1929_li1929 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714470__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1927_li1927 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714471__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1933_li1933 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714466__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1923_li1923 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714486__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1921_li1921 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714487__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1925_li1925 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714474__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1935_li1935 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714462__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1931_li1931 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714467__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1929_li1929 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714470__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1927_li1927 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714471__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1933_li1933 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714466__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716262__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7415___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716262__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716262__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716254__DOT__s2 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6951___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7396___05F)
                ? 0xbU : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7396___05F)
                                 ? 4U : 0U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7350___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716254__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716254__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716255__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7396___05F)
                ? 2U : 0U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716254__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716254__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716255__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7396___05F)
                ? 1U : 0U);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716253__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7392___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7396___05F)
                ? 0x40U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7396___05F)
                                  ? 0xbfU : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716253__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7350___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716253__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716253__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716243__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7386___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7396___05F)
                ? 0x1000U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7396___05F)
                                    ? 0xefffU : 0U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7350___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716243__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716243__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716250__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7377___05F)
                ? 0xfeffU : 0x100U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716243__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716243__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716250__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7377___05F)
                ? 0xffffU : 0U);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716210__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6953___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7350___05F)
                ? 0x4000U : 0U) : 0U);
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6951___05F) {
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7350___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716213__DOT__s1 = 1U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716239__DOT__s4 = 0x100U;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716213__DOT__s1 = 0U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716239__DOT__s4 = 0U;
        }
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716213__DOT__s1 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716239__DOT__s4 = 0U;
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716239__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7377___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716239__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716239__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716197__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6953___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7350___05F)
                ? 0x40U : 0U) : 0U);
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6951___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716253__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716253__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716243__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716243__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716210__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716210__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716250__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716250__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716253__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716253__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716243__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716243__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716210__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716210__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716250__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716250__DOT__s4));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7392___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716243__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716243__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716250__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716250__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716239__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716239__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716243__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716243__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716250__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716250__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716239__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716239__DOT__s3));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7386___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716250__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716250__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716239__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716239__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716250__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716250__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716239__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716239__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716197__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6951___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716197__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716197__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4699___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713546__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713546__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713547__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4673___05F)
                ? 2U : 0U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713546__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713546__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713547__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4673___05F)
                ? 1U : 0U);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713543__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4561___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713543__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713543__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4540___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2131_li2131 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713548__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2137_li2137 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713543__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2131_li2131 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713548__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2137_li2137 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713543__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4561___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2135_li2135 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713546__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2133_li2133 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713547__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2135_li2135 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713546__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2133_li2133 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713547__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0326_li0326 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02esign)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718318__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718318__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717682__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eu1__02eresult_zero_sign)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717682__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717682__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15780__02eC__05b19__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15780__02eS__05b18__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15780__02eC__05b18__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b15__05d)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719800__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719800__DOT__s1))));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8002___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7926___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716848__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716848__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7993___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1254_li1254 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716861__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1250_li1250 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716863__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1256_li1256 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716854__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1254_li1254 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716861__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1250_li1250 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716863__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1256_li1256 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716854__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716855__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1256_li1256)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eexp_r__05b7__05d)
                ? 0xf7f5U : 0x5555U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eexp_r__05b7__05d)
                                         ? 0xdfffU : 0x7555U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15712__02eC__05b10__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15712__02eS__05b9__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15712__02eC__05b9__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b6__05d)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719887__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719887__DOT__s1))));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15689__02eC__05b13__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15689__02eS__05b12__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15689__02eC__05b12__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7497___05F)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719959__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719959__DOT__s1))));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15814__02eC__05b22__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15814__02eS__05b21__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15814__02eC__05b21__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b18__05d)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719920__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719920__DOT__s1))));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15746__02eC__05b15__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15746__02eS__05b14__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15746__02eC__05b14__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b11__05d)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719844__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719844__DOT__s1))));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715526__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6679___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715526__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715526__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715503__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6656___05F)
            ? 0U : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6636___05F)
                     ? 0xdf75U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1605_li1605 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7423___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716271__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716271__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716262__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7412___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716262__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716262__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0645_li0645 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02esign)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717682__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717682__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15780__02eC__05b20__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15780__02eS__05b19__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15780__02eC__05b19__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b16__05d)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719801__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719801__DOT__s1))));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716850__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8002___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716850__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716850__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716855__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eexp_r__05b5__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716855__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716855__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15712__02eC__05b11__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15712__02eS__05b10__05d)
            ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15712__02eC__05b10__05d)
            : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eu1__02efractb_n__05b10__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15689__02eC__05b14__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15689__02eS__05b13__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15689__02eC__05b13__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7528___05F)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719960__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719960__DOT__s1))));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15814__02eC__05b23__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15814__02eS__05b22__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15814__02eC__05b22__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b19__05d)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719921__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719921__DOT__s1))));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15746__02eC__05b16__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15746__02eS__05b15__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15746__02eC__05b15__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8103___05F)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719845__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719845__DOT__s1))));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1687_li1687 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6674___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715522__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715522__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715526__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6678___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715526__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715526__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715503__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6655___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715503__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715503__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715503__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6249___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715503__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715503__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1611_li1611 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7414___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716262__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716262__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6886___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1620_li1620 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716254__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1617_li1617 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716255__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7367___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716213__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1620_li1620 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716254__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1617_li1617 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716255__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7367___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716213__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716224__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7367___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716224__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716224__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6916___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6887___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715762__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715762__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6916___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716210__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716210__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716197__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716197__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716224__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716224__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716210__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716210__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716197__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716197__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716224__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716224__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4524___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713473__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713473__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713476__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713476__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713475__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713475__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713467__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713467__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713473__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713473__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713476__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713476__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713475__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713475__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713467__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713467__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713544__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2137_li2137)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713544__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713544__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2139_li2139 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4598___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713544__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713544__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2149_li2149 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4681___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713528__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713528__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713506__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4649___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713506__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713506__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713506__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4496___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713506__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713506__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4649___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713515__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713515__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713520__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4673___05F)
                ? 0xdU : 5U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713515__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713515__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713520__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4673___05F)
                ? 7U : 5U);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15780__02eC__05b21__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15780__02eS__05b20__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15780__02eC__05b20__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8492___05F)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719802__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719802__DOT__s1))));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716850__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eu1__02enan_sign)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716850__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716850__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716855__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eexp_r__05b6__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716855__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716855__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15712__02eC__05b12__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15712__02eS__05b11__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15712__02eC__05b11__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b8__05d)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719888__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719888__DOT__s1))));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15689__02eC__05b15__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15689__02eS__05b14__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15689__02eC__05b14__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3778___05F)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719961__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719961__DOT__s1))));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15814__02eC__05b24__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15814__02eS__05b23__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15814__02eC__05b23__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b20__05d)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719922__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719922__DOT__s1))));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15746__02eC__05b17__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15746__02eS__05b16__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15746__02eC__05b16__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8103___05F)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719846__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719846__DOT__s1))));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6625___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715480__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715480__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6631___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715477__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715480__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715480__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6631___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715477__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715478__DOT__s2 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6596___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6631___05F)
                ? 5U : 7U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6631___05F)
                               ? 7U : 5U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1683_li1683 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6593___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715526__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715526__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6598___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715454__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715454__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715448__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715448__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715451__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715451__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715453__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715453__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715472__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715472__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715454__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715454__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715448__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715448__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715451__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715451__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715453__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715453__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715472__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715472__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715472__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6625___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715472__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715472__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715450__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6598___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715450__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715450__DOT__s4)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6886___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1623_li1623 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716253__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1626_li1626 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716243__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7351___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716197__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1623_li1623 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716253__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1626_li1626 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716243__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7351___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716197__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716210__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7354___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716210__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716210__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6886___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7364___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716210__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7404___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716250__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7393___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716239__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7364___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716210__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7404___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716250__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7393___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716239__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713475__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4619___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713475__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713475__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4621___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4043___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713467__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713467__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4668___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713515__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713515__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713520__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713520__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713515__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713515__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713520__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713520__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2151_li2151 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4670___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713520__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713520__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15780__02eC__05b22__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15780__02eS__05b21__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15780__02eC__05b21__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b18__05d)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719803__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719803__DOT__s1))));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716850__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02esign)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716850__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716850__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716855__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7858___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716855__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716855__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1258_li1258 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7993___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716855__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716855__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15712__02eC__05b13__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15712__02eS__05b12__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15712__02eC__05b12__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b9__05d)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719889__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719889__DOT__s1))));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15689__02eC__05b16__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15689__02eS__05b15__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15689__02eC__05b15__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b12__05d)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719962__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719962__DOT__s1))));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024auto_15814__02eco 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15814__02eS__05b24__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15814__02eC__05b24__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b21__05d)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719923__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719923__DOT__s1))));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15746__02eC__05b18__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15746__02eS__05b17__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15746__02eC__05b17__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3512___05F)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719847__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719847__DOT__s1))));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715478__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6600___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715478__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715478__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715448__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5972___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715448__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715448__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6603___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715451__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715451__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715450__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715450__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715451__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715451__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715450__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715450__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715453__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5971___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715453__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715453__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715503__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6262___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715503__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715503__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7351___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716207__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716207__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716208__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716208__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716209__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716209__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716212__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6818___05F)
                ? 0x57U : 0x55U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716207__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716207__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716208__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716208__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716209__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716209__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716212__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6818___05F)
                ? 0x75U : 0x55U);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716212__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7354___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716212__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716212__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4621___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713471__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713471__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713472__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4495___05F)
                ? 0x57U : 0x55U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713471__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713471__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713472__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4495___05F)
                ? 0x75U : 0x55U);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15780__02eC__05b23__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15780__02eS__05b22__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15780__02eC__05b22__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b19__05d)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719804__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719804__DOT__s1))));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1260_li1260 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eu1__02eresult_zero_sign)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716850__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716850__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15712__02eC__05b14__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15712__02eS__05b13__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15712__02eC__05b13__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3652___05F)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719890__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719890__DOT__s1))));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15689__02eC__05b17__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15689__02eS__05b16__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15689__02eC__05b16__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7511___05F)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719963__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719963__DOT__s1))));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024auto_15814__02eco) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718084__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718084__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717965__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717965__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718084__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718084__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717965__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717965__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15746__02eC__05b19__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15746__02eS__05b18__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15746__02eC__05b18__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b15__05d)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719848__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719848__DOT__s1))));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715450__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5967___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715450__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715450__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5890___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1705_li1705 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715480__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1711_li1711 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715454__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1707_li1707 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715478__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1719_li1719 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715448__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1715_li1715 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715451__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1713_li1713 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715453__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1709_li1709 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715472__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1717_li1717 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715450__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1705_li1705 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715480__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1711_li1711 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715454__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1707_li1707 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715478__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1719_li1719 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715448__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1715_li1715 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715451__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1713_li1713 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715453__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1709_li1709 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715472__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1717_li1717 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715450__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1697_li1697 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6646___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715503__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715503__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716211__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7364___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6818___05F)
                ? 0x5775U : 0x5555U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6818___05F)
                                         ? 0x7557U : 0x5555U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716252__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7404___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7405___05F)
                ? 0xff00U : 0xffffU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7405___05F)
                                         ? 0x7000U : 0xffffU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716240__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7393___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716240__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716240__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6887___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716241__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7393___05F)
                ? 7U : 5U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716240__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716240__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716241__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7393___05F)
                ? 5U : 7U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716240__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716240__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716208__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7357___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716208__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716208__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716209__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7356___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716209__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716209__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713471__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4046___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713471__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713471__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713492__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4623___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713492__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713492__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713472__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4046___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713472__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713472__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713472__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4623___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713472__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713472__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3965___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2163_li2163 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713473__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2159_li2159 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713476__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2161_li2161 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713475__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713492__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713492__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2155_li2155 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713506__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2153_li2153 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713515__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2167_li2167 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713471__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2165_li2165 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713472__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2163_li2163 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713473__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2159_li2159 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713476__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2161_li2161 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713475__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713492__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713492__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2155_li2155 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713506__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2153_li2153 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713515__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2167_li2167 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713471__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2165_li2165 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713472__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713492__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4127___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713492__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713492__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15780__02eC__05b24__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15780__02eS__05b23__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15780__02eC__05b23__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8492___05F)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719805__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719805__DOT__s1))));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15712__02eC__05b15__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15712__02eS__05b14__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15712__02eC__05b14__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3663___05F)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719891__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719891__DOT__s1))));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15689__02eC__05b18__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15689__02eS__05b17__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15689__02eC__05b17__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b14__05d)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719964__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719964__DOT__s1))));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718084__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9094___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718084__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718084__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15746__02eC__05b20__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15746__02eS__05b19__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15746__02eC__05b19__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8082___05F)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719849__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719849__DOT__s1))));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716211__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7355___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716211__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716211__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716252__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7396___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716252__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716252__DOT__s4)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7359___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716241__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716241__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716212__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716212__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716241__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716241__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716212__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716212__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2157_li2157 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4009___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713492__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713492__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024auto_15780__02eco 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15780__02eS__05b24__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15780__02eC__05b24__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8497___05F)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719806__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719806__DOT__s1))));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15712__02eC__05b16__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15712__02eS__05b15__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15712__02eC__05b15__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3663___05F)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719892__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719892__DOT__s1))));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15689__02eC__05b19__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15689__02eS__05b18__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15689__02eC__05b18__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7503___05F)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719965__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719965__DOT__s1))));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717965__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b22__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717965__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717965__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9119___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0351_li0351)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717965__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717965__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15746__02eC__05b21__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15746__02eS__05b20__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15746__02eC__05b20__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3489___05F)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719850__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719850__DOT__s1))));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716211__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6771___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716211__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716211__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716211__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7359___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716211__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716211__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6729___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1638_li1638 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716224__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1653_li1653 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716207__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1650_li1650 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716208__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1647_li1647 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716209__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1635_li1635 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716240__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1632_li1632 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716241__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1641_li1641 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716212__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1644_li1644 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716211__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1638_li1638 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716224__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1653_li1653 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716207__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1650_li1650 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716208__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1647_li1647 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716209__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1635_li1635 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716240__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1632_li1632 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716241__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1641_li1641 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716212__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1644_li1644 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716211__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716252__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7403___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716252__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716252__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716252__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7179___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716252__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716252__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024auto_15780__02eco) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717492__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717492__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717340__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717340__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717492__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717492__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717340__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717340__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15712__02eC__05b17__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15712__02eS__05b16__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15712__02eC__05b16__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b13__05d)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719893__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719893__DOT__s1))));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15689__02eC__05b20__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15689__02eS__05b19__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15689__02eC__05b19__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10854___05F)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719966__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719966__DOT__s1))));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718084__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b22__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718084__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718084__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9238___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3353___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718084__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718084__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717966__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9098___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9119___05F)
                ? 2U : 3U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9119___05F)
                               ? 2U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717968__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9121___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9119___05F)
                ? 2U : 3U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9119___05F)
                               ? 2U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717971__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9124___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9119___05F)
                ? 2U : 3U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9119___05F)
                               ? 2U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717973__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9126___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9119___05F)
                ? 2U : 3U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9119___05F)
                               ? 2U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717979__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9132___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9119___05F)
                ? 2U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9119___05F)
                               ? 2U : 3U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717984__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9137___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9119___05F)
                ? 2U : 3U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9119___05F)
                               ? 2U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717989__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9142___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9119___05F)
                ? 2U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9119___05F)
                               ? 2U : 3U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717992__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9145___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9119___05F)
                ? 2U : 3U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9119___05F)
                               ? 2U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718003__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9156___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9119___05F)
                ? 2U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9119___05F)
                               ? 2U : 3U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718014__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9167___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9119___05F)
                ? 2U : 3U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9119___05F)
                               ? 2U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718021__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9174___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9119___05F)
                ? 2U : 3U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9119___05F)
                               ? 2U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718028__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9181___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9119___05F)
                ? 2U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9119___05F)
                               ? 2U : 3U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718034__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9187___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9119___05F)
                ? 2U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9119___05F)
                               ? 2U : 3U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718048__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9201___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9119___05F)
                ? 2U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9119___05F)
                               ? 2U : 3U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718054__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9207___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9119___05F)
                ? 2U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9119___05F)
                               ? 2U : 3U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718064__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9217___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9119___05F)
                ? 2U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9119___05F)
                               ? 2U : 3U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717999__DOT__s2 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9152___05F)
            ? 0xfU : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9119___05F)
                       ? 0xaU : 0xcU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718009__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9162___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9119___05F)
                ? 0xeaU : 0xffU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9119___05F)
                                     ? 0xeaU : 0xc0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718039__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9192___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9119___05F)
                ? 0xeaU : 0xc0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9119___05F)
                                     ? 0xeaU : 0xffU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718072__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9225___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9119___05F)
                ? 0xeaU : 0xffU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9119___05F)
                                     ? 0xeaU : 0xc0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718081__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9234___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9119___05F)
                ? 0x8aU : 0xcfU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9119___05F)
                                     ? 0x8aU : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717976__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9129___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9119___05F)
                ? 0xf0f0U : 0xddU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9119___05F)
                                       ? 0xf0f0U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15746__02eC__05b22__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15746__02eS__05b21__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15746__02eC__05b21__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8076___05F)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719851__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719851__DOT__s1))));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717492__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b22__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717492__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717492__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15712__02eC__05b18__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15712__02eS__05b17__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15712__02eC__05b17__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3635___05F)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719894__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719894__DOT__s1))));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15689__02eC__05b21__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15689__02eS__05b20__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15689__02eC__05b20__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b17__05d)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719967__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719967__DOT__s1))));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718086__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b20__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9238___05F)
                ? 3U : 2U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9238___05F)
                               ? 0U : 2U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718089__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b17__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9238___05F)
                ? 3U : 2U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9238___05F)
                               ? 0U : 2U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718090__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b16__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9238___05F)
                ? 3U : 2U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9238___05F)
                               ? 0U : 2U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718092__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b14__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9238___05F)
                ? 3U : 2U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9238___05F)
                               ? 0U : 2U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718093__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b13__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9238___05F)
                ? 3U : 2U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9238___05F)
                               ? 0U : 2U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718094__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b12__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9238___05F)
                ? 3U : 2U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9238___05F)
                               ? 0U : 2U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718085__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b21__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9238___05F)
                ? 3U : 2U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9238___05F)
                               ? 0U : 2U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718087__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b19__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9238___05F)
                ? 3U : 2U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9238___05F)
                               ? 0U : 2U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718088__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b18__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9238___05F)
                ? 3U : 2U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9238___05F)
                               ? 0U : 2U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b16__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0396_li0396 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717979__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0369_li0369 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718090__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0396_li0396 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717979__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0369_li0369 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718090__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0395_li0395 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b15__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717984__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717984__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718091__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b15__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9238___05F)
                ? 3U : 2U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9238___05F)
                               ? 0U : 2U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0368_li0368 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b15__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718091__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718091__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b13__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0393_li0393 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717992__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0366_li0366 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718093__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0393_li0393 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717992__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0366_li0366 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718093__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0391_li0391 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b11__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718003__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718003__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718095__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b11__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9238___05F)
                ? 3U : 2U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9238___05F)
                               ? 0U : 2U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0364_li0364 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b11__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718095__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718095__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0389_li0389 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b9__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718014__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718014__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718097__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b9__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9238___05F)
                ? 3U : 2U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9238___05F)
                               ? 0U : 2U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0362_li0362 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b9__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718097__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718097__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718098__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b8__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9238___05F)
                ? 3U : 2U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9238___05F)
                               ? 0U : 2U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0387_li0387 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b7__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718028__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718028__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718099__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b7__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9238___05F)
                ? 3U : 2U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9238___05F)
                               ? 0U : 2U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0360_li0360 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b7__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718099__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718099__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0386_li0386 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b6__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718034__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718034__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718100__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b6__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9238___05F)
                ? 3U : 2U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9238___05F)
                               ? 0U : 2U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0359_li0359 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b6__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718100__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718100__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718102__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b4__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9238___05F)
                ? 3U : 2U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9238___05F)
                               ? 0U : 2U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718103__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b3__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9238___05F)
                ? 3U : 2U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9238___05F)
                               ? 0U : 2U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718104__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b2__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9238___05F)
                ? 3U : 2U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9238___05F)
                               ? 0U : 2U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717999__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9151___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717999__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717999__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718009__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3451___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718009__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718009__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718039__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3418___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718039__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718039__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718072__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3428___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718072__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718072__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718081__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3457___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718081__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718081__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717976__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9128___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717976__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717976__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15746__02eC__05b23__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15746__02eS__05b22__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15746__02eC__05b22__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b19__05d)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719852__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719852__DOT__s1))));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1629_li1629 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7400___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716252__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716252__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8494___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b22__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717340__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717340__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717352__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8505___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8494___05F)
                ? 2U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8494___05F)
                               ? 2U : 3U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717357__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8510___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8494___05F)
                ? 2U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8494___05F)
                               ? 2U : 3U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717364__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8517___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8494___05F)
                ? 2U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8494___05F)
                               ? 2U : 3U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717367__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8520___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8494___05F)
                ? 2U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8494___05F)
                               ? 2U : 3U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717372__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8525___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8494___05F)
                ? 2U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8494___05F)
                               ? 2U : 3U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717396__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8549___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8494___05F)
                ? 2U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8494___05F)
                               ? 2U : 3U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717401__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8554___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8494___05F)
                ? 2U : 3U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8494___05F)
                               ? 2U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717410__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8563___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8494___05F)
                ? 2U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8494___05F)
                               ? 2U : 3U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717416__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8569___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8494___05F)
                ? 2U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8494___05F)
                               ? 2U : 3U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717437__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8590___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8494___05F)
                ? 2U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8494___05F)
                               ? 2U : 3U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717446__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8599___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8494___05F)
                ? 2U : 3U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8494___05F)
                               ? 2U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717454__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8607___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8494___05F)
                ? 2U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8494___05F)
                               ? 2U : 3U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717391__DOT__s2 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8544___05F)
            ? 0U : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8494___05F)
                     ? 0xaU : 0xcU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717424__DOT__s2 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8577___05F)
            ? 0U : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8494___05F)
                     ? 0xaU : 3U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717430__DOT__s2 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8583___05F)
            ? 0U : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8494___05F)
                     ? 0xaU : 3U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717468__DOT__s2 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8621___05F)
            ? 0xfU : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8494___05F)
                       ? 0xaU : 0xcU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717341__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3803___05F)
            ? 0U : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8494___05F)
                     ? 0xaU : 0xcU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717374__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8527___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8494___05F)
                ? 0xf0U : 0xffU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8494___05F)
                                     ? 0xf0U : 0x44U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717360__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8507___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8494___05F)
                ? 0xf0ffU : 0x44ffU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8494___05F)
                                         ? 0xf0f0U : 0x4444U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717379__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8532___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8494___05F)
                ? 0xff80U : 0xffffU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8494___05F)
                                         ? 0xff80U : 0x8080U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717385__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8538___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8494___05F)
                ? 0xff40U : 0x4040U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8494___05F)
                                         ? 0xff40U : 0xffffU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15712__02eC__05b19__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15712__02eS__05b18__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15712__02eC__05b18__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b15__05d)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719895__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719895__DOT__s1))));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15689__02eC__05b22__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15689__02eS__05b21__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15689__02eC__05b21__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b18__05d)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719968__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719968__DOT__s1))));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718128__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eu1__02esigna)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9238___05F)
                ? 3U : 2U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9238___05F)
                               ? 0U : 2U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0328_li0328 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eu1__02esignb)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718128__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718128__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718009__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3442___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718009__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718009__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718096__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b10__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9238___05F)
                ? 3U : 2U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9238___05F)
                               ? 0U : 2U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b10__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0363_li0363 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718096__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0390_li0390 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718009__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0363_li0363 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718096__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0390_li0390 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718009__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718039__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3381___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718039__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718039__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718101__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b5__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9238___05F)
                ? 3U : 2U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9238___05F)
                               ? 0U : 2U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718072__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3379___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718072__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718072__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718105__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b1__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9238___05F)
                ? 3U : 2U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9238___05F)
                               ? 0U : 2U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b1__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0354_li0354 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718105__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0381_li0381 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718072__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0354_li0354 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718105__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0381_li0381 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718072__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718081__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3406___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718081__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718081__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718106__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b0__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9238___05F)
                ? 3U : 2U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9238___05F)
                               ? 0U : 2U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b0__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0353_li0353 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718106__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0380_li0380 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718081__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0353_li0353 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718106__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0380_li0380 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718081__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15746__02eC__05b24__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15746__02eS__05b23__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15746__02eC__05b23__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3556___05F)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719853__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719853__DOT__s1))));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717492__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b22__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717492__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717492__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8646___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3801___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717492__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717492__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717347__DOT__s2 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b20__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8494___05F)
                ? 0xfU : 4U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8494___05F)
                                 ? 0U : 4U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717344__DOT__s2 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b21__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8494___05F)
                ? 0xfU : 1U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8494___05F)
                                 ? 0U : 1U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717347__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8500___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717347__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717347__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717391__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8542___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717391__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717391__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717424__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8576___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717424__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717424__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717430__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8582___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717430__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717430__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717468__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8619___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717468__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717468__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717360__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8497___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717360__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717360__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717344__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8492___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717344__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717344__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0713_li0713 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8497___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717344__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717344__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15712__02eC__05b20__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15712__02eS__05b19__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15712__02eC__05b19__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b16__05d)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719896__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719896__DOT__s1))));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15689__02eC__05b23__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15689__02eS__05b22__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15689__02eC__05b22__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b19__05d)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719969__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719969__DOT__s1))));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b17__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0370_li0370 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718089__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717976__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717976__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0370_li0370 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718089__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717976__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717976__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717976__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9123___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717976__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717976__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024auto_15746__02eco 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15746__02eS__05b24__05d)
            ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15746__02eC__05b24__05d)
            : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eu1__02efractb_n__05b24__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717493__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b21__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8646___05F)
                ? 3U : 2U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8646___05F)
                               ? 0U : 2U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0686_li0686 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b21__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717493__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717493__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717494__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b20__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8646___05F)
                ? 3U : 2U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8646___05F)
                               ? 0U : 2U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0685_li0685 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b20__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717494__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717494__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717495__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b19__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8646___05F)
                ? 3U : 2U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8646___05F)
                               ? 0U : 2U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b19__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0711_li0711 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717352__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0684_li0684 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717495__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0711_li0711 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717352__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0684_li0684 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717495__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717496__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b18__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8646___05F)
                ? 3U : 2U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8646___05F)
                               ? 0U : 2U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b18__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0710_li0710 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717357__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0683_li0683 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717496__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0710_li0710 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717357__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0683_li0683 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717496__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717497__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b17__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8646___05F)
                ? 3U : 2U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8646___05F)
                               ? 0U : 2U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717498__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b16__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8646___05F)
                ? 3U : 2U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8646___05F)
                               ? 0U : 2U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b16__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0708_li0708 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717364__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0681_li0681 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717498__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0708_li0708 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717364__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0681_li0681 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717498__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717499__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b15__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8646___05F)
                ? 3U : 2U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8646___05F)
                               ? 0U : 2U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b15__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0707_li0707 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717367__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0680_li0680 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717499__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0707_li0707 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717367__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0680_li0680 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717499__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717500__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b14__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8646___05F)
                ? 3U : 2U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8646___05F)
                               ? 0U : 2U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b14__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0706_li0706 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717372__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0679_li0679 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717500__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0706_li0706 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717372__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0679_li0679 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717500__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717501__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b13__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8646___05F)
                ? 3U : 2U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8646___05F)
                               ? 0U : 2U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b13__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717374__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717374__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0678_li0678 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717501__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717374__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717374__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0678_li0678 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717501__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717374__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b13__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717374__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717374__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717502__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b12__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8646___05F)
                ? 3U : 2U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8646___05F)
                               ? 0U : 2U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b12__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717379__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717379__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0677_li0677 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717502__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717379__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717379__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0677_li0677 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717502__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717503__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b11__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8646___05F)
                ? 3U : 2U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8646___05F)
                               ? 0U : 2U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b11__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717385__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717385__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0676_li0676 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717503__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717385__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717385__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0676_li0676 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717503__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717504__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b10__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8646___05F)
                ? 3U : 2U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8646___05F)
                               ? 0U : 2U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717505__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b9__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8646___05F)
                ? 3U : 2U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8646___05F)
                               ? 0U : 2U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b9__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0701_li0701 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717396__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0674_li0674 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717505__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0701_li0701 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717396__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0674_li0674 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717505__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717506__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b8__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8646___05F)
                ? 3U : 2U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8646___05F)
                               ? 0U : 2U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b8__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0700_li0700 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717401__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0673_li0673 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717506__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0700_li0700 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717401__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0673_li0673 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717506__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717507__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b7__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8646___05F)
                ? 3U : 2U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8646___05F)
                               ? 0U : 2U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b7__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0699_li0699 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717410__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0672_li0672 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717507__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0699_li0699 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717410__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0672_li0672 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717507__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717508__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b6__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8646___05F)
                ? 3U : 2U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8646___05F)
                               ? 0U : 2U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b6__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0698_li0698 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717416__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0671_li0671 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717508__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0698_li0698 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717416__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0671_li0671 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717508__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717509__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b5__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8646___05F)
                ? 3U : 2U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8646___05F)
                               ? 0U : 2U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717510__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b4__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8646___05F)
                ? 3U : 2U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8646___05F)
                               ? 0U : 2U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717511__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b3__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8646___05F)
                ? 3U : 2U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8646___05F)
                               ? 0U : 2U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b3__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0695_li0695 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717437__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0668_li0668 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717511__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0695_li0695 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717437__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0668_li0668 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717511__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717512__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b2__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8646___05F)
                ? 3U : 2U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8646___05F)
                               ? 0U : 2U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b2__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0694_li0694 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717446__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0667_li0667 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717512__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0694_li0694 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717446__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0667_li0667 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717512__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717513__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b1__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8646___05F)
                ? 3U : 2U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8646___05F)
                               ? 0U : 2U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b1__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0693_li0693 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717454__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0666_li0666 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717513__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0693_li0693 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717454__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0666_li0666 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717513__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717514__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b0__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8646___05F)
                ? 3U : 2U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8646___05F)
                               ? 0U : 2U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717537__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eu1__02esigna)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8646___05F)
                ? 3U : 2U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8646___05F)
                               ? 0U : 2U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b10__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0702_li0702 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717391__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0675_li0675 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717504__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0702_li0702 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717391__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0675_li0675 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717504__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b5__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0697_li0697 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717424__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0670_li0670 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717509__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0697_li0697 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717424__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0670_li0670 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717509__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b4__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0696_li0696 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717430__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0669_li0669 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717510__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0696_li0696 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717430__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0669_li0669 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717510__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b0__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0692_li0692 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717468__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0665_li0665 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717514__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0692_li0692 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717468__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0665_li0665 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717514__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717341__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8492___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717341__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717341__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717341__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8491___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717341__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717341__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0714_li0714 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b22__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717341__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717341__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b17__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717360__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717360__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0682_li0682 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717497__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717360__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717360__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0682_li0682 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717497__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717379__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3805___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717379__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717379__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717379__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8500___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717379__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717379__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717385__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3805___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717385__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717385__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15712__02eC__05b21__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15712__02eS__05b20__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15712__02eC__05b20__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b17__05d)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719897__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719897__DOT__s1))));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15689__02eC__05b24__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15689__02eS__05b23__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15689__02eC__05b23__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3750___05F)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719970__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719970__DOT__s1))));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0397_li0397 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3437___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717976__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717976__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024auto_15746__02eco) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716926__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716926__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717049__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717049__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716929__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716929__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716926__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716926__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717049__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717049__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716929__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716929__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0647_li0647 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eu1__02esignb)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717537__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717537__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0705_li0705 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0688_li0688)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717374__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717374__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717360__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8513___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717360__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717360__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8492___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0712_li0712 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717347__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0709_li0709 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717360__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0712_li0712 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717347__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0709_li0709 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717360__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717385__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3858___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717385__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717385__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15712__02eC__05b22__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15712__02eS__05b21__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15712__02eC__05b21__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3609___05F)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719898__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719898__DOT__s1))));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024auto_15689__02eco 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15689__02eS__05b24__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15689__02eC__05b24__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b21__05d)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719971__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719971__DOT__s1))));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b22__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716926__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716926__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717049__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717049__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716929__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716929__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716926__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716926__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717049__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717049__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716929__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716929__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b22__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717049__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717049__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8083___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716929__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717049__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717049__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8083___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716929__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0704_li0704 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8523___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717379__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717379__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0703_li0703 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8534___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717385__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717385__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15712__02eC__05b23__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15712__02eS__05b22__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15712__02eC__05b22__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7669___05F)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719899__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719899__DOT__s1))));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024auto_15689__02eco) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716460__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7613___05F)
                ? 0U : 0xefU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716333__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716333__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716460__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7613___05F)
                ? 0U : 0xaeU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716333__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716333__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716926__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8078___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716926__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716926__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15712__02eC__05b24__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15712__02eS__05b23__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15712__02eC__05b23__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7666___05F)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719900__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719900__DOT__s1))));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716460__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3765___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716460__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716460__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7487___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b22__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716333__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716333__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b20__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0400_li0400 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717968__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0373_li0373 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718086__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716337__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7487___05F)
                ? 0xfU : 8U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0400_li0400 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717968__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0373_li0373 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718086__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716337__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7487___05F)
                ? 0U : 8U);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716460__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b22__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716460__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716460__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1079_li1079 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eu1__02efractb_n__05b24__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716926__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716926__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8203___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3474___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717049__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717049__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717081__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eu1__02esigna)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8203___05F)
                ? 2U : 3U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8203___05F)
                               ? 2U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717050__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b21__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8203___05F)
                ? 2U : 3U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8203___05F)
                               ? 2U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716933__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8086___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8083___05F)
                ? 2U : 3U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8083___05F)
                               ? 2U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1077_li1077 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b19__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716933__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716933__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716943__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8096___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8083___05F)
                ? 2U : 3U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8083___05F)
                               ? 2U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1073_li1073 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b15__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716943__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716943__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716958__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8111___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8083___05F)
                ? 2U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8083___05F)
                               ? 2U : 3U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1069_li1069 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b11__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716958__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716958__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716962__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8115___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8083___05F)
                ? 2U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8083___05F)
                               ? 2U : 3U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1068_li1068 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b10__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716962__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716962__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716971__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8124___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8083___05F)
                ? 2U : 3U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8083___05F)
                               ? 2U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1067_li1067 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b9__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716971__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716971__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716976__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8129___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8083___05F)
                ? 2U : 3U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8083___05F)
                               ? 2U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1066_li1066 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b8__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716976__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716976__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716981__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8134___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8083___05F)
                ? 2U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8083___05F)
                               ? 2U : 3U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1065_li1065 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b7__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716981__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716981__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716988__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8141___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8083___05F)
                ? 2U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8083___05F)
                               ? 2U : 3U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1064_li1064 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b6__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716988__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716988__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716997__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8150___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8083___05F)
                ? 2U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8083___05F)
                               ? 2U : 3U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1063_li1063 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b5__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716997__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716997__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717003__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8156___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8083___05F)
                ? 2U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8083___05F)
                               ? 2U : 3U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1062_li1062 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b4__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717003__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717003__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717008__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8161___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8083___05F)
                ? 2U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8083___05F)
                               ? 2U : 3U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1061_li1061 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b3__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717008__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717008__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717015__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8168___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8083___05F)
                ? 2U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8083___05F)
                               ? 2U : 3U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1060_li1060 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b2__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717015__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717015__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717022__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8175___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8083___05F)
                ? 2U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8083___05F)
                               ? 2U : 3U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1059_li1059 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b1__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717022__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717022__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717027__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8180___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8083___05F)
                ? 2U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8083___05F)
                               ? 2U : 3U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1058_li1058 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b0__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717027__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717027__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8083___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716930__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3556___05F)
                ? 0xaU : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716935__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716935__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716930__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3556___05F)
                ? 0xcU : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716935__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716935__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716935__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b18__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716935__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716935__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8083___05F) {
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3537___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716937__DOT__s4 = 0x2a2aU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716940__DOT__s4 = 0xc0ccU;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716937__DOT__s4 = 0U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716940__DOT__s4 = 0U;
        }
    } else if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3537___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716937__DOT__s4 = 0x3f00U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716940__DOT__s4 = 0xf0aaU;
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716937__DOT__s4 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716940__DOT__s4 = 0U;
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716945__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8098___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8083___05F)
                ? 0xeaU : 0xffU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8083___05F)
                                     ? 0xeaU : 0xc0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716950__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8102___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8083___05F)
                ? 0xeaU : 0xc0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8083___05F)
                                     ? 0xeaU : 0xffU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716954__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8107___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8083___05F)
                ? 0xeaU : 0xc0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8083___05F)
                                     ? 0xeaU : 0xffU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024auto_15712__02eco 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15712__02eS__05b24__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15712__02eC__05b24__05d)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3663___05F)
                      ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719901__DOT__s1) 
                         >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719901__DOT__s1))));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716334__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7486___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7487___05F)
                ? 2U : 3U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7487___05F)
                               ? 2U : 0U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b21__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0401_li0401 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717966__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0374_li0374 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718085__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1468_li1468 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716334__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0401_li0401 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717966__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0374_li0374 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718085__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1468_li1468 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716334__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716339__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7492___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7487___05F)
                ? 2U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7487___05F)
                               ? 2U : 3U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b19__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0399_li0399 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717971__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0372_li0372 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718087__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1466_li1466 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716339__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0399_li0399 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717971__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0372_li0372 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718087__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1466_li1466 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716339__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716342__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7495___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7487___05F)
                ? 2U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7487___05F)
                               ? 2U : 3U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b18__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0398_li0398 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717973__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0371_li0371 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718088__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1465_li1465 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716342__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0398_li0398 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717973__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0371_li0371 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718088__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1465_li1465 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716342__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716346__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7499___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7487___05F)
                ? 2U : 3U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7487___05F)
                               ? 2U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1464_li1464 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b17__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716346__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716346__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716355__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7508___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7487___05F)
                ? 2U : 3U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7487___05F)
                               ? 2U : 0U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b14__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0394_li0394 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717989__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0367_li0367 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718092__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1461_li1461 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716355__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0394_li0394 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717989__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0367_li0367 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718092__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1461_li1461 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716355__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716365__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7518___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7487___05F)
                ? 2U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7487___05F)
                               ? 2U : 3U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b12__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0365_li0365 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718094__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0392_li0392 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717999__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1459_li1459 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716365__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0365_li0365 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718094__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0392_li0392 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717999__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1459_li1459 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716365__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716385__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7538___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7487___05F)
                ? 2U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7487___05F)
                               ? 2U : 3U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b8__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0388_li0388 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718021__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0361_li0361 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718098__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1455_li1455 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716385__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0388_li0388 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718021__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0361_li0361 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718098__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1455_li1455 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716385__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716402__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7555___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7487___05F)
                ? 2U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7487___05F)
                               ? 2U : 3U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b5__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0358_li0358 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718101__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0385_li0385 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718039__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1452_li1452 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716402__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0358_li0358 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718101__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0385_li0385 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718039__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1452_li1452 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716402__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716409__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7562___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7487___05F)
                ? 2U : 3U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7487___05F)
                               ? 2U : 0U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b4__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0384_li0384 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718048__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0357_li0357 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718102__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1451_li1451 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716409__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0384_li0384 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718048__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0357_li0357 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718102__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1451_li1451 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716409__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716416__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7569___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7487___05F)
                ? 2U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7487___05F)
                               ? 2U : 3U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b3__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0383_li0383 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718054__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0356_li0356 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718103__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1450_li1450 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716416__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0383_li0383 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718054__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0356_li0356 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718103__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1450_li1450 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716416__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716424__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7577___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7487___05F)
                ? 2U : 3U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7487___05F)
                               ? 2U : 0U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b2__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0382_li0382 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718064__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0355_li0355 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718104__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1449_li1449 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716424__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0382_li0382 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718064__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0355_li0355 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718104__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1449_li1449 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716424__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716430__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7583___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7487___05F)
                ? 2U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7487___05F)
                               ? 2U : 3U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716437__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7590___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7487___05F)
                ? 2U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7487___05F)
                               ? 2U : 3U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716351__DOT__s2 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7504___05F)
            ? 0xfU : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7487___05F)
                       ? 0xaU : 0xcU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716360__DOT__s2 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7513___05F)
            ? 0xfU : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7487___05F)
                       ? 0xaU : 0xcU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716391__DOT__s2 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7544___05F)
            ? 0xfU : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7487___05F)
                       ? 0xaU : 3U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716395__DOT__s2 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7487___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7548___05F)
                ? 0xaU : 0xfU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7548___05F)
                                   ? 3U : 0xfU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716370__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7522___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7487___05F)
                ? 0x8aU : 0xcfU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7487___05F)
                                     ? 0x8aU : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716375__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7527___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7487___05F)
                ? 0xeaU : 0xc0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7487___05F)
                                     ? 0xeaU : 0xffU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716348__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7501___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7487___05F)
                ? 0xff80U : 0xffffU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7487___05F)
                                         ? 0xff80U : 0x8080U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716380__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7533___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7487___05F)
                ? 0xf0f0U : 0xff88U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7487___05F)
                                         ? 0xf0f0U : 0xffffU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717051__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b20__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8203___05F)
                ? 3U : 2U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8203___05F)
                               ? 0U : 2U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717052__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b19__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8203___05F)
                ? 3U : 2U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8203___05F)
                               ? 0U : 2U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717053__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b18__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8203___05F)
                ? 3U : 2U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8203___05F)
                               ? 0U : 2U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717054__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b17__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8203___05F)
                ? 3U : 2U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8203___05F)
                               ? 0U : 2U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717055__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b16__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8203___05F)
                ? 3U : 2U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8203___05F)
                               ? 0U : 2U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717056__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b15__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8203___05F)
                ? 3U : 2U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8203___05F)
                               ? 0U : 2U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717057__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b14__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8203___05F)
                ? 3U : 2U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8203___05F)
                               ? 0U : 2U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717058__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b13__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8203___05F)
                ? 3U : 2U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8203___05F)
                               ? 0U : 2U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717059__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b12__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8203___05F)
                ? 3U : 2U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8203___05F)
                               ? 0U : 2U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717060__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b11__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8203___05F)
                ? 3U : 2U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8203___05F)
                               ? 0U : 2U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717061__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b10__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8203___05F)
                ? 3U : 2U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8203___05F)
                               ? 0U : 2U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717062__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b9__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8203___05F)
                ? 3U : 2U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8203___05F)
                               ? 0U : 2U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717063__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b8__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8203___05F)
                ? 3U : 2U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8203___05F)
                               ? 0U : 2U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717064__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b7__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8203___05F)
                ? 3U : 2U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8203___05F)
                               ? 0U : 2U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717065__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b6__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8203___05F)
                ? 3U : 2U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8203___05F)
                               ? 0U : 2U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717066__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b5__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8203___05F)
                ? 3U : 2U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8203___05F)
                               ? 0U : 2U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717067__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b4__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8203___05F)
                ? 3U : 2U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8203___05F)
                               ? 0U : 2U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717068__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b3__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8203___05F)
                ? 3U : 2U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8203___05F)
                               ? 0U : 2U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717069__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b2__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8203___05F)
                ? 3U : 2U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8203___05F)
                               ? 0U : 2U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717070__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b1__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8203___05F)
                ? 3U : 2U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8203___05F)
                               ? 0U : 2U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717071__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b0__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8203___05F)
                ? 3U : 2U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8203___05F)
                               ? 0U : 2U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716930__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8082___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716930__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716930__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716945__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8076___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716945__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716945__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8103___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716950__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716950__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716954__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716954__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716950__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716950__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716954__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716954__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716937__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8090___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716937__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716937__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716940__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3489___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716940__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716940__DOT__s4)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024auto_15712__02eco) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716508__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716508__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716591__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3598___05F)
                ? 0U : 0x5dU);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716508__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716508__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716591__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3598___05F)
                ? 0U : 0xdfU);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7614___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3681___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716460__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716460__DOT__s1)));
}
